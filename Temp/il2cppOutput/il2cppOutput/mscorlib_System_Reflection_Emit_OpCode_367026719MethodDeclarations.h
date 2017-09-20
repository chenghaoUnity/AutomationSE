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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_OpCode_367026719.h"
#include "mscorlib_System_Reflection_Emit_OperandType1494829328.h"
#include "mscorlib_System_Reflection_Emit_StackBehaviour1597010568.h"

// System.Void System.Reflection.Emit.OpCode::.ctor(System.Int32,System.Int32)
extern "C"  void OpCode__ctor_m742870391_0 (OpCode_t_367026719_0 * __this, int32_t ___p, int32_t ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.OpCode::GetHashCode()
extern "C"  int32_t OpCode_GetHashCode_m1885918234_0 (OpCode_t_367026719_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.OpCode::Equals(System.Object)
extern "C"  bool OpCode_Equals_m_966276542_0 (OpCode_t_367026719_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.OpCode::ToString()
extern "C"  String_t* OpCode_ToString_m_251902018_0 (OpCode_t_367026719_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.OpCode::get_Name()
extern "C"  String_t* OpCode_get_Name_m386372902_0 (OpCode_t_367026719_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.OpCode::get_Size()
extern "C"  int32_t OpCode_get_Size_m_1981044477_0 (OpCode_t_367026719_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.OperandType System.Reflection.Emit.OpCode::get_OperandType()
extern "C"  int32_t OpCode_get_OperandType_m1363502342_0 (OpCode_t_367026719_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.StackBehaviour System.Reflection.Emit.OpCode::get_StackBehaviourPop()
extern "C"  int32_t OpCode_get_StackBehaviourPop_m_185583577_0 (OpCode_t_367026719_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.StackBehaviour System.Reflection.Emit.OpCode::get_StackBehaviourPush()
extern "C"  int32_t OpCode_get_StackBehaviourPush_m_1452431578_0 (OpCode_t_367026719_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Reflection.Emit.OpCode::get_Value()
extern "C"  int16_t OpCode_get_Value_m440952459_0 (OpCode_t_367026719_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.OpCode::op_Equality(System.Reflection.Emit.OpCode,System.Reflection.Emit.OpCode)
extern "C"  bool OpCode_op_Equality_m1885827501_0 (Object_t * __this /* static, unused */, OpCode_t_367026719_0  ___a, OpCode_t_367026719_0  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
