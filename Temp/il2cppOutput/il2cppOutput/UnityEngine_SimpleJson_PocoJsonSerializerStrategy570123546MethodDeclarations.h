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

// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t570123546_0;
// System.String
struct String_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t2040409141_0;
// System.Type
struct Type_t;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct IDictionary_2_t_1796277473_0;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct IDictionary_2_t2014473897_0;
// System.Object
struct Object_t;
// System.Enum
struct Enum_t_224673028_0;

#include "codegen/il2cpp-codegen.h"

// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern "C"  void PocoJsonSerializerStrategy__ctor_m98290550_0 (PocoJsonSerializerStrategy_t570123546_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern "C"  void PocoJsonSerializerStrategy__cctor_m_1730056457_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern "C"  String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m294662907_0 (PocoJsonSerializerStrategy_t570123546_0 * __this, String_t* ___clrPropertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern "C"  ConstructorDelegate_t2040409141_0 * PocoJsonSerializerStrategy_ContructorDelegateFactory_m1098206077_0 (PocoJsonSerializerStrategy_t570123546_0 * __this, Type_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern "C"  Object_t* PocoJsonSerializerStrategy_GetterValueFactory_m1085737513_0 (PocoJsonSerializerStrategy_t570123546_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern "C"  Object_t* PocoJsonSerializerStrategy_SetterValueFactory_m2124618347_0 (PocoJsonSerializerStrategy_t570123546_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern "C"  bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m408626704_0 (PocoJsonSerializerStrategy_t570123546_0 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern "C"  Object_t * PocoJsonSerializerStrategy_SerializeEnum_m_385882680_0 (PocoJsonSerializerStrategy_t570123546_0 * __this, Enum_t_224673028_0 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern "C"  bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m_693550131_0 (PocoJsonSerializerStrategy_t570123546_0 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern "C"  bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1594419814_0 (PocoJsonSerializerStrategy_t570123546_0 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
