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

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t2081778301_0;
// System.Reflection.Module
struct Module_t_2083915884_0;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t359156813_0;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t_633934365_0;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1048289184_0;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t_722972841_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_OpCode_367026719.h"
#include "mscorlib_System_Reflection_Emit_Label_1261953503.h"

// System.Void System.Reflection.Emit.ILGenerator::.ctor(System.Reflection.Module,System.Reflection.Emit.TokenGenerator,System.Int32)
extern "C"  void ILGenerator__ctor_m363767667_0 (ILGenerator_t2081778301_0 * __this, Module_t_2083915884_0 * ___m, Object_t * ___token_gen, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::.cctor()
extern "C"  void ILGenerator__cctor_m152040660_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::add_token_fixup(System.Reflection.MemberInfo)
extern "C"  void ILGenerator_add_token_fixup_m1030891159_0 (ILGenerator_t2081778301_0 * __this, MemberInfo_t * ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::make_room(System.Int32)
extern "C"  void ILGenerator_make_room_m_1144961388_0 (ILGenerator_t2081778301_0 * __this, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::emit_int(System.Int32)
extern "C"  void ILGenerator_emit_int_m1452131359_0 (ILGenerator_t2081778301_0 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::ll_emit(System.Reflection.Emit.OpCode)
extern "C"  void ILGenerator_ll_emit_m_1972898492_0 (ILGenerator_t2081778301_0 * __this, OpCode_t_367026719_0  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::target_len(System.Reflection.Emit.OpCode)
extern "C"  int32_t ILGenerator_target_len_m_1269780865_0 (Object_t * __this /* static, unused */, OpCode_t_367026719_0  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type)
extern "C"  LocalBuilder_t_633934365_0 * ILGenerator_DeclareLocal_m431075649_0 (ILGenerator_t2081778301_0 * __this, Type_t * ___localType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type,System.Boolean)
extern "C"  LocalBuilder_t_633934365_0 * ILGenerator_DeclareLocal_m1507842076_0 (ILGenerator_t2081778301_0 * __this, Type_t * ___localType, bool ___pinned, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.Label System.Reflection.Emit.ILGenerator::DefineLabel()
extern "C"  Label_t_1261953503_0  ILGenerator_DefineLabel_m_1402953630_0 (ILGenerator_t2081778301_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode)
extern "C"  void ILGenerator_Emit_m1513421455_0 (ILGenerator_t2081778301_0 * __this, OpCode_t_367026719_0  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Byte)
extern "C"  void ILGenerator_Emit_m1177588532_0 (ILGenerator_t2081778301_0 * __this, OpCode_t_367026719_0  ___opcode, uint8_t ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.ConstructorInfo)
extern "C"  void ILGenerator_Emit_m726728631_0 (ILGenerator_t2081778301_0 * __this, OpCode_t_367026719_0  ___opcode, ConstructorInfo_t1048289184_0 * ___con, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.FieldInfo)
extern "C"  void ILGenerator_Emit_m899075895_0 (ILGenerator_t2081778301_0 * __this, OpCode_t_367026719_0  ___opcode, FieldInfo_t * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Int32)
extern "C"  void ILGenerator_Emit_m_1959263576_0 (ILGenerator_t2081778301_0 * __this, OpCode_t_367026719_0  ___opcode, int32_t ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Int64)
extern "C"  void ILGenerator_Emit_m_1959260631_0 (ILGenerator_t2081778301_0 * __this, OpCode_t_367026719_0  ___opcode, int64_t ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.Label)
extern "C"  void ILGenerator_Emit_m628373050_0 (ILGenerator_t2081778301_0 * __this, OpCode_t_367026719_0  ___opcode, Label_t_1261953503_0  ___label, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.LocalBuilder)
extern "C"  void ILGenerator_Emit_m_746494380_0 (ILGenerator_t2081778301_0 * __this, OpCode_t_367026719_0  ___opcode, LocalBuilder_t_633934365_0 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo)
extern "C"  void ILGenerator_Emit_m1087212740_0 (ILGenerator_t2081778301_0 * __this, OpCode_t_367026719_0  ___opcode, MethodInfo_t * ___meth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Int32)
extern "C"  void ILGenerator_Emit_m1535602323_0 (ILGenerator_t2081778301_0 * __this, OpCode_t_367026719_0  ___opcode, MethodInfo_t * ___method, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.String)
extern "C"  void ILGenerator_Emit_m_150930293_0 (ILGenerator_t2081778301_0 * __this, OpCode_t_367026719_0  ___opcode, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type)
extern "C"  void ILGenerator_Emit_m1194208066_0 (ILGenerator_t2081778301_0 * __this, OpCode_t_367026719_0  ___opcode, Type_t * ___cls, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[])
extern "C"  void ILGenerator_EmitCall_m_573977133_0 (ILGenerator_t2081778301_0 * __this, OpCode_t_367026719_0  ___opcode, MethodInfo_t * ___methodInfo, TypeU5BU5D_t_722972841_0* ___optionalParameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::MarkLabel(System.Reflection.Emit.Label)
extern "C"  void ILGenerator_MarkLabel_m_1666105247_0 (ILGenerator_t2081778301_0 * __this, Label_t_1261953503_0  ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::label_fixup()
extern "C"  void ILGenerator_label_fixup_m_1325882916_0 (ILGenerator_t2081778301_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::Mono_GetCurrentOffset(System.Reflection.Emit.ILGenerator)
extern "C"  int32_t ILGenerator_Mono_GetCurrentOffset_m436459828_0 (Object_t * __this /* static, unused */, ILGenerator_t2081778301_0 * ___ig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
