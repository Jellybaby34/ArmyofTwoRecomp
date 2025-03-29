#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8311A2C8"))) PPC_WEAK_FUNC(sub_8311A2C8);
PPC_FUNC_IMPL(__imp__sub_8311A2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a308
	if (!ctx.cr6.eq) goto loc_8311A308;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A2FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a2fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A2FC;
loc_8311A308:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 592);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a328
	if (ctx.cr6.eq) goto loc_8311A328;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,148
	ctx.r11.s64 = 148;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A328:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14872);
	// stw r11,592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 592, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A338"))) PPC_WEAK_FUNC(sub_8311A338);
PPC_FUNC_IMPL(__imp__sub_8311A338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a378
	if (!ctx.cr6.eq) goto loc_8311A378;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A36C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a36c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A36C;
loc_8311A378:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 596);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a398
	if (ctx.cr6.eq) goto loc_8311A398;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,149
	ctx.r11.s64 = 149;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A398:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14868);
	// stw r11,596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 596, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A3A8"))) PPC_WEAK_FUNC(sub_8311A3A8);
PPC_FUNC_IMPL(__imp__sub_8311A3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a3e8
	if (!ctx.cr6.eq) goto loc_8311A3E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A3DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a3dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A3DC;
loc_8311A3E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,600(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 600);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a408
	if (ctx.cr6.eq) goto loc_8311A408;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,150
	ctx.r11.s64 = 150;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A408:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14864(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14864);
	// stw r11,600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 600, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A418"))) PPC_WEAK_FUNC(sub_8311A418);
PPC_FUNC_IMPL(__imp__sub_8311A418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a458
	if (!ctx.cr6.eq) goto loc_8311A458;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A44C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a44c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A44C;
loc_8311A458:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,604(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 604);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a478
	if (ctx.cr6.eq) goto loc_8311A478;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,151
	ctx.r11.s64 = 151;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A478:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14860(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14860);
	// stw r11,604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 604, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A488"))) PPC_WEAK_FUNC(sub_8311A488);
PPC_FUNC_IMPL(__imp__sub_8311A488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a4c8
	if (!ctx.cr6.eq) goto loc_8311A4C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A4BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a4bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A4BC;
loc_8311A4C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 608);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a4e8
	if (ctx.cr6.eq) goto loc_8311A4E8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,152
	ctx.r11.s64 = 152;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A4E8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14856);
	// stw r11,608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 608, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A4F8"))) PPC_WEAK_FUNC(sub_8311A4F8);
PPC_FUNC_IMPL(__imp__sub_8311A4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a538
	if (!ctx.cr6.eq) goto loc_8311A538;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A52C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a52c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A52C;
loc_8311A538:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,612(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 612);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a558
	if (ctx.cr6.eq) goto loc_8311A558;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,153
	ctx.r11.s64 = 153;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A558:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14852);
	// stw r11,612(r10)
	PPC_STORE_U32(ctx.r10.u32 + 612, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A568"))) PPC_WEAK_FUNC(sub_8311A568);
PPC_FUNC_IMPL(__imp__sub_8311A568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a5a8
	if (!ctx.cr6.eq) goto loc_8311A5A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A59C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a59c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A59C;
loc_8311A5A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 616);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a5c8
	if (ctx.cr6.eq) goto loc_8311A5C8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,154
	ctx.r11.s64 = 154;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A5C8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14848(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14848);
	// stw r11,616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 616, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A5D8"))) PPC_WEAK_FUNC(sub_8311A5D8);
PPC_FUNC_IMPL(__imp__sub_8311A5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a618
	if (!ctx.cr6.eq) goto loc_8311A618;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A60C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a60c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A60C;
loc_8311A618:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,620(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 620);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a638
	if (ctx.cr6.eq) goto loc_8311A638;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,155
	ctx.r11.s64 = 155;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A638:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14844);
	// stw r11,620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 620, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A648"))) PPC_WEAK_FUNC(sub_8311A648);
PPC_FUNC_IMPL(__imp__sub_8311A648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a688
	if (!ctx.cr6.eq) goto loc_8311A688;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A67C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a67c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A67C;
loc_8311A688:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 624);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a6a8
	if (ctx.cr6.eq) goto loc_8311A6A8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,156
	ctx.r11.s64 = 156;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A6A8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14840);
	// stw r11,624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 624, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A6B8"))) PPC_WEAK_FUNC(sub_8311A6B8);
PPC_FUNC_IMPL(__imp__sub_8311A6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a6f8
	if (!ctx.cr6.eq) goto loc_8311A6F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A6EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a6ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A6EC;
loc_8311A6F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,628(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 628);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a718
	if (ctx.cr6.eq) goto loc_8311A718;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,157
	ctx.r11.s64 = 157;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A718:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14836);
	// stw r11,628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A728"))) PPC_WEAK_FUNC(sub_8311A728);
PPC_FUNC_IMPL(__imp__sub_8311A728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a768
	if (!ctx.cr6.eq) goto loc_8311A768;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A75C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a75c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A75C;
loc_8311A768:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,632(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 632);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a788
	if (ctx.cr6.eq) goto loc_8311A788;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,158
	ctx.r11.s64 = 158;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A788:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14832);
	// stw r11,632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 632, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A798"))) PPC_WEAK_FUNC(sub_8311A798);
PPC_FUNC_IMPL(__imp__sub_8311A798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a7d8
	if (!ctx.cr6.eq) goto loc_8311A7D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A7CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a7cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A7CC;
loc_8311A7D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,636(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 636);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a7f8
	if (ctx.cr6.eq) goto loc_8311A7F8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,159
	ctx.r11.s64 = 159;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A7F8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14828);
	// stw r11,636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 636, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A808"))) PPC_WEAK_FUNC(sub_8311A808);
PPC_FUNC_IMPL(__imp__sub_8311A808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a848
	if (!ctx.cr6.eq) goto loc_8311A848;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A83C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a83c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A83C;
loc_8311A848:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,640(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 640);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a868
	if (ctx.cr6.eq) goto loc_8311A868;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,160
	ctx.r11.s64 = 160;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A868:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14824);
	// stw r11,640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 640, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A878"))) PPC_WEAK_FUNC(sub_8311A878);
PPC_FUNC_IMPL(__imp__sub_8311A878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a8b8
	if (!ctx.cr6.eq) goto loc_8311A8B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A8AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a8ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A8AC;
loc_8311A8B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,644(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 644);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a8d8
	if (ctx.cr6.eq) goto loc_8311A8D8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,161
	ctx.r11.s64 = 161;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A8D8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14820(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14820);
	// stw r11,644(r10)
	PPC_STORE_U32(ctx.r10.u32 + 644, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A8E8"))) PPC_WEAK_FUNC(sub_8311A8E8);
PPC_FUNC_IMPL(__imp__sub_8311A8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a928
	if (!ctx.cr6.eq) goto loc_8311A928;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A91C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a91c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A91C;
loc_8311A928:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 648);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a948
	if (ctx.cr6.eq) goto loc_8311A948;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,162
	ctx.r11.s64 = 162;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A948:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14816);
	// stw r11,648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 648, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A958"))) PPC_WEAK_FUNC(sub_8311A958);
PPC_FUNC_IMPL(__imp__sub_8311A958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a998
	if (!ctx.cr6.eq) goto loc_8311A998;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A98C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a98c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A98C;
loc_8311A998:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,652(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 652);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a9b8
	if (ctx.cr6.eq) goto loc_8311A9B8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,163
	ctx.r11.s64 = 163;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A9B8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14812);
	// stw r11,652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 652, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A9C8"))) PPC_WEAK_FUNC(sub_8311A9C8);
PPC_FUNC_IMPL(__imp__sub_8311A9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311aa08
	if (!ctx.cr6.eq) goto loc_8311AA08;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A9FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a9fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A9FC;
loc_8311AA08:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 656);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311aa28
	if (ctx.cr6.eq) goto loc_8311AA28;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,164
	ctx.r11.s64 = 164;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311AA28:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14808(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14808);
	// stw r11,656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 656, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311AA38"))) PPC_WEAK_FUNC(sub_8311AA38);
PPC_FUNC_IMPL(__imp__sub_8311AA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311aa78
	if (!ctx.cr6.eq) goto loc_8311AA78;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311AA6C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311aa6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311AA6C;
loc_8311AA78:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 660);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311aa98
	if (ctx.cr6.eq) goto loc_8311AA98;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,165
	ctx.r11.s64 = 165;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311AA98:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14804);
	// stw r11,660(r10)
	PPC_STORE_U32(ctx.r10.u32 + 660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311AAA8"))) PPC_WEAK_FUNC(sub_8311AAA8);
PPC_FUNC_IMPL(__imp__sub_8311AAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311aae8
	if (!ctx.cr6.eq) goto loc_8311AAE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311AADC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311aadc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311AADC;
loc_8311AAE8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,664(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 664);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ab08
	if (ctx.cr6.eq) goto loc_8311AB08;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,166
	ctx.r11.s64 = 166;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311AB08:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14800);
	// stw r11,664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 664, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311AB18"))) PPC_WEAK_FUNC(sub_8311AB18);
PPC_FUNC_IMPL(__imp__sub_8311AB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311ab58
	if (!ctx.cr6.eq) goto loc_8311AB58;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311AB4C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ab4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311AB4C;
loc_8311AB58:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,668(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 668);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ab78
	if (ctx.cr6.eq) goto loc_8311AB78;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,167
	ctx.r11.s64 = 167;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311AB78:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14796);
	// stw r11,668(r10)
	PPC_STORE_U32(ctx.r10.u32 + 668, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311AB88"))) PPC_WEAK_FUNC(sub_8311AB88);
PPC_FUNC_IMPL(__imp__sub_8311AB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311abc8
	if (!ctx.cr6.eq) goto loc_8311ABC8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311ABBC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311abbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311ABBC;
loc_8311ABC8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,996(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 996);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311abe8
	if (ctx.cr6.eq) goto loc_8311ABE8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,249
	ctx.r11.s64 = 249;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311ABE8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14792);
	// stw r11,996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 996, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311ABF8"))) PPC_WEAK_FUNC(sub_8311ABF8);
PPC_FUNC_IMPL(__imp__sub_8311ABF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311ac38
	if (!ctx.cr6.eq) goto loc_8311AC38;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311AC2C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ac2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311AC2C;
loc_8311AC38:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1000(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1000);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ac58
	if (ctx.cr6.eq) goto loc_8311AC58;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,250
	ctx.r11.s64 = 250;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311AC58:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14788);
	// stw r11,1000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1000, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311AC68"))) PPC_WEAK_FUNC(sub_8311AC68);
PPC_FUNC_IMPL(__imp__sub_8311AC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311aca8
	if (!ctx.cr6.eq) goto loc_8311ACA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311AC9C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ac9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311AC9C;
loc_8311ACA8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1004);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311acc8
	if (ctx.cr6.eq) goto loc_8311ACC8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,251
	ctx.r11.s64 = 251;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311ACC8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14784);
	// stw r11,1004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1004, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311ACD8"))) PPC_WEAK_FUNC(sub_8311ACD8);
PPC_FUNC_IMPL(__imp__sub_8311ACD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311ad18
	if (!ctx.cr6.eq) goto loc_8311AD18;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311AD0C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ad0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311AD0C;
loc_8311AD18:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,676(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 676);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ad38
	if (ctx.cr6.eq) goto loc_8311AD38;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,169
	ctx.r11.s64 = 169;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311AD38:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14780);
	// stw r11,676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 676, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311AD48"))) PPC_WEAK_FUNC(sub_8311AD48);
PPC_FUNC_IMPL(__imp__sub_8311AD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311ad88
	if (!ctx.cr6.eq) goto loc_8311AD88;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311AD7C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ad7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311AD7C;
loc_8311AD88:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 680);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ada8
	if (ctx.cr6.eq) goto loc_8311ADA8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,170
	ctx.r11.s64 = 170;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311ADA8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14776);
	// stw r11,680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 680, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311ADB8"))) PPC_WEAK_FUNC(sub_8311ADB8);
PPC_FUNC_IMPL(__imp__sub_8311ADB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311adf8
	if (!ctx.cr6.eq) goto loc_8311ADF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311ADEC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311adec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311ADEC;
loc_8311ADF8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,684(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 684);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ae18
	if (ctx.cr6.eq) goto loc_8311AE18;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,171
	ctx.r11.s64 = 171;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311AE18:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14772);
	// stw r11,684(r10)
	PPC_STORE_U32(ctx.r10.u32 + 684, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311AE28"))) PPC_WEAK_FUNC(sub_8311AE28);
PPC_FUNC_IMPL(__imp__sub_8311AE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311ae68
	if (!ctx.cr6.eq) goto loc_8311AE68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311AE5C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ae5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311AE5C;
loc_8311AE68:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,688(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 688);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ae88
	if (ctx.cr6.eq) goto loc_8311AE88;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,172
	ctx.r11.s64 = 172;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311AE88:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14768);
	// stw r11,688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 688, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311AE98"))) PPC_WEAK_FUNC(sub_8311AE98);
PPC_FUNC_IMPL(__imp__sub_8311AE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311aed8
	if (!ctx.cr6.eq) goto loc_8311AED8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311AECC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311aecc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311AECC;
loc_8311AED8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,692(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 692);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311aef8
	if (ctx.cr6.eq) goto loc_8311AEF8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,173
	ctx.r11.s64 = 173;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311AEF8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14764);
	// stw r11,692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 692, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311AF08"))) PPC_WEAK_FUNC(sub_8311AF08);
PPC_FUNC_IMPL(__imp__sub_8311AF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311af48
	if (!ctx.cr6.eq) goto loc_8311AF48;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311AF3C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311af3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311AF3C;
loc_8311AF48:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,696(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 696);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311af68
	if (ctx.cr6.eq) goto loc_8311AF68;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,174
	ctx.r11.s64 = 174;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311AF68:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14760);
	// stw r11,696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 696, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311AF78"))) PPC_WEAK_FUNC(sub_8311AF78);
PPC_FUNC_IMPL(__imp__sub_8311AF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311afb8
	if (!ctx.cr6.eq) goto loc_8311AFB8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311AFAC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311afac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311AFAC;
loc_8311AFB8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,700(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 700);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311afd8
	if (ctx.cr6.eq) goto loc_8311AFD8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,175
	ctx.r11.s64 = 175;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311AFD8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14756);
	// stw r11,700(r10)
	PPC_STORE_U32(ctx.r10.u32 + 700, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311AFE8"))) PPC_WEAK_FUNC(sub_8311AFE8);
PPC_FUNC_IMPL(__imp__sub_8311AFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b028
	if (!ctx.cr6.eq) goto loc_8311B028;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B01C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b01c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B01C;
loc_8311B028:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 704);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b048
	if (ctx.cr6.eq) goto loc_8311B048;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,176
	ctx.r11.s64 = 176;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B048:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14752);
	// stw r11,704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 704, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B058"))) PPC_WEAK_FUNC(sub_8311B058);
PPC_FUNC_IMPL(__imp__sub_8311B058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b098
	if (!ctx.cr6.eq) goto loc_8311B098;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B08C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b08c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B08C;
loc_8311B098:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,708(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 708);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b0b8
	if (ctx.cr6.eq) goto loc_8311B0B8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,177
	ctx.r11.s64 = 177;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B0B8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14748);
	// stw r11,708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 708, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B0C8"))) PPC_WEAK_FUNC(sub_8311B0C8);
PPC_FUNC_IMPL(__imp__sub_8311B0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b108
	if (!ctx.cr6.eq) goto loc_8311B108;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B0FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b0fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B0FC;
loc_8311B108:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,712(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 712);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b128
	if (ctx.cr6.eq) goto loc_8311B128;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,178
	ctx.r11.s64 = 178;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B128:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14744);
	// stw r11,712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 712, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B138"))) PPC_WEAK_FUNC(sub_8311B138);
PPC_FUNC_IMPL(__imp__sub_8311B138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b178
	if (!ctx.cr6.eq) goto loc_8311B178;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B16C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b16c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B16C;
loc_8311B178:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,716(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 716);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b198
	if (ctx.cr6.eq) goto loc_8311B198;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,179
	ctx.r11.s64 = 179;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B198:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14740);
	// stw r11,716(r10)
	PPC_STORE_U32(ctx.r10.u32 + 716, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B1A8"))) PPC_WEAK_FUNC(sub_8311B1A8);
PPC_FUNC_IMPL(__imp__sub_8311B1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b1e8
	if (!ctx.cr6.eq) goto loc_8311B1E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B1DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b1dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B1DC;
loc_8311B1E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,720(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 720);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b208
	if (ctx.cr6.eq) goto loc_8311B208;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,180
	ctx.r11.s64 = 180;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B208:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14736);
	// stw r11,720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 720, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B218"))) PPC_WEAK_FUNC(sub_8311B218);
PPC_FUNC_IMPL(__imp__sub_8311B218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b258
	if (!ctx.cr6.eq) goto loc_8311B258;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B24C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b24c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B24C;
loc_8311B258:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,724(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 724);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b278
	if (ctx.cr6.eq) goto loc_8311B278;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,181
	ctx.r11.s64 = 181;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B278:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14732);
	// stw r11,724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 724, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B288"))) PPC_WEAK_FUNC(sub_8311B288);
PPC_FUNC_IMPL(__imp__sub_8311B288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b2c8
	if (!ctx.cr6.eq) goto loc_8311B2C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B2BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b2bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B2BC;
loc_8311B2C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 840);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b2e8
	if (ctx.cr6.eq) goto loc_8311B2E8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,210
	ctx.r11.s64 = 210;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B2E8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14728);
	// stw r11,840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 840, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B2F8"))) PPC_WEAK_FUNC(sub_8311B2F8);
PPC_FUNC_IMPL(__imp__sub_8311B2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b338
	if (!ctx.cr6.eq) goto loc_8311B338;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B32C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b32c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B32C;
loc_8311B338:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,728(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 728);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b358
	if (ctx.cr6.eq) goto loc_8311B358;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,182
	ctx.r11.s64 = 182;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B358:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14724);
	// stw r11,728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 728, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B368"))) PPC_WEAK_FUNC(sub_8311B368);
PPC_FUNC_IMPL(__imp__sub_8311B368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b3a8
	if (!ctx.cr6.eq) goto loc_8311B3A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B39C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b39c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B39C;
loc_8311B3A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,732(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 732);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b3c8
	if (ctx.cr6.eq) goto loc_8311B3C8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,183
	ctx.r11.s64 = 183;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B3C8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14720);
	// stw r11,732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 732, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B3D8"))) PPC_WEAK_FUNC(sub_8311B3D8);
PPC_FUNC_IMPL(__imp__sub_8311B3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b418
	if (!ctx.cr6.eq) goto loc_8311B418;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B40C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b40c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B40C;
loc_8311B418:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,736(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 736);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b438
	if (ctx.cr6.eq) goto loc_8311B438;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,184
	ctx.r11.s64 = 184;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B438:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14716);
	// stw r11,736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 736, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B448"))) PPC_WEAK_FUNC(sub_8311B448);
PPC_FUNC_IMPL(__imp__sub_8311B448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b488
	if (!ctx.cr6.eq) goto loc_8311B488;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B47C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b47c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B47C;
loc_8311B488:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,740(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 740);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b4a8
	if (ctx.cr6.eq) goto loc_8311B4A8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,185
	ctx.r11.s64 = 185;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B4A8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14712);
	// stw r11,740(r10)
	PPC_STORE_U32(ctx.r10.u32 + 740, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B4B8"))) PPC_WEAK_FUNC(sub_8311B4B8);
PPC_FUNC_IMPL(__imp__sub_8311B4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b4f8
	if (!ctx.cr6.eq) goto loc_8311B4F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B4EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b4ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B4EC;
loc_8311B4F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 744);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b518
	if (ctx.cr6.eq) goto loc_8311B518;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,186
	ctx.r11.s64 = 186;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B518:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14708);
	// stw r11,744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 744, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B528"))) PPC_WEAK_FUNC(sub_8311B528);
PPC_FUNC_IMPL(__imp__sub_8311B528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b568
	if (!ctx.cr6.eq) goto loc_8311B568;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B55C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b55c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B55C;
loc_8311B568:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,748(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 748);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b588
	if (ctx.cr6.eq) goto loc_8311B588;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,187
	ctx.r11.s64 = 187;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B588:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14704);
	// stw r11,748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 748, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B598"))) PPC_WEAK_FUNC(sub_8311B598);
PPC_FUNC_IMPL(__imp__sub_8311B598) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311B5C8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b5c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B5C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B5D8"))) PPC_WEAK_FUNC(sub_8311B5D8);
PPC_FUNC_IMPL(__imp__sub_8311B5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b618
	if (!ctx.cr6.eq) goto loc_8311B618;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B60C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b60c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B60C;
loc_8311B618:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,752(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 752);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b638
	if (ctx.cr6.eq) goto loc_8311B638;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,188
	ctx.r11.s64 = 188;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B638:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14696(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14696);
	// stw r11,752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 752, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B648"))) PPC_WEAK_FUNC(sub_8311B648);
PPC_FUNC_IMPL(__imp__sub_8311B648) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311B678:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B678;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B688"))) PPC_WEAK_FUNC(sub_8311B688);
PPC_FUNC_IMPL(__imp__sub_8311B688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b6c8
	if (!ctx.cr6.eq) goto loc_8311B6C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B6BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b6bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B6BC;
loc_8311B6C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,756(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 756);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b6e8
	if (ctx.cr6.eq) goto loc_8311B6E8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,189
	ctx.r11.s64 = 189;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B6E8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14688);
	// stw r11,756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 756, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B6F8"))) PPC_WEAK_FUNC(sub_8311B6F8);
PPC_FUNC_IMPL(__imp__sub_8311B6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b738
	if (!ctx.cr6.eq) goto loc_8311B738;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B72C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b72c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B72C;
loc_8311B738:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,760(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 760);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b758
	if (ctx.cr6.eq) goto loc_8311B758;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,190
	ctx.r11.s64 = 190;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B758:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14684);
	// stw r11,760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 760, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B768"))) PPC_WEAK_FUNC(sub_8311B768);
PPC_FUNC_IMPL(__imp__sub_8311B768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b7a8
	if (!ctx.cr6.eq) goto loc_8311B7A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B79C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b79c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B79C;
loc_8311B7A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,764(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 764);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b7c8
	if (ctx.cr6.eq) goto loc_8311B7C8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,191
	ctx.r11.s64 = 191;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B7C8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14680);
	// stw r11,764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 764, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B7D8"))) PPC_WEAK_FUNC(sub_8311B7D8);
PPC_FUNC_IMPL(__imp__sub_8311B7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b818
	if (!ctx.cr6.eq) goto loc_8311B818;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B80C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b80c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B80C;
loc_8311B818:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,768(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 768);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b838
	if (ctx.cr6.eq) goto loc_8311B838;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,192
	ctx.r11.s64 = 192;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B838:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14676);
	// stw r11,768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 768, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B848"))) PPC_WEAK_FUNC(sub_8311B848);
PPC_FUNC_IMPL(__imp__sub_8311B848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b888
	if (!ctx.cr6.eq) goto loc_8311B888;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B87C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b87c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B87C;
loc_8311B888:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,772(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 772);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b8a8
	if (ctx.cr6.eq) goto loc_8311B8A8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,193
	ctx.r11.s64 = 193;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B8A8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14672);
	// stw r11,772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 772, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B8B8"))) PPC_WEAK_FUNC(sub_8311B8B8);
PPC_FUNC_IMPL(__imp__sub_8311B8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b8f8
	if (!ctx.cr6.eq) goto loc_8311B8F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B8EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b8ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B8EC;
loc_8311B8F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,776(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 776);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b918
	if (ctx.cr6.eq) goto loc_8311B918;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,194
	ctx.r11.s64 = 194;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B918:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14668);
	// stw r11,776(r10)
	PPC_STORE_U32(ctx.r10.u32 + 776, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B928"))) PPC_WEAK_FUNC(sub_8311B928);
PPC_FUNC_IMPL(__imp__sub_8311B928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b968
	if (!ctx.cr6.eq) goto loc_8311B968;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B95C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b95c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B95C;
loc_8311B968:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,780(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 780);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b988
	if (ctx.cr6.eq) goto loc_8311B988;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,195
	ctx.r11.s64 = 195;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B988:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14664);
	// stw r11,780(r10)
	PPC_STORE_U32(ctx.r10.u32 + 780, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B998"))) PPC_WEAK_FUNC(sub_8311B998);
PPC_FUNC_IMPL(__imp__sub_8311B998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311b9d8
	if (!ctx.cr6.eq) goto loc_8311B9D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311B9CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311b9cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311B9CC;
loc_8311B9D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 976);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311b9f8
	if (ctx.cr6.eq) goto loc_8311B9F8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,244
	ctx.r11.s64 = 244;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311B9F8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14660);
	// stw r11,976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 976, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BA08"))) PPC_WEAK_FUNC(sub_8311BA08);
PPC_FUNC_IMPL(__imp__sub_8311BA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311ba48
	if (!ctx.cr6.eq) goto loc_8311BA48;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311BA3C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ba3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BA3C;
loc_8311BA48:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,980(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 980);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ba68
	if (ctx.cr6.eq) goto loc_8311BA68;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,245
	ctx.r11.s64 = 245;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311BA68:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14656);
	// stw r11,980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 980, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BA78"))) PPC_WEAK_FUNC(sub_8311BA78);
PPC_FUNC_IMPL(__imp__sub_8311BA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311bab8
	if (!ctx.cr6.eq) goto loc_8311BAB8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311BAAC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311baac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BAAC;
loc_8311BAB8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,984(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311bad8
	if (ctx.cr6.eq) goto loc_8311BAD8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,246
	ctx.r11.s64 = 246;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311BAD8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14652);
	// stw r11,984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 984, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BAE8"))) PPC_WEAK_FUNC(sub_8311BAE8);
PPC_FUNC_IMPL(__imp__sub_8311BAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311bb28
	if (!ctx.cr6.eq) goto loc_8311BB28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311BB1C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311bb1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BB1C;
loc_8311BB28:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,988(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 988);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311bb48
	if (ctx.cr6.eq) goto loc_8311BB48;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,247
	ctx.r11.s64 = 247;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311BB48:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14648);
	// stw r11,988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 988, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BB58"))) PPC_WEAK_FUNC(sub_8311BB58);
PPC_FUNC_IMPL(__imp__sub_8311BB58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311BB88:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311bb88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BB88;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BB98"))) PPC_WEAK_FUNC(sub_8311BB98);
PPC_FUNC_IMPL(__imp__sub_8311BB98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311BBC8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311bbc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BBC8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BBD8"))) PPC_WEAK_FUNC(sub_8311BBD8);
PPC_FUNC_IMPL(__imp__sub_8311BBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311bc18
	if (!ctx.cr6.eq) goto loc_8311BC18;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311BC0C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311bc0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BC0C;
loc_8311BC18:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311bc38
	if (ctx.cr6.eq) goto loc_8311BC38;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311BC38:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14636);
	// stw r11,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BC48"))) PPC_WEAK_FUNC(sub_8311BC48);
PPC_FUNC_IMPL(__imp__sub_8311BC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311bc88
	if (!ctx.cr6.eq) goto loc_8311BC88;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311BC7C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311bc7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BC7C;
loc_8311BC88:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311bca8
	if (ctx.cr6.eq) goto loc_8311BCA8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,35
	ctx.r11.s64 = 35;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311BCA8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14632);
	// stw r11,140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 140, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BCB8"))) PPC_WEAK_FUNC(sub_8311BCB8);
PPC_FUNC_IMPL(__imp__sub_8311BCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311BCE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311bce8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BCE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BCF8"))) PPC_WEAK_FUNC(sub_8311BCF8);
PPC_FUNC_IMPL(__imp__sub_8311BCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311BD28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311bd28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BD28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BD38"))) PPC_WEAK_FUNC(sub_8311BD38);
PPC_FUNC_IMPL(__imp__sub_8311BD38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311BD68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311bd68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BD68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BD78"))) PPC_WEAK_FUNC(sub_8311BD78);
PPC_FUNC_IMPL(__imp__sub_8311BD78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311BDA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311bda8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BDA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BDB8"))) PPC_WEAK_FUNC(sub_8311BDB8);
PPC_FUNC_IMPL(__imp__sub_8311BDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311BDE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311bde8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BDE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BDF8"))) PPC_WEAK_FUNC(sub_8311BDF8);
PPC_FUNC_IMPL(__imp__sub_8311BDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x8311be38
	if (!ctx.cr6.eq) goto loc_8311BE38;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311BE2C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311be2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BE2C;
loc_8311BE38:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,308(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 308);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311be58
	if (ctx.cr6.eq) goto loc_8311BE58;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,77
	ctx.r11.s64 = 77;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_8311BE58:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14612);
	// stw r11,308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 308, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BE68"))) PPC_WEAK_FUNC(sub_8311BE68);
PPC_FUNC_IMPL(__imp__sub_8311BE68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311BE98:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311be98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BE98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BEA8"))) PPC_WEAK_FUNC(sub_8311BEA8);
PPC_FUNC_IMPL(__imp__sub_8311BEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x8311bee8
	if (!ctx.cr6.eq) goto loc_8311BEE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311BEDC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311bedc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BEDC;
loc_8311BEE8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311bf08
	if (ctx.cr6.eq) goto loc_8311BF08;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,78
	ctx.r11.s64 = 78;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_8311BF08:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14608);
	// stw r11,312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 312, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BF18"))) PPC_WEAK_FUNC(sub_8311BF18);
PPC_FUNC_IMPL(__imp__sub_8311BF18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311BF48:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311bf48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BF48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BF58"))) PPC_WEAK_FUNC(sub_8311BF58);
PPC_FUNC_IMPL(__imp__sub_8311BF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x8311bf98
	if (!ctx.cr6.eq) goto loc_8311BF98;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311BF8C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311bf8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BF8C;
loc_8311BF98:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311bfb8
	if (ctx.cr6.eq) goto loc_8311BFB8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,79
	ctx.r11.s64 = 79;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_8311BFB8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14604);
	// stw r11,316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BFC8"))) PPC_WEAK_FUNC(sub_8311BFC8);
PPC_FUNC_IMPL(__imp__sub_8311BFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311BFF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311bff8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311BFF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C008"))) PPC_WEAK_FUNC(sub_8311C008);
PPC_FUNC_IMPL(__imp__sub_8311C008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x8311c048
	if (!ctx.cr6.eq) goto loc_8311C048;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C03C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c03c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C03C;
loc_8311C048:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c068
	if (ctx.cr6.eq) goto loc_8311C068;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,88
	ctx.r11.s64 = 88;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_8311C068:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14600);
	// stw r11,352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C078"))) PPC_WEAK_FUNC(sub_8311C078);
PPC_FUNC_IMPL(__imp__sub_8311C078) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311C0A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c0a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C0A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C0B8"))) PPC_WEAK_FUNC(sub_8311C0B8);
PPC_FUNC_IMPL(__imp__sub_8311C0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x8311c0f8
	if (!ctx.cr6.eq) goto loc_8311C0F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C0EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c0ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C0EC;
loc_8311C0F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c118
	if (ctx.cr6.eq) goto loc_8311C118;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,80
	ctx.r11.s64 = 80;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_8311C118:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14596);
	// stw r11,320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C128"))) PPC_WEAK_FUNC(sub_8311C128);
PPC_FUNC_IMPL(__imp__sub_8311C128) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311C158:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C158;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C168"))) PPC_WEAK_FUNC(sub_8311C168);
PPC_FUNC_IMPL(__imp__sub_8311C168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x8311c1a8
	if (!ctx.cr6.eq) goto loc_8311C1A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C19C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c19c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C19C;
loc_8311C1A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c1c8
	if (ctx.cr6.eq) goto loc_8311C1C8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,81
	ctx.r11.s64 = 81;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_8311C1C8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14592);
	// stw r11,324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C1D8"))) PPC_WEAK_FUNC(sub_8311C1D8);
PPC_FUNC_IMPL(__imp__sub_8311C1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311C208:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c208
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C218"))) PPC_WEAK_FUNC(sub_8311C218);
PPC_FUNC_IMPL(__imp__sub_8311C218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x8311c258
	if (!ctx.cr6.eq) goto loc_8311C258;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C24C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c24c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C24C;
loc_8311C258:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c278
	if (ctx.cr6.eq) goto loc_8311C278;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,57
	ctx.r11.s64 = 57;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_8311C278:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14588);
	// stw r11,228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 228, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C288"))) PPC_WEAK_FUNC(sub_8311C288);
PPC_FUNC_IMPL(__imp__sub_8311C288) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311C2B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c2b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C2B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C2C8"))) PPC_WEAK_FUNC(sub_8311C2C8);
PPC_FUNC_IMPL(__imp__sub_8311C2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x8311c308
	if (!ctx.cr6.eq) goto loc_8311C308;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C2FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c2fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C2FC;
loc_8311C308:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,356(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 356);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c328
	if (ctx.cr6.eq) goto loc_8311C328;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,89
	ctx.r11.s64 = 89;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_8311C328:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14584);
	// stw r11,356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 356, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C338"))) PPC_WEAK_FUNC(sub_8311C338);
PPC_FUNC_IMPL(__imp__sub_8311C338) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311C368:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C378"))) PPC_WEAK_FUNC(sub_8311C378);
PPC_FUNC_IMPL(__imp__sub_8311C378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x8311c3b8
	if (!ctx.cr6.eq) goto loc_8311C3B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C3AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c3ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C3AC;
loc_8311C3B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c3d8
	if (ctx.cr6.eq) goto loc_8311C3D8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,97
	ctx.r11.s64 = 97;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_8311C3D8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14580);
	// stw r11,388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 388, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C3E8"))) PPC_WEAK_FUNC(sub_8311C3E8);
PPC_FUNC_IMPL(__imp__sub_8311C3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311C418:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c418
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C418;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C428"))) PPC_WEAK_FUNC(sub_8311C428);
PPC_FUNC_IMPL(__imp__sub_8311C428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x8311c468
	if (!ctx.cr6.eq) goto loc_8311C468;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C45C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c45c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C45C;
loc_8311C468:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 392);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c488
	if (ctx.cr6.eq) goto loc_8311C488;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,98
	ctx.r11.s64 = 98;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_8311C488:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14576);
	// stw r11,392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 392, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C498"))) PPC_WEAK_FUNC(sub_8311C498);
PPC_FUNC_IMPL(__imp__sub_8311C498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311c4d8
	if (!ctx.cr6.eq) goto loc_8311C4D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C4CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c4cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C4CC;
loc_8311C4D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,844(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 844);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c4f8
	if (ctx.cr6.eq) goto loc_8311C4F8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,211
	ctx.r11.s64 = 211;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311C4F8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14572);
	// stw r11,844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 844, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C508"))) PPC_WEAK_FUNC(sub_8311C508);
PPC_FUNC_IMPL(__imp__sub_8311C508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311c548
	if (!ctx.cr6.eq) goto loc_8311C548;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C53C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c53c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C53C;
loc_8311C548:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,848(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 848);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c568
	if (ctx.cr6.eq) goto loc_8311C568;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,212
	ctx.r11.s64 = 212;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311C568:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14568);
	// stw r11,848(r10)
	PPC_STORE_U32(ctx.r10.u32 + 848, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C578"))) PPC_WEAK_FUNC(sub_8311C578);
PPC_FUNC_IMPL(__imp__sub_8311C578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311c5b8
	if (!ctx.cr6.eq) goto loc_8311C5B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C5AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c5ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C5AC;
loc_8311C5B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,852(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 852);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c5d8
	if (ctx.cr6.eq) goto loc_8311C5D8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,213
	ctx.r11.s64 = 213;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311C5D8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14564);
	// stw r11,852(r10)
	PPC_STORE_U32(ctx.r10.u32 + 852, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C5E8"))) PPC_WEAK_FUNC(sub_8311C5E8);
PPC_FUNC_IMPL(__imp__sub_8311C5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311c628
	if (!ctx.cr6.eq) goto loc_8311C628;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C61C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c61c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C61C;
loc_8311C628:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1184);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c648
	if (ctx.cr6.eq) goto loc_8311C648;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,296
	ctx.r11.s64 = 296;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311C648:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14560);
	// stw r11,1184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1184, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C658"))) PPC_WEAK_FUNC(sub_8311C658);
PPC_FUNC_IMPL(__imp__sub_8311C658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311c698
	if (!ctx.cr6.eq) goto loc_8311C698;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C68C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c68c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C68C;
loc_8311C698:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,856(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 856);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c6b8
	if (ctx.cr6.eq) goto loc_8311C6B8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,214
	ctx.r11.s64 = 214;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311C6B8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14556);
	// stw r11,856(r10)
	PPC_STORE_U32(ctx.r10.u32 + 856, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C6C8"))) PPC_WEAK_FUNC(sub_8311C6C8);
PPC_FUNC_IMPL(__imp__sub_8311C6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311c708
	if (!ctx.cr6.eq) goto loc_8311C708;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C6FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c6fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C6FC;
loc_8311C708:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,860(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 860);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c728
	if (ctx.cr6.eq) goto loc_8311C728;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,215
	ctx.r11.s64 = 215;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311C728:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14552);
	// stw r11,860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 860, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C738"))) PPC_WEAK_FUNC(sub_8311C738);
PPC_FUNC_IMPL(__imp__sub_8311C738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311c778
	if (!ctx.cr6.eq) goto loc_8311C778;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C76C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c76c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C76C;
loc_8311C778:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,864(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 864);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c798
	if (ctx.cr6.eq) goto loc_8311C798;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,216
	ctx.r11.s64 = 216;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311C798:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14548);
	// stw r11,864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C7A8"))) PPC_WEAK_FUNC(sub_8311C7A8);
PPC_FUNC_IMPL(__imp__sub_8311C7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311c7e8
	if (!ctx.cr6.eq) goto loc_8311C7E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C7DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c7dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C7DC;
loc_8311C7E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1100);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c808
	if (ctx.cr6.eq) goto loc_8311C808;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,275
	ctx.r11.s64 = 275;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311C808:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14544);
	// stw r11,1100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C818"))) PPC_WEAK_FUNC(sub_8311C818);
PPC_FUNC_IMPL(__imp__sub_8311C818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311c858
	if (!ctx.cr6.eq) goto loc_8311C858;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C84C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c84c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C84C;
loc_8311C858:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1104);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c878
	if (ctx.cr6.eq) goto loc_8311C878;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,276
	ctx.r11.s64 = 276;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311C878:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14540);
	// stw r11,1104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C888"))) PPC_WEAK_FUNC(sub_8311C888);
PPC_FUNC_IMPL(__imp__sub_8311C888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311c8c8
	if (!ctx.cr6.eq) goto loc_8311C8C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C8BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c8bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C8BC;
loc_8311C8C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,868(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 868);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c8e8
	if (ctx.cr6.eq) goto loc_8311C8E8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,217
	ctx.r11.s64 = 217;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311C8E8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14536);
	// stw r11,868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 868, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C8F8"))) PPC_WEAK_FUNC(sub_8311C8F8);
PPC_FUNC_IMPL(__imp__sub_8311C8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311c938
	if (!ctx.cr6.eq) goto loc_8311C938;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C92C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c92c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C92C;
loc_8311C938:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,872(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 872);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c958
	if (ctx.cr6.eq) goto loc_8311C958;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,218
	ctx.r11.s64 = 218;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311C958:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14532);
	// stw r11,872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 872, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C968"))) PPC_WEAK_FUNC(sub_8311C968);
PPC_FUNC_IMPL(__imp__sub_8311C968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311c9a8
	if (!ctx.cr6.eq) goto loc_8311C9A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311C99C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311c99c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311C99C;
loc_8311C9A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,876(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 876);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311c9c8
	if (ctx.cr6.eq) goto loc_8311C9C8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,219
	ctx.r11.s64 = 219;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311C9C8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14528);
	// stw r11,876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 876, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C9D8"))) PPC_WEAK_FUNC(sub_8311C9D8);
PPC_FUNC_IMPL(__imp__sub_8311C9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311ca18
	if (!ctx.cr6.eq) goto loc_8311CA18;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311CA0C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ca0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311CA0C;
loc_8311CA18:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,880(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 880);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ca38
	if (ctx.cr6.eq) goto loc_8311CA38;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,220
	ctx.r11.s64 = 220;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311CA38:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14524);
	// stw r11,880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 880, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311CA48"))) PPC_WEAK_FUNC(sub_8311CA48);
PPC_FUNC_IMPL(__imp__sub_8311CA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311ca88
	if (!ctx.cr6.eq) goto loc_8311CA88;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311CA7C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ca7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311CA7C;
loc_8311CA88:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,884(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 884);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311caa8
	if (ctx.cr6.eq) goto loc_8311CAA8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,221
	ctx.r11.s64 = 221;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311CAA8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14520);
	// stw r11,884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 884, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311CAB8"))) PPC_WEAK_FUNC(sub_8311CAB8);
PPC_FUNC_IMPL(__imp__sub_8311CAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311caf8
	if (!ctx.cr6.eq) goto loc_8311CAF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311CAEC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311caec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311CAEC;
loc_8311CAF8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1188(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1188);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311cb18
	if (ctx.cr6.eq) goto loc_8311CB18;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,297
	ctx.r11.s64 = 297;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311CB18:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14516);
	// stw r11,1188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1188, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311CB28"))) PPC_WEAK_FUNC(sub_8311CB28);
PPC_FUNC_IMPL(__imp__sub_8311CB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311cb68
	if (!ctx.cr6.eq) goto loc_8311CB68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311CB5C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311cb5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311CB5C;
loc_8311CB68:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 888);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311cb88
	if (ctx.cr6.eq) goto loc_8311CB88;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,222
	ctx.r11.s64 = 222;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311CB88:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14512);
	// stw r11,888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 888, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311CB98"))) PPC_WEAK_FUNC(sub_8311CB98);
PPC_FUNC_IMPL(__imp__sub_8311CB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311cbd8
	if (!ctx.cr6.eq) goto loc_8311CBD8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311CBCC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311cbcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311CBCC;
loc_8311CBD8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,892(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 892);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311cbf8
	if (ctx.cr6.eq) goto loc_8311CBF8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,223
	ctx.r11.s64 = 223;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311CBF8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14508);
	// stw r11,892(r10)
	PPC_STORE_U32(ctx.r10.u32 + 892, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311CC08"))) PPC_WEAK_FUNC(sub_8311CC08);
PPC_FUNC_IMPL(__imp__sub_8311CC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311cc48
	if (!ctx.cr6.eq) goto loc_8311CC48;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311CC3C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311cc3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311CC3C;
loc_8311CC48:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 896);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311cc68
	if (ctx.cr6.eq) goto loc_8311CC68;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,224
	ctx.r11.s64 = 224;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311CC68:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14504);
	// stw r11,896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 896, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311CC78"))) PPC_WEAK_FUNC(sub_8311CC78);
PPC_FUNC_IMPL(__imp__sub_8311CC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311ccb8
	if (!ctx.cr6.eq) goto loc_8311CCB8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311CCAC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ccac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311CCAC;
loc_8311CCB8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 900);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ccd8
	if (ctx.cr6.eq) goto loc_8311CCD8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,225
	ctx.r11.s64 = 225;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311CCD8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14500);
	// stw r11,900(r10)
	PPC_STORE_U32(ctx.r10.u32 + 900, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311CCE8"))) PPC_WEAK_FUNC(sub_8311CCE8);
PPC_FUNC_IMPL(__imp__sub_8311CCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311CD18:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311cd18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311CD18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311CD28"))) PPC_WEAK_FUNC(sub_8311CD28);
PPC_FUNC_IMPL(__imp__sub_8311CD28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311CD58:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311cd58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311CD58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311CD68"))) PPC_WEAK_FUNC(sub_8311CD68);
PPC_FUNC_IMPL(__imp__sub_8311CD68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311CD98:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311cd98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311CD98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311CDA8"))) PPC_WEAK_FUNC(sub_8311CDA8);
PPC_FUNC_IMPL(__imp__sub_8311CDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311cde8
	if (!ctx.cr6.eq) goto loc_8311CDE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311CDDC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311cddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311CDDC;
loc_8311CDE8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ce08
	if (ctx.cr6.eq) goto loc_8311CE08;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,226
	ctx.r11.s64 = 226;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311CE08:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14484);
	// stw r11,904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 904, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311CE18"))) PPC_WEAK_FUNC(sub_8311CE18);
PPC_FUNC_IMPL(__imp__sub_8311CE18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311CE48:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ce48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311CE48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311CE58"))) PPC_WEAK_FUNC(sub_8311CE58);
PPC_FUNC_IMPL(__imp__sub_8311CE58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311CE88:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ce88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311CE88;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311CE98"))) PPC_WEAK_FUNC(sub_8311CE98);
PPC_FUNC_IMPL(__imp__sub_8311CE98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311CEC8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311cec8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311CEC8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311CED8"))) PPC_WEAK_FUNC(sub_8311CED8);
PPC_FUNC_IMPL(__imp__sub_8311CED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311cf18
	if (!ctx.cr6.eq) goto loc_8311CF18;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311CF0C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311cf0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311CF0C;
loc_8311CF18:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1008);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311cf38
	if (ctx.cr6.eq) goto loc_8311CF38;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,252
	ctx.r11.s64 = 252;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311CF38:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14468);
	// stw r11,1008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1008, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311CF48"))) PPC_WEAK_FUNC(sub_8311CF48);
PPC_FUNC_IMPL(__imp__sub_8311CF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311cf88
	if (!ctx.cr6.eq) goto loc_8311CF88;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311CF7C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311cf7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311CF7C;
loc_8311CF88:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1280);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311cfa8
	if (ctx.cr6.eq) goto loc_8311CFA8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,320
	ctx.r11.s64 = 320;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311CFA8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14464);
	// stw r11,1280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311CFB8"))) PPC_WEAK_FUNC(sub_8311CFB8);
PPC_FUNC_IMPL(__imp__sub_8311CFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311cff8
	if (!ctx.cr6.eq) goto loc_8311CFF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311CFEC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311cfec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311CFEC;
loc_8311CFF8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1200);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311d018
	if (ctx.cr6.eq) goto loc_8311D018;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,300
	ctx.r11.s64 = 300;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311D018:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14460);
	// stw r11,1200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D028"))) PPC_WEAK_FUNC(sub_8311D028);
PPC_FUNC_IMPL(__imp__sub_8311D028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311d068
	if (!ctx.cr6.eq) goto loc_8311D068;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311D05C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d05c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D05C;
loc_8311D068:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,6000(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6000);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311d088
	if (ctx.cr6.eq) goto loc_8311D088;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,1500
	ctx.r11.s64 = 1500;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311D088:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14456);
	// stw r11,6000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6000, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D098"))) PPC_WEAK_FUNC(sub_8311D098);
PPC_FUNC_IMPL(__imp__sub_8311D098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311d0d8
	if (!ctx.cr6.eq) goto loc_8311D0D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311D0CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d0cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D0CC;
loc_8311D0D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,6004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6004);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311d0f8
	if (ctx.cr6.eq) goto loc_8311D0F8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,1501
	ctx.r11.s64 = 1501;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311D0F8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14452);
	// stw r11,6004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6004, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D108"))) PPC_WEAK_FUNC(sub_8311D108);
PPC_FUNC_IMPL(__imp__sub_8311D108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311d148
	if (!ctx.cr6.eq) goto loc_8311D148;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311D13C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d13c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D13C;
loc_8311D148:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 568);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311d168
	if (ctx.cr6.eq) goto loc_8311D168;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,142
	ctx.r11.s64 = 142;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311D168:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14448);
	// stw r11,568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D178"))) PPC_WEAK_FUNC(sub_8311D178);
PPC_FUNC_IMPL(__imp__sub_8311D178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311d1b8
	if (!ctx.cr6.eq) goto loc_8311D1B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311D1AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d1ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D1AC;
loc_8311D1B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,812(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 812);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311d1d8
	if (ctx.cr6.eq) goto loc_8311D1D8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,203
	ctx.r11.s64 = 203;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311D1D8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14444);
	// stw r11,812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 812, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D1E8"))) PPC_WEAK_FUNC(sub_8311D1E8);
PPC_FUNC_IMPL(__imp__sub_8311D1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311d228
	if (!ctx.cr6.eq) goto loc_8311D228;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311D21C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d21c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D21C;
loc_8311D228:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1148);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311d248
	if (ctx.cr6.eq) goto loc_8311D248;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,287
	ctx.r11.s64 = 287;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311D248:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14440);
	// stw r11,1148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1148, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D258"))) PPC_WEAK_FUNC(sub_8311D258);
PPC_FUNC_IMPL(__imp__sub_8311D258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311d298
	if (!ctx.cr6.eq) goto loc_8311D298;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311D28C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d28c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D28C;
loc_8311D298:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1152);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311d2b8
	if (ctx.cr6.eq) goto loc_8311D2B8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,288
	ctx.r11.s64 = 288;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311D2B8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14436);
	// stw r11,1152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D2C8"))) PPC_WEAK_FUNC(sub_8311D2C8);
PPC_FUNC_IMPL(__imp__sub_8311D2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311d308
	if (!ctx.cr6.eq) goto loc_8311D308;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311D2FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d2fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D2FC;
loc_8311D308:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1156);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311d328
	if (ctx.cr6.eq) goto loc_8311D328;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,289
	ctx.r11.s64 = 289;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311D328:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14432);
	// stw r11,1156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1156, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D338"))) PPC_WEAK_FUNC(sub_8311D338);
PPC_FUNC_IMPL(__imp__sub_8311D338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311d378
	if (!ctx.cr6.eq) goto loc_8311D378;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311D36C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d36c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D36C;
loc_8311D378:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1160);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311d398
	if (ctx.cr6.eq) goto loc_8311D398;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,290
	ctx.r11.s64 = 290;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311D398:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14428);
	// stw r11,1160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1160, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D3A8"))) PPC_WEAK_FUNC(sub_8311D3A8);
PPC_FUNC_IMPL(__imp__sub_8311D3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311d3e8
	if (!ctx.cr6.eq) goto loc_8311D3E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311D3DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d3dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D3DC;
loc_8311D3E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1164(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1164);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311d408
	if (ctx.cr6.eq) goto loc_8311D408;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,291
	ctx.r11.s64 = 291;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311D408:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14424);
	// stw r11,1164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1164, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D418"))) PPC_WEAK_FUNC(sub_8311D418);
PPC_FUNC_IMPL(__imp__sub_8311D418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311d458
	if (!ctx.cr6.eq) goto loc_8311D458;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311D44C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d44c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D44C;
loc_8311D458:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1264);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311d478
	if (ctx.cr6.eq) goto loc_8311D478;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,316
	ctx.r11.s64 = 316;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311D478:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14420);
	// stw r11,1264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D488"))) PPC_WEAK_FUNC(sub_8311D488);
PPC_FUNC_IMPL(__imp__sub_8311D488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311d4c8
	if (!ctx.cr6.eq) goto loc_8311D4C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311D4BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d4bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D4BC;
loc_8311D4C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1268);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311d4e8
	if (ctx.cr6.eq) goto loc_8311D4E8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,317
	ctx.r11.s64 = 317;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311D4E8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14416);
	// stw r11,1268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D4F8"))) PPC_WEAK_FUNC(sub_8311D4F8);
PPC_FUNC_IMPL(__imp__sub_8311D4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311d538
	if (!ctx.cr6.eq) goto loc_8311D538;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311D52C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d52c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D52C;
loc_8311D538:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1272);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311d558
	if (ctx.cr6.eq) goto loc_8311D558;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,318
	ctx.r11.s64 = 318;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311D558:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14412);
	// stw r11,1272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D568"))) PPC_WEAK_FUNC(sub_8311D568);
PPC_FUNC_IMPL(__imp__sub_8311D568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311d5a8
	if (!ctx.cr6.eq) goto loc_8311D5A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311D59C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d59c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D59C;
loc_8311D5A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1276);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311d5c8
	if (ctx.cr6.eq) goto loc_8311D5C8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,319
	ctx.r11.s64 = 319;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311D5C8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14408);
	// stw r11,1276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D5D8"))) PPC_WEAK_FUNC(sub_8311D5D8);
PPC_FUNC_IMPL(__imp__sub_8311D5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311d618
	if (!ctx.cr6.eq) goto loc_8311D618;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311D60C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d60c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D60C;
loc_8311D618:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,916(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 916);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311d638
	if (ctx.cr6.eq) goto loc_8311D638;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,229
	ctx.r11.s64 = 229;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311D638:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14404);
	// stw r11,916(r10)
	PPC_STORE_U32(ctx.r10.u32 + 916, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D648"))) PPC_WEAK_FUNC(sub_8311D648);
PPC_FUNC_IMPL(__imp__sub_8311D648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311d688
	if (!ctx.cr6.eq) goto loc_8311D688;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311D67C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d67c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D67C;
loc_8311D688:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,920(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 920);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311d6a8
	if (ctx.cr6.eq) goto loc_8311D6A8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,230
	ctx.r11.s64 = 230;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311D6A8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14400);
	// stw r11,920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 920, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D6B8"))) PPC_WEAK_FUNC(sub_8311D6B8);
PPC_FUNC_IMPL(__imp__sub_8311D6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311D6E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d6e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D6E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D6F8"))) PPC_WEAK_FUNC(sub_8311D6F8);
PPC_FUNC_IMPL(__imp__sub_8311D6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311D728:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D738"))) PPC_WEAK_FUNC(sub_8311D738);
PPC_FUNC_IMPL(__imp__sub_8311D738) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311D768:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D778"))) PPC_WEAK_FUNC(sub_8311D778);
PPC_FUNC_IMPL(__imp__sub_8311D778) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311D7A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d7a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D7A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D7B8"))) PPC_WEAK_FUNC(sub_8311D7B8);
PPC_FUNC_IMPL(__imp__sub_8311D7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311D7E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d7e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D7E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D7F8"))) PPC_WEAK_FUNC(sub_8311D7F8);
PPC_FUNC_IMPL(__imp__sub_8311D7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311D828:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D828;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D838"))) PPC_WEAK_FUNC(sub_8311D838);
PPC_FUNC_IMPL(__imp__sub_8311D838) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311D868:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d868
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D868;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D878"))) PPC_WEAK_FUNC(sub_8311D878);
PPC_FUNC_IMPL(__imp__sub_8311D878) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311D8A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d8a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D8A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D8B8"))) PPC_WEAK_FUNC(sub_8311D8B8);
PPC_FUNC_IMPL(__imp__sub_8311D8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311D8E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d8e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D8E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D8F8"))) PPC_WEAK_FUNC(sub_8311D8F8);
PPC_FUNC_IMPL(__imp__sub_8311D8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311D928:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D938"))) PPC_WEAK_FUNC(sub_8311D938);
PPC_FUNC_IMPL(__imp__sub_8311D938) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311D968:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D978"))) PPC_WEAK_FUNC(sub_8311D978);
PPC_FUNC_IMPL(__imp__sub_8311D978) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311D9A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d9a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D9A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D9B8"))) PPC_WEAK_FUNC(sub_8311D9B8);
PPC_FUNC_IMPL(__imp__sub_8311D9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311D9E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311d9e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311D9E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D9F8"))) PPC_WEAK_FUNC(sub_8311D9F8);
PPC_FUNC_IMPL(__imp__sub_8311D9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DA28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311da28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DA28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DA38"))) PPC_WEAK_FUNC(sub_8311DA38);
PPC_FUNC_IMPL(__imp__sub_8311DA38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DA68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311da68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DA68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DA78"))) PPC_WEAK_FUNC(sub_8311DA78);
PPC_FUNC_IMPL(__imp__sub_8311DA78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DAA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311daa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DAA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DAB8"))) PPC_WEAK_FUNC(sub_8311DAB8);
PPC_FUNC_IMPL(__imp__sub_8311DAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DAE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311dae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DAE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DAF8"))) PPC_WEAK_FUNC(sub_8311DAF8);
PPC_FUNC_IMPL(__imp__sub_8311DAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DB28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311db28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DB28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DB38"))) PPC_WEAK_FUNC(sub_8311DB38);
PPC_FUNC_IMPL(__imp__sub_8311DB38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DB68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311db68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DB68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DB78"))) PPC_WEAK_FUNC(sub_8311DB78);
PPC_FUNC_IMPL(__imp__sub_8311DB78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DBA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311dba8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DBA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DBB8"))) PPC_WEAK_FUNC(sub_8311DBB8);
PPC_FUNC_IMPL(__imp__sub_8311DBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DBE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311dbe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DBE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DBF8"))) PPC_WEAK_FUNC(sub_8311DBF8);
PPC_FUNC_IMPL(__imp__sub_8311DBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DC28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311dc28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DC28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DC38"))) PPC_WEAK_FUNC(sub_8311DC38);
PPC_FUNC_IMPL(__imp__sub_8311DC38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DC68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311dc68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DC68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DC78"))) PPC_WEAK_FUNC(sub_8311DC78);
PPC_FUNC_IMPL(__imp__sub_8311DC78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DCA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311dca8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DCA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DCB8"))) PPC_WEAK_FUNC(sub_8311DCB8);
PPC_FUNC_IMPL(__imp__sub_8311DCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DCE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311dce8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DCE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DCF8"))) PPC_WEAK_FUNC(sub_8311DCF8);
PPC_FUNC_IMPL(__imp__sub_8311DCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DD28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311dd28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DD28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DD38"))) PPC_WEAK_FUNC(sub_8311DD38);
PPC_FUNC_IMPL(__imp__sub_8311DD38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DD68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311dd68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DD68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DD78"))) PPC_WEAK_FUNC(sub_8311DD78);
PPC_FUNC_IMPL(__imp__sub_8311DD78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DDA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311dda8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DDA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DDB8"))) PPC_WEAK_FUNC(sub_8311DDB8);
PPC_FUNC_IMPL(__imp__sub_8311DDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DDE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311dde8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DDE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DDF8"))) PPC_WEAK_FUNC(sub_8311DDF8);
PPC_FUNC_IMPL(__imp__sub_8311DDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DE28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311de28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DE28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DE38"))) PPC_WEAK_FUNC(sub_8311DE38);
PPC_FUNC_IMPL(__imp__sub_8311DE38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DE68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311de68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DE68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DE78"))) PPC_WEAK_FUNC(sub_8311DE78);
PPC_FUNC_IMPL(__imp__sub_8311DE78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DEA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311dea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DEA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DEB8"))) PPC_WEAK_FUNC(sub_8311DEB8);
PPC_FUNC_IMPL(__imp__sub_8311DEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DEE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311dee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DEE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DEF8"))) PPC_WEAK_FUNC(sub_8311DEF8);
PPC_FUNC_IMPL(__imp__sub_8311DEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DF28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311df28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DF28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DF38"))) PPC_WEAK_FUNC(sub_8311DF38);
PPC_FUNC_IMPL(__imp__sub_8311DF38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DF68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311df68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DF68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DF78"))) PPC_WEAK_FUNC(sub_8311DF78);
PPC_FUNC_IMPL(__imp__sub_8311DF78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DFA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311dfa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DFA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DFB8"))) PPC_WEAK_FUNC(sub_8311DFB8);
PPC_FUNC_IMPL(__imp__sub_8311DFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311DFE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311dfe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311DFE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311DFF8"))) PPC_WEAK_FUNC(sub_8311DFF8);
PPC_FUNC_IMPL(__imp__sub_8311DFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e038
	if (!ctx.cr6.eq) goto loc_8311E038;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E02C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e02c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E02C;
loc_8311E038:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1080(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1080);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e058
	if (ctx.cr6.eq) goto loc_8311E058;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,270
	ctx.r11.s64 = 270;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E058:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14248);
	// stw r11,1080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1080, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E068"))) PPC_WEAK_FUNC(sub_8311E068);
PPC_FUNC_IMPL(__imp__sub_8311E068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e0a8
	if (!ctx.cr6.eq) goto loc_8311E0A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E09C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e09c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E09C;
loc_8311E0A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1084(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1084);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e0c8
	if (ctx.cr6.eq) goto loc_8311E0C8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,271
	ctx.r11.s64 = 271;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E0C8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14244);
	// stw r11,1084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1084, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E0D8"))) PPC_WEAK_FUNC(sub_8311E0D8);
PPC_FUNC_IMPL(__imp__sub_8311E0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e118
	if (!ctx.cr6.eq) goto loc_8311E118;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E10C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e10c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E10C;
loc_8311E118:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e138
	if (ctx.cr6.eq) goto loc_8311E138;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E138:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14240);
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E148"))) PPC_WEAK_FUNC(sub_8311E148);
PPC_FUNC_IMPL(__imp__sub_8311E148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e188
	if (!ctx.cr6.eq) goto loc_8311E188;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E17C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e17c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E17C;
loc_8311E188:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 448);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e1a8
	if (ctx.cr6.eq) goto loc_8311E1A8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,112
	ctx.r11.s64 = 112;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E1A8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14236);
	// stw r11,448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 448, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E1B8"))) PPC_WEAK_FUNC(sub_8311E1B8);
PPC_FUNC_IMPL(__imp__sub_8311E1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e1f8
	if (!ctx.cr6.eq) goto loc_8311E1F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E1EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e1ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E1EC;
loc_8311E1F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,672(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 672);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e218
	if (ctx.cr6.eq) goto loc_8311E218;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,168
	ctx.r11.s64 = 168;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E218:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14232);
	// stw r11,672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 672, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E228"))) PPC_WEAK_FUNC(sub_8311E228);
PPC_FUNC_IMPL(__imp__sub_8311E228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e268
	if (!ctx.cr6.eq) goto loc_8311E268;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E25C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e25c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E25C;
loc_8311E268:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,460(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 460);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e288
	if (ctx.cr6.eq) goto loc_8311E288;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,115
	ctx.r11.s64 = 115;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E288:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14228);
	// stw r11,460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 460, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E298"))) PPC_WEAK_FUNC(sub_8311E298);
PPC_FUNC_IMPL(__imp__sub_8311E298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e2d8
	if (!ctx.cr6.eq) goto loc_8311E2D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E2CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e2cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E2CC;
loc_8311E2D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 464);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e2f8
	if (ctx.cr6.eq) goto loc_8311E2F8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,116
	ctx.r11.s64 = 116;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E2F8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// stw r11,464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 464, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E308"))) PPC_WEAK_FUNC(sub_8311E308);
PPC_FUNC_IMPL(__imp__sub_8311E308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e348
	if (!ctx.cr6.eq) goto loc_8311E348;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E33C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e33c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E33C;
loc_8311E348:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,480(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 480);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e368
	if (ctx.cr6.eq) goto loc_8311E368;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,120
	ctx.r11.s64 = 120;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E368:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14220);
	// stw r11,480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 480, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E378"))) PPC_WEAK_FUNC(sub_8311E378);
PPC_FUNC_IMPL(__imp__sub_8311E378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e3b8
	if (!ctx.cr6.eq) goto loc_8311E3B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E3AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e3ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E3AC;
loc_8311E3B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,484(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 484);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e3d8
	if (ctx.cr6.eq) goto loc_8311E3D8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,121
	ctx.r11.s64 = 121;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E3D8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14216);
	// stw r11,484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 484, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E3E8"))) PPC_WEAK_FUNC(sub_8311E3E8);
PPC_FUNC_IMPL(__imp__sub_8311E3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e428
	if (!ctx.cr6.eq) goto loc_8311E428;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E41C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e41c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E41C;
loc_8311E428:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,488(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 488);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e448
	if (ctx.cr6.eq) goto loc_8311E448;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,122
	ctx.r11.s64 = 122;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E448:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14212);
	// stw r11,488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 488, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E458"))) PPC_WEAK_FUNC(sub_8311E458);
PPC_FUNC_IMPL(__imp__sub_8311E458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e498
	if (!ctx.cr6.eq) goto loc_8311E498;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E48C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e48c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E48C;
loc_8311E498:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,492(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 492);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e4b8
	if (ctx.cr6.eq) goto loc_8311E4B8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,123
	ctx.r11.s64 = 123;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E4B8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14208);
	// stw r11,492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 492, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E4C8"))) PPC_WEAK_FUNC(sub_8311E4C8);
PPC_FUNC_IMPL(__imp__sub_8311E4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e508
	if (!ctx.cr6.eq) goto loc_8311E508;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E4FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e4fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E4FC;
loc_8311E508:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,496(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 496);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e528
	if (ctx.cr6.eq) goto loc_8311E528;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,124
	ctx.r11.s64 = 124;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E528:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14204);
	// stw r11,496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 496, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E538"))) PPC_WEAK_FUNC(sub_8311E538);
PPC_FUNC_IMPL(__imp__sub_8311E538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e578
	if (!ctx.cr6.eq) goto loc_8311E578;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E56C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e56c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E56C;
loc_8311E578:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1288);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e598
	if (ctx.cr6.eq) goto loc_8311E598;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,322
	ctx.r11.s64 = 322;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E598:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14200);
	// stw r11,1288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1288, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E5A8"))) PPC_WEAK_FUNC(sub_8311E5A8);
PPC_FUNC_IMPL(__imp__sub_8311E5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e5e8
	if (!ctx.cr6.eq) goto loc_8311E5E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E5DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e5dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E5DC;
loc_8311E5E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1292);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e608
	if (ctx.cr6.eq) goto loc_8311E608;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,323
	ctx.r11.s64 = 323;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E608:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14196);
	// stw r11,1292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E618"))) PPC_WEAK_FUNC(sub_8311E618);
PPC_FUNC_IMPL(__imp__sub_8311E618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e658
	if (!ctx.cr6.eq) goto loc_8311E658;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E64C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e64c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E64C;
loc_8311E658:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1296);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e678
	if (ctx.cr6.eq) goto loc_8311E678;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,324
	ctx.r11.s64 = 324;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E678:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14192);
	// stw r11,1296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E688"))) PPC_WEAK_FUNC(sub_8311E688);
PPC_FUNC_IMPL(__imp__sub_8311E688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e6c8
	if (!ctx.cr6.eq) goto loc_8311E6C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E6BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e6bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E6BC;
loc_8311E6C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 500);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e6e8
	if (ctx.cr6.eq) goto loc_8311E6E8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,125
	ctx.r11.s64 = 125;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E6E8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14188);
	// stw r11,500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 500, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E6F8"))) PPC_WEAK_FUNC(sub_8311E6F8);
PPC_FUNC_IMPL(__imp__sub_8311E6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e738
	if (!ctx.cr6.eq) goto loc_8311E738;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E72C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e72c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E72C;
loc_8311E738:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 504);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e758
	if (ctx.cr6.eq) goto loc_8311E758;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E758:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14184);
	// stw r11,504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 504, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E768"))) PPC_WEAK_FUNC(sub_8311E768);
PPC_FUNC_IMPL(__imp__sub_8311E768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e7a8
	if (!ctx.cr6.eq) goto loc_8311E7A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E79C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e79c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E79C;
loc_8311E7A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 508);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e7c8
	if (ctx.cr6.eq) goto loc_8311E7C8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,127
	ctx.r11.s64 = 127;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E7C8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14180);
	// stw r11,508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 508, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E7D8"))) PPC_WEAK_FUNC(sub_8311E7D8);
PPC_FUNC_IMPL(__imp__sub_8311E7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e818
	if (!ctx.cr6.eq) goto loc_8311E818;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E80C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e80c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E80C;
loc_8311E818:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,512(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 512);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e838
	if (ctx.cr6.eq) goto loc_8311E838;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E838:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14176);
	// stw r11,512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 512, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E848"))) PPC_WEAK_FUNC(sub_8311E848);
PPC_FUNC_IMPL(__imp__sub_8311E848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e888
	if (!ctx.cr6.eq) goto loc_8311E888;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E87C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e87c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E87C;
loc_8311E888:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,936(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 936);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e8a8
	if (ctx.cr6.eq) goto loc_8311E8A8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,234
	ctx.r11.s64 = 234;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E8A8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14172);
	// stw r11,936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 936, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E8B8"))) PPC_WEAK_FUNC(sub_8311E8B8);
PPC_FUNC_IMPL(__imp__sub_8311E8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e8f8
	if (!ctx.cr6.eq) goto loc_8311E8F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E8EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e8ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E8EC;
loc_8311E8F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,940(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 940);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e918
	if (ctx.cr6.eq) goto loc_8311E918;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,235
	ctx.r11.s64 = 235;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E918:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14168);
	// stw r11,940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 940, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E928"))) PPC_WEAK_FUNC(sub_8311E928);
PPC_FUNC_IMPL(__imp__sub_8311E928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e968
	if (!ctx.cr6.eq) goto loc_8311E968;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E95C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e95c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E95C;
loc_8311E968:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,952(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 952);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e988
	if (ctx.cr6.eq) goto loc_8311E988;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,238
	ctx.r11.s64 = 238;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E988:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14164);
	// stw r11,952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 952, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E998"))) PPC_WEAK_FUNC(sub_8311E998);
PPC_FUNC_IMPL(__imp__sub_8311E998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311e9d8
	if (!ctx.cr6.eq) goto loc_8311E9D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311E9CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311e9cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311E9CC;
loc_8311E9D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 944);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311e9f8
	if (ctx.cr6.eq) goto loc_8311E9F8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,236
	ctx.r11.s64 = 236;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311E9F8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14160);
	// stw r11,944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 944, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311EA08"))) PPC_WEAK_FUNC(sub_8311EA08);
PPC_FUNC_IMPL(__imp__sub_8311EA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311ea48
	if (!ctx.cr6.eq) goto loc_8311EA48;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311EA3C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ea3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311EA3C;
loc_8311EA48:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,948(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 948);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ea68
	if (ctx.cr6.eq) goto loc_8311EA68;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,237
	ctx.r11.s64 = 237;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311EA68:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14156);
	// stw r11,948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 948, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311EA78"))) PPC_WEAK_FUNC(sub_8311EA78);
PPC_FUNC_IMPL(__imp__sub_8311EA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311eab8
	if (!ctx.cr6.eq) goto loc_8311EAB8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311EAAC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311eaac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311EAAC;
loc_8311EAB8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,804(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 804);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ead8
	if (ctx.cr6.eq) goto loc_8311EAD8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,201
	ctx.r11.s64 = 201;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311EAD8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14152);
	// stw r11,804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 804, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311EAE8"))) PPC_WEAK_FUNC(sub_8311EAE8);
PPC_FUNC_IMPL(__imp__sub_8311EAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311eb28
	if (!ctx.cr6.eq) goto loc_8311EB28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311EB1C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311eb1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311EB1C;
loc_8311EB28:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 808);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311eb48
	if (ctx.cr6.eq) goto loc_8311EB48;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,202
	ctx.r11.s64 = 202;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311EB48:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14148);
	// stw r11,808(r10)
	PPC_STORE_U32(ctx.r10.u32 + 808, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311EB58"))) PPC_WEAK_FUNC(sub_8311EB58);
PPC_FUNC_IMPL(__imp__sub_8311EB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311eb98
	if (!ctx.cr6.eq) goto loc_8311EB98;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311EB8C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311eb8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311EB8C;
loc_8311EB98:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1016(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1016);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ebb8
	if (ctx.cr6.eq) goto loc_8311EBB8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,254
	ctx.r11.s64 = 254;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311EBB8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14144);
	// stw r11,1016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1016, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311EBC8"))) PPC_WEAK_FUNC(sub_8311EBC8);
PPC_FUNC_IMPL(__imp__sub_8311EBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311ec08
	if (!ctx.cr6.eq) goto loc_8311EC08;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311EBFC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ebfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311EBFC;
loc_8311EC08:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1020(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1020);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ec28
	if (ctx.cr6.eq) goto loc_8311EC28;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311EC28:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14140);
	// stw r11,1020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1020, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311EC38"))) PPC_WEAK_FUNC(sub_8311EC38);
PPC_FUNC_IMPL(__imp__sub_8311EC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311ec78
	if (!ctx.cr6.eq) goto loc_8311EC78;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311EC6C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ec6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311EC6C;
loc_8311EC78:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 456);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ec98
	if (ctx.cr6.eq) goto loc_8311EC98;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,114
	ctx.r11.s64 = 114;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311EC98:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14136);
	// stw r11,456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 456, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311ECA8"))) PPC_WEAK_FUNC(sub_8311ECA8);
PPC_FUNC_IMPL(__imp__sub_8311ECA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311ece8
	if (!ctx.cr6.eq) goto loc_8311ECE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311ECDC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ecdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311ECDC;
loc_8311ECE8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,476(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 476);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ed08
	if (ctx.cr6.eq) goto loc_8311ED08;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,119
	ctx.r11.s64 = 119;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311ED08:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14132);
	// stw r11,476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 476, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311ED18"))) PPC_WEAK_FUNC(sub_8311ED18);
PPC_FUNC_IMPL(__imp__sub_8311ED18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311ED48:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ed48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311ED48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311ED58"))) PPC_WEAK_FUNC(sub_8311ED58);
PPC_FUNC_IMPL(__imp__sub_8311ED58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311ED88:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ed88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311ED88;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311ED98"))) PPC_WEAK_FUNC(sub_8311ED98);
PPC_FUNC_IMPL(__imp__sub_8311ED98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311edd8
	if (!ctx.cr6.eq) goto loc_8311EDD8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311EDCC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311edcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311EDCC;
loc_8311EDD8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,932(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 932);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311edf8
	if (ctx.cr6.eq) goto loc_8311EDF8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,233
	ctx.r11.s64 = 233;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311EDF8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14120);
	// stw r11,932(r10)
	PPC_STORE_U32(ctx.r10.u32 + 932, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311EE08"))) PPC_WEAK_FUNC(sub_8311EE08);
PPC_FUNC_IMPL(__imp__sub_8311EE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311ee48
	if (!ctx.cr6.eq) goto loc_8311EE48;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311EE3C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ee3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311EE3C;
loc_8311EE48:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 924);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ee68
	if (ctx.cr6.eq) goto loc_8311EE68;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,231
	ctx.r11.s64 = 231;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311EE68:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14116);
	// stw r11,924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 924, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311EE78"))) PPC_WEAK_FUNC(sub_8311EE78);
PPC_FUNC_IMPL(__imp__sub_8311EE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311eeb8
	if (!ctx.cr6.eq) goto loc_8311EEB8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311EEAC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311eeac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311EEAC;
loc_8311EEB8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,928(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 928);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311eed8
	if (ctx.cr6.eq) goto loc_8311EED8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,232
	ctx.r11.s64 = 232;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311EED8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14112);
	// stw r11,928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 928, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311EEE8"))) PPC_WEAK_FUNC(sub_8311EEE8);
PPC_FUNC_IMPL(__imp__sub_8311EEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311EF18:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ef18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311EF18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311EF28"))) PPC_WEAK_FUNC(sub_8311EF28);
PPC_FUNC_IMPL(__imp__sub_8311EF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311ef68
	if (!ctx.cr6.eq) goto loc_8311EF68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311EF5C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ef5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311EF5C;
loc_8311EF68:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 384);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ef88
	if (ctx.cr6.eq) goto loc_8311EF88;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,96
	ctx.r11.s64 = 96;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311EF88:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14104);
	// stw r11,384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311EF98"))) PPC_WEAK_FUNC(sub_8311EF98);
PPC_FUNC_IMPL(__imp__sub_8311EF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311efd8
	if (!ctx.cr6.eq) goto loc_8311EFD8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311EFCC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311efcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311EFCC;
loc_8311EFD8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311eff8
	if (ctx.cr6.eq) goto loc_8311EFF8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,97
	ctx.r11.s64 = 97;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311EFF8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14100);
	// stw r11,388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 388, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F008"))) PPC_WEAK_FUNC(sub_8311F008);
PPC_FUNC_IMPL(__imp__sub_8311F008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f048
	if (!ctx.cr6.eq) goto loc_8311F048;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F03C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f03c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F03C;
loc_8311F048:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 392);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f068
	if (ctx.cr6.eq) goto loc_8311F068;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,98
	ctx.r11.s64 = 98;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F068:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14096);
	// stw r11,392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 392, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F078"))) PPC_WEAK_FUNC(sub_8311F078);
PPC_FUNC_IMPL(__imp__sub_8311F078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f0b8
	if (!ctx.cr6.eq) goto loc_8311F0B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F0AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f0ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F0AC;
loc_8311F0B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,396(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 396);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f0d8
	if (ctx.cr6.eq) goto loc_8311F0D8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,99
	ctx.r11.s64 = 99;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F0D8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14092);
	// stw r11,396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F0E8"))) PPC_WEAK_FUNC(sub_8311F0E8);
PPC_FUNC_IMPL(__imp__sub_8311F0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f128
	if (!ctx.cr6.eq) goto loc_8311F128;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F11C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f11c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F11C;
loc_8311F128:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 400);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f148
	if (ctx.cr6.eq) goto loc_8311F148;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F148:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14088);
	// stw r11,400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 400, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F158"))) PPC_WEAK_FUNC(sub_8311F158);
PPC_FUNC_IMPL(__imp__sub_8311F158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f198
	if (!ctx.cr6.eq) goto loc_8311F198;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F18C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f18c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F18C;
loc_8311F198:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 404);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f1b8
	if (ctx.cr6.eq) goto loc_8311F1B8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,101
	ctx.r11.s64 = 101;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F1B8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14084);
	// stw r11,404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 404, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F1C8"))) PPC_WEAK_FUNC(sub_8311F1C8);
PPC_FUNC_IMPL(__imp__sub_8311F1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f208
	if (!ctx.cr6.eq) goto loc_8311F208;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F1FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f1fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F1FC;
loc_8311F208:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 408);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f228
	if (ctx.cr6.eq) goto loc_8311F228;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,102
	ctx.r11.s64 = 102;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F228:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14080);
	// stw r11,408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 408, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F238"))) PPC_WEAK_FUNC(sub_8311F238);
PPC_FUNC_IMPL(__imp__sub_8311F238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f278
	if (!ctx.cr6.eq) goto loc_8311F278;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F26C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f26c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F26C;
loc_8311F278:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 412);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f298
	if (ctx.cr6.eq) goto loc_8311F298;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,103
	ctx.r11.s64 = 103;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F298:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14076);
	// stw r11,412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F2A8"))) PPC_WEAK_FUNC(sub_8311F2A8);
PPC_FUNC_IMPL(__imp__sub_8311F2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f2e8
	if (!ctx.cr6.eq) goto loc_8311F2E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F2DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f2dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F2DC;
loc_8311F2E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 416);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f308
	if (ctx.cr6.eq) goto loc_8311F308;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,104
	ctx.r11.s64 = 104;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F308:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14072);
	// stw r11,416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F318"))) PPC_WEAK_FUNC(sub_8311F318);
PPC_FUNC_IMPL(__imp__sub_8311F318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f358
	if (!ctx.cr6.eq) goto loc_8311F358;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F34C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f34c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F34C;
loc_8311F358:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,420(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 420);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f378
	if (ctx.cr6.eq) goto loc_8311F378;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,105
	ctx.r11.s64 = 105;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F378:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14068);
	// stw r11,420(r10)
	PPC_STORE_U32(ctx.r10.u32 + 420, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F388"))) PPC_WEAK_FUNC(sub_8311F388);
PPC_FUNC_IMPL(__imp__sub_8311F388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f3c8
	if (!ctx.cr6.eq) goto loc_8311F3C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F3BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f3bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F3BC;
loc_8311F3C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,424(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 424);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f3e8
	if (ctx.cr6.eq) goto loc_8311F3E8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,106
	ctx.r11.s64 = 106;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F3E8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14064);
	// stw r11,424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 424, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F3F8"))) PPC_WEAK_FUNC(sub_8311F3F8);
PPC_FUNC_IMPL(__imp__sub_8311F3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f438
	if (!ctx.cr6.eq) goto loc_8311F438;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F42C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f42c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F42C;
loc_8311F438:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,428(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f458
	if (ctx.cr6.eq) goto loc_8311F458;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,107
	ctx.r11.s64 = 107;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F458:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14060);
	// stw r11,428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F468"))) PPC_WEAK_FUNC(sub_8311F468);
PPC_FUNC_IMPL(__imp__sub_8311F468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f4a8
	if (!ctx.cr6.eq) goto loc_8311F4A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F49C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f49c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F49C;
loc_8311F4A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f4c8
	if (ctx.cr6.eq) goto loc_8311F4C8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,108
	ctx.r11.s64 = 108;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F4C8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14056);
	// stw r11,432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 432, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F4D8"))) PPC_WEAK_FUNC(sub_8311F4D8);
PPC_FUNC_IMPL(__imp__sub_8311F4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f518
	if (!ctx.cr6.eq) goto loc_8311F518;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F50C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f50c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F50C;
loc_8311F518:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,436(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 436);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f538
	if (ctx.cr6.eq) goto loc_8311F538;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,109
	ctx.r11.s64 = 109;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F538:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14052);
	// stw r11,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F548"))) PPC_WEAK_FUNC(sub_8311F548);
PPC_FUNC_IMPL(__imp__sub_8311F548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f588
	if (!ctx.cr6.eq) goto loc_8311F588;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F57C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f57c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F57C;
loc_8311F588:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 440);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f5a8
	if (ctx.cr6.eq) goto loc_8311F5A8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,110
	ctx.r11.s64 = 110;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F5A8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14048);
	// stw r11,440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 440, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F5B8"))) PPC_WEAK_FUNC(sub_8311F5B8);
PPC_FUNC_IMPL(__imp__sub_8311F5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f5f8
	if (!ctx.cr6.eq) goto loc_8311F5F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F5EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f5ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F5EC;
loc_8311F5F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,444(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 444);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f618
	if (ctx.cr6.eq) goto loc_8311F618;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,111
	ctx.r11.s64 = 111;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F618:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14044);
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F628"))) PPC_WEAK_FUNC(sub_8311F628);
PPC_FUNC_IMPL(__imp__sub_8311F628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f668
	if (!ctx.cr6.eq) goto loc_8311F668;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F65C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f65c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F65C;
loc_8311F668:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f688
	if (ctx.cr6.eq) goto loc_8311F688;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F688:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14040);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F698"))) PPC_WEAK_FUNC(sub_8311F698);
PPC_FUNC_IMPL(__imp__sub_8311F698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f6d8
	if (!ctx.cr6.eq) goto loc_8311F6D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F6CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f6cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F6CC;
loc_8311F6D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1032);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f6f8
	if (ctx.cr6.eq) goto loc_8311F6F8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,258
	ctx.r11.s64 = 258;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F6F8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14036);
	// stw r11,1032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1032, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F708"))) PPC_WEAK_FUNC(sub_8311F708);
PPC_FUNC_IMPL(__imp__sub_8311F708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f748
	if (!ctx.cr6.eq) goto loc_8311F748;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F73C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f73c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F73C;
loc_8311F748:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,452(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 452);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f768
	if (ctx.cr6.eq) goto loc_8311F768;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,113
	ctx.r11.s64 = 113;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F768:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14032);
	// stw r11,452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 452, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F778"))) PPC_WEAK_FUNC(sub_8311F778);
PPC_FUNC_IMPL(__imp__sub_8311F778) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311F7A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f7a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F7A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F7B8"))) PPC_WEAK_FUNC(sub_8311F7B8);
PPC_FUNC_IMPL(__imp__sub_8311F7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311F7E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f7e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F7E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F7F8"))) PPC_WEAK_FUNC(sub_8311F7F8);
PPC_FUNC_IMPL(__imp__sub_8311F7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311F828:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F828;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F838"))) PPC_WEAK_FUNC(sub_8311F838);
PPC_FUNC_IMPL(__imp__sub_8311F838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f878
	if (!ctx.cr6.eq) goto loc_8311F878;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F86C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f86c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F86C;
loc_8311F878:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,468(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 468);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f898
	if (ctx.cr6.eq) goto loc_8311F898;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,117
	ctx.r11.s64 = 117;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F898:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14016);
	// stw r11,468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 468, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F8A8"))) PPC_WEAK_FUNC(sub_8311F8A8);
PPC_FUNC_IMPL(__imp__sub_8311F8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f8e8
	if (!ctx.cr6.eq) goto loc_8311F8E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F8DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f8dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F8DC;
loc_8311F8E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f908
	if (ctx.cr6.eq) goto loc_8311F908;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,118
	ctx.r11.s64 = 118;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F908:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14012);
	// stw r11,472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 472, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F918"))) PPC_WEAK_FUNC(sub_8311F918);
PPC_FUNC_IMPL(__imp__sub_8311F918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311f958
	if (!ctx.cr6.eq) goto loc_8311F958;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311F94C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f94c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F94C;
loc_8311F958:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,2144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311f978
	if (ctx.cr6.eq) goto loc_8311F978;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,536
	ctx.r11.s64 = 536;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311F978:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14008);
	// stw r11,2144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2144, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F988"))) PPC_WEAK_FUNC(sub_8311F988);
PPC_FUNC_IMPL(__imp__sub_8311F988) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311F9B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f9b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F9B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F9C8"))) PPC_WEAK_FUNC(sub_8311F9C8);
PPC_FUNC_IMPL(__imp__sub_8311F9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311F9F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311f9f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311F9F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FA08"))) PPC_WEAK_FUNC(sub_8311FA08);
PPC_FUNC_IMPL(__imp__sub_8311FA08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311FA38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311fa38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311FA38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FA48"))) PPC_WEAK_FUNC(sub_8311FA48);
PPC_FUNC_IMPL(__imp__sub_8311FA48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311FA78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311fa78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311FA78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FA88"))) PPC_WEAK_FUNC(sub_8311FA88);
PPC_FUNC_IMPL(__imp__sub_8311FA88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311FAB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311fab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311FAB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FAC8"))) PPC_WEAK_FUNC(sub_8311FAC8);
PPC_FUNC_IMPL(__imp__sub_8311FAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311FAF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311faf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311FAF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FB08"))) PPC_WEAK_FUNC(sub_8311FB08);
PPC_FUNC_IMPL(__imp__sub_8311FB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311fb48
	if (!ctx.cr6.eq) goto loc_8311FB48;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311FB3C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311fb3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311FB3C;
loc_8311FB48:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1124);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311fb68
	if (ctx.cr6.eq) goto loc_8311FB68;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,281
	ctx.r11.s64 = 281;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311FB68:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-13980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13980);
	// stw r11,1124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FB78"))) PPC_WEAK_FUNC(sub_8311FB78);
PPC_FUNC_IMPL(__imp__sub_8311FB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311fbb8
	if (!ctx.cr6.eq) goto loc_8311FBB8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311FBAC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311fbac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311FBAC;
loc_8311FBB8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,6664(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6664);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311fbd8
	if (ctx.cr6.eq) goto loc_8311FBD8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,1666
	ctx.r11.s64 = 1666;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311FBD8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-13976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13976);
	// stw r11,6664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6664, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FBE8"))) PPC_WEAK_FUNC(sub_8311FBE8);
PPC_FUNC_IMPL(__imp__sub_8311FBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311FC18:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311fc18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311FC18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FC28"))) PPC_WEAK_FUNC(sub_8311FC28);
PPC_FUNC_IMPL(__imp__sub_8311FC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311fc68
	if (!ctx.cr6.eq) goto loc_8311FC68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311FC5C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311fc5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311FC5C;
loc_8311FC68:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,1136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1136);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311fc88
	if (ctx.cr6.eq) goto loc_8311FC88;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,284
	ctx.r11.s64 = 284;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311FC88:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-13968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13968);
	// stw r11,1136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FC98"))) PPC_WEAK_FUNC(sub_8311FC98);
PPC_FUNC_IMPL(__imp__sub_8311FC98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311FCC8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311fcc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311FCC8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FCD8"))) PPC_WEAK_FUNC(sub_8311FCD8);
PPC_FUNC_IMPL(__imp__sub_8311FCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311FD08:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311fd08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311FD08;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FD18"))) PPC_WEAK_FUNC(sub_8311FD18);
PPC_FUNC_IMPL(__imp__sub_8311FD18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311FD48:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311fd48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311FD48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FD58"))) PPC_WEAK_FUNC(sub_8311FD58);
PPC_FUNC_IMPL(__imp__sub_8311FD58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311FD88:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311fd88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311FD88;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FD98"))) PPC_WEAK_FUNC(sub_8311FD98);
PPC_FUNC_IMPL(__imp__sub_8311FD98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311FDC8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311fdc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311FDC8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FDD8"))) PPC_WEAK_FUNC(sub_8311FDD8);
PPC_FUNC_IMPL(__imp__sub_8311FDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311fe18
	if (!ctx.cr6.eq) goto loc_8311FE18;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311FE0C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311fe0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311FE0C;
loc_8311FE18:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 788);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311fe38
	if (ctx.cr6.eq) goto loc_8311FE38;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,197
	ctx.r11.s64 = 197;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311FE38:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-13944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13944);
	// stw r11,788(r10)
	PPC_STORE_U32(ctx.r10.u32 + 788, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FE48"))) PPC_WEAK_FUNC(sub_8311FE48);
PPC_FUNC_IMPL(__imp__sub_8311FE48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8311FE78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311fe78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311FE78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FE88"))) PPC_WEAK_FUNC(sub_8311FE88);
PPC_FUNC_IMPL(__imp__sub_8311FE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311fec8
	if (!ctx.cr6.eq) goto loc_8311FEC8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311FEBC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311febc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311FEBC;
loc_8311FEC8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,188(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311fee8
	if (ctx.cr6.eq) goto loc_8311FEE8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,47
	ctx.r11.s64 = 47;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311FEE8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-13936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13936);
	// stw r11,188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 188, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FEF8"))) PPC_WEAK_FUNC(sub_8311FEF8);
PPC_FUNC_IMPL(__imp__sub_8311FEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311ff38
	if (!ctx.cr6.eq) goto loc_8311FF38;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311FF2C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311ff2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311FF2C;
loc_8311FF38:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311ff58
	if (ctx.cr6.eq) goto loc_8311FF58;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,88
	ctx.r11.s64 = 88;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311FF58:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-13932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13932);
	// stw r11,352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FF68"))) PPC_WEAK_FUNC(sub_8311FF68);
PPC_FUNC_IMPL(__imp__sub_8311FF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19240
	ctx.r3.s64 = ctx.r11.s64 + -19240;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311FF78"))) PPC_WEAK_FUNC(sub_8311FF78);
PPC_FUNC_IMPL(__imp__sub_8311FF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19640
	ctx.r3.s64 = ctx.r11.s64 + -19640;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311FF88"))) PPC_WEAK_FUNC(sub_8311FF88);
PPC_FUNC_IMPL(__imp__sub_8311FF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19360
	ctx.r3.s64 = ctx.r11.s64 + -19360;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311FF98"))) PPC_WEAK_FUNC(sub_8311FF98);
PPC_FUNC_IMPL(__imp__sub_8311FF98) {
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
	// addi r11,r11,19984
	ctx.r11.s64 = ctx.r11.s64 + 19984;
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

__attribute__((alias("__imp__sub_8311FFC8"))) PPC_WEAK_FUNC(sub_8311FFC8);
PPC_FUNC_IMPL(__imp__sub_8311FFC8) {
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
	// addi r11,r11,20064
	ctx.r11.s64 = ctx.r11.s64 + 20064;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FFF8"))) PPC_WEAK_FUNC(sub_8311FFF8);
PPC_FUNC_IMPL(__imp__sub_8311FFF8) {
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
	// addi r11,r11,20080
	ctx.r11.s64 = ctx.r11.s64 + 20080;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120040"))) PPC_WEAK_FUNC(sub_83120040);
PPC_FUNC_IMPL(__imp__sub_83120040) {
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
	// addi r11,r11,20000
	ctx.r11.s64 = ctx.r11.s64 + 20000;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120088"))) PPC_WEAK_FUNC(sub_83120088);
PPC_FUNC_IMPL(__imp__sub_83120088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19224
	ctx.r3.s64 = ctx.r11.s64 + -19224;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83120098"))) PPC_WEAK_FUNC(sub_83120098);
PPC_FUNC_IMPL(__imp__sub_83120098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19208
	ctx.r3.s64 = ctx.r11.s64 + -19208;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831200A8"))) PPC_WEAK_FUNC(sub_831200A8);
PPC_FUNC_IMPL(__imp__sub_831200A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19192
	ctx.r3.s64 = ctx.r11.s64 + -19192;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

