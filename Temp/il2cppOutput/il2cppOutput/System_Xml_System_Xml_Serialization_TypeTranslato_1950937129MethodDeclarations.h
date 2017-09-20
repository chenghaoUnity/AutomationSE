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

// System.Xml.Serialization.TypeData
struct TypeData_t1494685479_0;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.Serialization.TypeTranslator::.cctor()
extern "C"  void TypeTranslator__cctor_m1890549556_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetTypeData(System.Type)
extern "C"  TypeData_t1494685479_0 * TypeTranslator_GetTypeData_m_1602094451_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetTypeData(System.Type,System.String)
extern "C"  TypeData_t1494685479_0 * TypeTranslator_GetTypeData_m_19453943_0 (Object_t * __this /* static, unused */, Type_t * ___runtimeType, String_t* ___xmlDataType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetPrimitiveTypeData(System.String)
extern "C"  TypeData_t1494685479_0 * TypeTranslator_GetPrimitiveTypeData_m_1470307235_0 (Object_t * __this /* static, unused */, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetPrimitiveTypeData(System.String,System.Boolean)
extern "C"  TypeData_t1494685479_0 * TypeTranslator_GetPrimitiveTypeData_m_84113024_0 (Object_t * __this /* static, unused */, String_t* ___typeName, bool ___nullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeTranslator::GetArrayName(System.String)
extern "C"  String_t* TypeTranslator_GetArrayName_m359787500_0 (Object_t * __this /* static, unused */, String_t* ___elemName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeTranslator::ParseArrayType(System.String,System.String&,System.String&,System.String&)
extern "C"  void TypeTranslator_ParseArrayType_m_1400775847_0 (Object_t * __this /* static, unused */, String_t* ___arrayType, String_t** ___type, String_t** ___ns, String_t** ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
