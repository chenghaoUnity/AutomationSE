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

// MiniJSON.Json/Serializer
struct Serializer_t26705329_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t_1514320629_0;
// System.Collections.IList
struct IList_t_1078834989_0;

#include "codegen/il2cpp-codegen.h"

// System.Void MiniJSON.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m425022853_0 (Serializer_t26705329_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m_1920848300_0 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m124993476_0 (Serializer_t26705329_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C"  void Serializer_SerializeObject_m_286560869_0 (Serializer_t26705329_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C"  void Serializer_SerializeArray_m472320681_0 (Serializer_t26705329_0 * __this, Object_t * ___anArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m_16455538_0 (Serializer_t26705329_0 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m1294893125_0 (Serializer_t26705329_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
