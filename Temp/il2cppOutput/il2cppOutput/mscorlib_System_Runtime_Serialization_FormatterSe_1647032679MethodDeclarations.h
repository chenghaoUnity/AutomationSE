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

// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// System.Object
struct Object_t;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t_1590072590_0;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Object[] System.Runtime.Serialization.FormatterServices::GetObjectData(System.Object,System.Reflection.MemberInfo[])
extern "C"  ObjectU5BU5D_t1774424924_0* FormatterServices_GetObjectData_m_320814997_0 (Object_t * __this /* static, unused */, Object_t * ___obj, MemberInfoU5BU5D_t_1590072590_0* ___members, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] System.Runtime.Serialization.FormatterServices::GetSerializableMembers(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C"  MemberInfoU5BU5D_t_1590072590_0* FormatterServices_GetSerializableMembers_m1124071069_0 (Object_t * __this /* static, unused */, Type_t * ___type, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FormatterServices::GetFields(System.Type,System.Type,System.Collections.ArrayList)
extern "C"  void FormatterServices_GetFields_m1400403013_0 (Object_t * __this /* static, unused */, Type_t * ___reflectedType, Type_t * ___type, ArrayList_t536890563_0 * ___fields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.FormatterServices::GetUninitializedObject(System.Type)
extern "C"  Object_t * FormatterServices_GetUninitializedObject_m113523001_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.FormatterServices::GetSafeUninitializedObject(System.Type)
extern "C"  Object_t * FormatterServices_GetSafeUninitializedObject_m133866342_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
