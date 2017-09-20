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

// System.Type
struct Type_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t2081778301_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::.cctor()
extern "C"  void CodeGenerator__cctor_m_1546730682_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::GenerateMetadataType(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C"  Type_t * CodeGenerator_GenerateMetadataType_m706666128_0 (Object_t * __this /* static, unused */, Type_t * ___type, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::GenerateMetadataTypeInternal(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C"  Type_t * CodeGenerator_GenerateMetadataTypeInternal_m697276819_0 (Object_t * __this /* static, unused */, Type_t * ___type, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::LoadFromPtr(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void CodeGenerator_LoadFromPtr_m1949607997_0 (Object_t * __this /* static, unused */, ILGenerator_t2081778301_0 * ___ig, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWriteTypeSpec(System.Reflection.Emit.ILGenerator,System.Type,System.String)
extern "C"  void CodeGenerator_EmitWriteTypeSpec_m_399063460_0 (Object_t * __this /* static, unused */, ILGenerator_t2081778301_0 * ___gen, Type_t * ___type, String_t* ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitLoadTypeAssembly(System.Reflection.Emit.ILGenerator,System.Type,System.String)
extern "C"  void CodeGenerator_EmitLoadTypeAssembly_m1819466316_0 (Object_t * __this /* static, unused */, ILGenerator_t2081778301_0 * ___gen, Type_t * ___type, String_t* ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWrite(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void CodeGenerator_EmitWrite_m_2026180117_0 (Object_t * __this /* static, unused */, ILGenerator_t2081778301_0 * ___gen, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWritePrimitiveValue(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void CodeGenerator_EmitWritePrimitiveValue_m799865557_0 (Object_t * __this /* static, unused */, ILGenerator_t2081778301_0 * ___gen, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EnumToUnderlying(System.Type)
extern "C"  Type_t * CodeGenerator_EnumToUnderlying_m_1108825175_0 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
