#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823265B0"))) PPC_WEAK_FUNC(sub_823265B0);
PPC_FUNC_IMPL(__imp__sub_823265B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x823265B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,8428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823265e8
	if (!ctx.cr6.eq) goto loc_823265E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e2f10
	ctx.lr = 0x823265DC;
	sub_828E2F10(ctx, base);
	// stw r3,8428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8428, ctx.r3.u32);
	// bl 0x828f0628
	ctx.lr = 0x823265E4;
	sub_828F0628(ctx, base);
	// lwz r11,8428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8428);
loc_823265E8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5580(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5580);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232661c
	if (ctx.cr6.eq) goto loc_8232661C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326620
	if (!ctx.cr6.eq) goto loc_82326620;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e2f10
	ctx.lr = 0x82326608;
	sub_828E2F10(ctx, base);
	// stw r3,8428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8428, ctx.r3.u32);
	// bl 0x828f0628
	ctx.lr = 0x82326610;
	sub_828F0628(ctx, base);
	// lwz r10,5580(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5580);
	// lwz r11,8428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8428);
	// b 0x82326620
	goto loc_82326620;
loc_8232661C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82326620:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326650
	if (!ctx.cr6.eq) goto loc_82326650;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82326644;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232664C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82326650:
	// lwz r10,5580(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5580);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232667c
	if (!ctx.cr6.eq) goto loc_8232667C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82326670;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82326678;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232667C:
	// lwz r10,5580(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5580);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82326688;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823266d4
	if (ctx.cr6.eq) goto loc_823266D4;
	// lwz r3,5580(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5580);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x823266bc
	if (!ctx.cr6.eq) goto loc_823266BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823266AC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823266B4;
	sub_824455B8(ctx, base);
	// lwz r3,5580(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5580);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823266BC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823266d4
	if (!ctx.cr6.eq) goto loc_823266D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823266D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823266D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823266E0"))) PPC_WEAK_FUNC(sub_823266E0);
PPC_FUNC_IMPL(__imp__sub_823266E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823266E8"))) PPC_WEAK_FUNC(sub_823266E8);
PPC_FUNC_IMPL(__imp__sub_823266E8) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,8428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8428);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232672c
	if (!ctx.cr6.eq) goto loc_8232672C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x828e2f10
	ctx.lr = 0x82326720;
	sub_828E2F10(ctx, base);
	// stw r3,8428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8428, ctx.r3.u32);
	// bl 0x828f0628
	ctx.lr = 0x82326728;
	sub_828F0628(ctx, base);
	// lwz r11,8428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8428);
loc_8232672C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82326758"))) PPC_WEAK_FUNC(sub_82326758);
PPC_FUNC_IMPL(__imp__sub_82326758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82326760;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,8428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326790
	if (!ctx.cr6.eq) goto loc_82326790;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e2f10
	ctx.lr = 0x82326784;
	sub_828E2F10(ctx, base);
	// stw r3,8428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8428, ctx.r3.u32);
	// bl 0x828f0628
	ctx.lr = 0x8232678C;
	sub_828F0628(ctx, base);
	// lwz r11,8428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8428);
loc_82326790:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5584(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5584);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823267c4
	if (ctx.cr6.eq) goto loc_823267C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823267c8
	if (!ctx.cr6.eq) goto loc_823267C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e2f10
	ctx.lr = 0x823267B0;
	sub_828E2F10(ctx, base);
	// stw r3,8428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8428, ctx.r3.u32);
	// bl 0x828f0628
	ctx.lr = 0x823267B8;
	sub_828F0628(ctx, base);
	// lwz r10,5584(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5584);
	// lwz r11,8428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8428);
	// b 0x823267c8
	goto loc_823267C8;
loc_823267C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823267C8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823267f8
	if (!ctx.cr6.eq) goto loc_823267F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x823267EC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x823267F4;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_823267F8:
	// lwz r10,5584(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5584);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326824
	if (!ctx.cr6.eq) goto loc_82326824;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82326818;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82326820;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82326824:
	// lwz r10,5584(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5584);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82326830;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232687c
	if (ctx.cr6.eq) goto loc_8232687C;
	// lwz r3,5584(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5584);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82326864
	if (!ctx.cr6.eq) goto loc_82326864;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82326854;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232685C;
	sub_824455B8(ctx, base);
	// lwz r3,5584(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5584);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82326864:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232687c
	if (!ctx.cr6.eq) goto loc_8232687C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232687C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232687C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82326888"))) PPC_WEAK_FUNC(sub_82326888);
PPC_FUNC_IMPL(__imp__sub_82326888) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82326890"))) PPC_WEAK_FUNC(sub_82326890);
PPC_FUNC_IMPL(__imp__sub_82326890) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,8428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8428);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823268d4
	if (!ctx.cr6.eq) goto loc_823268D4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x828e2f10
	ctx.lr = 0x823268C8;
	sub_828E2F10(ctx, base);
	// stw r3,8428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8428, ctx.r3.u32);
	// bl 0x828f0628
	ctx.lr = 0x823268D0;
	sub_828F0628(ctx, base);
	// lwz r11,8428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8428);
loc_823268D4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82326900"))) PPC_WEAK_FUNC(sub_82326900);
PPC_FUNC_IMPL(__imp__sub_82326900) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,11464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11464);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232692c
	if (ctx.cr6.eq) goto loc_8232692C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8298ff88
	ctx.lr = 0x82326928;
	sub_8298FF88(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8232692C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82326940"))) PPC_WEAK_FUNC(sub_82326940);
PPC_FUNC_IMPL(__imp__sub_82326940) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,11464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82326968
	if (ctx.cr6.eq) goto loc_82326968;
	// bl 0x8298ff88
	ctx.lr = 0x82326968;
	sub_8298FF88(ctx, base);
loc_82326968:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828be590
	ctx.lr = 0x82326970;
	sub_828BE590(ctx, base);
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

__attribute__((alias("__imp__sub_82326988"))) PPC_WEAK_FUNC(sub_82326988);
PPC_FUNC_IMPL(__imp__sub_82326988) {
	PPC_FUNC_PROLOGUE();
	// b 0x828a3720
	sub_828A3720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82326990"))) PPC_WEAK_FUNC(sub_82326990);
PPC_FUNC_IMPL(__imp__sub_82326990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82326998;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,8132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823269c8
	if (!ctx.cr6.eq) goto loc_823269C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e0788
	ctx.lr = 0x823269BC;
	sub_828E0788(ctx, base);
	// stw r3,8132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8132, ctx.r3.u32);
	// bl 0x828eb840
	ctx.lr = 0x823269C4;
	sub_828EB840(ctx, base);
	// lwz r11,8132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8132);
loc_823269C8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5588(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5588);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823269fc
	if (ctx.cr6.eq) goto loc_823269FC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326a00
	if (!ctx.cr6.eq) goto loc_82326A00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e0788
	ctx.lr = 0x823269E8;
	sub_828E0788(ctx, base);
	// stw r3,8132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8132, ctx.r3.u32);
	// bl 0x828eb840
	ctx.lr = 0x823269F0;
	sub_828EB840(ctx, base);
	// lwz r10,5588(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5588);
	// lwz r11,8132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8132);
	// b 0x82326a00
	goto loc_82326A00;
loc_823269FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82326A00:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326a30
	if (!ctx.cr6.eq) goto loc_82326A30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82326A24;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82326A2C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82326A30:
	// lwz r10,5588(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5588);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326a5c
	if (!ctx.cr6.eq) goto loc_82326A5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82326A50;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82326A58;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82326A5C:
	// lwz r10,5588(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5588);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82326A68;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82326ab4
	if (ctx.cr6.eq) goto loc_82326AB4;
	// lwz r3,5588(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5588);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82326a9c
	if (!ctx.cr6.eq) goto loc_82326A9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82326A8C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82326A94;
	sub_824455B8(ctx, base);
	// lwz r3,5588(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5588);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82326A9C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82326ab4
	if (!ctx.cr6.eq) goto loc_82326AB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82326AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82326AB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82326AC0"))) PPC_WEAK_FUNC(sub_82326AC0);
PPC_FUNC_IMPL(__imp__sub_82326AC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82326AC8"))) PPC_WEAK_FUNC(sub_82326AC8);
PPC_FUNC_IMPL(__imp__sub_82326AC8) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,8132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8132);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326b0c
	if (!ctx.cr6.eq) goto loc_82326B0C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x828e0788
	ctx.lr = 0x82326B00;
	sub_828E0788(ctx, base);
	// stw r3,8132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8132, ctx.r3.u32);
	// bl 0x828eb840
	ctx.lr = 0x82326B08;
	sub_828EB840(ctx, base);
	// lwz r11,8132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8132);
loc_82326B0C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82326B38"))) PPC_WEAK_FUNC(sub_82326B38);
PPC_FUNC_IMPL(__imp__sub_82326B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82326B40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326b70
	if (!ctx.cr6.eq) goto loc_82326B70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82326B64;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82326B6C;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82326B70:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5592(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5592);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82326ba4
	if (ctx.cr6.eq) goto loc_82326BA4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326ba8
	if (!ctx.cr6.eq) goto loc_82326BA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82326B90;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82326B98;
	sub_8295D600(ctx, base);
	// lwz r10,5592(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5592);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x82326ba8
	goto loc_82326BA8;
loc_82326BA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82326BA8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326bd8
	if (!ctx.cr6.eq) goto loc_82326BD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82326BCC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82326BD4;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82326BD8:
	// lwz r10,5592(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5592);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326c04
	if (!ctx.cr6.eq) goto loc_82326C04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82326BF8;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82326C00;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82326C04:
	// lwz r10,5592(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5592);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82326C10;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82326c5c
	if (ctx.cr6.eq) goto loc_82326C5C;
	// lwz r3,5592(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5592);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82326c44
	if (!ctx.cr6.eq) goto loc_82326C44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82326C34;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82326C3C;
	sub_824455B8(ctx, base);
	// lwz r3,5592(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5592);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82326C44:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82326c5c
	if (!ctx.cr6.eq) goto loc_82326C5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82326C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82326C5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82326C68"))) PPC_WEAK_FUNC(sub_82326C68);
PPC_FUNC_IMPL(__imp__sub_82326C68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82326C70"))) PPC_WEAK_FUNC(sub_82326C70);
PPC_FUNC_IMPL(__imp__sub_82326C70) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326cb4
	if (!ctx.cr6.eq) goto loc_82326CB4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x82326CA8;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82326CB0;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82326CB4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82326CE0"))) PPC_WEAK_FUNC(sub_82326CE0);
PPC_FUNC_IMPL(__imp__sub_82326CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82326CE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,8132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326d18
	if (!ctx.cr6.eq) goto loc_82326D18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e0788
	ctx.lr = 0x82326D0C;
	sub_828E0788(ctx, base);
	// stw r3,8132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8132, ctx.r3.u32);
	// bl 0x828eb840
	ctx.lr = 0x82326D14;
	sub_828EB840(ctx, base);
	// lwz r11,8132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8132);
loc_82326D18:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5596(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5596);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82326d4c
	if (ctx.cr6.eq) goto loc_82326D4C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326d50
	if (!ctx.cr6.eq) goto loc_82326D50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e0788
	ctx.lr = 0x82326D38;
	sub_828E0788(ctx, base);
	// stw r3,8132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8132, ctx.r3.u32);
	// bl 0x828eb840
	ctx.lr = 0x82326D40;
	sub_828EB840(ctx, base);
	// lwz r10,5596(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5596);
	// lwz r11,8132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8132);
	// b 0x82326d50
	goto loc_82326D50;
loc_82326D4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82326D50:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326d80
	if (!ctx.cr6.eq) goto loc_82326D80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82326D74;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82326D7C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82326D80:
	// lwz r10,5596(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5596);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326dac
	if (!ctx.cr6.eq) goto loc_82326DAC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82326DA0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82326DA8;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82326DAC:
	// lwz r10,5596(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5596);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82326DB8;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82326e04
	if (ctx.cr6.eq) goto loc_82326E04;
	// lwz r3,5596(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5596);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82326dec
	if (!ctx.cr6.eq) goto loc_82326DEC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82326DDC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82326DE4;
	sub_824455B8(ctx, base);
	// lwz r3,5596(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5596);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82326DEC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82326e04
	if (!ctx.cr6.eq) goto loc_82326E04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82326E04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82326E04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82326E10"))) PPC_WEAK_FUNC(sub_82326E10);
PPC_FUNC_IMPL(__imp__sub_82326E10) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82326E18"))) PPC_WEAK_FUNC(sub_82326E18);
PPC_FUNC_IMPL(__imp__sub_82326E18) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,8132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8132);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326e5c
	if (!ctx.cr6.eq) goto loc_82326E5C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x828e0788
	ctx.lr = 0x82326E50;
	sub_828E0788(ctx, base);
	// stw r3,8132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8132, ctx.r3.u32);
	// bl 0x828eb840
	ctx.lr = 0x82326E58;
	sub_828EB840(ctx, base);
	// lwz r11,8132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8132);
loc_82326E5C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82326E88"))) PPC_WEAK_FUNC(sub_82326E88);
PPC_FUNC_IMPL(__imp__sub_82326E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82326E90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326ec0
	if (!ctx.cr6.eq) goto loc_82326EC0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82326EB4;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82326EBC;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82326EC0:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5600(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5600);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82326ef4
	if (ctx.cr6.eq) goto loc_82326EF4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326ef8
	if (!ctx.cr6.eq) goto loc_82326EF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82326EE0;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82326EE8;
	sub_8295D600(ctx, base);
	// lwz r10,5600(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5600);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x82326ef8
	goto loc_82326EF8;
loc_82326EF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82326EF8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326f28
	if (!ctx.cr6.eq) goto loc_82326F28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82326F1C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82326F24;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82326F28:
	// lwz r10,5600(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5600);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326f54
	if (!ctx.cr6.eq) goto loc_82326F54;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82326F48;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82326F50;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82326F54:
	// lwz r10,5600(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5600);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82326F60;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82326fac
	if (ctx.cr6.eq) goto loc_82326FAC;
	// lwz r3,5600(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5600);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82326f94
	if (!ctx.cr6.eq) goto loc_82326F94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82326F84;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82326F8C;
	sub_824455B8(ctx, base);
	// lwz r3,5600(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5600);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82326F94:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82326fac
	if (!ctx.cr6.eq) goto loc_82326FAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82326FAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82326FAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82326FB8"))) PPC_WEAK_FUNC(sub_82326FB8);
PPC_FUNC_IMPL(__imp__sub_82326FB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82326FC0"))) PPC_WEAK_FUNC(sub_82326FC0);
PPC_FUNC_IMPL(__imp__sub_82326FC0) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327004
	if (!ctx.cr6.eq) goto loc_82327004;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x82326FF8;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82327000;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82327004:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82327030"))) PPC_WEAK_FUNC(sub_82327030);
PPC_FUNC_IMPL(__imp__sub_82327030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82327038;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10932);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327068
	if (!ctx.cr6.eq) goto loc_82327068;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9288
	ctx.lr = 0x8232705C;
	sub_829A9288(ctx, base);
	// stw r3,10932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10932, ctx.r3.u32);
	// bl 0x829a9340
	ctx.lr = 0x82327064;
	sub_829A9340(ctx, base);
	// lwz r11,10932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10932);
loc_82327068:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5604(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5604);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232709c
	if (ctx.cr6.eq) goto loc_8232709C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823270a0
	if (!ctx.cr6.eq) goto loc_823270A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9288
	ctx.lr = 0x82327088;
	sub_829A9288(ctx, base);
	// stw r3,10932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10932, ctx.r3.u32);
	// bl 0x829a9340
	ctx.lr = 0x82327090;
	sub_829A9340(ctx, base);
	// lwz r10,5604(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5604);
	// lwz r11,10932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10932);
	// b 0x823270a0
	goto loc_823270A0;
loc_8232709C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823270A0:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823270d0
	if (!ctx.cr6.eq) goto loc_823270D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x823270C4;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x823270CC;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_823270D0:
	// lwz r10,5604(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5604);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823270fc
	if (!ctx.cr6.eq) goto loc_823270FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823270F0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823270F8;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823270FC:
	// lwz r10,5604(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5604);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82327108;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82327154
	if (ctx.cr6.eq) goto loc_82327154;
	// lwz r3,5604(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5604);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232713c
	if (!ctx.cr6.eq) goto loc_8232713C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232712C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82327134;
	sub_824455B8(ctx, base);
	// lwz r3,5604(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5604);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232713C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82327154
	if (!ctx.cr6.eq) goto loc_82327154;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82327154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82327154:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82327160"))) PPC_WEAK_FUNC(sub_82327160);
PPC_FUNC_IMPL(__imp__sub_82327160) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327168"))) PPC_WEAK_FUNC(sub_82327168);
PPC_FUNC_IMPL(__imp__sub_82327168) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10932);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823271ac
	if (!ctx.cr6.eq) goto loc_823271AC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9288
	ctx.lr = 0x823271A0;
	sub_829A9288(ctx, base);
	// stw r3,10932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10932, ctx.r3.u32);
	// bl 0x829a9340
	ctx.lr = 0x823271A8;
	sub_829A9340(ctx, base);
	// lwz r11,10932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10932);
loc_823271AC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_823271D8"))) PPC_WEAK_FUNC(sub_823271D8);
PPC_FUNC_IMPL(__imp__sub_823271D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x823271E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,-14896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14896);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327210
	if (!ctx.cr6.eq) goto loc_82327210;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826aa920
	ctx.lr = 0x82327204;
	sub_826AA920(ctx, base);
	// stw r3,-14896(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14896, ctx.r3.u32);
	// bl 0x826aebe8
	ctx.lr = 0x8232720C;
	sub_826AEBE8(ctx, base);
	// lwz r11,-14896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14896);
loc_82327210:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5608(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5608);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82327244
	if (ctx.cr6.eq) goto loc_82327244;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327248
	if (!ctx.cr6.eq) goto loc_82327248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826aa920
	ctx.lr = 0x82327230;
	sub_826AA920(ctx, base);
	// stw r3,-14896(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14896, ctx.r3.u32);
	// bl 0x826aebe8
	ctx.lr = 0x82327238;
	sub_826AEBE8(ctx, base);
	// lwz r10,5608(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5608);
	// lwz r11,-14896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14896);
	// b 0x82327248
	goto loc_82327248;
loc_82327244:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82327248:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327278
	if (!ctx.cr6.eq) goto loc_82327278;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232726C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82327274;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82327278:
	// lwz r10,5608(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5608);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823272a4
	if (!ctx.cr6.eq) goto loc_823272A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82327298;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823272A0;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823272A4:
	// lwz r10,5608(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5608);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x823272B0;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823272fc
	if (ctx.cr6.eq) goto loc_823272FC;
	// lwz r3,5608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5608);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x823272e4
	if (!ctx.cr6.eq) goto loc_823272E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823272D4;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823272DC;
	sub_824455B8(ctx, base);
	// lwz r3,5608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5608);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823272E4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823272fc
	if (!ctx.cr6.eq) goto loc_823272FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823272FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823272FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82327308"))) PPC_WEAK_FUNC(sub_82327308);
PPC_FUNC_IMPL(__imp__sub_82327308) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327310"))) PPC_WEAK_FUNC(sub_82327310);
PPC_FUNC_IMPL(__imp__sub_82327310) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-14896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14896);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327354
	if (!ctx.cr6.eq) goto loc_82327354;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x826aa920
	ctx.lr = 0x82327348;
	sub_826AA920(ctx, base);
	// stw r3,-14896(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14896, ctx.r3.u32);
	// bl 0x826aebe8
	ctx.lr = 0x82327350;
	sub_826AEBE8(ctx, base);
	// lwz r11,-14896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14896);
loc_82327354:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82327380"))) PPC_WEAK_FUNC(sub_82327380);
PPC_FUNC_IMPL(__imp__sub_82327380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82327388;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,-14892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14892);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823273b8
	if (!ctx.cr6.eq) goto loc_823273B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826aa9d8
	ctx.lr = 0x823273AC;
	sub_826AA9D8(ctx, base);
	// stw r3,-14892(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14892, ctx.r3.u32);
	// bl 0x826aed88
	ctx.lr = 0x823273B4;
	sub_826AED88(ctx, base);
	// lwz r11,-14892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14892);
loc_823273B8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5612);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823273ec
	if (ctx.cr6.eq) goto loc_823273EC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823273f0
	if (!ctx.cr6.eq) goto loc_823273F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826aa9d8
	ctx.lr = 0x823273D8;
	sub_826AA9D8(ctx, base);
	// stw r3,-14892(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14892, ctx.r3.u32);
	// bl 0x826aed88
	ctx.lr = 0x823273E0;
	sub_826AED88(ctx, base);
	// lwz r10,5612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5612);
	// lwz r11,-14892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14892);
	// b 0x823273f0
	goto loc_823273F0;
loc_823273EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823273F0:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327420
	if (!ctx.cr6.eq) goto loc_82327420;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82327414;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232741C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82327420:
	// lwz r10,5612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5612);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232744c
	if (!ctx.cr6.eq) goto loc_8232744C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82327440;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82327448;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232744C:
	// lwz r10,5612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5612);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82327458;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823274a4
	if (ctx.cr6.eq) goto loc_823274A4;
	// lwz r3,5612(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5612);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232748c
	if (!ctx.cr6.eq) goto loc_8232748C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232747C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82327484;
	sub_824455B8(ctx, base);
	// lwz r3,5612(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5612);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232748C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823274a4
	if (!ctx.cr6.eq) goto loc_823274A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823274A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823274A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823274B0"))) PPC_WEAK_FUNC(sub_823274B0);
PPC_FUNC_IMPL(__imp__sub_823274B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823274B8"))) PPC_WEAK_FUNC(sub_823274B8);
PPC_FUNC_IMPL(__imp__sub_823274B8) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-14892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14892);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823274fc
	if (!ctx.cr6.eq) goto loc_823274FC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x826aa9d8
	ctx.lr = 0x823274F0;
	sub_826AA9D8(ctx, base);
	// stw r3,-14892(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14892, ctx.r3.u32);
	// bl 0x826aed88
	ctx.lr = 0x823274F8;
	sub_826AED88(ctx, base);
	// lwz r11,-14892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14892);
loc_823274FC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82327528"))) PPC_WEAK_FUNC(sub_82327528);
PPC_FUNC_IMPL(__imp__sub_82327528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82327530;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327560
	if (!ctx.cr6.eq) goto loc_82327560;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82993210
	ctx.lr = 0x82327554;
	sub_82993210(ctx, base);
	// stw r3,10896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10896, ctx.r3.u32);
	// bl 0x829a8c00
	ctx.lr = 0x8232755C;
	sub_829A8C00(ctx, base);
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
loc_82327560:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5616(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5616);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82327594
	if (ctx.cr6.eq) goto loc_82327594;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327598
	if (!ctx.cr6.eq) goto loc_82327598;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82993210
	ctx.lr = 0x82327580;
	sub_82993210(ctx, base);
	// stw r3,10896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10896, ctx.r3.u32);
	// bl 0x829a8c00
	ctx.lr = 0x82327588;
	sub_829A8C00(ctx, base);
	// lwz r10,5616(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5616);
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// b 0x82327598
	goto loc_82327598;
loc_82327594:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82327598:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823275c8
	if (!ctx.cr6.eq) goto loc_823275C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x823275BC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x823275C4;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_823275C8:
	// lwz r10,5616(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5616);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823275f4
	if (!ctx.cr6.eq) goto loc_823275F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823275E8;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823275F0;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823275F4:
	// lwz r10,5616(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5616);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82327600;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232764c
	if (ctx.cr6.eq) goto loc_8232764C;
	// lwz r3,5616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5616);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82327634
	if (!ctx.cr6.eq) goto loc_82327634;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82327624;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232762C;
	sub_824455B8(ctx, base);
	// lwz r3,5616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5616);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82327634:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232764c
	if (!ctx.cr6.eq) goto loc_8232764C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232764C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232764C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82327658"))) PPC_WEAK_FUNC(sub_82327658);
PPC_FUNC_IMPL(__imp__sub_82327658) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r10,r10,22056
	ctx.r10.s64 = ctx.r10.s64 + 22056;
	// addi r11,r11,27960
	ctx.r11.s64 = ctx.r11.s64 + 27960;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327678"))) PPC_WEAK_FUNC(sub_82327678);
PPC_FUNC_IMPL(__imp__sub_82327678) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823276bc
	if (!ctx.cr6.eq) goto loc_823276BC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x82993210
	ctx.lr = 0x823276B0;
	sub_82993210(ctx, base);
	// stw r3,10896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10896, ctx.r3.u32);
	// bl 0x829a8c00
	ctx.lr = 0x823276B8;
	sub_829A8C00(ctx, base);
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
loc_823276BC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_823276E8"))) PPC_WEAK_FUNC(sub_823276E8);
PPC_FUNC_IMPL(__imp__sub_823276E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x823276F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,-14904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327720
	if (!ctx.cr6.eq) goto loc_82327720;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826aeb30
	ctx.lr = 0x82327714;
	sub_826AEB30(ctx, base);
	// stw r3,-14904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14904, ctx.r3.u32);
	// bl 0x8265d0a8
	ctx.lr = 0x8232771C;
	sub_8265D0A8(ctx, base);
	// lwz r11,-14904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14904);
loc_82327720:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5620(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5620);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82327754
	if (ctx.cr6.eq) goto loc_82327754;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327758
	if (!ctx.cr6.eq) goto loc_82327758;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826aeb30
	ctx.lr = 0x82327740;
	sub_826AEB30(ctx, base);
	// stw r3,-14904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14904, ctx.r3.u32);
	// bl 0x8265d0a8
	ctx.lr = 0x82327748;
	sub_8265D0A8(ctx, base);
	// lwz r10,5620(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5620);
	// lwz r11,-14904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14904);
	// b 0x82327758
	goto loc_82327758;
loc_82327754:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82327758:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327788
	if (!ctx.cr6.eq) goto loc_82327788;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232777C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82327784;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82327788:
	// lwz r10,5620(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5620);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823277b4
	if (!ctx.cr6.eq) goto loc_823277B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823277A8;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823277B0;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823277B4:
	// lwz r10,5620(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5620);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x823277C0;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232780c
	if (ctx.cr6.eq) goto loc_8232780C;
	// lwz r3,5620(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5620);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x823277f4
	if (!ctx.cr6.eq) goto loc_823277F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823277E4;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823277EC;
	sub_824455B8(ctx, base);
	// lwz r3,5620(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5620);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823277F4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232780c
	if (!ctx.cr6.eq) goto loc_8232780C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232780C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232780C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82327818"))) PPC_WEAK_FUNC(sub_82327818);
PPC_FUNC_IMPL(__imp__sub_82327818) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327820"))) PPC_WEAK_FUNC(sub_82327820);
PPC_FUNC_IMPL(__imp__sub_82327820) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-14904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14904);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327864
	if (!ctx.cr6.eq) goto loc_82327864;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x826aeb30
	ctx.lr = 0x82327858;
	sub_826AEB30(ctx, base);
	// stw r3,-14904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14904, ctx.r3.u32);
	// bl 0x8265d0a8
	ctx.lr = 0x82327860;
	sub_8265D0A8(ctx, base);
	// lwz r11,-14904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14904);
loc_82327864:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82327890"))) PPC_WEAK_FUNC(sub_82327890);
PPC_FUNC_IMPL(__imp__sub_82327890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82327898;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,11236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823278c8
	if (!ctx.cr6.eq) goto loc_823278C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82989990
	ctx.lr = 0x823278BC;
	sub_82989990(ctx, base);
	// stw r3,11236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11236, ctx.r3.u32);
	// bl 0x829a2a98
	ctx.lr = 0x823278C4;
	sub_829A2A98(ctx, base);
	// lwz r11,11236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11236);
loc_823278C8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5624(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5624);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823278fc
	if (ctx.cr6.eq) goto loc_823278FC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327900
	if (!ctx.cr6.eq) goto loc_82327900;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82989990
	ctx.lr = 0x823278E8;
	sub_82989990(ctx, base);
	// stw r3,11236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11236, ctx.r3.u32);
	// bl 0x829a2a98
	ctx.lr = 0x823278F0;
	sub_829A2A98(ctx, base);
	// lwz r10,5624(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5624);
	// lwz r11,11236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11236);
	// b 0x82327900
	goto loc_82327900;
loc_823278FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82327900:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327930
	if (!ctx.cr6.eq) goto loc_82327930;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82327924;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232792C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82327930:
	// lwz r10,5624(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5624);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232795c
	if (!ctx.cr6.eq) goto loc_8232795C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82327950;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82327958;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232795C:
	// lwz r10,5624(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5624);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82327968;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823279b4
	if (ctx.cr6.eq) goto loc_823279B4;
	// lwz r3,5624(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5624);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232799c
	if (!ctx.cr6.eq) goto loc_8232799C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232798C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82327994;
	sub_824455B8(ctx, base);
	// lwz r3,5624(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5624);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232799C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823279b4
	if (!ctx.cr6.eq) goto loc_823279B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823279B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823279B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823279C0"))) PPC_WEAK_FUNC(sub_823279C0);
PPC_FUNC_IMPL(__imp__sub_823279C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823279C8"))) PPC_WEAK_FUNC(sub_823279C8);
PPC_FUNC_IMPL(__imp__sub_823279C8) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,11236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11236);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327a0c
	if (!ctx.cr6.eq) goto loc_82327A0C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x82989990
	ctx.lr = 0x82327A00;
	sub_82989990(ctx, base);
	// stw r3,11236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11236, ctx.r3.u32);
	// bl 0x829a2a98
	ctx.lr = 0x82327A08;
	sub_829A2A98(ctx, base);
	// lwz r11,11236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11236);
loc_82327A0C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82327A38"))) PPC_WEAK_FUNC(sub_82327A38);
PPC_FUNC_IMPL(__imp__sub_82327A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82327A40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327a70
	if (!ctx.cr6.eq) goto loc_82327A70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829d0c00
	ctx.lr = 0x82327A64;
	sub_829D0C00(ctx, base);
	// stw r3,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r3.u32);
	// bl 0x82994208
	ctx.lr = 0x82327A6C;
	sub_82994208(ctx, base);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
loc_82327A70:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5628(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5628);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82327aa4
	if (ctx.cr6.eq) goto loc_82327AA4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327aa8
	if (!ctx.cr6.eq) goto loc_82327AA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829d0c00
	ctx.lr = 0x82327A90;
	sub_829D0C00(ctx, base);
	// stw r3,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r3.u32);
	// bl 0x82994208
	ctx.lr = 0x82327A98;
	sub_82994208(ctx, base);
	// lwz r10,5628(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5628);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// b 0x82327aa8
	goto loc_82327AA8;
loc_82327AA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82327AA8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327ad8
	if (!ctx.cr6.eq) goto loc_82327AD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82327ACC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82327AD4;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82327AD8:
	// lwz r10,5628(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5628);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327b04
	if (!ctx.cr6.eq) goto loc_82327B04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82327AF8;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82327B00;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82327B04:
	// lwz r10,5628(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5628);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82327B10;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82327b5c
	if (ctx.cr6.eq) goto loc_82327B5C;
	// lwz r3,5628(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5628);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82327b44
	if (!ctx.cr6.eq) goto loc_82327B44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82327B34;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82327B3C;
	sub_824455B8(ctx, base);
	// lwz r3,5628(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5628);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82327B44:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82327b5c
	if (!ctx.cr6.eq) goto loc_82327B5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82327B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82327B5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82327B68"))) PPC_WEAK_FUNC(sub_82327B68);
PPC_FUNC_IMPL(__imp__sub_82327B68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327B70"))) PPC_WEAK_FUNC(sub_82327B70);
PPC_FUNC_IMPL(__imp__sub_82327B70) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327bb4
	if (!ctx.cr6.eq) goto loc_82327BB4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829d0c00
	ctx.lr = 0x82327BA8;
	sub_829D0C00(ctx, base);
	// stw r3,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r3.u32);
	// bl 0x82994208
	ctx.lr = 0x82327BB0;
	sub_82994208(ctx, base);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
loc_82327BB4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82327BE0"))) PPC_WEAK_FUNC(sub_82327BE0);
PPC_FUNC_IMPL(__imp__sub_82327BE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327BE8"))) PPC_WEAK_FUNC(sub_82327BE8);
PPC_FUNC_IMPL(__imp__sub_82327BE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327BF0"))) PPC_WEAK_FUNC(sub_82327BF0);
PPC_FUNC_IMPL(__imp__sub_82327BF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327BF8"))) PPC_WEAK_FUNC(sub_82327BF8);
PPC_FUNC_IMPL(__imp__sub_82327BF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327C00"))) PPC_WEAK_FUNC(sub_82327C00);
PPC_FUNC_IMPL(__imp__sub_82327C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82327C08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327c38
	if (!ctx.cr6.eq) goto loc_82327C38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829d0c00
	ctx.lr = 0x82327C2C;
	sub_829D0C00(ctx, base);
	// stw r3,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r3.u32);
	// bl 0x82994208
	ctx.lr = 0x82327C34;
	sub_82994208(ctx, base);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
loc_82327C38:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5648(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5648);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82327c6c
	if (ctx.cr6.eq) goto loc_82327C6C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327c70
	if (!ctx.cr6.eq) goto loc_82327C70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829d0c00
	ctx.lr = 0x82327C58;
	sub_829D0C00(ctx, base);
	// stw r3,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r3.u32);
	// bl 0x82994208
	ctx.lr = 0x82327C60;
	sub_82994208(ctx, base);
	// lwz r10,5648(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5648);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// b 0x82327c70
	goto loc_82327C70;
loc_82327C6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82327C70:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327ca0
	if (!ctx.cr6.eq) goto loc_82327CA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82327C94;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82327C9C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82327CA0:
	// lwz r10,5648(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5648);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327ccc
	if (!ctx.cr6.eq) goto loc_82327CCC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82327CC0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82327CC8;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82327CCC:
	// lwz r10,5648(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5648);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82327CD8;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82327d24
	if (ctx.cr6.eq) goto loc_82327D24;
	// lwz r3,5648(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5648);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82327d0c
	if (!ctx.cr6.eq) goto loc_82327D0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82327CFC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82327D04;
	sub_824455B8(ctx, base);
	// lwz r3,5648(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5648);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82327D0C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82327d24
	if (!ctx.cr6.eq) goto loc_82327D24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82327D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82327D24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82327D30"))) PPC_WEAK_FUNC(sub_82327D30);
PPC_FUNC_IMPL(__imp__sub_82327D30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327D38"))) PPC_WEAK_FUNC(sub_82327D38);
PPC_FUNC_IMPL(__imp__sub_82327D38) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327d7c
	if (!ctx.cr6.eq) goto loc_82327D7C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829d0c00
	ctx.lr = 0x82327D70;
	sub_829D0C00(ctx, base);
	// stw r3,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r3.u32);
	// bl 0x82994208
	ctx.lr = 0x82327D78;
	sub_82994208(ctx, base);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
loc_82327D7C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82327DA8"))) PPC_WEAK_FUNC(sub_82327DA8);
PPC_FUNC_IMPL(__imp__sub_82327DA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327DB0"))) PPC_WEAK_FUNC(sub_82327DB0);
PPC_FUNC_IMPL(__imp__sub_82327DB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327DB8"))) PPC_WEAK_FUNC(sub_82327DB8);
PPC_FUNC_IMPL(__imp__sub_82327DB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327DC0"))) PPC_WEAK_FUNC(sub_82327DC0);
PPC_FUNC_IMPL(__imp__sub_82327DC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327DC8"))) PPC_WEAK_FUNC(sub_82327DC8);
PPC_FUNC_IMPL(__imp__sub_82327DC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327DD0"))) PPC_WEAK_FUNC(sub_82327DD0);
PPC_FUNC_IMPL(__imp__sub_82327DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82327DD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10820);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327e08
	if (!ctx.cr6.eq) goto loc_82327E08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82991660
	ctx.lr = 0x82327DFC;
	sub_82991660(ctx, base);
	// stw r3,10820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10820, ctx.r3.u32);
	// bl 0x829a0898
	ctx.lr = 0x82327E04;
	sub_829A0898(ctx, base);
	// lwz r11,10820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10820);
loc_82327E08:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5672(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5672);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82327e3c
	if (ctx.cr6.eq) goto loc_82327E3C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327e40
	if (!ctx.cr6.eq) goto loc_82327E40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82991660
	ctx.lr = 0x82327E28;
	sub_82991660(ctx, base);
	// stw r3,10820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10820, ctx.r3.u32);
	// bl 0x829a0898
	ctx.lr = 0x82327E30;
	sub_829A0898(ctx, base);
	// lwz r10,5672(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5672);
	// lwz r11,10820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10820);
	// b 0x82327e40
	goto loc_82327E40;
loc_82327E3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82327E40:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327e70
	if (!ctx.cr6.eq) goto loc_82327E70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82327E64;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82327E6C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82327E70:
	// lwz r10,5672(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5672);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327e9c
	if (!ctx.cr6.eq) goto loc_82327E9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82327E90;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82327E98;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82327E9C:
	// lwz r10,5672(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5672);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82327EA8;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82327ef4
	if (ctx.cr6.eq) goto loc_82327EF4;
	// lwz r3,5672(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5672);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82327edc
	if (!ctx.cr6.eq) goto loc_82327EDC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82327ECC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82327ED4;
	sub_824455B8(ctx, base);
	// lwz r3,5672(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5672);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82327EDC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82327ef4
	if (!ctx.cr6.eq) goto loc_82327EF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82327EF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82327EF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82327F00"))) PPC_WEAK_FUNC(sub_82327F00);
PPC_FUNC_IMPL(__imp__sub_82327F00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r10,r10,22056
	ctx.r10.s64 = ctx.r10.s64 + 22056;
	// addi r11,r11,27960
	ctx.r11.s64 = ctx.r11.s64 + 27960;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327F20"))) PPC_WEAK_FUNC(sub_82327F20);
PPC_FUNC_IMPL(__imp__sub_82327F20) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10820);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327f64
	if (!ctx.cr6.eq) goto loc_82327F64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x82991660
	ctx.lr = 0x82327F58;
	sub_82991660(ctx, base);
	// stw r3,10820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10820, ctx.r3.u32);
	// bl 0x829a0898
	ctx.lr = 0x82327F60;
	sub_829A0898(ctx, base);
	// lwz r11,10820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10820);
loc_82327F64:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82327F90"))) PPC_WEAK_FUNC(sub_82327F90);
PPC_FUNC_IMPL(__imp__sub_82327F90) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327F98"))) PPC_WEAK_FUNC(sub_82327F98);
PPC_FUNC_IMPL(__imp__sub_82327F98) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327FA0"))) PPC_WEAK_FUNC(sub_82327FA0);
PPC_FUNC_IMPL(__imp__sub_82327FA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327FA8"))) PPC_WEAK_FUNC(sub_82327FA8);
PPC_FUNC_IMPL(__imp__sub_82327FA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327FB0"))) PPC_WEAK_FUNC(sub_82327FB0);
PPC_FUNC_IMPL(__imp__sub_82327FB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327FB8"))) PPC_WEAK_FUNC(sub_82327FB8);
PPC_FUNC_IMPL(__imp__sub_82327FB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327FC0"))) PPC_WEAK_FUNC(sub_82327FC0);
PPC_FUNC_IMPL(__imp__sub_82327FC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327FC8"))) PPC_WEAK_FUNC(sub_82327FC8);
PPC_FUNC_IMPL(__imp__sub_82327FC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327FD0"))) PPC_WEAK_FUNC(sub_82327FD0);
PPC_FUNC_IMPL(__imp__sub_82327FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82327FD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10764);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328008
	if (!ctx.cr6.eq) goto loc_82328008;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a7690
	ctx.lr = 0x82327FFC;
	sub_829A7690(ctx, base);
	// stw r3,10764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10764, ctx.r3.u32);
	// bl 0x8299f9f8
	ctx.lr = 0x82328004;
	sub_8299F9F8(ctx, base);
	// lwz r11,10764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10764);
loc_82328008:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5708(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5708);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232803c
	if (ctx.cr6.eq) goto loc_8232803C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328040
	if (!ctx.cr6.eq) goto loc_82328040;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a7690
	ctx.lr = 0x82328028;
	sub_829A7690(ctx, base);
	// stw r3,10764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10764, ctx.r3.u32);
	// bl 0x8299f9f8
	ctx.lr = 0x82328030;
	sub_8299F9F8(ctx, base);
	// lwz r10,5708(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5708);
	// lwz r11,10764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10764);
	// b 0x82328040
	goto loc_82328040;
loc_8232803C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82328040:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328070
	if (!ctx.cr6.eq) goto loc_82328070;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82328064;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232806C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82328070:
	// lwz r10,5708(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5708);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232809c
	if (!ctx.cr6.eq) goto loc_8232809C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82328090;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82328098;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232809C:
	// lwz r10,5708(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5708);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x823280A8;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823280f4
	if (ctx.cr6.eq) goto loc_823280F4;
	// lwz r3,5708(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5708);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x823280dc
	if (!ctx.cr6.eq) goto loc_823280DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823280CC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823280D4;
	sub_824455B8(ctx, base);
	// lwz r3,5708(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5708);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823280DC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823280f4
	if (!ctx.cr6.eq) goto loc_823280F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823280F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823280F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82328100"))) PPC_WEAK_FUNC(sub_82328100);
PPC_FUNC_IMPL(__imp__sub_82328100) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82328108"))) PPC_WEAK_FUNC(sub_82328108);
PPC_FUNC_IMPL(__imp__sub_82328108) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10764);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232814c
	if (!ctx.cr6.eq) goto loc_8232814C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a7690
	ctx.lr = 0x82328140;
	sub_829A7690(ctx, base);
	// stw r3,10764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10764, ctx.r3.u32);
	// bl 0x8299f9f8
	ctx.lr = 0x82328148;
	sub_8299F9F8(ctx, base);
	// lwz r11,10764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10764);
loc_8232814C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82328178"))) PPC_WEAK_FUNC(sub_82328178);
PPC_FUNC_IMPL(__imp__sub_82328178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82328180;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,11016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11016);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823281b0
	if (!ctx.cr6.eq) goto loc_823281B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829aa3a0
	ctx.lr = 0x823281A4;
	sub_829AA3A0(ctx, base);
	// stw r3,11016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11016, ctx.r3.u32);
	// bl 0x829b9108
	ctx.lr = 0x823281AC;
	sub_829B9108(ctx, base);
	// lwz r11,11016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11016);
loc_823281B0:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5712(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5712);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823281e4
	if (ctx.cr6.eq) goto loc_823281E4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823281e8
	if (!ctx.cr6.eq) goto loc_823281E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829aa3a0
	ctx.lr = 0x823281D0;
	sub_829AA3A0(ctx, base);
	// stw r3,11016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11016, ctx.r3.u32);
	// bl 0x829b9108
	ctx.lr = 0x823281D8;
	sub_829B9108(ctx, base);
	// lwz r10,5712(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5712);
	// lwz r11,11016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11016);
	// b 0x823281e8
	goto loc_823281E8;
loc_823281E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823281E8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328218
	if (!ctx.cr6.eq) goto loc_82328218;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232820C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82328214;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82328218:
	// lwz r10,5712(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5712);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328244
	if (!ctx.cr6.eq) goto loc_82328244;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82328238;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82328240;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82328244:
	// lwz r10,5712(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5712);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82328250;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232829c
	if (ctx.cr6.eq) goto loc_8232829C;
	// lwz r3,5712(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5712);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82328284
	if (!ctx.cr6.eq) goto loc_82328284;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82328274;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232827C;
	sub_824455B8(ctx, base);
	// lwz r3,5712(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5712);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82328284:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232829c
	if (!ctx.cr6.eq) goto loc_8232829C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232829C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232829C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823282A8"))) PPC_WEAK_FUNC(sub_823282A8);
PPC_FUNC_IMPL(__imp__sub_823282A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823282B0"))) PPC_WEAK_FUNC(sub_823282B0);
PPC_FUNC_IMPL(__imp__sub_823282B0) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,11016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11016);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823282f4
	if (!ctx.cr6.eq) goto loc_823282F4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829aa3a0
	ctx.lr = 0x823282E8;
	sub_829AA3A0(ctx, base);
	// stw r3,11016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11016, ctx.r3.u32);
	// bl 0x829b9108
	ctx.lr = 0x823282F0;
	sub_829B9108(ctx, base);
	// lwz r11,11016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11016);
loc_823282F4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82328320"))) PPC_WEAK_FUNC(sub_82328320);
PPC_FUNC_IMPL(__imp__sub_82328320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82328328;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328358
	if (!ctx.cr6.eq) goto loc_82328358;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232834C;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82328354;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82328358:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5716(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5716);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232838c
	if (ctx.cr6.eq) goto loc_8232838C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328390
	if (!ctx.cr6.eq) goto loc_82328390;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82328378;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82328380;
	sub_8295D600(ctx, base);
	// lwz r10,5716(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5716);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x82328390
	goto loc_82328390;
loc_8232838C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82328390:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823283c0
	if (!ctx.cr6.eq) goto loc_823283C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x823283B4;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x823283BC;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_823283C0:
	// lwz r10,5716(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5716);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823283ec
	if (!ctx.cr6.eq) goto loc_823283EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823283E0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823283E8;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823283EC:
	// lwz r10,5716(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5716);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x823283F8;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82328444
	if (ctx.cr6.eq) goto loc_82328444;
	// lwz r3,5716(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5716);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232842c
	if (!ctx.cr6.eq) goto loc_8232842C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232841C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82328424;
	sub_824455B8(ctx, base);
	// lwz r3,5716(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5716);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232842C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82328444
	if (!ctx.cr6.eq) goto loc_82328444;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82328444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82328444:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82328450"))) PPC_WEAK_FUNC(sub_82328450);
PPC_FUNC_IMPL(__imp__sub_82328450) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82328458"))) PPC_WEAK_FUNC(sub_82328458);
PPC_FUNC_IMPL(__imp__sub_82328458) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232849c
	if (!ctx.cr6.eq) goto loc_8232849C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x82328490;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82328498;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232849C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_823284C8"))) PPC_WEAK_FUNC(sub_823284C8);
PPC_FUNC_IMPL(__imp__sub_823284C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x823284D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328500
	if (!ctx.cr6.eq) goto loc_82328500;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x823284F4;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x823284FC;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82328500:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5720(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5720);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82328534
	if (ctx.cr6.eq) goto loc_82328534;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328538
	if (!ctx.cr6.eq) goto loc_82328538;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82328520;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82328528;
	sub_8295D600(ctx, base);
	// lwz r10,5720(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5720);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x82328538
	goto loc_82328538;
loc_82328534:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82328538:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328568
	if (!ctx.cr6.eq) goto loc_82328568;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232855C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82328564;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82328568:
	// lwz r10,5720(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5720);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328594
	if (!ctx.cr6.eq) goto loc_82328594;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82328588;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82328590;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82328594:
	// lwz r10,5720(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5720);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x823285A0;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823285ec
	if (ctx.cr6.eq) goto loc_823285EC;
	// lwz r3,5720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5720);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x823285d4
	if (!ctx.cr6.eq) goto loc_823285D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823285C4;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823285CC;
	sub_824455B8(ctx, base);
	// lwz r3,5720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5720);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823285D4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823285ec
	if (!ctx.cr6.eq) goto loc_823285EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823285EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823285EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823285F8"))) PPC_WEAK_FUNC(sub_823285F8);
PPC_FUNC_IMPL(__imp__sub_823285F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82328600"))) PPC_WEAK_FUNC(sub_82328600);
PPC_FUNC_IMPL(__imp__sub_82328600) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328644
	if (!ctx.cr6.eq) goto loc_82328644;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x82328638;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82328640;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82328644:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82328670"))) PPC_WEAK_FUNC(sub_82328670);
PPC_FUNC_IMPL(__imp__sub_82328670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82328678;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823286a8
	if (!ctx.cr6.eq) goto loc_823286A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232869C;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x823286A4;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_823286A8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5724(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5724);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823286dc
	if (ctx.cr6.eq) goto loc_823286DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823286e0
	if (!ctx.cr6.eq) goto loc_823286E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x823286C8;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x823286D0;
	sub_8295D600(ctx, base);
	// lwz r10,5724(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5724);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x823286e0
	goto loc_823286E0;
loc_823286DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823286E0:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328710
	if (!ctx.cr6.eq) goto loc_82328710;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82328704;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232870C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82328710:
	// lwz r10,5724(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5724);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232873c
	if (!ctx.cr6.eq) goto loc_8232873C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82328730;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82328738;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232873C:
	// lwz r10,5724(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5724);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82328748;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82328794
	if (ctx.cr6.eq) goto loc_82328794;
	// lwz r3,5724(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5724);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232877c
	if (!ctx.cr6.eq) goto loc_8232877C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232876C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82328774;
	sub_824455B8(ctx, base);
	// lwz r3,5724(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5724);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232877C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82328794
	if (!ctx.cr6.eq) goto loc_82328794;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82328794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82328794:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823287A0"))) PPC_WEAK_FUNC(sub_823287A0);
PPC_FUNC_IMPL(__imp__sub_823287A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823287A8"))) PPC_WEAK_FUNC(sub_823287A8);
PPC_FUNC_IMPL(__imp__sub_823287A8) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823287ec
	if (!ctx.cr6.eq) goto loc_823287EC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x823287E0;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x823287E8;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_823287EC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82328818"))) PPC_WEAK_FUNC(sub_82328818);
PPC_FUNC_IMPL(__imp__sub_82328818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82328820;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328850
	if (!ctx.cr6.eq) goto loc_82328850;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82328844;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232884C;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82328850:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5728(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5728);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82328884
	if (ctx.cr6.eq) goto loc_82328884;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328888
	if (!ctx.cr6.eq) goto loc_82328888;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82328870;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82328878;
	sub_8295D600(ctx, base);
	// lwz r10,5728(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5728);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x82328888
	goto loc_82328888;
loc_82328884:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82328888:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823288b8
	if (!ctx.cr6.eq) goto loc_823288B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x823288AC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x823288B4;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_823288B8:
	// lwz r10,5728(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5728);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823288e4
	if (!ctx.cr6.eq) goto loc_823288E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823288D8;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823288E0;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823288E4:
	// lwz r10,5728(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5728);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x823288F0;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232893c
	if (ctx.cr6.eq) goto loc_8232893C;
	// lwz r3,5728(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5728);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82328924
	if (!ctx.cr6.eq) goto loc_82328924;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82328914;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232891C;
	sub_824455B8(ctx, base);
	// lwz r3,5728(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5728);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82328924:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232893c
	if (!ctx.cr6.eq) goto loc_8232893C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232893C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232893C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82328948"))) PPC_WEAK_FUNC(sub_82328948);
PPC_FUNC_IMPL(__imp__sub_82328948) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82328950"))) PPC_WEAK_FUNC(sub_82328950);
PPC_FUNC_IMPL(__imp__sub_82328950) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328994
	if (!ctx.cr6.eq) goto loc_82328994;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x82328988;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82328990;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82328994:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_823289C0"))) PPC_WEAK_FUNC(sub_823289C0);
PPC_FUNC_IMPL(__imp__sub_823289C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x823289C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823289f8
	if (!ctx.cr6.eq) goto loc_823289F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x823289EC;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x823289F4;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_823289F8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5732(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5732);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82328a2c
	if (ctx.cr6.eq) goto loc_82328A2C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328a30
	if (!ctx.cr6.eq) goto loc_82328A30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82328A18;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82328A20;
	sub_8295D600(ctx, base);
	// lwz r10,5732(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5732);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x82328a30
	goto loc_82328A30;
loc_82328A2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82328A30:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328a60
	if (!ctx.cr6.eq) goto loc_82328A60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82328A54;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82328A5C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82328A60:
	// lwz r10,5732(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5732);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328a8c
	if (!ctx.cr6.eq) goto loc_82328A8C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82328A80;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82328A88;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82328A8C:
	// lwz r10,5732(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5732);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82328A98;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82328ae4
	if (ctx.cr6.eq) goto loc_82328AE4;
	// lwz r3,5732(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5732);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82328acc
	if (!ctx.cr6.eq) goto loc_82328ACC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82328ABC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82328AC4;
	sub_824455B8(ctx, base);
	// lwz r3,5732(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5732);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82328ACC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82328ae4
	if (!ctx.cr6.eq) goto loc_82328AE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82328AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82328AE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82328AF0"))) PPC_WEAK_FUNC(sub_82328AF0);
PPC_FUNC_IMPL(__imp__sub_82328AF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82328AF8"))) PPC_WEAK_FUNC(sub_82328AF8);
PPC_FUNC_IMPL(__imp__sub_82328AF8) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328b3c
	if (!ctx.cr6.eq) goto loc_82328B3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x82328B30;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82328B38;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82328B3C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82328B68"))) PPC_WEAK_FUNC(sub_82328B68);
PPC_FUNC_IMPL(__imp__sub_82328B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82328B70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328ba0
	if (!ctx.cr6.eq) goto loc_82328BA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82328B94;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82328B9C;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82328BA0:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5736(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5736);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82328bd4
	if (ctx.cr6.eq) goto loc_82328BD4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328bd8
	if (!ctx.cr6.eq) goto loc_82328BD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82328BC0;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82328BC8;
	sub_8295D600(ctx, base);
	// lwz r10,5736(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5736);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x82328bd8
	goto loc_82328BD8;
loc_82328BD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82328BD8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328c08
	if (!ctx.cr6.eq) goto loc_82328C08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82328BFC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82328C04;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82328C08:
	// lwz r10,5736(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5736);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328c34
	if (!ctx.cr6.eq) goto loc_82328C34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82328C28;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82328C30;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82328C34:
	// lwz r10,5736(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5736);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82328C40;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82328c8c
	if (ctx.cr6.eq) goto loc_82328C8C;
	// lwz r3,5736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5736);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82328c74
	if (!ctx.cr6.eq) goto loc_82328C74;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82328C64;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82328C6C;
	sub_824455B8(ctx, base);
	// lwz r3,5736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5736);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82328C74:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82328c8c
	if (!ctx.cr6.eq) goto loc_82328C8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82328C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82328C8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82328C98"))) PPC_WEAK_FUNC(sub_82328C98);
PPC_FUNC_IMPL(__imp__sub_82328C98) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82328CA0"))) PPC_WEAK_FUNC(sub_82328CA0);
PPC_FUNC_IMPL(__imp__sub_82328CA0) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328ce4
	if (!ctx.cr6.eq) goto loc_82328CE4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x82328CD8;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82328CE0;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82328CE4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82328D10"))) PPC_WEAK_FUNC(sub_82328D10);
PPC_FUNC_IMPL(__imp__sub_82328D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82328D18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328d48
	if (!ctx.cr6.eq) goto loc_82328D48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82328D3C;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82328D44;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82328D48:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5740(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5740);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82328d7c
	if (ctx.cr6.eq) goto loc_82328D7C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328d80
	if (!ctx.cr6.eq) goto loc_82328D80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82328D68;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82328D70;
	sub_8295D600(ctx, base);
	// lwz r10,5740(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5740);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x82328d80
	goto loc_82328D80;
loc_82328D7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82328D80:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328db0
	if (!ctx.cr6.eq) goto loc_82328DB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82328DA4;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82328DAC;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82328DB0:
	// lwz r10,5740(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5740);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328ddc
	if (!ctx.cr6.eq) goto loc_82328DDC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82328DD0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82328DD8;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82328DDC:
	// lwz r10,5740(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5740);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82328DE8;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82328e34
	if (ctx.cr6.eq) goto loc_82328E34;
	// lwz r3,5740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5740);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82328e1c
	if (!ctx.cr6.eq) goto loc_82328E1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82328E0C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82328E14;
	sub_824455B8(ctx, base);
	// lwz r3,5740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5740);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82328E1C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82328e34
	if (!ctx.cr6.eq) goto loc_82328E34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82328E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82328E34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82328E40"))) PPC_WEAK_FUNC(sub_82328E40);
PPC_FUNC_IMPL(__imp__sub_82328E40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82328E48"))) PPC_WEAK_FUNC(sub_82328E48);
PPC_FUNC_IMPL(__imp__sub_82328E48) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328e8c
	if (!ctx.cr6.eq) goto loc_82328E8C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x82328E80;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82328E88;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82328E8C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82328EB8"))) PPC_WEAK_FUNC(sub_82328EB8);
PPC_FUNC_IMPL(__imp__sub_82328EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82328EC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328ef0
	if (!ctx.cr6.eq) goto loc_82328EF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82328EE4;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82328EEC;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82328EF0:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5744(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5744);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82328f24
	if (ctx.cr6.eq) goto loc_82328F24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328f28
	if (!ctx.cr6.eq) goto loc_82328F28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82328F10;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82328F18;
	sub_8295D600(ctx, base);
	// lwz r10,5744(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5744);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x82328f28
	goto loc_82328F28;
loc_82328F24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82328F28:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328f58
	if (!ctx.cr6.eq) goto loc_82328F58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82328F4C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82328F54;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82328F58:
	// lwz r10,5744(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5744);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82328f84
	if (!ctx.cr6.eq) goto loc_82328F84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82328F78;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82328F80;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82328F84:
	// lwz r10,5744(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5744);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82328F90;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82328fdc
	if (ctx.cr6.eq) goto loc_82328FDC;
	// lwz r3,5744(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5744);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82328fc4
	if (!ctx.cr6.eq) goto loc_82328FC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82328FB4;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82328FBC;
	sub_824455B8(ctx, base);
	// lwz r3,5744(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5744);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82328FC4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82328fdc
	if (!ctx.cr6.eq) goto loc_82328FDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82328FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82328FDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82328FE8"))) PPC_WEAK_FUNC(sub_82328FE8);
PPC_FUNC_IMPL(__imp__sub_82328FE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82328FF0"))) PPC_WEAK_FUNC(sub_82328FF0);
PPC_FUNC_IMPL(__imp__sub_82328FF0) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329034
	if (!ctx.cr6.eq) goto loc_82329034;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x82329028;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82329030;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82329034:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82329060"))) PPC_WEAK_FUNC(sub_82329060);
PPC_FUNC_IMPL(__imp__sub_82329060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82329068;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329098
	if (!ctx.cr6.eq) goto loc_82329098;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232908C;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82329094;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82329098:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5748(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5748);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823290cc
	if (ctx.cr6.eq) goto loc_823290CC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823290d0
	if (!ctx.cr6.eq) goto loc_823290D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x823290B8;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x823290C0;
	sub_8295D600(ctx, base);
	// lwz r10,5748(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5748);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x823290d0
	goto loc_823290D0;
loc_823290CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823290D0:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329100
	if (!ctx.cr6.eq) goto loc_82329100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x823290F4;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x823290FC;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82329100:
	// lwz r10,5748(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5748);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232912c
	if (!ctx.cr6.eq) goto loc_8232912C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82329120;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82329128;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232912C:
	// lwz r10,5748(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5748);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82329138;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82329184
	if (ctx.cr6.eq) goto loc_82329184;
	// lwz r3,5748(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5748);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232916c
	if (!ctx.cr6.eq) goto loc_8232916C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232915C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82329164;
	sub_824455B8(ctx, base);
	// lwz r3,5748(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5748);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232916C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82329184
	if (!ctx.cr6.eq) goto loc_82329184;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82329184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82329184:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82329190"))) PPC_WEAK_FUNC(sub_82329190);
PPC_FUNC_IMPL(__imp__sub_82329190) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82329198"))) PPC_WEAK_FUNC(sub_82329198);
PPC_FUNC_IMPL(__imp__sub_82329198) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823291dc
	if (!ctx.cr6.eq) goto loc_823291DC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x823291D0;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x823291D8;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_823291DC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82329208"))) PPC_WEAK_FUNC(sub_82329208);
PPC_FUNC_IMPL(__imp__sub_82329208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82329210;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329240
	if (!ctx.cr6.eq) goto loc_82329240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e06d0
	ctx.lr = 0x82329234;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x8232923C;
	sub_828EB6A0(ctx, base);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
loc_82329240:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5752(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5752);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82329274
	if (ctx.cr6.eq) goto loc_82329274;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329278
	if (!ctx.cr6.eq) goto loc_82329278;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e06d0
	ctx.lr = 0x82329260;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x82329268;
	sub_828EB6A0(ctx, base);
	// lwz r10,5752(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5752);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// b 0x82329278
	goto loc_82329278;
loc_82329274:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82329278:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823292a8
	if (!ctx.cr6.eq) goto loc_823292A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232929C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x823292A4;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_823292A8:
	// lwz r10,5752(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5752);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823292d4
	if (!ctx.cr6.eq) goto loc_823292D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823292C8;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823292D0;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823292D4:
	// lwz r10,5752(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5752);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x823292E0;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232932c
	if (ctx.cr6.eq) goto loc_8232932C;
	// lwz r3,5752(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5752);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82329314
	if (!ctx.cr6.eq) goto loc_82329314;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82329304;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232930C;
	sub_824455B8(ctx, base);
	// lwz r3,5752(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5752);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82329314:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232932c
	if (!ctx.cr6.eq) goto loc_8232932C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232932C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232932C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82329338"))) PPC_WEAK_FUNC(sub_82329338);
PPC_FUNC_IMPL(__imp__sub_82329338) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82329340"))) PPC_WEAK_FUNC(sub_82329340);
PPC_FUNC_IMPL(__imp__sub_82329340) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329384
	if (!ctx.cr6.eq) goto loc_82329384;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x828e06d0
	ctx.lr = 0x82329378;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x82329380;
	sub_828EB6A0(ctx, base);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
loc_82329384:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_823293B0"))) PPC_WEAK_FUNC(sub_823293B0);
PPC_FUNC_IMPL(__imp__sub_823293B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x823293B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823293e8
	if (!ctx.cr6.eq) goto loc_823293E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x823293DC;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x823293E4;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_823293E8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5756(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5756);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232941c
	if (ctx.cr6.eq) goto loc_8232941C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329420
	if (!ctx.cr6.eq) goto loc_82329420;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82329408;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82329410;
	sub_8295D600(ctx, base);
	// lwz r10,5756(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5756);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x82329420
	goto loc_82329420;
loc_8232941C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82329420:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329450
	if (!ctx.cr6.eq) goto loc_82329450;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82329444;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232944C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82329450:
	// lwz r10,5756(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5756);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232947c
	if (!ctx.cr6.eq) goto loc_8232947C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82329470;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82329478;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232947C:
	// lwz r10,5756(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5756);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82329488;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823294d4
	if (ctx.cr6.eq) goto loc_823294D4;
	// lwz r3,5756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5756);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x823294bc
	if (!ctx.cr6.eq) goto loc_823294BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823294AC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823294B4;
	sub_824455B8(ctx, base);
	// lwz r3,5756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5756);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823294BC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823294d4
	if (!ctx.cr6.eq) goto loc_823294D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823294D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823294D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823294E0"))) PPC_WEAK_FUNC(sub_823294E0);
PPC_FUNC_IMPL(__imp__sub_823294E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823294E8"))) PPC_WEAK_FUNC(sub_823294E8);
PPC_FUNC_IMPL(__imp__sub_823294E8) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232952c
	if (!ctx.cr6.eq) goto loc_8232952C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x82329520;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82329528;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232952C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82329558"))) PPC_WEAK_FUNC(sub_82329558);
PPC_FUNC_IMPL(__imp__sub_82329558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82329560;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329590
	if (!ctx.cr6.eq) goto loc_82329590;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82329584;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232958C;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82329590:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5760(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5760);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823295c4
	if (ctx.cr6.eq) goto loc_823295C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823295c8
	if (!ctx.cr6.eq) goto loc_823295C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x823295B0;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x823295B8;
	sub_8295D600(ctx, base);
	// lwz r10,5760(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5760);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x823295c8
	goto loc_823295C8;
loc_823295C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823295C8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823295f8
	if (!ctx.cr6.eq) goto loc_823295F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x823295EC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x823295F4;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_823295F8:
	// lwz r10,5760(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5760);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329624
	if (!ctx.cr6.eq) goto loc_82329624;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82329618;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82329620;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82329624:
	// lwz r10,5760(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5760);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82329630;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232967c
	if (ctx.cr6.eq) goto loc_8232967C;
	// lwz r3,5760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5760);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82329664
	if (!ctx.cr6.eq) goto loc_82329664;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82329654;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232965C;
	sub_824455B8(ctx, base);
	// lwz r3,5760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5760);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82329664:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232967c
	if (!ctx.cr6.eq) goto loc_8232967C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232967C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232967C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82329688"))) PPC_WEAK_FUNC(sub_82329688);
PPC_FUNC_IMPL(__imp__sub_82329688) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82329690"))) PPC_WEAK_FUNC(sub_82329690);
PPC_FUNC_IMPL(__imp__sub_82329690) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823296d4
	if (!ctx.cr6.eq) goto loc_823296D4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x823296C8;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x823296D0;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_823296D4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82329700"))) PPC_WEAK_FUNC(sub_82329700);
PPC_FUNC_IMPL(__imp__sub_82329700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82329708;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329738
	if (!ctx.cr6.eq) goto loc_82329738;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e06d0
	ctx.lr = 0x8232972C;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x82329734;
	sub_828EB6A0(ctx, base);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
loc_82329738:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5764(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5764);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232976c
	if (ctx.cr6.eq) goto loc_8232976C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329770
	if (!ctx.cr6.eq) goto loc_82329770;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e06d0
	ctx.lr = 0x82329758;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x82329760;
	sub_828EB6A0(ctx, base);
	// lwz r10,5764(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5764);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// b 0x82329770
	goto loc_82329770;
loc_8232976C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82329770:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823297a0
	if (!ctx.cr6.eq) goto loc_823297A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82329794;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232979C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_823297A0:
	// lwz r10,5764(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5764);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823297cc
	if (!ctx.cr6.eq) goto loc_823297CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823297C0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823297C8;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823297CC:
	// lwz r10,5764(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5764);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x823297D8;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82329824
	if (ctx.cr6.eq) goto loc_82329824;
	// lwz r3,5764(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5764);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232980c
	if (!ctx.cr6.eq) goto loc_8232980C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823297FC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82329804;
	sub_824455B8(ctx, base);
	// lwz r3,5764(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5764);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232980C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82329824
	if (!ctx.cr6.eq) goto loc_82329824;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82329824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82329824:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82329830"))) PPC_WEAK_FUNC(sub_82329830);
PPC_FUNC_IMPL(__imp__sub_82329830) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82329838"))) PPC_WEAK_FUNC(sub_82329838);
PPC_FUNC_IMPL(__imp__sub_82329838) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232987c
	if (!ctx.cr6.eq) goto loc_8232987C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x828e06d0
	ctx.lr = 0x82329870;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x82329878;
	sub_828EB6A0(ctx, base);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
loc_8232987C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_823298A8"))) PPC_WEAK_FUNC(sub_823298A8);
PPC_FUNC_IMPL(__imp__sub_823298A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x823298B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823298e0
	if (!ctx.cr6.eq) goto loc_823298E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x823298D4;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x823298DC;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_823298E0:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5768(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5768);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82329914
	if (ctx.cr6.eq) goto loc_82329914;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329918
	if (!ctx.cr6.eq) goto loc_82329918;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82329900;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82329908;
	sub_8295D600(ctx, base);
	// lwz r10,5768(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5768);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x82329918
	goto loc_82329918;
loc_82329914:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82329918:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329948
	if (!ctx.cr6.eq) goto loc_82329948;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232993C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82329944;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82329948:
	// lwz r10,5768(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5768);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329974
	if (!ctx.cr6.eq) goto loc_82329974;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82329968;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82329970;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82329974:
	// lwz r10,5768(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5768);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82329980;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823299cc
	if (ctx.cr6.eq) goto loc_823299CC;
	// lwz r3,5768(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5768);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x823299b4
	if (!ctx.cr6.eq) goto loc_823299B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823299A4;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823299AC;
	sub_824455B8(ctx, base);
	// lwz r3,5768(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5768);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823299B4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823299cc
	if (!ctx.cr6.eq) goto loc_823299CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823299CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823299CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823299D8"))) PPC_WEAK_FUNC(sub_823299D8);
PPC_FUNC_IMPL(__imp__sub_823299D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823299E0"))) PPC_WEAK_FUNC(sub_823299E0);
PPC_FUNC_IMPL(__imp__sub_823299E0) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329a24
	if (!ctx.cr6.eq) goto loc_82329A24;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x82329A18;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82329A20;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82329A24:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82329A50"))) PPC_WEAK_FUNC(sub_82329A50);
PPC_FUNC_IMPL(__imp__sub_82329A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82329A58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329a88
	if (!ctx.cr6.eq) goto loc_82329A88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82329A7C;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82329A84;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82329A88:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5772(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5772);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82329abc
	if (ctx.cr6.eq) goto loc_82329ABC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329ac0
	if (!ctx.cr6.eq) goto loc_82329AC0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82329AA8;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82329AB0;
	sub_8295D600(ctx, base);
	// lwz r10,5772(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5772);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x82329ac0
	goto loc_82329AC0;
loc_82329ABC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82329AC0:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329af0
	if (!ctx.cr6.eq) goto loc_82329AF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82329AE4;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82329AEC;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82329AF0:
	// lwz r10,5772(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5772);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329b1c
	if (!ctx.cr6.eq) goto loc_82329B1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82329B10;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82329B18;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82329B1C:
	// lwz r10,5772(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5772);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82329B28;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82329b74
	if (ctx.cr6.eq) goto loc_82329B74;
	// lwz r3,5772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5772);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82329b5c
	if (!ctx.cr6.eq) goto loc_82329B5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82329B4C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82329B54;
	sub_824455B8(ctx, base);
	// lwz r3,5772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5772);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82329B5C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82329b74
	if (!ctx.cr6.eq) goto loc_82329B74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82329B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82329B74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82329B80"))) PPC_WEAK_FUNC(sub_82329B80);
PPC_FUNC_IMPL(__imp__sub_82329B80) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82329B88"))) PPC_WEAK_FUNC(sub_82329B88);
PPC_FUNC_IMPL(__imp__sub_82329B88) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329bcc
	if (!ctx.cr6.eq) goto loc_82329BCC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x82329BC0;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82329BC8;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82329BCC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82329BF8"))) PPC_WEAK_FUNC(sub_82329BF8);
PPC_FUNC_IMPL(__imp__sub_82329BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82329C00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329c30
	if (!ctx.cr6.eq) goto loc_82329C30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82329C24;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82329C2C;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82329C30:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5776(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5776);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82329c64
	if (ctx.cr6.eq) goto loc_82329C64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329c68
	if (!ctx.cr6.eq) goto loc_82329C68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82329C50;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82329C58;
	sub_8295D600(ctx, base);
	// lwz r10,5776(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5776);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x82329c68
	goto loc_82329C68;
loc_82329C64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82329C68:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329c98
	if (!ctx.cr6.eq) goto loc_82329C98;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82329C8C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82329C94;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82329C98:
	// lwz r10,5776(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5776);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329cc4
	if (!ctx.cr6.eq) goto loc_82329CC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82329CB8;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82329CC0;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82329CC4:
	// lwz r10,5776(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5776);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82329CD0;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82329d1c
	if (ctx.cr6.eq) goto loc_82329D1C;
	// lwz r3,5776(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5776);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82329d04
	if (!ctx.cr6.eq) goto loc_82329D04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82329CF4;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82329CFC;
	sub_824455B8(ctx, base);
	// lwz r3,5776(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5776);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82329D04:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82329d1c
	if (!ctx.cr6.eq) goto loc_82329D1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82329D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82329D1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82329D28"))) PPC_WEAK_FUNC(sub_82329D28);
PPC_FUNC_IMPL(__imp__sub_82329D28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82329D30"))) PPC_WEAK_FUNC(sub_82329D30);
PPC_FUNC_IMPL(__imp__sub_82329D30) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329d74
	if (!ctx.cr6.eq) goto loc_82329D74;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x82329D68;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82329D70;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82329D74:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82329DA0"))) PPC_WEAK_FUNC(sub_82329DA0);
PPC_FUNC_IMPL(__imp__sub_82329DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82329DA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329dd8
	if (!ctx.cr6.eq) goto loc_82329DD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82329DCC;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82329DD4;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82329DD8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5780(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5780);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82329e0c
	if (ctx.cr6.eq) goto loc_82329E0C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329e10
	if (!ctx.cr6.eq) goto loc_82329E10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82329DF8;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82329E00;
	sub_8295D600(ctx, base);
	// lwz r10,5780(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5780);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x82329e10
	goto loc_82329E10;
loc_82329E0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82329E10:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329e40
	if (!ctx.cr6.eq) goto loc_82329E40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82329E34;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82329E3C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82329E40:
	// lwz r10,5780(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5780);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329e6c
	if (!ctx.cr6.eq) goto loc_82329E6C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82329E60;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82329E68;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82329E6C:
	// lwz r10,5780(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5780);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82329E78;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82329ec4
	if (ctx.cr6.eq) goto loc_82329EC4;
	// lwz r3,5780(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5780);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82329eac
	if (!ctx.cr6.eq) goto loc_82329EAC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82329E9C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82329EA4;
	sub_824455B8(ctx, base);
	// lwz r3,5780(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5780);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82329EAC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82329ec4
	if (!ctx.cr6.eq) goto loc_82329EC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82329EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82329EC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82329ED0"))) PPC_WEAK_FUNC(sub_82329ED0);
PPC_FUNC_IMPL(__imp__sub_82329ED0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82329ED8"))) PPC_WEAK_FUNC(sub_82329ED8);
PPC_FUNC_IMPL(__imp__sub_82329ED8) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329f1c
	if (!ctx.cr6.eq) goto loc_82329F1C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x82329F10;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82329F18;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82329F1C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82329F48"))) PPC_WEAK_FUNC(sub_82329F48);
PPC_FUNC_IMPL(__imp__sub_82329F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82329F50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329f80
	if (!ctx.cr6.eq) goto loc_82329F80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82329F74;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82329F7C;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_82329F80:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5784(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5784);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82329fb4
	if (ctx.cr6.eq) goto loc_82329FB4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329fb8
	if (!ctx.cr6.eq) goto loc_82329FB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x82329FA0;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x82329FA8;
	sub_8295D600(ctx, base);
	// lwz r10,5784(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5784);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x82329fb8
	goto loc_82329FB8;
loc_82329FB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82329FB8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329fe8
	if (!ctx.cr6.eq) goto loc_82329FE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82329FDC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82329FE4;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82329FE8:
	// lwz r10,5784(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5784);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a014
	if (!ctx.cr6.eq) goto loc_8232A014;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232A008;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232A010;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232A014:
	// lwz r10,5784(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5784);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232A020;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232a06c
	if (ctx.cr6.eq) goto loc_8232A06C;
	// lwz r3,5784(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5784);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232a054
	if (!ctx.cr6.eq) goto loc_8232A054;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232A044;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232A04C;
	sub_824455B8(ctx, base);
	// lwz r3,5784(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5784);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232A054:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232a06c
	if (!ctx.cr6.eq) goto loc_8232A06C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232A06C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232A06C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232A078"))) PPC_WEAK_FUNC(sub_8232A078);
PPC_FUNC_IMPL(__imp__sub_8232A078) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232A080"))) PPC_WEAK_FUNC(sub_8232A080);
PPC_FUNC_IMPL(__imp__sub_8232A080) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a0c4
	if (!ctx.cr6.eq) goto loc_8232A0C4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232A0B8;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232A0C0;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232A0C4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232A0F0"))) PPC_WEAK_FUNC(sub_8232A0F0);
PPC_FUNC_IMPL(__imp__sub_8232A0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232A0F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a128
	if (!ctx.cr6.eq) goto loc_8232A128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232A11C;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232A124;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232A128:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5788(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5788);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232a15c
	if (ctx.cr6.eq) goto loc_8232A15C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a160
	if (!ctx.cr6.eq) goto loc_8232A160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232A148;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232A150;
	sub_8295D600(ctx, base);
	// lwz r10,5788(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5788);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232a160
	goto loc_8232A160;
loc_8232A15C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232A160:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a190
	if (!ctx.cr6.eq) goto loc_8232A190;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232A184;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232A18C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232A190:
	// lwz r10,5788(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5788);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a1bc
	if (!ctx.cr6.eq) goto loc_8232A1BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232A1B0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232A1B8;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232A1BC:
	// lwz r10,5788(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5788);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232A1C8;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232a214
	if (ctx.cr6.eq) goto loc_8232A214;
	// lwz r3,5788(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5788);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232a1fc
	if (!ctx.cr6.eq) goto loc_8232A1FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232A1EC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232A1F4;
	sub_824455B8(ctx, base);
	// lwz r3,5788(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5788);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232A1FC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232a214
	if (!ctx.cr6.eq) goto loc_8232A214;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232A214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232A214:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232A220"))) PPC_WEAK_FUNC(sub_8232A220);
PPC_FUNC_IMPL(__imp__sub_8232A220) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232A228"))) PPC_WEAK_FUNC(sub_8232A228);
PPC_FUNC_IMPL(__imp__sub_8232A228) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a26c
	if (!ctx.cr6.eq) goto loc_8232A26C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232A260;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232A268;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232A26C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232A298"))) PPC_WEAK_FUNC(sub_8232A298);
PPC_FUNC_IMPL(__imp__sub_8232A298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232A2A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,11300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a2d0
	if (!ctx.cr6.eq) goto loc_8232A2D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8298a510
	ctx.lr = 0x8232A2C4;
	sub_8298A510(ctx, base);
	// stw r3,11300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11300, ctx.r3.u32);
	// bl 0x8299a3d8
	ctx.lr = 0x8232A2CC;
	sub_8299A3D8(ctx, base);
	// lwz r11,11300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11300);
loc_8232A2D0:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5792(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5792);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232a304
	if (ctx.cr6.eq) goto loc_8232A304;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a308
	if (!ctx.cr6.eq) goto loc_8232A308;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8298a510
	ctx.lr = 0x8232A2F0;
	sub_8298A510(ctx, base);
	// stw r3,11300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11300, ctx.r3.u32);
	// bl 0x8299a3d8
	ctx.lr = 0x8232A2F8;
	sub_8299A3D8(ctx, base);
	// lwz r10,5792(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5792);
	// lwz r11,11300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11300);
	// b 0x8232a308
	goto loc_8232A308;
loc_8232A304:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232A308:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a338
	if (!ctx.cr6.eq) goto loc_8232A338;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232A32C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232A334;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232A338:
	// lwz r10,5792(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5792);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a364
	if (!ctx.cr6.eq) goto loc_8232A364;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232A358;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232A360;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232A364:
	// lwz r10,5792(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5792);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232A370;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232a3bc
	if (ctx.cr6.eq) goto loc_8232A3BC;
	// lwz r3,5792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5792);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232a3a4
	if (!ctx.cr6.eq) goto loc_8232A3A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232A394;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232A39C;
	sub_824455B8(ctx, base);
	// lwz r3,5792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5792);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232A3A4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232a3bc
	if (!ctx.cr6.eq) goto loc_8232A3BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232A3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232A3BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232A3C8"))) PPC_WEAK_FUNC(sub_8232A3C8);
PPC_FUNC_IMPL(__imp__sub_8232A3C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232A3D0"))) PPC_WEAK_FUNC(sub_8232A3D0);
PPC_FUNC_IMPL(__imp__sub_8232A3D0) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,11300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11300);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a414
	if (!ctx.cr6.eq) goto loc_8232A414;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x8298a510
	ctx.lr = 0x8232A408;
	sub_8298A510(ctx, base);
	// stw r3,11300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11300, ctx.r3.u32);
	// bl 0x8299a3d8
	ctx.lr = 0x8232A410;
	sub_8299A3D8(ctx, base);
	// lwz r11,11300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11300);
loc_8232A414:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232A440"))) PPC_WEAK_FUNC(sub_8232A440);
PPC_FUNC_IMPL(__imp__sub_8232A440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232A448;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a478
	if (!ctx.cr6.eq) goto loc_8232A478;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232A46C;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232A474;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232A478:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5796(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5796);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232a4ac
	if (ctx.cr6.eq) goto loc_8232A4AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a4b0
	if (!ctx.cr6.eq) goto loc_8232A4B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232A498;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232A4A0;
	sub_8295D600(ctx, base);
	// lwz r10,5796(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5796);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232a4b0
	goto loc_8232A4B0;
loc_8232A4AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232A4B0:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a4e0
	if (!ctx.cr6.eq) goto loc_8232A4E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232A4D4;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232A4DC;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232A4E0:
	// lwz r10,5796(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5796);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a50c
	if (!ctx.cr6.eq) goto loc_8232A50C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232A500;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232A508;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232A50C:
	// lwz r10,5796(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5796);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232A518;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232a564
	if (ctx.cr6.eq) goto loc_8232A564;
	// lwz r3,5796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5796);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232a54c
	if (!ctx.cr6.eq) goto loc_8232A54C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232A53C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232A544;
	sub_824455B8(ctx, base);
	// lwz r3,5796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5796);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232A54C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232a564
	if (!ctx.cr6.eq) goto loc_8232A564;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232A564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232A564:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232A570"))) PPC_WEAK_FUNC(sub_8232A570);
PPC_FUNC_IMPL(__imp__sub_8232A570) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232A578"))) PPC_WEAK_FUNC(sub_8232A578);
PPC_FUNC_IMPL(__imp__sub_8232A578) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a5bc
	if (!ctx.cr6.eq) goto loc_8232A5BC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232A5B0;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232A5B8;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232A5BC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232A5E8"))) PPC_WEAK_FUNC(sub_8232A5E8);
PPC_FUNC_IMPL(__imp__sub_8232A5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232A5F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a620
	if (!ctx.cr6.eq) goto loc_8232A620;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232A614;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232A61C;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232A620:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5800(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5800);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232a654
	if (ctx.cr6.eq) goto loc_8232A654;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a658
	if (!ctx.cr6.eq) goto loc_8232A658;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232A640;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232A648;
	sub_8295D600(ctx, base);
	// lwz r10,5800(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5800);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232a658
	goto loc_8232A658;
loc_8232A654:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232A658:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a688
	if (!ctx.cr6.eq) goto loc_8232A688;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232A67C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232A684;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232A688:
	// lwz r10,5800(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5800);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a6b4
	if (!ctx.cr6.eq) goto loc_8232A6B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232A6A8;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232A6B0;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232A6B4:
	// lwz r10,5800(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5800);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232A6C0;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232a70c
	if (ctx.cr6.eq) goto loc_8232A70C;
	// lwz r3,5800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5800);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232a6f4
	if (!ctx.cr6.eq) goto loc_8232A6F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232A6E4;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232A6EC;
	sub_824455B8(ctx, base);
	// lwz r3,5800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5800);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232A6F4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232a70c
	if (!ctx.cr6.eq) goto loc_8232A70C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232A70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232A70C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232A718"))) PPC_WEAK_FUNC(sub_8232A718);
PPC_FUNC_IMPL(__imp__sub_8232A718) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232A720"))) PPC_WEAK_FUNC(sub_8232A720);
PPC_FUNC_IMPL(__imp__sub_8232A720) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a764
	if (!ctx.cr6.eq) goto loc_8232A764;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232A758;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232A760;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232A764:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232A790"))) PPC_WEAK_FUNC(sub_8232A790);
PPC_FUNC_IMPL(__imp__sub_8232A790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232A798;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a7c8
	if (!ctx.cr6.eq) goto loc_8232A7C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232A7BC;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232A7C4;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232A7C8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5804(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5804);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232a7fc
	if (ctx.cr6.eq) goto loc_8232A7FC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a800
	if (!ctx.cr6.eq) goto loc_8232A800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232A7E8;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232A7F0;
	sub_8295D600(ctx, base);
	// lwz r10,5804(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5804);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232a800
	goto loc_8232A800;
loc_8232A7FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232A800:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a830
	if (!ctx.cr6.eq) goto loc_8232A830;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232A824;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232A82C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232A830:
	// lwz r10,5804(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5804);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a85c
	if (!ctx.cr6.eq) goto loc_8232A85C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232A850;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232A858;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232A85C:
	// lwz r10,5804(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5804);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232A868;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232a8b4
	if (ctx.cr6.eq) goto loc_8232A8B4;
	// lwz r3,5804(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5804);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232a89c
	if (!ctx.cr6.eq) goto loc_8232A89C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232A88C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232A894;
	sub_824455B8(ctx, base);
	// lwz r3,5804(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5804);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232A89C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232a8b4
	if (!ctx.cr6.eq) goto loc_8232A8B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232A8B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232A8B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232A8C0"))) PPC_WEAK_FUNC(sub_8232A8C0);
PPC_FUNC_IMPL(__imp__sub_8232A8C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232A8C8"))) PPC_WEAK_FUNC(sub_8232A8C8);
PPC_FUNC_IMPL(__imp__sub_8232A8C8) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a90c
	if (!ctx.cr6.eq) goto loc_8232A90C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232A900;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232A908;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232A90C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232A938"))) PPC_WEAK_FUNC(sub_8232A938);
PPC_FUNC_IMPL(__imp__sub_8232A938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232A940;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a970
	if (!ctx.cr6.eq) goto loc_8232A970;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232A964;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232A96C;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232A970:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5808(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5808);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232a9a4
	if (ctx.cr6.eq) goto loc_8232A9A4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a9a8
	if (!ctx.cr6.eq) goto loc_8232A9A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232A990;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232A998;
	sub_8295D600(ctx, base);
	// lwz r10,5808(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5808);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232a9a8
	goto loc_8232A9A8;
loc_8232A9A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232A9A8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a9d8
	if (!ctx.cr6.eq) goto loc_8232A9D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232A9CC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232A9D4;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232A9D8:
	// lwz r10,5808(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5808);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232aa04
	if (!ctx.cr6.eq) goto loc_8232AA04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232A9F8;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232AA00;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232AA04:
	// lwz r10,5808(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5808);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232AA10;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232aa5c
	if (ctx.cr6.eq) goto loc_8232AA5C;
	// lwz r3,5808(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5808);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232aa44
	if (!ctx.cr6.eq) goto loc_8232AA44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232AA34;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232AA3C;
	sub_824455B8(ctx, base);
	// lwz r3,5808(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5808);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232AA44:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232aa5c
	if (!ctx.cr6.eq) goto loc_8232AA5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232AA5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232AA5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232AA68"))) PPC_WEAK_FUNC(sub_8232AA68);
PPC_FUNC_IMPL(__imp__sub_8232AA68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232AA70"))) PPC_WEAK_FUNC(sub_8232AA70);
PPC_FUNC_IMPL(__imp__sub_8232AA70) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232aab4
	if (!ctx.cr6.eq) goto loc_8232AAB4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232AAA8;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232AAB0;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232AAB4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232AAE0"))) PPC_WEAK_FUNC(sub_8232AAE0);
PPC_FUNC_IMPL(__imp__sub_8232AAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232AAE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ab18
	if (!ctx.cr6.eq) goto loc_8232AB18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232AB0C;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232AB14;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232AB18:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5812(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5812);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232ab4c
	if (ctx.cr6.eq) goto loc_8232AB4C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ab50
	if (!ctx.cr6.eq) goto loc_8232AB50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232AB38;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232AB40;
	sub_8295D600(ctx, base);
	// lwz r10,5812(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5812);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232ab50
	goto loc_8232AB50;
loc_8232AB4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232AB50:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ab80
	if (!ctx.cr6.eq) goto loc_8232AB80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232AB74;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232AB7C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232AB80:
	// lwz r10,5812(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5812);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232abac
	if (!ctx.cr6.eq) goto loc_8232ABAC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232ABA0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232ABA8;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232ABAC:
	// lwz r10,5812(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5812);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232ABB8;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232ac04
	if (ctx.cr6.eq) goto loc_8232AC04;
	// lwz r3,5812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5812);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232abec
	if (!ctx.cr6.eq) goto loc_8232ABEC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232ABDC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232ABE4;
	sub_824455B8(ctx, base);
	// lwz r3,5812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5812);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232ABEC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232ac04
	if (!ctx.cr6.eq) goto loc_8232AC04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232AC04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232AC04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232AC10"))) PPC_WEAK_FUNC(sub_8232AC10);
PPC_FUNC_IMPL(__imp__sub_8232AC10) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232AC18"))) PPC_WEAK_FUNC(sub_8232AC18);
PPC_FUNC_IMPL(__imp__sub_8232AC18) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ac5c
	if (!ctx.cr6.eq) goto loc_8232AC5C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232AC50;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232AC58;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232AC5C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232AC88"))) PPC_WEAK_FUNC(sub_8232AC88);
PPC_FUNC_IMPL(__imp__sub_8232AC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232AC90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232acc0
	if (!ctx.cr6.eq) goto loc_8232ACC0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e06d0
	ctx.lr = 0x8232ACB4;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x8232ACBC;
	sub_828EB6A0(ctx, base);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
loc_8232ACC0:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5816(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5816);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232acf4
	if (ctx.cr6.eq) goto loc_8232ACF4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232acf8
	if (!ctx.cr6.eq) goto loc_8232ACF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e06d0
	ctx.lr = 0x8232ACE0;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x8232ACE8;
	sub_828EB6A0(ctx, base);
	// lwz r10,5816(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5816);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// b 0x8232acf8
	goto loc_8232ACF8;
loc_8232ACF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232ACF8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ad28
	if (!ctx.cr6.eq) goto loc_8232AD28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232AD1C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232AD24;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232AD28:
	// lwz r10,5816(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5816);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ad54
	if (!ctx.cr6.eq) goto loc_8232AD54;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232AD48;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232AD50;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232AD54:
	// lwz r10,5816(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5816);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232AD60;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232adac
	if (ctx.cr6.eq) goto loc_8232ADAC;
	// lwz r3,5816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5816);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232ad94
	if (!ctx.cr6.eq) goto loc_8232AD94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232AD84;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232AD8C;
	sub_824455B8(ctx, base);
	// lwz r3,5816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5816);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232AD94:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232adac
	if (!ctx.cr6.eq) goto loc_8232ADAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232ADAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232ADAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232ADB8"))) PPC_WEAK_FUNC(sub_8232ADB8);
PPC_FUNC_IMPL(__imp__sub_8232ADB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232ADC0"))) PPC_WEAK_FUNC(sub_8232ADC0);
PPC_FUNC_IMPL(__imp__sub_8232ADC0) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ae04
	if (!ctx.cr6.eq) goto loc_8232AE04;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x828e06d0
	ctx.lr = 0x8232ADF8;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x8232AE00;
	sub_828EB6A0(ctx, base);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
loc_8232AE04:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232AE30"))) PPC_WEAK_FUNC(sub_8232AE30);
PPC_FUNC_IMPL(__imp__sub_8232AE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232AE38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ae68
	if (!ctx.cr6.eq) goto loc_8232AE68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232AE5C;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232AE64;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232AE68:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5820(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5820);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232ae9c
	if (ctx.cr6.eq) goto loc_8232AE9C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232aea0
	if (!ctx.cr6.eq) goto loc_8232AEA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232AE88;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232AE90;
	sub_8295D600(ctx, base);
	// lwz r10,5820(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5820);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232aea0
	goto loc_8232AEA0;
loc_8232AE9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232AEA0:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232aed0
	if (!ctx.cr6.eq) goto loc_8232AED0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232AEC4;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232AECC;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232AED0:
	// lwz r10,5820(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5820);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232aefc
	if (!ctx.cr6.eq) goto loc_8232AEFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232AEF0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232AEF8;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232AEFC:
	// lwz r10,5820(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5820);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232AF08;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232af54
	if (ctx.cr6.eq) goto loc_8232AF54;
	// lwz r3,5820(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5820);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232af3c
	if (!ctx.cr6.eq) goto loc_8232AF3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232AF2C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232AF34;
	sub_824455B8(ctx, base);
	// lwz r3,5820(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5820);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232AF3C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232af54
	if (!ctx.cr6.eq) goto loc_8232AF54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232AF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232AF54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232AF60"))) PPC_WEAK_FUNC(sub_8232AF60);
PPC_FUNC_IMPL(__imp__sub_8232AF60) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232AF68"))) PPC_WEAK_FUNC(sub_8232AF68);
PPC_FUNC_IMPL(__imp__sub_8232AF68) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232afac
	if (!ctx.cr6.eq) goto loc_8232AFAC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232AFA0;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232AFA8;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232AFAC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232AFD8"))) PPC_WEAK_FUNC(sub_8232AFD8);
PPC_FUNC_IMPL(__imp__sub_8232AFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232AFE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b010
	if (!ctx.cr6.eq) goto loc_8232B010;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232B004;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232B00C;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232B010:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5824(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5824);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232b044
	if (ctx.cr6.eq) goto loc_8232B044;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b048
	if (!ctx.cr6.eq) goto loc_8232B048;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232B030;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232B038;
	sub_8295D600(ctx, base);
	// lwz r10,5824(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5824);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232b048
	goto loc_8232B048;
loc_8232B044:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232B048:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b078
	if (!ctx.cr6.eq) goto loc_8232B078;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232B06C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232B074;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232B078:
	// lwz r10,5824(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5824);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b0a4
	if (!ctx.cr6.eq) goto loc_8232B0A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232B098;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232B0A0;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232B0A4:
	// lwz r10,5824(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5824);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232B0B0;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232b0fc
	if (ctx.cr6.eq) goto loc_8232B0FC;
	// lwz r3,5824(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5824);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232b0e4
	if (!ctx.cr6.eq) goto loc_8232B0E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232B0D4;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232B0DC;
	sub_824455B8(ctx, base);
	// lwz r3,5824(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5824);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232B0E4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232b0fc
	if (!ctx.cr6.eq) goto loc_8232B0FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232B0FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232B0FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232B108"))) PPC_WEAK_FUNC(sub_8232B108);
PPC_FUNC_IMPL(__imp__sub_8232B108) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B110"))) PPC_WEAK_FUNC(sub_8232B110);
PPC_FUNC_IMPL(__imp__sub_8232B110) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b154
	if (!ctx.cr6.eq) goto loc_8232B154;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232B148;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232B150;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232B154:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232B180"))) PPC_WEAK_FUNC(sub_8232B180);
PPC_FUNC_IMPL(__imp__sub_8232B180) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B188"))) PPC_WEAK_FUNC(sub_8232B188);
PPC_FUNC_IMPL(__imp__sub_8232B188) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B190"))) PPC_WEAK_FUNC(sub_8232B190);
PPC_FUNC_IMPL(__imp__sub_8232B190) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B198"))) PPC_WEAK_FUNC(sub_8232B198);
PPC_FUNC_IMPL(__imp__sub_8232B198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232B1A0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82e28f14
	ctx.lr = 0x8232B1A8;
	__savefpr_27(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829613f0
	ctx.lr = 0x8232B1B8;
	sub_829613F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x829adb90
	ctx.lr = 0x8232B1C8;
	sub_829ADB90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827094b0
	ctx.lr = 0x8232B1D4;
	sub_827094B0(ctx, base);
	// lwz r11,1048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f0,500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f13,508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// fsubs f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f29,-13892(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -13892);
	ctx.f29.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,3
	ctx.r29.s64 = 3;
	// lfs f30,-13896(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13896);
	ctx.f30.f64 = double(temp.f32);
	// lfs f27,-28552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28552);
	ctx.f27.f64 = double(temp.f32);
	// lfs f31,-3200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3200);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8232b2a4
	if (ctx.cr6.eq) goto loc_8232B2A4;
	// lwz r11,1072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b2a4
	if (!ctx.cr6.eq) goto loc_8232B2A4;
	// fsubs f13,f28,f31
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// addi r10,r31,824
	ctx.r10.s64 = ctx.r31.s64 + 824;
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
	// lfs f12,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,1048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stb r29,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r29.u8);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f29,180(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stb r29,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r29.u8);
	// fmadds f0,f13,f27,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f0.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232B2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232B2A4:
	// lwz r11,1052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232b340
	if (ctx.cr6.eq) goto loc_8232B340;
	// lwz r11,1072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b340
	if (!ctx.cr6.eq) goto loc_8232B340;
	// fsubs f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// addi r10,r31,824
	ctx.r10.s64 = ctx.r31.s64 + 824;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// lfs f13,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,1052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// lfs f12,504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stb r29,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r29.u8);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f29,112(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f29,116(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stb r29,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r29.u8);
	// fmadds f0,f0,f27,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232B340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232B340:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827096e8
	ctx.lr = 0x8232B348;
	sub_827096E8(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82e28f60
	ctx.lr = 0x8232B354;
	__restfpr_27(ctx, base);
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232B358"))) PPC_WEAK_FUNC(sub_8232B358);
PPC_FUNC_IMPL(__imp__sub_8232B358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x8232B360;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r4,r11,-3196
	ctx.r4.s64 = ctx.r11.s64 + -3196;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8243b750
	ctx.lr = 0x8232B388;
	sub_8243B750(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8232b3b8
	if (!ctx.cr6.eq) goto loc_8232B3B8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8232b3b8
	if (!ctx.cr6.eq) goto loc_8232B3B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
loc_8232B3B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232B3C8"))) PPC_WEAK_FUNC(sub_8232B3C8);
PPC_FUNC_IMPL(__imp__sub_8232B3C8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-3160
	ctx.r4.s64 = ctx.r11.s64 + -3160;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8243b750
	ctx.lr = 0x8232B400;
	sub_8243B750(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8232b448
	if (!ctx.cr6.eq) goto loc_8232B448;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8232b448
	if (!ctx.cr6.eq) goto loc_8232B448;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-3180
	ctx.r4.s64 = ctx.r11.s64 + -3180;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8243b750
	ctx.lr = 0x8232B438;
	sub_8243B750(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_8232B448:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829713c8
	ctx.lr = 0x8232B458;
	sub_829713C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8232B478"))) PPC_WEAK_FUNC(sub_8232B478);
PPC_FUNC_IMPL(__imp__sub_8232B478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232B480;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b4b0
	if (!ctx.cr6.eq) goto loc_8232B4B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e06d0
	ctx.lr = 0x8232B4A4;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x8232B4AC;
	sub_828EB6A0(ctx, base);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
loc_8232B4B0:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5828(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5828);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232b4e4
	if (ctx.cr6.eq) goto loc_8232B4E4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b4e8
	if (!ctx.cr6.eq) goto loc_8232B4E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e06d0
	ctx.lr = 0x8232B4D0;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x8232B4D8;
	sub_828EB6A0(ctx, base);
	// lwz r10,5828(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5828);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// b 0x8232b4e8
	goto loc_8232B4E8;
loc_8232B4E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232B4E8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b518
	if (!ctx.cr6.eq) goto loc_8232B518;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232B50C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232B514;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232B518:
	// lwz r10,5828(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5828);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b544
	if (!ctx.cr6.eq) goto loc_8232B544;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232B538;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232B540;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232B544:
	// lwz r10,5828(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5828);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232B550;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232b59c
	if (ctx.cr6.eq) goto loc_8232B59C;
	// lwz r3,5828(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5828);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232b584
	if (!ctx.cr6.eq) goto loc_8232B584;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232B574;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232B57C;
	sub_824455B8(ctx, base);
	// lwz r3,5828(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5828);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232B584:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232b59c
	if (!ctx.cr6.eq) goto loc_8232B59C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232B59C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232B59C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232B5A8"))) PPC_WEAK_FUNC(sub_8232B5A8);
PPC_FUNC_IMPL(__imp__sub_8232B5A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B5B0"))) PPC_WEAK_FUNC(sub_8232B5B0);
PPC_FUNC_IMPL(__imp__sub_8232B5B0) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b5f4
	if (!ctx.cr6.eq) goto loc_8232B5F4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x828e06d0
	ctx.lr = 0x8232B5E8;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x8232B5F0;
	sub_828EB6A0(ctx, base);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
loc_8232B5F4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232B620"))) PPC_WEAK_FUNC(sub_8232B620);
PPC_FUNC_IMPL(__imp__sub_8232B620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232B628;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b658
	if (!ctx.cr6.eq) goto loc_8232B658;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232B64C;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232B654;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232B658:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5832(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5832);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232b68c
	if (ctx.cr6.eq) goto loc_8232B68C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b690
	if (!ctx.cr6.eq) goto loc_8232B690;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232B678;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232B680;
	sub_8295D600(ctx, base);
	// lwz r10,5832(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5832);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232b690
	goto loc_8232B690;
loc_8232B68C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232B690:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b6c0
	if (!ctx.cr6.eq) goto loc_8232B6C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232B6B4;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232B6BC;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232B6C0:
	// lwz r10,5832(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5832);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b6ec
	if (!ctx.cr6.eq) goto loc_8232B6EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232B6E0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232B6E8;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232B6EC:
	// lwz r10,5832(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5832);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232B6F8;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232b744
	if (ctx.cr6.eq) goto loc_8232B744;
	// lwz r3,5832(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5832);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232b72c
	if (!ctx.cr6.eq) goto loc_8232B72C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232B71C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232B724;
	sub_824455B8(ctx, base);
	// lwz r3,5832(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5832);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232B72C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232b744
	if (!ctx.cr6.eq) goto loc_8232B744;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232B744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232B744:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232B750"))) PPC_WEAK_FUNC(sub_8232B750);
PPC_FUNC_IMPL(__imp__sub_8232B750) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B758"))) PPC_WEAK_FUNC(sub_8232B758);
PPC_FUNC_IMPL(__imp__sub_8232B758) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b79c
	if (!ctx.cr6.eq) goto loc_8232B79C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232B790;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232B798;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232B79C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232B7C8"))) PPC_WEAK_FUNC(sub_8232B7C8);
PPC_FUNC_IMPL(__imp__sub_8232B7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232B7D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b800
	if (!ctx.cr6.eq) goto loc_8232B800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232B7F4;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232B7FC;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232B800:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5836(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5836);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232b834
	if (ctx.cr6.eq) goto loc_8232B834;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b838
	if (!ctx.cr6.eq) goto loc_8232B838;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232B820;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232B828;
	sub_8295D600(ctx, base);
	// lwz r10,5836(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5836);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232b838
	goto loc_8232B838;
loc_8232B834:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232B838:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b868
	if (!ctx.cr6.eq) goto loc_8232B868;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232B85C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232B864;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232B868:
	// lwz r10,5836(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5836);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b894
	if (!ctx.cr6.eq) goto loc_8232B894;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232B888;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232B890;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232B894:
	// lwz r10,5836(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5836);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232B8A0;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232b8ec
	if (ctx.cr6.eq) goto loc_8232B8EC;
	// lwz r3,5836(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5836);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232b8d4
	if (!ctx.cr6.eq) goto loc_8232B8D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232B8C4;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232B8CC;
	sub_824455B8(ctx, base);
	// lwz r3,5836(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5836);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232B8D4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232b8ec
	if (!ctx.cr6.eq) goto loc_8232B8EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232B8EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232B8EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232B8F8"))) PPC_WEAK_FUNC(sub_8232B8F8);
PPC_FUNC_IMPL(__imp__sub_8232B8F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B900"))) PPC_WEAK_FUNC(sub_8232B900);
PPC_FUNC_IMPL(__imp__sub_8232B900) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b944
	if (!ctx.cr6.eq) goto loc_8232B944;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232B938;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232B940;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232B944:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232B970"))) PPC_WEAK_FUNC(sub_8232B970);
PPC_FUNC_IMPL(__imp__sub_8232B970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232B978;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b9a8
	if (!ctx.cr6.eq) goto loc_8232B9A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232B99C;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232B9A4;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232B9A8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5840(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5840);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232b9dc
	if (ctx.cr6.eq) goto loc_8232B9DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b9e0
	if (!ctx.cr6.eq) goto loc_8232B9E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232B9C8;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232B9D0;
	sub_8295D600(ctx, base);
	// lwz r10,5840(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5840);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232b9e0
	goto loc_8232B9E0;
loc_8232B9DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232B9E0:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ba10
	if (!ctx.cr6.eq) goto loc_8232BA10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232BA04;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232BA0C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232BA10:
	// lwz r10,5840(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5840);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ba3c
	if (!ctx.cr6.eq) goto loc_8232BA3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232BA30;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232BA38;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232BA3C:
	// lwz r10,5840(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5840);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232BA48;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232ba94
	if (ctx.cr6.eq) goto loc_8232BA94;
	// lwz r3,5840(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5840);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232ba7c
	if (!ctx.cr6.eq) goto loc_8232BA7C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232BA6C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232BA74;
	sub_824455B8(ctx, base);
	// lwz r3,5840(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5840);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232BA7C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232ba94
	if (!ctx.cr6.eq) goto loc_8232BA94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232BA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232BA94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232BAA0"))) PPC_WEAK_FUNC(sub_8232BAA0);
PPC_FUNC_IMPL(__imp__sub_8232BAA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232BAA8"))) PPC_WEAK_FUNC(sub_8232BAA8);
PPC_FUNC_IMPL(__imp__sub_8232BAA8) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232baec
	if (!ctx.cr6.eq) goto loc_8232BAEC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232BAE0;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232BAE8;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232BAEC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232BB18"))) PPC_WEAK_FUNC(sub_8232BB18);
PPC_FUNC_IMPL(__imp__sub_8232BB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232BB20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232bb50
	if (!ctx.cr6.eq) goto loc_8232BB50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e06d0
	ctx.lr = 0x8232BB44;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x8232BB4C;
	sub_828EB6A0(ctx, base);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
loc_8232BB50:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5844(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5844);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232bb84
	if (ctx.cr6.eq) goto loc_8232BB84;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232bb88
	if (!ctx.cr6.eq) goto loc_8232BB88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e06d0
	ctx.lr = 0x8232BB70;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x8232BB78;
	sub_828EB6A0(ctx, base);
	// lwz r10,5844(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5844);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// b 0x8232bb88
	goto loc_8232BB88;
loc_8232BB84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232BB88:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232bbb8
	if (!ctx.cr6.eq) goto loc_8232BBB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232BBAC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232BBB4;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232BBB8:
	// lwz r10,5844(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5844);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232bbe4
	if (!ctx.cr6.eq) goto loc_8232BBE4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232BBD8;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232BBE0;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232BBE4:
	// lwz r10,5844(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5844);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232BBF0;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232bc3c
	if (ctx.cr6.eq) goto loc_8232BC3C;
	// lwz r3,5844(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5844);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232bc24
	if (!ctx.cr6.eq) goto loc_8232BC24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232BC14;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232BC1C;
	sub_824455B8(ctx, base);
	// lwz r3,5844(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5844);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232BC24:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232bc3c
	if (!ctx.cr6.eq) goto loc_8232BC3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232BC3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232BC3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232BC48"))) PPC_WEAK_FUNC(sub_8232BC48);
PPC_FUNC_IMPL(__imp__sub_8232BC48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232BC50"))) PPC_WEAK_FUNC(sub_8232BC50);
PPC_FUNC_IMPL(__imp__sub_8232BC50) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232bc94
	if (!ctx.cr6.eq) goto loc_8232BC94;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x828e06d0
	ctx.lr = 0x8232BC88;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x8232BC90;
	sub_828EB6A0(ctx, base);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
loc_8232BC94:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232BCC0"))) PPC_WEAK_FUNC(sub_8232BCC0);
PPC_FUNC_IMPL(__imp__sub_8232BCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232BCC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232bcf8
	if (!ctx.cr6.eq) goto loc_8232BCF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232BCEC;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232BCF4;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232BCF8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5848);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232bd2c
	if (ctx.cr6.eq) goto loc_8232BD2C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232bd30
	if (!ctx.cr6.eq) goto loc_8232BD30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232BD18;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232BD20;
	sub_8295D600(ctx, base);
	// lwz r10,5848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5848);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232bd30
	goto loc_8232BD30;
loc_8232BD2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232BD30:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232bd60
	if (!ctx.cr6.eq) goto loc_8232BD60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232BD54;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232BD5C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232BD60:
	// lwz r10,5848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5848);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232bd8c
	if (!ctx.cr6.eq) goto loc_8232BD8C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232BD80;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232BD88;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232BD8C:
	// lwz r10,5848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5848);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232BD98;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232bde4
	if (ctx.cr6.eq) goto loc_8232BDE4;
	// lwz r3,5848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5848);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232bdcc
	if (!ctx.cr6.eq) goto loc_8232BDCC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232BDBC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232BDC4;
	sub_824455B8(ctx, base);
	// lwz r3,5848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5848);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232BDCC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232bde4
	if (!ctx.cr6.eq) goto loc_8232BDE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232BDE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232BDE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232BDF0"))) PPC_WEAK_FUNC(sub_8232BDF0);
PPC_FUNC_IMPL(__imp__sub_8232BDF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232BDF8"))) PPC_WEAK_FUNC(sub_8232BDF8);
PPC_FUNC_IMPL(__imp__sub_8232BDF8) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232be3c
	if (!ctx.cr6.eq) goto loc_8232BE3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232BE30;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232BE38;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232BE3C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232BE68"))) PPC_WEAK_FUNC(sub_8232BE68);
PPC_FUNC_IMPL(__imp__sub_8232BE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232BE70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232bea0
	if (!ctx.cr6.eq) goto loc_8232BEA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232BE94;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232BE9C;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232BEA0:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5852(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5852);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232bed4
	if (ctx.cr6.eq) goto loc_8232BED4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232bed8
	if (!ctx.cr6.eq) goto loc_8232BED8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232BEC0;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232BEC8;
	sub_8295D600(ctx, base);
	// lwz r10,5852(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5852);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232bed8
	goto loc_8232BED8;
loc_8232BED4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232BED8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232bf08
	if (!ctx.cr6.eq) goto loc_8232BF08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232BEFC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232BF04;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232BF08:
	// lwz r10,5852(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5852);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232bf34
	if (!ctx.cr6.eq) goto loc_8232BF34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232BF28;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232BF30;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232BF34:
	// lwz r10,5852(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5852);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232BF40;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232bf8c
	if (ctx.cr6.eq) goto loc_8232BF8C;
	// lwz r3,5852(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5852);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232bf74
	if (!ctx.cr6.eq) goto loc_8232BF74;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232BF64;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232BF6C;
	sub_824455B8(ctx, base);
	// lwz r3,5852(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5852);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232BF74:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232bf8c
	if (!ctx.cr6.eq) goto loc_8232BF8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232BF8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232BF8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232BF98"))) PPC_WEAK_FUNC(sub_8232BF98);
PPC_FUNC_IMPL(__imp__sub_8232BF98) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232BFA0"))) PPC_WEAK_FUNC(sub_8232BFA0);
PPC_FUNC_IMPL(__imp__sub_8232BFA0) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232bfe4
	if (!ctx.cr6.eq) goto loc_8232BFE4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232BFD8;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232BFE0;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232BFE4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232C010"))) PPC_WEAK_FUNC(sub_8232C010);
PPC_FUNC_IMPL(__imp__sub_8232C010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232C018;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c048
	if (!ctx.cr6.eq) goto loc_8232C048;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232C03C;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232C044;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232C048:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5856(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5856);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232c07c
	if (ctx.cr6.eq) goto loc_8232C07C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c080
	if (!ctx.cr6.eq) goto loc_8232C080;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232C068;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232C070;
	sub_8295D600(ctx, base);
	// lwz r10,5856(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5856);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232c080
	goto loc_8232C080;
loc_8232C07C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232C080:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c0b0
	if (!ctx.cr6.eq) goto loc_8232C0B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232C0A4;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232C0AC;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232C0B0:
	// lwz r10,5856(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5856);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c0dc
	if (!ctx.cr6.eq) goto loc_8232C0DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232C0D0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232C0D8;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232C0DC:
	// lwz r10,5856(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5856);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232C0E8;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232c134
	if (ctx.cr6.eq) goto loc_8232C134;
	// lwz r3,5856(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5856);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232c11c
	if (!ctx.cr6.eq) goto loc_8232C11C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232C10C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232C114;
	sub_824455B8(ctx, base);
	// lwz r3,5856(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5856);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232C11C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232c134
	if (!ctx.cr6.eq) goto loc_8232C134;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232C134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232C134:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C140"))) PPC_WEAK_FUNC(sub_8232C140);
PPC_FUNC_IMPL(__imp__sub_8232C140) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C148"))) PPC_WEAK_FUNC(sub_8232C148);
PPC_FUNC_IMPL(__imp__sub_8232C148) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c18c
	if (!ctx.cr6.eq) goto loc_8232C18C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232C180;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232C188;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232C18C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232C1B8"))) PPC_WEAK_FUNC(sub_8232C1B8);
PPC_FUNC_IMPL(__imp__sub_8232C1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232C1C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c1f0
	if (!ctx.cr6.eq) goto loc_8232C1F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e06d0
	ctx.lr = 0x8232C1E4;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x8232C1EC;
	sub_828EB6A0(ctx, base);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
loc_8232C1F0:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5860(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5860);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232c224
	if (ctx.cr6.eq) goto loc_8232C224;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c228
	if (!ctx.cr6.eq) goto loc_8232C228;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e06d0
	ctx.lr = 0x8232C210;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x8232C218;
	sub_828EB6A0(ctx, base);
	// lwz r10,5860(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5860);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// b 0x8232c228
	goto loc_8232C228;
loc_8232C224:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232C228:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c258
	if (!ctx.cr6.eq) goto loc_8232C258;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232C24C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232C254;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232C258:
	// lwz r10,5860(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5860);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c284
	if (!ctx.cr6.eq) goto loc_8232C284;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232C278;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232C280;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232C284:
	// lwz r10,5860(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5860);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232C290;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232c2dc
	if (ctx.cr6.eq) goto loc_8232C2DC;
	// lwz r3,5860(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5860);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232c2c4
	if (!ctx.cr6.eq) goto loc_8232C2C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232C2B4;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232C2BC;
	sub_824455B8(ctx, base);
	// lwz r3,5860(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5860);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232C2C4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232c2dc
	if (!ctx.cr6.eq) goto loc_8232C2DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232C2DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232C2DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C2E8"))) PPC_WEAK_FUNC(sub_8232C2E8);
PPC_FUNC_IMPL(__imp__sub_8232C2E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C2F0"))) PPC_WEAK_FUNC(sub_8232C2F0);
PPC_FUNC_IMPL(__imp__sub_8232C2F0) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c334
	if (!ctx.cr6.eq) goto loc_8232C334;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x828e06d0
	ctx.lr = 0x8232C328;
	sub_828E06D0(ctx, base);
	// stw r3,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r3.u32);
	// bl 0x828eb6a0
	ctx.lr = 0x8232C330;
	sub_828EB6A0(ctx, base);
	// lwz r11,8128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
loc_8232C334:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232C360"))) PPC_WEAK_FUNC(sub_8232C360);
PPC_FUNC_IMPL(__imp__sub_8232C360) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x829f62e0
	sub_829F62E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C370"))) PPC_WEAK_FUNC(sub_8232C370);
PPC_FUNC_IMPL(__imp__sub_8232C370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C378"))) PPC_WEAK_FUNC(sub_8232C378);
PPC_FUNC_IMPL(__imp__sub_8232C378) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// bl 0x82963900
	ctx.lr = 0x8232C39C;
	sub_82963900(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8232c3c0
	if (ctx.cr6.eq) goto loc_8232C3C0;
	// lfs f13,1256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8232c3c0
	if (!ctx.cr6.gt) goto loc_8232C3C0;
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
loc_8232C3C0:
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

__attribute__((alias("__imp__sub_8232C3D8"))) PPC_WEAK_FUNC(sub_8232C3D8);
PPC_FUNC_IMPL(__imp__sub_8232C3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x8232C3E0;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232c4a4
	if (ctx.cr6.eq) goto loc_8232C4A4;
	// addi r30,r31,1240
	ctx.r30.s64 = ctx.r31.s64 + 1240;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829a57a8
	ctx.lr = 0x8232C414;
	sub_829A57A8(ctx, base);
	// addi r29,r31,1232
	ctx.r29.s64 = ctx.r31.s64 + 1232;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a57a8
	ctx.lr = 0x8232C42C;
	sub_829A57A8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f31,-13892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// beq cr6,0x8232c448
	if (ctx.cr6.eq) goto loc_8232C448;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bne cr6,0x8232c4a4
	if (!ctx.cr6.eq) goto loc_8232C4A4;
loc_8232C448:
	// lwz r3,1116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232C46C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x8232c488
	if (!ctx.cr6.eq) goto loc_8232C488;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829a5858
	ctx.lr = 0x8232C488;
	sub_829A5858(ctx, base);
loc_8232C488:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bne cr6,0x8232c4a4
	if (!ctx.cr6.eq) goto loc_8232C4A4;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a5858
	ctx.lr = 0x8232C4A4;
	sub_829A5858(ctx, base);
loc_8232C4A4:
	// lfs f0,504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// lfs f13,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x82963900
	ctx.lr = 0x8232C4B8;
	sub_82963900(ctx, base);
	// lfs f13,1256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8232c4d4
	if (!ctx.cr6.gt) goto loc_8232C4D4;
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
loc_8232C4D4:
	// lbz r11,1044(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1044);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c4ec
	if (!ctx.cr6.eq) goto loc_8232C4EC;
	// lfs f13,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8232c4f0
	goto loc_8232C4F0;
loc_8232C4EC:
	// lfs f13,508(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f13.f64 = double(temp.f32);
loc_8232C4F0:
	// fadds f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C508"))) PPC_WEAK_FUNC(sub_8232C508);
PPC_FUNC_IMPL(__imp__sub_8232C508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x8232C510;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82e28f18
	ctx.lr = 0x8232C518;
	__savefpr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x829b12b8
	ctx.lr = 0x8232C528;
	sub_829B12B8(ctx, base);
	// lwz r11,1112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f29,-28552(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28552);
	ctx.f29.f64 = double(temp.f32);
	// li r30,3
	ctx.r30.s64 = 3;
	// lfs f31,-13892(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-13896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x8232c5f8
	if (ctx.cr6.eq) goto loc_8232C5F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829b1140
	ctx.lr = 0x8232C55C;
	sub_829B1140(ctx, base);
	// lfs f0,500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f12.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,1056
	ctx.r3.s64 = ctx.r31.s64 + 1056;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stb r30,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r30.u8);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stb r30,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r30.u8);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x829a57a8
	ctx.lr = 0x8232C5BC;
	sub_829A57A8(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stfs f1,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r3,1112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232C5F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232C5F8:
	// lwz r11,1108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232c6ac
	if (ctx.cr6.eq) goto loc_8232C6AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232c3d8
	ctx.lr = 0x8232C60C;
	sub_8232C3D8(ctx, base);
	// lfs f0,500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f12.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,1056
	ctx.r3.s64 = ctx.r31.s64 + 1056;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stb r30,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r30.u8);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stb r30,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r30.u8);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f13,f12,f29
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f0,f12,f29,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x829a57a8
	ctx.lr = 0x8232C670;
	sub_829A57A8(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r3,1108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// stfs f1,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232C6AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232C6AC:
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232c784
	if (ctx.cr6.eq) goto loc_8232C784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232c3d8
	ctx.lr = 0x8232C6C0;
	sub_8232C3D8(ctx, base);
	// addi r27,r31,1064
	ctx.r27.s64 = ctx.r31.s64 + 1064;
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stb r30,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r30.u8);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stb r30,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r30.u8);
	// bl 0x829a57a8
	ctx.lr = 0x8232C700;
	sub_829A57A8(ctx, base);
	// lfs f0,500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fnmsubs f0,f1,f29,f28
	ctx.f0.f64 = double(float(-(ctx.f1.f64 * ctx.f29.f64 - ctx.f28.f64)));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x829a57a8
	ctx.lr = 0x8232C720;
	sub_829A57A8(ctx, base);
	// lfs f0,508(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,1056
	ctx.r3.s64 = ctx.r31.s64 + 1056;
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x829a57a8
	ctx.lr = 0x8232C748;
	sub_829A57A8(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r3,1104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// stfs f1,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232C784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232C784:
	// lwz r11,828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232c858
	if (ctx.cr6.eq) goto loc_8232C858;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829b1140
	ctx.lr = 0x8232C798;
	sub_829B1140(ctx, base);
	// addi r27,r31,1064
	ctx.r27.s64 = ctx.r31.s64 + 1064;
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stb r30,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r30.u8);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stb r30,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r30.u8);
	// bl 0x829a57a8
	ctx.lr = 0x8232C7D8;
	sub_829A57A8(ctx, base);
	// lfs f0,500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fnmsubs f0,f1,f29,f28
	ctx.f0.f64 = double(float(-(ctx.f1.f64 * ctx.f29.f64 - ctx.f28.f64)));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x829a57a8
	ctx.lr = 0x8232C7F8;
	sub_829A57A8(ctx, base);
	// lfs f0,508(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r3,r31,1056
	ctx.r3.s64 = ctx.r31.s64 + 1056;
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x829a57a8
	ctx.lr = 0x8232C81C;
	sub_829A57A8(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r3,828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	// stfs f1,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232C858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232C858:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82e28f64
	ctx.lr = 0x8232C864;
	__restfpr_28(ctx, base);
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C868"))) PPC_WEAK_FUNC(sub_8232C868);
PPC_FUNC_IMPL(__imp__sub_8232C868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232C870;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c8a0
	if (!ctx.cr6.eq) goto loc_8232C8A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232C894;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232C89C;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232C8A0:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5864(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5864);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232c8d4
	if (ctx.cr6.eq) goto loc_8232C8D4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c8d8
	if (!ctx.cr6.eq) goto loc_8232C8D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232C8C0;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232C8C8;
	sub_8295D600(ctx, base);
	// lwz r10,5864(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5864);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232c8d8
	goto loc_8232C8D8;
loc_8232C8D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232C8D8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c908
	if (!ctx.cr6.eq) goto loc_8232C908;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232C8FC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232C904;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232C908:
	// lwz r10,5864(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5864);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c934
	if (!ctx.cr6.eq) goto loc_8232C934;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232C928;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232C930;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232C934:
	// lwz r10,5864(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5864);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232C940;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232c98c
	if (ctx.cr6.eq) goto loc_8232C98C;
	// lwz r3,5864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5864);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232c974
	if (!ctx.cr6.eq) goto loc_8232C974;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232C964;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232C96C;
	sub_824455B8(ctx, base);
	// lwz r3,5864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5864);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232C974:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232c98c
	if (!ctx.cr6.eq) goto loc_8232C98C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232C98C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232C98C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C998"))) PPC_WEAK_FUNC(sub_8232C998);
PPC_FUNC_IMPL(__imp__sub_8232C998) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C9A0"))) PPC_WEAK_FUNC(sub_8232C9A0);
PPC_FUNC_IMPL(__imp__sub_8232C9A0) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c9e4
	if (!ctx.cr6.eq) goto loc_8232C9E4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232C9D8;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232C9E0;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232C9E4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232CA10"))) PPC_WEAK_FUNC(sub_8232CA10);
PPC_FUNC_IMPL(__imp__sub_8232CA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232CA18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ca48
	if (!ctx.cr6.eq) goto loc_8232CA48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232CA3C;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232CA44;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232CA48:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5868(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5868);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232ca7c
	if (ctx.cr6.eq) goto loc_8232CA7C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ca80
	if (!ctx.cr6.eq) goto loc_8232CA80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232CA68;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232CA70;
	sub_8295D600(ctx, base);
	// lwz r10,5868(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5868);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232ca80
	goto loc_8232CA80;
loc_8232CA7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232CA80:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cab0
	if (!ctx.cr6.eq) goto loc_8232CAB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232CAA4;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232CAAC;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232CAB0:
	// lwz r10,5868(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5868);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cadc
	if (!ctx.cr6.eq) goto loc_8232CADC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232CAD0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232CAD8;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232CADC:
	// lwz r10,5868(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5868);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232CAE8;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232cb34
	if (ctx.cr6.eq) goto loc_8232CB34;
	// lwz r3,5868(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5868);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232cb1c
	if (!ctx.cr6.eq) goto loc_8232CB1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232CB0C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232CB14;
	sub_824455B8(ctx, base);
	// lwz r3,5868(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5868);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232CB1C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232cb34
	if (!ctx.cr6.eq) goto loc_8232CB34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232CB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232CB34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232CB40"))) PPC_WEAK_FUNC(sub_8232CB40);
PPC_FUNC_IMPL(__imp__sub_8232CB40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CB48"))) PPC_WEAK_FUNC(sub_8232CB48);
PPC_FUNC_IMPL(__imp__sub_8232CB48) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cb8c
	if (!ctx.cr6.eq) goto loc_8232CB8C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232CB80;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232CB88;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232CB8C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232CBB8"))) PPC_WEAK_FUNC(sub_8232CBB8);
PPC_FUNC_IMPL(__imp__sub_8232CBB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x829c4038
	sub_829C4038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232CBC0"))) PPC_WEAK_FUNC(sub_8232CBC0);
PPC_FUNC_IMPL(__imp__sub_8232CBC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CBC8"))) PPC_WEAK_FUNC(sub_8232CBC8);
PPC_FUNC_IMPL(__imp__sub_8232CBC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x829c4038
	sub_829C4038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232CBD0"))) PPC_WEAK_FUNC(sub_8232CBD0);
PPC_FUNC_IMPL(__imp__sub_8232CBD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CBD8"))) PPC_WEAK_FUNC(sub_8232CBD8);
PPC_FUNC_IMPL(__imp__sub_8232CBD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x829c4038
	sub_829C4038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232CBE0"))) PPC_WEAK_FUNC(sub_8232CBE0);
PPC_FUNC_IMPL(__imp__sub_8232CBE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CBE8"))) PPC_WEAK_FUNC(sub_8232CBE8);
PPC_FUNC_IMPL(__imp__sub_8232CBE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x829c4038
	sub_829C4038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232CBF0"))) PPC_WEAK_FUNC(sub_8232CBF0);
PPC_FUNC_IMPL(__imp__sub_8232CBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232CBF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cc28
	if (!ctx.cr6.eq) goto loc_8232CC28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829d0c00
	ctx.lr = 0x8232CC1C;
	sub_829D0C00(ctx, base);
	// stw r3,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r3.u32);
	// bl 0x82994208
	ctx.lr = 0x8232CC24;
	sub_82994208(ctx, base);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
loc_8232CC28:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5872(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5872);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232cc5c
	if (ctx.cr6.eq) goto loc_8232CC5C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cc60
	if (!ctx.cr6.eq) goto loc_8232CC60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829d0c00
	ctx.lr = 0x8232CC48;
	sub_829D0C00(ctx, base);
	// stw r3,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r3.u32);
	// bl 0x82994208
	ctx.lr = 0x8232CC50;
	sub_82994208(ctx, base);
	// lwz r10,5872(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5872);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// b 0x8232cc60
	goto loc_8232CC60;
loc_8232CC5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232CC60:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cc90
	if (!ctx.cr6.eq) goto loc_8232CC90;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232CC84;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232CC8C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232CC90:
	// lwz r10,5872(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5872);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ccbc
	if (!ctx.cr6.eq) goto loc_8232CCBC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232CCB0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232CCB8;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232CCBC:
	// lwz r10,5872(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5872);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232CCC8;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232cd14
	if (ctx.cr6.eq) goto loc_8232CD14;
	// lwz r3,5872(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5872);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232ccfc
	if (!ctx.cr6.eq) goto loc_8232CCFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232CCEC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232CCF4;
	sub_824455B8(ctx, base);
	// lwz r3,5872(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5872);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232CCFC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232cd14
	if (!ctx.cr6.eq) goto loc_8232CD14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232CD14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232CD14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232CD20"))) PPC_WEAK_FUNC(sub_8232CD20);
PPC_FUNC_IMPL(__imp__sub_8232CD20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CD28"))) PPC_WEAK_FUNC(sub_8232CD28);
PPC_FUNC_IMPL(__imp__sub_8232CD28) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cd6c
	if (!ctx.cr6.eq) goto loc_8232CD6C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829d0c00
	ctx.lr = 0x8232CD60;
	sub_829D0C00(ctx, base);
	// stw r3,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r3.u32);
	// bl 0x82994208
	ctx.lr = 0x8232CD68;
	sub_82994208(ctx, base);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
loc_8232CD6C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232CD98"))) PPC_WEAK_FUNC(sub_8232CD98);
PPC_FUNC_IMPL(__imp__sub_8232CD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232CDA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cdd0
	if (!ctx.cr6.eq) goto loc_8232CDD0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829d0c00
	ctx.lr = 0x8232CDC4;
	sub_829D0C00(ctx, base);
	// stw r3,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r3.u32);
	// bl 0x82994208
	ctx.lr = 0x8232CDCC;
	sub_82994208(ctx, base);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
loc_8232CDD0:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5876(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5876);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232ce04
	if (ctx.cr6.eq) goto loc_8232CE04;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ce08
	if (!ctx.cr6.eq) goto loc_8232CE08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829d0c00
	ctx.lr = 0x8232CDF0;
	sub_829D0C00(ctx, base);
	// stw r3,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r3.u32);
	// bl 0x82994208
	ctx.lr = 0x8232CDF8;
	sub_82994208(ctx, base);
	// lwz r10,5876(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5876);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// b 0x8232ce08
	goto loc_8232CE08;
loc_8232CE04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232CE08:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ce38
	if (!ctx.cr6.eq) goto loc_8232CE38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232CE2C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232CE34;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232CE38:
	// lwz r10,5876(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5876);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ce64
	if (!ctx.cr6.eq) goto loc_8232CE64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232CE58;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232CE60;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232CE64:
	// lwz r10,5876(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5876);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232CE70;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232cebc
	if (ctx.cr6.eq) goto loc_8232CEBC;
	// lwz r3,5876(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5876);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232cea4
	if (!ctx.cr6.eq) goto loc_8232CEA4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232CE94;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232CE9C;
	sub_824455B8(ctx, base);
	// lwz r3,5876(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5876);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232CEA4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232cebc
	if (!ctx.cr6.eq) goto loc_8232CEBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232CEBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232CEBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232CEC8"))) PPC_WEAK_FUNC(sub_8232CEC8);
PPC_FUNC_IMPL(__imp__sub_8232CEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r10,r10,22056
	ctx.r10.s64 = ctx.r10.s64 + 22056;
	// addi r11,r11,27960
	ctx.r11.s64 = ctx.r11.s64 + 27960;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CEE8"))) PPC_WEAK_FUNC(sub_8232CEE8);
PPC_FUNC_IMPL(__imp__sub_8232CEE8) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cf2c
	if (!ctx.cr6.eq) goto loc_8232CF2C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829d0c00
	ctx.lr = 0x8232CF20;
	sub_829D0C00(ctx, base);
	// stw r3,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r3.u32);
	// bl 0x82994208
	ctx.lr = 0x8232CF28;
	sub_82994208(ctx, base);
	// lwz r11,11320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11320);
loc_8232CF2C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232CF58"))) PPC_WEAK_FUNC(sub_8232CF58);
PPC_FUNC_IMPL(__imp__sub_8232CF58) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,159
	ctx.r11.s64 = ctx.r4.s64 + 159;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CF70"))) PPC_WEAK_FUNC(sub_8232CF70);
PPC_FUNC_IMPL(__imp__sub_8232CF70) {
	PPC_FUNC_PROLOGUE();
	// li r7,-1
	ctx.r7.s64 = -1;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// blt cr6,0x8232cf88
	if (ctx.cr6.lt) goto loc_8232CF88;
	// li r8,7
	ctx.r8.s64 = 7;
	// bge cr6,0x8232cf90
	if (!ctx.cr6.lt) goto loc_8232CF90;
loc_8232CF88:
	// li r6,7
	ctx.r6.s64 = 7;
	// b 0x8232cf94
	goto loc_8232CF94;
loc_8232CF90:
	// li r6,11
	ctx.r6.s64 = 11;
loc_8232CF94:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8232cfe8
	if (!ctx.cr6.lt) goto loc_8232CFE8;
	// addi r11,r8,175
	ctx.r11.s64 = ctx.r8.s64 + 175;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8232CFAC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232cfd8
	if (ctx.cr6.eq) goto loc_8232CFD8;
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// rlwinm r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8232cfd8
	if (!ctx.cr6.eq) goto loc_8232CFD8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r10,r8,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r8.s64;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8232cff0
	if (ctx.cr6.eq) goto loc_8232CFF0;
loc_8232CFD8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8232cfac
	if (ctx.cr6.lt) goto loc_8232CFAC;
loc_8232CFE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8232CFF0:
	// addi r11,r9,175
	ctx.r11.s64 = ctx.r9.s64 + 175;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D000"))) PPC_WEAK_FUNC(sub_8232D000);
PPC_FUNC_IMPL(__imp__sub_8232D000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,604(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// addi r11,r4,159
	ctx.r11.s64 = ctx.r4.s64 + 159;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8232d03c
	if (!ctx.cr6.eq) goto loc_8232D03C;
loc_8232D028:
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
loc_8232D03C:
	// bl 0x8232cf70
	ctx.lr = 0x8232D040;
	sub_8232CF70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232d028
	if (ctx.cr6.eq) goto loc_8232D028;
	// lwz r11,92(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D068"))) PPC_WEAK_FUNC(sub_8232D068);
PPC_FUNC_IMPL(__imp__sub_8232D068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8232cf70
	ctx.lr = 0x8232D07C;
	sub_8232CF70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232d0e4
	if (ctx.cr6.eq) goto loc_8232D0E4;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232d0d0
	if (ctx.cr6.eq) goto loc_8232D0D0;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8232d0bc
	if (!ctx.cr6.eq) goto loc_8232D0BC;
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8232d0bc
	if (!ctx.cr6.eq) goto loc_8232D0BC;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232d0d0
	if (ctx.cr6.eq) goto loc_8232D0D0;
loc_8232D0BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8232D0D0:
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
loc_8232D0E4:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D0F8"))) PPC_WEAK_FUNC(sub_8232D0F8);
PPC_FUNC_IMPL(__imp__sub_8232D0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x8232D100;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r29,636
	ctx.r27.s64 = ctx.r29.s64 + 636;
loc_8232D110:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r28,7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 7, ctx.xer);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8232d1b0
	if (ctx.cr6.eq) goto loc_8232D1B0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829686d8
	ctx.lr = 0x8232D12C;
	sub_829686D8(ctx, base);
	// bl 0x8275e510
	ctx.lr = 0x8232D130;
	sub_8275E510(ctx, base);
	// lwz r11,604(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 604);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8232d15c
	if (!ctx.cr6.eq) goto loc_8232D15C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d000
	ctx.lr = 0x8232D148;
	sub_8232D000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232d15c
	if (ctx.cr6.eq) goto loc_8232D15C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// b 0x8232d164
	goto loc_8232D164;
loc_8232D15C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
loc_8232D164:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232D178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,896(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8232d1b0
	if (ctx.cr6.eq) goto loc_8232D1B0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d068
	ctx.lr = 0x8232D190;
	sub_8232D068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r29,556
	ctx.r11.s64 = ctx.r29.s64 + 556;
	// bne cr6,0x8232d1a4
	if (!ctx.cr6.eq) goto loc_8232D1A4;
	// addi r11,r29,540
	ctx.r11.s64 = ctx.r29.s64 + 540;
loc_8232D1A4:
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x829f4138
	ctx.lr = 0x8232D1B0;
	sub_829F4138(ctx, base);
loc_8232D1B0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r28,11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 11, ctx.xer);
	// blt cr6,0x8232d110
	if (ctx.cr6.lt) goto loc_8232D110;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232D1C8"))) PPC_WEAK_FUNC(sub_8232D1C8);
PPC_FUNC_IMPL(__imp__sub_8232D1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232D1D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d200
	if (!ctx.cr6.eq) goto loc_8232D200;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232D1F4;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232D1FC;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232D200:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5880(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5880);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232d234
	if (ctx.cr6.eq) goto loc_8232D234;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d238
	if (!ctx.cr6.eq) goto loc_8232D238;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232D220;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232D228;
	sub_8295D600(ctx, base);
	// lwz r10,5880(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5880);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232d238
	goto loc_8232D238;
loc_8232D234:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232D238:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d268
	if (!ctx.cr6.eq) goto loc_8232D268;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232D25C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232D264;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232D268:
	// lwz r10,5880(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5880);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d294
	if (!ctx.cr6.eq) goto loc_8232D294;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232D288;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232D290;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232D294:
	// lwz r10,5880(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5880);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232D2A0;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232d2ec
	if (ctx.cr6.eq) goto loc_8232D2EC;
	// lwz r3,5880(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5880);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232d2d4
	if (!ctx.cr6.eq) goto loc_8232D2D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232D2C4;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232D2CC;
	sub_824455B8(ctx, base);
	// lwz r3,5880(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5880);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232D2D4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232d2ec
	if (!ctx.cr6.eq) goto loc_8232D2EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232D2EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232D2EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232D2F8"))) PPC_WEAK_FUNC(sub_8232D2F8);
PPC_FUNC_IMPL(__imp__sub_8232D2F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D300"))) PPC_WEAK_FUNC(sub_8232D300);
PPC_FUNC_IMPL(__imp__sub_8232D300) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d344
	if (!ctx.cr6.eq) goto loc_8232D344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232D338;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232D340;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232D344:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232D370"))) PPC_WEAK_FUNC(sub_8232D370);
PPC_FUNC_IMPL(__imp__sub_8232D370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232D378;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d3a8
	if (!ctx.cr6.eq) goto loc_8232D3A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232D39C;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232D3A4;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232D3A8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5884(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5884);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232d3dc
	if (ctx.cr6.eq) goto loc_8232D3DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d3e0
	if (!ctx.cr6.eq) goto loc_8232D3E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232D3C8;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232D3D0;
	sub_8295D600(ctx, base);
	// lwz r10,5884(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5884);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232d3e0
	goto loc_8232D3E0;
loc_8232D3DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232D3E0:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d410
	if (!ctx.cr6.eq) goto loc_8232D410;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232D404;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232D40C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232D410:
	// lwz r10,5884(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5884);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d43c
	if (!ctx.cr6.eq) goto loc_8232D43C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232D430;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232D438;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232D43C:
	// lwz r10,5884(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5884);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232D448;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232d494
	if (ctx.cr6.eq) goto loc_8232D494;
	// lwz r3,5884(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5884);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232d47c
	if (!ctx.cr6.eq) goto loc_8232D47C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232D46C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232D474;
	sub_824455B8(ctx, base);
	// lwz r3,5884(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5884);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232D47C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232d494
	if (!ctx.cr6.eq) goto loc_8232D494;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232D494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232D494:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232D4A0"))) PPC_WEAK_FUNC(sub_8232D4A0);
PPC_FUNC_IMPL(__imp__sub_8232D4A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D4A8"))) PPC_WEAK_FUNC(sub_8232D4A8);
PPC_FUNC_IMPL(__imp__sub_8232D4A8) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d4ec
	if (!ctx.cr6.eq) goto loc_8232D4EC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232D4E0;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232D4E8;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232D4EC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232D518"))) PPC_WEAK_FUNC(sub_8232D518);
PPC_FUNC_IMPL(__imp__sub_8232D518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82a186e0
	ctx.lr = 0x8232D528;
	sub_82A186E0(ctx, base);
	// lwz r3,4000(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4000);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232d538
	if (ctx.cr6.eq) goto loc_8232D538;
	// bl 0x82a02780
	ctx.lr = 0x8232D538;
	sub_82A02780(ctx, base);
loc_8232D538:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D548"))) PPC_WEAK_FUNC(sub_8232D548);
PPC_FUNC_IMPL(__imp__sub_8232D548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232D550;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31967
	ctx.r31.s64 = -2094989312;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-27552
	ctx.r29.s64 = ctx.r10.s64 + -27552;
	// lwz r11,-30844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30844);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d580
	if (!ctx.cr6.eq) goto loc_8232D580;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a6ea98
	ctx.lr = 0x8232D574;
	sub_82A6EA98(ctx, base);
	// stw r3,-30844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30844, ctx.r3.u32);
	// bl 0x82a66400
	ctx.lr = 0x8232D57C;
	sub_82A66400(ctx, base);
	// lwz r11,-30844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30844);
loc_8232D580:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5888(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5888);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232d5b4
	if (ctx.cr6.eq) goto loc_8232D5B4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d5b8
	if (!ctx.cr6.eq) goto loc_8232D5B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a6ea98
	ctx.lr = 0x8232D5A0;
	sub_82A6EA98(ctx, base);
	// stw r3,-30844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30844, ctx.r3.u32);
	// bl 0x82a66400
	ctx.lr = 0x8232D5A8;
	sub_82A66400(ctx, base);
	// lwz r10,5888(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5888);
	// lwz r11,-30844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30844);
	// b 0x8232d5b8
	goto loc_8232D5B8;
loc_8232D5B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232D5B8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d5e8
	if (!ctx.cr6.eq) goto loc_8232D5E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232D5DC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232D5E4;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232D5E8:
	// lwz r10,5888(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5888);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d614
	if (!ctx.cr6.eq) goto loc_8232D614;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232D608;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232D610;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232D614:
	// lwz r10,5888(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5888);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232D620;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232d66c
	if (ctx.cr6.eq) goto loc_8232D66C;
	// lwz r3,5888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5888);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232d654
	if (!ctx.cr6.eq) goto loc_8232D654;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232D644;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232D64C;
	sub_824455B8(ctx, base);
	// lwz r3,5888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5888);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232D654:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232d66c
	if (!ctx.cr6.eq) goto loc_8232D66C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232D66C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232D66C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232D678"))) PPC_WEAK_FUNC(sub_8232D678);
PPC_FUNC_IMPL(__imp__sub_8232D678) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D680"))) PPC_WEAK_FUNC(sub_8232D680);
PPC_FUNC_IMPL(__imp__sub_8232D680) {
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
	// lis r31,-31967
	ctx.r31.s64 = -2094989312;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-30844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30844);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d6c4
	if (!ctx.cr6.eq) goto loc_8232D6C4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-27552
	ctx.r3.s64 = ctx.r11.s64 + -27552;
	// bl 0x82a6ea98
	ctx.lr = 0x8232D6B8;
	sub_82A6EA98(ctx, base);
	// stw r3,-30844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30844, ctx.r3.u32);
	// bl 0x82a66400
	ctx.lr = 0x8232D6C0;
	sub_82A66400(ctx, base);
	// lwz r11,-30844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30844);
loc_8232D6C4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232D6F0"))) PPC_WEAK_FUNC(sub_8232D6F0);
PPC_FUNC_IMPL(__imp__sub_8232D6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232D6F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,-14884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14884);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d728
	if (!ctx.cr6.eq) goto loc_8232D728;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82692f10
	ctx.lr = 0x8232D71C;
	sub_82692F10(ctx, base);
	// stw r3,-14884(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14884, ctx.r3.u32);
	// bl 0x8265dc80
	ctx.lr = 0x8232D724;
	sub_8265DC80(ctx, base);
	// lwz r11,-14884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14884);
loc_8232D728:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5892(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5892);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232d75c
	if (ctx.cr6.eq) goto loc_8232D75C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d760
	if (!ctx.cr6.eq) goto loc_8232D760;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82692f10
	ctx.lr = 0x8232D748;
	sub_82692F10(ctx, base);
	// stw r3,-14884(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14884, ctx.r3.u32);
	// bl 0x8265dc80
	ctx.lr = 0x8232D750;
	sub_8265DC80(ctx, base);
	// lwz r10,5892(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5892);
	// lwz r11,-14884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14884);
	// b 0x8232d760
	goto loc_8232D760;
loc_8232D75C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232D760:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d790
	if (!ctx.cr6.eq) goto loc_8232D790;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232D784;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232D78C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232D790:
	// lwz r10,5892(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5892);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d7bc
	if (!ctx.cr6.eq) goto loc_8232D7BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232D7B0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232D7B8;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232D7BC:
	// lwz r10,5892(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5892);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232D7C8;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232d814
	if (ctx.cr6.eq) goto loc_8232D814;
	// lwz r3,5892(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5892);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232d7fc
	if (!ctx.cr6.eq) goto loc_8232D7FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232D7EC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232D7F4;
	sub_824455B8(ctx, base);
	// lwz r3,5892(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5892);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232D7FC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232d814
	if (!ctx.cr6.eq) goto loc_8232D814;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232D814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232D814:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232D820"))) PPC_WEAK_FUNC(sub_8232D820);
PPC_FUNC_IMPL(__imp__sub_8232D820) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D828"))) PPC_WEAK_FUNC(sub_8232D828);
PPC_FUNC_IMPL(__imp__sub_8232D828) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-14884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14884);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d86c
	if (!ctx.cr6.eq) goto loc_8232D86C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x82692f10
	ctx.lr = 0x8232D860;
	sub_82692F10(ctx, base);
	// stw r3,-14884(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14884, ctx.r3.u32);
	// bl 0x8265dc80
	ctx.lr = 0x8232D868;
	sub_8265DC80(ctx, base);
	// lwz r11,-14884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14884);
loc_8232D86C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232D898"))) PPC_WEAK_FUNC(sub_8232D898);
PPC_FUNC_IMPL(__imp__sub_8232D898) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D8A0"))) PPC_WEAK_FUNC(sub_8232D8A0);
PPC_FUNC_IMPL(__imp__sub_8232D8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232D8A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,1308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d8d8
	if (!ctx.cr6.eq) goto loc_8232D8D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82437748
	ctx.lr = 0x8232D8CC;
	sub_82437748(ctx, base);
	// stw r3,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r3.u32);
	// bl 0x824474c0
	ctx.lr = 0x8232D8D4;
	sub_824474C0(ctx, base);
	// lwz r11,1308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
loc_8232D8D8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5900(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5900);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232d90c
	if (ctx.cr6.eq) goto loc_8232D90C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d910
	if (!ctx.cr6.eq) goto loc_8232D910;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82437748
	ctx.lr = 0x8232D8F8;
	sub_82437748(ctx, base);
	// stw r3,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r3.u32);
	// bl 0x824474c0
	ctx.lr = 0x8232D900;
	sub_824474C0(ctx, base);
	// lwz r10,5900(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5900);
	// lwz r11,1308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	// b 0x8232d910
	goto loc_8232D910;
loc_8232D90C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232D910:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d938
	if (!ctx.cr6.eq) goto loc_8232D938;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232D92C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232D934;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232D938:
	// lwz r10,5900(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5900);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d964
	if (!ctx.cr6.eq) goto loc_8232D964;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232D958;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232D960;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232D964:
	// lwz r10,5900(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5900);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232D970;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232d9bc
	if (ctx.cr6.eq) goto loc_8232D9BC;
	// lwz r3,5900(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5900);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232d9a4
	if (!ctx.cr6.eq) goto loc_8232D9A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232D994;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232D99C;
	sub_824455B8(ctx, base);
	// lwz r3,5900(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5900);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232D9A4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232d9bc
	if (!ctx.cr6.eq) goto loc_8232D9BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232D9BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232D9BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232D9C8"))) PPC_WEAK_FUNC(sub_8232D9C8);
PPC_FUNC_IMPL(__imp__sub_8232D9C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D9D0"))) PPC_WEAK_FUNC(sub_8232D9D0);
PPC_FUNC_IMPL(__imp__sub_8232D9D0) {
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
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,1308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232da14
	if (!ctx.cr6.eq) goto loc_8232DA14;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28548
	ctx.r3.s64 = ctx.r11.s64 + -28548;
	// bl 0x82437748
	ctx.lr = 0x8232DA08;
	sub_82437748(ctx, base);
	// stw r3,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r3.u32);
	// bl 0x824474c0
	ctx.lr = 0x8232DA10;
	sub_824474C0(ctx, base);
	// lwz r11,1308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
loc_8232DA14:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232DA40"))) PPC_WEAK_FUNC(sub_8232DA40);
PPC_FUNC_IMPL(__imp__sub_8232DA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232DA48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,-14712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232da78
	if (!ctx.cr6.eq) goto loc_8232DA78;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82694278
	ctx.lr = 0x8232DA6C;
	sub_82694278(ctx, base);
	// stw r3,-14712(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14712, ctx.r3.u32);
	// bl 0x826ab5c0
	ctx.lr = 0x8232DA74;
	sub_826AB5C0(ctx, base);
	// lwz r11,-14712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14712);
loc_8232DA78:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5904(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5904);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232daac
	if (ctx.cr6.eq) goto loc_8232DAAC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dab0
	if (!ctx.cr6.eq) goto loc_8232DAB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82694278
	ctx.lr = 0x8232DA98;
	sub_82694278(ctx, base);
	// stw r3,-14712(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14712, ctx.r3.u32);
	// bl 0x826ab5c0
	ctx.lr = 0x8232DAA0;
	sub_826AB5C0(ctx, base);
	// lwz r10,5904(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5904);
	// lwz r11,-14712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14712);
	// b 0x8232dab0
	goto loc_8232DAB0;
loc_8232DAAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232DAB0:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dae0
	if (!ctx.cr6.eq) goto loc_8232DAE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232DAD4;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232DADC;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232DAE0:
	// lwz r10,5904(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5904);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232db0c
	if (!ctx.cr6.eq) goto loc_8232DB0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232DB00;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232DB08;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232DB0C:
	// lwz r10,5904(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5904);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232DB18;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232db64
	if (ctx.cr6.eq) goto loc_8232DB64;
	// lwz r3,5904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5904);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232db4c
	if (!ctx.cr6.eq) goto loc_8232DB4C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232DB3C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232DB44;
	sub_824455B8(ctx, base);
	// lwz r3,5904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5904);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232DB4C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232db64
	if (!ctx.cr6.eq) goto loc_8232DB64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232DB64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232DB70"))) PPC_WEAK_FUNC(sub_8232DB70);
PPC_FUNC_IMPL(__imp__sub_8232DB70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232DB78"))) PPC_WEAK_FUNC(sub_8232DB78);
PPC_FUNC_IMPL(__imp__sub_8232DB78) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-14712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14712);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dbbc
	if (!ctx.cr6.eq) goto loc_8232DBBC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x82694278
	ctx.lr = 0x8232DBB0;
	sub_82694278(ctx, base);
	// stw r3,-14712(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14712, ctx.r3.u32);
	// bl 0x826ab5c0
	ctx.lr = 0x8232DBB8;
	sub_826AB5C0(ctx, base);
	// lwz r11,-14712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14712);
loc_8232DBBC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232DBE8"))) PPC_WEAK_FUNC(sub_8232DBE8);
PPC_FUNC_IMPL(__imp__sub_8232DBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232DBF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,-14688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dc20
	if (!ctx.cr6.eq) goto loc_8232DC20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826aef28
	ctx.lr = 0x8232DC14;
	sub_826AEF28(ctx, base);
	// stw r3,-14688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14688, ctx.r3.u32);
	// bl 0x826a4a10
	ctx.lr = 0x8232DC1C;
	sub_826A4A10(ctx, base);
	// lwz r11,-14688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14688);
loc_8232DC20:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5908(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5908);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232dc54
	if (ctx.cr6.eq) goto loc_8232DC54;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dc58
	if (!ctx.cr6.eq) goto loc_8232DC58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826aef28
	ctx.lr = 0x8232DC40;
	sub_826AEF28(ctx, base);
	// stw r3,-14688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14688, ctx.r3.u32);
	// bl 0x826a4a10
	ctx.lr = 0x8232DC48;
	sub_826A4A10(ctx, base);
	// lwz r10,5908(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5908);
	// lwz r11,-14688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14688);
	// b 0x8232dc58
	goto loc_8232DC58;
loc_8232DC54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232DC58:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dc88
	if (!ctx.cr6.eq) goto loc_8232DC88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232DC7C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232DC84;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232DC88:
	// lwz r10,5908(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5908);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dcb4
	if (!ctx.cr6.eq) goto loc_8232DCB4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232DCA8;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232DCB0;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232DCB4:
	// lwz r10,5908(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5908);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232DCC0;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232dd0c
	if (ctx.cr6.eq) goto loc_8232DD0C;
	// lwz r3,5908(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5908);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232dcf4
	if (!ctx.cr6.eq) goto loc_8232DCF4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232DCE4;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232DCEC;
	sub_824455B8(ctx, base);
	// lwz r3,5908(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5908);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232DCF4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232dd0c
	if (!ctx.cr6.eq) goto loc_8232DD0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DD0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232DD0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232DD18"))) PPC_WEAK_FUNC(sub_8232DD18);
PPC_FUNC_IMPL(__imp__sub_8232DD18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232DD20"))) PPC_WEAK_FUNC(sub_8232DD20);
PPC_FUNC_IMPL(__imp__sub_8232DD20) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-14688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14688);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dd64
	if (!ctx.cr6.eq) goto loc_8232DD64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x826aef28
	ctx.lr = 0x8232DD58;
	sub_826AEF28(ctx, base);
	// stw r3,-14688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14688, ctx.r3.u32);
	// bl 0x826a4a10
	ctx.lr = 0x8232DD60;
	sub_826A4A10(ctx, base);
	// lwz r11,-14688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14688);
loc_8232DD64:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232DD90"))) PPC_WEAK_FUNC(sub_8232DD90);
PPC_FUNC_IMPL(__imp__sub_8232DD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232DD98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ddc8
	if (!ctx.cr6.eq) goto loc_8232DDC8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232DDBC;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232DDC4;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232DDC8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5912(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5912);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232ddfc
	if (ctx.cr6.eq) goto loc_8232DDFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232de00
	if (!ctx.cr6.eq) goto loc_8232DE00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232DDE8;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232DDF0;
	sub_8295D600(ctx, base);
	// lwz r10,5912(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5912);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232de00
	goto loc_8232DE00;
loc_8232DDFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232DE00:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232de30
	if (!ctx.cr6.eq) goto loc_8232DE30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232DE24;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232DE2C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232DE30:
	// lwz r10,5912(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5912);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232de5c
	if (!ctx.cr6.eq) goto loc_8232DE5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232DE50;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232DE58;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232DE5C:
	// lwz r10,5912(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5912);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232DE68;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232deb4
	if (ctx.cr6.eq) goto loc_8232DEB4;
	// lwz r3,5912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5912);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232de9c
	if (!ctx.cr6.eq) goto loc_8232DE9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232DE8C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232DE94;
	sub_824455B8(ctx, base);
	// lwz r3,5912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5912);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232DE9C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232deb4
	if (!ctx.cr6.eq) goto loc_8232DEB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232DEB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232DEC0"))) PPC_WEAK_FUNC(sub_8232DEC0);
PPC_FUNC_IMPL(__imp__sub_8232DEC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232DEC8"))) PPC_WEAK_FUNC(sub_8232DEC8);
PPC_FUNC_IMPL(__imp__sub_8232DEC8) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232df0c
	if (!ctx.cr6.eq) goto loc_8232DF0C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232DF00;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232DF08;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232DF0C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232DF38"))) PPC_WEAK_FUNC(sub_8232DF38);
PPC_FUNC_IMPL(__imp__sub_8232DF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8232DF40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232df70
	if (!ctx.cr6.eq) goto loc_8232DF70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232DF64;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232DF6C;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232DF70:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5916(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5916);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232dfa4
	if (ctx.cr6.eq) goto loc_8232DFA4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dfa8
	if (!ctx.cr6.eq) goto loc_8232DFA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829a9820
	ctx.lr = 0x8232DF90;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232DF98;
	sub_8295D600(ctx, base);
	// lwz r10,5916(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5916);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// b 0x8232dfa8
	goto loc_8232DFA8;
loc_8232DFA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232DFA8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dfd8
	if (!ctx.cr6.eq) goto loc_8232DFD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8232DFCC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8232DFD4;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8232DFD8:
	// lwz r10,5916(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5916);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e004
	if (!ctx.cr6.eq) goto loc_8232E004;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232DFF8;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232E000;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232E004:
	// lwz r10,5916(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5916);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8232E010;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232e05c
	if (ctx.cr6.eq) goto loc_8232E05C;
	// lwz r3,5916(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5916);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232e044
	if (!ctx.cr6.eq) goto loc_8232E044;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8232E034;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8232E03C;
	sub_824455B8(ctx, base);
	// lwz r3,5916(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5916);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8232E044:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232e05c
	if (!ctx.cr6.eq) goto loc_8232E05C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232E05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232E05C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232E068"))) PPC_WEAK_FUNC(sub_8232E068);
PPC_FUNC_IMPL(__imp__sub_8232E068) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E070"))) PPC_WEAK_FUNC(sub_8232E070);
PPC_FUNC_IMPL(__imp__sub_8232E070) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e0b4
	if (!ctx.cr6.eq) goto loc_8232E0B4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x829a9820
	ctx.lr = 0x8232E0A8;
	sub_829A9820(ctx, base);
	// stw r3,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r3.u32);
	// bl 0x8295d600
	ctx.lr = 0x8232E0B0;
	sub_8295D600(ctx, base);
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
loc_8232E0B4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8232E0E0"))) PPC_WEAK_FUNC(sub_8232E0E0);
PPC_FUNC_IMPL(__imp__sub_8232E0E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2772);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E0F0"))) PPC_WEAK_FUNC(sub_8232E0F0);
PPC_FUNC_IMPL(__imp__sub_8232E0F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2776(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2776);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E0F8"))) PPC_WEAK_FUNC(sub_8232E0F8);
PPC_FUNC_IMPL(__imp__sub_8232E0F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2780(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2780);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E108"))) PPC_WEAK_FUNC(sub_8232E108);
PPC_FUNC_IMPL(__imp__sub_8232E108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2760(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2760);
	// rlwimi r11,r4,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,2760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2760, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E118"))) PPC_WEAK_FUNC(sub_8232E118);
PPC_FUNC_IMPL(__imp__sub_8232E118) {
	PPC_FUNC_PROLOGUE();
	// stb r4,2764(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2764, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E120"))) PPC_WEAK_FUNC(sub_8232E120);
PPC_FUNC_IMPL(__imp__sub_8232E120) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2768);
	// rlwimi r11,r4,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,2768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2768, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E130"))) PPC_WEAK_FUNC(sub_8232E130);
PPC_FUNC_IMPL(__imp__sub_8232E130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2772);
	// lwz r10,2780(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2780);
	// rlwimi r11,r4,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stb r5,2776(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2776, ctx.r5.u8);
	// rlwimi r10,r6,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,2772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2772, ctx.r11.u32);
	// stw r10,2780(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2780, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E150"))) PPC_WEAK_FUNC(sub_8232E150);
PPC_FUNC_IMPL(__imp__sub_8232E150) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,352(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E158"))) PPC_WEAK_FUNC(sub_8232E158);
PPC_FUNC_IMPL(__imp__sub_8232E158) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E178"))) PPC_WEAK_FUNC(sub_8232E178);
PPC_FUNC_IMPL(__imp__sub_8232E178) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,72
	ctx.r11.s64 = ctx.r4.s64 + 72;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,10
	ctx.r9.s64 = 10;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8232E188:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8232e188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232E188;
	// blr 
	return;
}

