#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.RegularExpressions.RxCompiler
struct RxCompiler_t743214808_0;
// System.Text.RegularExpressions.LinkRef
struct LinkRef_t_201520826_0;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t_629363303_0;
// System.Collections.BitArray
struct BitArray_t588948896_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_RxOp584650458.h"
#include "mscorlib_System_Globalization_UnicodeCategory_815265613.h"
#include "System_System_Text_RegularExpressions_Category1199172497.h"
#include "System_System_Text_RegularExpressions_Position1896466364.h"

// System.Void System.Text.RegularExpressions.RxCompiler::.ctor()
extern "C"  void RxCompiler__ctor_m1953942776_0 (RxCompiler_t743214808_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::MakeRoom(System.Int32)
extern "C"  void RxCompiler_MakeRoom_m1743679302_0 (RxCompiler_t743214808_0 * __this, int32_t ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Byte)
extern "C"  void RxCompiler_Emit_m_1854374484_0 (RxCompiler_t743214808_0 * __this, uint8_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Text.RegularExpressions.RxOp)
extern "C"  void RxCompiler_Emit_m_793906849_0 (RxCompiler_t743214808_0 * __this, uint8_t ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.UInt16)
extern "C"  void RxCompiler_Emit_m_1339034635_0 (RxCompiler_t743214808_0 * __this, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Int32)
extern "C"  void RxCompiler_Emit_m_1460836560_0 (RxCompiler_t743214808_0 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_BeginLink_m_1840013299_0 (RxCompiler_t743214808_0 * __this, LinkRef_t_201520826_0 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitLink_m_1321079827_0 (RxCompiler_t743214808_0 * __this, LinkRef_t_201520826_0 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.RxCompiler::GetMachineFactory()
extern "C"  Object_t * RxCompiler_GetMachineFactory_m_907941905_0 (RxCompiler_t743214808_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitFalse()
extern "C"  void RxCompiler_EmitFalse_m1934565542_0 (RxCompiler_t743214808_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitTrue()
extern "C"  void RxCompiler_EmitTrue_m756260749_0 (RxCompiler_t743214808_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitOp_m1132991071_0 (RxCompiler_t743214808_0 * __this, uint8_t ___op, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpIgnoreReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitOpIgnoreReverse_m_2119778324_0 (RxCompiler_t743214808_0 * __this, uint8_t ___op, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitOpNegateReverse_m_1829753572_0 (RxCompiler_t743214808_0 * __this, uint8_t ___op, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitCharacter_m_105789044_0 (RxCompiler_t743214808_0 * __this, uint16_t ___c, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitUniCat(System.Globalization.UnicodeCategory,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitUniCat_m1178935862_0 (RxCompiler_t743214808_0 * __this, int32_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCatGeneral(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitCatGeneral_m465230038_0 (RxCompiler_t743214808_0 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitCategory_m_37336310_0 (RxCompiler_t743214808_0 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitNotCategory_m_565553677_0 (RxCompiler_t743214808_0 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitRange_m1931593193_0 (RxCompiler_t743214808_0 * __this, uint16_t ___lo, uint16_t ___hi, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitSet_m163764701_0 (RxCompiler_t743214808_0 * __this, uint16_t ___lo, BitArray_t588948896_0 * ___set, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitString(System.String,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitString_m1296274962_0 (RxCompiler_t743214808_0 * __this, String_t* ___str, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitPosition(System.Text.RegularExpressions.Position)
extern "C"  void RxCompiler_EmitPosition_m_1996409964_0 (RxCompiler_t743214808_0 * __this, uint16_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpen(System.Int32)
extern "C"  void RxCompiler_EmitOpen_m_1782505190_0 (RxCompiler_t743214808_0 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitClose(System.Int32)
extern "C"  void RxCompiler_EmitClose_m275134732_0 (RxCompiler_t743214808_0 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitBalanceStart_m2136902846_0 (RxCompiler_t743214808_0 * __this, int32_t ___gid, int32_t ___balance, bool ___capture, LinkRef_t_201520826_0 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBalance()
extern "C"  void RxCompiler_EmitBalance_m1826300831_0 (RxCompiler_t743214808_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitReference_m_383937985_0 (RxCompiler_t743214808_0 * __this, int32_t ___gid, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitIfDefined_m_1609521542_0 (RxCompiler_t743214808_0 * __this, int32_t ___gid, LinkRef_t_201520826_0 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitSub_m1481343095_0 (RxCompiler_t743214808_0 * __this, LinkRef_t_201520826_0 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitTest_m201623445_0 (RxCompiler_t743214808_0 * __this, LinkRef_t_201520826_0 * ___yes, LinkRef_t_201520826_0 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitBranch_m_553053675_0 (RxCompiler_t743214808_0 * __this, LinkRef_t_201520826_0 * ___next, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitJump_m_1573524447_0 (RxCompiler_t743214808_0 * __this, LinkRef_t_201520826_0 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitIn_m_360060520_0 (RxCompiler_t743214808_0 * __this, LinkRef_t_201520826_0 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitRepeat_m1948872745_0 (RxCompiler_t743214808_0 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t_201520826_0 * ___until, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitUntil_m1300611861_0 (RxCompiler_t743214808_0 * __this, LinkRef_t_201520826_0 * ___repeat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
extern "C"  void RxCompiler_EmitInfo_m1477407838_0 (RxCompiler_t743214808_0 * __this, int32_t ___count, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitFastRepeat_m_101370067_0 (RxCompiler_t743214808_0 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t_201520826_0 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitAnchor_m_559071890_0 (RxCompiler_t743214808_0 * __this, bool ___reverse, int32_t ___offset, LinkRef_t_201520826_0 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBranchEnd()
extern "C"  void RxCompiler_EmitBranchEnd_m_2080296740_0 (RxCompiler_t743214808_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitAlternationEnd()
extern "C"  void RxCompiler_EmitAlternationEnd_m_399394499_0 (RxCompiler_t743214808_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.RxCompiler::NewLink()
extern "C"  LinkRef_t_201520826_0 * RxCompiler_NewLink_m1846254179_0 (RxCompiler_t743214808_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_ResolveLink_m_1222922352_0 (RxCompiler_t743214808_0 * __this, LinkRef_t_201520826_0 * ___link, const MethodInfo* method) IL2CPP_METHOD_ATTR;
