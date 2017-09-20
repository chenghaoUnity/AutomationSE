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

// System.Text.RegularExpressions.RxInterpreter
struct RxInterpreter_t621165985_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t_1121238188_0;
// System.Text.RegularExpressions.Match
struct Match_t_1666304010_0;
// System.Text.RegularExpressions.Regex
struct Regex_t111054635_0;
// System.String
struct String_t;
// System.Text.RegularExpressions.Group
struct Group_t_1671342928_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.RxInterpreter::.ctor(System.Byte[],System.Text.RegularExpressions.EvalDelegate)
extern "C"  void RxInterpreter__ctor_m910953714_0 (RxInterpreter_t621165985_0 * __this, ByteU5BU5D_t_1238178395_0* ___program, EvalDelegate_t_1121238188_0 * ___eval_del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::.cctor()
extern "C"  void RxInterpreter__cctor_m_1330942536_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::ReadInt(System.Byte[],System.Int32)
extern "C"  int32_t RxInterpreter_ReadInt_m1479423978_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___code, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RxInterpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C"  Match_t_1666304010_0 * RxInterpreter_Scan_m1797695701_0 (RxInterpreter_t621165985_0 * __this, Regex_t111054635_0 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Open(System.Int32,System.Int32)
extern "C"  void RxInterpreter_Open_m1855510381_0 (RxInterpreter_t621165985_0 * __this, int32_t ___gid, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Close(System.Int32,System.Int32)
extern "C"  void RxInterpreter_Close_m1124885467_0 (RxInterpreter_t621165985_0 * __this, int32_t ___gid, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C"  bool RxInterpreter_Balance_m1181318279_0 (RxInterpreter_t621165985_0 * __this, int32_t ___gid, int32_t ___balance_gid, bool ___capture, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::Checkpoint()
extern "C"  int32_t RxInterpreter_Checkpoint_m_935681209_0 (RxInterpreter_t621165985_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Backtrack(System.Int32)
extern "C"  void RxInterpreter_Backtrack_m_1836995768_0 (RxInterpreter_t621165985_0 * __this, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::ResetGroups()
extern "C"  void RxInterpreter_ResetGroups_m258178934_0 (RxInterpreter_t621165985_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::GetLastDefined(System.Int32)
extern "C"  int32_t RxInterpreter_GetLastDefined_m_1296949715_0 (RxInterpreter_t621165985_0 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::CreateMark(System.Int32)
extern "C"  int32_t RxInterpreter_CreateMark_m_1019162439_0 (RxInterpreter_t621165985_0 * __this, int32_t ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
extern "C"  void RxInterpreter_GetGroupInfo_m_2083607007_0 (RxInterpreter_t621165985_0 * __this, int32_t ___gid, int32_t* ___first_mark_index, int32_t* ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
extern "C"  void RxInterpreter_PopulateGroup_m_1072067274_0 (RxInterpreter_t621165985_0 * __this, Group_t_1671342928_0 * ___g, int32_t ___first_mark_index, int32_t ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RxInterpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
extern "C"  Match_t_1666304010_0 * RxInterpreter_GenerateMatch_m_785975230_0 (RxInterpreter_t621165985_0 * __this, Regex_t111054635_0 * ___regex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::IsWordChar(System.Char)
extern "C"  bool RxInterpreter_IsWordChar_m_587130738_0 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::EvalByteCode(System.Int32,System.Int32,System.Int32&)
extern "C"  bool RxInterpreter_EvalByteCode_m1916707461_0 (RxInterpreter_t621165985_0 * __this, int32_t ___pc, int32_t ___strpos, int32_t* ___strpos_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
