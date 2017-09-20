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

// System.Text.RegularExpressions.CILCompiler
struct CILCompiler_t_1960408046_0;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t_629363303_0;
// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t714200109_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t2081778301_0;
// System.Text.RegularExpressions.CILCompiler/Frame
struct Frame_t193017104_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_OpFlags_1670469581.h"
#include "System_System_Text_RegularExpressions_RxOp584650458.h"
#include "mscorlib_System_Reflection_Emit_Label_1261953503.h"

// System.Void System.Text.RegularExpressions.CILCompiler::.ctor()
extern "C"  void CILCompiler__ctor_m_853681660_0 (CILCompiler_t_1960408046_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::.cctor()
extern "C"  void CILCompiler__cctor_m_1176423895_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.CILCompiler::System.Text.RegularExpressions.ICompiler.GetMachineFactory()
extern "C"  Object_t * CILCompiler_System_Text_RegularExpressions_ICompiler_GetMachineFactory_m_725945882_0 (CILCompiler_t_1960408046_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::GetEvalMethod(System.Byte[],System.Int32)
extern "C"  DynamicMethod_t714200109_0 * CILCompiler_GetEvalMethod_m_667035155_0 (CILCompiler_t_1960408046_0 * __this, ByteU5BU5D_t_1238178395_0* ___program, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::GetMethod(System.Type,System.String,System.Reflection.MethodInfo&)
extern "C"  MethodInfo_t * CILCompiler_GetMethod_m_1581634847_0 (CILCompiler_t_1960408046_0 * __this, Type_t * ___t, String_t* ___name, MethodInfo_t ** ___cached, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::GetMethod(System.String,System.Reflection.MethodInfo&)
extern "C"  MethodInfo_t * CILCompiler_GetMethod_m1861577134_0 (CILCompiler_t_1960408046_0 * __this, String_t* ___name, MethodInfo_t ** ___cached, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::ReadInt(System.Byte[],System.Int32)
extern "C"  int32_t CILCompiler_ReadInt_m_97818407_0 (CILCompiler_t_1960408046_0 * __this, ByteU5BU5D_t_1238178395_0* ___code, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.CILCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  uint16_t CILCompiler_MakeFlags_m1342304657_0 (Object_t * __this /* static, unused */, bool ___negate, bool ___ignore, bool ___reverse, bool ___lazy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitGenericOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitGenericOp_m469148823_0 (CILCompiler_t_1960408046_0 * __this, uint8_t ___op, bool ___negate, bool ___ignore, bool ___reverse, bool ___lazy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitOp_m1484103379_0 (CILCompiler_t_1960408046_0 * __this, uint8_t ___op, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOpIgnoreReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitOpIgnoreReverse_m1639242080_0 (CILCompiler_t_1960408046_0 * __this, uint8_t ___op, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitOpNegateReverse_m1929266832_0 (CILCompiler_t_1960408046_0 * __this, uint8_t ___op, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::CreateEvalMethod(System.Byte[],System.Int32)
extern "C"  DynamicMethod_t714200109_0 * CILCompiler_CreateEvalMethod_m_2090246563_0 (CILCompiler_t_1960408046_0 * __this, ByteU5BU5D_t_1238178395_0* ___program, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::ReadShort(System.Byte[],System.Int32)
extern "C"  int32_t CILCompiler_ReadShort_m1043275046_0 (CILCompiler_t_1960408046_0 * __this, ByteU5BU5D_t_1238178395_0* ___program, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.Label System.Text.RegularExpressions.CILCompiler::CreateLabelForPC(System.Reflection.Emit.ILGenerator,System.Int32)
extern "C"  Label_t_1261953503_0  CILCompiler_CreateLabelForPC_m1633407530_0 (CILCompiler_t_1960408046_0 * __this, ILGenerator_t2081778301_0 * ___ilgen, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::GetILOffset(System.Reflection.Emit.ILGenerator)
extern "C"  int32_t CILCompiler_GetILOffset_m_157198235_0 (CILCompiler_t_1960408046_0 * __this, ILGenerator_t2081778301_0 * ___ilgen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::EmitEvalMethodBody(System.Reflection.Emit.DynamicMethod,System.Reflection.Emit.ILGenerator,System.Text.RegularExpressions.CILCompiler/Frame,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&)
extern "C"  DynamicMethod_t714200109_0 * CILCompiler_EmitEvalMethodBody_m_2025271238_0 (CILCompiler_t_1960408046_0 * __this, DynamicMethod_t714200109_0 * ___m, ILGenerator_t2081778301_0 * ___ilgen, Frame_t193017104_0 * ___frame, ByteU5BU5D_t_1238178395_0* ___program, int32_t ___pc, int32_t ___end_pc, bool ___one_op, bool ___no_bump, int32_t* ___out_pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
