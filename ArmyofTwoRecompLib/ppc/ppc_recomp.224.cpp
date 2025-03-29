#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830DAAB0"))) PPC_WEAK_FUNC(sub_830DAAB0);
PPC_FUNC_IMPL(__imp__sub_830DAAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e54
	ctx.lr = 0x830DAAB8;
	__savegprlr_23(ctx, base);
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r24,r10,-15738
	ctx.r24.s64 = ctx.r10.s64 + -15738;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,216
	ctx.r8.s64 = ctx.r1.s64 + 216;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r10,-12208
	ctx.r27.s64 = ctx.r10.s64 + -12208;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lbz r26,0(r27)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,126
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 126, ctx.xer);
	// bne cr6,0x830dab5c
	if (!ctx.cr6.eq) goto loc_830DAB5C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x830dab28
	goto loc_830DAB28;
loc_830DAB1C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
loc_830DAB28:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x830dabd0
	if (!ctx.cr6.gt) goto loc_830DABD0;
	// bne 0x830dab1c
	if (!ctx.cr0.eq) goto loc_830DAB1C;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x830dabd0
	if (!ctx.cr6.lt) goto loc_830DABD0;
	// lbz r11,-1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + -1);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x830dabd0
	if (ctx.cr6.lt) goto loc_830DABD0;
	// stb r26,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r26.u8);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x830dabd0
	goto loc_830DABD0;
loc_830DAB5C:
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// bne cr6,0x830dabd0
	if (!ctx.cr6.eq) goto loc_830DABD0;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830dabcc
	if (ctx.cr0.eq) goto loc_830DABCC;
loc_830DAB70:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x830daba8
	if (!ctx.cr6.gt) goto loc_830DABA8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830dab70
	if (!ctx.cr0.eq) goto loc_830DAB70;
	// b 0x830daba8
	goto loc_830DABA8;
loc_830DAB90:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgt cr6,0x830dabb0
	if (ctx.cr6.gt) goto loc_830DABB0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_830DABA8:
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x830dab90
	if (ctx.cr6.lt) goto loc_830DAB90;
loc_830DABB0:
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x830dabcc
	if (ctx.cr6.eq) goto loc_830DABCC;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x830dabd0
	if (!ctx.cr6.lt) goto loc_830DABD0;
	// lbz r11,-1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + -1);
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x830dabd0
	if (!ctx.cr6.eq) goto loc_830DABD0;
loc_830DABCC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_830DABD0:
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr. r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830dae4c
	if (ctx.cr0.eq) goto loc_830DAE4C;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830DABE4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x830dae4c
	if (!ctx.cr6.gt) goto loc_830DAE4C;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x830dac24
	if (ctx.cr6.gt) goto loc_830DAC24;
	// stb r26,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r26.u8);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x830dac14
	goto loc_830DAC14;
loc_830DAC08:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x830dae40
	if (ctx.cr6.gt) goto loc_830DAE40;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_830DAC14:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830dac08
	if (!ctx.cr0.eq) goto loc_830DAC08;
	// b 0x830dae40
	goto loc_830DAE40;
loc_830DAC24:
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bne cr6,0x830dac54
	if (!ctx.cr6.eq) goto loc_830DAC54;
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// addi r5,r27,40
	ctx.r5.s64 = ctx.r27.s64 + 40;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x830e84a0
	ctx.lr = 0x830DAC4C;
	sub_830E84A0(ctx, base);
	// lbz r26,0(r27)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// b 0x830dae38
	goto loc_830DAE38;
loc_830DAC54:
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x830dac6c
	if (ctx.cr6.eq) goto loc_830DAC6C;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x830dae40
	goto loc_830DAE40;
loc_830DAC6C:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830dae40
	if (ctx.cr0.eq) goto loc_830DAE40;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r25,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r25.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r11,115
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 115, ctx.xer);
	// bne cr6,0x830dacb4
	if (!ctx.cr6.eq) goto loc_830DACB4;
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x830da8d0
	ctx.lr = 0x830DACB0;
	sub_830DA8D0(ctx, base);
	// b 0x830dae30
	goto loc_830DAE30;
loc_830DACB4:
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bne cr6,0x830dace0
	if (!ctx.cr6.eq) goto loc_830DACE0;
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x830d8300
	ctx.lr = 0x830DACDC;
	sub_830D8300(ctx, base);
	// b 0x830dae30
	goto loc_830DAE30;
loc_830DACE0:
	// cmplwi cr6,r11,116
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 116, ctx.xer);
	// bne cr6,0x830dad0c
	if (!ctx.cr6.eq) goto loc_830DAD0C;
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x830d89d0
	ctx.lr = 0x830DAD08;
	sub_830D89D0(ctx, base);
	// b 0x830dae30
	goto loc_830DAE30;
loc_830DAD0C:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// bne cr6,0x830dad38
	if (!ctx.cr6.eq) goto loc_830DAD38;
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x830d8808
	ctx.lr = 0x830DAD34;
	sub_830D8808(ctx, base);
	// b 0x830dae30
	goto loc_830DAE30;
loc_830DAD38:
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// bne cr6,0x830dad64
	if (!ctx.cr6.eq) goto loc_830DAD64;
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x830d86b0
	ctx.lr = 0x830DAD60;
	sub_830D86B0(ctx, base);
	// b 0x830dae30
	goto loc_830DAE30;
loc_830DAD64:
	// cmplwi cr6,r11,101
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 101, ctx.xer);
	// bne cr6,0x830dad94
	if (!ctx.cr6.eq) goto loc_830DAD94;
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x830d9690
	ctx.lr = 0x830DAD8C;
	sub_830D9690(ctx, base);
	// lbz r26,0(r27)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// b 0x830dae30
	goto loc_830DAE30;
loc_830DAD94:
	// cmplwi cr6,r11,105
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 105, ctx.xer);
	// bne cr6,0x830dadb0
	if (!ctx.cr6.eq) goto loc_830DADB0;
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r24,-4(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// b 0x830dae40
	goto loc_830DAE40;
loc_830DADB0:
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// bne cr6,0x830dade8
	if (!ctx.cr6.eq) goto loc_830DADE8;
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x830d8020
	ctx.lr = 0x830DADD0;
	sub_830D8020(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830da7a8
	ctx.lr = 0x830DADE4;
	sub_830DA7A8(ctx, base);
	// b 0x830dae30
	goto loc_830DAE30;
loc_830DADE8:
	// cmplwi cr6,r11,114
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 114, ctx.xer);
	// bne cr6,0x830dae40
	if (!ctx.cr6.eq) goto loc_830DAE40;
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830dae40
	if (ctx.cr0.eq) goto loc_830DAE40;
loc_830DAE0C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x830dae40
	if (!ctx.cr6.gt) goto loc_830DAE40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830dae0c
	if (!ctx.cr0.eq) goto loc_830DAE0C;
loc_830DAE30:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x830dae40
	if (!ctx.cr6.gt) goto loc_830DAE40;
loc_830DAE38:
	// subf r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_830DAE40:
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr. r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830dabe4
	if (!ctx.cr0.eq) goto loc_830DABE4;
loc_830DAE4C:
	// extsb r11,r26
	ctx.r11.s64 = ctx.r26.s8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x830dae74
	if (!ctx.cr6.eq) goto loc_830DAE74;
	// cmpw cr6,r23,r30
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x830dae74
	if (ctx.cr6.eq) goto loc_830DAE74;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x830dae74
	if (!ctx.cr6.gt) goto loc_830DAE74;
	// stb r26,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r26.u8);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830DAE74:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x830dae80
	if (!ctx.cr6.gt) goto loc_830DAE80;
	// stb r25,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r25.u8);
loc_830DAE80:
	// subf r3,r30,r23
	ctx.r3.s64 = ctx.r23.s64 - ctx.r30.s64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82e28ea4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DAE90"))) PPC_WEAK_FUNC(sub_830DAE90);
PPC_FUNC_IMPL(__imp__sub_830DAE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830DAE98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,108(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x830daec0
	if (!ctx.cr0.eq) goto loc_830DAEC0;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// b 0x830daf64
	goto loc_830DAF64;
loc_830DAEC0:
	// lwz r8,112(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x830daf10
	if (!ctx.cr0.gt) goto loc_830DAF10;
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_830DAED8:
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r5,9(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r4,10(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r11,11(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x830daed8
	if (ctx.cr6.lt) goto loc_830DAED8;
loc_830DAF10:
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x830daf1c
	if (!ctx.cr6.gt) goto loc_830DAF1C;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_830DAF1C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x830daf4c
	if (!ctx.cr6.gt) goto loc_830DAF4C;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// subf r5,r31,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r31.s64;
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830DAF34;
	sub_82E28FD0(ctx, base);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// stw r10,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r10.u32);
loc_830DAF4C:
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x830daf64
	if (!ctx.cr6.gt) goto loc_830DAF64;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_830DAF64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DAF70"))) PPC_WEAK_FUNC(sub_830DAF70);
PPC_FUNC_IMPL(__imp__sub_830DAF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830DAF78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830e88c8
	ctx.lr = 0x830DAF84;
	sub_830E88C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r30,382
	ctx.r11.s64 = ctx.r30.s64 + 382;
	// lis r4,28769
	ctx.r4.s64 = 1885405184;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r4,r4,29289
	ctx.r4.u64 = ctx.r4.u64 | 29289;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82217d58
	ctx.lr = 0x830DAFA0;
	sub_82217D58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830dafb0
	if (!ctx.cr0.eq) goto loc_830DAFB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830daff4
	goto loc_830DAFF4;
loc_830DAFB0:
	// li r5,764
	ctx.r5.s64 = 764;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e29500
	ctx.lr = 0x830DAFC0;
	sub_82E29500(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r10,r31,760
	ctx.r10.s64 = ctx.r31.s64 + 760;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r9,r11,760
	ctx.r9.s64 = ctx.r11.s64 + 760;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// sth r11,150(r31)
	PPC_STORE_U16(ctx.r31.u32 + 150, ctx.r11.u16);
loc_830DAFF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DB000"))) PPC_WEAK_FUNC(sub_830DB000);
PPC_FUNC_IMPL(__imp__sub_830DB000) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830db024
	if (ctx.cr0.eq) goto loc_830DB024;
	// bl 0x830eaa10
	ctx.lr = 0x830DB024;
	sub_830EAA10(ctx, base);
loc_830DB024:
	// lis r4,28769
	ctx.r4.s64 = 1885405184;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,29289
	ctx.r4.u64 = ctx.r4.u64 | 29289;
	// bl 0x82217db8
	ctx.lr = 0x830DB038;
	sub_82217DB8(ctx, base);
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

__attribute__((alias("__imp__sub_830DB050"))) PPC_WEAK_FUNC(sub_830DB050);
PPC_FUNC_IMPL(__imp__sub_830DB050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,24932
	ctx.r11.s64 = 1633943552;
	// ori r11,r11,25714
	ctx.r11.u64 = ctx.r11.u64 | 25714;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830db078
	if (!ctx.cr6.eq) goto loc_830DB078;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x830e1bd8
	ctx.lr = 0x830DB074;
	sub_830E1BD8(ctx, base);
	// b 0x830db178
	goto loc_830DB178;
loc_830DB078:
	// lis r11,25458
	ctx.r11.s64 = 1668415488;
	// ori r11,r11,31088
	ctx.r11.u64 = ctx.r11.u64 | 31088;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830db090
	if (!ctx.cr6.eq) goto loc_830DB090;
	// lwz r3,236(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// b 0x830db178
	goto loc_830DB178;
loc_830DB090:
	// lis r11,26978
	ctx.r11.s64 = 1768030208;
	// ori r11,r11,30054
	ctx.r11.u64 = ctx.r11.u64 | 30054;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830db0c0
	if (!ctx.cr6.eq) goto loc_830DB0C0;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830db0b8
	if (ctx.cr6.eq) goto loc_830DB0B8;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// b 0x830db108
	goto loc_830DB108;
loc_830DB0B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830db178
	goto loc_830DB178;
loc_830DB0C0:
	// lis r11,27745
	ctx.r11.s64 = 1818296320;
	// ori r11,r11,25714
	ctx.r11.u64 = ctx.r11.u64 | 25714;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830db0d8
	if (!ctx.cr6.eq) goto loc_830DB0D8;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x830db178
	goto loc_830DB178;
loc_830DB0D8:
	// lis r11,27760
	ctx.r11.s64 = 1819279360;
	// ori r11,r11,29300
	ctx.r11.u64 = ctx.r11.u64 | 29300;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830db0f0
	if (!ctx.cr6.eq) goto loc_830DB0F0;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x830db178
	goto loc_830DB178;
loc_830DB0F0:
	// lis r11,28514
	ctx.r11.s64 = 1868693504;
	// ori r11,r11,30054
	ctx.r11.u64 = ctx.r11.u64 | 30054;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830db110
	if (!ctx.cr6.eq) goto loc_830DB110;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
loc_830DB108:
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x830db178
	goto loc_830DB178;
loc_830DB110:
	// lis r11,28783
	ctx.r11.s64 = 1886322688;
	// ori r11,r11,29300
	ctx.r11.u64 = ctx.r11.u64 | 29300;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830db130
	if (!ctx.cr6.eq) goto loc_830DB130;
	// lhz r3,10(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// bl 0x830e1bc0
	ctx.lr = 0x830DB128;
	sub_830E1BC0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x830db178
	goto loc_830DB178;
loc_830DB130:
	// lis r11,29541
	ctx.r11.s64 = 1935998976;
	// ori r11,r11,25461
	ctx.r11.u64 = ctx.r11.u64 | 25461;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830db148
	if (!ctx.cr6.eq) goto loc_830DB148;
	// lha r3,148(r3)
	ctx.r3.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 148));
	// b 0x830db178
	goto loc_830DB178;
loc_830DB148:
	// lis r11,29556
	ctx.r11.s64 = 1936982016;
	// ori r11,r11,24948
	ctx.r11.u64 = ctx.r11.u64 | 24948;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830db160
	if (!ctx.cr6.eq) goto loc_830DB160;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x830db178
	goto loc_830DB178;
loc_830DB160:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830db174
	if (ctx.cr0.eq) goto loc_830DB174;
	// bl 0x830ebcc0
	ctx.lr = 0x830DB170;
	sub_830EBCC0(ctx, base);
	// b 0x830db178
	goto loc_830DB178;
loc_830DB174:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_830DB178:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DB188"))) PPC_WEAK_FUNC(sub_830DB188);
PPC_FUNC_IMPL(__imp__sub_830DB188) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830db1b8
	if (ctx.cr0.eq) goto loc_830DB1B8;
	// bl 0x830eaa10
	ctx.lr = 0x830DB1B4;
	sub_830EAA10(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_830DB1B8:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_830DB1E8"))) PPC_WEAK_FUNC(sub_830DB1E8);
PPC_FUNC_IMPL(__imp__sub_830DB1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830DB1F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830db210
	if (ctx.cr6.eq) goto loc_830DB210;
loc_830DB208:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830db2b4
	goto loc_830DB2B4;
loc_830DB210:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// bl 0x830e1b98
	ctx.lr = 0x830DB240;
	sub_830E1B98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi r3,r28,16
	ctx.r3.u64 = ctx.r28.u32 & 0xFFFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x830e1b80
	ctx.lr = 0x830DB250;
	sub_830E1B80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
	// bl 0x830e8878
	ctx.lr = 0x830DB260;
	sub_830E8878(ctx, base);
	// bl 0x830ea998
	ctx.lr = 0x830DB264;
	sub_830EA998(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x830e88a8
	ctx.lr = 0x830DB26C;
	sub_830E88A8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830db208
	if (ctx.cr0.eq) goto loc_830DB208;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830eaad8
	ctx.lr = 0x830DB284;
	sub_830EAAD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830db208
	if (ctx.cr0.lt) goto loc_830DB208;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830eace8
	ctx.lr = 0x830DB298;
	sub_830EACE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830db208
	if (ctx.cr0.lt) goto loc_830DB208;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r29,150(r31)
	PPC_STORE_U16(ctx.r31.u32 + 150, ctx.r29.u16);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830DB2B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DB2C0"))) PPC_WEAK_FUNC(sub_830DB2C0);
PPC_FUNC_IMPL(__imp__sub_830DB2C0) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830db2f0
	if (ctx.cr0.eq) goto loc_830DB2F0;
	// bl 0x830eaa10
	ctx.lr = 0x830DB2EC;
	sub_830EAA10(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_830DB2F0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_830DB320"))) PPC_WEAK_FUNC(sub_830DB320);
PPC_FUNC_IMPL(__imp__sub_830DB320) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r11,148(r3)
	PPC_STORE_U16(ctx.r3.u32 + 148, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DB338"))) PPC_WEAK_FUNC(sub_830DB338);
PPC_FUNC_IMPL(__imp__sub_830DB338) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830db364
	if (ctx.cr6.eq) goto loc_830DB364;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x830db364
	if (ctx.cr6.eq) goto loc_830DB364;
	// cmplwi cr6,r5,84
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 84, ctx.xer);
	// bne cr6,0x830db364
	if (!ctx.cr6.eq) goto loc_830DB364;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r11,152
	ctx.r3.s64 = ctx.r11.s64 + 152;
	// sth r10,150(r11)
	PPC_STORE_U16(ctx.r11.u32 + 150, ctx.r10.u16);
	// b 0x82e28fd0
	sub_82E28FD0(ctx, base);
	return;
loc_830DB364:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,236
	ctx.r3.s64 = ctx.r11.s64 + 236;
	// sth r10,150(r11)
	PPC_STORE_U16(ctx.r11.u32 + 150, ctx.r10.u16);
	// b 0x830ec010
	sub_830EC010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DB378"))) PPC_WEAK_FUNC(sub_830DB378);
PPC_FUNC_IMPL(__imp__sub_830DB378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x830DB380;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,12
	ctx.r29.s64 = 12;
	// li r30,255
	ctx.r30.s64 = 255;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x830db3f4
	if (!ctx.cr6.eq) goto loc_830DB3F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830db3f4
	if (!ctx.cr6.eq) goto loc_830DB3F4;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r10,254
	ctx.r10.s64 = 254;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// stb r30,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r30.u8);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// stb r10,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stb r27,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r27.u8);
	// stb r27,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r27.u8);
	// stb r27,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r27.u8);
	// stb r29,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r29.u8);
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
loc_830DB3F4:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x830db418
	if (!ctx.cr6.eq) goto loc_830DB418;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x830db418
	if (!ctx.cr6.gt) goto loc_830DB418;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_830DB418:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r26,3
	ctx.r26.s64 = 3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830db49c
	if (!ctx.cr6.eq) goto loc_830DB49C;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x830eaa58
	ctx.lr = 0x830DB444;
	sub_830EAA58(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x830db860
	if (ctx.cr0.eq) goto loc_830DB860;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830eaa10
	ctx.lr = 0x830DB454;
	sub_830EAA10(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r26,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r26.u32);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// stb r30,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r30.u8);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// stb r30,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r30.u8);
	// stb r30,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r30.u8);
	// stb r30,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r30.u8);
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// stb r27,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r27.u8);
	// stb r27,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r27.u8);
	// stb r27,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r27.u8);
	// stb r29,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r29.u8);
loc_830DB49C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830db62c
	if (!ctx.cr6.eq) goto loc_830DB62C;
	// bl 0x830df1b8
	ctx.lr = 0x830DB4AC;
	sub_830DF1B8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x830db540
	if (!ctx.cr6.gt) goto loc_830DB540;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830db4c8
	if (ctx.cr0.eq) goto loc_830DB4C8;
	// bl 0x830eaa10
	ctx.lr = 0x830DB4C8;
	sub_830EAA10(ctx, base);
loc_830DB4C8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x830e8878
	ctx.lr = 0x830DB4D0;
	sub_830E8878(ctx, base);
	// bl 0x830ea998
	ctx.lr = 0x830DB4D4;
	sub_830EA998(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x830e88a8
	ctx.lr = 0x830DB4DC;
	sub_830E88A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830db860
	if (ctx.cr6.eq) goto loc_830DB860;
	// lhz r3,10(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// bl 0x830e1bc0
	ctx.lr = 0x830DB4F0;
	sub_830E1BC0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x830e1bd8
	ctx.lr = 0x830DB4FC;
	sub_830E1BD8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r7,r28,16
	ctx.r7.u64 = ctx.r28.u32 & 0xFFFF;
	// lha r11,148(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 148));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// bl 0x830eab38
	ctx.lr = 0x830DB520;
	sub_830EAB38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830db860
	if (ctx.cr0.lt) goto loc_830DB860;
	// bl 0x830df1b8
	ctx.lr = 0x830DB52C;
	sub_830DF1B8(ctx, base);
	// addi r11,r3,30000
	ctx.r11.s64 = ctx.r3.s64 + 30000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x830ec010
	ctx.lr = 0x830DB540;
	sub_830EC010(ctx, base);
loc_830DB540:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830db860
	if (ctx.cr0.eq) goto loc_830DB860;
	// bl 0x830eb620
	ctx.lr = 0x830DB550;
	sub_830EB620(ctx, base);
	// lis r4,29556
	ctx.r4.s64 = 1936982016;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,24948
	ctx.r4.u64 = ctx.r4.u64 | 24948;
	// bl 0x830ebcc0
	ctx.lr = 0x830DB568;
	sub_830EBCC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830db57c
	if (!ctx.cr0.lt) goto loc_830DB57C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830db188
	ctx.lr = 0x830DB578;
	sub_830DB188(ctx, base);
	// b 0x830db860
	goto loc_830DB860;
loc_830DB57C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x830db860
	if (ctx.cr6.eq) goto loc_830DB860;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830db5a8
	if (!ctx.cr6.eq) goto loc_830DB5A8;
	// lis r4,28773
	ctx.r4.s64 = 1885667328;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// ori r4,r4,25970
	ctx.r4.u64 = ctx.r4.u64 | 25970;
	// bl 0x830ebcc0
	ctx.lr = 0x830DB5A8;
	sub_830EBCC0(ctx, base);
loc_830DB5A8:
	// lis r4,25193
	ctx.r4.s64 = 1651048448;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,28260
	ctx.r4.u64 = ctx.r4.u64 | 28260;
	// bl 0x830ebcc0
	ctx.lr = 0x830DB5C0;
	sub_830EBCC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830db5e8
	if (!ctx.cr0.eq) goto loc_830DB5E8;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x830e1bd8
	ctx.lr = 0x830DB5D0;
	sub_830E1BD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r3,98(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x830e1bc0
	ctx.lr = 0x830DB5E0;
	sub_830E1BC0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_830DB5E8:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r26,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r26.u32);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// stb r30,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r30.u8);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// stb r30,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r30.u8);
	// stb r30,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r30.u8);
	// stb r30,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r30.u8);
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// stb r27,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r27.u8);
	// stb r27,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r27.u8);
	// stb r27,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r27.u8);
	// stb r29,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r29.u8);
loc_830DB62C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830db860
	if (ctx.cr0.eq) goto loc_830DB860;
	// bl 0x830eb620
	ctx.lr = 0x830DB63C;
	sub_830EB620(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x830db6b0
	if (!ctx.cr0.gt) goto loc_830DB6B0;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x830db6b0
	if (ctx.cr6.eq) goto loc_830DB6B0;
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x830ebab8
	ctx.lr = 0x830DB668;
	sub_830EBAB8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830db684
	if (!ctx.cr0.lt) goto loc_830DB684;
loc_830DB674:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830eaa10
	ctx.lr = 0x830DB67C;
	sub_830EAA10(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x830db860
	goto loc_830DB860;
loc_830DB684:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x830db698
	if (!ctx.cr6.gt) goto loc_830DB698;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_830DB698:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x830db6b0
	if (!ctx.cr6.eq) goto loc_830DB6B0;
	// stw r27,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r27.u32);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
loc_830DB6B0:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830db794
	if (!ctx.cr6.eq) goto loc_830DB794;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subfic r5,r11,12
	ctx.xer.ca = ctx.r11.u32 <= 12;
	ctx.r5.s64 = 12 - ctx.r11.s64;
	// addi r4,r10,136
	ctx.r4.s64 = ctx.r10.s64 + 136;
	// bl 0x830ebb90
	ctx.lr = 0x830DB6D4;
	sub_830EBB90(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830db674
	if (ctx.cr0.lt) goto loc_830DB674;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x830db6f4
	if (!ctx.cr6.gt) goto loc_830DB6F4;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_830DB6F4:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x830db794
	if (!ctx.cr6.eq) goto loc_830DB794;
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830ec180
	ctx.lr = 0x830DB714;
	sub_830EC180(ctx, base);
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// lbz r10,9(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lbz r8,11(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11);
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
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// blt cr6,0x830db674
	if (ctx.cr6.lt) goto loc_830DB674;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x830db674
	if (ctx.cr6.gt) goto loc_830DB674;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82e28fd0
	ctx.lr = 0x830DB764;
	sub_82E28FD0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x830db794
	if (!ctx.cr6.eq) goto loc_830DB794;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x830db794
	if (!ctx.cr0.gt) goto loc_830DB794;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830db794
	if (!ctx.cr6.eq) goto loc_830DB794;
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r27,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r27.u32);
loc_830DB794:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x830db860
	if (!ctx.cr0.gt) goto loc_830DB860;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x830db860
	if (!ctx.cr6.lt) goto loc_830DB860;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x830ebb90
	ctx.lr = 0x830DB7C0;
	sub_830EBB90(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830db674
	if (ctx.cr0.lt) goto loc_830DB674;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x830db7e0
	if (!ctx.cr6.gt) goto loc_830DB7E0;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_830DB7E0:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830db834
	if (!ctx.cr6.eq) goto loc_830DB834;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r30,r31,236
	ctx.r30.s64 = ctx.r31.s64 + 236;
	// addi r5,r3,-12
	ctx.r5.s64 = ctx.r3.s64 + -12;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ec180
	ctx.lr = 0x830DB808;
	sub_830EC180(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x830ec1c8
	ctx.lr = 0x830DB818;
	sub_830EC1C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830db674
	if (ctx.cr0.lt) goto loc_830DB674;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x830ec290
	ctx.lr = 0x830DB82C;
	sub_830EC290(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
loc_830DB834:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830db860
	if (!ctx.cr6.eq) goto loc_830DB860;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x830db860
	if (!ctx.cr0.gt) goto loc_830DB860;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830db860
	if (!ctx.cr6.eq) goto loc_830DB860;
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r27,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r27.u32);
loc_830DB860:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DB868"))) PPC_WEAK_FUNC(sub_830DB868);
PPC_FUNC_IMPL(__imp__sub_830DB868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x830DB870;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x830db378
	ctx.lr = 0x830DB88C;
	sub_830DB378(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x830db8bc
	if (!ctx.cr6.lt) goto loc_830DB8BC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830DB89C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830db89c
	if (!ctx.cr6.eq) goto loc_830DB89C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_830DB8BC:
	// addi r26,r29,236
	ctx.r26.s64 = ctx.r29.s64 + 236;
	// addi r4,r28,12
	ctx.r4.s64 = ctx.r28.s64 + 12;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830ec2c0
	ctx.lr = 0x830DB8CC;
	sub_830EC2C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830dae90
	ctx.lr = 0x830DB8DC;
	sub_830DAE90(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x830db8ec
	if (!ctx.cr6.lt) goto loc_830DB8EC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830db9c0
	goto loc_830DB9C0;
loc_830DB8EC:
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r10,108(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x830db910
	if (!ctx.cr6.gt) goto loc_830DB910;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82e28fd0
	ctx.lr = 0x830DB910;
	sub_82E28FD0(ctx, base);
loc_830DB910:
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// srawi r10,r30,24
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 24;
	// srawi r9,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 16;
	// srawi r8,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r30.s32 >> 8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi r7,r27,24
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFFFF) != 0);
	ctx.r7.s64 = ctx.r27.s32 >> 24;
	// srawi r6,r27,16
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r27.s32 >> 16;
	// srawi r5,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r27.s32 >> 8;
	// srawi r4,r25,24
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFFFFFF) != 0);
	ctx.r4.s64 = ctx.r25.s32 >> 24;
	// srawi r3,r25,16
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r25.s32 >> 16;
	// stw r11,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r11.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stb r8,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r8.u8);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stb r5,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r5.u8);
	// srawi r28,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r25.s32 >> 8;
	// stb r9,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r9.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r30,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r7,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r7.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r27,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r27.u8);
	// stb r8,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r8.u8);
	// stb r6,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r6.u8);
	// stb r28,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r28.u8);
	// stb r25,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r25.u8);
	// bl 0x830ec2d8
	ctx.lr = 0x830DB98C;
	sub_830EC2D8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830ec358
	ctx.lr = 0x830DB99C;
	sub_830EC358(ctx, base);
	// lis r11,16500
	ctx.r11.s64 = 1081344000;
	// ori r11,r11,26979
	ctx.r11.u64 = ctx.r11.u64 | 26979;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830db9b4
	if (!ctx.cr6.eq) goto loc_830DB9B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,150(r29)
	PPC_STORE_U16(ctx.r29.u32 + 150, ctx.r11.u16);
loc_830DB9B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830db378
	ctx.lr = 0x830DB9BC;
	sub_830DB378(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DB9C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DB9C8"))) PPC_WEAK_FUNC(sub_830DB9C8);
PPC_FUNC_IMPL(__imp__sub_830DB9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830DB9D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830db9fc
	if (ctx.cr0.eq) goto loc_830DB9FC;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x830dba34
	if (ctx.cr6.eq) goto loc_830DBA34;
loc_830DB9FC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x830dba14
	if (!ctx.cr6.eq) goto loc_830DBA14;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x830dba14
	if (!ctx.cr6.eq) goto loc_830DBA14;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830dbad4
	if (ctx.cr6.eq) goto loc_830DBAD4;
loc_830DBA14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830db378
	ctx.lr = 0x830DBA1C;
	sub_830DB378(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830dbad4
	if (ctx.cr0.eq) goto loc_830DBAD4;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dbad4
	if (!ctx.cr6.eq) goto loc_830DBAD4;
loc_830DBA34:
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bge cr6,0x830dba54
	if (!ctx.cr6.lt) goto loc_830DBA54;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r11,r11,-15737
	ctx.r11.s64 = ctx.r11.s64 + -15737;
	// b 0x830dba5c
	goto loc_830DBA5C;
loc_830DBA54:
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
loc_830DBA5C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830dba90
	if (ctx.cr6.eq) goto loc_830DBA90;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r6,3(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_830DBA90:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830dbac4
	if (ctx.cr6.eq) goto loc_830DBAC4;
	// lbz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,6(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r10,7(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_830DBAC4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830dbad8
	if (ctx.cr6.eq) goto loc_830DBAD8;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x830dbad8
	goto loc_830DBAD8;
loc_830DBAD4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_830DBAD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DBAE0"))) PPC_WEAK_FUNC(sub_830DBAE0);
PPC_FUNC_IMPL(__imp__sub_830DBAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830DBAE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x830db9c8
	ctx.lr = 0x830DBB00;
	sub_830DB9C8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x830dbb3c
	if (ctx.cr0.lt) goto loc_830DBB3C;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x830dbb14
	if (!ctx.cr6.gt) goto loc_830DBB14;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_830DBB14:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830dbb30
	if (ctx.cr6.eq) goto loc_830DBB30;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82e28fd0
	ctx.lr = 0x830DBB30;
	sub_82E28FD0(ctx, base);
loc_830DBB30:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_830DBB3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DBB48"))) PPC_WEAK_FUNC(sub_830DBB48);
PPC_FUNC_IMPL(__imp__sub_830DBB48) {
	PPC_FUNC_PROLOGUE();
	// b 0x830df1b8
	sub_830DF1B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DBB50"))) PPC_WEAK_FUNC(sub_830DBB50);
PPC_FUNC_IMPL(__imp__sub_830DBB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x830DBB58;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830dbb7c
	if (ctx.cr6.eq) goto loc_830DBB7C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830dbc44
	goto loc_830DBC44;
loc_830DBB7C:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// sth r27,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r27.u16);
	// bl 0x830e1b98
	ctx.lr = 0x830DBBA8;
	sub_830E1B98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi r3,r28,16
	ctx.r3.u64 = ctx.r28.u32 & 0xFFFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x830e1b80
	ctx.lr = 0x830DBBB8;
	sub_830E1B80(ctx, base);
	// sth r3,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r3.u16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// beq cr6,0x830dbbd8
	if (ctx.cr6.eq) goto loc_830DBBD8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830e8700
	ctx.lr = 0x830DBBD4;
	sub_830E8700(ctx, base);
	// b 0x830dbbe0
	goto loc_830DBBE0;
loc_830DBBD8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e29500
	ctx.lr = 0x830DBBE0;
	sub_82E29500(ctx, base);
loc_830DBBE0:
	// lhz r11,150(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 150);
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r30,148(r31)
	PPC_STORE_U16(ctx.r31.u32 + 148, ctx.r30.u16);
	// beq cr6,0x830dbc40
	if (ctx.cr6.eq) goto loc_830DBC40;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x830ebfa8
	ctx.lr = 0x830DBC08;
	sub_830EBFA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x830dbc3c
	if (!ctx.cr0.gt) goto loc_830DBC3C;
	// lis r4,16244
	ctx.r4.s64 = 1064566784;
	// li r7,52
	ctx.r7.s64 = 52;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,26979
	ctx.r4.u64 = ctx.r4.u64 | 26979;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830db868
	ctx.lr = 0x830DBC2C;
	sub_830DB868(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x830ec010
	ctx.lr = 0x830DBC38;
	sub_830EC010(ctx, base);
	// b 0x830dbc40
	goto loc_830DBC40;
loc_830DBC3C:
	// sth r30,150(r31)
	PPC_STORE_U16(ctx.r31.u32 + 150, ctx.r30.u16);
loc_830DBC40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DBC44:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DBC50"))) PPC_WEAK_FUNC(sub_830DBC50);
PPC_FUNC_IMPL(__imp__sub_830DBC50) {
	PPC_FUNC_PROLOGUE();
	// cmpld cr6,r3,r4
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r4.u64, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DBC68"))) PPC_WEAK_FUNC(sub_830DBC68);
PPC_FUNC_IMPL(__imp__sub_830DBC68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1502
	ctx.r3.s64 = 1502;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DBC70"))) PPC_WEAK_FUNC(sub_830DBC70);
PPC_FUNC_IMPL(__imp__sub_830DBC70) {
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
	// bne cr6,0x830dbcb4
	if (!ctx.cr6.eq) goto loc_830DBCB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,394(r3)
	PPC_STORE_U8(ctx.r3.u32 + 394, ctx.r10.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
loc_830DBCB4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c19ec0
	ctx.lr = 0x830DBCBC;
	sub_82C19EC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830dbcd0
	if (ctx.cr0.eq) goto loc_830DBCD0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x830dbcd4
	goto loc_830DBCD4;
loc_830DBCD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DBCD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DBCE8"))) PPC_WEAK_FUNC(sub_830DBCE8);
PPC_FUNC_IMPL(__imp__sub_830DBCE8) {
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
	// beq 0x830dbd30
	if (ctx.cr0.eq) goto loc_830DBD30;
	// bl 0x82c1a068
	ctx.lr = 0x830DBD14;
	sub_82C1A068(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830dbd30
	if (ctx.cr0.eq) goto loc_830DBD30;
loc_830DBD1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,11113
	ctx.r3.s64 = 728301568;
	// ori r3,r3,29552
	ctx.r3.u64 = ctx.r3.u64 | 29552;
	// stb r11,395(r30)
	PPC_STORE_U8(ctx.r30.u32 + 395, ctx.r11.u8);
	// b 0x830dbddc
	goto loc_830DBDDC;
loc_830DBD30:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x830dbd44
	if (!ctx.cr6.eq) goto loc_830DBD44;
	// lis r3,32361
	ctx.r3.s64 = 2120810496;
loc_830DBD3C:
	// ori r3,r3,28265
	ctx.r3.u64 = ctx.r3.u64 | 28265;
	// b 0x830dbddc
	goto loc_830DBDDC;
loc_830DBD44:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830dbd54
	if (ctx.cr0.eq) goto loc_830DBD54;
	// lis r3,11625
	ctx.r3.s64 = 761856000;
	// b 0x830dbd3c
	goto loc_830DBD3C;
loc_830DBD54:
	// rlwinm. r11,r31,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830dbd68
	if (ctx.cr0.eq) goto loc_830DBD68;
	// lis r3,11636
	ctx.r3.s64 = 762576896;
	// ori r3,r3,29282
	ctx.r3.u64 = ctx.r3.u64 | 29282;
	// b 0x830dbddc
	goto loc_830DBDDC;
loc_830DBD68:
	// rlwinm. r11,r31,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x60;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830dbd1c
	if (!ctx.cr0.eq) goto loc_830DBD1C;
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830dbd84
	if (ctx.cr0.eq) goto loc_830DBD84;
	// lis r3,32357
	ctx.r3.s64 = 2120548352;
	// ori r3,r3,29800
	ctx.r3.u64 = ctx.r3.u64 | 29800;
	// b 0x830dbddc
	goto loc_830DBDDC;
loc_830DBD84:
	// rlwinm. r11,r31,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830dbd98
	if (ctx.cr0.eq) goto loc_830DBD98;
	// lis r3,32356
	ctx.r3.s64 = 2120482816;
	// ori r3,r3,28275
	ctx.r3.u64 = ctx.r3.u64 | 28275;
	// b 0x830dbddc
	goto loc_830DBDDC;
loc_830DBD98:
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830dbdac
	if (ctx.cr0.eq) goto loc_830DBDAC;
	// lis r3,32371
	ctx.r3.s64 = 2121465856;
	// ori r3,r3,29793
	ctx.r3.u64 = ctx.r3.u64 | 29793;
	// b 0x830dbddc
	goto loc_830DBDDC;
loc_830DBDAC:
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830dbdc0
	if (ctx.cr0.eq) goto loc_830DBDC0;
	// lis r3,32356
	ctx.r3.s64 = 2120482816;
	// ori r3,r3,26736
	ctx.r3.u64 = ctx.r3.u64 | 26736;
	// b 0x830dbddc
	goto loc_830DBDDC;
loc_830DBDC0:
	// rlwinm. r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830dbdd4
	if (ctx.cr0.eq) goto loc_830DBDD4;
	// lis r3,32368
	ctx.r3.s64 = 2121269248;
	// ori r3,r3,28784
	ctx.r3.u64 = ctx.r3.u64 | 28784;
	// b 0x830dbddc
	goto loc_830DBDDC;
loc_830DBDD4:
	// lis r3,16191
	ctx.r3.s64 = 1061093376;
	// ori r3,r3,11583
	ctx.r3.u64 = ctx.r3.u64 | 11583;
loc_830DBDDC:
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

__attribute__((alias("__imp__sub_830DBDF8"))) PPC_WEAK_FUNC(sub_830DBDF8);
PPC_FUNC_IMPL(__imp__sub_830DBDF8) {
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
	// beq cr6,0x830dbe64
	if (ctx.cr6.eq) goto loc_830DBE64;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r31,r11,-11680
	ctx.r31.s64 = ctx.r11.s64 + -11680;
	// addi r4,r31,-444
	ctx.r4.s64 = ctx.r31.s64 + -444;
	// bl 0x82e2c390
	ctx.lr = 0x830DBE28;
	sub_82E2C390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830dbe64
	if (!ctx.cr0.eq) goto loc_830DBE64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e2c390
	ctx.lr = 0x830DBE3C;
	sub_82E2C390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830dbe50
	if (ctx.cr0.eq) goto loc_830DBE50;
	// lis r3,17729
	ctx.r3.s64 = 1161887744;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// b 0x830dbe68
	goto loc_830DBE68;
loc_830DBE50:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e2a8d8
	ctx.lr = 0x830DBE60;
	sub_82E2A8D8(ctx, base);
	// b 0x830dbe68
	goto loc_830DBE68;
loc_830DBE64:
	// lis r3,17729
	ctx.r3.s64 = 1161887744;
loc_830DBE68:
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

__attribute__((alias("__imp__sub_830DBE80"))) PPC_WEAK_FUNC(sub_830DBE80);
PPC_FUNC_IMPL(__imp__sub_830DBE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830DBE88;
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
	// ble cr6,0x830dbec8
	if (!ctx.cr6.gt) goto loc_830DBEC8;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
loc_830DBEA8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c40388
	ctx.lr = 0x830DBEB4;
	sub_82C40388(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830dbea8
	if (ctx.cr6.lt) goto loc_830DBEA8;
loc_830DBEC8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830dbf38
	if (ctx.cr6.eq) goto loc_830DBF38;
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
	// bl 0x830e0d28
	ctx.lr = 0x830DBF10;
	sub_830E0D28(ctx, base);
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
	// bl 0x830e0d28
	ctx.lr = 0x830DBF30;
	sub_830E0D28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830dbf3c
	goto loc_830DBF3C;
loc_830DBF38:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_830DBF3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DBF48"))) PPC_WEAK_FUNC(sub_830DBF48);
PPC_FUNC_IMPL(__imp__sub_830DBF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830DBF50;
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
	// bne cr6,0x830dbf98
	if (!ctx.cr6.eq) goto loc_830DBF98;
	// lis r4,28259
	ctx.r4.s64 = 1851981824;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,1502
	ctx.r3.s64 = 1502;
	// ori r4,r4,28526
	ctx.r4.u64 = ctx.r4.u64 | 28526;
	// bl 0x82217d58
	ctx.lr = 0x830DBF80;
	sub_82217D58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// bne 0x830dbf98
	if (!ctx.cr0.eq) goto loc_830DBF98;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x830dc014
	goto loc_830DC014;
loc_830DBF98:
	// addi r29,r30,204
	ctx.r29.s64 = ctx.r30.s64 + 204;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e29500
	ctx.lr = 0x830DBFAC;
	sub_82E29500(ctx, base);
	// li r5,1502
	ctx.r5.s64 = 1502;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82e29500
	ctx.lr = 0x830DBFBC;
	sub_82E29500(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,1502
	ctx.r4.s64 = 1502;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c41cf8
	ctx.lr = 0x830DBFD0;
	sub_82C41CF8(ctx, base);
	// cmpwi cr6,r3,997
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 997, ctx.xer);
	// bne cr6,0x830dbfec
	if (!ctx.cr6.eq) goto loc_830DBFEC;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stb r10,400(r30)
	PPC_STORE_U8(ctx.r30.u32 + 400, ctx.r10.u8);
	// b 0x830dc014
	goto loc_830DC014;
loc_830DBFEC:
	// lis r4,28259
	ctx.r4.s64 = 1851981824;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r4,r4,28526
	ctx.r4.u64 = ctx.r4.u64 | 28526;
	// bl 0x82217db8
	ctx.lr = 0x830DC000;
	sub_82217DB8(ctx, base);
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
loc_830DC014:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DC020"))) PPC_WEAK_FUNC(sub_830DC020);
PPC_FUNC_IMPL(__imp__sub_830DC020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830DC028;
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
	// beq cr6,0x830dc080
	if (ctx.cr6.eq) goto loc_830DC080;
	// li r29,0
	ctx.r29.s64 = 0;
	// stb r29,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r29.u8);
	// bl 0x82b08b50
	ctx.lr = 0x830DC050;
	sub_82B08B50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830dc060
	if (!ctx.cr0.eq) goto loc_830DC060;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x830dc07c
	goto loc_830DC07C;
loc_830DC060:
	// lis r4,28259
	ctx.r4.s64 = 1851981824;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// ori r4,r4,28526
	ctx.r4.u64 = ctx.r4.u64 | 28526;
	// bl 0x82217db8
	ctx.lr = 0x830DC074;
	sub_82217DB8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
loc_830DC07C:
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_830DC080:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DC088"))) PPC_WEAK_FUNC(sub_830DC088);
PPC_FUNC_IMPL(__imp__sub_830DC088) {
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
loc_830DC0A0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x830dc0bc
	if (!ctx.cr6.eq) goto loc_830DC0BC;
	// lbz r9,400(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 400);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x830dc0d8
	if (ctx.cr0.eq) goto loc_830DC0D8;
loc_830DC0BC:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x830dc0e4
	if (ctx.cr6.eq) goto loc_830DC0E4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x830dc0a0
	if (ctx.cr6.lt) goto loc_830DC0A0;
	// b 0x830dc0ec
	goto loc_830DC0EC;
loc_830DC0D8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x830dbf48
	ctx.lr = 0x830DC0E0;
	sub_830DBF48(ctx, base);
	// b 0x830dc0ec
	goto loc_830DC0EC;
loc_830DC0E4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x830dc020
	ctx.lr = 0x830DC0EC;
	sub_830DC020(ctx, base);
loc_830DC0EC:
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

__attribute__((alias("__imp__sub_830DC110"))) PPC_WEAK_FUNC(sub_830DC110);
PPC_FUNC_IMPL(__imp__sub_830DC110) {
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
	// bl 0x82b06ff0
	ctx.lr = 0x830DC138;
	sub_82B06FF0(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b06d88
	ctx.lr = 0x830DC148;
	sub_82B06D88(ctx, base);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r7
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, ctx.xer);
	// bne cr6,0x830dc18c
	if (!ctx.cr6.eq) goto loc_830DC18C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_830DC160:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x830dc184
	if (ctx.cr0.eq) goto loc_830DC184;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x830dc160
	if (ctx.cr6.eq) goto loc_830DC160;
loc_830DC184:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x830dc1a8
	if (ctx.cr0.eq) goto loc_830DC1A8;
loc_830DC18C:
	// li r5,16
	ctx.r5.s64 = 16;
	// std r7,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r7.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e8700
	ctx.lr = 0x830DC1A0;
	sub_830E8700(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_830DC1A8:
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

__attribute__((alias("__imp__sub_830DC1C0"))) PPC_WEAK_FUNC(sub_830DC1C0);
PPC_FUNC_IMPL(__imp__sub_830DC1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830DC1C8;
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
loc_830DC1DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b06d90
	ctx.lr = 0x830DC1E4;
	sub_82B06D90(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x830dc1fc
	if (!ctx.cr6.eq) goto loc_830DC1FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dc110
	ctx.lr = 0x830DC1F8;
	sub_830DC110(ctx, base);
	// b 0x830dc228
	goto loc_830DC228;
loc_830DC1FC:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830dc218
	if (ctx.cr0.eq) goto loc_830DC218;
	// lis r4,28259
	ctx.r4.s64 = 1851981824;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r4,r4,28526
	ctx.r4.u64 = ctx.r4.u64 | 28526;
	// bl 0x82217db8
	ctx.lr = 0x830DC218;
	sub_82217DB8(ctx, base);
loc_830DC218:
	// std r28,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r28.u64);
	// std r28,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r28.u64);
	// std r28,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r28.u64);
	// std r28,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r28.u64);
loc_830DC228:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x830dc1dc
	if (ctx.cr6.lt) goto loc_830DC1DC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DC240"))) PPC_WEAK_FUNC(sub_830DC240);
PPC_FUNC_IMPL(__imp__sub_830DC240) {
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
	// bl 0x82c1a068
	ctx.lr = 0x830DC258;
	sub_82C1A068(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830dc26c
	if (!ctx.cr0.eq) goto loc_830DC26C;
loc_830DC260:
	// lis r3,11635
	ctx.r3.s64 = 762511360;
	// ori r3,r3,30307
	ctx.r3.u64 = ctx.r3.u64 | 30307;
	// b 0x830dc2a0
	goto loc_830DC2A0;
loc_830DC26C:
	// lbz r11,394(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 394);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830dc288
	if (!ctx.cr6.eq) goto loc_830DC288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dbe80
	ctx.lr = 0x830DC280;
	sub_830DBE80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830dc260
	if (ctx.cr0.lt) goto loc_830DC260;
loc_830DC288:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dc1c0
	ctx.lr = 0x830DC290;
	sub_830DC1C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,11128
	ctx.r3.s64 = 729284608;
	// ori r3,r3,25196
	ctx.r3.u64 = ctx.r3.u64 | 25196;
	// stb r11,396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 396, ctx.r11.u8);
loc_830DC2A0:
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

__attribute__((alias("__imp__sub_830DC2B8"))) PPC_WEAK_FUNC(sub_830DC2B8);
PPC_FUNC_IMPL(__imp__sub_830DC2B8) {
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

__attribute__((alias("__imp__sub_830DC2D0"))) PPC_WEAK_FUNC(sub_830DC2D0);
PPC_FUNC_IMPL(__imp__sub_830DC2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e48
	ctx.lr = 0x830DC2D8;
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
	// bne cr6,0x830dc3c8
	if (!ctx.cr6.eq) goto loc_830DC3C8;
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
	// bl 0x83157a74
	ctx.lr = 0x830DC31C;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830dc384
	if (!ctx.cr0.eq) goto loc_830DC384;
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
	// bl 0x83157a74
	ctx.lr = 0x830DC33C;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830dc364
	if (ctx.cr0.eq) goto loc_830DC364;
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
	// b 0x830dc3c8
	goto loc_830DC3C8;
loc_830DC364:
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
	// bl 0x83157a74
	ctx.lr = 0x830DC37C;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830dc394
	if (ctx.cr0.eq) goto loc_830DC394;
loc_830DC384:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r29,401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 401, ctx.r29.u8);
	// b 0x830dc3c8
	goto loc_830DC3C8;
loc_830DC394:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,13300
	ctx.r11.u64 = ctx.r11.u64 | 13300;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830dc3c8
	if (ctx.cr0.eq) goto loc_830DC3C8;
	// lwzx r10,r31,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// subf r10,r10,r20
	ctx.r10.s64 = ctx.r20.s64 - ctx.r10.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x830dc3c8
	if (!ctx.cr6.gt) goto loc_830DC3C8;
	// stb r29,401(r31)
	PPC_STORE_U8(ctx.r31.u32 + 401, ctx.r29.u8);
	// stb r29,402(r31)
	PPC_STORE_U8(ctx.r31.u32 + 402, ctx.r29.u8);
	// stb r29,403(r31)
	PPC_STORE_U8(ctx.r31.u32 + 403, ctx.r29.u8);
	// stb r29,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r29.u8);
loc_830DC3C8:
	// addis r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 65536;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r23,r23,13272
	ctx.r23.s64 = ctx.r23.s64 + 13272;
	// li r22,1
	ctx.r22.s64 = 1;
loc_830DC3D8:
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
	// bne cr6,0x830dc450
	if (!ctx.cr6.eq) goto loc_830DC450;
	// add r24,r30,r31
	ctx.r24.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r11,401(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 401);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830dc450
	if (!ctx.cr0.eq) goto loc_830DC450;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b06d90
	ctx.lr = 0x830DC40C;
	sub_82B06D90(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x830dc450
	if (!ctx.cr6.eq) goto loc_830DC450;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// bl 0x82b07e10
	ctx.lr = 0x830DC428;
	sub_82B07E10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830dc43c
	if (!ctx.cr0.eq) goto loc_830DC43C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830dc440
	if (ctx.cr0.eq) goto loc_830DC440;
loc_830DC43C:
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_830DC440:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830dc464
	if (ctx.cr0.eq) goto loc_830DC464;
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// stb r22,401(r24)
	PPC_STORE_U8(ctx.r24.u32 + 401, ctx.r22.u8);
loc_830DC450:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x830dc3d8
	if (ctx.cr6.lt) goto loc_830DC3D8;
	// b 0x830dc52c
	goto loc_830DC52C;
loc_830DC464:
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
	// bl 0x82c41228
	ctx.lr = 0x830DC480;
	sub_82C41228(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830dc4f8
	if (!ctx.cr0.eq) goto loc_830DC4F8;
	// addi r26,r31,232
	ctx.r26.s64 = ctx.r31.s64 + 232;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e29500
	ctx.lr = 0x830DC49C;
	sub_82E29500(ctx, base);
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
	// bl 0x82b076d8
	ctx.lr = 0x830DC4BC;
	sub_82B076D8(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x830dc52c
	if (ctx.cr6.eq) goto loc_830DC52C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82b07040
	ctx.lr = 0x830DC4CC;
	sub_82B07040(ctx, base);
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
	// b 0x830dc528
	goto loc_830DC528;
loc_830DC4F8:
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
	// bl 0x82b07040
	ctx.lr = 0x830DC524;
	sub_82B07040(ctx, base);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
loc_830DC528:
	// stwx r20,r31,r25
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r20.u32);
loc_830DC52C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830dc5c4
	if (ctx.cr6.eq) goto loc_830DC5C4;
	// addi r30,r31,232
	ctx.r30.s64 = ctx.r31.s64 + 232;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x830dc5c4
	if (ctx.cr6.eq) goto loc_830DC5C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b075a0
	ctx.lr = 0x830DC558;
	sub_82B075A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830dc57c
	if (!ctx.cr0.eq) goto loc_830DC57C;
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
	// b 0x830dc598
	goto loc_830DC598;
loc_830DC57C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b08b50
	ctx.lr = 0x830DC584;
	sub_82B08B50(ctx, base);
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
loc_830DC598:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r22,401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 401, ctx.r22.u8);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82b07040
	ctx.lr = 0x830DC5AC;
	sub_82B07040(ctx, base);
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
loc_830DC5C4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82e28e98
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DC5D0"))) PPC_WEAK_FUNC(sub_830DC5D0);
PPC_FUNC_IMPL(__imp__sub_830DC5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830DC5D8;
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
	// bl 0x82c1a058
	ctx.lr = 0x830DC5EC;
	sub_82C1A058(ctx, base);
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
	// bl 0x83157a74
	ctx.lr = 0x830DC608;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830dc61c
	if (ctx.cr0.eq) goto loc_830DC61C;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
loc_830DC61C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dc2d0
	ctx.lr = 0x830DC628;
	sub_830DC2D0(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x830dc678
	if (ctx.cr6.lt) goto loc_830DC678;
	// beq cr6,0x830dc794
	if (ctx.cr6.eq) goto loc_830DC794;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x830dc718
	if (ctx.cr6.lt) goto loc_830DC718;
	// beq cr6,0x830dc6d4
	if (ctx.cr6.eq) goto loc_830DC6D4;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x830dc9d4
	if (!ctx.cr6.lt) goto loc_830DC9D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dc088
	ctx.lr = 0x830DC658;
	sub_830DC088(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x830dc66c
	if (!ctx.cr0.gt) goto loc_830DC66C;
	// lis r11,11119
	ctx.r11.s64 = 728694784;
	// ori r11,r11,28268
	ctx.r11.u64 = ctx.r11.u64 | 28268;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
loc_830DC66C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x830dc9d4
	if (ctx.cr6.eq) goto loc_830DC9D4;
	// stw r29,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r29.u32);
loc_830DC678:
	// lbz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 396);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830dc9d4
	if (ctx.cr0.eq) goto loc_830DC9D4;
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
	// bl 0x83157a74
	ctx.lr = 0x830DC69C;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830dc90c
	if (ctx.cr0.eq) goto loc_830DC90C;
	// lis r11,21
	ctx.r11.s64 = 1376256;
	// ori r10,r11,4336
	ctx.r10.u64 = ctx.r11.u64 | 4336;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830dc90c
	if (ctx.cr6.eq) goto loc_830DC90C;
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830dc7f8
	if (!ctx.cr6.eq) goto loc_830DC7F8;
	// lis r11,11630
	ctx.r11.s64 = 762183680;
	// ori r11,r11,25972
	ctx.r11.u64 = ctx.r11.u64 | 25972;
	// b 0x830dc904
	goto loc_830DC904;
loc_830DC6D4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82c19f70
	ctx.lr = 0x830DC6DC;
	sub_82C19F70(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x830dc6f8
	if (!ctx.cr6.eq) goto loc_830DC6F8;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stb r10,397(r31)
	PPC_STORE_U8(ctx.r31.u32 + 397, ctx.r10.u8);
	// b 0x830dc9d4
	goto loc_830DC9D4;
loc_830DC6F8:
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x830dc9d4
	if (!ctx.cr6.eq) goto loc_830DC9D4;
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
	// b 0x830dc9d4
	goto loc_830DC9D4;
loc_830DC718:
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lis r11,11520
	ctx.r11.s64 = 754974720;
	// rlwinm r10,r10,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830dc73c
	if (ctx.cr6.eq) goto loc_830DC73C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// bl 0x830dc240
	ctx.lr = 0x830DC738;
	sub_830DC240(ctx, base);
	// stw r3,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r3.u32);
loc_830DC73C:
	// lis r10,11128
	ctx.r10.s64 = 729284608;
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// ori r10,r10,25196
	ctx.r10.u64 = ctx.r10.u64 | 25196;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830dc9d4
	if (!ctx.cr6.eq) goto loc_830DC9D4;
	// lbz r11,394(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 394);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830dc788
	if (ctx.cr0.eq) goto loc_830DC788;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82c19f60
	ctx.lr = 0x830DC764;
	sub_82C19F60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830dc780
	if (ctx.cr0.eq) goto loc_830DC780;
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
loc_830DC780:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x830dc78c
	goto loc_830DC78C;
loc_830DC788:
	// li r11,4
	ctx.r11.s64 = 4;
loc_830DC78C:
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// b 0x830dc9d4
	goto loc_830DC9D4;
loc_830DC794:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// bl 0x830dbce8
	ctx.lr = 0x830DC7A0;
	sub_830DBCE8(ctx, base);
	// lbz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 392);
	// stw r3,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r3.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830dc9d4
	if (!ctx.cr6.eq) goto loc_830DC9D4;
	// lis r11,11113
	ctx.r11.s64 = 728301568;
	// ori r11,r11,29552
	ctx.r11.u64 = ctx.r11.u64 | 29552;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830dc9d4
	if (!ctx.cr6.eq) goto loc_830DC9D4;
	// lbz r11,393(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 393);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830dc9d4
	if (!ctx.cr0.eq) goto loc_830DC9D4;
	// addi r30,r31,312
	ctx.r30.s64 = ctx.r31.s64 + 312;
	// addi r29,r31,304
	ctx.r29.s64 = ctx.r31.s64 + 304;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c19ee8
	ctx.lr = 0x830DC7E0;
	sub_82C19EE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c19ef8
	ctx.lr = 0x830DC7EC;
	sub_82C19EF8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,393(r31)
	PPC_STORE_U8(ctx.r31.u32 + 393, ctx.r11.u8);
	// b 0x830dc9d4
	goto loc_830DC9D4;
loc_830DC7F8:
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4097
	ctx.r10.u64 = ctx.r10.u64 | 4097;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830dc8fc
	if (ctx.cr6.eq) goto loc_830DC8FC;
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830dc8fc
	if (ctx.cr6.eq) goto loc_830DC8FC;
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4353
	ctx.r10.u64 = ctx.r10.u64 | 4353;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830dc8fc
	if (ctx.cr6.eq) goto loc_830DC8FC;
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4354
	ctx.r10.u64 = ctx.r10.u64 | 4354;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830dc8fc
	if (ctx.cr6.eq) goto loc_830DC8FC;
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4098
	ctx.r10.u64 = ctx.r10.u64 | 4098;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830dc8f0
	if (ctx.cr6.eq) goto loc_830DC8F0;
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4103
	ctx.r10.u64 = ctx.r10.u64 | 4103;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830dc8f0
	if (ctx.cr6.eq) goto loc_830DC8F0;
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4099
	ctx.r10.u64 = ctx.r10.u64 | 4099;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830dc874
	if (!ctx.cr6.eq) goto loc_830DC874;
	// lis r11,11618
	ctx.r11.s64 = 761397248;
	// ori r11,r11,29561
	ctx.r11.u64 = ctx.r11.u64 | 29561;
	// b 0x830dc904
	goto loc_830DC904;
loc_830DC874:
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4100
	ctx.r10.u64 = ctx.r10.u64 | 4100;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830dc890
	if (!ctx.cr6.eq) goto loc_830DC890;
	// lis r11,11628
	ctx.r11.s64 = 762052608;
	// ori r11,r11,29556
	ctx.r11.u64 = ctx.r11.u64 | 29556;
	// b 0x830dc904
	goto loc_830DC904;
loc_830DC890:
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4101
	ctx.r10.u64 = ctx.r10.u64 | 4101;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830dc8ac
	if (!ctx.cr6.eq) goto loc_830DC8AC;
	// lis r11,11620
	ctx.r11.s64 = 761528320;
	// ori r11,r11,30064
	ctx.r11.u64 = ctx.r11.u64 | 30064;
	// b 0x830dc904
	goto loc_830DC904;
loc_830DC8AC:
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4102
	ctx.r10.u64 = ctx.r10.u64 | 4102;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830dc8c8
	if (!ctx.cr6.eq) goto loc_830DC8C8;
	// lis r11,11625
	ctx.r11.s64 = 761856000;
	// ori r11,r11,28278
	ctx.r11.u64 = ctx.r11.u64 | 28278;
	// b 0x830dc904
	goto loc_830DC904;
loc_830DC8C8:
	// lis r10,21
	ctx.r10.s64 = 1376256;
	// ori r10,r10,4337
	ctx.r10.u64 = ctx.r10.u64 | 4337;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830dc8e4
	if (!ctx.cr6.eq) goto loc_830DC8E4;
	// lis r11,11628
	ctx.r11.s64 = 762052608;
	// ori r11,r11,28518
	ctx.r11.u64 = ctx.r11.u64 | 28518;
	// b 0x830dc904
	goto loc_830DC904;
loc_830DC8E4:
	// lis r11,11640
	ctx.r11.s64 = 762839040;
	// ori r11,r11,25196
	ctx.r11.u64 = ctx.r11.u64 | 25196;
	// b 0x830dc904
	goto loc_830DC904;
loc_830DC8F0:
	// lis r11,11637
	ctx.r11.s64 = 762642432;
	// ori r11,r11,28772
	ctx.r11.u64 = ctx.r11.u64 | 28772;
	// b 0x830dc904
	goto loc_830DC904;
loc_830DC8FC:
	// lis r11,11635
	ctx.r11.s64 = 762511360;
	// ori r11,r11,30307
	ctx.r11.u64 = ctx.r11.u64 | 30307;
loc_830DC904:
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stb r29,396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 396, ctx.r29.u8);
loc_830DC90C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x83157a74
	ctx.lr = 0x830DC920;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830dc930
	if (ctx.cr0.eq) goto loc_830DC930;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dc1c0
	ctx.lr = 0x830DC930;
	sub_830DC1C0(ctx, base);
loc_830DC930:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x83157a74
	ctx.lr = 0x830DC944;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830dc954
	if (ctx.cr0.eq) goto loc_830DC954;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dc1c0
	ctx.lr = 0x830DC954;
	sub_830DC1C0(ctx, base);
loc_830DC954:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dc088
	ctx.lr = 0x830DC95C;
	sub_830DC088(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830dc9d4
	if (ctx.cr0.lt) goto loc_830DC9D4;
	// addi r30,r31,264
	ctx.r30.s64 = ctx.r31.s64 + 264;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830dc9b4
	if (ctx.cr0.eq) goto loc_830DC9B4;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// andi. r11,r11,9
	ctx.r11.u64 = ctx.r11.u64 & 9;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830dc99c
	if (ctx.cr0.eq) goto loc_830DC99C;
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
loc_830DC99C:
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830dc9d4
	if (ctx.cr0.eq) goto loc_830DC9D4;
	// bl 0x82c1a048
	ctx.lr = 0x830DC9AC;
	sub_82C1A048(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// b 0x830dc9d4
	goto loc_830DC9D4;
loc_830DC9B4:
	// lbz r11,399(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 399);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830dc9d4
	if (!ctx.cr6.eq) goto loc_830DC9D4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82c1a030
	ctx.lr = 0x830DC9D0;
	sub_82C1A030(ctx, base);
	// stb r29,399(r31)
	PPC_STORE_U8(ctx.r31.u32 + 399, ctx.r29.u8);
loc_830DC9D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DC9E0"))) PPC_WEAK_FUNC(sub_830DC9E0);
PPC_FUNC_IMPL(__imp__sub_830DC9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e54
	ctx.lr = 0x830DC9E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r23,r11,-15736
	ctx.r23.s64 = ctx.r11.s64 + -15736;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,4
	ctx.r26.s64 = 4;
	// lwz r24,0(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x830e88c8
	ctx.lr = 0x830DCA0C;
	sub_830E88C8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x830dca1c
	if (!ctx.cr6.eq) goto loc_830DCA1C;
	// addi r31,r23,4
	ctx.r31.s64 = ctx.r23.s64 + 4;
loc_830DCA1C:
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-11640
	ctx.r30.s64 = ctx.r11.s64 + -11640;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// bl 0x82e2c390
	ctx.lr = 0x830DCA30;
	sub_82E2C390(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830dca40
	if (ctx.cr0.eq) goto loc_830DCA40;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_830DCA40:
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2c390
	ctx.lr = 0x830DCA4C;
	sub_82E2C390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830dca58
	if (ctx.cr0.eq) goto loc_830DCA58;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_830DCA58:
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2c390
	ctx.lr = 0x830DCA64;
	sub_82E2C390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830dca70
	if (ctx.cr0.eq) goto loc_830DCA70;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_830DCA70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2c390
	ctx.lr = 0x830DCA7C;
	sub_82E2C390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830dca98
	if (ctx.cr0.eq) goto loc_830DCA98;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82e2a8d8
	ctx.lr = 0x830DCA94;
	sub_82E2A8D8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_830DCA98:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x830dcaa8
	if (ctx.cr6.eq) goto loc_830DCAA8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830dcba4
	goto loc_830DCBA4;
loc_830DCAA8:
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
	// bl 0x82217d58
	ctx.lr = 0x830DCAC0;
	sub_82217D58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830dcad0
	if (!ctx.cr0.eq) goto loc_830DCAD0;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x830dcba4
	goto loc_830DCBA4;
loc_830DCAD0:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,13312
	ctx.r5.u64 = ctx.r5.u64 | 13312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e29500
	ctx.lr = 0x830DCAE4;
	sub_82E29500(ctx, base);
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
	// bl 0x830dbc70
	ctx.lr = 0x830DCB00;
	sub_830DBC70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830dcb10
	if (ctx.cr0.eq) goto loc_830DCB10;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x830dcba4
	goto loc_830DCBA4;
loc_830DCB10:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x830e0178
	ctx.lr = 0x830DCB18;
	sub_830E0178(ctx, base);
	// lbz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 392);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830dcb2c
	if (!ctx.cr0.eq) goto loc_830DCB2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82c40308
	ctx.lr = 0x830DCB2C;
	sub_82C40308(ctx, base);
loc_830DCB2C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r29,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r29.u32);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-14896
	ctx.r3.s64 = ctx.r11.s64 + -14896;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x830df698
	ctx.lr = 0x830DCB4C;
	sub_830DF698(ctx, base);
	// li r3,111
	ctx.r3.s64 = 111;
	// bl 0x82b08b78
	ctx.lr = 0x830DCB54;
	sub_82B08B78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r3.u32);
	// bne 0x830dcb68
	if (!ctx.cr0.eq) goto loc_830DCB68;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x830dcba4
	goto loc_830DCBA4;
loc_830DCB68:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// ori r11,r11,13300
	ctx.r11.u64 = ctx.r11.u64 | 13300;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x830df1b8
	ctx.lr = 0x830DCB7C;
	sub_830DF1B8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,13304
	ctx.r11.u64 = ctx.r11.u64 | 13304;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// bl 0x82b076f0
	ctx.lr = 0x830DCB8C;
	sub_82B076F0(ctx, base);
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
loc_830DCBA4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DCBB0"))) PPC_WEAK_FUNC(sub_830DCBB0);
PPC_FUNC_IMPL(__imp__sub_830DCBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830DCBB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,-15736(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15736);
	// bl 0x830df1b8
	ctx.lr = 0x830DCBD0;
	sub_830DF1B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dc5d0
	ctx.lr = 0x830DCBDC;
	sub_830DC5D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830dcc34
	if (ctx.cr6.eq) goto loc_830DCC34;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r7,r31,72
	ctx.r7.s64 = ctx.r31.s64 + 72;
loc_830DCBEC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_830DCBF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x830dcc18
	if (ctx.cr0.eq) goto loc_830DCC18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x830dcbf4
	if (ctx.cr6.eq) goto loc_830DCBF4;
loc_830DCC18:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x830dcc98
	if (ctx.cr0.eq) goto loc_830DCC98;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x830dcbec
	if (ctx.cr6.lt) goto loc_830DCBEC;
	// b 0x830dcc94
	goto loc_830DCC94;
loc_830DCC34:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830dcc94
	if (ctx.cr6.eq) goto loc_830DCC94;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r31,88
	ctx.r9.s64 = ctx.r31.s64 + 88;
loc_830DCC44:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_830DCC50:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x830dcc70
	if (!ctx.cr0.eq) goto loc_830DCC70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x830dcc50
	if (!ctx.cr6.eq) goto loc_830DCC50;
loc_830DCC70:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x830dcc84
	if (!ctx.cr0.eq) goto loc_830DCC84;
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x830dcc98
	if (!ctx.cr6.eq) goto loc_830DCC98;
loc_830DCC84:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x830dcc44
	if (ctx.cr6.lt) goto loc_830DCC44;
loc_830DCC94:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_830DCC98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DCCA0"))) PPC_WEAK_FUNC(sub_830DCCA0);
PPC_FUNC_IMPL(__imp__sub_830DCCA0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r31,-15736(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15736);
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
	// bne 0x830dccec
	if (!ctx.cr0.eq) goto loc_830DCCEC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830dcd14
	goto loc_830DCD14;
loc_830DCCEC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x830dbdf8
	ctx.lr = 0x830DCCF4;
	sub_830DBDF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// bne 0x830dcd08
	if (!ctx.cr0.eq) goto loc_830DCD08;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x830dcd14
	goto loc_830DCD14;
loc_830DCD08:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
loc_830DCD14:
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

__attribute__((alias("__imp__sub_830DCD28"))) PPC_WEAK_FUNC(sub_830DCD28);
PPC_FUNC_IMPL(__imp__sub_830DCD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830DCD30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,-15736(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15736);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830dcd54
	if (ctx.cr0.eq) goto loc_830DCD54;
	// bl 0x82c1a048
	ctx.lr = 0x830DCD50;
	sub_82C1A048(ctx, base);
	// stw r29,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r29.u32);
loc_830DCD54:
	// lbz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 400);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830dcd6c
	if (!ctx.cr6.eq) goto loc_830DCD6C;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x82f667f8
	ctx.lr = 0x830DCD68;
	sub_82F667F8(ctx, base);
	// stb r29,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r29.u8);
loc_830DCD6C:
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// li r28,4
	ctx.r28.s64 = 4;
loc_830DCD74:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830dcd90
	if (ctx.cr0.eq) goto loc_830DCD90;
	// lis r4,28259
	ctx.r4.s64 = 1851981824;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r4,r4,28526
	ctx.r4.u64 = ctx.r4.u64 | 28526;
	// bl 0x82217db8
	ctx.lr = 0x830DCD90;
	sub_82217DB8(ctx, base);
loc_830DCD90:
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
	// bne 0x830dcd74
	if (!ctx.cr0.eq) goto loc_830DCD74;
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x82c19f08
	ctx.lr = 0x830DCDB8;
	sub_82C19F08(ctx, base);
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
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DCDD8"))) PPC_WEAK_FUNC(sub_830DCDD8);
PPC_FUNC_IMPL(__imp__sub_830DCDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x830DCDE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r31,-15736(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15736);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x830dce0c
	if (!ctx.cr6.eq) goto loc_830DCE0C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830dced4
	goto loc_830DCED4;
loc_830DCE0C:
	// lis r11,26226
	ctx.r11.s64 = 1718747136;
	// ori r11,r11,29300
	ctx.r11.u64 = ctx.r11.u64 | 29300;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dce44
	if (!ctx.cr6.eq) goto loc_830DCE44;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,13300
	ctx.r11.s64 = ctx.r11.s64 + 13300;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x830dce9c
	if (ctx.cr6.eq) goto loc_830DCE9C;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x830df1b8
	ctx.lr = 0x830DCE38;
	sub_830DF1B8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,13304
	ctx.r11.u64 = ctx.r11.u64 | 13304;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
loc_830DCE44:
	// lis r11,29541
	ctx.r11.s64 = 1935998976;
	// ori r3,r11,29302
	ctx.r3.u64 = ctx.r11.u64 | 29302;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x830dce7c
	if (!ctx.cr6.eq) goto loc_830DCE7C;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x830dce9c
	if (!ctx.cr6.lt) goto loc_830DCE9C;
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
	// b 0x830dced0
	goto loc_830DCED0;
loc_830DCE7C:
	// lis r11,29801
	ctx.r11.s64 = 1953038336;
	// ori r11,r11,29804
	ctx.r11.u64 = ctx.r11.u64 | 29804;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x830dceb8
	if (ctx.cr6.eq) goto loc_830DCEB8;
	// lis r11,30828
	ctx.r11.s64 = 2020343808;
	// ori r11,r11,29552
	ctx.r11.u64 = ctx.r11.u64 | 29552;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x830dceb8
	if (ctx.cr6.eq) goto loc_830DCEB8;
loc_830DCE9C:
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
	// bl 0x830e0d28
	ctx.lr = 0x830DCEB4;
	sub_830E0D28(ctx, base);
	// b 0x830dced4
	goto loc_830DCED4;
loc_830DCEB8:
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
	// bl 0x830dcdd8
	ctx.lr = 0x830DCED0;
	sub_830DCDD8(ctx, base);
loc_830DCED0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DCED4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DCEE0"))) PPC_WEAK_FUNC(sub_830DCEE0);
PPC_FUNC_IMPL(__imp__sub_830DCEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x830DCEE8;
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
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// lwz r30,-15736(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15736);
	// bne cr6,0x830dcf24
	if (!ctx.cr6.eq) goto loc_830DCF24;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DCF24:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x830dcf34
	if (!ctx.cr6.eq) goto loc_830DCF34;
loc_830DCF2C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DCF34:
	// bl 0x82b076f0
	ctx.lr = 0x830DCF38;
	sub_82B076F0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,13308
	ctx.r11.u64 = ctx.r11.u64 | 13308;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830dcf5c
	if (!ctx.cr6.eq) goto loc_830DCF5C;
	// bl 0x830df1b8
	ctx.lr = 0x830DCF50;
	sub_830DF1B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dc5d0
	ctx.lr = 0x830DCF5C;
	sub_830DC5D0(ctx, base);
loc_830DCF5C:
	// lis r11,24932
	ctx.r11.s64 = 1633943552;
	// ori r11,r11,25714
	ctx.r11.u64 = ctx.r11.u64 | 25714;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dcf74
	if (!ctx.cr6.eq) goto loc_830DCF74;
	// bl 0x830e1910
	ctx.lr = 0x830DCF70;
	sub_830E1910(ctx, base);
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DCF74:
	// lis r11,25186
	ctx.r11.s64 = 1650589696;
	// ori r11,r11,28260
	ctx.r11.u64 = ctx.r11.u64 | 28260;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dcf8c
	if (!ctx.cr6.eq) goto loc_830DCF8C;
loc_830DCF84:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DCF8C:
	// lis r11,25200
	ctx.r11.s64 = 1651507200;
	// ori r11,r11,29540
	ctx.r11.u64 = ctx.r11.u64 | 29540;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dcfa4
	if (!ctx.cr6.eq) goto loc_830DCFA4;
	// lwz r3,348(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DCFA4:
	// lis r11,25200
	ctx.r11.s64 = 1651507200;
	// ori r11,r11,29557
	ctx.r11.u64 = ctx.r11.u64 | 29557;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dcfbc
	if (!ctx.cr6.eq) goto loc_830DCFBC;
	// lwz r3,344(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DCFBC:
	// lis r11,25455
	ctx.r11.s64 = 1668218880;
	// ori r11,r11,28270
	ctx.r11.u64 = ctx.r11.u64 | 28270;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x830dd6a0
	if (ctx.cr6.eq) goto loc_830DD6A0;
	// lis r11,29556
	ctx.r11.s64 = 1936982016;
	// ori r11,r11,24946
	ctx.r11.u64 = ctx.r11.u64 | 24946;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x830dd6a0
	if (ctx.cr6.eq) goto loc_830DD6A0;
	// lis r11,26226
	ctx.r11.s64 = 1718747136;
	// ori r11,r11,28260
	ctx.r11.u64 = ctx.r11.u64 | 28260;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dd028
	if (!ctx.cr6.eq) goto loc_830DD028;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bgt cr6,0x830dcf2c
	if (ctx.cr6.gt) goto loc_830DCF2C;
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
	// blt cr6,0x830dcf2c
	if (ctx.cr6.lt) goto loc_830DCF2C;
	// mulli r11,r29,19600
	ctx.r11.s64 = ctx.r29.s64 * 19600;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,408
	ctx.r4.s64 = ctx.r11.s64 + 408;
	// bl 0x82e28fd0
	ctx.lr = 0x830DD020;
	sub_82E28FD0(ctx, base);
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD028:
	// lis r11,26226
	ctx.r11.s64 = 1718747136;
	// ori r11,r11,28278
	ctx.r11.u64 = ctx.r11.u64 | 28278;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dd048
	if (!ctx.cr6.eq) goto loc_830DD048;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,13288
	ctx.r11.u64 = ctx.r11.u64 | 13288;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD048:
	// lis r11,26465
	ctx.r11.s64 = 1734410240;
	// ori r11,r11,29797
	ctx.r11.u64 = ctx.r11.u64 | 29797;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dd060
	if (!ctx.cr6.eq) goto loc_830DD060;
	// lbz r3,397(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 397);
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD060:
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
loc_830DD0BC:
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x830dd0d8
	if (!ctx.cr6.gt) goto loc_830DD0D8;
	// addi r26,r10,4
	ctx.r26.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r6,r26
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x830dd0d8
	if (ctx.cr6.gt) goto loc_830DD0D8;
	// subf r29,r10,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r10.s64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_830DD0D8:
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
	// bne 0x830dd0bc
	if (!ctx.cr0.eq) goto loc_830DD0BC;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dd124
	if (!ctx.cr6.eq) goto loc_830DD124;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830dd214
	if (ctx.cr6.eq) goto loc_830DD214;
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// blt cr6,0x830dd214
	if (ctx.cr6.lt) goto loc_830DD214;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,72
	ctx.r4.s64 = ctx.r11.s64 + 72;
loc_830DD118:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830DD120;
	sub_82E28FD0(ctx, base);
	// b 0x830dcf84
	goto loc_830DCF84;
loc_830DD124:
	// lis r11,26735
	ctx.r11.s64 = 1752104960;
	// ori r11,r11,29556
	ctx.r11.u64 = ctx.r11.u64 | 29556;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dd158
	if (!ctx.cr6.eq) goto loc_830DD158;
	// lbz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 396);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830dd214
	if (ctx.cr0.eq) goto loc_830DD214;
	// lbz r11,394(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 394);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830dd214
	if (ctx.cr0.eq) goto loc_830DD214;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x830e1bd8
	ctx.lr = 0x830DD154;
	sub_830E1BD8(ctx, base);
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD158:
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830dd1ac
	if (!ctx.cr6.eq) goto loc_830DD1AC;
	// lwz r11,356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830dd214
	if (ctx.cr6.eq) goto loc_830DD214;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c41388
	ctx.lr = 0x830DD178;
	sub_82C41388(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830dcf2c
	if (!ctx.cr0.eq) goto loc_830DCF2C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830dd198
	if (ctx.cr6.eq) goto loc_830DD198;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830DD198;
	sub_82E28FD0(ctx, base);
loc_830DD198:
	// lwz r11,356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 356, ctx.r11.u32);
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD1AC:
	// lis r11,26995
	ctx.r11.s64 = 1769144320;
	// ori r11,r11,26226
	ctx.r11.u64 = ctx.r11.u64 | 26226;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dd21c
	if (!ctx.cr6.eq) goto loc_830DD21C;
	// ld r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bgt cr6,0x830dd214
	if (ctx.cr6.gt) goto loc_830DD214;
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
	// beq 0x830dd214
	if (ctx.cr0.eq) goto loc_830DD214;
	// mulli r11,r29,19600
	ctx.r11.s64 = ctx.r29.s64 * 19600;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
loc_830DD1EC:
	// ld r7,-24(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + -24);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x830dd204
	if (!ctx.cr6.eq) goto loc_830DD204;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r7,0,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC0000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x830dcf84
	if (ctx.cr0.eq) goto loc_830DCF84;
loc_830DD204:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,196
	ctx.r11.s64 = ctx.r11.s64 + 196;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x830dd1ec
	if (ctx.cr6.lt) goto loc_830DD1EC;
loc_830DD214:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD21C:
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x830dd36c
	if (!ctx.cr6.eq) goto loc_830DD36C;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830dd360
	if (ctx.cr0.eq) goto loc_830DD360;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x830dd360
	if (!ctx.cr6.eq) goto loc_830DD360;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lhz r7,54(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 54);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-12160
	ctx.r11.s64 = ctx.r11.s64 + -12160;
	// li r5,31354
	ctx.r5.s64 = 31354;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_830DD25C:
	// lhz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x830dd27c
	if (ctx.cr6.eq) goto loc_830DD27C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// blt cr6,0x830dd25c
	if (ctx.cr6.lt) goto loc_830DD25C;
	// b 0x830dd288
	goto loc_830DD288;
loc_830DD27C:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lhzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
loc_830DD288:
	// lbz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 56);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,23130
	ctx.r6.s64 = 23130;
loc_830DD298:
	// lhz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x830dd2b8
	if (ctx.cr6.eq) goto loc_830DD2B8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r10,110
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 110, ctx.xer);
	// blt cr6,0x830dd298
	if (ctx.cr6.lt) goto loc_830DD298;
	// b 0x830dd2c8
	goto loc_830DD2C8;
loc_830DD2B8:
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
loc_830DD2C8:
	// rlwinm r11,r5,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x830dd2e4
	if (ctx.cr6.lt) goto loc_830DD2E4;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// ble cr6,0x830dd2e8
	if (!ctx.cr6.gt) goto loc_830DD2E8;
loc_830DD2E4:
	// rlwinm r10,r5,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
loc_830DD2E8:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x830dd300
	if (ctx.cr6.lt) goto loc_830DD300;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ori r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 | 32;
	// ble cr6,0x830dd304
	if (!ctx.cr6.gt) goto loc_830DD304;
loc_830DD300:
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
loc_830DD304:
	// rlwinm r11,r6,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x830dd320
	if (ctx.cr6.lt) goto loc_830DD320;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// rlwinm r8,r11,0,27,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// ble cr6,0x830dd324
	if (!ctx.cr6.gt) goto loc_830DD324;
loc_830DD320:
	// rlwinm r8,r6,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
loc_830DD324:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x830dd33c
	if (ctx.cr6.lt) goto loc_830DD33C;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// rlwinm r9,r11,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// ble cr6,0x830dd340
	if (!ctx.cr6.gt) goto loc_830DD340;
loc_830DD33C:
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
loc_830DD340:
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
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD360:
	// lis r3,31354
	ctx.r3.s64 = 2054815744;
	// ori r3,r3,23130
	ctx.r3.u64 = ctx.r3.u64 | 23130;
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD36C:
	// lis r11,28001
	ctx.r11.s64 = 1835073536;
	// ori r11,r11,25464
	ctx.r11.u64 = ctx.r11.u64 | 25464;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dd3a4
	if (!ctx.cr6.eq) goto loc_830DD3A4;
	// lbz r11,395(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 395);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830dd214
	if (!ctx.cr6.eq) goto loc_830DD214;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830dd214
	if (ctx.cr6.eq) goto loc_830DD214;
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// blt cr6,0x830dd214
	if (ctx.cr6.lt) goto loc_830DD214;
	// addi r4,r30,278
	ctx.r4.s64 = ctx.r30.s64 + 278;
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x830dd118
	goto loc_830DD118;
loc_830DD3A4:
	// lis r11,28018
	ctx.r11.s64 = 1836187648;
	// ori r11,r11,29812
	ctx.r11.u64 = ctx.r11.u64 | 29812;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dd3bc
	if (!ctx.cr6.eq) goto loc_830DD3BC;
	// lwz r3,352(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD3BC:
	// lis r11,28526
	ctx.r11.s64 = 1869479936;
	// ori r11,r11,27758
	ctx.r11.u64 = ctx.r11.u64 | 27758;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dd3ec
	if (!ctx.cr6.eq) goto loc_830DD3EC;
	// lbz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 396);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830dd214
	if (!ctx.cr6.eq) goto loc_830DD214;
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830dd6a4
	if (ctx.cr6.eq) goto loc_830DD6A4;
	// b 0x830dd214
	goto loc_830DD214;
loc_830DD3EC:
	// lis r11,28780
	ctx.r11.s64 = 1886126080;
	// ori r11,r11,30055
	ctx.r11.u64 = ctx.r11.u64 | 30055;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dd408
	if (!ctx.cr6.eq) goto loc_830DD408;
	// bl 0x82c1a068
	ctx.lr = 0x830DD400;
	sub_82C1A068(ctx, base);
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD408:
	// lis r11,29537
	ctx.r11.s64 = 1935736832;
	// ori r11,r11,25714
	ctx.r11.u64 = ctx.r11.u64 | 25714;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dd450
	if (!ctx.cr6.eq) goto loc_830DD450;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
loc_830DD420:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x830dd440
	if (ctx.cr6.eq) goto loc_830DD440;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x830dd420
	if (ctx.cr6.lt) goto loc_830DD420;
	// b 0x830dd214
	goto loc_830DD214;
loc_830DD440:
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
loc_830DD444:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD450:
	// lis r11,29541
	ctx.r11.s64 = 1935998976;
	// ori r11,r11,25461
	ctx.r11.u64 = ctx.r11.u64 | 25461;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dd468
	if (!ctx.cr6.eq) goto loc_830DD468;
	// lbz r3,394(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 394);
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD468:
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x830dd4d4
	if (!ctx.cr6.eq) goto loc_830DD4D4;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bgt cr6,0x830dd4b8
	if (ctx.cr6.gt) goto loc_830DD4B8;
	// lbz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 396);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830dcf2c
	if (ctx.cr0.eq) goto loc_830DCF2C;
	// lbz r11,394(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 394);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830dcf2c
	if (ctx.cr0.eq) goto loc_830DCF2C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830dd4b0
	if (ctx.cr6.eq) goto loc_830DD4B0;
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
	// bl 0x82e28fd0
	ctx.lr = 0x830DD4B0;
	sub_82E28FD0(ctx, base);
loc_830DD4B0:
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// b 0x830dd444
	goto loc_830DD444;
loc_830DD4B8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c40388
	ctx.lr = 0x830DD4C4;
	sub_82C40388(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830dcf2c
	if (!ctx.cr0.eq) goto loc_830DCF2C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD4D4:
	// lis r11,29548
	ctx.r11.s64 = 1936457728;
	// ori r11,r11,28267
	ctx.r11.u64 = ctx.r11.u64 | 28267;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dd4ec
	if (!ctx.cr6.eq) goto loc_830DD4EC;
	// lbz r3,392(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 392);
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD4EC:
	// lis r11,29811
	ctx.r11.s64 = 1953693696;
	// ori r11,r11,29302
	ctx.r11.u64 = ctx.r11.u64 | 29302;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x830dd694
	if (ctx.cr6.eq) goto loc_830DD694;
	// lis r11,30828
	ctx.r11.s64 = 2020343808;
	// ori r11,r11,29552
	ctx.r11.u64 = ctx.r11.u64 | 29552;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x830dd694
	if (ctx.cr6.eq) goto loc_830DD694;
	// lis r11,29817
	ctx.r11.s64 = 1954086912;
	// ori r11,r11,28773
	ctx.r11.u64 = ctx.r11.u64 | 28773;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dd544
	if (!ctx.cr6.eq) goto loc_830DD544;
	// lbz r11,395(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 395);
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830dd6a4
	if (!ctx.cr6.eq) goto loc_830DD6A4;
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// li r3,4
	ctx.r3.s64 = 4;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830dd6a4
	if (ctx.cr0.eq) goto loc_830DD6A4;
	// li r3,20
	ctx.r3.s64 = 20;
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD544:
	// lis r11,30817
	ctx.r11.s64 = 2019622912;
	// ori r11,r11,25700
	ctx.r11.u64 = ctx.r11.u64 | 25700;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dd578
	if (!ctx.cr6.eq) goto loc_830DD578;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830dcf2c
	if (ctx.cr6.eq) goto loc_830DCF2C;
	// cmplwi cr6,r27,36
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 36, ctx.xer);
	// blt cr6,0x830dcf2c
	if (ctx.cr6.lt) goto loc_830DCF2C;
	// addi r4,r30,268
	ctx.r4.s64 = ctx.r30.s64 + 268;
	// li r5,36
	ctx.r5.s64 = 36;
loc_830DD56C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830DD574;
	sub_82E28FD0(ctx, base);
	// b 0x830dd214
	goto loc_830DD214;
loc_830DD578:
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x830dd5dc
	if (!ctx.cr6.eq) goto loc_830DD5DC;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x830dcf2c
	if (ctx.cr6.eq) goto loc_830DCF2C;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830dcf2c
	if (ctx.cr6.eq) goto loc_830DCF2C;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x830dcf2c
	if (!ctx.cr6.eq) goto loc_830DCF2C;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// bne cr6,0x830dcf2c
	if (!ctx.cr6.eq) goto loc_830DCF2C;
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
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD5DC:
	// lis r11,30827
	ctx.r11.s64 = 2020278272;
	// ori r11,r11,25977
	ctx.r11.u64 = ctx.r11.u64 | 25977;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dd614
	if (!ctx.cr6.eq) goto loc_830DD614;
	// lbz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 392);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830dd678
	if (!ctx.cr6.eq) goto loc_830DD678;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830dcf2c
	if (ctx.cr6.eq) goto loc_830DCF2C;
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// blt cr6,0x830dcf2c
	if (ctx.cr6.lt) goto loc_830DCF2C;
	// addi r4,r30,312
	ctx.r4.s64 = ctx.r30.s64 + 312;
	// li r5,16
	ctx.r5.s64 = 16;
	// b 0x830dd56c
	goto loc_830DD56C;
loc_830DD614:
	// lis r11,30827
	ctx.r11.s64 = 2020278272;
	// ori r11,r11,26980
	ctx.r11.u64 = ctx.r11.u64 | 26980;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dd64c
	if (!ctx.cr6.eq) goto loc_830DD64C;
	// lbz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 392);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830dd678
	if (!ctx.cr6.eq) goto loc_830DD678;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830dcf2c
	if (ctx.cr6.eq) goto loc_830DCF2C;
	// cmplwi cr6,r27,8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 8, ctx.xer);
	// blt cr6,0x830dcf2c
	if (ctx.cr6.lt) goto loc_830DCF2C;
	// addi r4,r30,304
	ctx.r4.s64 = ctx.r30.s64 + 304;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x830dd56c
	goto loc_830DD56C;
loc_830DD64C:
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x830dd678
	if (!ctx.cr6.eq) goto loc_830DD678;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830dcf2c
	if (ctx.cr6.eq) goto loc_830DCF2C;
	// cmplwi cr6,r27,8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 8, ctx.xer);
	// blt cr6,0x830dcf2c
	if (ctx.cr6.lt) goto loc_830DCF2C;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,8
	ctx.r5.s64 = 8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// b 0x830dd56c
	goto loc_830DD56C;
loc_830DD678:
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
	// bl 0x830e0990
	ctx.lr = 0x830DD690;
	sub_830E0990(ctx, base);
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD694:
	// lis r3,17729
	ctx.r3.s64 = 1161887744;
	// ori r3,r3,2053
	ctx.r3.u64 = ctx.r3.u64 | 2053;
	// b 0x830dd6a4
	goto loc_830DD6A4;
loc_830DD6A0:
	// lwz r3,336(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
loc_830DD6A4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DD6B0"))) PPC_WEAK_FUNC(sub_830DD6B0);
PPC_FUNC_IMPL(__imp__sub_830DD6B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b07ad0
	sub_82B07AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DD6B8"))) PPC_WEAK_FUNC(sub_830DD6B8);
PPC_FUNC_IMPL(__imp__sub_830DD6B8) {
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
	// lis r31,-31966
	ctx.r31.s64 = -2094923776;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-15736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830dd6e8
	if (!ctx.cr6.eq) goto loc_830DD6E8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830dd740
	goto loc_830DD740;
loc_830DD6E8:
	// lwz r3,260(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// bl 0x82b07040
	ctx.lr = 0x830DD6F0;
	sub_82B07040(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// lwz r4,-15736(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15736);
	// addi r3,r11,-14896
	ctx.r3.s64 = ctx.r11.s64 + -14896;
	// bl 0x830df708
	ctx.lr = 0x830DD700;
	sub_830DF708(ctx, base);
	// bl 0x830df7c8
	ctx.lr = 0x830DD704;
	sub_830DF7C8(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830dd720
	if (!ctx.cr0.eq) goto loc_830DD720;
	// bl 0x830dcd28
	ctx.lr = 0x830DD710;
	sub_830DCD28(ctx, base);
	// bl 0x82c40318
	ctx.lr = 0x830DD714;
	sub_82C40318(ctx, base);
	// bl 0x82c19ed0
	ctx.lr = 0x830DD718;
	sub_82C19ED0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830e1758
	ctx.lr = 0x830DD720;
	sub_830E1758(ctx, base);
loc_830DD720:
	// lwz r3,-15736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15736);
	// lis r4,28259
	ctx.r4.s64 = 1851981824;
	// ori r4,r4,28526
	ctx.r4.u64 = ctx.r4.u64 | 28526;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82217db8
	ctx.lr = 0x830DD734;
	sub_82217DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-15736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15736, ctx.r11.u32);
loc_830DD740:
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

__attribute__((alias("__imp__sub_830DD758"))) PPC_WEAK_FUNC(sub_830DD758);
PPC_FUNC_IMPL(__imp__sub_830DD758) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x830e14f8
	ctx.lr = 0x830DD774;
	sub_830E14F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x830dd7b4
	if (ctx.cr0.eq) goto loc_830DD7B4;
	// b 0x830dd788
	goto loc_830DD788;
loc_830DD780:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x830dd6b0
	ctx.lr = 0x830DD788;
	sub_830DD6B0(ctx, base);
loc_830DD788:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830DD798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830dd780
	if (ctx.cr0.eq) goto loc_830DD780;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830DD7B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830DD7B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_830DD7D0"))) PPC_WEAK_FUNC(sub_830DD7D0);
PPC_FUNC_IMPL(__imp__sub_830DD7D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x830e14f8
	sub_830E14F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DD7D8"))) PPC_WEAK_FUNC(sub_830DD7D8);
PPC_FUNC_IMPL(__imp__sub_830DD7D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x830dd758
	sub_830DD758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DD7E0"))) PPC_WEAK_FUNC(sub_830DD7E0);
PPC_FUNC_IMPL(__imp__sub_830DD7E0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// b 0x830dd7fc
	goto loc_830DD7FC;
loc_830DD7F0:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x830dd808
	if (ctx.cr6.gt) goto loc_830DD808;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_830DD7FC:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830dd7f0
	if (!ctx.cr0.eq) goto loc_830DD7F0;
loc_830DD808:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r31,r5
	ctx.r31.s64 = ctx.r5.s8;
	// cmpwi cr6,r31,97
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 97, ctx.xer);
	// blt cr6,0x830dd844
	if (ctx.cr6.lt) goto loc_830DD844;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_830DD828:
	// cmpwi cr6,r9,122
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 122, ctx.xer);
	// bgt cr6,0x830dd844
	if (ctx.cr6.gt) goto loc_830DD844;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,97
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 97, ctx.xer);
	// bge cr6,0x830dd828
	if (!ctx.cr6.lt) goto loc_830DD828;
loc_830DD844:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,58
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 58, ctx.xer);
	// bne cr6,0x830dd8a4
	if (!ctx.cr6.eq) goto loc_830DD8A4;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x830dd8a4
	if (!ctx.cr6.lt) goto loc_830DD8A4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r31,58
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 58, ctx.xer);
	// beq cr6,0x830dd888
	if (ctx.cr6.eq) goto loc_830DD888;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r31,r3,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_830DD870:
	// stbx r5,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,58
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 58, ctx.xer);
	// bne cr6,0x830dd870
	if (!ctx.cr6.eq) goto loc_830DD870;
loc_830DD888:
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stbx r10,r9,r4
	PPC_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r10.u8);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x830dd8a4
	goto loc_830DD8A4;
loc_830DD898:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x830dd8b0
	if (ctx.cr6.gt) goto loc_830DD8B0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_830DD8A4:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830dd898
	if (!ctx.cr0.eq) goto loc_830DD898;
loc_830DD8B0:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x830dd8cc
	if (!ctx.cr6.eq) goto loc_830DD8CC;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x830dd8cc
	if (!ctx.cr6.eq) goto loc_830DD8CC;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
loc_830DD8CC:
	// addic. r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// ble 0x830dd914
	if (!ctx.cr0.gt) goto loc_830DD914;
loc_830DD8D8:
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// ble cr6,0x830dd914
	if (!ctx.cr6.gt) goto loc_830DD914;
	// cmpwi cr6,r9,47
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 47, ctx.xer);
	// beq cr6,0x830dd914
	if (ctx.cr6.eq) goto loc_830DD914;
	// cmpwi cr6,r9,63
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 63, ctx.xer);
	// beq cr6,0x830dd914
	if (ctx.cr6.eq) goto loc_830DD914;
	// cmpwi cr6,r9,58
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 58, ctx.xer);
	// beq cr6,0x830dd914
	if (ctx.cr6.eq) goto loc_830DD914;
	// stbx r7,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x830dd8d8
	if (ctx.cr6.lt) goto loc_830DD8D8;
loc_830DD914:
	// stbx r10,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x830dd950
	if (!ctx.cr6.eq) goto loc_830DD950;
	// b 0x830dd93c
	goto loc_830DD93C;
loc_830DD928:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x830dd950
	if (ctx.cr6.gt) goto loc_830DD950;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_830DD93C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x830dd928
	if (!ctx.cr6.lt) goto loc_830DD928;
loc_830DD950:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// b 0x830dd964
	goto loc_830DD964;
loc_830DD958:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x830dd970
	if (ctx.cr6.gt) goto loc_830DD970;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_830DD964:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830dd958
	if (!ctx.cr0.eq) goto loc_830DD958;
loc_830DD970:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DD980"))) PPC_WEAK_FUNC(sub_830DD980);
PPC_FUNC_IMPL(__imp__sub_830DD980) {
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
	// lis r4,29556
	ctx.r4.s64 = 1936982016;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,24948
	ctx.r4.u64 = ctx.r4.u64 | 24948;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830ebcc0
	ctx.lr = 0x830DD9AC;
	sub_830EBCC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830dd9c4
	if (ctx.cr0.lt) goto loc_830DD9C4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830eacf0
	ctx.lr = 0x830DD9BC;
	sub_830EACF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3427(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3427, ctx.r11.u8);
loc_830DD9C4:
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

__attribute__((alias("__imp__sub_830DD9D8"))) PPC_WEAK_FUNC(sub_830DD9D8);
PPC_FUNC_IMPL(__imp__sub_830DD9D8) {
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
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82e29500
	ctx.lr = 0x830DD9FC;
	sub_82E29500(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1120
	ctx.r3.s64 = ctx.r31.s64 + 1120;
	// bl 0x82e29500
	ctx.lr = 0x830DDA0C;
	sub_82E29500(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stb r11,3424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3424, ctx.r11.u8);
	// stb r11,3425(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3425, ctx.r11.u8);
	// stb r11,3426(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3426, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_830DDA60"))) PPC_WEAK_FUNC(sub_830DDA60);
PPC_FUNC_IMPL(__imp__sub_830DDA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x830DDA68;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r29,r11,-11624
	ctx.r29.s64 = ctx.r11.s64 + -11624;
	// bne cr6,0x830dda9c
	if (!ctx.cr6.eq) goto loc_830DDA9C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x830ddaa4
	goto loc_830DDAA4;
loc_830DDA9C:
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r11,r11,-15731
	ctx.r11.s64 = ctx.r11.s64 + -15731;
loc_830DDAA4:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r29,32
	ctx.r5.s64 = ctx.r29.s64 + 32;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x830e84a0
	ctx.lr = 0x830DDACC;
	sub_830E84A0(ctx, base);
	// addi r30,r31,2144
	ctx.r30.s64 = ctx.r31.s64 + 2144;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ddb08
	if (ctx.cr6.eq) goto loc_830DDB08;
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x830e8530
	ctx.lr = 0x830DDAE8;
	sub_830E8530(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830ddb08
	if (ctx.cr0.eq) goto loc_830DDB08;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x830e87a0
	ctx.lr = 0x830DDB08;
	sub_830E87A0(ctx, base);
loc_830DDB08:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830ddb34
	if (ctx.cr0.eq) goto loc_830DDB34;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830DDB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830DDB34:
	// addi r4,r29,124
	ctx.r4.s64 = ctx.r29.s64 + 124;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x830e87a0
	ctx.lr = 0x830DDB44;
	sub_830E87A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r31,1120
	ctx.r3.s64 = ctx.r31.s64 + 1120;
	// bl 0x830e8700
	ctx.lr = 0x830DDB58;
	sub_830E8700(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DDB68"))) PPC_WEAK_FUNC(sub_830DDB68);
PPC_FUNC_IMPL(__imp__sub_830DDB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e50
	ctx.lr = 0x830DDB70;
	__savegprlr_22(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r26,24(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x830dd9d8
	ctx.lr = 0x830DDB98;
	sub_830DD9D8(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dd7e0
	ctx.lr = 0x830DDBB4;
	sub_830DD7E0(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r29,r11,-11488
	ctx.r29.s64 = ctx.r11.s64 + -11488;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bl 0x830e8610
	ctx.lr = 0x830DDBCC;
	sub_830E8610(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// rlwinm r22,r11,27,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x830ddbf0
	if (!ctx.cr6.eq) goto loc_830DDBF0;
	// subfic r11,r22,0
	ctx.xer.ca = ctx.r22.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r22.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,363
	ctx.r11.u64 = ctx.r11.u64 & 363;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r28,r11,80
	ctx.r28.s64 = ctx.r11.s64 + 80;
loc_830DDBF0:
	// lis r4,29556
	ctx.r4.s64 = 1936982016;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,24948
	ctx.r4.u64 = ctx.r4.u64 | 24948;
	// bl 0x830ebcc0
	ctx.lr = 0x830DDC08;
	sub_830EBCC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830ddc4c
	if (ctx.cr0.lt) goto loc_830DDC4C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830ddc4c
	if (!ctx.cr6.eq) goto loc_830DDC4C;
	// addi r4,r31,3168
	ctx.r4.s64 = ctx.r31.s64 + 3168;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830e8610
	ctx.lr = 0x830DDC28;
	sub_830E8610(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830ddc4c
	if (!ctx.cr0.eq) goto loc_830DDC4C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830ddc4c
	if (!ctx.cr6.eq) goto loc_830DDC4C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x830ddc74
	if (ctx.cr6.eq) goto loc_830DDC74;
	// cmpwi cr6,r26,6
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 6, ctx.xer);
	// beq cr6,0x830ddc74
	if (ctx.cr6.eq) goto loc_830DDC74;
loc_830DDC4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830dd980
	ctx.lr = 0x830DDC58;
	sub_830DD980(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,3168
	ctx.r3.s64 = ctx.r31.s64 + 3168;
	// bl 0x830e8700
	ctx.lr = 0x830DDC68;
	sub_830E8700(ctx, base);
	// stw r22,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r22.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_830DDC74:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x830ddca8
	if (ctx.cr6.eq) goto loc_830DDCA8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x830ddca8
	if (ctx.cr6.gt) goto loc_830DDCA8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830DDC8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830ddc8c
	if (!ctx.cr6.eq) goto loc_830DDC8C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_830DDCA8:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mulli r10,r23,6
	ctx.r10.s64 = ctx.r23.s64 * 6;
	// addi r11,r11,-17392
	ctx.r11.s64 = ctx.r11.s64 + -17392;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dda60
	ctx.lr = 0x830DDCD4;
	sub_830DDA60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830ddce4
	if (!ctx.cr0.lt) goto loc_830DDCE4;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x830ddd94
	goto loc_830DDD94;
loc_830DDCE4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x830ddd2c
	if (ctx.cr6.eq) goto loc_830DDD2C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x830ddd2c
	if (ctx.cr6.eq) goto loc_830DDD2C;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x830ddd0c
	if (!ctx.cr6.gt) goto loc_830DDD0C;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_830DDD0C:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830DDD20;
	sub_82E28FD0(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_830DDD2C:
	// cntlzw r11,r23
	ctx.r11.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,3426(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3426, ctx.r11.u8);
	// bl 0x830df1b8
	ctx.lr = 0x830DDD3C;
	sub_830DF1B8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830ddd74
	if (!ctx.cr6.eq) goto loc_830DDD74;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x830eab38
	ctx.lr = 0x830DDD6C;
	sub_830EAB38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830ddd78
	goto loc_830DDD78;
loc_830DDD74:
	// li r11,2
	ctx.r11.s64 = 2;
loc_830DDD78:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x830de968
	ctx.lr = 0x830DDD90;
	sub_830DE968(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830DDD94:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82e28ea0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DDDA0"))) PPC_WEAK_FUNC(sub_830DDDA0);
PPC_FUNC_IMPL(__imp__sub_830DDDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830DDDA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830dde10
	if (ctx.cr6.eq) goto loc_830DDE10;
loc_830DDDCC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,13
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 13, ctx.xer);
	// bne cr6,0x830dddfc
	if (!ctx.cr6.eq) goto loc_830DDDFC;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r8,10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 10, ctx.xer);
	// bne cr6,0x830dddfc
	if (!ctx.cr6.eq) goto loc_830DDDFC;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r8,13
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 13, ctx.xer);
	// bne cr6,0x830dddfc
	if (!ctx.cr6.eq) goto loc_830DDDFC;
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r8,10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 10, ctx.xer);
	// beq cr6,0x830dde08
	if (ctx.cr6.eq) goto loc_830DDE08;
loc_830DDDFC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830dddcc
	if (!ctx.cr6.eq) goto loc_830DDDCC;
loc_830DDE08:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830dde18
	if (!ctx.cr6.eq) goto loc_830DDE18;
loc_830DDE10:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830de018
	goto loc_830DE018;
loc_830DDE18:
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stb r29,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r29.u8);
	// stb r29,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r29.u8);
	// lbz r11,3429(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3429);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r30,r11,-11376
	ctx.r30.s64 = ctx.r11.s64 + -11376;
	// beq 0x830dde6c
	if (ctx.cr0.eq) goto loc_830DDE6C;
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82e2efb0
	ctx.lr = 0x830DDE54;
	sub_82E2EFB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830dde6c
	if (ctx.cr0.eq) goto loc_830DDE6C;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,-2
	ctx.r3.s64 = -2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x830de018
	goto loc_830DE018;
loc_830DDE6C:
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82e2efb0
	ctx.lr = 0x830DDE7C;
	sub_82E2EFB0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,3430(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3430, ctx.r11.u8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x830ddea0
	goto loc_830DDEA0;
loc_830DDE94:
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// ble cr6,0x830ddebc
	if (!ctx.cr6.gt) goto loc_830DDEBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_830DDEA0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830dde94
	if (!ctx.cr0.eq) goto loc_830DDE94;
	// b 0x830ddebc
	goto loc_830DDEBC;
loc_830DDEB0:
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bgt cr6,0x830ddec8
	if (ctx.cr6.gt) goto loc_830DDEC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_830DDEBC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830ddeb0
	if (!ctx.cr0.eq) goto loc_830DDEB0;
loc_830DDEC8:
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// b 0x830ddef0
	goto loc_830DDEF0;
loc_830DDED0:
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x830ddf00
	if (ctx.cr6.gt) goto loc_830DDF00;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r7,10
	ctx.r10.s64 = ctx.r7.s64 * 10;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_830DDEF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// bge cr6,0x830dded0
	if (!ctx.cr6.lt) goto loc_830DDED0;
loc_830DDF00:
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x830e8530
	ctx.lr = 0x830DDF14;
	sub_830E8530(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830ddf80
	if (ctx.cr0.eq) goto loc_830DDF80;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// b 0x830ddf38
	goto loc_830DDF38;
loc_830DDF24:
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x830ddf34
	if (ctx.cr6.lt) goto loc_830DDF34;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x830ddf48
	if (!ctx.cr6.gt) goto loc_830DDF48;
loc_830DDF34:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_830DDF38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bge cr6,0x830ddf24
	if (!ctx.cr6.lt) goto loc_830DDF24;
loc_830DDF48:
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// b 0x830ddf70
	goto loc_830DDF70;
loc_830DDF50:
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x830ddf80
	if (ctx.cr6.gt) goto loc_830DDF80;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 * 10;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_830DDF70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// bge cr6,0x830ddf50
	if (!ctx.cr6.lt) goto loc_830DDF50;
loc_830DDF80:
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// bl 0x830e8530
	ctx.lr = 0x830DDF90;
	sub_830E8530(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830ddfa4
	if (ctx.cr0.eq) goto loc_830DDFA4;
	// addi r3,r3,15
	ctx.r3.s64 = ctx.r3.s64 + 15;
	// bl 0x830e8bf0
	ctx.lr = 0x830DDFA0;
	sub_830E8BF0(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_830DDFA4:
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x830e8530
	ctx.lr = 0x830DDFB0;
	sub_830E8530(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830ddfc0
	if (ctx.cr0.eq) goto loc_830DDFC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3425(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3425, ctx.r11.u8);
loc_830DDFC0:
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x830e8530
	ctx.lr = 0x830DDFCC;
	sub_830E8530(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x830e8530
	ctx.lr = 0x830DDFE0;
	sub_830E8530(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,3427(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3427, ctx.r11.u8);
	// bl 0x830e8700
	ctx.lr = 0x830DE000;
	sub_830E8700(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
loc_830DE018:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DE020"))) PPC_WEAK_FUNC(sub_830DE020);
PPC_FUNC_IMPL(__imp__sub_830DE020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830DE028;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de04c
	if (!ctx.cr6.eq) goto loc_830DE04C;
loc_830DE044:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830de140
	goto loc_830DE140;
loc_830DE04C:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830de0e0
	if (!ctx.cr0.eq) goto loc_830DE0E0;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830de098
	if (!ctx.cr6.lt) goto loc_830DE098;
loc_830DE074:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bne cr6,0x830de08c
	if (!ctx.cr6.eq) goto loc_830DE08C;
	// lbz r10,1(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x830de098
	if (ctx.cr6.eq) goto loc_830DE098;
loc_830DE08C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830de074
	if (ctx.cr6.lt) goto loc_830DE074;
loc_830DE098:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830de044
	if (ctx.cr6.eq) goto loc_830DE044;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e2a8d8
	ctx.lr = 0x830DE0B0;
	sub_82E2A8D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// bne 0x830de0cc
	if (!ctx.cr0.eq) goto loc_830DE0CC;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x830de140
	goto loc_830DE140;
loc_830DE0CC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_830DE0E0:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x830de0f8
	if (!ctx.cr6.gt) goto loc_830DE0F8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_830DE0F8:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x830de134
	if (ctx.cr6.lt) goto loc_830DE134;
	// addi r9,r3,2
	ctx.r9.s64 = ctx.r3.s64 + 2;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x830de118
	if (ctx.cr6.lt) goto loc_830DE118;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x830de138
	goto loc_830DE138;
loc_830DE118:
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de148
	if (!ctx.cr6.eq) goto loc_830DE148;
	// li r10,1
	ctx.r10.s64 = 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stb r10,3431(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3431, ctx.r10.u8);
loc_830DE134:
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_830DE138:
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
loc_830DE13C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_830DE140:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_830DE148:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830de13c
	goto loc_830DE13C;
}

__attribute__((alias("__imp__sub_830DE150"))) PPC_WEAK_FUNC(sub_830DE150);
PPC_FUNC_IMPL(__imp__sub_830DE150) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830ebab8
	ctx.lr = 0x830DE170;
	sub_830EBAB8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x830de18c
	if (!ctx.cr0.gt) goto loc_830DE18C;
	// bl 0x830df1b8
	ctx.lr = 0x830DE17C;
	sub_830DF1B8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x830de19c
	goto loc_830DE19C;
loc_830DE18C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x830de19c
	if (!ctx.cr6.lt) goto loc_830DE19C;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_830DE19C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_830DE1B8"))) PPC_WEAK_FUNC(sub_830DE1B8);
PPC_FUNC_IMPL(__imp__sub_830DE1B8) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830ebb90
	ctx.lr = 0x830DE1D8;
	sub_830EBB90(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x830de1f0
	if (!ctx.cr0.gt) goto loc_830DE1F0;
	// bl 0x830df1b8
	ctx.lr = 0x830DE1E4;
	sub_830DF1B8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_830DE1F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_830DE210"))) PPC_WEAK_FUNC(sub_830DE210);
PPC_FUNC_IMPL(__imp__sub_830DE210) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DE220"))) PPC_WEAK_FUNC(sub_830DE220);
PPC_FUNC_IMPL(__imp__sub_830DE220) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830de244
	if (ctx.cr0.eq) goto loc_830DE244;
	// bl 0x830eaa10
	ctx.lr = 0x830DE244;
	sub_830EAA10(ctx, base);
loc_830DE244:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830de260
	if (ctx.cr0.eq) goto loc_830DE260;
	// lis r4,28776
	ctx.r4.s64 = 1885863936;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r4,r4,29808
	ctx.r4.u64 = ctx.r4.u64 | 29808;
	// bl 0x82217db8
	ctx.lr = 0x830DE260;
	sub_82217DB8(ctx, base);
loc_830DE260:
	// lis r4,28776
	ctx.r4.s64 = 1885863936;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,29808
	ctx.r4.u64 = ctx.r4.u64 | 29808;
	// bl 0x82217db8
	ctx.lr = 0x830DE274;
	sub_82217DB8(ctx, base);
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

__attribute__((alias("__imp__sub_830DE288"))) PPC_WEAK_FUNC(sub_830DE288);
PPC_FUNC_IMPL(__imp__sub_830DE288) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x830ddb68
	sub_830DDB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DE2A0"))) PPC_WEAK_FUNC(sub_830DE2A0);
PPC_FUNC_IMPL(__imp__sub_830DE2A0) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// b 0x830ddb68
	sub_830DDB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DE2B8"))) PPC_WEAK_FUNC(sub_830DE2B8);
PPC_FUNC_IMPL(__imp__sub_830DE2B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x830de2cc
	if (!ctx.cr6.lt) goto loc_830DE2CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830DE2CC:
	// beq cr6,0x830de2d8
	if (ctx.cr6.eq) goto loc_830DE2D8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_830DE2D8:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x830de2e8
	if (!ctx.cr6.gt) goto loc_830DE2E8;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_830DE2E8:
	// b 0x830de150
	sub_830DE150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DE2F0"))) PPC_WEAK_FUNC(sub_830DE2F0);
PPC_FUNC_IMPL(__imp__sub_830DE2F0) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-11356
	ctx.r4.s64 = ctx.r11.s64 + -11356;
	// bl 0x830dd980
	ctx.lr = 0x830DE310;
	sub_830DD980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd9d8
	ctx.lr = 0x830DE318;
	sub_830DD9D8(ctx, base);
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

__attribute__((alias("__imp__sub_830DE330"))) PPC_WEAK_FUNC(sub_830DE330);
PPC_FUNC_IMPL(__imp__sub_830DE330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,24944
	ctx.r9.s64 = 1634729984;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// ori r9,r9,28260
	ctx.r9.u64 = ctx.r9.u64 | 28260;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de36c
	if (!ctx.cr6.eq) goto loc_830DE36C;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r3,r11,2144
	ctx.r3.s64 = ctx.r11.s64 + 2144;
	// bl 0x830e8700
	ctx.lr = 0x830DE364;
	sub_830E8700(ctx, base);
loc_830DE364:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830de418
	goto loc_830DE418;
loc_830DE36C:
	// lis r9,25705
	ctx.r9.s64 = 1684602880;
	// ori r9,r9,29539
	ctx.r9.u64 = ctx.r9.u64 | 29539;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de390
	if (!ctx.cr6.eq) goto loc_830DE390;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r10,-11348
	ctx.r4.s64 = ctx.r10.s64 + -11348;
	// bl 0x830dd980
	ctx.lr = 0x830DE38C;
	sub_830DD980(ctx, base);
	// b 0x830de364
	goto loc_830DE364;
loc_830DE390:
	// lis r9,26742
	ctx.r9.s64 = 1752563712;
	// ori r9,r9,25970
	ctx.r9.u64 = ctx.r9.u64 | 25970;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de3a4
	if (!ctx.cr6.eq) goto loc_830DE3A4;
	// stb r5,3429(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3429, ctx.r5.u8);
loc_830DE3A4:
	// lis r9,27493
	ctx.r9.s64 = 1801781248;
	// ori r9,r9,25968
	ctx.r9.u64 = ctx.r9.u64 | 25968;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de3c0
	if (!ctx.cr6.eq) goto loc_830DE3C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r5.u32);
	// b 0x830de418
	goto loc_830DE418;
loc_830DE3C0:
	// lis r9,29293
	ctx.r9.s64 = 1919746048;
	// ori r9,r9,24952
	ctx.r9.u64 = ctx.r9.u64 | 24952;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de3dc
	if (!ctx.cr6.eq) goto loc_830DE3DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r5.u32);
	// b 0x830de418
	goto loc_830DE418;
loc_830DE3DC:
	// lis r9,29552
	ctx.r9.s64 = 1936719872;
	// ori r9,r9,24941
	ctx.r9.u64 = ctx.r9.u64 | 24941;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de3f8
	if (!ctx.cr6.eq) goto loc_830DE3F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r5,3428(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3428, ctx.r5.u8);
	// b 0x830de418
	goto loc_830DE418;
loc_830DE3F8:
	// lis r9,29801
	ctx.r9.s64 = 1953038336;
	// ori r9,r9,28005
	ctx.r9.u64 = ctx.r9.u64 | 28005;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de414
	if (!ctx.cr6.eq) goto loc_830DE414;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r5.u32);
	// b 0x830de418
	goto loc_830DE418;
loc_830DE414:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_830DE418:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DE428"))) PPC_WEAK_FUNC(sub_830DE428);
PPC_FUNC_IMPL(__imp__sub_830DE428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,29553
	ctx.r9.s64 = 1936785408;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// ori r4,r9,30053
	ctx.r4.u64 = ctx.r9.u64 | 30053;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x830de470
	if (!ctx.cr6.eq) goto loc_830DE470;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830de5bc
	if (ctx.cr0.eq) goto loc_830DE5BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830ebcc0
	ctx.lr = 0x830DE46C;
	sub_830EBCC0(ctx, base);
	// b 0x830de5c0
	goto loc_830DE5C0;
loc_830DE470:
	// lis r9,26735
	ctx.r9.s64 = 1752104960;
	// ori r9,r9,29556
	ctx.r9.u64 = ctx.r9.u64 | 29556;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de490
	if (!ctx.cr6.eq) goto loc_830DE490;
	// addi r4,r10,3168
	ctx.r4.s64 = ctx.r10.s64 + 3168;
loc_830DE484:
	// bl 0x830e8700
	ctx.lr = 0x830DE488;
	sub_830E8700(ctx, base);
loc_830DE488:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830de5c0
	goto loc_830DE5C0;
loc_830DE490:
	// lis r9,29300
	ctx.r9.s64 = 1920204800;
	// ori r9,r9,30836
	ctx.r9.u64 = ctx.r9.u64 | 30836;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de4a8
	if (!ctx.cr6.eq) goto loc_830DE4A8;
	// addi r4,r10,1120
	ctx.r4.s64 = ctx.r10.s64 + 1120;
	// b 0x830de484
	goto loc_830DE484;
loc_830DE4A8:
	// lis r9,25711
	ctx.r9.s64 = 1684996096;
	// ori r9,r9,28261
	ctx.r9.u64 = ctx.r9.u64 | 28261;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de4d4
	if (!ctx.cr6.eq) goto loc_830DE4D4;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x830de5bc
	if (ctx.cr6.eq) goto loc_830DE5BC;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x830de5c0
	goto loc_830DE5C0;
loc_830DE4D4:
	// lis r9,25697
	ctx.r9.s64 = 1684078592;
	// ori r9,r9,29793
	ctx.r9.u64 = ctx.r9.u64 | 29793;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de508
	if (!ctx.cr6.eq) goto loc_830DE508;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x830de5bc
	if (ctx.cr6.eq) goto loc_830DE5BC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x830de500
	if (ctx.cr6.eq) goto loc_830DE500;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x830de488
	if (!ctx.cr6.eq) goto loc_830DE488;
loc_830DE500:
	// lwz r3,60(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// b 0x830de5c0
	goto loc_830DE5C0;
loc_830DE508:
	// lis r9,25455
	ctx.r9.s64 = 1668218880;
	// ori r9,r9,25701
	ctx.r9.u64 = ctx.r9.u64 | 25701;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de520
	if (!ctx.cr6.eq) goto loc_830DE520;
	// lwz r3,28(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// b 0x830de5c0
	goto loc_830DE5C0;
loc_830DE520:
	// lis r9,29801
	ctx.r9.s64 = 1953038336;
	// ori r9,r9,28005
	ctx.r9.u64 = ctx.r9.u64 | 28005;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de538
	if (!ctx.cr6.eq) goto loc_830DE538;
	// lbz r3,3424(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3424);
	// b 0x830de5c0
	goto loc_830DE5C0;
loc_830DE538:
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// beq cr6,0x830de5bc
	if (ctx.cr6.eq) goto loc_830DE5BC;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x830de55c
	if (ctx.cr6.eq) goto loc_830DE55C;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// beq cr6,0x830de55c
	if (ctx.cr6.eq) goto loc_830DE55C;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x830de5c0
	goto loc_830DE5C0;
loc_830DE55C:
	// lis r9,26725
	ctx.r9.s64 = 1751449600;
	// ori r9,r9,24932
	ctx.r9.u64 = ctx.r9.u64 | 24932;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de574
	if (!ctx.cr6.eq) goto loc_830DE574;
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// b 0x830de5c0
	goto loc_830DE5C0;
loc_830DE574:
	// lis r9,25199
	ctx.r9.s64 = 1651441664;
	// ori r9,r9,25721
	ctx.r9.u64 = ctx.r9.u64 | 25721;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de58c
	if (!ctx.cr6.eq) goto loc_830DE58C;
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// b 0x830de5c0
	goto loc_830DE5C0;
loc_830DE58C:
	// lis r9,25697
	ctx.r9.s64 = 1684078592;
	// ori r9,r9,29797
	ctx.r9.u64 = ctx.r9.u64 | 29797;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de5a4
	if (!ctx.cr6.eq) goto loc_830DE5A4;
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// b 0x830de5c0
	goto loc_830DE5C0;
loc_830DE5A4:
	// lis r9,26740
	ctx.r9.s64 = 1752432640;
	// ori r9,r9,30836
	ctx.r9.u64 = ctx.r9.u64 | 30836;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830de5bc
	if (!ctx.cr6.eq) goto loc_830DE5BC;
	// addi r4,r10,96
	ctx.r4.s64 = ctx.r10.s64 + 96;
	// b 0x830de484
	goto loc_830DE484;
loc_830DE5BC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_830DE5C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DE5D0"))) PPC_WEAK_FUNC(sub_830DE5D0);
PPC_FUNC_IMPL(__imp__sub_830DE5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830DE5D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r11,-11300
	ctx.r5.s64 = ctx.r11.s64 + -11300;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830e84a0
	ctx.lr = 0x830DE5FC;
	sub_830E84A0(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// b 0x830de618
	goto loc_830DE618;
loc_830DE608:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x830de640
	if (!ctx.cr6.gt) goto loc_830DE640;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_830DE618:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830de608
	if (!ctx.cr6.eq) goto loc_830DE608;
	// b 0x830de640
	goto loc_830DE640;
loc_830DE628:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x830de64c
	if (!ctx.cr6.gt) goto loc_830DE64C;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_830DE640:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830de628
	if (!ctx.cr0.eq) goto loc_830DE628;
loc_830DE64C:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830de680
	if (ctx.cr0.eq) goto loc_830DE680;
loc_830DE658:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x830de680
	if (!ctx.cr6.gt) goto loc_830DE680;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830de658
	if (!ctx.cr6.eq) goto loc_830DE658;
loc_830DE680:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DE698"))) PPC_WEAK_FUNC(sub_830DE698);
PPC_FUNC_IMPL(__imp__sub_830DE698) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// b 0x830de6b4
	goto loc_830DE6B4;
loc_830DE6A4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x830de6dc
	if (!ctx.cr6.gt) goto loc_830DE6DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_830DE6B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830de6a4
	if (!ctx.cr6.eq) goto loc_830DE6A4;
	// b 0x830de6dc
	goto loc_830DE6DC;
loc_830DE6C4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x830de6e8
	if (!ctx.cr6.gt) goto loc_830DE6E8;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_830DE6DC:
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830de6c4
	if (!ctx.cr0.eq) goto loc_830DE6C4;
loc_830DE6E8:
	// lis r8,-31973
	ctx.r8.s64 = -2095382528;
	// addi r8,r8,-11040
	ctx.r8.s64 = ctx.r8.s64 + -11040;
	// b 0x830de750
	goto loc_830DE750;
loc_830DE6F4:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x830de78c
	if (!ctx.cr6.gt) goto loc_830DE78C;
	// addi r7,r8,-256
	ctx.r7.s64 = ctx.r8.s64 + -256;
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lbzx r7,r5,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// cmplwi cr6,r7,48
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 48, ctx.xer);
	// bne cr6,0x830de744
	if (!ctx.cr6.eq) goto loc_830DE744;
	// li r7,37
	ctx.r7.s64 = 37;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// rlwinm r7,r9,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// lbzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// b 0x830de748
	goto loc_830DE748;
loc_830DE744:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_830DE748:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_830DE750:
	// lbz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830de6f4
	if (!ctx.cr0.eq) goto loc_830DE6F4;
	// b 0x830de78c
	goto loc_830DE78C;
loc_830DE760:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x830de798
	if (!ctx.cr6.gt) goto loc_830DE798;
	// addi r7,r8,-256
	ctx.r7.s64 = ctx.r8.s64 + -256;
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// lbzx r7,r5,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// cmplwi cr6,r7,48
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 48, ctx.xer);
	// beq cr6,0x830de798
	if (ctx.cr6.eq) goto loc_830DE798;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_830DE78C:
	// lbz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830de760
	if (!ctx.cr0.eq) goto loc_830DE760;
loc_830DE798:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DE7A8"))) PPC_WEAK_FUNC(sub_830DE7A8);
PPC_FUNC_IMPL(__imp__sub_830DE7A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830de7c0
	if (!ctx.cr0.eq) goto loc_830DE7C0;
loc_830DE7B4:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_830DE7C0:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r9,76(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// ble cr6,0x830de7e8
	if (!ctx.cr6.gt) goto loc_830DE7E8;
	// b 0x830de7b4
	goto loc_830DE7B4;
loc_830DE7DC:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x830de804
	if (ctx.cr6.eq) goto loc_830DE804;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_830DE7E8:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830de7dc
	if (!ctx.cr0.eq) goto loc_830DE7DC;
	// b 0x830de804
	goto loc_830DE804;
loc_830DE7F8:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x830de810
	if (ctx.cr6.gt) goto loc_830DE810;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_830DE804:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830de7f8
	if (!ctx.cr0.eq) goto loc_830DE7F8;
loc_830DE810:
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x830de828
	goto loc_830DE828;
loc_830DE820:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_830DE828:
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bgt cr6,0x830de820
	if (ctx.cr6.gt) goto loc_830DE820;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ble 0x830de86c
	if (!ctx.cr0.gt) goto loc_830DE86C;
loc_830DE84C:
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r6,52(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbx r8,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r8.u8);
	// bgt 0x830de84c
	if (ctx.cr0.gt) goto loc_830DE84C;
loc_830DE86C:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r7,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// lbz r11,3426(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3426);
	// stw r7,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r7.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x830ddb68
	sub_830DDB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DE898"))) PPC_WEAK_FUNC(sub_830DE898);
PPC_FUNC_IMPL(__imp__sub_830DE898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830DE8A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830e88c8
	ctx.lr = 0x830DE8AC;
	sub_830E88C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,4096
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4096, ctx.xer);
	// bge cr6,0x830de8bc
	if (!ctx.cr6.lt) goto loc_830DE8BC;
	// li r29,4096
	ctx.r29.s64 = 4096;
loc_830DE8BC:
	// lis r4,28776
	ctx.r4.s64 = 1885863936;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,29808
	ctx.r4.u64 = ctx.r4.u64 | 29808;
	// li r3,3432
	ctx.r3.s64 = 3432;
	// bl 0x82217d58
	ctx.lr = 0x830DE8D0;
	sub_82217D58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830de8e0
	if (!ctx.cr0.eq) goto loc_830DE8E0;
loc_830DE8D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830de95c
	goto loc_830DE95C;
loc_830DE8E0:
	// li r5,3432
	ctx.r5.s64 = 3432;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e29500
	ctx.lr = 0x830DE8F0;
	sub_82E29500(ctx, base);
	// bl 0x830ea998
	ctx.lr = 0x830DE8F4;
	sub_830EA998(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne 0x830de90c
	if (!ctx.cr0.eq) goto loc_830DE90C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830DE904:
	// bl 0x830de220
	ctx.lr = 0x830DE908;
	sub_830DE220(ctx, base);
	// b 0x830de8d8
	goto loc_830DE8D8;
loc_830DE90C:
	// lis r4,28776
	ctx.r4.s64 = 1885863936;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,29808
	ctx.r4.u64 = ctx.r4.u64 | 29808;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82217d58
	ctx.lr = 0x830DE920;
	sub_82217D58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x830de904
	if (ctx.cr0.eq) goto loc_830DE904;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// li r9,30000
	ctx.r9.s64 = 30000;
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r11,3429(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3429, ctx.r11.u8);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// stb r11,3428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3428, ctx.r11.u8);
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
loc_830DE95C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DE968"))) PPC_WEAK_FUNC(sub_830DE968);
PPC_FUNC_IMPL(__imp__sub_830DE968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x830DE970;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830eb620
	ctx.lr = 0x830DE980;
	sub_830EB620(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r27,7
	ctx.r27.s64 = 7;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830de9bc
	if (ctx.cr0.eq) goto loc_830DE9BC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x830de9bc
	if (ctx.cr6.eq) goto loc_830DE9BC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x830de9bc
	if (ctx.cr6.eq) goto loc_830DE9BC;
	// bl 0x830df1b8
	ctx.lr = 0x830DE9A8;
	sub_830DF1B8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf. r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x830de9bc
	if (ctx.cr0.lt) goto loc_830DE9BC;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stb r26,3424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3424, ctx.r26.u8);
loc_830DE9BC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830dea0c
	if (!ctx.cr6.eq) goto loc_830DEA0C;
	// lis r4,29556
	ctx.r4.s64 = 1936982016;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,24948
	ctx.r4.u64 = ctx.r4.u64 | 24948;
	// bl 0x830ebcc0
	ctx.lr = 0x830DE9E0;
	sub_830EBCC0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x830dea00
	if (!ctx.cr0.gt) goto loc_830DEA00;
	// bl 0x830df1b8
	ctx.lr = 0x830DE9EC;
	sub_830DF1B8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r10,2
	ctx.r10.s64 = 2;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_830DEA00:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x830dea0c
	if (!ctx.cr6.lt) goto loc_830DEA0C;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
loc_830DEA0C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830dea64
	if (!ctx.cr6.eq) goto loc_830DEA64;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830de150
	ctx.lr = 0x830DEA34;
	sub_830DE150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x830dea64
	if (!ctx.cr0.gt) goto loc_830DEA64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// bne 0x830dea64
	if (!ctx.cr0.eq) goto loc_830DEA64;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_830DEA64:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r29,r11,-11316
	ctx.r29.s64 = ctx.r11.s64 + -11316;
	// bne cr6,0x830deaf0
	if (!ctx.cr6.eq) goto loc_830DEAF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830de1b8
	ctx.lr = 0x830DEA88;
	sub_830DE1B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x830deaa8
	if (!ctx.cr0.gt) goto loc_830DEAA8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r9,4
	ctx.r9.s64 = 4;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stw r26,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r26.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_830DEAA8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x830deaf0
	if (!ctx.cr6.lt) goto loc_830DEAF0;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x830deae8
	if (!ctx.cr6.gt) goto loc_830DEAE8;
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd980
	ctx.lr = 0x830DEAC8;
	sub_830DD980(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,3168
	ctx.r5.s64 = ctx.r31.s64 + 3168;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830eab38
	ctx.lr = 0x830DEAE0;
	sub_830EAB38(ctx, base);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// b 0x830deaf0
	goto loc_830DEAF0;
loc_830DEAE8:
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
loc_830DEAF0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x830deb38
	if (!ctx.cr6.eq) goto loc_830DEB38;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x830de1b8
	ctx.lr = 0x830DEB18;
	sub_830DE1B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x830deb2c
	if (!ctx.cr0.gt) goto loc_830DEB2C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_830DEB2C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x830deb38
	if (!ctx.cr6.lt) goto loc_830DEB38;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
loc_830DEB38:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r30,6
	ctx.r30.s64 = 6;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x830dec88
	if (!ctx.cr6.eq) goto loc_830DEC88;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x830dec88
	if (!ctx.cr6.gt) goto loc_830DEC88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ddda0
	ctx.lr = 0x830DEB5C;
	sub_830DDDA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830dece4
	if (ctx.cr0.lt) goto loc_830DECE4;
	// lbz r11,3430(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3430);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830deb90
	if (!ctx.cr6.eq) goto loc_830DEB90;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830deb90
	if (!ctx.cr6.eq) goto loc_830DEB90;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x830deb90
	if (!ctx.cr6.gt) goto loc_830DEB90;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_830DEB90:
	// lbz r11,3426(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3426);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x830debb4
	if (ctx.cr6.eq) goto loc_830DEBB4;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x830debbc
	if (ctx.cr0.lt) goto loc_830DEBBC;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x830debbc
	if (ctx.cr6.lt) goto loc_830DEBBC;
loc_830DEBB4:
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// b 0x830debc4
	goto loc_830DEBC4;
loc_830DEBBC:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_830DEBC4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,100
	ctx.r10.s64 = 100;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bne cr6,0x830dec88
	if (!ctx.cr6.eq) goto loc_830DEC88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830de7a8
	ctx.lr = 0x830DEBE4;
	sub_830DE7A8(ctx, base);
	// b 0x830dec88
	goto loc_830DEC88;
loc_830DEBE8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x830dec08
	if (!ctx.cr0.gt) goto loc_830DEC08;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830dec08
	if (!ctx.cr6.eq) goto loc_830DEC08;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
loc_830DEC08:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// subf. r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x830deca8
	if (!ctx.cr0.gt) goto loc_830DECA8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830de1b8
	ctx.lr = 0x830DEC2C;
	sub_830DE1B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830deca8
	if (ctx.cr0.eq) goto loc_830DECA8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x830dec54
	if (!ctx.cr6.eq) goto loc_830DEC54;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x830dec98
	if (ctx.cr6.eq) goto loc_830DEC98;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x830dec98
	if (ctx.cr6.eq) goto loc_830DEC98;
loc_830DEC54:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x830decec
	if (ctx.cr6.lt) goto loc_830DECEC;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// blt 0x830dec88
	if (ctx.cr0.lt) goto loc_830DEC88;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x830deca4
	if (!ctx.cr6.lt) goto loc_830DECA4;
loc_830DEC88:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x830debe8
	if (ctx.cr6.eq) goto loc_830DEBE8;
	// b 0x830deca8
	goto loc_830DECA8;
loc_830DEC98:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stb r26,3427(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3427, ctx.r26.u8);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_830DECA4:
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_830DECA8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x830decc0
	if (!ctx.cr6.eq) goto loc_830DECC0;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dd980
	ctx.lr = 0x830DECC0;
	sub_830DD980(ctx, base);
loc_830DECC0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x830dece4
	if (!ctx.cr6.eq) goto loc_830DECE4;
	// lbz r11,3427(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3427);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830dece4
	if (ctx.cr0.eq) goto loc_830DECE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830dd980
	ctx.lr = 0x830DECE4;
	sub_830DD980(ctx, base);
loc_830DECE4:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
loc_830DECEC:
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// b 0x830deca8
	goto loc_830DECA8;
}

__attribute__((alias("__imp__sub_830DECF8"))) PPC_WEAK_FUNC(sub_830DECF8);
PPC_FUNC_IMPL(__imp__sub_830DECF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x830DED00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x830ded28
	if (!ctx.cr6.eq) goto loc_830DED28;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x830deea8
	goto loc_830DEEA8;
loc_830DED28:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x830ded40
	if (ctx.cr6.eq) goto loc_830DED40;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x830ded40
	if (ctx.cr6.eq) goto loc_830DED40;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x830deea8
	goto loc_830DEEA8;
loc_830DED40:
	// lbz r11,3426(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3426);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830ded54
	if (!ctx.cr6.eq) goto loc_830DED54;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x830deea8
	goto loc_830DEEA8;
loc_830DED54:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bge cr6,0x830ded64
	if (!ctx.cr6.lt) goto loc_830DED64;
loc_830DED5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830deea8
	goto loc_830DEEA8;
loc_830DED64:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bge cr6,0x830ded70
	if (!ctx.cr6.lt) goto loc_830DED70;
	// li r28,1
	ctx.r28.s64 = 1;
loc_830DED70:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x830ded7c
	if (!ctx.cr6.lt) goto loc_830DED7C;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_830DED7C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x830ded8c
	if (!ctx.cr6.gt) goto loc_830DED8C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_830DED8C:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x830ded98
	if (!ctx.cr6.gt) goto loc_830DED98;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_830DED98:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x830dedb4
	if (ctx.cr6.gt) goto loc_830DEDB4;
	// lbz r11,3431(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3431);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830dedec
	if (!ctx.cr6.eq) goto loc_830DEDEC;
loc_830DEDB4:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r4,r3,r10
	ctx.r4.u64 = ctx.r3.u64 + ctx.r10.u64;
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x82e29fb0
	ctx.lr = 0x830DEDC8;
	sub_82E29FB0(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stb r11,3431(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3431, ctx.r11.u8);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// bl 0x830de968
	ctx.lr = 0x830DEDEC;
	sub_830DE968(ctx, base);
loc_830DEDEC:
	// lbz r11,3425(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3425);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830dee0c
	if (!ctx.cr6.eq) goto loc_830DEE0C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830de020
	ctx.lr = 0x830DEE04;
	sub_830DE020(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x830dee24
	goto loc_830DEE24;
loc_830DEE0C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x830dee24
	if (!ctx.cr6.gt) goto loc_830DEE24;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_830DEE24:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x830dee40
	if (!ctx.cr6.eq) goto loc_830DEE40;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x830dee40
	if (!ctx.cr6.eq) goto loc_830DEE40;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830deea8
	goto loc_830DEEA8;
loc_830DEE40:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x830dee58
	if (!ctx.cr6.lt) goto loc_830DEE58;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x830ded5c
	if (!ctx.cr6.eq) goto loc_830DED5C;
loc_830DEE58:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x830dee78
	if (ctx.cr6.eq) goto loc_830DEE78;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830DEE78;
	sub_82E28FD0(ctx, base);
loc_830DEE78:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lbz r10,3425(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3425);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bne cr6,0x830deea4
	if (!ctx.cr6.eq) goto loc_830DEEA4;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x830deea4
	if (!ctx.cr6.eq) goto loc_830DEEA4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_830DEEA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830DEEA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DEEB0"))) PPC_WEAK_FUNC(sub_830DEEB0);
PPC_FUNC_IMPL(__imp__sub_830DEEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830DEEB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r5,-1
	ctx.r30.s64 = ctx.r5.s64 + -1;
	// b 0x830deee0
	goto loc_830DEEE0;
loc_830DEECC:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// beq cr6,0x830def04
	if (ctx.cr6.eq) goto loc_830DEF04;
loc_830DEEE0:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r6,r11,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r11.s64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x830decf8
	ctx.lr = 0x830DEEF8;
	sub_830DECF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x830deecc
	if (ctx.cr0.gt) goto loc_830DEECC;
	// b 0x830def08
	goto loc_830DEF08;
loc_830DEF04:
	// li r3,-5
	ctx.r3.s64 = -5;
loc_830DEF08:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x830def24
	if (!ctx.cr6.eq) goto loc_830DEF24;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// b 0x830def38
	goto loc_830DEF38;
loc_830DEF24:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x830def34
	if (!ctx.cr6.lt) goto loc_830DEF34;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// bne cr6,0x830def38
	if (!ctx.cr6.eq) goto loc_830DEF38;
loc_830DEF34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DEF38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DEF40"))) PPC_WEAK_FUNC(sub_830DEF40);
PPC_FUNC_IMPL(__imp__sub_830DEF40) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,97
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 97, ctx.xer);
	// blt cr6,0x830def50
	if (ctx.cr6.lt) goto loc_830DEF50;
	// cmpwi cr6,r3,102
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 102, ctx.xer);
	// ble cr6,0x830def6c
	if (!ctx.cr6.gt) goto loc_830DEF6C;
loc_830DEF50:
	// cmpwi cr6,r3,65
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 65, ctx.xer);
	// blt cr6,0x830def60
	if (ctx.cr6.lt) goto loc_830DEF60;
	// cmpwi cr6,r3,70
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 70, ctx.xer);
	// ble cr6,0x830def6c
	if (!ctx.cr6.gt) goto loc_830DEF6C;
loc_830DEF60:
	// addi r11,r3,-48
	ctx.r11.s64 = ctx.r3.s64 + -48;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x830def74
	if (ctx.cr6.gt) goto loc_830DEF74;
loc_830DEF6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_830DEF74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DEF80"))) PPC_WEAK_FUNC(sub_830DEF80);
PPC_FUNC_IMPL(__imp__sub_830DEF80) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x830def94
	if (!ctx.cr6.lt) goto loc_830DEF94;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830DEF94:
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_830DEF9C:
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x830defb4
	if (ctx.cr6.lt) goto loc_830DEFB4;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// ble cr6,0x830defd0
	if (!ctx.cr6.gt) goto loc_830DEFD0;
loc_830DEFB4:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x830defc4
	if (ctx.cr6.lt) goto loc_830DEFC4;
	// cmpwi cr6,r11,70
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 70, ctx.xer);
	// ble cr6,0x830defd0
	if (!ctx.cr6.gt) goto loc_830DEFD0;
loc_830DEFC4:
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x830df004
	if (ctx.cr6.gt) goto loc_830DF004;
loc_830DEFD0:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// rldicr r8,r10,4,59
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x830defec
	if (ctx.cr6.lt) goto loc_830DEFEC;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// li r10,48
	ctx.r10.s64 = 48;
	// blt cr6,0x830deff0
	if (ctx.cr6.lt) goto loc_830DEFF0;
loc_830DEFEC:
	// li r10,87
	ctx.r10.s64 = 87;
loc_830DEFF0:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// b 0x830def9c
	goto loc_830DEF9C;
loc_830DF004:
	// li r3,1
	ctx.r3.s64 = 1;
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DF010"))) PPC_WEAK_FUNC(sub_830DF010);
PPC_FUNC_IMPL(__imp__sub_830DF010) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830df084
	if (ctx.cr6.eq) goto loc_830DF084;
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x830df084
	if (!ctx.cr0.eq) goto loc_830DF084;
	// li r5,64
	ctx.r5.s64 = 64;
	// ld r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e29500
	ctx.lr = 0x830DF04C;
	sub_82E29500(ctx, base);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r10,-11024
	ctx.r10.s64 = ctx.r10.s64 + -11024;
loc_830DF058:
	// clrlwi r9,r31,28
	ctx.r9.u64 = ctx.r31.u32 & 0xF;
	// rldicl r31,r31,60,4
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// lbzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stbx r9,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x830df058
	if (!ctx.cr6.lt) goto loc_830DF058;
	// li r11,36
	ctx.r11.s64 = 36;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x830df088
	goto loc_830DF088;
loc_830DF084:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DF088:
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

__attribute__((alias("__imp__sub_830DF0A0"))) PPC_WEAK_FUNC(sub_830DF0A0);
PPC_FUNC_IMPL(__imp__sub_830DF0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r3,30837
	ctx.r3.s64 = 2020933632;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,26980
	ctx.r3.u64 = ctx.r3.u64 | 26980;
	// bl 0x830dcee0
	ctx.lr = 0x830DF0CC;
	sub_830DCEE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830df0dc
	if (!ctx.cr0.lt) goto loc_830DF0DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830df0ec
	goto loc_830DF0EC;
loc_830DF0DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830df010
	ctx.lr = 0x830DF0E8;
	sub_830DF010(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_830DF0EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DF100"))) PPC_WEAK_FUNC(sub_830DF100);
PPC_FUNC_IMPL(__imp__sub_830DF100) {
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
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r31,-31966
	ctx.r31.s64 = -2094923776;
	// stw r10,-11004(r30)
	PPC_STORE_U32(ctx.r30.u32 + -11004, ctx.r10.u32);
	// b 0x830df134
	goto loc_830DF134;
loc_830DF128:
	// bl 0x830ec478
	ctx.lr = 0x830DF12C;
	sub_830EC478(ctx, base);
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x82b07ad0
	ctx.lr = 0x830DF134;
	sub_82B07AD0(ctx, base);
loc_830DF134:
	// lwz r11,-15640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15640);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830df128
	if (!ctx.cr6.eq) goto loc_830DF128;
	// stw r11,-11004(r30)
	PPC_STORE_U32(ctx.r30.u32 + -11004, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_830DF160"))) PPC_WEAK_FUNC(sub_830DF160);
PPC_FUNC_IMPL(__imp__sub_830DF160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b061d8
	ctx.lr = 0x830DF174;
	sub_82B061D8(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rotldi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// ld r11,-15688(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -15688);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// divd r10,r10,r11
	ctx.r10.s64 = ctx.r10.s64 / ctx.r11.s64;
	// tdllei r11,0
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// tdlgei r11,-1
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DF1B0"))) PPC_WEAK_FUNC(sub_830DF1B0);
PPC_FUNC_IMPL(__imp__sub_830DF1B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82f66580
	sub_82F66580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DF1B8"))) PPC_WEAK_FUNC(sub_830DF1B8);
PPC_FUNC_IMPL(__imp__sub_830DF1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r11,-15636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830DF1C8"))) PPC_WEAK_FUNC(sub_830DF1C8);
PPC_FUNC_IMPL(__imp__sub_830DF1C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830df1dc
	if (!ctx.cr6.eq) goto loc_830DF1DC;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r11,r11,-15728
	ctx.r11.s64 = ctx.r11.s64 + -15728;
loc_830DF1DC:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x83157d34
	__imp__RtlInitializeCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DF1F8"))) PPC_WEAK_FUNC(sub_830DF1F8);
PPC_FUNC_IMPL(__imp__sub_830DF1F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830df20c
	if (!ctx.cr6.eq) goto loc_830DF20C;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r11,r11,-15728
	ctx.r11.s64 = ctx.r11.s64 + -15728;
loc_830DF20C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DF218"))) PPC_WEAK_FUNC(sub_830DF218);
PPC_FUNC_IMPL(__imp__sub_830DF218) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830df238
	if (ctx.cr6.eq) goto loc_830DF238;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x830df240
	goto loc_830DF240;
loc_830DF238:
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r31,r11,-15728
	ctx.r31.s64 = ctx.r11.s64 + -15728;
loc_830DF240:
	// bl 0x82b076f0
	ctx.lr = 0x830DF244;
	sub_82B076F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x830df298
	if (ctx.cr6.eq) goto loc_830DF298;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
loc_830DF258:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x830df258
	if (!ctx.cr0.eq) goto loc_830DF258;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830df284
	if (ctx.cr6.eq) goto loc_830DF284;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830df2a8
	goto loc_830DF2A8;
loc_830DF284:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x83157d14
	ctx.lr = 0x830DF28C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x82b076f0
	ctx.lr = 0x830DF290;
	sub_82B076F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_830DF298:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_830DF2A8:
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

__attribute__((alias("__imp__sub_830DF2C0"))) PPC_WEAK_FUNC(sub_830DF2C0);
PPC_FUNC_IMPL(__imp__sub_830DF2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830DF2C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830df2e0
	if (ctx.cr6.eq) goto loc_830DF2E0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x830df2e8
	goto loc_830DF2E8;
loc_830DF2E0:
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r31,r11,-15728
	ctx.r31.s64 = ctx.r11.s64 + -15728;
loc_830DF2E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830df218
	ctx.lr = 0x830DF2F0;
	sub_830DF218(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830df368
	if (!ctx.cr0.eq) goto loc_830DF368;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
loc_830DF300:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83157d14
	ctx.lr = 0x830DF308;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_830DF30C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x830df30c
	if (!ctx.cr0.eq) goto loc_830DF30C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830df354
	if (ctx.cr6.eq) goto loc_830DF354;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83157d24
	ctx.lr = 0x830DF338;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82b07ad0
	ctx.lr = 0x830DF340;
	sub_82B07AD0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830df218
	ctx.lr = 0x830DF348;
	sub_830DF218(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830df300
	if (ctx.cr0.eq) goto loc_830DF300;
	// b 0x830df368
	goto loc_830DF368;
loc_830DF354:
	// bl 0x82b076f0
	ctx.lr = 0x830DF358;
	sub_82B076F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_830DF368:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DF370"))) PPC_WEAK_FUNC(sub_830DF370);
PPC_FUNC_IMPL(__imp__sub_830DF370) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830df384
	if (!ctx.cr6.eq) goto loc_830DF384;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r11,r11,-15728
	ctx.r11.s64 = ctx.r11.s64 + -15728;
loc_830DF384:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x830df39c
	if (!ctx.cr6.gt) goto loc_830DF39C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_830DF39C:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x83157d24
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DF3B8"))) PPC_WEAK_FUNC(sub_830DF3B8);
PPC_FUNC_IMPL(__imp__sub_830DF3B8) {
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
	// bl 0x830ec398
	ctx.lr = 0x830DF3D4;
	sub_830EC398(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r31,r11,-15728
	ctx.r31.s64 = ctx.r11.s64 + -15728;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,-11004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11004, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x83157d34
	ctx.lr = 0x830DF400;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x83157d34
	ctx.lr = 0x830DF41C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-3840
	ctx.r5.s64 = ctx.r11.s64 + -3840;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82b07ad8
	ctx.lr = 0x830DF444;
	sub_82B07AD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830df460
	if (ctx.cr0.eq) goto loc_830DF460;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b07878
	ctx.lr = 0x830DF458;
	sub_82B07878(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82b07040
	ctx.lr = 0x830DF460;
	sub_82B07040(ctx, base);
loc_830DF460:
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lwz r11,-11000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830df4a0
	if (ctx.cr6.eq) goto loc_830DF4A0;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82b08168
	ctx.lr = 0x830DF478;
	sub_82B08168(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830df4a0
	if (ctx.cr0.eq) goto loc_830DF4A0;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r11,r11,-3744
	ctx.r11.s64 = ctx.r11.s64 + -3744;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// divd r11,r11,r10
	ctx.r11.s64 = ctx.r11.s64 / ctx.r10.s64;
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// b 0x830df4ac
	goto loc_830DF4AC;
loc_830DF4A0:
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r11,r11,-3664
	ctx.r11.s64 = ctx.r11.s64 + -3664;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_830DF4AC:
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

__attribute__((alias("__imp__sub_830DF4C8"))) PPC_WEAK_FUNC(sub_830DF4C8);
PPC_FUNC_IMPL(__imp__sub_830DF4C8) {
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
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// addi r31,r11,-15728
	ctx.r31.s64 = ctx.r11.s64 + -15728;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x830df4fc
	goto loc_830DF4FC;
loc_830DF4F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82b07ad0
	ctx.lr = 0x830DF4FC;
	sub_82B07AD0(ctx, base);
loc_830DF4FC:
	// lwz r11,-11004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x830df4f4
	if (ctx.cr6.gt) goto loc_830DF4F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_830DF530"))) PPC_WEAK_FUNC(sub_830DF530);
PPC_FUNC_IMPL(__imp__sub_830DF530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830DF538;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-15624
	ctx.r30.s64 = ctx.r11.s64 + -15624;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_830DF54C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830df568
	if (ctx.cr0.eq) goto loc_830DF568;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830DF568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830DF568:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,256
	ctx.r11.s64 = ctx.r30.s64 + 256;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x830df54c
	if (ctx.cr6.lt) goto loc_830DF54C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DF580"))) PPC_WEAK_FUNC(sub_830DF580);
PPC_FUNC_IMPL(__imp__sub_830DF580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830DF588;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r31,r11,-15368
	ctx.r31.s64 = ctx.r11.s64 + -15368;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830df680
	if (!ctx.cr0.eq) goto loc_830DF680;
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
	// bl 0x830dcee0
	ctx.lr = 0x830DF5B8;
	sub_830DCEE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x830df680
	if (!ctx.cr0.gt) goto loc_830DF680;
	// li r4,36
	ctx.r4.s64 = 36;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// clrlwi r3,r10,28
	ctx.r3.u64 = ctx.r10.u32 & 0xF;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r11,r11,-17368
	ctx.r11.s64 = ctx.r11.s64 + -17368;
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
loc_830DF680:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DF690"))) PPC_WEAK_FUNC(sub_830DF690);
PPC_FUNC_IMPL(__imp__sub_830DF690) {
	PPC_FUNC_PROLOGUE();
	// b 0x830df1b8
	sub_830DF1B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DF698"))) PPC_WEAK_FUNC(sub_830DF698);
PPC_FUNC_IMPL(__imp__sub_830DF698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r10,r11,-15624
	ctx.r10.s64 = ctx.r11.s64 + -15624;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_830DF6AC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x830df6c4
	if (!ctx.cr6.eq) goto loc_830DF6C4;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x830df6e8
	if (ctx.cr6.eq) goto loc_830DF6E8;
loc_830DF6C4:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x830df6f0
	if (ctx.cr6.eq) goto loc_830DF6F0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r10,256
	ctx.r7.s64 = ctx.r10.s64 + 256;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x830df6ac
	if (ctx.cr6.lt) goto loc_830DF6AC;
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
loc_830DF6E8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_830DF6F0:
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

__attribute__((alias("__imp__sub_830DF708"))) PPC_WEAK_FUNC(sub_830DF708);
PPC_FUNC_IMPL(__imp__sub_830DF708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-15624
	ctx.r11.s64 = ctx.r11.s64 + -15624;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_830DF71C:
	// lwz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x830df734
	if (!ctx.cr6.eq) goto loc_830DF734;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x830df750
	if (ctx.cr6.eq) goto loc_830DF750;
loc_830DF734:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r7,r11,260
	ctx.r7.s64 = ctx.r11.s64 + 260;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x830df71c
	if (ctx.cr6.lt) goto loc_830DF71C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_830DF750:
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

__attribute__((alias("__imp__sub_830DF768"))) PPC_WEAK_FUNC(sub_830DF768);
PPC_FUNC_IMPL(__imp__sub_830DF768) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x830dcee0
	ctx.lr = 0x830DF78C;
	sub_830DCEE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830df7b4
	if (ctx.cr0.eq) goto loc_830DF7B4;
	// bl 0x830df1b8
	ctx.lr = 0x830DF798;
	sub_830DF1B8(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r10,-15352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15352);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830df7b4
	if (ctx.cr6.lt) goto loc_830DF7B4;
	// addi r10,r3,5
	ctx.r10.s64 = ctx.r3.s64 + 5;
	// stw r10,-15352(r11)
	PPC_STORE_U32(ctx.r11.u32 + -15352, ctx.r10.u32);
	// bl 0x830df530
	ctx.lr = 0x830DF7B4;
	sub_830DF530(ctx, base);
loc_830DF7B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DF7C8"))) PPC_WEAK_FUNC(sub_830DF7C8);
PPC_FUNC_IMPL(__imp__sub_830DF7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-15624
	ctx.r10.s64 = ctx.r11.s64 + -15624;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_830DF7D8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x830df7ec
	if (ctx.cr6.eq) goto loc_830DF7EC;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_830DF7EC:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r8,r10,256
	ctx.r8.s64 = ctx.r10.s64 + 256;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x830df7d8
	if (ctx.cr6.lt) goto loc_830DF7D8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r11,272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DF808"))) PPC_WEAK_FUNC(sub_830DF808);
PPC_FUNC_IMPL(__imp__sub_830DF808) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_830DF810:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830df810
	if (!ctx.cr6.eq) goto loc_830DF810;
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
loc_830DF834:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x830df834
	if (!ctx.cr6.eq) goto loc_830DF834;
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
	// b 0x830df874
	goto loc_830DF874;
loc_830DF85C:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x830df884
	if (ctx.cr6.eq) goto loc_830DF884;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830df884
	if (!ctx.cr6.eq) goto loc_830DF884;
loc_830DF874:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x830df85c
	if (!ctx.cr6.eq) goto loc_830DF85C;
loc_830DF884:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,42
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 42, ctx.xer);
	// bne cr6,0x830df898
	if (!ctx.cr6.eq) goto loc_830DF898;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_830DF898:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x830df8bc
	if (ctx.cr0.eq) goto loc_830DF8BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x830df898
	if (ctx.cr6.eq) goto loc_830DF898;
loc_830DF8BC:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DF8C8"))) PPC_WEAK_FUNC(sub_830DF8C8);
PPC_FUNC_IMPL(__imp__sub_830DF8C8) {
	PPC_FUNC_PROLOGUE();
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
	// b 0x830df8f4
	goto loc_830DF8F4;
loc_830DF8E0:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x830df808
	ctx.lr = 0x830DF8E8;
	sub_830DF808(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830df900
	if (!ctx.cr0.eq) goto loc_830DF900;
	// addi r4,r4,104
	ctx.r4.s64 = ctx.r4.s64 + 104;
loc_830DF8F4:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830df8e0
	if (!ctx.cr6.eq) goto loc_830DF8E0;
loc_830DF900:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830df910
	if (!ctx.cr6.eq) goto loc_830DF910;
	// li r4,0
	ctx.r4.s64 = 0;
loc_830DF910:
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

__attribute__((alias("__imp__sub_830DF928"))) PPC_WEAK_FUNC(sub_830DF928);
PPC_FUNC_IMPL(__imp__sub_830DF928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x830DF930;
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
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// or r26,r8,r7
	ctx.r26.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lwz r29,-15332(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15332);
	// or r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// or r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x830e1aa0
	ctx.lr = 0x830DF990;
	sub_830E1AA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830df8c8
	ctx.lr = 0x830DF99C;
	sub_830DF8C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830df9ec
	if (ctx.cr0.eq) goto loc_830DF9EC;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830df9ec
	if (ctx.cr0.eq) goto loc_830DF9EC;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x830df9ec
	goto loc_830DF9EC;
loc_830DF9B8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830df9e8
	if (!ctx.cr6.eq) goto loc_830DF9E8;
	// lhz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830df9fc
	if (ctx.cr0.eq) goto loc_830DF9FC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x830df9fc
	if (ctx.cr6.eq) goto loc_830DF9FC;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x830df9fc
	if (ctx.cr6.eq) goto loc_830DF9FC;
loc_830DF9E8:
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
loc_830DF9EC:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830df9b8
	if (!ctx.cr6.eq) goto loc_830DF9B8;
	// b 0x830dfa54
	goto loc_830DFA54;
loc_830DF9FC:
	// lhz r29,14(r28)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r28.u32 + 14);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x830dfa0c
	if (!ctx.cr0.eq) goto loc_830DFA0C;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_830DFA0C:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830DFA1C;
	sub_82E28FD0(ctx, base);
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
loc_830DFA54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DFA60"))) PPC_WEAK_FUNC(sub_830DFA60);
PPC_FUNC_IMPL(__imp__sub_830DFA60) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r4,10035
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10035, ctx.xer);
	// beq cr6,0x830dfad0
	if (ctx.cr6.eq) goto loc_830DFAD0;
	// cmpwi cr6,r4,10054
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10054, ctx.xer);
	// beq cr6,0x830dfad0
	if (ctx.cr6.eq) goto loc_830DFAD0;
	// cmpwi cr6,r4,997
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 997, ctx.xer);
	// beq cr6,0x830dfad0
	if (ctx.cr6.eq) goto loc_830DFAD0;
	// cmpwi cr6,r4,10051
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10051, ctx.xer);
	// beq cr6,0x830dfac8
	if (ctx.cr6.eq) goto loc_830DFAC8;
	// cmpwi cr6,r4,10065
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10065, ctx.xer);
	// beq cr6,0x830dfac8
	if (ctx.cr6.eq) goto loc_830DFAC8;
	// cmpwi cr6,r4,10057
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10057, ctx.xer);
	// bne cr6,0x830dfaa0
	if (!ctx.cr6.eq) goto loc_830DFAA0;
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
loc_830DFAA0:
	// cmpwi cr6,r4,10061
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10061, ctx.xer);
	// bne cr6,0x830dfab0
	if (!ctx.cr6.eq) goto loc_830DFAB0;
	// li r3,-6
	ctx.r3.s64 = -6;
	// blr 
	return;
loc_830DFAB0:
	// cmpwi cr6,r4,10022
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10022, ctx.xer);
	// bne cr6,0x830dfac0
	if (!ctx.cr6.eq) goto loc_830DFAC0;
	// li r3,-11
	ctx.r3.s64 = -11;
	// blr 
	return;
loc_830DFAC0:
	// li r3,-7
	ctx.r3.s64 = -7;
	// blr 
	return;
loc_830DFAC8:
	// li r3,-5
	ctx.r3.s64 = -5;
	// blr 
	return;
loc_830DFAD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DFAD8"))) PPC_WEAK_FUNC(sub_830DFAD8);
PPC_FUNC_IMPL(__imp__sub_830DFAD8) {
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
	// bl 0x82c19dd8
	ctx.lr = 0x830DFAF0;
	sub_82C19DD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dfa60
	ctx.lr = 0x830DFAFC;
	sub_830DFA60(ctx, base);
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

__attribute__((alias("__imp__sub_830DFB10"))) PPC_WEAK_FUNC(sub_830DFB10);
PPC_FUNC_IMPL(__imp__sub_830DFB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x830DFB18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r28,-15332(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15332);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x830dfb68
	if (!ctx.cr6.eq) goto loc_830DFB68;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c19b90
	ctx.lr = 0x830DFB54;
	sub_82C19B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x830dfb68
	if (!ctx.cr6.eq) goto loc_830DFB68;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830dfc30
	goto loc_830DFC30;
loc_830DFB68:
	// lis r4,25715
	ctx.r4.s64 = 1685258240;
	// lwz r5,3916(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3916);
	// li r3,1444
	ctx.r3.s64 = 1444;
	// ori r4,r4,28515
	ctx.r4.u64 = ctx.r4.u64 | 28515;
	// bl 0x82217d58
	ctx.lr = 0x830DFB7C;
	sub_82217D58(ctx, base);
	// li r5,1444
	ctx.r5.s64 = 1444;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e29500
	ctx.lr = 0x830DFB8C;
	sub_82E29500(ctx, base);
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
	// bl 0x82c19bc8
	ctx.lr = 0x830DFBA4;
	sub_82C19BC8(ctx, base);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x830dfbd0
	if (!ctx.cr6.eq) goto loc_830DFBD0;
	// cmpwi cr6,r27,254
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 254, ctx.xer);
	// beq cr6,0x830dfbd0
	if (ctx.cr6.eq) goto loc_830DFBD0;
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
	// bl 0x82c19be0
	ctx.lr = 0x830DFBD0;
	sub_82C19BE0(ctx, base);
loc_830DFBD0:
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
	// bl 0x82c19de0
	ctx.lr = 0x830DFBF8;
	sub_82C19DE0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// addi r4,r11,-10972
	ctx.r4.s64 = ctx.r11.s64 + -10972;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bl 0x830df1c8
	ctx.lr = 0x830DFC10;
	sub_830DF1C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830df2c0
	ctx.lr = 0x830DFC18;
	sub_830DF2C0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// bl 0x830df370
	ctx.lr = 0x830DFC2C;
	sub_830DF370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830DFC30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DFC38"))) PPC_WEAK_FUNC(sub_830DFC38);
PPC_FUNC_IMPL(__imp__sub_830DFC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x830DFC40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r30,-15332(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15332);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bl 0x830df2c0
	ctx.lr = 0x830DFC64;
	sub_830DF2C0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x830dfc84
	goto loc_830DFC84;
loc_830DFC70:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x830dfc90
	if (ctx.cr6.eq) goto loc_830DFC90;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_830DFC84:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830dfc70
	if (!ctx.cr6.eq) goto loc_830DFC70;
	// b 0x830dfc9c
	goto loc_830DFC9C;
loc_830DFC90:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_830DFC9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830df370
	ctx.lr = 0x830DFCA4;
	sub_830DF370(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830dfcb4
	if (!ctx.cr0.eq) goto loc_830DFCB4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830dfd48
	goto loc_830DFD48;
loc_830DFCB4:
	// bl 0x830ec440
	ctx.lr = 0x830DFCB8;
	sub_830EC440(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830df2c0
	ctx.lr = 0x830DFCC0;
	sub_830DF2C0(ctx, base);
	// lwz r3,3944(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3944);
	// bl 0x82c19df0
	ctx.lr = 0x830DFCC8;
	sub_82C19DF0(ctx, base);
	// addi r29,r30,3948
	ctx.r29.s64 = ctx.r30.s64 + 3948;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830df2c0
	ctx.lr = 0x830DFCD4;
	sub_830DF2C0(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x830df1f8
	ctx.lr = 0x830DFCDC;
	sub_830DF1F8(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82c19de8
	ctx.lr = 0x830DFCE4;
	sub_82C19DE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// bl 0x830df370
	ctx.lr = 0x830DFCF0;
	sub_830DF370(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830df370
	ctx.lr = 0x830DFCF8;
	sub_830DF370(ctx, base);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x830dfd1c
	if (!ctx.cr6.eq) goto loc_830DFD1C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x830dfd1c
	if (ctx.cr6.eq) goto loc_830DFD1C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82c19bb8
	ctx.lr = 0x830DFD14;
	sub_82C19BB8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82c19ba8
	ctx.lr = 0x830DFD1C;
	sub_82C19BA8(ctx, base);
loc_830DFD1C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r27,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r27.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x830df2c0
	ctx.lr = 0x830DFD30;
	sub_830DF2C0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// bl 0x830df370
	ctx.lr = 0x830DFD44;
	sub_830DF370(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DFD48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DFD50"))) PPC_WEAK_FUNC(sub_830DFD50);
PPC_FUNC_IMPL(__imp__sub_830DFD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830DFD58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830df1b8
	ctx.lr = 0x830DFD64;
	sub_830DF1B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830df2c0
	ctx.lr = 0x830DFD70;
	sub_830DF2C0(ctx, base);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x830dfdd4
	goto loc_830DFDD4;
loc_830DFD78:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830dfdd0
	if (ctx.cr0.eq) goto loc_830DFDD0;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x830dfdd0
	if (ctx.cr0.eq) goto loc_830DFDD0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x830dfdd0
	if (ctx.cr6.eq) goto loc_830DFDD0;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x830dfdd0
	if (!ctx.cr6.gt) goto loc_830DFDD0;
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
	ctx.lr = 0x830DFDC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x830df1b8
	ctx.lr = 0x830DFDC8;
	sub_830DF1B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_830DFDD0:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_830DFDD4:
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x830dfd78
	if (!ctx.cr0.eq) goto loc_830DFD78;
	// b 0x830dfdf8
	goto loc_830DFDF8;
loc_830DFDE0:
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
	// bl 0x82217db8
	ctx.lr = 0x830DFDF8;
	sub_82217DB8(ctx, base);
loc_830DFDF8:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830dfde0
	if (!ctx.cr0.eq) goto loc_830DFDE0;
	// bl 0x830df370
	ctx.lr = 0x830DFE08;
	sub_830DF370(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DFE10"))) PPC_WEAK_FUNC(sub_830DFE10);
PPC_FUNC_IMPL(__imp__sub_830DFE10) {
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
	// beq cr6,0x830dfe54
	if (ctx.cr6.eq) goto loc_830DFE54;
	// bl 0x830df1b8
	ctx.lr = 0x830DFE34;
	sub_830DF1B8(ctx, base);
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
loc_830DFE54:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x830dfe9c
	if (ctx.cr6.eq) goto loc_830DFE9C;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830dfe9c
	if (ctx.cr0.eq) goto loc_830DFE9C;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830dfe9c
	if (ctx.cr0.eq) goto loc_830DFE9C;
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
	ctx.lr = 0x830DFE94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x830df1b8
	ctx.lr = 0x830DFE98;
	sub_830DF1B8(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
loc_830DFE9C:
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

__attribute__((alias("__imp__sub_830DFEB0"))) PPC_WEAK_FUNC(sub_830DFEB0);
PPC_FUNC_IMPL(__imp__sub_830DFEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830DFEB8;
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
	// bne cr6,0x830dff94
	if (!ctx.cr6.eq) goto loc_830DFF94;
	// lbz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x830dff94
	if (ctx.cr6.eq) goto loc_830DFF94;
	// lbz r10,22(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x830dff94
	if (ctx.cr6.eq) goto loc_830DFF94;
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
	// bne cr6,0x830dff44
	if (!ctx.cr6.eq) goto loc_830DFF44;
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
	// bl 0x82c19d48
	ctx.lr = 0x830DFF40;
	sub_82C19D48(ctx, base);
	// b 0x830dff50
	goto loc_830DFF50;
loc_830DFF44:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r31,84
	ctx.r8.s64 = ctx.r31.s64 + 84;
	// bl 0x82c19d00
	ctx.lr = 0x830DFF50;
	sub_82C19D00(ctx, base);
loc_830DFF50:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x830dff78
	if (ctx.cr6.eq) goto loc_830DFF78;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// bl 0x82c19dd8
	ctx.lr = 0x830DFF60;
	sub_82C19DD8(ctx, base);
	// cmpwi cr6,r3,997
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 997, ctx.xer);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// bne cr6,0x830dff8c
	if (!ctx.cr6.eq) goto loc_830DFF8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r11.u8);
	// b 0x830dff8c
	goto loc_830DFF8C;
loc_830DFF78:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi r29,0
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x830dff8c
	if (!ctx.cr0.gt) goto loc_830DFF8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dfe10
	ctx.lr = 0x830DFF8C;
	sub_830DFE10(ctx, base);
loc_830DFF8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x830dff98
	goto loc_830DFF98;
loc_830DFF94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DFF98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DFFA0"))) PPC_WEAK_FUNC(sub_830DFFA0);
PPC_FUNC_IMPL(__imp__sub_830DFFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x830DFFA8;
	__savegprlr_25(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r27,-15332(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15332);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3940(r27)
	PPC_STORE_U32(ctx.r27.u32 + 3940, ctx.r11.u32);
	// bl 0x82e29500
	ctx.lr = 0x830DFFCC;
	sub_82E29500(ctx, base);
	// lwz r11,3936(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3936);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e016c
	if (ctx.cr6.eq) goto loc_830E016C;
	// addi r25,r27,3948
	ctx.r25.s64 = ctx.r27.s64 + 3948;
loc_830DFFE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830df2c0
	ctx.lr = 0x830DFFE8;
	sub_830DF2C0(ctx, base);
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
	// beq 0x830e00b0
	if (ctx.cr0.eq) goto loc_830E00B0;
	// addi r28,r1,84
	ctx.r28.s64 = ctx.r1.s64 + 84;
loc_830E0004:
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// bge cr6,0x830e00b0
	if (!ctx.cr6.lt) goto loc_830E00B0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x830e0020
	if (ctx.cr6.eq) goto loc_830E0020;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x830e00a4
	if (!ctx.cr6.eq) goto loc_830E00A4;
loc_830E0020:
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830df2c0
	ctx.lr = 0x830E002C;
	sub_830DF2C0(ctx, base);
	// addi r5,r31,176
	ctx.r5.s64 = ctx.r31.s64 + 176;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x830e009c
	if (ctx.cr6.gt) goto loc_830E009C;
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
	// bne cr6,0x830e0094
	if (!ctx.cr6.eq) goto loc_830E0094;
	// addi r7,r31,152
	ctx.r7.s64 = ctx.r31.s64 + 152;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// bl 0x82c19cc8
	ctx.lr = 0x830E006C;
	sub_82C19CC8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x830e0084
	if (!ctx.cr6.eq) goto loc_830E0084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r26,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r26.u8);
	// bl 0x830dfe10
	ctx.lr = 0x830E0080;
	sub_830DFE10(ctx, base);
	// b 0x830e0094
	goto loc_830E0094;
loc_830E0084:
	// bl 0x82c19dd8
	ctx.lr = 0x830E0088;
	sub_82C19DD8(ctx, base);
	// cmpwi cr6,r3,996
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 996, ctx.xer);
	// beq cr6,0x830e0094
	if (ctx.cr6.eq) goto loc_830E0094;
	// stb r26,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r26.u8);
loc_830E0094:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dfeb0
	ctx.lr = 0x830E009C;
	sub_830DFEB0(ctx, base);
loc_830E009C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830df370
	ctx.lr = 0x830E00A4;
	sub_830DF370(ctx, base);
loc_830E00A4:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x830e0004
	if (!ctx.cr0.eq) goto loc_830E0004;
loc_830E00B0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830df2c0
	ctx.lr = 0x830E00B8;
	sub_830DF2C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830df370
	ctx.lr = 0x830E00C0;
	sub_830DF370(ctx, base);
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
	// bl 0x82c19e00
	ctx.lr = 0x830E00D8;
	sub_82C19E00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830df370
	ctx.lr = 0x830E00E4;
	sub_830DF370(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x830e0160
	if (ctx.cr6.lt) goto loc_830E0160;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x830e0160
	if (!ctx.cr6.lt) goto loc_830E0160;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830df2c0
	ctx.lr = 0x830E00FC;
	sub_830DF2C0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e0138
	if (ctx.cr0.eq) goto loc_830E0138;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
loc_830E0118:
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830e0134
	if (ctx.cr6.eq) goto loc_830E0134;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830e0118
	if (!ctx.cr0.eq) goto loc_830E0118;
	// b 0x830e0138
	goto loc_830E0138;
loc_830E0134:
	// li r9,1
	ctx.r9.s64 = 1;
loc_830E0138:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x830e0148
	if (ctx.cr6.eq) goto loc_830E0148;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x830e0158
	if (!ctx.cr6.eq) goto loc_830E0158;
loc_830E0148:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82c19df8
	ctx.lr = 0x830E0158;
	sub_82C19DF8(ctx, base);
loc_830E0158:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830df370
	ctx.lr = 0x830E0160;
	sub_830DF370(ctx, base);
loc_830E0160:
	// lwz r11,3936(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3936);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830dffe0
	if (!ctx.cr6.eq) goto loc_830DFFE0;
loc_830E016C:
	// stw r26,3940(r27)
	PPC_STORE_U32(ctx.r27.u32 + 3940, ctx.r26.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E0178"))) PPC_WEAK_FUNC(sub_830E0178);
PPC_FUNC_IMPL(__imp__sub_830E0178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830E0180;
	__savegprlr_28(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31966
	ctx.r29.s64 = -2094923776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,-15332(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -15332);
	// bl 0x830e88c8
	ctx.lr = 0x830E0194;
	sub_830E88C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x830e02a8
	if (!ctx.cr6.eq) goto loc_830E02A8;
	// lis r4,25715
	ctx.r4.s64 = 1685258240;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,28515
	ctx.r4.u64 = ctx.r4.u64 | 28515;
	// li r3,3996
	ctx.r3.s64 = 3996;
	// bl 0x82217d58
	ctx.lr = 0x830E01B4;
	sub_82217D58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x830e02a8
	if (ctx.cr0.eq) goto loc_830E02A8;
	// li r5,3996
	ctx.r5.s64 = 3996;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e29500
	ctx.lr = 0x830E01CC;
	sub_82E29500(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,-15332(r29)
	PPC_STORE_U32(ctx.r29.u32 + -15332, ctx.r31.u32);
	// stw r30,3916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3916, ctx.r30.u32);
	// bl 0x830df3b8
	ctx.lr = 0x830E01DC;
	sub_830DF3B8(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-688
	ctx.r3.s64 = ctx.r11.s64 + -688;
	// bl 0x830ec3a8
	ctx.lr = 0x830E01EC;
	sub_830EC3A8(ctx, base);
	// li r5,400
	ctx.r5.s64 = 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e29500
	ctx.lr = 0x830E01FC;
	sub_82E29500(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,514
	ctx.r3.s64 = 514;
	// bl 0x82c19b78
	ctx.lr = 0x830E0208;
	sub_82C19B78(ctx, base);
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
	// bl 0x82b07638
	ctx.lr = 0x830E0238;
	sub_82B07638(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r3,r31,3948
	ctx.r3.s64 = ctx.r31.s64 + 3948;
	// addi r4,r11,-10960
	ctx.r4.s64 = ctx.r11.s64 + -10960;
	// stw r10,3944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3944, ctx.r10.u32);
	// bl 0x830df1c8
	ctx.lr = 0x830E0250;
	sub_830DF1C8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-96
	ctx.r5.s64 = ctx.r11.s64 + -96;
	// stw r10,3936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3936, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b07ad8
	ctx.lr = 0x830E0278;
	sub_82B07AD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,3936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3936, ctx.r3.u32);
	// beq 0x830e0298
	if (ctx.cr0.eq) goto loc_830E0298;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,3936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3936);
	// bl 0x82b07878
	ctx.lr = 0x830E0290;
	sub_82B07878(ctx, base);
	// lwz r3,3936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3936);
	// bl 0x82b07040
	ctx.lr = 0x830E0298;
	sub_82B07040(ctx, base);
loc_830E0298:
	// bl 0x830ec570
	ctx.lr = 0x830E029C;
	sub_830EC570(ctx, base);
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// stw r3,3928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3928, ctx.r3.u32);
	// stw r11,3932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3932, ctx.r11.u32);
loc_830E02A8:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E02B0"))) PPC_WEAK_FUNC(sub_830E02B0);
PPC_FUNC_IMPL(__imp__sub_830E02B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x830E02B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r30,-15332(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15332);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c19b90
	ctx.lr = 0x830E02DC;
	sub_82C19B90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x830e02f0
	if (!ctx.cr6.eq) goto loc_830E02F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e03b8
	goto loc_830E03B8;
loc_830E02F0:
	// lis r4,25715
	ctx.r4.s64 = 1685258240;
	// lwz r5,3916(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3916);
	// li r3,1444
	ctx.r3.s64 = 1444;
	// ori r4,r4,28515
	ctx.r4.u64 = ctx.r4.u64 | 28515;
	// bl 0x82217d58
	ctx.lr = 0x830E0304;
	sub_82217D58(ctx, base);
	// li r5,1444
	ctx.r5.s64 = 1444;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e29500
	ctx.lr = 0x830E0314;
	sub_82E29500(ctx, base);
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
	// bl 0x82c19bc8
	ctx.lr = 0x830E032C;
	sub_82C19BC8(ctx, base);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x830e0358
	if (!ctx.cr6.eq) goto loc_830E0358;
	// cmpwi cr6,r27,254
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 254, ctx.xer);
	// beq cr6,0x830e0358
	if (ctx.cr6.eq) goto loc_830E0358;
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
	// bl 0x82c19be0
	ctx.lr = 0x830E0358;
	sub_82C19BE0(ctx, base);
loc_830E0358:
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
	// bl 0x82c19de0
	ctx.lr = 0x830E0380;
	sub_82C19DE0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// addi r4,r11,-10972
	ctx.r4.s64 = ctx.r11.s64 + -10972;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bl 0x830df1c8
	ctx.lr = 0x830E0398;
	sub_830DF1C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830df2c0
	ctx.lr = 0x830E03A0;
	sub_830DF2C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bl 0x830df370
	ctx.lr = 0x830E03B4;
	sub_830DF370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830E03B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E03C0"))) PPC_WEAK_FUNC(sub_830E03C0);
PPC_FUNC_IMPL(__imp__sub_830E03C0) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x830dfc38
	sub_830DFC38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E03C8"))) PPC_WEAK_FUNC(sub_830E03C8);
PPC_FUNC_IMPL(__imp__sub_830E03C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830dfc38
	sub_830DFC38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E03DC"))) PPC_WEAK_FUNC(sub_830E03DC);
PPC_FUNC_IMPL(__imp__sub_830E03DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E03E0"))) PPC_WEAK_FUNC(sub_830E03E0);
PPC_FUNC_IMPL(__imp__sub_830E03E0) {
	PPC_FUNC_PROLOGUE();
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
	// beq cr6,0x830e0438
	if (ctx.cr6.eq) goto loc_830E0438;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x830e040c
	if (!ctx.cr6.eq) goto loc_830E040C;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x830e0428
	goto loc_830E0428;
loc_830E040C:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x830e041c
	if (!ctx.cr6.eq) goto loc_830E041C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830e0428
	goto loc_830E0428;
loc_830E041C:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x830e0428
	if (!ctx.cr6.eq) goto loc_830E0428;
	// li r4,2
	ctx.r4.s64 = 2;
loc_830E0428:
	// lbz r10,23(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stb r10,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r10.u8);
	// bl 0x82c19bb8
	ctx.lr = 0x830E0438;
	sub_82C19BB8(ctx, base);
loc_830E0438:
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

__attribute__((alias("__imp__sub_830E0450"))) PPC_WEAK_FUNC(sub_830E0450);
PPC_FUNC_IMPL(__imp__sub_830E0450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830E0458;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
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
	// lwz r28,-15332(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15332);
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
	// bne 0x830e04d0
	if (!ctx.cr0.eq) goto loc_830E04D0;
	// lwz r31,3924(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3924);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x830e04d0
	if (ctx.cr0.eq) goto loc_830E04D0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82e28fd0
	ctx.lr = 0x830E04B0;
	sub_82E28FD0(ctx, base);
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
loc_830E04D0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830e055c
	if (!ctx.cr6.eq) goto loc_830E055C;
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
	// beq 0x830e055c
	if (ctx.cr0.eq) goto loc_830E055C;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r28,3848
	ctx.r11.s64 = ctx.r28.s64 + 3848;
loc_830E0500:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830e051c
	if (ctx.cr6.eq) goto loc_830E051C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x830e0500
	if (ctx.cr6.lt) goto loc_830E0500;
loc_830E051C:
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bge cr6,0x830e055c
	if (!ctx.cr6.lt) goto loc_830E055C;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x830e0548
	if (ctx.cr6.eq) goto loc_830E0548;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82c19bb8
	ctx.lr = 0x830E0538;
	sub_82C19BB8(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82c19ba8
	ctx.lr = 0x830E0540;
	sub_82C19BA8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_830E0548:
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r31,60(r30)
	PPC_STORE_U16(ctx.r30.u32 + 60, ctx.r31.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,22(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22, ctx.r11.u8);
	// b 0x830e05a4
	goto loc_830E05A4;
loc_830E055C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82c19c50
	ctx.lr = 0x830E0568;
	sub_82C19C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c19dd8
	ctx.lr = 0x830E0570;
	sub_82C19DD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dfa60
	ctx.lr = 0x830E057C;
	sub_830DFA60(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830e05a0
	if (!ctx.cr0.eq) goto loc_830E05A0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x830e0598
	if (ctx.cr6.eq) goto loc_830E0598;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x830e05a0
	if (!ctx.cr6.eq) goto loc_830E05A0;
loc_830E0598:
	// lwz r3,3944(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3944);
	// bl 0x82c19df0
	ctx.lr = 0x830E05A0;
	sub_82C19DF0(ctx, base);
loc_830E05A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830E05A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E05B0"))) PPC_WEAK_FUNC(sub_830E05B0);
PPC_FUNC_IMPL(__imp__sub_830E05B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830E05B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r28,-15332(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15332);
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
	// bl 0x830e0450
	ctx.lr = 0x830E05FC;
	sub_830E0450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830e060c
	if (!ctx.cr0.lt) goto loc_830E060C;
	// cmpwi cr6,r3,-11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -11, ctx.xer);
	// bne cr6,0x830e0664
	if (!ctx.cr6.eq) goto loc_830E0664;
loc_830E060C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830df928
	ctx.lr = 0x830E0618;
	sub_830DF928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82c19c68
	ctx.lr = 0x830E0628;
	sub_82C19C68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82c19dd8
	ctx.lr = 0x830E0630;
	sub_82C19DD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dfa60
	ctx.lr = 0x830E063C;
	sub_830DFA60(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x830e0660
	if (!ctx.cr0.eq) goto loc_830E0660;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x830e0658
	if (ctx.cr6.eq) goto loc_830E0658;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x830e0660
	if (!ctx.cr6.eq) goto loc_830E0660;
loc_830E0658:
	// lwz r3,3944(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3944);
	// bl 0x82c19df0
	ctx.lr = 0x830E0660;
	sub_82C19DF0(ctx, base);
loc_830E0660:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830E0664:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E0670"))) PPC_WEAK_FUNC(sub_830E0670);
PPC_FUNC_IMPL(__imp__sub_830E0670) {
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
	// bl 0x82c19c80
	ctx.lr = 0x830E0688;
	sub_82C19C80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c19dd8
	ctx.lr = 0x830E0690;
	sub_82C19DD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dfa60
	ctx.lr = 0x830E069C;
	sub_830DFA60(ctx, base);
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

__attribute__((alias("__imp__sub_830E06B0"))) PPC_WEAK_FUNC(sub_830E06B0);
PPC_FUNC_IMPL(__imp__sub_830E06B0) {
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
	// bne cr6,0x830e06e0
	if (!ctx.cr6.eq) goto loc_830E06E0;
loc_830E06D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e0724
	goto loc_830E0724;
loc_830E06E0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830e06f4
	if (ctx.cr6.eq) goto loc_830E06F4;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x830e06d8
	if (ctx.cr6.lt) goto loc_830E06D8;
loc_830E06F4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830e0720
	if (!ctx.cr6.eq) goto loc_830E0720;
	// bl 0x82c19c90
	ctx.lr = 0x830E0704;
	sub_82C19C90(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x830e0720
	if (ctx.cr6.eq) goto loc_830E0720;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x830dfb10
	ctx.lr = 0x830E071C;
	sub_830DFB10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830E0720:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830E0724:
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

__attribute__((alias("__imp__sub_830E0740"))) PPC_WEAK_FUNC(sub_830E0740);
PPC_FUNC_IMPL(__imp__sub_830E0740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x830E0748;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,-15332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15332);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r10,3988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3988);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830e0794
	if (ctx.cr0.eq) goto loc_830E0794;
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
	ctx.lr = 0x830E078C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x830e0814
	if (ctx.cr0.gt) goto loc_830E0814;
loc_830E0794:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x830e07a8
	if (!ctx.cr6.eq) goto loc_830E07A8;
	// li r3,-11
	ctx.r3.s64 = -11;
	// b 0x830e0814
	goto loc_830E0814;
loc_830E07A8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x830e07bc
	if (!ctx.cr6.eq) goto loc_830E07BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e0814
	goto loc_830E0814;
loc_830E07BC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x830e07d8
	if (!ctx.cr6.eq) goto loc_830E07D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c19d98
	ctx.lr = 0x830E07D4;
	sub_82C19D98(ctx, base);
	// b 0x830e0800
	goto loc_830E0800;
loc_830E07D8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830df928
	ctx.lr = 0x830E07E4;
	sub_830DF928(ctx, base);
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
	// bl 0x82c19db0
	ctx.lr = 0x830E0800;
	sub_82C19DB0(ctx, base);
loc_830E0800:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c19dd8
	ctx.lr = 0x830E0808;
	sub_82C19DD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dfa60
	ctx.lr = 0x830E0814;
	sub_830DFA60(ctx, base);
loc_830E0814:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E0820"))) PPC_WEAK_FUNC(sub_830E0820);
PPC_FUNC_IMPL(__imp__sub_830E0820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e54
	ctx.lr = 0x830E0828;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
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
	// lwz r23,-15332(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15332);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x830e08d4
	if (ctx.cr6.eq) goto loc_830E08D4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x830e08d4
	if (ctx.cr6.eq) goto loc_830E08D4;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x830e0870
	if (!ctx.cr6.eq) goto loc_830E0870;
	// li r3,-11
	ctx.r3.s64 = -11;
	// b 0x830e0984
	goto loc_830E0984;
loc_830E0870:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// beq cr6,0x830e08c0
	if (ctx.cr6.eq) goto loc_830E08C0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x82c19d28
	ctx.lr = 0x830E0890;
	sub_82C19D28(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x830e08c8
	if (!ctx.cr0.gt) goto loc_830E08C8;
	// bl 0x830df1b8
	ctx.lr = 0x830E089C;
	sub_830DF1B8(ctx, base);
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
	// b 0x830e08c8
	goto loc_830E08C8;
loc_830E08C0:
	// bl 0x82c19ce8
	ctx.lr = 0x830E08C4;
	sub_82C19CE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_830E08C8:
	// bl 0x82c19dd8
	ctx.lr = 0x830E08CC;
	sub_82C19DD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x830e0968
	goto loc_830E0968;
loc_830E08D4:
	// addi r24,r31,104
	ctx.r24.s64 = ctx.r31.s64 + 104;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830df2c0
	ctx.lr = 0x830E08E0;
	sub_830DF2C0(ctx, base);
	// lwz r29,176(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi r29,0
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x830e0944
	if (ctx.cr0.eq) goto loc_830E0944;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x830e0944
	if (!ctx.cr6.gt) goto loc_830E0944;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830e0918
	if (ctx.cr6.eq) goto loc_830E0918;
	// addi r4,r31,158
	ctx.r4.s64 = ctx.r31.s64 + 158;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830E0910;
	sub_82E28FD0(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_830E0918:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x830e0940
	if (!ctx.cr6.gt) goto loc_830E0940;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x830e092c
	if (!ctx.cr6.gt) goto loc_830E092C;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_830E092C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,180
	ctx.r4.s64 = ctx.r31.s64 + 180;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830E093C;
	sub_82E28FD0(ctx, base);
	// stw r25,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r25.u32);
loc_830E0940:
	// stw r25,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r25.u32);
loc_830E0944:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,997
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 997, ctx.xer);
	// beq cr6,0x830e095c
	if (ctx.cr6.eq) goto loc_830E095C;
	// stw r25,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r25.u32);
	// lwz r3,3944(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3944);
	// bl 0x82c19df0
	ctx.lr = 0x830E095C;
	sub_82C19DF0(ctx, base);
loc_830E095C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r31,144(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x830df370
	ctx.lr = 0x830E0968;
	sub_830DF370(ctx, base);
loc_830E0968:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x830e0978
	if (!ctx.cr6.eq) goto loc_830E0978;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830e0984
	goto loc_830E0984;
loc_830E0978:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830dfa60
	ctx.lr = 0x830E0984;
	sub_830DFA60(ctx, base);
loc_830E0984:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E0990"))) PPC_WEAK_FUNC(sub_830E0990);
PPC_FUNC_IMPL(__imp__sub_830E0990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x830E0998;
	__savegprlr_25(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
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
	// lwz r27,-15332(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15332);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830e09d4
	if (ctx.cr6.eq) goto loc_830E09D4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e29500
	ctx.lr = 0x830E09D4;
	sub_82E29500(ctx, base);
loc_830E09D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lis r11,25193
	ctx.r11.s64 = 1651048448;
	// bne cr6,0x830e0af0
	if (!ctx.cr6.eq) goto loc_830E0AF0;
	// ori r26,r11,28260
	ctx.r26.u64 = ctx.r11.u64 | 28260;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x830e0a5c
	if (!ctx.cr6.eq) goto loc_830E0A5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// bl 0x830df2c0
	ctx.lr = 0x830E09F8;
	sub_830DF2C0(ctx, base);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x830e0a4c
	if (ctx.cr0.eq) goto loc_830E0A4C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830E0A08:
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
	// bl 0x830e0990
	ctx.lr = 0x830E0A20;
	sub_830E0990(ctx, base);
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
	// bne cr6,0x830e0a40
	if (!ctx.cr6.eq) goto loc_830E0A40;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_830E0A40:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x830e0a08
	if (!ctx.cr0.eq) goto loc_830E0A08;
loc_830E0A4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830df370
	ctx.lr = 0x830E0A54;
	sub_830DF370(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x830e0cd0
	goto loc_830E0CD0;
loc_830E0A5C:
	// lis r11,28001
	ctx.r11.s64 = 1835073536;
	// ori r11,r11,30832
	ctx.r11.u64 = ctx.r11.u64 | 30832;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e0a74
	if (!ctx.cr6.eq) goto loc_830E0A74;
	// li r3,1264
	ctx.r3.s64 = 1264;
	// b 0x830e0cd0
	goto loc_830E0CD0;
loc_830E0A74:
	// lis r11,30829
	ctx.r11.s64 = 2020409344;
	// ori r11,r11,24944
	ctx.r11.u64 = ctx.r11.u64 | 24944;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e0ab4
	if (!ctx.cr6.eq) goto loc_830E0AB4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830e0ae8
	if (ctx.cr6.eq) goto loc_830E0AE8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x830e0ae8
	if (!ctx.cr6.gt) goto loc_830E0AE8;
	// cmplwi cr6,r29,512
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 512, ctx.xer);
	// ble cr6,0x830e0aa0
	if (!ctx.cr6.gt) goto loc_830E0AA0;
	// li r29,512
	ctx.r29.s64 = 512;
loc_830E0AA0:
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
loc_830E0AA4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830E0AB0;
	sub_82E28FD0(ctx, base);
	// b 0x830e0ccc
	goto loc_830E0CCC;
loc_830E0AB4:
	// lis r11,30830
	ctx.r11.s64 = 2020474880;
	// ori r11,r11,24941
	ctx.r11.u64 = ctx.r11.u64 | 24941;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e0ae8
	if (!ctx.cr6.eq) goto loc_830E0AE8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830e0ae8
	if (ctx.cr6.eq) goto loc_830E0AE8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x830e0ae8
	if (!ctx.cr6.gt) goto loc_830E0AE8;
	// cmplwi cr6,r29,3328
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3328, ctx.xer);
	// ble cr6,0x830e0ae0
	if (!ctx.cr6.gt) goto loc_830E0AE0;
	// li r29,3328
	ctx.r29.s64 = 3328;
loc_830E0AE0:
	// addi r4,r27,520
	ctx.r4.s64 = ctx.r27.s64 + 520;
	// b 0x830e0aa4
	goto loc_830E0AA4;
loc_830E0AE8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830e0cd0
	goto loc_830E0CD0;
loc_830E0AF0:
	// ori r11,r11,28260
	ctx.r11.u64 = ctx.r11.u64 | 28260;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e0b9c
	if (!ctx.cr6.eq) goto loc_830E0B9C;
	// lbz r11,22(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 22);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830e0b38
	if (!ctx.cr6.eq) goto loc_830E0B38;
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
	// b 0x830e0b48
	goto loc_830E0B48;
loc_830E0B38:
	// addi r5,r1,820
	ctx.r5.s64 = ctx.r1.s64 + 820;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c19c20
	ctx.lr = 0x830E0B48;
	sub_82C19C20(ctx, base);
loc_830E0B48:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830e0ccc
	if (!ctx.cr6.eq) goto loc_830E0CCC;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e0ccc
	if (ctx.cr0.eq) goto loc_830E0CCC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c1a058
	ctx.lr = 0x830E0B70;
	sub_82C1A058(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x830e1bd8
	ctx.lr = 0x830E0B78;
	sub_830E1BD8(ctx, base);
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
	// b 0x830e0ccc
	goto loc_830E0CCC;
loc_830E0B9C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x830e0bb0
	if (!ctx.cr6.eq) goto loc_830E0BB0;
	// li r3,-7
	ctx.r3.s64 = -7;
	// b 0x830e0cd0
	goto loc_830E0CD0;
loc_830E0BB0:
	// lis r10,25455
	ctx.r10.s64 = 1668218880;
	// ori r10,r10,28270
	ctx.r10.u64 = ctx.r10.u64 | 28270;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x830e0cbc
	if (ctx.cr6.eq) goto loc_830E0CBC;
	// lis r10,28773
	ctx.r10.s64 = 1885667328;
	// ori r10,r10,25970
	ctx.r10.u64 = ctx.r10.u64 | 25970;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x830e0cbc
	if (ctx.cr6.eq) goto loc_830E0CBC;
	// lis r10,28786
	ctx.r10.s64 = 1886519296;
	// ori r10,r10,28532
	ctx.r10.u64 = ctx.r10.u64 | 28532;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x830e0be8
	if (!ctx.cr6.eq) goto loc_830E0BE8;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// b 0x830e0cd0
	goto loc_830E0CD0;
loc_830E0BE8:
	// lis r10,29556
	ctx.r10.s64 = 1936982016;
	// ori r10,r10,24948
	ctx.r10.u64 = ctx.r10.u64 | 24948;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x830e0ae8
	if (!ctx.cr6.eq) goto loc_830E0AE8;
	// lbz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830e0c6c
	if (!ctx.cr6.eq) goto loc_830E0C6C;
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
	// bl 0x82c19ca8
	ctx.lr = 0x830E0C40;
	sub_82C19CA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830e0c6c
	if (ctx.cr0.eq) goto loc_830E0C6C;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e0c5c
	if (ctx.cr6.eq) goto loc_830E0C5C;
	// stb r28,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r28.u8);
	// b 0x830e0c6c
	goto loc_830E0C6C;
loc_830E0C5C:
	// lwz r11,432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e0c6c
	if (ctx.cr6.eq) goto loc_830E0C6C;
	// stb r31,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r31.u8);
loc_830E0C6C:
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x830e0cb0
	if (!ctx.cr0.gt) goto loc_830E0CB0;
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
	// bl 0x82c19c38
	ctx.lr = 0x830E0C90;
	sub_82C19C38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c19dd8
	ctx.lr = 0x830E0C98;
	sub_82C19DD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dfa60
	ctx.lr = 0x830E0CA4;
	sub_830DFA60(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x830e0cb0
	if (!ctx.cr6.eq) goto loc_830E0CB0;
	// stb r28,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r28.u8);
loc_830E0CB0:
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// b 0x830e0cd0
	goto loc_830E0CD0;
loc_830E0CBC:
	// addi r5,r1,820
	ctx.r5.s64 = ctx.r1.s64 + 820;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82c19c38
	ctx.lr = 0x830E0CCC;
	sub_82C19C38(ctx, base);
loc_830E0CCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E0CD0:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E0CD8"))) PPC_WEAK_FUNC(sub_830E0CD8);
PPC_FUNC_IMPL(__imp__sub_830E0CD8) {
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

__attribute__((alias("__imp__sub_830E0D28"))) PPC_WEAK_FUNC(sub_830E0D28);
PPC_FUNC_IMPL(__imp__sub_830E0D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830E0D30;
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
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// lwz r29,-15332(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15332);
	// bne cr6,0x830e0d68
	if (!ctx.cr6.eq) goto loc_830E0D68;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,3924(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3924, ctx.r5.u32);
	// b 0x830e1074
	goto loc_830E1074;
loc_830E0D68:
	// lis r11,28001
	ctx.r11.s64 = 1835073536;
	// ori r11,r11,25714
	ctx.r11.u64 = ctx.r11.u64 | 25714;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e0d9c
	if (!ctx.cr6.eq) goto loc_830E0D9C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830df928
	ctx.lr = 0x830E0D84;
	sub_830DF928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_830E0D90:
	// bl 0x82e28fd0
	ctx.lr = 0x830E0D94;
	sub_82E28FD0(ctx, base);
loc_830E0D94:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e1074
	goto loc_830E1074;
loc_830E0D9C:
	// lis r11,28260
	ctx.r11.s64 = 1852047360;
	// ori r11,r11,27769
	ctx.r11.u64 = ctx.r11.u64 | 27769;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e0df0
	if (!ctx.cr6.eq) goto loc_830E0DF0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830e1070
	if (ctx.cr6.eq) goto loc_830E1070;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830e1070
	if (!ctx.cr6.eq) goto loc_830E1070;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
loc_830E0DC8:
	// addi r6,r1,708
	ctx.r6.s64 = ctx.r1.s64 + 708;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x82c19be0
	ctx.lr = 0x830E0DD8;
	sub_82C19BE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c19dd8
	ctx.lr = 0x830E0DE0;
	sub_82C19DD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dfa60
	ctx.lr = 0x830E0DEC;
	sub_830DFA60(ctx, base);
	// b 0x830e1074
	goto loc_830E1074;
loc_830E0DF0:
	// lis r11,28783
	ctx.r11.s64 = 1886322688;
	// ori r11,r11,27756
	ctx.r11.u64 = ctx.r11.u64 | 27756;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e1038
	if (!ctx.cr6.eq) goto loc_830E1038;
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
	// beq cr6,0x830e0f24
	if (ctx.cr6.eq) goto loc_830E0F24;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x830e0f14
	goto loc_830E0F14;
loc_830E0E3C:
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// bge cr6,0x830e101c
	if (!ctx.cr6.lt) goto loc_830E101C;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x830e0e78
	if (ctx.cr6.eq) goto loc_830E0E78;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r1,372
	ctx.r10.s64 = ctx.r1.s64 + 372;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
loc_830E0E5C:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830e0e78
	if (ctx.cr6.eq) goto loc_830E0E78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x830e0e5c
	if (ctx.cr6.lt) goto loc_830E0E5C;
loc_830E0E78:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x830e0ea8
	if (!ctx.cr6.eq) goto loc_830E0EA8;
	// cmplwi cr6,r7,64
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 64, ctx.xer);
	// bge cr6,0x830e0ea8
	if (!ctx.cr6.lt) goto loc_830E0EA8;
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
loc_830E0EA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x830e0edc
	if (ctx.cr6.eq) goto loc_830E0EDC;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
loc_830E0EC0:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830e0edc
	if (ctx.cr6.eq) goto loc_830E0EDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x830e0ec0
	if (ctx.cr6.lt) goto loc_830E0EC0;
loc_830E0EDC:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x830e0f0c
	if (!ctx.cr6.eq) goto loc_830E0F0C;
	// cmplwi cr6,r8,64
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 64, ctx.xer);
	// bge cr6,0x830e0f0c
	if (!ctx.cr6.lt) goto loc_830E0F0C;
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
loc_830E0F0C:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_830E0F14:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830e0e3c
	if (!ctx.cr6.eq) goto loc_830E0E3C;
	// b 0x830e101c
	goto loc_830E101C;
loc_830E0F24:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830df2c0
	ctx.lr = 0x830E0F2C;
	sub_830DF2C0(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x830e1014
	if (ctx.cr0.eq) goto loc_830E1014;
	// lwz r6,368(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_830E0F44:
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// bge cr6,0x830e1014
	if (!ctx.cr6.lt) goto loc_830E1014;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x830e0f7c
	if (ctx.cr6.eq) goto loc_830E0F7C;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// addi r10,r1,372
	ctx.r10.s64 = ctx.r1.s64 + 372;
loc_830E0F60:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x830e0f7c
	if (ctx.cr6.eq) goto loc_830E0F7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x830e0f60
	if (ctx.cr6.lt) goto loc_830E0F60;
loc_830E0F7C:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x830e0fa8
	if (!ctx.cr6.eq) goto loc_830E0FA8;
	// cmplwi cr6,r6,64
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 64, ctx.xer);
	// bge cr6,0x830e0fa8
	if (!ctx.cr6.lt) goto loc_830E0FA8;
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
loc_830E0FA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x830e0fd8
	if (ctx.cr6.eq) goto loc_830E0FD8;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
loc_830E0FBC:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x830e0fd8
	if (ctx.cr6.eq) goto loc_830E0FD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x830e0fbc
	if (ctx.cr6.lt) goto loc_830E0FBC;
loc_830E0FD8:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x830e1004
	if (!ctx.cr6.eq) goto loc_830E1004;
	// cmplwi cr6,r7,64
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 64, ctx.xer);
	// bge cr6,0x830e1004
	if (!ctx.cr6.lt) goto loc_830E1004;
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
loc_830E1004:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830e0f44
	if (!ctx.cr0.eq) goto loc_830E0F44;
loc_830E1014:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830df370
	ctx.lr = 0x830E101C;
	sub_830DF370(ctx, base);
loc_830E101C:
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
	// bl 0x82c19ca8
	ctx.lr = 0x830E1034;
	sub_82C19CA8(ctx, base);
	// b 0x830e1074
	goto loc_830E1074;
loc_830E1038:
	// lis r11,28789
	ctx.r11.s64 = 1886715904;
	// ori r11,r11,29544
	ctx.r11.u64 = ctx.r11.u64 | 29544;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e1100
	if (!ctx.cr6.eq) goto loc_830E1100;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830e1070
	if (ctx.cr6.eq) goto loc_830E1070;
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830df2c0
	ctx.lr = 0x830E105C;
	sub_830DF2C0(ctx, base);
	// lwz r5,708(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// cmplwi cr6,r5,1264
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1264, ctx.xer);
	// ble cr6,0x830e107c
	if (!ctx.cr6.gt) goto loc_830E107C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830df370
	ctx.lr = 0x830E1070;
	sub_830DF370(ctx, base);
loc_830E1070:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_830E1074:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_830E107C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r5,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r5.u32);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x82e28fd0
	ctx.lr = 0x830E108C;
	sub_82E28FD0(ctx, base);
	// addi r3,r31,158
	ctx.r3.s64 = ctx.r31.s64 + 158;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830E109C;
	sub_82E28FD0(ctx, base);
	// bl 0x830df1b8
	ctx.lr = 0x830E10A0;
	sub_830DF1B8(ctx, base);
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
	// bl 0x830df370
	ctx.lr = 0x830E10D0;
	sub_830DF370(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e0d94
	if (ctx.cr0.eq) goto loc_830E0D94;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830e0d94
	if (ctx.cr0.eq) goto loc_830E0D94;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E10FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x830e0d94
	goto loc_830E0D94;
loc_830E1100:
	// lis r11,29281
	ctx.r11.s64 = 1918959616;
	// ori r11,r11,25714
	ctx.r11.u64 = ctx.r11.u64 | 25714;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e1120
	if (!ctx.cr6.eq) goto loc_830E1120;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// b 0x830e0dc8
	goto loc_830E0DC8;
loc_830E1120:
	// lis r11,29540
	ctx.r11.s64 = 1935933440;
	// ori r11,r11,25442
	ctx.r11.u64 = ctx.r11.u64 | 25442;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e1140
	if (!ctx.cr6.eq) goto loc_830E1140;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,3988(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3988, ctx.r30.u32);
	// stw r28,3992(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3992, ctx.r28.u32);
	// b 0x830e1074
	goto loc_830E1074;
loc_830E1140:
	// lis r11,30305
	ctx.r11.s64 = 1986068480;
	// ori r11,r11,25700
	ctx.r11.u64 = ctx.r11.u64 | 25700;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e1194
	if (!ctx.cr6.eq) goto loc_830E1194;
	// addi r10,r29,3848
	ctx.r10.s64 = ctx.r29.s64 + 3848;
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x830e1180
	if (ctx.cr0.eq) goto loc_830E1180;
loc_830E1164:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830e1164
	if (!ctx.cr0.eq) goto loc_830E1164;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x830e1070
	if (!ctx.cr6.lt) goto loc_830E1070;
loc_830E1180:
	// addi r11,r11,1924
	ctx.r11.s64 = ctx.r11.s64 + 1924;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r5,r11,r29
	PPC_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r5.u16);
	// b 0x830e1074
	goto loc_830E1074;
loc_830E1194:
	// lis r11,30308
	ctx.r11.s64 = 1986265088;
	// ori r11,r11,25964
	ctx.r11.u64 = ctx.r11.u64 | 25964;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e11ec
	if (!ctx.cr6.eq) goto loc_830E11EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// addi r10,r29,3848
	ctx.r10.s64 = ctx.r29.s64 + 3848;
loc_830E11B0:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830e11cc
	if (ctx.cr6.eq) goto loc_830E11CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x830e11b0
	if (ctx.cr6.lt) goto loc_830E11B0;
loc_830E11CC:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x830e1070
	if (!ctx.cr6.lt) goto loc_830E1070;
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
	// b 0x830e1074
	goto loc_830E1074;
loc_830E11EC:
	// lis r11,30820
	ctx.r11.s64 = 2019819520;
	// ori r11,r11,28275
	ctx.r11.u64 = ctx.r11.u64 | 28275;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e1208
	if (!ctx.cr6.eq) goto loc_830E1208;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,3912(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3912, ctx.r5.u32);
	// b 0x830e1074
	goto loc_830E1074;
loc_830E1208:
	// lis r11,30829
	ctx.r11.s64 = 2020409344;
	// ori r11,r11,24944
	ctx.r11.u64 = ctx.r11.u64 | 24944;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e1234
	if (!ctx.cr6.eq) goto loc_830E1234;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r5,512
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 512, ctx.xer);
	// ble cr6,0x830e1228
	if (!ctx.cr6.gt) goto loc_830E1228;
	// li r5,512
	ctx.r5.s64 = 512;
loc_830E1228:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// b 0x830e0d90
	goto loc_830E0D90;
loc_830E1234:
	// lis r11,30830
	ctx.r11.s64 = 2020474880;
	// ori r11,r11,24941
	ctx.r11.u64 = ctx.r11.u64 | 24941;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e1070
	if (!ctx.cr6.eq) goto loc_830E1070;
	// mulli r5,r5,104
	ctx.r5.s64 = ctx.r5.s64 * 104;
	// cmplwi cr6,r5,3328
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3328, ctx.xer);
	// ble cr6,0x830e1254
	if (!ctx.cr6.gt) goto loc_830E1254;
	// li r5,3328
	ctx.r5.s64 = 3328;
loc_830E1254:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,520
	ctx.r3.s64 = ctx.r29.s64 + 520;
	// b 0x830e0d90
	goto loc_830E0D90;
}

__attribute__((alias("__imp__sub_830E1260"))) PPC_WEAK_FUNC(sub_830E1260);
PPC_FUNC_IMPL(__imp__sub_830E1260) {
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
	// beq 0x830e12f8
	if (ctx.cr0.eq) goto loc_830E12F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b07700
	ctx.lr = 0x830E1290;
	sub_82B07700(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830e12f8
	if (!ctx.cr0.eq) goto loc_830E12F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830e12e8
	if (!ctx.cr0.eq) goto loc_830E12E8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830e12f8
	if (!ctx.cr6.gt) goto loc_830E12F8;
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
	// b 0x830e12f8
	goto loc_830E12F8;
loc_830E12E8:
	// cmpwi cr6,r11,10036
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10036, ctx.xer);
	// beq cr6,0x830e12f8
	if (ctx.cr6.eq) goto loc_830E12F8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_830E12F8:
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

__attribute__((alias("__imp__sub_830E1318"))) PPC_WEAK_FUNC(sub_830E1318);
PPC_FUNC_IMPL(__imp__sub_830E1318) {
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
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r30,-15332(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15332);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830e1348
	if (ctx.cr0.eq) goto loc_830E1348;
	// bl 0x82c19f98
	ctx.lr = 0x830E1348;
	sub_82C19F98(ctx, base);
loc_830E1348:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830e1358
	if (ctx.cr0.eq) goto loc_830E1358;
	// bl 0x82c19de8
	ctx.lr = 0x830E1358;
	sub_82C19DE8(ctx, base);
loc_830E1358:
	// lis r4,25715
	ctx.r4.s64 = 1685258240;
	// lwz r5,3916(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3916);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,28515
	ctx.r4.u64 = ctx.r4.u64 | 28515;
	// bl 0x82217db8
	ctx.lr = 0x830E136C;
	sub_82217DB8(ctx, base);
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

__attribute__((alias("__imp__sub_830E1388"))) PPC_WEAK_FUNC(sub_830E1388);
PPC_FUNC_IMPL(__imp__sub_830E1388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830E1390;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,-15332(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15332);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x830e13b4
	if (!ctx.cr6.eq) goto loc_830E13B4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830e1494
	goto loc_830E1494;
loc_830E13B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,3928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3928);
	// bl 0x830ec648
	ctx.lr = 0x830E13C0;
	sub_830EC648(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x830e1494
	if (!ctx.cr6.eq) goto loc_830E1494;
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
loc_830E13E8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e1408
	if (ctx.cr6.eq) goto loc_830E1408;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r5,32
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 32, ctx.xer);
	// blt cr6,0x830e13e8
	if (ctx.cr6.lt) goto loc_830E13E8;
	// b 0x830e1494
	goto loc_830E1494;
loc_830E1408:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// addi r11,r31,616
	ctx.r11.s64 = ctx.r31.s64 + 616;
loc_830E1414:
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_830E141C:
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// subf r6,r6,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r6.s64;
	// beq 0x830e1440
	if (ctx.cr0.eq) goto loc_830E1440;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x830e141c
	if (ctx.cr6.eq) goto loc_830E141C;
loc_830E1440:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x830e1484
	if (!ctx.cr0.eq) goto loc_830E1484;
	// cmplwi cr6,r5,32
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 32, ctx.xer);
	// beq cr6,0x830e1494
	if (ctx.cr6.eq) goto loc_830E1494;
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
loc_830E1484:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// blt cr6,0x830e1414
	if (ctx.cr6.lt) goto loc_830E1414;
loc_830E1494:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E14A0"))) PPC_WEAK_FUNC(sub_830E14A0);
PPC_FUNC_IMPL(__imp__sub_830E14A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r30,-15332(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15332);
	// lwz r3,3928(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3928);
	// bl 0x830ec5f0
	ctx.lr = 0x830E14CC;
	sub_830EC5F0(ctx, base);
	// lis r4,25715
	ctx.r4.s64 = 1685258240;
	// lwz r5,3916(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3916);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,28515
	ctx.r4.u64 = ctx.r4.u64 | 28515;
	// bl 0x82217db8
	ctx.lr = 0x830E14E0;
	sub_82217DB8(ctx, base);
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

__attribute__((alias("__imp__sub_830E14F8"))) PPC_WEAK_FUNC(sub_830E14F8);
PPC_FUNC_IMPL(__imp__sub_830E14F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x830E1500;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r30,-15332(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15332);
	// bge cr6,0x830e1520
	if (!ctx.cr6.lt) goto loc_830E1520;
loc_830E1518:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e166c
	goto loc_830E166C;
loc_830E1520:
	// lis r4,25715
	ctx.r4.s64 = 1685258240;
	// lwz r5,3916(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3916);
	// li r3,92
	ctx.r3.s64 = 92;
	// ori r4,r4,28515
	ctx.r4.u64 = ctx.r4.u64 | 28515;
	// bl 0x82217d58
	ctx.lr = 0x830E1534;
	sub_82217D58(ctx, base);
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e29500
	ctx.lr = 0x830E1544;
	sub_82E29500(ctx, base);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r10,r10,4704
	ctx.r10.s64 = ctx.r10.s64 + 4704;
	// addi r11,r11,4888
	ctx.r11.s64 = ctx.r11.s64 + 4888;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,3912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830e1600
	if (ctx.cr6.eq) goto loc_830E1600;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830df8c8
	ctx.lr = 0x830E1574;
	sub_830DF8C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830e15dc
	if (ctx.cr0.eq) goto loc_830E15DC;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830e15d4
	if (!ctx.cr0.eq) goto loc_830E15D4;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x830e8700
	ctx.lr = 0x830E1598;
	sub_830E8700(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,3928(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3928);
	// bl 0x830ec748
	ctx.lr = 0x830E15A4;
	sub_830EC748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830e15b8
	if (ctx.cr0.eq) goto loc_830E15B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e14a0
	ctx.lr = 0x830E15B4;
	sub_830E14A0(ctx, base);
	// b 0x830e1518
	goto loc_830E1518;
loc_830E15B8:
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r10,r10,5000
	ctx.r10.s64 = ctx.r10.s64 + 5000;
	// addi r11,r11,5280
	ctx.r11.s64 = ctx.r11.s64 + 5280;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x830e1668
	goto loc_830E1668;
loc_830E15D4:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x830e15f4
	goto loc_830E15F4;
loc_830E15DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e1c58
	ctx.lr = 0x830E15E4;
	sub_830E1C58(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830e15f4
	if (!ctx.cr0.eq) goto loc_830E15F4;
	// lwz r11,3912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3912);
loc_830E15F4:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x830e1668
	goto loc_830E1668;
loc_830E1600:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e1c58
	ctx.lr = 0x830E1608;
	sub_830E1C58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830e15d4
	if (!ctx.cr0.eq) goto loc_830E15D4;
	// bl 0x82c19de0
	ctx.lr = 0x830E1614;
	sub_82C19DE0(ctx, base);
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
	// bl 0x830e8700
	ctx.lr = 0x830E1638;
	sub_830E8700(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82c19f80
	ctx.lr = 0x830E1648;
	sub_82C19F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830e1668
	if (ctx.cr0.eq) goto loc_830E1668;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82c19de8
	ctx.lr = 0x830E1658;
	sub_82C19DE8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_830E1668:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830E166C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E1678"))) PPC_WEAK_FUNC(sub_830E1678);
PPC_FUNC_IMPL(__imp__sub_830E1678) {
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
	// beq cr6,0x830e16a4
	if (ctx.cr6.eq) goto loc_830E16A4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830e1740
	goto loc_830E1740;
loc_830E16A4:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x830e1734
	if (!ctx.cr6.eq) goto loc_830E1734;
	// bl 0x82e28fd0
	ctx.lr = 0x830E16BC;
	sub_82E28FD0(ctx, base);
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
	// bl 0x82c1a058
	ctx.lr = 0x830E16D8;
	sub_82C1A058(ctx, base);
	// rlwinm. r11,r3,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x60;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e172c
	if (ctx.cr0.eq) goto loc_830E172C;
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
	// b 0x830e1740
	goto loc_830E1740;
loc_830E172C:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x830e1740
	goto loc_830E1740;
loc_830E1734:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e29500
	ctx.lr = 0x830E173C;
	sub_82E29500(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
loc_830E1740:
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

__attribute__((alias("__imp__sub_830E1758"))) PPC_WEAK_FUNC(sub_830E1758);
PPC_FUNC_IMPL(__imp__sub_830E1758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830E1760;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31966
	ctx.r30.s64 = -2094923776;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,-15332(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15332);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830e181c
	if (ctx.cr6.eq) goto loc_830E181C;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-688
	ctx.r3.s64 = ctx.r11.s64 + -688;
	// bl 0x830ec3d8
	ctx.lr = 0x830E1788;
	sub_830EC3D8(ctx, base);
	// bl 0x830ec440
	ctx.lr = 0x830E178C;
	sub_830EC440(ctx, base);
	// lwz r3,3928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3928);
	// bl 0x830ec5e0
	ctx.lr = 0x830E1794;
	sub_830EC5E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,3944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3944);
	// stw r11,3936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3936, ctx.r11.u32);
	// bl 0x82c19df0
	ctx.lr = 0x830E17A4;
	sub_82C19DF0(ctx, base);
	// b 0x830e17b0
	goto loc_830E17B0;
loc_830E17A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82b07ad0
	ctx.lr = 0x830E17B0;
	sub_82B07AD0(ctx, base);
loc_830E17B0:
	// lwz r11,3940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x830e17a8
	if (ctx.cr6.gt) goto loc_830E17A8;
	// b 0x830e17cc
	goto loc_830E17CC;
loc_830E17C0:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830dfc38
	ctx.lr = 0x830E17CC;
	sub_830DFC38(ctx, base);
loc_830E17CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830e17c0
	if (!ctx.cr6.eq) goto loc_830E17C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830dfd50
	ctx.lr = 0x830E17E0;
	sub_830DFD50(ctx, base);
	// addi r3,r31,3948
	ctx.r3.s64 = ctx.r31.s64 + 3948;
	// bl 0x830df1f8
	ctx.lr = 0x830E17E8;
	sub_830DF1F8(ctx, base);
	// lwz r3,3944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3944);
	// bl 0x82b07040
	ctx.lr = 0x830E17F0;
	sub_82B07040(ctx, base);
	// lis r4,25715
	ctx.r4.s64 = 1685258240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,3916(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3916);
	// ori r4,r4,28515
	ctx.r4.u64 = ctx.r4.u64 | 28515;
	// bl 0x82217db8
	ctx.lr = 0x830E1804;
	sub_82217DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-15332(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15332, ctx.r11.u32);
	// bl 0x830df4c8
	ctx.lr = 0x830E1810;
	sub_830DF4C8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x830e181c
	if (!ctx.cr6.eq) goto loc_830E181C;
	// bl 0x82c19b88
	ctx.lr = 0x830E181C;
	sub_82C19B88(ctx, base);
loc_830E181C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E1828"))) PPC_WEAK_FUNC(sub_830E1828);
PPC_FUNC_IMPL(__imp__sub_830E1828) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,-15332(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15332);
	// bl 0x830df2c0
	ctx.lr = 0x830E1850;
	sub_830DF2C0(ctx, base);
	// b 0x830e185c
	goto loc_830E185C;
loc_830E1854:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x830e1868
	if (ctx.cr6.eq) goto loc_830E1868;
loc_830E185C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x830e1854
	if (!ctx.cr0.eq) goto loc_830E1854;
loc_830E1868:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830df370
	ctx.lr = 0x830E1870;
	sub_830DF370(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x830e18f4
	if (!ctx.cr6.eq) goto loc_830E18F4;
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
	// bl 0x82c19c00
	ctx.lr = 0x830E1898;
	sub_82C19C00(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x830e18f4
	if (ctx.cr6.eq) goto loc_830E18F4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830dfb10
	ctx.lr = 0x830E18B4;
	sub_830DFB10(ctx, base);
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
	// bl 0x830e0990
	ctx.lr = 0x830E18D0;
	sub_830E0990(ctx, base);
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
	// bl 0x830e0990
	ctx.lr = 0x830E18EC;
	sub_830E0990(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
loc_830E18F4:
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

__attribute__((alias("__imp__sub_830E1910"))) PPC_WEAK_FUNC(sub_830E1910);
PPC_FUNC_IMPL(__imp__sub_830E1910) {
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
	// bl 0x830e1678
	ctx.lr = 0x830E197C;
	sub_830E1678(ctx, base);
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

__attribute__((alias("__imp__sub_830E19B0"))) PPC_WEAK_FUNC(sub_830E19B0);
PPC_FUNC_IMPL(__imp__sub_830E19B0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r10,14
	ctx.r10.s64 = 14;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830e19cc
	if (ctx.cr6.eq) goto loc_830E19CC;
	// subf r3,r9,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r9.s64;
	// blr 
	return;
loc_830E19CC:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x830e19d8
	if (!ctx.cr6.eq) goto loc_830E19D8;
	// li r10,6
	ctx.r10.s64 = 6;
loc_830E19D8:
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
loc_830E19F0:
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
	// bne cr6,0x830e19f0
	if (!ctx.cr6.eq) goto loc_830E19F0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E1A18"))) PPC_WEAK_FUNC(sub_830E1A18);
PPC_FUNC_IMPL(__imp__sub_830E1A18) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_830E1A24:
	// stbx r7,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u8);
	// b 0x830e1a4c
	goto loc_830E1A4C;
loc_830E1A2C:
	// cmpwi cr6,r8,57
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 57, ctx.xer);
	// bgt cr6,0x830e1a5c
	if (ctx.cr6.gt) goto loc_830E1A5C;
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
loc_830E1A4C:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,48
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 48, ctx.xer);
	// bge cr6,0x830e1a2c
	if (!ctx.cr6.lt) goto loc_830E1A2C;
loc_830E1A5C:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bge cr6,0x830e1a70
	if (!ctx.cr6.lt) goto loc_830E1A70;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x830e1a88
	if (!ctx.cr6.eq) goto loc_830E1A88;
loc_830E1A70:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x830e1a24
	if (ctx.cr6.lt) goto loc_830E1A24;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830E1A88:
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

__attribute__((alias("__imp__sub_830E1AA0"))) PPC_WEAK_FUNC(sub_830E1AA0);
PPC_FUNC_IMPL(__imp__sub_830E1AA0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x830e1ab4
	if (ctx.cr6.gt) goto loc_830E1AB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830E1AB4:
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// bge cr6,0x830e1acc
	if (!ctx.cr6.lt) goto loc_830E1ACC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_830E1ACC:
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r3,2
	ctx.r5.s64 = ctx.r3.s64 + 2;
	// li r7,100
	ctx.r7.s64 = 100;
	// li r8,10
	ctx.r8.s64 = 10;
loc_830E1ADC:
	// lbzx r11,r5,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// ble cr6,0x830e1b20
	if (!ctx.cr6.gt) goto loc_830E1B20;
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
loc_830E1B20:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x830e1b44
	if (!ctx.cr6.gt) goto loc_830E1B44;
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
loc_830E1B44:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x830e1b64
	if (!ctx.cr6.lt) goto loc_830E1B64;
	// li r11,46
	ctx.r11.s64 = 46;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_830E1B64:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// blt cr6,0x830e1adc
	if (ctx.cr6.lt) goto loc_830E1ADC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E1B80"))) PPC_WEAK_FUNC(sub_830E1B80);
PPC_FUNC_IMPL(__imp__sub_830E1B80) {
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

__attribute__((alias("__imp__sub_830E1B98"))) PPC_WEAK_FUNC(sub_830E1B98);
PPC_FUNC_IMPL(__imp__sub_830E1B98) {
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

__attribute__((alias("__imp__sub_830E1BC0"))) PPC_WEAK_FUNC(sub_830E1BC0);
PPC_FUNC_IMPL(__imp__sub_830E1BC0) {
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

__attribute__((alias("__imp__sub_830E1BD8"))) PPC_WEAK_FUNC(sub_830E1BD8);
PPC_FUNC_IMPL(__imp__sub_830E1BD8) {
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

__attribute__((alias("__imp__sub_830E1C00"))) PPC_WEAK_FUNC(sub_830E1C00);
PPC_FUNC_IMPL(__imp__sub_830E1C00) {
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
	// lis r9,-31966
	ctx.r9.s64 = -2094923776;
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// addi r4,r9,-15328
	ctx.r4.s64 = ctx.r9.s64 + -15328;
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
	// bl 0x830e1aa0
	ctx.lr = 0x830E1C40;
	sub_830E1AA0(ctx, base);
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

__attribute__((alias("__imp__sub_830E1C58"))) PPC_WEAK_FUNC(sub_830E1C58);
PPC_FUNC_IMPL(__imp__sub_830E1C58) {
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
	// bl 0x830e1a18
	ctx.lr = 0x830E1C74;
	sub_830E1A18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830e1c9c
	if (!ctx.cr0.eq) goto loc_830E1C9C;
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
loc_830E1C9C:
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

__attribute__((alias("__imp__sub_830E1CB0"))) PPC_WEAK_FUNC(sub_830E1CB0);
PPC_FUNC_IMPL(__imp__sub_830E1CB0) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e1cc8
	goto loc_830E1CC8;
loc_830E1CBC:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x830e1cd4
	if (ctx.cr6.gt) goto loc_830E1CD4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_830E1CC8:
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x830e1cbc
	if (ctx.cr0.gt) goto loc_830E1CBC;
loc_830E1CD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E1CD8:
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x830e1cf0
	if (ctx.cr6.lt) goto loc_830E1CF0;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x830e1cf8
	if (!ctx.cr6.gt) goto loc_830E1CF8;
loc_830E1CF0:
	// cmpwi cr6,r10,46
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 46, ctx.xer);
	// bne cr6,0x830e1d24
	if (!ctx.cr6.eq) goto loc_830E1D24;
loc_830E1CF8:
	// cmpwi cr6,r10,46
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 46, ctx.xer);
	// beq cr6,0x830e1d18
	if (ctx.cr6.eq) goto loc_830E1D18;
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
	// b 0x830e1d1c
	goto loc_830E1D1C;
loc_830E1D18:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
loc_830E1D1C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x830e1cd8
	goto loc_830E1CD8;
loc_830E1D24:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// beq cr6,0x830e1d44
	if (ctx.cr6.eq) goto loc_830E1D44;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830e1d44
	goto loc_830E1D44;
loc_830E1D38:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830e1d54
	if (ctx.cr6.eq) goto loc_830E1D54;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_830E1D44:
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// bne cr6,0x830e1d38
	if (!ctx.cr6.eq) goto loc_830E1D38;
loc_830E1D54:
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x830e1d94
	if (!ctx.cr6.eq) goto loc_830E1D94;
	// b 0x830e1d7c
	goto loc_830E1D7C;
loc_830E1D68:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x830e1d90
	if (ctx.cr6.gt) goto loc_830E1D90;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_830E1D7C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x830e1d68
	if (!ctx.cr6.lt) goto loc_830E1D68;
loc_830E1D90:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_830E1D94:
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
	// bne cr6,0x830e1de4
	if (!ctx.cr6.eq) goto loc_830E1DE4;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// b 0x830e1dd0
	goto loc_830E1DD0;
loc_830E1DB8:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x830e1de0
	if (ctx.cr6.gt) goto loc_830E1DE0;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mulli r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 * 10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_830E1DD0:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x830e1db8
	if (!ctx.cr6.lt) goto loc_830E1DB8;
loc_830E1DE0:
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
loc_830E1DE4:
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E1DF0"))) PPC_WEAK_FUNC(sub_830E1DF0);
PPC_FUNC_IMPL(__imp__sub_830E1DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x830e1cb0
	ctx.lr = 0x830E1E34;
	sub_830E1CB0(ctx, base);
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

__attribute__((alias("__imp__sub_830E1E80"))) PPC_WEAK_FUNC(sub_830E1E80);
PPC_FUNC_IMPL(__imp__sub_830E1E80) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
loc_830E1E8C:
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
	// blt cr6,0x830e1eb4
	if (ctx.cr6.lt) goto loc_830E1EB4;
	// cmpwi cr6,r10,58
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 58, ctx.xer);
	// li r8,48
	ctx.r8.s64 = 48;
	// blt cr6,0x830e1eb8
	if (ctx.cr6.lt) goto loc_830E1EB8;
loc_830E1EB4:
	// li r8,87
	ctx.r8.s64 = 87;
loc_830E1EB8:
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
	// blt cr6,0x830e1e8c
	if (ctx.cr6.lt) goto loc_830E1E8C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E1ED8"))) PPC_WEAK_FUNC(sub_830E1ED8);
PPC_FUNC_IMPL(__imp__sub_830E1ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830E1EE0;
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
loc_830E1EF0:
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
	ctx.lr = 0x830E1F08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// slw r11,r3,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// or r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 | ctx.r29.u64;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x830e1ef0
	if (ctx.cr6.lt) goto loc_830E1EF0;
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
	// beq 0x830e1f3c
	if (ctx.cr0.eq) goto loc_830E1F3C;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// b 0x830e1f40
	goto loc_830E1F40;
loc_830E1F3C:
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
loc_830E1F40:
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// stw r29,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E1F50"))) PPC_WEAK_FUNC(sub_830E1F50);
PPC_FUNC_IMPL(__imp__sub_830E1F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x830E1F58;
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
	// bl 0x830dcee0
	ctx.lr = 0x830E1F78;
	sub_830DCEE0(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x830e2054
	if (ctx.cr6.eq) goto loc_830E2054;
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
	// ble 0x830e2038
	if (!ctx.cr0.gt) goto loc_830E2038;
	// li r27,0
	ctx.r27.s64 = 0;
loc_830E1FA8:
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
loc_830E1FBC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,251
	ctx.r4.s64 = 251;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b06da0
	ctx.lr = 0x830E1FCC;
	sub_82B06DA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830e2018
	if (!ctx.cr0.eq) goto loc_830E2018;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830e2018
	if (ctx.cr6.eq) goto loc_830E2018;
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
	// bl 0x830dcee0
	ctx.lr = 0x830E2004;
	sub_830DCEE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830e2018
	if (!ctx.cr0.eq) goto loc_830E2018;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// andc r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r26.u64;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
loc_830E2018:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x830e1fbc
	if (ctx.cr6.lt) goto loc_830E1FBC;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,368
	ctx.r27.s64 = ctx.r27.s64 + 368;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x830e1fa8
	if (ctx.cr6.lt) goto loc_830E1FA8;
loc_830E2038:
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
	// bl 0x830dcee0
	ctx.lr = 0x830E2050;
	sub_830DCEE0(ctx, base);
	// stw r3,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r3.u32);
loc_830E2054:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2060"))) PPC_WEAK_FUNC(sub_830E2060);
PPC_FUNC_IMPL(__imp__sub_830E2060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830E2068;
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
	// beq cr6,0x830e20f0
	if (ctx.cr6.eq) goto loc_830E20F0;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x830e20e8
	if (!ctx.cr6.gt) goto loc_830E20E8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830E2090:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830e20d4
	if (!ctx.cr6.eq) goto loc_830E20D4;
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
	// bl 0x82c41f20
	ctx.lr = 0x830E20C0;
	sub_82C41F20(ctx, base);
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x830e20d4
	if (ctx.cr6.eq) goto loc_830E20D4;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
loc_830E20D4:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,368
	ctx.r29.s64 = ctx.r29.s64 + 368;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x830e2090
	if (ctx.cr6.lt) goto loc_830E2090;
loc_830E20E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r11.u32);
loc_830E20F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E20F8"))) PPC_WEAK_FUNC(sub_830E20F8);
PPC_FUNC_IMPL(__imp__sub_830E20F8) {
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
	// bl 0x82b06da0
	ctx.lr = 0x830E211C;
	sub_82B06DA0(ctx, base);
	// addi r5,r31,248
	ctx.r5.s64 = ctx.r31.s64 + 248;
	// li r4,251
	ctx.r4.s64 = 251;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82b06da0
	ctx.lr = 0x830E212C;
	sub_82B06DA0(ctx, base);
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

__attribute__((alias("__imp__sub_830E2140"))) PPC_WEAK_FUNC(sub_830E2140);
PPC_FUNC_IMPL(__imp__sub_830E2140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x830E2148;
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
	// ble cr6,0x830e2270
	if (!ctx.cr6.gt) goto loc_830E2270;
	// li r26,0
	ctx.r26.s64 = 0;
loc_830E2164:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// add r28,r26,r11
	ctx.r28.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830e225c
	if (!ctx.cr6.eq) goto loc_830E225C;
	// lwz r11,360(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r27.u8 & 0x3F));
	// bne cr6,0x830e21cc
	if (!ctx.cr6.eq) goto loc_830E21CC;
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x830e21b0
	if (!ctx.cr6.eq) goto loc_830E21B0;
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x830e21cc
	if (ctx.cr6.eq) goto loc_830E21CC;
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// and. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830e21cc
	if (ctx.cr0.eq) goto loc_830E21CC;
loc_830E21B0:
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r9,1
	ctx.r9.s64 = 1;
	// and. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830e21d0
	if (ctx.cr0.eq) goto loc_830E21D0;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x830e21e0
	goto loc_830E21E0;
loc_830E21CC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_830E21D0:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// andc r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// beq cr6,0x830e21fc
	if (ctx.cr6.eq) goto loc_830E21FC;
loc_830E21E0:
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// and. r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830e21fc
	if (ctx.cr0.eq) goto loc_830E21FC;
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r29,0
	ctx.r29.s64 = 0;
	// or r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x830e2208
	goto loc_830E2208;
loc_830E21FC:
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r29,-1
	ctx.r29.s64 = -1;
	// andc r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 & ~ctx.r11.u64;
loc_830E2208:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830e2218
	if (ctx.cr6.eq) goto loc_830E2218;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x830ed178
	ctx.lr = 0x830E2218;
	sub_830ED178(ctx, base);
loc_830E2218:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830e2230
	if (ctx.cr6.eq) goto loc_830E2230;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x830ed190
	ctx.lr = 0x830E2230;
	sub_830ED190(ctx, base);
loc_830E2230:
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
	ctx.lr = 0x830E225C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E225C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,368
	ctx.r26.s64 = ctx.r26.s64 + 368;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x830e2164
	if (ctx.cr6.lt) goto loc_830E2164;
loc_830E2270:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2278"))) PPC_WEAK_FUNC(sub_830E2278);
PPC_FUNC_IMPL(__imp__sub_830E2278) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x830E22B4;
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

__attribute__((alias("__imp__sub_830E22C8"))) PPC_WEAK_FUNC(sub_830E22C8);
PPC_FUNC_IMPL(__imp__sub_830E22C8) {
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

__attribute__((alias("__imp__sub_830E22F8"))) PPC_WEAK_FUNC(sub_830E22F8);
PPC_FUNC_IMPL(__imp__sub_830E22F8) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-17352
	ctx.r11.s64 = ctx.r11.s64 + -17352;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,47
	ctx.r11.s64 = 47;
	// beq cr6,0x830e232c
	if (ctx.cr6.eq) goto loc_830E232C;
	// li r11,10
	ctx.r11.s64 = 10;
loc_830E232C:
	// lwz r4,224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x830e23a4
	if (ctx.cr0.lt) goto loc_830E23A4;
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
	ctx.lr = 0x830E235C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830e23a4
	if (ctx.cr0.lt) goto loc_830E23A4;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
loc_830E2368:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ed010
	ctx.lr = 0x830E2378;
	sub_830ED010(ctx, base);
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
	ctx.lr = 0x830E239C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830e2368
	if (!ctx.cr0.lt) goto loc_830E2368;
loc_830E23A4:
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

__attribute__((alias("__imp__sub_830E23C0"))) PPC_WEAK_FUNC(sub_830E23C0);
PPC_FUNC_IMPL(__imp__sub_830E23C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830E23C8;
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
	// beq cr6,0x830e2464
	if (ctx.cr6.eq) goto loc_830E2464;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x830e2430
	if (ctx.cr6.eq) goto loc_830E2430;
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
	ctx.lr = 0x830E240C;
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
	ctx.lr = 0x830E242C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x830e245c
	goto loc_830E245C;
loc_830E2430:
	// lwz r5,224(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E2444;
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
	ctx.lr = 0x830E245C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E245C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r11.u32);
loc_830E2464:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2470"))) PPC_WEAK_FUNC(sub_830E2470);
PPC_FUNC_IMPL(__imp__sub_830E2470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830E2478;
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
	// ble cr6,0x830e24dc
	if (!ctx.cr6.gt) goto loc_830E24DC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_830E2498:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x830e24c8
	if (!ctx.cr6.eq) goto loc_830E24C8;
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
	// bl 0x830e23c0
	ctx.lr = 0x830E24C8;
	sub_830E23C0(ctx, base);
loc_830E24C8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,368
	ctx.r30.s64 = ctx.r30.s64 + 368;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x830e2498
	if (ctx.cr6.lt) goto loc_830E2498;
loc_830E24DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E24E8"))) PPC_WEAK_FUNC(sub_830E24E8);
PPC_FUNC_IMPL(__imp__sub_830E24E8) {
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
	// beq cr6,0x830e255c
	if (ctx.cr6.eq) goto loc_830E255C;
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
	ctx.lr = 0x830E252C;
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
	ctx.lr = 0x830E2544;
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
loc_830E255C:
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
	ctx.lr = 0x830E2574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830e25ac
	if (!ctx.cr0.eq) goto loc_830E25AC;
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
	ctx.lr = 0x830E259C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
loc_830E25AC:
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

__attribute__((alias("__imp__sub_830E25D8"))) PPC_WEAK_FUNC(sub_830E25D8);
PPC_FUNC_IMPL(__imp__sub_830E25D8) {
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
	// bne cr6,0x830e2608
	if (!ctx.cr6.eq) goto loc_830E2608;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830e2634
	goto loc_830E2634;
loc_830E2608:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e2470
	ctx.lr = 0x830E2614;
	sub_830E2470(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e24e8
	ctx.lr = 0x830E2620;
	sub_830E24E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e2470
	ctx.lr = 0x830E2630;
	sub_830E2470(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830E2634:
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

__attribute__((alias("__imp__sub_830E2650"))) PPC_WEAK_FUNC(sub_830E2650);
PPC_FUNC_IMPL(__imp__sub_830E2650) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E2658"))) PPC_WEAK_FUNC(sub_830E2658);
PPC_FUNC_IMPL(__imp__sub_830E2658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x830E2660;
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
	// bl 0x83157d14
	ctx.lr = 0x830E268C;
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
	// bl 0x830ed8e8
	ctx.lr = 0x830E26B0;
	sub_830ED8E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83157d24
	ctx.lr = 0x830E26B8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E26C0"))) PPC_WEAK_FUNC(sub_830E26C0);
PPC_FUNC_IMPL(__imp__sub_830E26C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x83157a74
	ctx.lr = 0x830E26E8;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830e26f8
	if (ctx.cr0.eq) goto loc_830E26F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
loc_830E26F8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x83157a74
	ctx.lr = 0x830E270C;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830e271c
	if (ctx.cr0.eq) goto loc_830E271C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e20f8
	ctx.lr = 0x830E271C;
	sub_830E20F8(ctx, base);
loc_830E271C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e2060
	ctx.lr = 0x830E2724;
	sub_830E2060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e1f50
	ctx.lr = 0x830E272C;
	sub_830E1F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e2140
	ctx.lr = 0x830E2734;
	sub_830E2140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e1ed8
	ctx.lr = 0x830E273C;
	sub_830E1ED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e22f8
	ctx.lr = 0x830E2744;
	sub_830E22F8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x830edad0
	ctx.lr = 0x830E274C;
	sub_830EDAD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E2760"))) PPC_WEAK_FUNC(sub_830E2760);
PPC_FUNC_IMPL(__imp__sub_830E2760) {
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
	// b 0x830e2784
	goto loc_830E2784;
loc_830E277C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82b07ad0
	ctx.lr = 0x830E2784;
	sub_82B07AD0(ctx, base);
loc_830E2784:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e277c
	if (ctx.cr6.eq) goto loc_830E277C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e27d4
	if (ctx.cr6.eq) goto loc_830E27D4;
	// addi r30,r31,176
	ctx.r30.s64 = ctx.r31.s64 + 176;
loc_830E27A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83157d14
	ctx.lr = 0x830E27B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e26c0
	ctx.lr = 0x830E27B8;
	sub_830E26C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83157d24
	ctx.lr = 0x830E27C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82b07ad0
	ctx.lr = 0x830E27C8;
	sub_82B07AD0(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830e27a8
	if (!ctx.cr6.eq) goto loc_830E27A8;
loc_830E27D4:
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

__attribute__((alias("__imp__sub_830E27F8"))) PPC_WEAK_FUNC(sub_830E27F8);
PPC_FUNC_IMPL(__imp__sub_830E27F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E2800"))) PPC_WEAK_FUNC(sub_830E2800);
PPC_FUNC_IMPL(__imp__sub_830E2800) {
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
	// beq cr6,0x830e2840
	if (ctx.cr6.eq) goto loc_830E2840;
	// lwz r6,156(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E2838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
loc_830E2840:
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x830e2870
	if (ctx.cr6.eq) goto loc_830E2870;
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
	ctx.lr = 0x830E2868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_830E2870:
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830e28b0
	if (ctx.cr6.eq) goto loc_830E28B0;
	// xor r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830e28a8
	if (ctx.cr0.eq) goto loc_830E28A8;
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
	ctx.lr = 0x830E28A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E28A8:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_830E28B0:
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

__attribute__((alias("__imp__sub_830E28C8"))) PPC_WEAK_FUNC(sub_830E28C8);
PPC_FUNC_IMPL(__imp__sub_830E28C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x830E28D0;
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
	// bl 0x830e88c8
	ctx.lr = 0x830E28E4;
	sub_830E88C8(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r28,r11,-15308
	ctx.r28.s64 = ctx.r11.s64 + -15308;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e2904
	if (ctx.cr6.eq) goto loc_830E2904;
loc_830E28FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e2ac4
	goto loc_830E2AC4;
loc_830E2904:
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
	// bl 0x82217d58
	ctx.lr = 0x830E291C;
	sub_82217D58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x830e28fc
	if (ctx.cr0.eq) goto loc_830E28FC;
	// li r5,264
	ctx.r5.s64 = 264;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e29500
	ctx.lr = 0x830E2934;
	sub_82E29500(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830edd18
	ctx.lr = 0x830E293C;
	sub_830EDD18(ctx, base);
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
	// bl 0x830ece28
	ctx.lr = 0x830E2964;
	sub_830ECE28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830e2980
	if (!ctx.cr0.lt) goto loc_830E2980;
loc_830E296C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217db8
	ctx.lr = 0x830E297C;
	sub_82217DB8(ctx, base);
	// b 0x830e28fc
	goto loc_830E28FC;
loc_830E2980:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_830E2990:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x830e2990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830E2990;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r11,16676
	ctx.r30.s64 = ctx.r11.s64 + 16676;
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
	// lwz r11,-1748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1748);
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
	// beq cr6,0x830e29f4
	if (ctx.cr6.eq) goto loc_830E29F4;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
loc_830E29F4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c44c08
	ctx.lr = 0x830E2A04;
	sub_82C44C08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830e296c
	if (ctx.cr0.lt) goto loc_830E296C;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x83157d34
	ctx.lr = 0x830E2A14;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r8,r31,172
	ctx.r8.s64 = ctx.r31.s64 + 172;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,10080
	ctx.r5.s64 = ctx.r11.s64 + 10080;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b07ad8
	ctx.lr = 0x830E2A34;
	sub_82B07AD8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x82b07878
	ctx.lr = 0x830E2A44;
	sub_82B07878(ctx, base);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,9152
	ctx.r5.s64 = ctx.r10.s64 + 9152;
	// addi r4,r11,8824
	ctx.r4.s64 = ctx.r11.s64 + 8824;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830ecec0
	ctx.lr = 0x830E2A60;
	sub_830ECEC0(ctx, base);
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
	// bl 0x82b08b78
	ctx.lr = 0x830E2A84;
	sub_82B08B78(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,10232
	ctx.r7.s64 = ctx.r11.s64 + 10232;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,10240
	ctx.r3.s64 = ctx.r11.s64 + 10240;
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r7,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r7.u32);
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// bl 0x830df698
	ctx.lr = 0x830E2AB8;
	sub_830DF698(ctx, base);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r29.u32);
loc_830E2AC4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2AD0"))) PPC_WEAK_FUNC(sub_830E2AD0);
PPC_FUNC_IMPL(__imp__sub_830E2AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r3,-15304(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15304);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E2AE0"))) PPC_WEAK_FUNC(sub_830E2AE0);
PPC_FUNC_IMPL(__imp__sub_830E2AE0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-15304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e2bb0
	if (ctx.cr6.eq) goto loc_830E2BB0;
loc_830E2B08:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x830e2b08
	if (ctx.cr6.lt) goto loc_830E2B08;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// b 0x830e2b28
	goto loc_830E2B28;
loc_830E2B20:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82b07ad0
	ctx.lr = 0x830E2B28;
	sub_82B07AD0(ctx, base);
loc_830E2B28:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830e2b20
	if (!ctx.cr6.eq) goto loc_830E2B20;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,10240
	ctx.r3.s64 = ctx.r11.s64 + 10240;
	// bl 0x830df708
	ctx.lr = 0x830E2B44;
	sub_830DF708(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x830eced0
	ctx.lr = 0x830E2B4C;
	sub_830ECED0(ctx, base);
	// lwz r4,224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x830e2b6c
	if (ctx.cr6.eq) goto loc_830E2B6C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E2B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E2B6C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E2B80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830e2b90
	if (ctx.cr0.eq) goto loc_830E2B90;
	// bl 0x82b07040
	ctx.lr = 0x830E2B90;
	sub_82B07040(ctx, base);
loc_830E2B90:
	// bl 0x830edd08
	ctx.lr = 0x830E2B94;
	sub_830EDD08(ctx, base);
	// lis r4,30319
	ctx.r4.s64 = 1986985984;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,26992
	ctx.r4.u64 = ctx.r4.u64 | 26992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217db8
	ctx.lr = 0x830E2BA8;
	sub_82217DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-15304(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15304, ctx.r11.u32);
loc_830E2BB0:
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

__attribute__((alias("__imp__sub_830E2BC8"))) PPC_WEAK_FUNC(sub_830E2BC8);
PPC_FUNC_IMPL(__imp__sub_830E2BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830E2BD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830e1e80
	ctx.lr = 0x830E2BE0;
	sub_830E1E80(ctx, base);
	// ld r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
loc_830E2BE8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b06ff0
	ctx.lr = 0x830E2BF4;
	sub_82B06FF0(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r29
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, ctx.xer);
	// beq cr6,0x830e2c10
	if (ctx.cr6.eq) goto loc_830E2C10;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x830e2be8
	if (ctx.cr6.lt) goto loc_830E2BE8;
	// b 0x830e2c30
	goto loc_830E2C30;
loc_830E2C10:
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
	// bl 0x830e25d8
	ctx.lr = 0x830E2C28;
	sub_830E25D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e20f8
	ctx.lr = 0x830E2C30;
	sub_830E20F8(ctx, base);
loc_830E2C30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2C38"))) PPC_WEAK_FUNC(sub_830E2C38);
PPC_FUNC_IMPL(__imp__sub_830E2C38) {
	PPC_FUNC_PROLOGUE();
	// stw r4,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r4.u32);
	// stw r5,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E2C48"))) PPC_WEAK_FUNC(sub_830E2C48);
PPC_FUNC_IMPL(__imp__sub_830E2C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e54
	ctx.lr = 0x830E2C50;
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
	// bne cr6,0x830e2c90
	if (!ctx.cr6.eq) goto loc_830E2C90;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x830ecf38
	ctx.lr = 0x830E2C80;
	sub_830ECF38(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x830e2cd4
	if (!ctx.cr0.lt) goto loc_830E2CD4;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x830e2d40
	goto loc_830E2D40;
loc_830E2C90:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x830e2d3c
	if (ctx.cr6.lt) goto loc_830E2D3C;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x830e2d3c
	if (!ctx.cr6.lt) goto loc_830E2D3C;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e2cd4
	if (ctx.cr6.eq) goto loc_830E2CD4;
	// addi r29,r30,176
	ctx.r29.s64 = ctx.r30.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83157d14
	ctx.lr = 0x830E2CC0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ecf80
	ctx.lr = 0x830E2CCC;
	sub_830ECF80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83157d24
	ctx.lr = 0x830E2CD4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_830E2CD4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x830e2d14
	if (ctx.cr6.eq) goto loc_830E2D14;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830e1e80
	ctx.lr = 0x830E2CE8;
	sub_830E1E80(ctx, base);
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
	// bl 0x830e2658
	ctx.lr = 0x830E2D08;
	sub_830E2658(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e2060
	ctx.lr = 0x830E2D10;
	sub_830E2060(ctx, base);
	// b 0x830e2d34
	goto loc_830E2D34;
loc_830E2D14:
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
	// bl 0x830e2658
	ctx.lr = 0x830E2D34;
	sub_830E2658(ctx, base);
loc_830E2D34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x830e2d40
	goto loc_830E2D40;
loc_830E2D3C:
	// li r3,-4
	ctx.r3.s64 = -4;
loc_830E2D40:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82e28ea4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2D48"))) PPC_WEAK_FUNC(sub_830E2D48);
PPC_FUNC_IMPL(__imp__sub_830E2D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830E2D50;
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
	// bl 0x83157d14
	ctx.lr = 0x830E2D68;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x830ecf80
	ctx.lr = 0x830E2D74;
	sub_830ECF80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83157d24
	ctx.lr = 0x830E2D7C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2D88"))) PPC_WEAK_FUNC(sub_830E2D88);
PPC_FUNC_IMPL(__imp__sub_830E2D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830E2D90;
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
	// bl 0x83157d14
	ctx.lr = 0x830E2DA8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x830edbb8
	ctx.lr = 0x830E2DB4;
	sub_830EDBB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x830ece08
	ctx.lr = 0x830E2DC0;
	sub_830ECE08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x830ece08
	ctx.lr = 0x830E2DD0;
	sub_830ECE08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// bl 0x83157d24
	ctx.lr = 0x830E2DE0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2DE8"))) PPC_WEAK_FUNC(sub_830E2DE8);
PPC_FUNC_IMPL(__imp__sub_830E2DE8) {
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
	// bne cr6,0x830e2e30
	if (!ctx.cr6.eq) goto loc_830E2E30;
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
loc_830E2E18:
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
	// bne 0x830e2e18
	if (!ctx.cr0.eq) goto loc_830E2E18;
	// blr 
	return;
loc_830E2E30:
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

__attribute__((alias("__imp__sub_830E2E58"))) PPC_WEAK_FUNC(sub_830E2E58);
PPC_FUNC_IMPL(__imp__sub_830E2E58) {
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

__attribute__((alias("__imp__sub_830E2E80"))) PPC_WEAK_FUNC(sub_830E2E80);
PPC_FUNC_IMPL(__imp__sub_830E2E80) {
	PPC_FUNC_PROLOGUE();
	// stw r4,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E2E88"))) PPC_WEAK_FUNC(sub_830E2E88);
PPC_FUNC_IMPL(__imp__sub_830E2E88) {
	PPC_FUNC_PROLOGUE();
	// stw r4,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E2E90"))) PPC_WEAK_FUNC(sub_830E2E90);
PPC_FUNC_IMPL(__imp__sub_830E2E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,26226
	ctx.r11.s64 = 1718747136;
	// ori r11,r11,28525
	ctx.r11.u64 = ctx.r11.u64 | 28525;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e2ea8
	if (!ctx.cr6.eq) goto loc_830E2EA8;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// blr 
	return;
loc_830E2EA8:
	// lis r11,26739
	ctx.r11.s64 = 1752367104;
	// ori r11,r11,25972
	ctx.r11.u64 = ctx.r11.u64 | 25972;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e2ed8
	if (!ctx.cr6.eq) goto loc_830E2ED8;
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
loc_830E2ED8:
	// lis r11,27759
	ctx.r11.s64 = 1819213824;
	// ori r11,r11,25451
	ctx.r11.u64 = ctx.r11.u64 | 25451;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e2ef0
	if (!ctx.cr6.eq) goto loc_830E2EF0;
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// blr 
	return;
loc_830E2EF0:
	// lis r11,27760
	ctx.r11.s64 = 1819279360;
	// ori r11,r11,29300
	ctx.r11.u64 = ctx.r11.u64 | 29300;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e2f08
	if (!ctx.cr6.eq) goto loc_830E2F08;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// blr 
	return;
loc_830E2F08:
	// lis r11,28009
	ctx.r11.s64 = 1835597824;
	// ori r11,r11,25458
	ctx.r11.u64 = ctx.r11.u64 | 25458;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e2f20
	if (!ctx.cr6.eq) goto loc_830E2F20;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// blr 
	return;
loc_830E2F20:
	// lis r11,28783
	ctx.r11.s64 = 1886322688;
	// ori r11,r11,29300
	ctx.r11.u64 = ctx.r11.u64 | 29300;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e2f38
	if (!ctx.cr6.eq) goto loc_830E2F38;
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// blr 
	return;
loc_830E2F38:
	// lis r11,29552
	ctx.r11.s64 = 1936719872;
	// ori r11,r11,27506
	ctx.r11.u64 = ctx.r11.u64 | 27506;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e2f50
	if (!ctx.cr6.eq) goto loc_830E2F50;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// blr 
	return;
loc_830E2F50:
	// lis r11,30061
	ctx.r11.s64 = 1970077696;
	// ori r11,r11,26979
	ctx.r11.u64 = ctx.r11.u64 | 26979;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e2f68
	if (!ctx.cr6.eq) goto loc_830E2F68;
	// lwz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// blr 
	return;
loc_830E2F68:
	// lis r11,30067
	ctx.r11.s64 = 1970470912;
	// ori r11,r11,28779
	ctx.r11.u64 = ctx.r11.u64 | 28779;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e2f80
	if (!ctx.cr6.eq) goto loc_830E2F80;
	// lwz r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// blr 
	return;
loc_830E2F80:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E2F88"))) PPC_WEAK_FUNC(sub_830E2F88);
PPC_FUNC_IMPL(__imp__sub_830E2F88) {
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
	// bne cr6,0x830e2fb0
	if (!ctx.cr6.eq) goto loc_830E2FB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r4.u32);
	// blr 
	return;
loc_830E2FB0:
	// lis r9,26220
	ctx.r9.s64 = 1718353920;
	// ori r9,r9,29544
	ctx.r9.u64 = ctx.r9.u64 | 29544;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830e2fc8
	if (!ctx.cr6.eq) goto loc_830E2FC8;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// b 0x830ed100
	sub_830ED100(ctx, base);
	return;
loc_830E2FC8:
	// lis r9,27759
	ctx.r9.s64 = 1819213824;
	// ori r9,r9,25451
	ctx.r9.u64 = ctx.r9.u64 | 25451;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830e2fe4
	if (!ctx.cr6.eq) goto loc_830E2FE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 228, ctx.r4.u32);
	// blr 
	return;
loc_830E2FE4:
	// lis r9,28018
	ctx.r9.s64 = 1836187648;
	// ori r9,r9,25714
	ctx.r9.u64 = ctx.r9.u64 | 25714;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830e3004
	if (!ctx.cr6.eq) goto loc_830E3004;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,-15308(r11)
	PPC_STORE_U32(ctx.r11.u32 + -15308, ctx.r4.u32);
	// blr 
	return;
loc_830E3004:
	// lis r9,28783
	ctx.r9.s64 = 1886322688;
	// ori r9,r9,29300
	ctx.r9.u64 = ctx.r9.u64 | 29300;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830e301c
	if (!ctx.cr6.eq) goto loc_830E301C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x830e25d8
	sub_830E25D8(ctx, base);
	return;
loc_830E301C:
	// lis r9,29045
	ctx.r9.s64 = 1903493120;
	// ori r9,r9,24940
	ctx.r9.u64 = ctx.r9.u64 | 24940;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830e3034
	if (!ctx.cr6.eq) goto loc_830E3034;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_830E3034:
	// lis r9,29541
	ctx.r9.s64 = 1935998976;
	// ori r9,r9,29302
	ctx.r9.u64 = ctx.r9.u64 | 29302;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830e3050
	if (!ctx.cr6.eq) goto loc_830E3050;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r4,144(r10)
	PPC_STORE_U8(ctx.r10.u32 + 144, ctx.r4.u8);
	// blr 
	return;
loc_830E3050:
	// lis r9,29801
	ctx.r9.s64 = 1953038336;
	// ori r9,r9,28005
	ctx.r9.u64 = ctx.r9.u64 | 28005;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830e306c
	if (!ctx.cr6.eq) goto loc_830E306C;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 140, ctx.r4.u32);
	// blr 
	return;
loc_830E306C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E3078"))) PPC_WEAK_FUNC(sub_830E3078);
PPC_FUNC_IMPL(__imp__sub_830E3078) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E3080"))) PPC_WEAK_FUNC(sub_830E3080);
PPC_FUNC_IMPL(__imp__sub_830E3080) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E3088"))) PPC_WEAK_FUNC(sub_830E3088);
PPC_FUNC_IMPL(__imp__sub_830E3088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E3090"))) PPC_WEAK_FUNC(sub_830E3090);
PPC_FUNC_IMPL(__imp__sub_830E3090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x830E3098;
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
	// bne cr6,0x830e30c4
	if (!ctx.cr6.eq) goto loc_830E30C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830e3278
	goto loc_830E3278;
loc_830E30C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lhz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x830e30e0
	if (!ctx.cr6.gt) goto loc_830E30E0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830e3278
	goto loc_830E3278;
loc_830E30E0:
	// lbz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830e30fc
	if (!ctx.cr0.eq) goto loc_830E30FC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,250
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 250, ctx.xer);
	// ble cr6,0x830e3178
	if (!ctx.cr6.gt) goto loc_830E3178;
loc_830E30FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e1b98
	ctx.lr = 0x830E3104;
	sub_830E1B98(ctx, base);
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
	// bl 0x830e1b98
	ctx.lr = 0x830E311C;
	sub_830E1B98(ctx, base);
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
	// bl 0x830e1b80
	ctx.lr = 0x830E3140;
	sub_830E1B80(ctx, base);
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
	// bl 0x82e28fd0
	ctx.lr = 0x830E315C;
	sub_82E28FD0(ctx, base);
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
loc_830E3178:
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
	// bne cr6,0x830e31a0
	if (!ctx.cr6.eq) goto loc_830E31A0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x830e31b0
	goto loc_830E31B0;
loc_830E31A0:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// li r6,3
	ctx.r6.s64 = 3;
	// beq cr6,0x830e31b0
	if (ctx.cr6.eq) goto loc_830E31B0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_830E31B0:
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
	ctx.lr = 0x830E31CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x830e31f0
	if (ctx.cr6.eq) goto loc_830E31F0;
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
loc_830E31F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x830e3278
	if (!ctx.cr6.gt) goto loc_830E3278;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// beq cr6,0x830e3208
	if (ctx.cr6.eq) goto loc_830E3208;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_830E3208:
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
	// beq 0x830e3258
	if (ctx.cr0.eq) goto loc_830E3258;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x830e3258
	if (!ctx.cr6.gt) goto loc_830E3258;
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
loc_830E3258:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e3278
	if (ctx.cr0.eq) goto loc_830E3278;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x830e3278
	if (!ctx.cr6.gt) goto loc_830E3278;
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
loc_830E3278:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3280"))) PPC_WEAK_FUNC(sub_830E3280);
PPC_FUNC_IMPL(__imp__sub_830E3280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830E3288;
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
	// ble 0x830e358c
	if (!ctx.cr0.gt) goto loc_830E358C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 84);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x830e32bc
	if (!ctx.cr6.gt) goto loc_830E32BC;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_830E32BC:
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
	ctx.lr = 0x830E32D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x830e358c
	if (!ctx.cr0.gt) goto loc_830E358C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 84);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x830e358c
	if (ctx.cr6.gt) goto loc_830E358C;
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
	// beq 0x830e333c
	if (ctx.cr0.eq) goto loc_830E333C;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x830e333c
	if (!ctx.cr6.gt) goto loc_830E333C;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_830E333C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e335c
	if (ctx.cr0.eq) goto loc_830E335C;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x830e335c
	if (!ctx.cr6.gt) goto loc_830E335C;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_830E335C:
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
	// beq 0x830e3540
	if (ctx.cr0.eq) goto loc_830E3540;
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
	// bl 0x82e28fd0
	ctx.lr = 0x830E33AC;
	sub_82E28FD0(ctx, base);
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
	// bge cr6,0x830e33d0
	if (!ctx.cr6.lt) goto loc_830E33D0;
	// li r30,10
	ctx.r30.s64 = 10;
loc_830E33D0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x830e1bd8
	ctx.lr = 0x830E33DC;
	sub_830E1BD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x830e1bc0
	ctx.lr = 0x830E33EC;
	sub_830E1BC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x830e1bd8
	ctx.lr = 0x830E3400;
	sub_830E1BD8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// mr. r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x830e3540
	if (ctx.cr0.lt) goto loc_830E3540;
	// cmpwi cr6,r10,2500
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2500, ctx.xer);
	// bgt cr6,0x830e3540
	if (ctx.cr6.gt) goto loc_830E3540;
	// cmpwi cr6,r30,1024
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1024, ctx.xer);
	// bge cr6,0x830e3470
	if (!ctx.cr6.lt) goto loc_830E3470;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subfic r11,r30,1024
	ctx.xer.ca = ctx.r30.u32 <= 1024;
	ctx.r11.s64 = 1024 - ctx.r30.s64;
	// subf. r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x830e3438
	if (!ctx.cr0.lt) goto loc_830E3438;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_830E3438:
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
	// b 0x830e3478
	goto loc_830E3478;
loc_830E3470:
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
loc_830E3478:
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
	// blt cr6,0x830e34d4
	if (ctx.cr6.lt) goto loc_830E34D4;
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
	// b 0x830e3538
	goto loc_830E3538;
loc_830E34D4:
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
	// bge cr6,0x830e34f4
	if (!ctx.cr6.lt) goto loc_830E34F4;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
loc_830E34F4:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x830e3504
	if (!ctx.cr6.gt) goto loc_830E3504;
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
loc_830E3504:
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
loc_830E3538:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_830E3540:
	// lbz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x830e3564
	if (!ctx.cr6.eq) goto loc_830E3564;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E355C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E355C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830e3590
	goto loc_830E3590;
loc_830E3564:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e355c
	if (ctx.cr6.eq) goto loc_830E355C;
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
	// b 0x830e355c
	goto loc_830E355C;
loc_830E358C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E3590:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3598"))) PPC_WEAK_FUNC(sub_830E3598);
PPC_FUNC_IMPL(__imp__sub_830E3598) {
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
	// ble cr6,0x830e35c0
	if (!ctx.cr6.gt) goto loc_830E35C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e35d8
	goto loc_830E35D8;
loc_830E35C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// bl 0x830e3280
	ctx.lr = 0x830E35D0;
	sub_830E3280(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
loc_830E35D8:
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

__attribute__((alias("__imp__sub_830E35F0"))) PPC_WEAK_FUNC(sub_830E35F0);
PPC_FUNC_IMPL(__imp__sub_830E35F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830E35F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// b 0x830e3614
	goto loc_830E3614;
loc_830E3608:
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
loc_830E3614:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e3598
	ctx.lr = 0x830E3620;
	sub_830E3598(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x830e3608
	if (ctx.cr0.gt) goto loc_830E3608;
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
	// blt cr6,0x830e3718
	if (ctx.cr6.lt) goto loc_830E3718;
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
loc_830E3718:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e3738
	if (ctx.cr0.eq) goto loc_830E3738;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x830e3738
	if (!ctx.cr6.gt) goto loc_830E3738;
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
loc_830E3738:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e3768
	if (ctx.cr0.eq) goto loc_830E3768;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x830e3768
	if (!ctx.cr6.gt) goto loc_830E3768;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bge cr6,0x830e3768
	if (!ctx.cr6.lt) goto loc_830E3768;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_830E3768:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e3788
	if (ctx.cr0.eq) goto loc_830E3788;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x830e3788
	if (!ctx.cr6.gt) goto loc_830E3788;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_830E3788:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e37b8
	if (ctx.cr0.eq) goto loc_830E37B8;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x830e37b8
	if (!ctx.cr6.gt) goto loc_830E37B8;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bge cr6,0x830e37b8
	if (!ctx.cr6.lt) goto loc_830E37B8;
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_830E37B8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,500
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 500, ctx.xer);
	// ble cr6,0x830e381c
	if (!ctx.cr6.gt) goto loc_830E381C;
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
	ctx.lr = 0x830E37E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x830e381c
	if (!ctx.cr0.gt) goto loc_830E381C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,87(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 87);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x830e381c
	if (!ctx.cr6.lt) goto loc_830E381C;
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
	// bl 0x830e3090
	ctx.lr = 0x830E381C;
	sub_830E3090(ctx, base);
loc_830E381C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3828"))) PPC_WEAK_FUNC(sub_830E3828);
PPC_FUNC_IMPL(__imp__sub_830E3828) {
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
	// bl 0x830df218
	ctx.lr = 0x830E384C;
	sub_830DF218(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830e38ac
	if (ctx.cr0.eq) goto loc_830E38AC;
	// bl 0x830df1b8
	ctx.lr = 0x830E3858;
	sub_830DF1B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e35f0
	ctx.lr = 0x830E3864;
	sub_830E35F0(ctx, base);
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x830e38a0
	if (!ctx.cr6.gt) goto loc_830E38A0;
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e38a0
	if (ctx.cr0.eq) goto loc_830E38A0;
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x830e38a0
	if (!ctx.cr6.gt) goto loc_830E38A0;
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
	ctx.lr = 0x830E38A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E38A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830df370
	ctx.lr = 0x830E38A8;
	sub_830DF370(ctx, base);
	// b 0x830e38b8
	goto loc_830E38B8;
loc_830E38AC:
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
loc_830E38B8:
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

__attribute__((alias("__imp__sub_830E38D0"))) PPC_WEAK_FUNC(sub_830E38D0);
PPC_FUNC_IMPL(__imp__sub_830E38D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x830E38D8;
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
	// bl 0x830e88c8
	ctx.lr = 0x830E38EC;
	sub_830E88C8(ctx, base);
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
	// bl 0x82217d58
	ctx.lr = 0x830E3904;
	sub_82217D58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830e3914
	if (!ctx.cr0.eq) goto loc_830E3914;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e39e8
	goto loc_830E39E8;
loc_830E3914:
	// li r5,504
	ctx.r5.s64 = 504;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e29500
	ctx.lr = 0x830E3924;
	sub_82E29500(ctx, base);
	// cmpwi cr6,r29,4096
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4096, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// bge cr6,0x830e393c
	if (!ctx.cr6.lt) goto loc_830E393C;
	// li r29,4096
	ctx.r29.s64 = 4096;
loc_830E393C:
	// lis r4,28263
	ctx.r4.s64 = 1852243968;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,27755
	ctx.r4.u64 = ctx.r4.u64 | 27755;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82217d58
	ctx.lr = 0x830E3950;
	sub_82217D58(ctx, base);
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
	// bl 0x830df1b8
	ctx.lr = 0x830E3968;
	sub_830DF1B8(ctx, base);
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
loc_830E3998:
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
	// bne 0x830e3998
	if (!ctx.cr0.eq) goto loc_830E3998;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// addi r4,r11,-10944
	ctx.r4.s64 = ctx.r11.s64 + -10944;
	// bl 0x830df1c8
	ctx.lr = 0x830E39C4;
	sub_830DF1C8(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,14376
	ctx.r4.s64 = ctx.r11.s64 + 14376;
	// stw r31,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r31.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830E39E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
loc_830E39E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E39F0"))) PPC_WEAK_FUNC(sub_830E39F0);
PPC_FUNC_IMPL(__imp__sub_830E39F0) {
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
	ctx.lr = 0x830E3A18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830e3a34
	if (ctx.cr6.eq) goto loc_830E3A34;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E3A34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E3A34:
	// lis r4,28263
	ctx.r4.s64 = 1852243968;
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r4,r4,27755
	ctx.r4.u64 = ctx.r4.u64 | 27755;
	// bl 0x82217db8
	ctx.lr = 0x830E3A48;
	sub_82217DB8(ctx, base);
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x830df1f8
	ctx.lr = 0x830E3A50;
	sub_830DF1F8(ctx, base);
	// lis r4,28263
	ctx.r4.s64 = 1852243968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r4,r4,27755
	ctx.r4.u64 = ctx.r4.u64 | 27755;
	// bl 0x82217db8
	ctx.lr = 0x830E3A64;
	sub_82217DB8(ctx, base);
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

__attribute__((alias("__imp__sub_830E3A78"))) PPC_WEAK_FUNC(sub_830E3A78);
PPC_FUNC_IMPL(__imp__sub_830E3A78) {
	PPC_FUNC_PROLOGUE();
	// stw r4,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r4.u32);
	// stw r5,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E3A88"))) PPC_WEAK_FUNC(sub_830E3A88);
PPC_FUNC_IMPL(__imp__sub_830E3A88) {
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
loc_830E3AA4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x830df1b8
	ctx.lr = 0x830E3AB0;
	sub_830DF1B8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830e3aa4
	if (!ctx.cr6.eq) goto loc_830E3AA4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E3AD4;
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
	// beq cr6,0x830e3af8
	if (ctx.cr6.eq) goto loc_830E3AF8;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x830e3afc
	if (!ctx.cr6.eq) goto loc_830E3AFC;
loc_830E3AF8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_830E3AFC:
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

__attribute__((alias("__imp__sub_830E3B38"))) PPC_WEAK_FUNC(sub_830E3B38);
PPC_FUNC_IMPL(__imp__sub_830E3B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x830E3B40;
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
	// bl 0x830df1b8
	ctx.lr = 0x830E3B58;
	sub_830DF1B8(ctx, base);
	// addi r26,r29,440
	ctx.r26.s64 = ctx.r29.s64 + 440;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830df2c0
	ctx.lr = 0x830E3B68;
	sub_830DF2C0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x830e3bd0
	if (!ctx.cr6.gt) goto loc_830E3BD0;
loc_830E3B70:
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x830e3b90
	if (!ctx.cr6.eq) goto loc_830E3B90;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E3B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x830e3ba8
	goto loc_830E3BA8;
loc_830E3B90:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e3090
	ctx.lr = 0x830E3BA0;
	sub_830E3090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x830e3bd0
	if (!ctx.cr0.gt) goto loc_830E3BD0;
loc_830E3BA8:
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
	// beq cr6,0x830e3bd0
	if (ctx.cr6.eq) goto loc_830E3BD0;
	// subf. r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bgt 0x830e3b70
	if (ctx.cr0.gt) goto loc_830E3B70;
loc_830E3BD0:
	// lwz r11,480(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x830e3be8
	if (!ctx.cr6.gt) goto loc_830E3BE8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e35f0
	ctx.lr = 0x830E3BE8;
	sub_830E35F0(ctx, base);
loc_830E3BE8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830df370
	ctx.lr = 0x830E3BF0;
	sub_830DF370(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3C00"))) PPC_WEAK_FUNC(sub_830E3C00);
PPC_FUNC_IMPL(__imp__sub_830E3C00) {
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
	// ble cr6,0x830e3c20
	if (!ctx.cr6.gt) goto loc_830E3C20;
	// lwz r11,428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// b 0x830e3c24
	goto loc_830E3C24;
loc_830E3C20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E3C24:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E3C30"))) PPC_WEAK_FUNC(sub_830E3C30);
PPC_FUNC_IMPL(__imp__sub_830E3C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x830E3C38;
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
	// bl 0x830df1b8
	ctx.lr = 0x830E3C4C;
	sub_830DF1B8(ctx, base);
	// addi r27,r31,440
	ctx.r27.s64 = ctx.r31.s64 + 440;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830df2c0
	ctx.lr = 0x830E3C5C;
	sub_830DF2C0(ctx, base);
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830e3c7c
	if (!ctx.cr6.eq) goto loc_830E3C7C;
loc_830E3C68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e3598
	ctx.lr = 0x830E3C74;
	sub_830E3598(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x830e3c68
	if (ctx.cr0.gt) goto loc_830E3C68;
loc_830E3C7C:
	// lwz r5,432(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x830e3c90
	if (!ctx.cr0.eq) goto loc_830E3C90;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x830e3d30
	goto loc_830E3D30;
loc_830E3C90:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x830e3ca0
	if (!ctx.cr6.eq) goto loc_830E3CA0;
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_830E3CA0:
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x830e3cc8
	if (ctx.cr6.gt) goto loc_830E3CC8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830e3cbc
	if (ctx.cr6.eq) goto loc_830E3CBC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// bl 0x82e28fd0
	ctx.lr = 0x830E3CBC;
	sub_82E28FD0(ctx, base);
loc_830E3CBC:
	// lwz r30,432(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830e3d2c
	goto loc_830E3D2C;
loc_830E3CC8:
	// lwz r4,428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x830e3d30
	if (ctx.cr6.gt) goto loc_830E3D30;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
loc_830E3CE0:
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x830e3ce0
	if (!ctx.cr6.gt) goto loc_830E3CE0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x830e3d30
	if (!ctx.cr6.gt) goto loc_830E3D30;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830e3d10
	if (ctx.cr6.eq) goto loc_830E3D10;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830E3D10;
	sub_82E28FD0(ctx, base);
loc_830E3D10:
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// add r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 + ctx.r30.u64;
	// subf r5,r30,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bl 0x82e29fb0
	ctx.lr = 0x830E3D24;
	sub_82E29FB0(ctx, base);
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_830E3D2C:
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
loc_830E3D30:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830df370
	ctx.lr = 0x830E3D38;
	sub_830DF370(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3D48"))) PPC_WEAK_FUNC(sub_830E3D48);
PPC_FUNC_IMPL(__imp__sub_830E3D48) {
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
	// bne cr6,0x830e3d94
	if (!ctx.cr6.eq) goto loc_830E3D94;
	// stw r5,500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 500, ctx.r5.u32);
loc_830E3D78:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830E3D7C:
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
loc_830E3D94:
	// lis r10,29553
	ctx.r10.s64 = 1936785408;
	// ori r30,r10,30053
	ctx.r30.u64 = ctx.r10.u64 | 30053;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x830e3dbc
	if (ctx.cr6.eq) goto loc_830E3DBC;
	// lis r10,29548
	ctx.r10.s64 = 1936457728;
	// ori r10,r10,25966
	ctx.r10.u64 = ctx.r10.u64 | 25966;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x830e3dbc
	if (ctx.cr6.eq) goto loc_830E3DBC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830e3d7c
	goto loc_830E3D7C;
loc_830E3DBC:
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
	ctx.lr = 0x830E3DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x830e3d7c
	if (!ctx.cr6.eq) goto loc_830E3D7C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x830e3d78
	if (!ctx.cr6.gt) goto loc_830E3D78;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x830e3d7c
	goto loc_830E3D7C;
}

__attribute__((alias("__imp__sub_830E3DF8"))) PPC_WEAK_FUNC(sub_830E3DF8);
PPC_FUNC_IMPL(__imp__sub_830E3DF8) {
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
	// bl 0x830e0990
	ctx.lr = 0x830E3E70;
	sub_830E0990(ctx, base);
	// bl 0x830e1910
	ctx.lr = 0x830E3E74;
	sub_830E1910(ctx, base);
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

__attribute__((alias("__imp__sub_830E3EA0"))) PPC_WEAK_FUNC(sub_830E3EA0);
PPC_FUNC_IMPL(__imp__sub_830E3EA0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r4.u32);
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E3EB0"))) PPC_WEAK_FUNC(sub_830E3EB0);
PPC_FUNC_IMPL(__imp__sub_830E3EB0) {
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
	// bl 0x82e2f3a0
	ctx.lr = 0x830E3ED0;
	sub_82E2F3A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830e3ee4
	if (ctx.cr0.eq) goto loc_830E3EE4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x830ec540
	ctx.lr = 0x830E3EE0;
	sub_830EC540(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
loc_830E3EE4:
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

__attribute__((alias("__imp__sub_830E3EF8"))) PPC_WEAK_FUNC(sub_830E3EF8);
PPC_FUNC_IMPL(__imp__sub_830E3EF8) {
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
	// bl 0x830df1b8
	ctx.lr = 0x830E3F44;
	sub_830DF1B8(ctx, base);
	// addi r11,r3,-5000
	ctx.r11.s64 = ctx.r3.s64 + -5000;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// bl 0x830df1b8
	ctx.lr = 0x830E3F50;
	sub_830DF1B8(ctx, base);
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

__attribute__((alias("__imp__sub_830E3F70"))) PPC_WEAK_FUNC(sub_830E3F70);
PPC_FUNC_IMPL(__imp__sub_830E3F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 120);
	// li r11,28
	ctx.r11.s64 = 28;
	// cmplwi cr6,r10,1000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1000, ctx.xer);
	// bne cr6,0x830e3f90
	if (!ctx.cr6.eq) goto loc_830E3F90;
	// lhz r9,122(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 122);
	// cmplwi cr6,r9,1000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1000, ctx.xer);
	// beq cr6,0x830e3fb8
	if (ctx.cr6.eq) goto loc_830E3FB8;
	// cmplwi cr6,r10,1000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1000, ctx.xer);
loc_830E3F90:
	// ble cr6,0x830e3fb4
	if (!ctx.cr6.gt) goto loc_830E3FB4;
	// cmplwi cr6,r10,1255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1255, ctx.xer);
	// bge cr6,0x830e3fb4
	if (!ctx.cr6.lt) goto loc_830E3FB4;
	// lhz r11,122(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 122);
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// ble cr6,0x830e3fb4
	if (!ctx.cr6.gt) goto loc_830E3FB4;
	// cmplwi cr6,r11,1255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1255, ctx.xer);
	// li r11,30
	ctx.r11.s64 = 30;
	// blt cr6,0x830e3fb8
	if (ctx.cr6.lt) goto loc_830E3FB8;
loc_830E3FB4:
	// li r11,32
	ctx.r11.s64 = 32;
loc_830E3FB8:
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

__attribute__((alias("__imp__sub_830E3FE8"))) PPC_WEAK_FUNC(sub_830E3FE8);
PPC_FUNC_IMPL(__imp__sub_830E3FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x830E3FF0;
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
	// bl 0x830e1b98
	ctx.lr = 0x830E4018;
	sub_830E1B98(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x830e1b98
	ctx.lr = 0x830E4024;
	sub_830E1B98(ctx, base);
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
	// bl 0x830e0740
	ctx.lr = 0x830E4044;
	sub_830E0740(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x830e1bd8
	ctx.lr = 0x830E4050;
	sub_830E1BD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x830e1bd8
	ctx.lr = 0x830E4060;
	sub_830E1BD8(ctx, base);
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// bne cr6,0x830e40b8
	if (!ctx.cr6.eq) goto loc_830E40B8;
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
	// bl 0x830e3f70
	ctx.lr = 0x830E4094;
	sub_830E3F70(ctx, base);
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
	// blt cr6,0x830e40c4
	if (ctx.cr6.lt) goto loc_830E40C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// b 0x830e40c4
	goto loc_830E40C4;
loc_830E40B8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
loc_830E40C4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E40D0"))) PPC_WEAK_FUNC(sub_830E40D0);
PPC_FUNC_IMPL(__imp__sub_830E40D0) {
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
	// bne cr6,0x830e411c
	if (!ctx.cr6.eq) goto loc_830E411C;
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
	// bl 0x830e3fe8
	ctx.lr = 0x830E411C;
	sub_830E3FE8(ctx, base);
loc_830E411C:
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

__attribute__((alias("__imp__sub_830E4148"))) PPC_WEAK_FUNC(sub_830E4148);
PPC_FUNC_IMPL(__imp__sub_830E4148) {
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
	// beq cr6,0x830e4194
	if (ctx.cr6.eq) goto loc_830E4194;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
loc_830E4184:
	// bne cr6,0x830e421c
	if (!ctx.cr6.eq) goto loc_830E421C;
	// li r11,5
	ctx.r11.s64 = 5;
loc_830E418C:
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// b 0x830e421c
	goto loc_830E421C;
loc_830E4194:
	// addi r10,r30,-1000
	ctx.r10.s64 = ctx.r30.s64 + -1000;
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x830e41e8
	if (ctx.cr6.eq) goto loc_830E41E8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x830e41e8
	if (ctx.cr6.eq) goto loc_830E41E8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x830e41d4
	if (!ctx.cr6.eq) goto loc_830E41D4;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830e421c
	if (!ctx.cr6.eq) goto loc_830E421C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e3df8
	ctx.lr = 0x830E41CC;
	sub_830E3DF8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x830e418c
	goto loc_830E418C;
loc_830E41D4:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x830e421c
	if (!ctx.cr6.eq) goto loc_830E421C;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// b 0x830e4184
	goto loc_830E4184;
loc_830E41E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e3df8
	ctx.lr = 0x830E41F0;
	sub_830E3DF8(ctx, base);
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
	// bl 0x830e3fe8
	ctx.lr = 0x830E421C;
	sub_830E3FE8(ctx, base);
loc_830E421C:
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

__attribute__((alias("__imp__sub_830E4238"))) PPC_WEAK_FUNC(sub_830E4238);
PPC_FUNC_IMPL(__imp__sub_830E4238) {
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
	// bl 0x830e1b98
	ctx.lr = 0x830E4274;
	sub_830E1B98(ctx, base);
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
	// bl 0x830e3fe8
	ctx.lr = 0x830E428C;
	sub_830E3FE8(ctx, base);
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

__attribute__((alias("__imp__sub_830E42A8"))) PPC_WEAK_FUNC(sub_830E42A8);
PPC_FUNC_IMPL(__imp__sub_830E42A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e54
	ctx.lr = 0x830E42B0;
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
	// beq cr6,0x830e4338
	if (ctx.cr6.eq) goto loc_830E4338;
	// lwz r8,216(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// lwz r7,196(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// lwz r10,200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r6,212(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
loc_830E42E0:
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
	// bne cr6,0x830e42e0
	if (!ctx.cr6.eq) goto loc_830E42E0;
	// cmpwi cr6,r24,256
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 256, ctx.xer);
	// bge cr6,0x830e4330
	if (!ctx.cr6.lt) goto loc_830E4330;
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// subf r11,r11,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,250
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 250, ctx.xer);
	// ble cr6,0x830e4330
	if (!ctx.cr6.gt) goto loc_830E4330;
	// li r24,256
	ctx.r24.s64 = 256;
loc_830E4330:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x830e4644
	if (!ctx.cr6.gt) goto loc_830E4644;
loc_830E4338:
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lis r25,-31973
	ctx.r25.s64 = -2095382528;
	// addi r31,r11,-15288
	ctx.r31.s64 = ctx.r11.s64 + -15288;
	// lis r26,4096
	ctx.r26.s64 = 268435456;
loc_830E4348:
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
	// bl 0x830e0990
	ctx.lr = 0x830E4364;
	sub_830E0990(ctx, base);
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, ctx.xer);
	// ble cr6,0x830e4374
	if (!ctx.cr6.gt) goto loc_830E4374;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_830E4374:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830E4378:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x830e43f8
	if (!ctx.cr6.gt) goto loc_830E43F8;
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r10,204(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x830e43f8
	if (ctx.cr6.eq) goto loc_830E43F8;
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
	// ble cr6,0x830e43b0
	if (!ctx.cr6.gt) goto loc_830E43B0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x830e43f8
	if (!ctx.cr6.gt) goto loc_830E43F8;
loc_830E43B0:
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
	// bgt cr6,0x830e43f8
	if (ctx.cr6.gt) goto loc_830E43F8;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x830e4378
	if (ctx.cr6.lt) goto loc_830E4378;
loc_830E43F8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x830e4644
	if (ctx.cr6.eq) goto loc_830E4644;
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
	// bl 0x82e28fd0
	ctx.lr = 0x830E444C;
	sub_82E28FD0(ctx, base);
	// addic. r27,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r27.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble 0x830e4504
	if (!ctx.cr0.gt) goto loc_830E4504;
loc_830E4454:
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
	// beq 0x830e44b0
	if (ctx.cr0.eq) goto loc_830E44B0;
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
	ctx.lr = 0x830E44B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E44B0:
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
	// bl 0x82e28fd0
	ctx.lr = 0x830E44D4;
	sub_82E28FD0(ctx, base);
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
	// bgt 0x830e4454
	if (ctx.cr0.gt) goto loc_830E4454;
loc_830E4504:
	// lwz r27,-10932(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10932);
loc_830E4508:
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x830e45e0
	if (ctx.cr6.eq) goto loc_830E45E0;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x830e45e0
	if (ctx.cr6.gt) goto loc_830E45E0;
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
	// bgt cr6,0x830e45e0
	if (ctx.cr6.gt) goto loc_830E45E0;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e4594
	if (ctx.cr0.eq) goto loc_830E4594;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E458C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r27,-10932(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10932);
loc_830E4594:
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
	// bl 0x82e28fd0
	ctx.lr = 0x830E45B4;
	sub_82E28FD0(ctx, base);
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
	// b 0x830e4508
	goto loc_830E4508;
loc_830E45E0:
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e45f4
	if (!ctx.cr6.eq) goto loc_830E45F4;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// b 0x830e4608
	goto loc_830E4608;
loc_830E45F4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x830e4608
	if (ctx.cr6.lt) goto loc_830E4608;
	// lis r11,-4096
	ctx.r11.s64 = -268435456;
loc_830E4608:
	// stw r11,-10932(r25)
	PPC_STORE_U32(ctx.r25.u32 + -10932, ctx.r11.u32);
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
	// bl 0x830e3fe8
	ctx.lr = 0x830E4630;
	sub_830E3FE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830e4644
	if (ctx.cr0.lt) goto loc_830E4644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf. r24,r11,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bgt 0x830e4348
	if (ctx.cr0.gt) goto loc_830E4348;
loc_830E4644:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E4650"))) PPC_WEAK_FUNC(sub_830E4650);
PPC_FUNC_IMPL(__imp__sub_830E4650) {
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
	// beq 0x830e4684
	if (ctx.cr0.eq) goto loc_830E4684;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// b 0x830e4688
	goto loc_830E4688;
loc_830E4684:
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_830E4688:
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// lwz r10,204(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x830e472c
	if (ctx.cr6.eq) goto loc_830E472C;
	// lwz r8,216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
loc_830E469C:
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830e472c
	if (ctx.cr6.lt) goto loc_830E472C;
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e46ec
	if (!ctx.cr6.eq) goto loc_830E46EC;
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
loc_830E46EC:
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
	// bne cr6,0x830e469c
	if (!ctx.cr6.eq) goto loc_830E469C;
loc_830E472C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x830e4744
	if (ctx.cr6.eq) goto loc_830E4744;
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// bl 0x830e42a8
	ctx.lr = 0x830E4744;
	sub_830E42A8(ctx, base);
loc_830E4744:
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

__attribute__((alias("__imp__sub_830E4758"))) PPC_WEAK_FUNC(sub_830E4758);
PPC_FUNC_IMPL(__imp__sub_830E4758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830E4760;
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
	// bne cr6,0x830e47b0
	if (!ctx.cr6.eq) goto loc_830E47B0;
loc_830E47A8:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x830e49a4
	goto loc_830E49A4;
loc_830E47B0:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// blt cr6,0x830e4858
	if (ctx.cr6.lt) goto loc_830E4858;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bge cr6,0x830e4858
	if (!ctx.cr6.lt) goto loc_830E4858;
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
	// bgt cr6,0x830e4824
	if (ctx.cr6.gt) goto loc_830E4824;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x830e4830
	if (!ctx.cr6.lt) goto loc_830E4830;
loc_830E4824:
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_830E4830:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// blt cr6,0x830e484c
	if (ctx.cr6.lt) goto loc_830E484C;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
loc_830E484C:
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bgt cr6,0x830e48bc
	if (ctx.cr6.gt) goto loc_830E48BC;
	// b 0x830e47a8
	goto loc_830E47A8;
loc_830E4858:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830e486c
	if (!ctx.cr6.lt) goto loc_830E486C;
loc_830E4864:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e49a4
	goto loc_830E49A4;
loc_830E486C:
	// ble cr6,0x830e48b0
	if (!ctx.cr6.gt) goto loc_830E48B0;
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
	// bl 0x830e3fe8
	ctx.lr = 0x830E48A8;
	sub_830E3FE8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830e49a4
	goto loc_830E49A4;
loc_830E48B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830e4864
	if (ctx.cr6.eq) goto loc_830E4864;
loc_830E48BC:
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
loc_830E48D4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x830e48d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830E48D4;
	// addi r28,r29,16
	ctx.r28.s64 = ctx.r29.s64 + 16;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830E48FC;
	sub_82E28FD0(ctx, base);
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
	// blt cr6,0x830e4964
	if (ctx.cr6.lt) goto loc_830E4964;
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
loc_830E4964:
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
	// beq 0x830e4994
	if (ctx.cr0.eq) goto loc_830E4994;
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
	ctx.lr = 0x830E4994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E4994:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
loc_830E49A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E49B0"))) PPC_WEAK_FUNC(sub_830E49B0);
PPC_FUNC_IMPL(__imp__sub_830E49B0) {
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
	// bl 0x830e1b98
	ctx.lr = 0x830E49EC;
	sub_830E1B98(ctx, base);
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
	// bl 0x830e3fe8
	ctx.lr = 0x830E4A04;
	sub_830E3FE8(ctx, base);
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

__attribute__((alias("__imp__sub_830E4A20"))) PPC_WEAK_FUNC(sub_830E4A20);
PPC_FUNC_IMPL(__imp__sub_830E4A20) {
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
	// beq cr6,0x830e4a84
	if (ctx.cr6.eq) goto loc_830E4A84;
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e4a84
	if (!ctx.cr6.eq) goto loc_830E4A84;
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
	// bl 0x830e42a8
	ctx.lr = 0x830E4A80;
	sub_830E42A8(ctx, base);
	// b 0x830e4ab4
	goto loc_830E4AB4;
loc_830E4A84:
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
	// bl 0x830e3fe8
	ctx.lr = 0x830E4AB4;
	sub_830E3FE8(ctx, base);
loc_830E4AB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E4AC8"))) PPC_WEAK_FUNC(sub_830E4AC8);
PPC_FUNC_IMPL(__imp__sub_830E4AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x830E4AD0;
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
	// beq cr6,0x830e4b8c
	if (ctx.cr6.eq) goto loc_830E4B8C;
	// addi r28,r31,132
	ctx.r28.s64 = ctx.r31.s64 + 132;
loc_830E4B3C:
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
	// bl 0x830e3fe8
	ctx.lr = 0x830E4B54;
	sub_830E3FE8(ctx, base);
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
	// bne cr6,0x830e4b3c
	if (!ctx.cr6.eq) goto loc_830E4B3C;
loc_830E4B8C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E4B98"))) PPC_WEAK_FUNC(sub_830E4B98);
PPC_FUNC_IMPL(__imp__sub_830E4B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e4c
	ctx.lr = 0x830E4BA0;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r30,r10,-12704
	ctx.r30.s64 = ctx.r10.s64 + -12704;
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
	// beq cr6,0x830e5124
	if (ctx.cr6.eq) goto loc_830E5124;
loc_830E4BE0:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e4c2c
	if (ctx.cr0.eq) goto loc_830E4C2C;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x830e4c2c
	if (ctx.cr6.eq) goto loc_830E4C2C;
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
	// bl 0x830e0820
	ctx.lr = 0x830E4C20;
	sub_830E0820(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bgt 0x830e4c3c
	if (ctx.cr0.gt) goto loc_830E4C3C;
loc_830E4C2C:
	// lwz r31,124(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x830e4be0
	if (!ctx.cr0.eq) goto loc_830E4BE0;
	// b 0x830e4c84
	goto loc_830E4C84;
loc_830E4C3C:
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
	// bl 0x830e1bd8
	ctx.lr = 0x830E4C70;
	sub_830E1BD8(ctx, base);
	// stw r3,-1304(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1304, ctx.r3.u32);
	// lwz r3,-1300(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1300);
	// bl 0x830e1bd8
	ctx.lr = 0x830E4C7C;
	sub_830E1BD8(ctx, base);
	// stw r3,-1300(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1300, ctx.r3.u32);
	// li r21,1
	ctx.r21.s64 = 1;
loc_830E4C84:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830e5124
	if (ctx.cr6.eq) goto loc_830E5124;
	// li r25,4
	ctx.r25.s64 = 4;
loc_830E4C94:
	// bl 0x830df1b8
	ctx.lr = 0x830E4C98;
	sub_830DF1B8(ctx, base);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x830e4cf0
	if (!ctx.cr6.eq) goto loc_830E4CF0;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830e4cf0
	if (!ctx.cr6.eq) goto loc_830E4CF0;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x830e4cf0
	if (!ctx.cr6.eq) goto loc_830E4CF0;
	// lwz r11,-1312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x830e4cf0
	if (ctx.cr6.lt) goto loc_830E4CF0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x830e4cdc
	if (ctx.cr6.eq) goto loc_830E4CDC;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x830e4cf0
	if (!ctx.cr6.eq) goto loc_830E4CF0;
loc_830E4CDC:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r9,-1300(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1300);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830e4cf0
	if (!ctx.cr6.eq) goto loc_830E4CF0;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
loc_830E4CF0:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x830e4d08
	if (ctx.cr6.eq) goto loc_830E4D08;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x830e4d08
	if (ctx.cr6.eq) goto loc_830E4D08;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x830e4d1c
	goto loc_830E4D1C;
loc_830E4D08:
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
loc_830E4D1C:
	// lwz r11,-1312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x830e4f18
	if (ctx.cr6.lt) goto loc_830E4F18;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x830e4f18
	if (ctx.cr6.eq) goto loc_830E4F18;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x830e4f18
	if (ctx.cr6.eq) goto loc_830E4F18;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830e4f18
	if (!ctx.cr6.eq) goto loc_830E4F18;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x830e19b0
	ctx.lr = 0x830E4D54;
	sub_830E19B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830e4f14
	if (!ctx.cr0.eq) goto loc_830E4F14;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830e4f14
	if (ctx.cr6.eq) goto loc_830E4F14;
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
	// bne cr6,0x830e4da8
	if (!ctx.cr6.eq) goto loc_830E4DA8;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// beq cr6,0x830e4da0
	if (ctx.cr6.eq) goto loc_830E4DA0;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bne cr6,0x830e4da8
	if (!ctx.cr6.eq) goto loc_830E4DA8;
loc_830E4DA0:
	// stw r25,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r25.u32);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_830E4DA8:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x830e4efc
	if (ctx.cr6.eq) goto loc_830E4EFC;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x830e4efc
	if (ctx.cr6.eq) goto loc_830E4EFC;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x830e4efc
	if (ctx.cr6.eq) goto loc_830E4EFC;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x830e4efc
	if (ctx.cr6.eq) goto loc_830E4EFC;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x830e5110
	if (!ctx.cr6.eq) goto loc_830E5110;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x830e4df8
	if (!ctx.cr6.eq) goto loc_830E4DF8;
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
	// bl 0x830e4650
	ctx.lr = 0x830E4DF4;
	sub_830E4650(ctx, base);
	// b 0x830e4f10
	goto loc_830E4F10;
loc_830E4DF8:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,-1308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1308);
	// ble cr6,0x830e4ecc
	if (!ctx.cr6.gt) goto loc_830E4ECC;
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
	// b 0x830e4ec0
	goto loc_830E4EC0;
loc_830E4E2C:
	// lwz r11,-1312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1312);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x830e4e50
	if (!ctx.cr6.gt) goto loc_830E4E50;
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
	// b 0x830e4e54
	goto loc_830E4E54;
loc_830E4E50:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830E4E54:
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
	// bl 0x830e4650
	ctx.lr = 0x830E4E70;
	sub_830E4650(ctx, base);
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
	// bl 0x830e4758
	ctx.lr = 0x830E4E90;
	sub_830E4758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830e4e9c
	if (!ctx.cr0.lt) goto loc_830E4E9C;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_830E4E9C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x830e4eb4
	if (!ctx.cr6.gt) goto loc_830E4EB4;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830e4eb4
	if (ctx.cr6.eq) goto loc_830E4EB4;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_830E4EB4:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_830E4EC0:
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bge 0x830e4e2c
	if (!ctx.cr0.lt) goto loc_830E4E2C;
	// b 0x830e4f10
	goto loc_830E4F10;
loc_830E4ECC:
	// addi r4,r30,-1312
	ctx.r4.s64 = ctx.r30.s64 + -1312;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e4650
	ctx.lr = 0x830E4EE0;
	sub_830E4650(ctx, base);
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
	// bl 0x830e4758
	ctx.lr = 0x830E4EF8;
	sub_830E4758(ctx, base);
	// b 0x830e4f10
	goto loc_830E4F10;
loc_830E4EFC:
	// addi r4,r30,-1312
	ctx.r4.s64 = ctx.r30.s64 + -1312;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e4148
	ctx.lr = 0x830E4F10;
	sub_830E4148(ctx, base);
loc_830E4F10:
	// stw r23,-1312(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1312, ctx.r23.u32);
loc_830E4F14:
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_830E4F18:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830e4f44
	if (!ctx.cr6.eq) goto loc_830E4F44;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// ble cr6,0x830e4f44
	if (!ctx.cr6.gt) goto loc_830E4F44;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e4238
	ctx.lr = 0x830E4F40;
	sub_830E4238(ctx, base);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_830E4F44:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x830e4f70
	if (!ctx.cr6.eq) goto loc_830E4F70;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x830e4f70
	if (ctx.cr6.eq) goto loc_830E4F70;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e42a8
	ctx.lr = 0x830E4F6C;
	sub_830E42A8(ctx, base);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_830E4F70:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x830e4fb4
	if (!ctx.cr6.eq) goto loc_830E4FB4;
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
	// ble cr6,0x830e4fb4
	if (!ctx.cr6.gt) goto loc_830E4FB4;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,2000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2000, ctx.xer);
	// bge cr6,0x830e4fb4
	if (!ctx.cr6.lt) goto loc_830E4FB4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e40d0
	ctx.lr = 0x830E4FB0;
	sub_830E40D0(ctx, base);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_830E4FB4:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r11,-5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5, ctx.xer);
	// bne cr6,0x830e4ff0
	if (!ctx.cr6.eq) goto loc_830E4FF0;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x830e4fdc
	if (ctx.cr6.eq) goto loc_830E4FDC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x830e4fdc
	if (ctx.cr6.eq) goto loc_830E4FDC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x830e4ff0
	if (!ctx.cr6.eq) goto loc_830E4FF0;
loc_830E4FDC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e40d0
	ctx.lr = 0x830E4FE8;
	sub_830E40D0(ctx, base);
	// stw r26,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r26.u32);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_830E4FF0:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x830e5028
	if (!ctx.cr6.eq) goto loc_830E5028;
	// lhz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x830e5028
	if (!ctx.cr6.eq) goto loc_830E5028;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 + 1000;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x830e5028
	if (!ctx.cr6.gt) goto loc_830E5028;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e49b0
	ctx.lr = 0x830E5024;
	sub_830E49B0(ctx, base);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_830E5028:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830e5050
	if (!ctx.cr6.eq) goto loc_830E5050;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r11,r11,250
	ctx.r11.s64 = ctx.r11.s64 + 250;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x830e5050
	if (!ctx.cr6.gt) goto loc_830E5050;
	// stw r27,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r27.u32);
	// stw r25,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r25.u32);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_830E5050:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830e50a0
	if (!ctx.cr6.eq) goto loc_830E50A0;
	// lwz r4,248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x830e50a0
	if (ctx.cr0.eq) goto loc_830E50A0;
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
	// beq 0x830e508c
	if (ctx.cr0.eq) goto loc_830E508C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E508C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E508C:
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
loc_830E50A0:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x830e5110
	if (!ctx.cr6.eq) goto loc_830E5110;
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830e5110
	if (!ctx.cr6.eq) goto loc_830E5110;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x830e50e8
	if (!ctx.cr6.gt) goto loc_830E50E8;
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r7,180(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x830e50fc
	if (!ctx.cr6.eq) goto loc_830E50FC;
	// lwz r8,208(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x830e50fc
	if (!ctx.cr6.eq) goto loc_830E50FC;
loc_830E50E8:
	// cmplwi cr6,r11,2500
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2500, ctx.xer);
	// bgt cr6,0x830e50fc
	if (ctx.cr6.gt) goto loc_830E50FC;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// blt cr6,0x830e5110
	if (ctx.cr6.lt) goto loc_830E5110;
loc_830E50FC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r26,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e4a20
	ctx.lr = 0x830E510C;
	sub_830E4A20(ctx, base);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_830E5110:
	// lwz r31,124(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x830e4c94
	if (!ctx.cr0.eq) goto loc_830E4C94;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x830e5128
	goto loc_830E5128;
loc_830E5124:
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_830E5128:
	// lwz r11,-1312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x830e523c
	if (ctx.cr6.lt) goto loc_830E523C;
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x830e523c
	if (!ctx.cr6.eq) goto loc_830E523C;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x830e5158
	if (ctx.cr6.eq) goto loc_830E5158;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x830e5158
	if (ctx.cr6.eq) goto loc_830E5158;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x830e523c
	if (!ctx.cr6.eq) goto loc_830E523C;
loc_830E5158:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830e523c
	if (ctx.cr6.eq) goto loc_830E523C;
loc_830E5164:
	// lwz r9,148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x830e5178
	if (ctx.cr6.eq) goto loc_830E5178;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x830e5194
	if (!ctx.cr6.eq) goto loc_830E5194;
loc_830E5178:
	// lhz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 132);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x830e5194
	if (!ctx.cr6.eq) goto loc_830E5194;
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lwz r8,-1300(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1300);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x830e51a4
	if (ctx.cr6.eq) goto loc_830E51A4;
loc_830E5194:
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830e5164
	if (!ctx.cr0.eq) goto loc_830E5164;
	// b 0x830e523c
	goto loc_830E523C;
loc_830E51A4:
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmplw cr6,r24,r9
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830e523c
	if (!ctx.cr6.eq) goto loc_830E523C;
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
	// bne cr6,0x830e523c
	if (!ctx.cr6.eq) goto loc_830E523C;
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
	// beq cr6,0x830e523c
	if (ctx.cr6.eq) goto loc_830E523C;
	// addi r3,r11,132
	ctx.r3.s64 = ctx.r11.s64 + 132;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82e28fd0
	ctx.lr = 0x830E5238;
	sub_82E28FD0(ctx, base);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_830E523C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x830e52fc
	if (ctx.cr6.eq) goto loc_830E52FC;
	// lwz r11,-1312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x830e52fc
	if (ctx.cr6.lt) goto loc_830E52FC;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x830e5260
	if (ctx.cr6.eq) goto loc_830E5260;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x830e52fc
	if (!ctx.cr6.eq) goto loc_830E52FC;
loc_830E5260:
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
	// bne cr6,0x830e52fc
	if (!ctx.cr6.eq) goto loc_830E52FC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830e52c8
	if (ctx.cr6.eq) goto loc_830E52C8;
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
	// bne cr6,0x830e52fc
	if (!ctx.cr6.eq) goto loc_830E52FC;
loc_830E52C8:
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,148(r22)
	PPC_STORE_U32(ctx.r22.u32 + 148, ctx.r10.u32);
	// bne cr6,0x830e52e8
	if (!ctx.cr6.eq) goto loc_830E52E8;
	// addi r3,r22,132
	ctx.r3.s64 = ctx.r22.s64 + 132;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82e28fd0
	ctx.lr = 0x830E52E8;
	sub_82E28FD0(ctx, base);
loc_830E52E8:
	// addi r4,r30,-1312
	ctx.r4.s64 = ctx.r30.s64 + -1312;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830e4148
	ctx.lr = 0x830E52FC;
	sub_830E4148(ctx, base);
loc_830E52FC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82e28e9c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5308"))) PPC_WEAK_FUNC(sub_830E5308);
PPC_FUNC_IMPL(__imp__sub_830E5308) {
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
	// addi r31,r11,-15296
	ctx.r31.s64 = ctx.r11.s64 + -15296;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,2552
	ctx.r3.s64 = ctx.r31.s64 + 2552;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x830df218
	ctx.lr = 0x830E5334;
	sub_830DF218(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830e5368
	if (ctx.cr0.eq) goto loc_830E5368;
	// bl 0x830df1b8
	ctx.lr = 0x830E5340;
	sub_830DF1B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830E5344:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e4b98
	ctx.lr = 0x830E534C;
	sub_830E4B98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x830e5344
	if (ctx.cr0.gt) goto loc_830E5344;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,2552
	ctx.r3.s64 = ctx.r31.s64 + 2552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x830df370
	ctx.lr = 0x830E5364;
	sub_830DF370(ctx, base);
	// b 0x830e5374
	goto loc_830E5374;
loc_830E5368:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_830E5374:
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

__attribute__((alias("__imp__sub_830E5398"))) PPC_WEAK_FUNC(sub_830E5398);
PPC_FUNC_IMPL(__imp__sub_830E5398) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-15296
	ctx.r31.s64 = ctx.r11.s64 + -15296;
	// lwz r11,2592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830e53e0
	if (!ctx.cr6.eq) goto loc_830E53E0;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r3,r31,2552
	ctx.r3.s64 = ctx.r31.s64 + 2552;
	// addi r4,r11,-10928
	ctx.r4.s64 = ctx.r11.s64 + -10928;
	// bl 0x830df1c8
	ctx.lr = 0x830E53D4;
	sub_830DF1C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_830E53E0:
	// addi r3,r31,2552
	ctx.r3.s64 = ctx.r31.s64 + 2552;
	// bl 0x830df2c0
	ctx.lr = 0x830E53E8;
	sub_830DF2C0(ctx, base);
	// lwz r11,2592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2592);
	// addi r3,r31,2552
	ctx.r3.s64 = ctx.r31.s64 + 2552;
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// stw r30,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r30.u32);
	// bl 0x830df370
	ctx.lr = 0x830E53FC;
	sub_830DF370(ctx, base);
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

__attribute__((alias("__imp__sub_830E5418"))) PPC_WEAK_FUNC(sub_830E5418);
PPC_FUNC_IMPL(__imp__sub_830E5418) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12704
	ctx.r31.s64 = ctx.r11.s64 + -12704;
	// addi r3,r31,-40
	ctx.r3.s64 = ctx.r31.s64 + -40;
	// bl 0x830df2c0
	ctx.lr = 0x830E5440;
	sub_830DF2C0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x830e5454
	goto loc_830E5454;
loc_830E544C:
	// addi r11,r10,124
	ctx.r11.s64 = ctx.r10.s64 + 124;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_830E5454:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x830e544c
	if (!ctx.cr6.eq) goto loc_830E544C;
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r3,r31,-40
	ctx.r3.s64 = ctx.r31.s64 + -40;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x830df370
	ctx.lr = 0x830E546C;
	sub_830DF370(ctx, base);
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

__attribute__((alias("__imp__sub_830E5488"))) PPC_WEAK_FUNC(sub_830E5488);
PPC_FUNC_IMPL(__imp__sub_830E5488) {
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
	// bl 0x830df1b8
	ctx.lr = 0x830E54A4;
	sub_830DF1B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x830e4ac8
	ctx.lr = 0x830E54B8;
	sub_830E4AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e5418
	ctx.lr = 0x830E54C0;
	sub_830E5418(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x830e54d8
	if (!ctx.cr6.eq) goto loc_830E54D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e40d0
	ctx.lr = 0x830E54D8;
	sub_830E40D0(ctx, base);
loc_830E54D8:
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r30,r11,-12744
	ctx.r30.s64 = ctx.r11.s64 + -12744;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// beq 0x830e5530
	if (ctx.cr0.eq) goto loc_830E5530;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e551c
	if (ctx.cr6.eq) goto loc_830E551C;
loc_830E54FC:
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x830e5514
	if (ctx.cr6.eq) goto loc_830E5514;
	// lwz r10,124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830e54fc
	if (!ctx.cr0.eq) goto loc_830E54FC;
loc_830E5514:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830e5530
	if (!ctx.cr6.eq) goto loc_830E5530;
loc_830E551C:
	// bl 0x830e03c0
	ctx.lr = 0x830E5520;
	sub_830E03C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
loc_830E5530:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830e5540
	if (!ctx.cr6.eq) goto loc_830E5540;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830df1f8
	ctx.lr = 0x830E5540;
	sub_830DF1F8(ctx, base);
loc_830E5540:
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
	// bl 0x82217db8
	ctx.lr = 0x830E5558;
	sub_82217DB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x82217db8
	ctx.lr = 0x830E5568;
	sub_82217DB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217db8
	ctx.lr = 0x830E5578;
	sub_82217DB8(ctx, base);
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

__attribute__((alias("__imp__sub_830E5590"))) PPC_WEAK_FUNC(sub_830E5590);
PPC_FUNC_IMPL(__imp__sub_830E5590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830E5598;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-12744
	ctx.r30.s64 = ctx.r11.s64 + -12744;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830df2c0
	ctx.lr = 0x830E55B4;
	sub_830DF2C0(ctx, base);
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
	// bl 0x830df370
	ctx.lr = 0x830E55CC;
	sub_830DF370(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E55D8"))) PPC_WEAK_FUNC(sub_830E55D8);
PPC_FUNC_IMPL(__imp__sub_830E55D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E55E0"))) PPC_WEAK_FUNC(sub_830E55E0);
PPC_FUNC_IMPL(__imp__sub_830E55E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E55E8"))) PPC_WEAK_FUNC(sub_830E55E8);
PPC_FUNC_IMPL(__imp__sub_830E55E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x830E55F0;
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
	// beq cr6,0x830e561c
	if (ctx.cr6.eq) goto loc_830E561C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e03c0
	ctx.lr = 0x830E5614;
	sub_830E03C0(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x830e5740
	goto loc_830E5740;
loc_830E561C:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bl 0x830e3ef8
	ctx.lr = 0x830E5630;
	sub_830E3EF8(ctx, base);
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
	// bl 0x82e29500
	ctx.lr = 0x830E564C;
	sub_82E29500(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r30,-12704(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12704);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830e56c4
	if (ctx.cr6.eq) goto loc_830E56C4;
loc_830E565C:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x830e56b8
	if (ctx.cr6.eq) goto loc_830E56B8;
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830e56b8
	if (ctx.cr0.eq) goto loc_830E56B8;
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
	// bl 0x830e0990
	ctx.lr = 0x830E5688;
	sub_830E0990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830e56b8
	if (ctx.cr0.lt) goto loc_830E56B8;
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
	// beq cr6,0x830e56fc
	if (ctx.cr6.eq) goto loc_830E56FC;
loc_830E56B8:
	// lwz r30,124(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x830e565c
	if (!ctx.cr0.eq) goto loc_830E565C;
loc_830E56C4:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e0450
	ctx.lr = 0x830E56D4;
	sub_830E0450(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bge 0x830e5714
	if (!ctx.cr0.lt) goto loc_830E5714;
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// bl 0x830e03c0
	ctx.lr = 0x830E56E8;
	sub_830E03C0(ctx, base);
	// cmpwi cr6,r30,-11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -11, ctx.xer);
	// li r3,-9
	ctx.r3.s64 = -9;
	// beq cr6,0x830e5740
	if (ctx.cr6.eq) goto loc_830E5740;
	// li r3,-5
	ctx.r3.s64 = -5;
	// b 0x830e5740
	goto loc_830E5740;
loc_830E56FC:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x830e03c0
	ctx.lr = 0x830E5710;
	sub_830E03C0(ctx, base);
	// b 0x830e5734
	goto loc_830E5734;
loc_830E5714:
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// addi r7,r11,21256
	ctx.r7.s64 = ctx.r11.s64 + 21256;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x830e0cd8
	ctx.lr = 0x830E5734;
	sub_830E0CD8(ctx, base);
loc_830E5734:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_830E5740:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5748"))) PPC_WEAK_FUNC(sub_830E5748);
PPC_FUNC_IMPL(__imp__sub_830E5748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830E5750;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830df1b8
	ctx.lr = 0x830E575C;
	sub_830DF1B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x830e4ac8
	ctx.lr = 0x830E5770;
	sub_830E4AC8(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x830e5788
	if (!ctx.cr6.eq) goto loc_830E5788;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_830E5788:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e57b0
	if (ctx.cr6.eq) goto loc_830E57B0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e40d0
	ctx.lr = 0x830E57A0;
	sub_830E40D0(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x830e03c0
	ctx.lr = 0x830E57A8;
	sub_830E03C0(ctx, base);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_830E57B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E57C8"))) PPC_WEAK_FUNC(sub_830E57C8);
PPC_FUNC_IMPL(__imp__sub_830E57C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830E57D0;
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
	// beq cr6,0x830e57fc
	if (ctx.cr6.eq) goto loc_830E57FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e03c0
	ctx.lr = 0x830E57F4;
	sub_830E03C0(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x830e5850
	goto loc_830E5850;
loc_830E57FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x830e3ef8
	ctx.lr = 0x830E5810;
	sub_830E3EF8(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830E5820;
	sub_82E28FD0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// addi r7,r11,21256
	ctx.r7.s64 = ctx.r11.s64 + 21256;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e0cd8
	ctx.lr = 0x830E5844;
	sub_830E0CD8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_830E5850:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5858"))) PPC_WEAK_FUNC(sub_830E5858);
PPC_FUNC_IMPL(__imp__sub_830E5858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830E5860;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830df1b8
	ctx.lr = 0x830E586C;
	sub_830DF1B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x830e4ac8
	ctx.lr = 0x830E5880;
	sub_830E4AC8(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x830e5898
	if (!ctx.cr6.eq) goto loc_830E5898;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_830E5898:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e58c0
	if (ctx.cr6.eq) goto loc_830E58C0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e40d0
	ctx.lr = 0x830E58B0;
	sub_830E40D0(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x830e03c0
	ctx.lr = 0x830E58B8;
	sub_830E03C0(ctx, base);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_830E58C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E58D8"))) PPC_WEAK_FUNC(sub_830E58D8);
PPC_FUNC_IMPL(__imp__sub_830E58D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x830e591c
	if (ctx.cr6.eq) goto loc_830E591C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x830e591c
	if (ctx.cr6.eq) goto loc_830E591C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x830e5914
	if (ctx.cr6.eq) goto loc_830E5914;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x830e5914
	if (ctx.cr6.eq) goto loc_830E5914;
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
loc_830E5914:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_830E591C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E5928"))) PPC_WEAK_FUNC(sub_830E5928);
PPC_FUNC_IMPL(__imp__sub_830E5928) {
	PPC_FUNC_PROLOGUE();
	// lis r10,25452
	ctx.r10.s64 = 1668022272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r10,r10,26980
	ctx.r10.u64 = ctx.r10.u64 | 26980;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x830e5948
	if (!ctx.cr6.eq) goto loc_830E5948;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r5.u32);
	// blr 
	return;
loc_830E5948:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E5950"))) PPC_WEAK_FUNC(sub_830E5950);
PPC_FUNC_IMPL(__imp__sub_830E5950) {
	PPC_FUNC_PROLOGUE();
	// b 0x830df1b8
	sub_830DF1B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5958"))) PPC_WEAK_FUNC(sub_830E5958);
PPC_FUNC_IMPL(__imp__sub_830E5958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x830E5960;
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
	// bl 0x830df1b8
	ctx.lr = 0x830E5978;
	sub_830DF1B8(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x830e5990
	if (ctx.cr6.eq) goto loc_830E5990;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x830e5bf4
	goto loc_830E5BF4;
loc_830E5990:
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
	// bne cr6,0x830e59d4
	if (!ctx.cr6.eq) goto loc_830E59D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e5bf4
	goto loc_830E5BF4;
loc_830E59D4:
	// addi r7,r10,-16
	ctx.r7.s64 = ctx.r10.s64 + -16;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x830e59e8
	if (!ctx.cr6.gt) goto loc_830E59E8;
	// li r3,-6
	ctx.r3.s64 = -6;
	// b 0x830e5bf4
	goto loc_830E5BF4;
loc_830E59E8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x830e5a38
	if (!ctx.cr6.eq) goto loc_830E5A38;
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
	// b 0x830e5bf4
	goto loc_830E5BF4;
loc_830E5A38:
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
	// bl 0x82e28fd0
	ctx.lr = 0x830E5A54;
	sub_82E28FD0(ctx, base);
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e5af4
	if (ctx.cr0.eq) goto loc_830E5AF4;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r29,r11,-15296
	ctx.r29.s64 = ctx.r11.s64 + -15296;
	// addi r3,r29,2552
	ctx.r3.s64 = ctx.r29.s64 + 2552;
	// bl 0x830df2c0
	ctx.lr = 0x830E5A70;
	sub_830DF2C0(ctx, base);
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
	// beq 0x830e5ab8
	if (ctx.cr0.eq) goto loc_830E5AB8;
	// addi r4,r31,132
	ctx.r4.s64 = ctx.r31.s64 + 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82e28fd0
	ctx.lr = 0x830E5A9C;
	sub_82E28FD0(ctx, base);
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
	// b 0x830e5abc
	goto loc_830E5ABC;
loc_830E5AB8:
	// addi r5,r31,132
	ctx.r5.s64 = ctx.r31.s64 + 132;
loc_830E5ABC:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e3fe8
	ctx.lr = 0x830E5ACC;
	sub_830E3FE8(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// blt cr6,0x830e5ae8
	if (ctx.cr6.lt) goto loc_830E5AE8;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
loc_830E5AE8:
	// addi r3,r29,2552
	ctx.r3.s64 = ctx.r29.s64 + 2552;
	// bl 0x830df370
	ctx.lr = 0x830E5AF0;
	sub_830DF370(ctx, base);
	// b 0x830e5bf0
	goto loc_830E5BF0;
loc_830E5AF4:
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
	// bge cr6,0x830e5be4
	if (!ctx.cr6.lt) goto loc_830E5BE4;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r29,r11,-15296
	ctx.r29.s64 = ctx.r11.s64 + -15296;
	// addi r3,r29,2552
	ctx.r3.s64 = ctx.r29.s64 + 2552;
	// bl 0x830df2c0
	ctx.lr = 0x830E5BAC;
	sub_830DF2C0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e42a8
	ctx.lr = 0x830E5BB8;
	sub_830E42A8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830e5bdc
	if (ctx.cr6.eq) goto loc_830E5BDC;
loc_830E5BC4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830e4b98
	ctx.lr = 0x830E5BCC;
	sub_830E4B98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x830e5bc4
	if (ctx.cr0.gt) goto loc_830E5BC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_830E5BDC:
	// addi r3,r29,2552
	ctx.r3.s64 = ctx.r29.s64 + 2552;
	// bl 0x830df370
	ctx.lr = 0x830E5BE4;
	sub_830DF370(ctx, base);
loc_830E5BE4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bgt cr6,0x830e5bf4
	if (ctx.cr6.gt) goto loc_830E5BF4;
loc_830E5BF0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830E5BF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5C00"))) PPC_WEAK_FUNC(sub_830E5C00);
PPC_FUNC_IMPL(__imp__sub_830E5C00) {
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
	// bne cr6,0x830e5c3c
	if (!ctx.cr6.eq) goto loc_830E5C3C;
	// li r3,-7
	ctx.r3.s64 = -7;
	// b 0x830e5c7c
	goto loc_830E5C7C;
loc_830E5C3C:
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x830e5c68
	if (!ctx.cr6.gt) goto loc_830E5C68;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x830e5c60
	if (!ctx.cr6.lt) goto loc_830E5C60;
	// li r3,-6
	ctx.r3.s64 = -6;
	// b 0x830e5c7c
	goto loc_830E5C7C;
loc_830E5C60:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x82e28fd0
	ctx.lr = 0x830E5C68;
	sub_82E28FD0(ctx, base);
loc_830E5C68:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830e5c78
	if (ctx.cr6.eq) goto loc_830E5C78;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_830E5C78:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_830E5C7C:
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

__attribute__((alias("__imp__sub_830E5C98"))) PPC_WEAK_FUNC(sub_830E5C98);
PPC_FUNC_IMPL(__imp__sub_830E5C98) {
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
	// bl 0x830e5c00
	ctx.lr = 0x830E5CB0;
	sub_830E5C00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830e5cec
	if (ctx.cr0.lt) goto loc_830E5CEC;
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
loc_830E5CEC:
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

__attribute__((alias("__imp__sub_830E5D00"))) PPC_WEAK_FUNC(sub_830E5D00);
PPC_FUNC_IMPL(__imp__sub_830E5D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x830E5D08;
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
	// bl 0x830e1cb0
	ctx.lr = 0x830E5D44;
	sub_830E1CB0(ctx, base);
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x830e5d58
	if (ctx.cr6.eq) goto loc_830E5D58;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x830e5e14
	goto loc_830E5E14;
loc_830E5D58:
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
	// bl 0x830e02b0
	ctx.lr = 0x830E5D78;
	sub_830E02B0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x830e5d88
	if (!ctx.cr0.eq) goto loc_830E5D88;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x830e5e14
	goto loc_830E5E14;
loc_830E5D88:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e55e8
	ctx.lr = 0x830E5D94;
	sub_830E55E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e3eb0
	ctx.lr = 0x830E5DA4;
	sub_830E3EB0(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x830e5e0c
	if (!ctx.cr6.eq) goto loc_830E5E0C;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x830e5e0c
	if (ctx.cr6.eq) goto loc_830E5E0C;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x830e5dcc
	if (!ctx.cr6.eq) goto loc_830E5DCC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_830E5DCC:
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
loc_830E5E0C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
loc_830E5E14:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5E20"))) PPC_WEAK_FUNC(sub_830E5E20);
PPC_FUNC_IMPL(__imp__sub_830E5E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830E5E28;
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
	// bl 0x830e1cb0
	ctx.lr = 0x830E5E78;
	sub_830E1CB0(ctx, base);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x830e5e8c
	if (ctx.cr6.eq) goto loc_830E5E8C;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x830e5ff8
	goto loc_830E5FF8;
loc_830E5E8C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x830e5ea8
	if (!ctx.cr6.eq) goto loc_830E5EA8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_830E5EA8:
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
	// bl 0x830e3eb0
	ctx.lr = 0x830E5EC0;
	sub_830E3EB0(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r30,-12704(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12704);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830e5f34
	if (ctx.cr6.eq) goto loc_830E5F34;
loc_830E5ED0:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x830e5f18
	if (ctx.cr6.eq) goto loc_830E5F18;
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830e5f18
	if (ctx.cr0.eq) goto loc_830E5F18;
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
	// bl 0x830e0990
	ctx.lr = 0x830E5EFC;
	sub_830E0990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830e5f18
	if (ctx.cr0.lt) goto loc_830E5F18;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830e19b0
	ctx.lr = 0x830E5F10;
	sub_830E19B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830e5f28
	if (ctx.cr0.eq) goto loc_830E5F28;
loc_830E5F18:
	// lwz r30,124(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x830e5ed0
	if (!ctx.cr0.eq) goto loc_830E5ED0;
	// b 0x830e5f34
	goto loc_830E5F34;
loc_830E5F28:
	// lwz r30,128(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x830e5fb4
	if (!ctx.cr0.eq) goto loc_830E5FB4;
loc_830E5F34:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x830e02b0
	ctx.lr = 0x830E5F44;
	sub_830E02B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x830e5f54
	if (!ctx.cr0.eq) goto loc_830E5F54;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x830e5ff8
	goto loc_830E5FF8;
loc_830E5F54:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e0450
	ctx.lr = 0x830E5F64;
	sub_830E0450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830e5fb4
	if (!ctx.cr0.lt) goto loc_830E5FB4;
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
	// bl 0x830e0450
	ctx.lr = 0x830E5F84;
	sub_830E0450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bge 0x830e5f9c
	if (!ctx.cr0.lt) goto loc_830E5F9C;
	// bl 0x830e03c0
	ctx.lr = 0x830E5F94;
	sub_830E03C0(ctx, base);
	// li r3,-5
	ctx.r3.s64 = -5;
	// b 0x830e5ff8
	goto loc_830E5FF8;
loc_830E5F9C:
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
	// bl 0x830e0990
	ctx.lr = 0x830E5FB4;
	sub_830E0990(ctx, base);
loc_830E5FB4:
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
	// bl 0x830e57c8
	ctx.lr = 0x830E5FF8;
	sub_830E57C8(ctx, base);
loc_830E5FF8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E6000"))) PPC_WEAK_FUNC(sub_830E6000);
PPC_FUNC_IMPL(__imp__sub_830E6000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e44
	ctx.lr = 0x830E6008;
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
	// bl 0x830e88c8
	ctx.lr = 0x830E601C;
	sub_830E88C8(ctx, base);
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
	// bl 0x82217d58
	ctx.lr = 0x830E6038;
	sub_82217D58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830e6048
	if (!ctx.cr0.eq) goto loc_830E6048;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e619c
	goto loc_830E619C;
loc_830E6048:
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e29500
	ctx.lr = 0x830E6058;
	sub_82E29500(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// lis r5,-31986
	ctx.r5.s64 = -2096234496;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// addi r11,r11,23704
	ctx.r11.s64 = ctx.r11.s64 + 23704;
	// sth r28,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r28.u16);
	// addi r5,r5,21904
	ctx.r5.s64 = ctx.r5.s64 + 21904;
	// stb r27,86(r31)
	PPC_STORE_U8(ctx.r31.u32 + 86, ctx.r27.u8);
	// lis r3,-31986
	ctx.r3.s64 = -2096234496;
	// stb r26,87(r31)
	PPC_STORE_U8(ctx.r31.u32 + 87, ctx.r26.u8);
	// addi r29,r28,16
	ctx.r29.s64 = ctx.r28.s64 + 16;
	// addi r3,r3,24096
	ctx.r3.s64 = ctx.r3.s64 + 24096;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// lis r4,-31986
	ctx.r4.s64 = -2096234496;
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r4,22616
	ctx.r4.s64 = ctx.r4.s64 + 22616;
	// rlwinm r30,r11,0,17,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFC;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r19,-31986
	ctx.r19.s64 = -2096234496;
	// lis r20,-31986
	ctx.r20.s64 = -2096234496;
	// lis r21,-31986
	ctx.r21.s64 = -2096234496;
	// lis r22,-31986
	ctx.r22.s64 = -2096234496;
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// lis r23,-31986
	ctx.r23.s64 = -2096234496;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// lis r24,-31986
	ctx.r24.s64 = -2096234496;
	// lis r6,-31986
	ctx.r6.s64 = -2096234496;
	// lis r7,-31986
	ctx.r7.s64 = -2096234496;
	// lis r8,-31986
	ctx.r8.s64 = -2096234496;
	// lis r9,-31986
	ctx.r9.s64 = -2096234496;
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r6,r6,22824
	ctx.r6.s64 = ctx.r6.s64 + 22824;
	// addi r7,r7,22744
	ctx.r7.s64 = ctx.r7.s64 + 22744;
	// addi r8,r8,22864
	ctx.r8.s64 = ctx.r8.s64 + 22864;
	// addi r9,r9,22872
	ctx.r9.s64 = ctx.r9.s64 + 22872;
	// addi r10,r10,23552
	ctx.r10.s64 = ctx.r10.s64 + 23552;
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
	// addi r19,r19,24576
	ctx.r19.s64 = ctx.r19.s64 + 24576;
	// addi r20,r20,21640
	ctx.r20.s64 = ctx.r20.s64 + 21640;
	// addi r21,r21,21976
	ctx.r21.s64 = ctx.r21.s64 + 21976;
	// addi r22,r22,21984
	ctx.r22.s64 = ctx.r22.s64 + 21984;
	// addi r23,r23,23808
	ctx.r23.s64 = ctx.r23.s64 + 23808;
	// addi r24,r24,22344
	ctx.r24.s64 = ctx.r24.s64 + 22344;
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
	// bl 0x82217d58
	ctx.lr = 0x830E6140;
	sub_82217D58(ctx, base);
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
	// bl 0x82217d58
	ctx.lr = 0x830E6160;
	sub_82217D58(ctx, base);
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
	// bl 0x82e29500
	ctx.lr = 0x830E6184;
	sub_82E29500(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// bl 0x830e5398
	ctx.lr = 0x830E6198;
	sub_830E5398(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830E619C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82e28e94
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E61A8"))) PPC_WEAK_FUNC(sub_830E61A8);
PPC_FUNC_IMPL(__imp__sub_830E61A8) {
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
	// beq 0x830e61e8
	if (ctx.cr0.eq) goto loc_830E61E8;
	// subfic r4,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r4.s64 = 4 - ctx.r11.s64;
	// bl 0x830ede30
	ctx.lr = 0x830E61DC;
	sub_830EDE30(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_830E61E8:
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

__attribute__((alias("__imp__sub_830E6200"))) PPC_WEAK_FUNC(sub_830E6200);
PPC_FUNC_IMPL(__imp__sub_830E6200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e50
	ctx.lr = 0x830E6208;
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
	// bl 0x830df2c0
	ctx.lr = 0x830E6228;
	sub_830DF2C0(ctx, base);
	// addi r24,r31,84
	ctx.r24.s64 = ctx.r31.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830df2c0
	ctx.lr = 0x830E6234;
	sub_830DF2C0(ctx, base);
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
	// ble 0x830e62e0
	if (!ctx.cr0.gt) goto loc_830E62E0;
	// addi r30,r31,132
	ctx.r30.s64 = ctx.r31.s64 + 132;
loc_830E6250:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x830e62c8
	if (!ctx.cr6.eq) goto loc_830E62C8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x830e62c4
	if (ctx.cr6.eq) goto loc_830E62C4;
	// cmpwi cr6,r22,16
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 16, ctx.xer);
	// blt cr6,0x830e62c4
	if (ctx.cr6.lt) goto loc_830E62C4;
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
	// bl 0x82e28fd0
	ctx.lr = 0x830E62C4;
	sub_82E28FD0(ctx, base);
loc_830E62C4:
	// lwz r28,-4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
loc_830E62C8:
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
	// blt cr6,0x830e6250
	if (ctx.cr6.lt) goto loc_830E6250;
loc_830E62E0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830df370
	ctx.lr = 0x830E62E8;
	sub_830DF370(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830df370
	ctx.lr = 0x830E62F0;
	sub_830DF370(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82e28ea0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E6300"))) PPC_WEAK_FUNC(sub_830E6300);
PPC_FUNC_IMPL(__imp__sub_830E6300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e54
	ctx.lr = 0x830E6308;
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
	// ble 0x830e63c4
	if (!ctx.cr0.gt) goto loc_830E63C4;
loc_830E6338:
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
	// bne cr6,0x830e63a8
	if (!ctx.cr6.eq) goto loc_830E63A8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830E6374;
	sub_82E28FD0(ctx, base);
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
loc_830E63A8:
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
	// blt cr6,0x830e6338
	if (ctx.cr6.lt) goto loc_830E6338;
loc_830E63C4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E63D0"))) PPC_WEAK_FUNC(sub_830E63D0);
PPC_FUNC_IMPL(__imp__sub_830E63D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e54
	ctx.lr = 0x830E63D8;
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
	// bl 0x830df2c0
	ctx.lr = 0x830E63F0;
	sub_830DF2C0(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e662c
	if (ctx.cr6.eq) goto loc_830E662C;
	// lha r11,40(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 40));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x830e662c
	if (!ctx.cr0.gt) goto loc_830E662C;
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
	// bl 0x82e29500
	ctx.lr = 0x830E6464;
	sub_82E29500(ctx, base);
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
	// beq 0x830e6504
	if (ctx.cr0.eq) goto loc_830E6504;
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
	// bl 0x82e28fd0
	ctx.lr = 0x830E64E0;
	sub_82E28FD0(ctx, base);
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
	// b 0x830e6508
	goto loc_830E6508;
loc_830E6504:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_830E6508:
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
	// bl 0x830e6300
	ctx.lr = 0x830E6524;
	sub_830E6300(ctx, base);
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
	// bl 0x830e6300
	ctx.lr = 0x830E6548;
	sub_830E6300(ctx, base);
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
	// bne cr6,0x830e65a0
	if (!ctx.cr6.eq) goto loc_830E65A0;
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
	// bl 0x830eddc8
	ctx.lr = 0x830E658C;
	sub_830EDDC8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830e61a8
	ctx.lr = 0x830E659C;
	sub_830E61A8(ctx, base);
	// b 0x830e65b8
	goto loc_830E65B8;
loc_830E65A0:
	// clrlwi r3,r27,16
	ctx.r3.u64 = ctx.r27.u32 & 0xFFFF;
	// bl 0x830e1b80
	ctx.lr = 0x830E65A8;
	sub_830E1B80(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
loc_830E65B8:
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
	// bl 0x830df370
	ctx.lr = 0x830E660C;
	sub_830DF370(ctx, base);
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
	// bl 0x830e0740
	ctx.lr = 0x830E6628;
	sub_830E0740(ctx, base);
	// b 0x830e6634
	goto loc_830E6634;
loc_830E662C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830df370
	ctx.lr = 0x830E6634;
	sub_830DF370(ctx, base);
loc_830E6634:
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x82e28ea4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E6640"))) PPC_WEAK_FUNC(sub_830E6640);
PPC_FUNC_IMPL(__imp__sub_830E6640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x830E6648;
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
	// beq cr6,0x830e672c
	if (ctx.cr6.eq) goto loc_830E672C;
	// cmplwi cr6,r30,1260
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1260, ctx.xer);
	// bge cr6,0x830e672c
	if (!ctx.cr6.lt) goto loc_830E672C;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830df2c0
	ctx.lr = 0x830E667C;
	sub_830DF2C0(ctx, base);
	// lha r11,40(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 40));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,1264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1264, ctx.xer);
	// bgt cr6,0x830e6698
	if (ctx.cr6.gt) goto loc_830E6698;
	// lbz r11,42(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x830e66a4
	if (!ctx.cr6.eq) goto loc_830E66A4;
loc_830E6698:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830e63d0
	ctx.lr = 0x830E66A4;
	sub_830E63D0(ctx, base);
loc_830E66A4:
	// lhz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830e66c8
	if (!ctx.cr6.eq) goto loc_830E66C8;
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
	// bl 0x82e29500
	ctx.lr = 0x830E66C8;
	sub_82E29500(ctx, base);
loc_830E66C8:
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
	// bl 0x82e28fd0
	ctx.lr = 0x830E6704;
	sub_82E28FD0(ctx, base);
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
	// bl 0x830df370
	ctx.lr = 0x830E6724;
	sub_830DF370(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x830e6730
	goto loc_830E6730;
loc_830E672C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E6730:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E6738"))) PPC_WEAK_FUNC(sub_830E6738);
PPC_FUNC_IMPL(__imp__sub_830E6738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e54
	ctx.lr = 0x830E6740;
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
	// bne cr6,0x830e6880
	if (!ctx.cr6.eq) goto loc_830E6880;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x830e6880
	if (ctx.cr6.eq) goto loc_830E6880;
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
	// bl 0x830e0990
	ctx.lr = 0x830E678C;
	sub_830E0990(ctx, base);
	// cmpwi cr6,r3,254
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 254, ctx.xer);
	// bne cr6,0x830e679c
	if (!ctx.cr6.eq) goto loc_830E679C;
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// addi r24,r24,-2
	ctx.r24.s64 = ctx.r24.s64 + -2;
loc_830E679C:
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
	// bl 0x830df2c0
	ctx.lr = 0x830E67E0;
	sub_830DF2C0(ctx, base);
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// extsb. r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x830e6870
	if (!ctx.cr0.gt) goto loc_830E6870;
	// addi r11,r30,136
	ctx.r11.s64 = ctx.r30.s64 + 136;
loc_830E67F8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x830e684c
	if (!ctx.cr6.eq) goto loc_830E684C;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r26,r11,-12
	ctx.r26.s64 = ctx.r11.s64 + -12;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x830e683c
	if (!ctx.cr6.eq) goto loc_830E683C;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830E6818:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x830e6838
	if (ctx.cr6.eq) goto loc_830E6838;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x830e6818
	if (ctx.cr6.lt) goto loc_830E6818;
	// b 0x830e683c
	goto loc_830E683C;
loc_830E6838:
	// li r7,1
	ctx.r7.s64 = 1;
loc_830E683C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,2924
	ctx.r11.s64 = ctx.r11.s64 + 2924;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x830e67f8
	if (ctx.cr6.lt) goto loc_830E67F8;
loc_830E684C:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x830e6870
	if (!ctx.cr6.eq) goto loc_830E6870;
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
	// bl 0x830e6640
	ctx.lr = 0x830E686C;
	sub_830E6640(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_830E6870:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830df370
	ctx.lr = 0x830E6878;
	sub_830DF370(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x830e6884
	goto loc_830E6884;
loc_830E6880:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E6884:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E6890"))) PPC_WEAK_FUNC(sub_830E6890);
PPC_FUNC_IMPL(__imp__sub_830E6890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e50
	ctx.lr = 0x830E6898;
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
	// bl 0x82e28fd0
	ctx.lr = 0x830E68B8;
	sub_82E28FD0(ctx, base);
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
	// bl 0x82e28fd0
	ctx.lr = 0x830E68DC;
	sub_82E28FD0(ctx, base);
	// addi r24,r28,86
	ctx.r24.s64 = ctx.r28.s64 + 86;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830e6920
	if (ctx.cr6.eq) goto loc_830E6920;
	// subf. r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x830e6908
	if (!ctx.cr0.lt) goto loc_830E6908;
	// cmpwi cr6,r30,-16384
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -16384, ctx.xer);
	// blt cr6,0x830e6904
	if (ctx.cr6.lt) goto loc_830E6904;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e69f4
	goto loc_830E69F4;
loc_830E6904:
	// addis r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 65536;
loc_830E6908:
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830ede30
	ctx.lr = 0x830E6914;
	sub_830EDE30(ctx, base);
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r11,0(r24)
	PPC_STORE_U16(ctx.r24.u32 + 0, ctx.r11.u16);
loc_830E6920:
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
	// ble cr6,0x830e6994
	if (!ctx.cr6.gt) goto loc_830E6994;
loc_830E693C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830eddc8
	ctx.lr = 0x830E694C;
	sub_830EDDC8(ctx, base);
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
	// beq 0x830e6984
	if (ctx.cr0.eq) goto loc_830E6984;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_830E6984:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x830e693c
	if (ctx.cr6.lt) goto loc_830E693C;
loc_830E6994:
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x830e69b4
	if (ctx.cr6.eq) goto loc_830E69B4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830E69AC;
	sub_82E28FD0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830e69f4
	goto loc_830E69F4;
loc_830E69B4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x830e69d0
	if (!ctx.cr6.gt) goto loc_830E69D0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830eddc8
	ctx.lr = 0x830E69CC;
	sub_830EDDC8(ctx, base);
	// add r29,r27,r29
	ctx.r29.u64 = ctx.r27.u64 + ctx.r29.u64;
loc_830E69D0:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,258
	ctx.r5.s64 = 258;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830E69E0;
	sub_82E28FD0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830e61a8
	ctx.lr = 0x830E69F0;
	sub_830E61A8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_830E69F4:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82e28ea0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E6A00"))) PPC_WEAK_FUNC(sub_830E6A00);
PPC_FUNC_IMPL(__imp__sub_830E6A00) {
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
	// ble 0x830e6a40
	if (!ctx.cr0.gt) goto loc_830E6A40;
loc_830E6A14:
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
	// blt cr6,0x830e6a14
	if (ctx.cr6.lt) goto loc_830E6A14;
loc_830E6A40:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E6A50"))) PPC_WEAK_FUNC(sub_830E6A50);
PPC_FUNC_IMPL(__imp__sub_830E6A50) {
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
	// ble cr6,0x830e6a9c
	if (!ctx.cr6.gt) goto loc_830E6A9C;
loc_830E6A68:
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
	// beq cr6,0x830e6aa4
	if (ctx.cr6.eq) goto loc_830E6AA4;
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
	// blt cr6,0x830e6a68
	if (ctx.cr6.lt) goto loc_830E6A68;
loc_830E6A9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830E6AA4:
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E6AB0"))) PPC_WEAK_FUNC(sub_830E6AB0);
PPC_FUNC_IMPL(__imp__sub_830E6AB0) {
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
	// bl 0x830e0d28
	ctx.lr = 0x830E6AE0;
	sub_830E0D28(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x830e03c0
	ctx.lr = 0x830E6AE8;
	sub_830E03C0(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x830df1f8
	ctx.lr = 0x830E6AF0;
	sub_830DF1F8(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x830df1f8
	ctx.lr = 0x830E6AF8;
	sub_830DF1F8(ctx, base);
	// lis r4,28788
	ctx.r4.s64 = 1886650368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r4,r4,30062
	ctx.r4.u64 = ctx.r4.u64 | 30062;
	// bl 0x82217db8
	ctx.lr = 0x830E6B0C;
	sub_82217DB8(ctx, base);
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

__attribute__((alias("__imp__sub_830E6B20"))) PPC_WEAK_FUNC(sub_830E6B20);
PPC_FUNC_IMPL(__imp__sub_830E6B20) {
	PPC_FUNC_PROLOGUE();
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E6B30"))) PPC_WEAK_FUNC(sub_830E6B30);
PPC_FUNC_IMPL(__imp__sub_830E6B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x830E6B38;
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
	// bl 0x830df2c0
	ctx.lr = 0x830E6B54;
	sub_830DF2C0(ctx, base);
	// addi r26,r30,84
	ctx.r26.s64 = ctx.r30.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830df2c0
	ctx.lr = 0x830E6B60;
	sub_830DF2C0(ctx, base);
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x830e6b9c
	if (!ctx.cr0.gt) goto loc_830E6B9C;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r30,124
	ctx.r11.s64 = ctx.r30.s64 + 124;
loc_830E6B78:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x830e6c88
	if (ctx.cr6.eq) goto loc_830E6C88;
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
	// blt cr6,0x830e6b78
	if (ctx.cr6.lt) goto loc_830E6B78;
loc_830E6B9C:
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x830e6cf0
	if (ctx.cr6.eq) goto loc_830E6CF0;
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
	// bl 0x82e29500
	ctx.lr = 0x830E6BD0;
	sub_82E29500(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830E6BE0;
	sub_82E28FD0(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// addi r4,r11,-10864
	ctx.r4.s64 = ctx.r11.s64 + -10864;
	// bl 0x830df1c8
	ctx.lr = 0x830E6BF0;
	sub_830DF1C8(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830E6BF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830e6bf8
	if (!ctx.cr6.eq) goto loc_830E6BF8;
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
	// bl 0x830edd28
	ctx.lr = 0x830E6C24;
	sub_830EDD28(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,628
	ctx.r3.s64 = ctx.r31.s64 + 628;
	// bl 0x830e8700
	ctx.lr = 0x830E6C34;
	sub_830E8700(ctx, base);
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
	// bne 0x830e6c6c
	if (!ctx.cr0.eq) goto loc_830E6C6C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
loc_830E6C6C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830df370
	ctx.lr = 0x830E6C74;
	sub_830DF370(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830df370
	ctx.lr = 0x830E6C7C;
	sub_830DF370(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
loc_830E6C80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
loc_830E6C88:
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
loc_830E6CA4:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x830e6cbc
	if (!ctx.cr6.eq) goto loc_830E6CBC;
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830e6cbc
	if (!ctx.cr6.eq) goto loc_830E6CBC;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_830E6CBC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x830e6ca4
	if (ctx.cr6.lt) goto loc_830E6CA4;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x830e6cf0
	if (ctx.cr6.eq) goto loc_830E6CF0;
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
	// bl 0x830e8700
	ctx.lr = 0x830E6CEC;
	sub_830E8700(ctx, base);
	// b 0x830e6cf4
	goto loc_830E6CF4;
loc_830E6CF0:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_830E6CF4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830df370
	ctx.lr = 0x830E6CFC;
	sub_830DF370(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830df370
	ctx.lr = 0x830E6D04;
	sub_830DF370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x830e6c80
	goto loc_830E6C80;
}

__attribute__((alias("__imp__sub_830E6D10"))) PPC_WEAK_FUNC(sub_830E6D10);
PPC_FUNC_IMPL(__imp__sub_830E6D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x830E6D18;
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
	// bl 0x830df2c0
	ctx.lr = 0x830E6D34;
	sub_830DF2C0(ctx, base);
	// addi r25,r30,84
	ctx.r25.s64 = ctx.r30.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830df2c0
	ctx.lr = 0x830E6D40;
	sub_830DF2C0(ctx, base);
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r30,124
	ctx.r31.s64 = ctx.r30.s64 + 124;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x830e6edc
	if (!ctx.cr0.gt) goto loc_830E6EDC;
loc_830E6D54:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x830e6d7c
	if (ctx.cr6.eq) goto loc_830E6D7C;
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
	// blt cr6,0x830e6d54
	if (ctx.cr6.lt) goto loc_830E6D54;
	// b 0x830e6edc
	goto loc_830E6EDC;
loc_830E6D7C:
	// lbz r11,1653(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1653);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830e6dd8
	if (!ctx.cr6.eq) goto loc_830E6DD8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e63d0
	ctx.lr = 0x830E6D94;
	sub_830E63D0(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x830df1f8
	ctx.lr = 0x830E6D9C;
	sub_830DF1F8(ctx, base);
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x830e6dc8
	if (ctx.cr6.eq) goto loc_830E6DC8;
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
	// bl 0x82e29fb0
	ctx.lr = 0x830E6DC8;
	sub_82E29FB0(ctx, base);
loc_830E6DC8:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// b 0x830e6edc
	goto loc_830E6EDC;
loc_830E6DD8:
	// addi r28,r31,628
	ctx.r28.s64 = ctx.r31.s64 + 628;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_830E6DE4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_830E6DEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x830e6e10
	if (ctx.cr0.eq) goto loc_830E6E10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x830e6dec
	if (ctx.cr6.eq) goto loc_830E6DEC;
loc_830E6E10:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x830e6e2c
	if (ctx.cr0.eq) goto loc_830E6E2C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x830e6de4
	if (ctx.cr6.lt) goto loc_830E6DE4;
	// b 0x830e6e44
	goto loc_830E6E44;
loc_830E6E2C:
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
	// bl 0x82e29500
	ctx.lr = 0x830E6E44;
	sub_82E29500(ctx, base);
loc_830E6E44:
	// lbz r10,1654(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1654);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830e6ed0
	if (!ctx.cr6.eq) goto loc_830E6ED0;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_830E6E5C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830e6e7c
	if (!ctx.cr6.eq) goto loc_830E6E7C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x830e6e5c
	if (ctx.cr6.lt) goto loc_830E6E5C;
	// b 0x830e6ed0
	goto loc_830E6ED0;
loc_830E6E7C:
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
loc_830E6E90:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830e6e90
	if (!ctx.cr6.eq) goto loc_830E6E90;
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
	// bl 0x830edd28
	ctx.lr = 0x830E6EBC;
	sub_830EDD28(ctx, base);
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r4,r11,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x830ede30
	ctx.lr = 0x830E6ECC;
	sub_830EDE30(ctx, base);
	// stb r29,1654(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1654, ctx.r29.u8);
loc_830E6ED0:
	// lbz r11,1653(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1653);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,1653(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1653, ctx.r11.u8);
loc_830E6EDC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830df370
	ctx.lr = 0x830E6EE4;
	sub_830DF370(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830df370
	ctx.lr = 0x830E6EEC;
	sub_830DF370(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E6EF8"))) PPC_WEAK_FUNC(sub_830E6EF8);
PPC_FUNC_IMPL(__imp__sub_830E6EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x830E6F00;
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
	// beq cr6,0x830e6f4c
	if (ctx.cr6.eq) goto loc_830E6F4C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x830e6f3c
	if (ctx.cr6.eq) goto loc_830E6F3C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830E6F3C;
	sub_82E28FD0(ctx, base);
loc_830E6F3C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e6a00
	ctx.lr = 0x830E6F48;
	sub_830E6A00(ctx, base);
	// b 0x830e7064
	goto loc_830E7064;
loc_830E6F4C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82e28fd0
	ctx.lr = 0x830E6F5C;
	sub_82E28FD0(ctx, base);
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
loc_830E6F74:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830e6f74
	if (!ctx.cr6.eq) goto loc_830E6F74;
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
	// bl 0x830edd28
	ctx.lr = 0x830E6FA0;
	sub_830EDD28(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830e6fb4
	if (ctx.cr6.eq) goto loc_830E6FB4;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ede30
	ctx.lr = 0x830E6FB4;
	sub_830EDE30(ctx, base);
loc_830E6FB4:
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
	// ble cr6,0x830e7020
	if (!ctx.cr6.gt) goto loc_830E7020;
loc_830E6FCC:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830eddc8
	ctx.lr = 0x830E6FDC;
	sub_830EDDC8(ctx, base);
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
	// beq 0x830e7010
	if (ctx.cr0.eq) goto loc_830E7010;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_830E7010:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x830e6fcc
	if (ctx.cr6.lt) goto loc_830E6FCC;
loc_830E7020:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x830e7030
	if (ctx.cr6.eq) goto loc_830E7030;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830e7064
	goto loc_830E7064;
loc_830E7030:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x830e7060
	if (ctx.cr6.eq) goto loc_830E7060;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x830e7050
	if (!ctx.cr6.gt) goto loc_830E7050;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830eddc8
	ctx.lr = 0x830E7050;
	sub_830EDDC8(ctx, base);
loc_830E7050:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830E7060;
	sub_82E28FD0(ctx, base);
loc_830E7060:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_830E7064:
	// addi r1,r1,1680
	ctx.r1.s64 = ctx.r1.s64 + 1680;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7070"))) PPC_WEAK_FUNC(sub_830E7070);
PPC_FUNC_IMPL(__imp__sub_830E7070) {
	PPC_FUNC_PROLOGUE();
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
	// bne cr6,0x830e70a0
	if (!ctx.cr6.eq) goto loc_830E70A0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x830e7174
	goto loc_830E7174;
loc_830E70A0:
	// lis r9,29283
	ctx.r9.s64 = 1919090688;
	// ori r9,r9,30323
	ctx.r9.u64 = ctx.r9.u64 | 30323;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830e70ec
	if (!ctx.cr6.eq) goto loc_830E70EC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830e7170
	if (ctx.cr6.eq) goto loc_830E7170;
	// cmplwi cr6,r7,12
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12, ctx.xer);
	// bne cr6,0x830e7170
	if (!ctx.cr6.eq) goto loc_830E7170;
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x830e7170
	if (!ctx.cr6.lt) goto loc_830E7170;
	// mulli r10,r10,2924
	ctx.r10.s64 = ctx.r10.s64 * 2924;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,740
	ctx.r4.s64 = ctx.r11.s64 + 740;
loc_830E70DC:
	// li r5,12
	ctx.r5.s64 = 12;
loc_830E70E0:
	// bl 0x82e28fd0
	ctx.lr = 0x830E70E4;
	sub_82E28FD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e7174
	goto loc_830E7174;
loc_830E70EC:
	// lis r9,29550
	ctx.r9.s64 = 1936588800;
	// ori r9,r9,25715
	ctx.r9.u64 = ctx.r9.u64 | 25715;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830e712c
	if (!ctx.cr6.eq) goto loc_830E712C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830e7170
	if (ctx.cr6.eq) goto loc_830E7170;
	// cmplwi cr6,r7,12
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12, ctx.xer);
	// bne cr6,0x830e7170
	if (!ctx.cr6.eq) goto loc_830E7170;
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x830e7170
	if (!ctx.cr6.lt) goto loc_830E7170;
	// mulli r10,r10,2924
	ctx.r10.s64 = ctx.r10.s64 * 2924;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,728
	ctx.r4.s64 = ctx.r11.s64 + 728;
	// b 0x830e70dc
	goto loc_830E70DC;
loc_830E712C:
	// lis r9,29551
	ctx.r9.s64 = 1936654336;
	// ori r9,r9,25451
	ctx.r9.u64 = ctx.r9.u64 | 25451;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830e7148
	if (!ctx.cr6.eq) goto loc_830E7148;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x830e70e0
	goto loc_830E70E0;
loc_830E7148:
	// lis r9,30324
	ctx.r9.s64 = 1987313664;
	// ori r9,r9,28528
	ctx.r9.u64 = ctx.r9.u64 | 28528;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830e7170
	if (!ctx.cr6.eq) goto loc_830E7170;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830e6200
	ctx.lr = 0x830E716C;
	sub_830E6200(ctx, base);
	// b 0x830e7174
	goto loc_830E7174;
loc_830E7170:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_830E7174:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7188"))) PPC_WEAK_FUNC(sub_830E7188);
PPC_FUNC_IMPL(__imp__sub_830E7188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830E7190;
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
	// bne cr6,0x830e71b8
	if (!ctx.cr6.eq) goto loc_830E71B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// b 0x830e7298
	goto loc_830E7298;
loc_830E71B8:
	// lis r11,26220
	ctx.r11.s64 = 1718353920;
	// ori r11,r11,29544
	ctx.r11.u64 = ctx.r11.u64 | 29544;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e723c
	if (!ctx.cr6.eq) goto loc_830E723C;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830df2c0
	ctx.lr = 0x830E71D4;
	sub_830DF2C0(ctx, base);
	// addi r28,r31,84
	ctx.r28.s64 = ctx.r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830df2c0
	ctx.lr = 0x830E71E0;
	sub_830DF2C0(ctx, base);
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x830e7224
	if (!ctx.cr0.gt) goto loc_830E7224;
	// addi r4,r31,124
	ctx.r4.s64 = ctx.r31.s64 + 124;
loc_830E71F4:
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x830e721c
	if (ctx.cr6.eq) goto loc_830E721C;
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
	// blt cr6,0x830e71f4
	if (ctx.cr6.lt) goto loc_830E71F4;
	// b 0x830e7224
	goto loc_830E7224;
loc_830E721C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e63d0
	ctx.lr = 0x830E7224;
	sub_830E63D0(ctx, base);
loc_830E7224:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830df370
	ctx.lr = 0x830E722C;
	sub_830DF370(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830df370
	ctx.lr = 0x830E7234;
	sub_830DF370(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e7298
	goto loc_830E7298;
loc_830E723C:
	// lis r11,28015
	ctx.r11.s64 = 1835991040;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,25701
	ctx.r11.u64 = ctx.r11.u64 | 25701;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e7258
	if (!ctx.cr6.eq) goto loc_830E7258;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// b 0x830e7298
	goto loc_830E7298;
loc_830E7258:
	// lis r11,29281
	ctx.r11.s64 = 1918959616;
	// ori r11,r11,29797
	ctx.r11.u64 = ctx.r11.u64 | 29797;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e7270
	if (!ctx.cr6.eq) goto loc_830E7270;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// b 0x830e7298
	goto loc_830E7298;
loc_830E7270:
	// lis r11,29552
	ctx.r11.s64 = 1936719872;
	// ori r11,r11,24941
	ctx.r11.u64 = ctx.r11.u64 | 24941;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e7288
	if (!ctx.cr6.eq) goto loc_830E7288;
	// stb r30,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r30.u8);
	// b 0x830e7298
	goto loc_830E7298;
loc_830E7288:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x830e0d28
	ctx.lr = 0x830E7298;
	sub_830E0D28(ctx, base);
loc_830E7298:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E72A0"))) PPC_WEAK_FUNC(sub_830E72A0);
PPC_FUNC_IMPL(__imp__sub_830E72A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x830E72A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830df1b8
	ctx.lr = 0x830E72B4;
	sub_830DF1B8(ctx, base);
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
	// blt cr6,0x830e7330
	if (ctx.cr6.lt) goto loc_830E7330;
	// addi r28,r31,44
	ctx.r28.s64 = ctx.r31.s64 + 44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830df2c0
	ctx.lr = 0x830E72D8;
	sub_830DF2C0(ctx, base);
	// addi r27,r31,84
	ctx.r27.s64 = ctx.r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830df2c0
	ctx.lr = 0x830E72E4;
	sub_830DF2C0(ctx, base);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x830e731c
	if (!ctx.cr0.gt) goto loc_830E731C;
	// addi r29,r31,124
	ctx.r29.s64 = ctx.r31.s64 + 124;
loc_830E72F8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e63d0
	ctx.lr = 0x830E7304;
	sub_830E63D0(ctx, base);
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
	// blt cr6,0x830e72f8
	if (ctx.cr6.lt) goto loc_830E72F8;
loc_830E731C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830df370
	ctx.lr = 0x830E7324;
	sub_830DF370(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830df370
	ctx.lr = 0x830E732C;
	sub_830DF370(ctx, base);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
loc_830E7330:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7338"))) PPC_WEAK_FUNC(sub_830E7338);
PPC_FUNC_IMPL(__imp__sub_830E7338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x830E7340;
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
loc_830E7364:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e7394
	if (ctx.cr6.eq) goto loc_830E7394;
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
	// bl 0x830e6ef8
	ctx.lr = 0x830E738C;
	sub_830E6EF8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt 0x830e73ac
	if (ctx.cr0.gt) goto loc_830E73AC;
loc_830E7394:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,128
	ctx.r28.s64 = ctx.r28.s64 + 128;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x830e7364
	if (ctx.cr6.lt) goto loc_830E7364;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x830e7494
	if (!ctx.cr6.gt) goto loc_830E7494;
loc_830E73AC:
	// lbz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1652);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e7404
	if (ctx.cr0.eq) goto loc_830E7404;
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
loc_830E73CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830e73cc
	if (!ctx.cr6.eq) goto loc_830E73CC;
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
	// bl 0x830edd28
	ctx.lr = 0x830E73F4;
	sub_830EDD28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_830E73F8:
	// stb r30,1655(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1655, ctx.r30.u8);
	// sth r24,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r24.u16);
	// b 0x830e7498
	goto loc_830E7498;
loc_830E7404:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830e6a50
	ctx.lr = 0x830E7414;
	sub_830E6A50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830e7494
	if (ctx.cr0.eq) goto loc_830E7494;
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
	// bne cr6,0x830e7494
	if (!ctx.cr6.eq) goto loc_830E7494;
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
loc_830E7464:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830e7464
	if (!ctx.cr6.eq) goto loc_830E7464;
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
	// bl 0x830edd28
	ctx.lr = 0x830E748C;
	sub_830EDD28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830e73f8
	goto loc_830E73F8;
loc_830E7494:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E7498:
	// addi r1,r1,1424
	ctx.r1.s64 = ctx.r1.s64 + 1424;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E74A0"))) PPC_WEAK_FUNC(sub_830E74A0);
PPC_FUNC_IMPL(__imp__sub_830E74A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e48
	ctx.lr = 0x830E74A8;
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
	// bl 0x830df2c0
	ctx.lr = 0x830E74D0;
	sub_830DF2C0(ctx, base);
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
	// ble 0x830e7578
	if (!ctx.cr0.gt) goto loc_830E7578;
	// addi r28,r30,132
	ctx.r28.s64 = ctx.r30.s64 + 132;
loc_830E7520:
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x830e7560
	if (!ctx.cr6.eq) goto loc_830E7560;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x830e7560
	if (!ctx.cr6.eq) goto loc_830E7560;
	// lbz r11,1644(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1644);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830e7578
	if (!ctx.cr0.eq) goto loc_830E7578;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e7338
	ctx.lr = 0x830E7558;
	sub_830E7338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830e7578
	if (!ctx.cr0.eq) goto loc_830E7578;
loc_830E7560:
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
	// blt cr6,0x830e7520
	if (ctx.cr6.lt) goto loc_830E7520;
loc_830E7578:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e75d8
	if (!ctx.cr6.eq) goto loc_830E75D8;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x830e75d8
	if (!ctx.cr6.gt) goto loc_830E75D8;
	// addi r28,r30,124
	ctx.r28.s64 = ctx.r30.s64 + 124;
loc_830E7598:
	// lbz r11,1652(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1652);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830e75c0
	if (!ctx.cr0.eq) goto loc_830E75C0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e7338
	ctx.lr = 0x830E75B8;
	sub_830E7338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830e75d8
	if (!ctx.cr0.eq) goto loc_830E75D8;
loc_830E75C0:
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
	// blt cr6,0x830e7598
	if (ctx.cr6.lt) goto loc_830E7598;
loc_830E75D8:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x830e7714
	if (!ctx.cr6.lt) goto loc_830E7714;
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
	// bne 0x830e7610
	if (!ctx.cr0.eq) goto loc_830E7610;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// sth r25,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r25.u16);
	// stb r10,1652(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1652, ctx.r10.u8);
loc_830E7610:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830E7620;
	sub_82E28FD0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830e7640
	if (!ctx.cr6.eq) goto loc_830E7640;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e6890
	ctx.lr = 0x830E763C;
	sub_830E6890(ctx, base);
	// b 0x830e764c
	goto loc_830E764C;
loc_830E7640:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830e6a00
	ctx.lr = 0x830E764C;
	sub_830E6A00(ctx, base);
loc_830E764C:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x830e76fc
	if (!ctx.cr6.gt) goto loc_830E76FC;
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
	// bl 0x830e6a50
	ctx.lr = 0x830E76A4;
	sub_830E6A50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830e76b4
	if (ctx.cr0.eq) goto loc_830E76B4;
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// b 0x830e76c4
	goto loc_830E76C4;
loc_830E76B4:
	// lbz r11,1656(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1656);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e76d0
	if (ctx.cr0.eq) goto loc_830E76D0;
	// lbz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1652);
loc_830E76C4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830e76d0
	if (!ctx.cr6.eq) goto loc_830E76D0;
	// stb r20,1656(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1656, ctx.r20.u8);
loc_830E76D0:
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
	// b 0x830e7718
	goto loc_830E7718;
loc_830E76FC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e7338
	ctx.lr = 0x830E7710;
	sub_830E7338(ctx, base);
	// b 0x830e7718
	goto loc_830E7718;
loc_830E7714:
	// li r28,-2
	ctx.r28.s64 = -2;
loc_830E7718:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830df370
	ctx.lr = 0x830E7720;
	sub_830DF370(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82e28e98
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7730"))) PPC_WEAK_FUNC(sub_830E7730);
PPC_FUNC_IMPL(__imp__sub_830E7730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x830E7738;
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
	// bl 0x830e0820
	ctx.lr = 0x830E7764;
	sub_830E0820(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x830e78b4
	if (!ctx.cr0.gt) goto loc_830E78B4;
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
	// bl 0x830e74a0
	ctx.lr = 0x830E7788;
	sub_830E74A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x830e77b4
	if (!ctx.cr6.eq) goto loc_830E77B4;
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
	// bl 0x830e74a0
	ctx.lr = 0x830E77B0;
	sub_830E74A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_830E77B4:
	// cmpwi cr6,r31,-2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -2, ctx.xer);
	// bne cr6,0x830e77e8
	if (!ctx.cr6.eq) goto loc_830E77E8;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e78b4
	if (ctx.cr0.eq) goto loc_830E78B4;
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
	ctx.lr = 0x830E77E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E77E8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x830e78b4
	if (!ctx.cr6.gt) goto loc_830E78B4;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,130
	ctx.r10.s64 = ctx.r1.s64 + 130;
	// addi r30,r1,130
	ctx.r30.s64 = ctx.r1.s64 + 130;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_830E7800:
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
	// beq cr6,0x830e78a4
	if (ctx.cr6.eq) goto loc_830E78A4;
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
	// bl 0x830e0990
	ctx.lr = 0x830E7848;
	sub_830E0990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830e78a4
	if (!ctx.cr0.eq) goto loc_830E78A4;
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
	// bl 0x830e0990
	ctx.lr = 0x830E7878;
	sub_830E0990(ctx, base);
	// cmpwi cr6,r3,254
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 254, ctx.xer);
	// bne cr6,0x830e7888
	if (!ctx.cr6.eq) goto loc_830E7888;
	// addi r28,r28,-2
	ctx.r28.s64 = ctx.r28.s64 + -2;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
loc_830E7888:
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
	// bl 0x830e0d28
	ctx.lr = 0x830E78A4;
	sub_830E0D28(ctx, base);
loc_830E78A4:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bne 0x830e7800
	if (!ctx.cr0.eq) goto loc_830E7800;
loc_830E78B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E78C0"))) PPC_WEAK_FUNC(sub_830E78C0);
PPC_FUNC_IMPL(__imp__sub_830E78C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830E78C8;
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
	// bl 0x830e02b0
	ctx.lr = 0x830E78E4;
	sub_830E02B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bne 0x830e78f8
	if (!ctx.cr0.eq) goto loc_830E78F8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830e79b8
	goto loc_830E79B8;
loc_830E78F8:
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
	// bl 0x830e0450
	ctx.lr = 0x830E792C;
	sub_830E0450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830e7968
	if (ctx.cr0.eq) goto loc_830E7968;
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
	// bl 0x830e0450
	ctx.lr = 0x830E794C;
	sub_830E0450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830e7968
	if (ctx.cr0.eq) goto loc_830E7968;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830e03c0
	ctx.lr = 0x830E795C;
	sub_830E03C0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// b 0x830e79b8
	goto loc_830E79B8;
loc_830E7968:
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
	// bl 0x830e0990
	ctx.lr = 0x830E7984;
	sub_830E0990(ctx, base);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r7,r11,30512
	ctx.r7.s64 = ctx.r11.s64 + 30512;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x830e0cd8
	ctx.lr = 0x830E79B4;
	sub_830E0CD8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E79B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E79C0"))) PPC_WEAK_FUNC(sub_830E79C0);
PPC_FUNC_IMPL(__imp__sub_830E79C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x830E79C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x830e88c8
	ctx.lr = 0x830E79D8;
	sub_830E88C8(ctx, base);
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
	// bl 0x82217d58
	ctx.lr = 0x830E79F8;
	sub_82217D58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830e7a08
	if (!ctx.cr0.eq) goto loc_830E7A08;
loc_830E7A00:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e7ab0
	goto loc_830E7AB0;
loc_830E7A08:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e29500
	ctx.lr = 0x830E7A18;
	sub_82E29500(ctx, base);
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
	// bl 0x830e78c0
	ctx.lr = 0x830E7A40;
	sub_830E78C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830e7a60
	if (!ctx.cr0.lt) goto loc_830E7A60;
	// lis r4,28788
	ctx.r4.s64 = 1886650368;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,30062
	ctx.r4.u64 = ctx.r4.u64 | 30062;
	// bl 0x82217db8
	ctx.lr = 0x830E7A5C;
	sub_82217DB8(ctx, base);
	// b 0x830e7a00
	goto loc_830E7A00;
loc_830E7A60:
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// addi r30,r11,-10912
	ctx.r30.s64 = ctx.r11.s64 + -10912;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830df1c8
	ctx.lr = 0x830E7A74;
	sub_830DF1C8(ctx, base);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x830df1c8
	ctx.lr = 0x830E7A80;
	sub_830DF1C8(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// lis r4,29540
	ctx.r4.s64 = 1935933440;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r11,26424
	ctx.r6.s64 = ctx.r11.s64 + 26424;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,25442
	ctx.r4.u64 = ctx.r4.u64 | 25442;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830e0d28
	ctx.lr = 0x830E7AA0;
	sub_830E0D28(ctx, base);
	// bl 0x830df1b8
	ctx.lr = 0x830E7AA4;
	sub_830DF1B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_830E7AB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7AB8"))) PPC_WEAK_FUNC(sub_830E7AB8);
PPC_FUNC_IMPL(__imp__sub_830E7AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x830E7AC0;
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
	// bl 0x82217d58
	ctx.lr = 0x830E7AE8;
	sub_82217D58(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x830e7af8
	if (!ctx.cr0.eq) goto loc_830E7AF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e7b98
	goto loc_830E7B98;
loc_830E7AF8:
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e29500
	ctx.lr = 0x830E7B08;
	sub_82E29500(ctx, base);
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
	// bge cr6,0x830e7b4c
	if (!ctx.cr6.lt) goto loc_830E7B4C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830E7B2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830e7b2c
	if (!ctx.cr6.eq) goto loc_830E7B2C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_830E7B4C:
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// ble cr6,0x830e7b58
	if (!ctx.cr6.gt) goto loc_830E7B58;
	// li r31,256
	ctx.r31.s64 = 256;
loc_830E7B58:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x830e7b70
	if (ctx.cr6.eq) goto loc_830E7B70;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x82e28fd0
	ctx.lr = 0x830E7B70;
	sub_82E28FD0(ctx, base);
loc_830E7B70:
	// stw r31,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r31.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x830e7b88
	goto loc_830E7B88;
loc_830E7B80:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_830E7B88:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830e7b80
	if (!ctx.cr0.eq) goto loc_830E7B80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
loc_830E7B98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7BA0"))) PPC_WEAK_FUNC(sub_830E7BA0);
PPC_FUNC_IMPL(__imp__sub_830E7BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830E7BA8;
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
	// b 0x830e7bd4
	goto loc_830E7BD4;
loc_830E7BC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x830e7be0
	if (ctx.cr6.eq) goto loc_830E7BE0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_830E7BD4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830e7bc0
	if (!ctx.cr6.eq) goto loc_830E7BC0;
	// b 0x830e7c4c
	goto loc_830E7C4C;
loc_830E7BE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830e7bf4
	if (ctx.cr0.eq) goto loc_830E7BF4;
	// bl 0x82c1a048
	ctx.lr = 0x830E7BF4;
	sub_82C1A048(ctx, base);
loc_830E7BF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x830e7c2c
	if (!ctx.cr6.eq) goto loc_830E7C2C;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x82f667f8
	ctx.lr = 0x830E7C0C;
	sub_82F667F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830e7c2c
	if (ctx.cr0.eq) goto loc_830E7C2C;
	// lis r4,28784
	ctx.r4.s64 = 1886388224;
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// ori r4,r4,28263
	ctx.r4.u64 = ctx.r4.u64 | 28263;
	// bl 0x82217db8
	ctx.lr = 0x830E7C2C;
	sub_82217DB8(ctx, base);
loc_830E7C2C:
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
	// bl 0x82217db8
	ctx.lr = 0x830E7C4C;
	sub_82217DB8(ctx, base);
loc_830E7C4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7C58"))) PPC_WEAK_FUNC(sub_830E7C58);
PPC_FUNC_IMPL(__imp__sub_830E7C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830E7C60;
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
	// bne cr6,0x830e7ce4
	if (!ctx.cr6.eq) goto loc_830E7CE4;
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
	// bl 0x82c40fb8
	ctx.lr = 0x830E7C98;
	sub_82C40FB8(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// bne cr6,0x830e7d88
	if (!ctx.cr6.eq) goto loc_830E7D88;
	// lis r4,28784
	ctx.r4.s64 = 1886388224;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// ori r4,r4,28263
	ctx.r4.u64 = ctx.r4.u64 | 28263;
	// bl 0x82217d58
	ctx.lr = 0x830E7CB4;
	sub_82217D58(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r6,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
	// beq 0x830e7dc8
	if (ctx.cr0.eq) goto loc_830E7DC8;
	// addi r7,r31,96
	ctx.r7.s64 = ctx.r31.s64 + 96;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// ld r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// bl 0x82c40fb8
	ctx.lr = 0x830E7CD4;
	sub_82C40FB8(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x830e7d88
	if (!ctx.cr6.eq) goto loc_830E7D88;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_830E7CE4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830e7dc8
	if (!ctx.cr6.eq) goto loc_830E7DC8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82b075a0
	ctx.lr = 0x830E7D00;
	sub_82B075A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830e7d94
	if (!ctx.cr0.eq) goto loc_830E7D94;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x830e7da0
	if (!ctx.cr6.eq) goto loc_830E7DA0;
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
	// bl 0x82e28fd0
	ctx.lr = 0x830E7D3C;
	sub_82E28FD0(ctx, base);
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
	// bl 0x82c19fc8
	ctx.lr = 0x830E7D74;
	sub_82C19FC8(ctx, base);
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
	// b 0x830e7da4
	goto loc_830E7DA4;
loc_830E7D88:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x830e7dc8
	goto loc_830E7DC8;
loc_830E7D94:
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// beq cr6,0x830e7da8
	if (ctx.cr6.eq) goto loc_830E7DA8;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_830E7DA0:
	// li r11,4
	ctx.r11.s64 = 4;
loc_830E7DA4:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_830E7DA8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x830e7dc8
	if (ctx.cr6.eq) goto loc_830E7DC8;
	// lis r4,28784
	ctx.r4.s64 = 1886388224;
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// ori r4,r4,28263
	ctx.r4.u64 = ctx.r4.u64 | 28263;
	// bl 0x82217db8
	ctx.lr = 0x830E7DC8;
	sub_82217DB8(ctx, base);
loc_830E7DC8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7DD0"))) PPC_WEAK_FUNC(sub_830E7DD0);
PPC_FUNC_IMPL(__imp__sub_830E7DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830E7DD8;
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
	// bne cr6,0x830e7f7c
	if (!ctx.cr6.eq) goto loc_830E7F7C;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830e7e28
	if (!ctx.cr0.eq) goto loc_830E7E28;
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
	// bl 0x830dcee0
	ctx.lr = 0x830E7E18;
	sub_830DCEE0(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r3,29541
	ctx.r3.s64 = 1935998976;
	// ori r3,r3,29302
	ctx.r3.u64 = ctx.r3.u64 | 29302;
	// b 0x830e7f14
	goto loc_830E7F14;
loc_830E7E28:
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lis r9,17729
	ctx.r9.s64 = 1161887744;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830e7e70
	if (!ctx.cr6.eq) goto loc_830E7E70;
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
	// bl 0x830dcee0
	ctx.lr = 0x830E7E50;
	sub_830DCEE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830e7f74
	if (ctx.cr0.lt) goto loc_830E7F74;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x830e1bd8
	ctx.lr = 0x830E7E60;
	sub_830E1BD8(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// b 0x830e7f28
	goto loc_830E7F28;
loc_830E7E70:
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
	// bl 0x830dcdd8
	ctx.lr = 0x830E7EC0;
	sub_830DCDD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830e7f74
	if (!ctx.cr0.eq) goto loc_830E7F74;
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
	// bl 0x830dcee0
	ctx.lr = 0x830E7F00;
	sub_830DCEE0(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830e7f28
	if (!ctx.cr0.eq) goto loc_830E7F28;
	// lis r3,30828
	ctx.r3.s64 = 2020343808;
	// ori r3,r3,29552
	ctx.r3.u64 = ctx.r3.u64 | 29552;
loc_830E7F14:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830dcee0
	ctx.lr = 0x830E7F24;
	sub_830DCEE0(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
loc_830E7F28:
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
	// bl 0x82c19fc8
	ctx.lr = 0x830E7F60;
	sub_82C19FC8(ctx, base);
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
	// b 0x830e7f78
	goto loc_830E7F78;
loc_830E7F74:
	// li r11,4
	ctx.r11.s64 = 4;
loc_830E7F78:
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_830E7F7C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7F88"))) PPC_WEAK_FUNC(sub_830E7F88);
PPC_FUNC_IMPL(__imp__sub_830E7F88) {
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
	// b 0x830e8080
	goto loc_830E8080;
loc_830E7FA8:
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
	// bl 0x830dcee0
	ctx.lr = 0x830E7FC0;
	sub_830DCEE0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x830e7fd0
	if (ctx.cr6.eq) goto loc_830E7FD0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_830E7FD0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x830e800c
	if (!ctx.cr6.lt) goto loc_830E800C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830e7ff4
	if (!ctx.cr6.eq) goto loc_830E7FF4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e7c58
	ctx.lr = 0x830E7FF4;
	sub_830E7C58(ctx, base);
loc_830E7FF4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830e800c
	if (!ctx.cr6.eq) goto loc_830E800C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e7dd0
	ctx.lr = 0x830E800C;
	sub_830E7DD0(ctx, base);
loc_830E800C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830e8068
	if (!ctx.cr6.eq) goto loc_830E8068;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e8068
	if (ctx.cr0.eq) goto loc_830E8068;
	// lhz r11,22(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 22);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x830e8040
	if (!ctx.cr0.eq) goto loc_830E8040;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830e804c
	goto loc_830E804C;
loc_830E8040:
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x830e8050
	if (!ctx.cr6.eq) goto loc_830E8050;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E804C:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_830E8050:
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
loc_830E8068:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x830e80a4
	if (ctx.cr6.eq) goto loc_830E80A4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x830e80a4
	if (ctx.cr6.eq) goto loc_830E80A4;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_830E8080:
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x830e7fa8
	if (!ctx.cr0.eq) goto loc_830E7FA8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E808C:
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
loc_830E80A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x830e808c
	goto loc_830E808C;
}

__attribute__((alias("__imp__sub_830E80B0"))) PPC_WEAK_FUNC(sub_830E80B0);
PPC_FUNC_IMPL(__imp__sub_830E80B0) {
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
	// bl 0x830e88c8
	ctx.lr = 0x830E80C8;
	sub_830E88C8(ctx, base);
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
	// bl 0x82217d58
	ctx.lr = 0x830E80E0;
	sub_82217D58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830e80f0
	if (!ctx.cr0.eq) goto loc_830E80F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e8110
	goto loc_830E8110;
loc_830E80F0:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e29500
	ctx.lr = 0x830E8100;
	sub_82E29500(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_830E8110:
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

__attribute__((alias("__imp__sub_830E8128"))) PPC_WEAK_FUNC(sub_830E8128);
PPC_FUNC_IMPL(__imp__sub_830E8128) {
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
	// b 0x830e8148
	goto loc_830E8148;
loc_830E8140:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e7ba0
	ctx.lr = 0x830E8148;
	sub_830E7BA0(ctx, base);
loc_830E8148:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x830e8140
	if (!ctx.cr0.eq) goto loc_830E8140;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e8174
	if (ctx.cr6.eq) goto loc_830E8174;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82c19fa8
	ctx.lr = 0x830E8174;
	sub_82C19FA8(ctx, base);
loc_830E8174:
	// lis r4,28784
	ctx.r4.s64 = 1886388224;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,28263
	ctx.r4.u64 = ctx.r4.u64 | 28263;
	// bl 0x82217db8
	ctx.lr = 0x830E8188;
	sub_82217DB8(ctx, base);
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

__attribute__((alias("__imp__sub_830E81A0"))) PPC_WEAK_FUNC(sub_830E81A0);
PPC_FUNC_IMPL(__imp__sub_830E81A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x830E81A8;
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
	// bne cr6,0x830e81d0
	if (!ctx.cr6.eq) goto loc_830E81D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// b 0x830e8280
	goto loc_830E8280;
loc_830E81D0:
	// lis r11,29541
	ctx.r11.s64 = 1935998976;
	// ori r11,r11,29555
	ctx.r11.u64 = ctx.r11.u64 | 29555;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e8260
	if (!ctx.cr6.eq) goto loc_830E8260;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e8220
	if (ctx.cr6.eq) goto loc_830E8220;
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
	// bl 0x82c19fa8
	ctx.lr = 0x830E8208;
	sub_82C19FA8(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e29500
	ctx.lr = 0x830E8218;
	sub_82E29500(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_830E8220:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830e8258
	if (ctx.cr6.eq) goto loc_830E8258;
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
	// bl 0x82c19fa8
	ctx.lr = 0x830E8240;
	sub_82C19FA8(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830E8250;
	sub_82E28FD0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_830E8258:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e8280
	goto loc_830E8280;
loc_830E8260:
	// lis r11,30057
	ctx.r11.s64 = 1969815552;
	// ori r11,r11,25720
	ctx.r11.u64 = ctx.r11.u64 | 25720;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e827c
	if (!ctx.cr6.eq) goto loc_830E827C;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// b 0x830e8280
	goto loc_830E8280;
loc_830E827C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_830E8280:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8288"))) PPC_WEAK_FUNC(sub_830E8288);
PPC_FUNC_IMPL(__imp__sub_830E8288) {
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
	// bl 0x830e7ab8
	ctx.lr = 0x830E82A8;
	sub_830E7AB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830e82b8
	if (!ctx.cr0.eq) goto loc_830E82B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e82cc
	goto loc_830E82CC;
loc_830E82B8:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830E82C8;
	sub_82E28FD0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_830E82CC:
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

__attribute__((alias("__imp__sub_830E82E8"))) PPC_WEAK_FUNC(sub_830E82E8);
PPC_FUNC_IMPL(__imp__sub_830E82E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x830E82F0;
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
	// bl 0x830dcee0
	ctx.lr = 0x830E831C;
	sub_830DCEE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830e832c
	if (!ctx.cr0.eq) goto loc_830E832C;
loc_830E8324:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e8350
	goto loc_830E8350;
loc_830E832C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e7ab8
	ctx.lr = 0x830E8340;
	sub_830E7AB8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e8324
	if (ctx.cr0.eq) goto loc_830E8324;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r28,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r28.u32);
loc_830E8350:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8358"))) PPC_WEAK_FUNC(sub_830E8358);
PPC_FUNC_IMPL(__imp__sub_830E8358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x830E8360;
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
	// bl 0x830e7f88
	ctx.lr = 0x830E8378;
	sub_830E7F88(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830e8388
	if (!ctx.cr0.eq) goto loc_830E8388;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e8430
	goto loc_830E8430;
loc_830E8388:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830e83e8
	if (ctx.cr6.eq) goto loc_830E83E8;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e29500
	ctx.lr = 0x830E83A0;
	sub_82E29500(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x830e83b0
	if (ctx.cr0.gt) goto loc_830E83B0;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_830E83B0:
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
	// bl 0x82e28fd0
	ctx.lr = 0x830E83E8;
	sub_82E28FD0(ctx, base);
loc_830E83E8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830e841c
	if (ctx.cr6.eq) goto loc_830E841C;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x830e8404
	if (!ctx.cr6.gt) goto loc_830E8404;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_830E8404:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x830e841c
	if (ctx.cr0.eq) goto loc_830E841C;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x830E841C;
	sub_82E28FD0(ctx, base);
loc_830E841C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e7ba0
	ctx.lr = 0x830E842C;
	sub_830E7BA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830E8430:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8438"))) PPC_WEAK_FUNC(sub_830E8438);
PPC_FUNC_IMPL(__imp__sub_830E8438) {
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
	// bge 0x830e8460
	if (!ctx.cr0.lt) goto loc_830E8460;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e8488
	goto loc_830E8488;
loc_830E8460:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e2d1c0
	ctx.lr = 0x830E846C;
	sub_82E2D1C0(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x830e847c
	if (ctx.cr6.gt) goto loc_830E847C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x830e8480
	if (!ctx.cr6.lt) goto loc_830E8480;
loc_830E847C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E8480:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r3,r30
	PPC_STORE_U8(ctx.r3.u32 + ctx.r30.u32, ctx.r11.u8);
loc_830E8488:
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

__attribute__((alias("__imp__sub_830E84A0"))) PPC_WEAK_FUNC(sub_830E84A0);
PPC_FUNC_IMPL(__imp__sub_830E84A0) {
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
	// bge 0x830e84dc
	if (!ctx.cr0.lt) goto loc_830E84DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e8514
	goto loc_830E8514;
loc_830E84DC:
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
	// bl 0x82e2d1c0
	ctx.lr = 0x830E84F8;
	sub_82E2D1C0(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x830e8508
	if (ctx.cr6.gt) goto loc_830E8508;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x830e850c
	if (!ctx.cr6.lt) goto loc_830E850C;
loc_830E8508:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E850C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r3,r30
	PPC_STORE_U8(ctx.r3.u32 + ctx.r30.u32, ctx.r11.u8);
loc_830E8514:
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

__attribute__((alias("__imp__sub_830E8530"))) PPC_WEAK_FUNC(sub_830E8530);
PPC_FUNC_IMPL(__imp__sub_830E8530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x830E8538;
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
	// beq cr6,0x830e8604
	if (ctx.cr6.eq) goto loc_830E8604;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e8604
	if (ctx.cr6.eq) goto loc_830E8604;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830e8604
	if (ctx.cr6.eq) goto loc_830E8604;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e8604
	if (ctx.cr0.eq) goto loc_830E8604;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82e2f370
	ctx.lr = 0x830E8578;
	sub_82E2F370(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e8604
	if (ctx.cr0.eq) goto loc_830E8604;
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r27,r10,-12700
	ctx.r27.s64 = ctx.r10.s64 + -12700;
loc_830E8590:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82e2f370
	ctx.lr = 0x830E8598;
	sub_82E2F370(ctx, base);
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x830e85f4
	if (!ctx.cr6.eq) goto loc_830E85F4;
	// addi r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 1;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e85ec
	if (ctx.cr6.eq) goto loc_830E85EC;
	// subf r29,r28,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r28.s64;
loc_830E85B4:
	// lbzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e85f4
	if (ctx.cr0.eq) goto loc_830E85F4;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82e2f370
	ctx.lr = 0x830E85C8;
	sub_82E2F370(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82e2f370
	ctx.lr = 0x830E85D4;
	sub_82E2F370(ctx, base);
	// cmpw cr6,r24,r3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x830e85f4
	if (!ctx.cr6.eq) goto loc_830E85F4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830e85b4
	if (!ctx.cr6.eq) goto loc_830E85B4;
loc_830E85EC:
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_830E85F4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830e8590
	if (!ctx.cr0.eq) goto loc_830E8590;
loc_830E8604:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8610"))) PPC_WEAK_FUNC(sub_830E8610);
PPC_FUNC_IMPL(__imp__sub_830E8610) {
	PPC_FUNC_PROLOGUE();
loc_830E8610:
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x830e8634
	if (ctx.cr6.lt) goto loc_830E8634;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// bgt cr6,0x830e8634
	if (ctx.cr6.gt) goto loc_830E8634;
	// xori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 ^ 32;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
loc_830E8634:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x830e8658
	if (ctx.cr6.lt) goto loc_830E8658;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// bgt cr6,0x830e8658
	if (ctx.cr6.gt) goto loc_830E8658;
	// xori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 ^ 32;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
loc_830E8658:
	// extsb. r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq 0x830e8670
	if (ctx.cr0.eq) goto loc_830E8670;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x830e8610
	if (ctx.cr6.eq) goto loc_830E8610;
loc_830E8670:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

