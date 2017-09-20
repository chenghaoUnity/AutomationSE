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

// SimpleJson.JsonObject
struct JsonObject_t2032102569_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1164774799_0;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1386885153_0;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1078115135_0;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1975928664_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_503905507.h"

// System.Void SimpleJson.JsonObject::.ctor()
extern "C"  void JsonObject__ctor_m_195621177_0 (JsonObject_t2032102569_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * JsonObject_System_Collections_IEnumerable_GetEnumerator_m463473096_0 (JsonObject_t2032102569_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern "C"  void JsonObject_Add_m_1819856566_0 (JsonObject_t2032102569_0 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern "C"  Object_t* JsonObject_get_Keys_m148532872_0 (JsonObject_t2032102569_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern "C"  bool JsonObject_TryGetValue_m_951911971_0 (JsonObject_t2032102569_0 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern "C"  Object_t* JsonObject_get_Values_m1000452872_0 (JsonObject_t2032102569_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern "C"  Object_t * JsonObject_get_Item_m_1066265890_0 (JsonObject_t2032102569_0 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern "C"  void JsonObject_set_Item_m_1902598717_0 (JsonObject_t2032102569_0 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C"  void JsonObject_Add_m329961947_0 (JsonObject_t2032102569_0 * __this, KeyValuePair_2_t_503905507_0  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Clear()
extern "C"  void JsonObject_Clear_m1505479410_0 (JsonObject_t2032102569_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C"  bool JsonObject_Contains_m1982716011_0 (JsonObject_t2032102569_0 * __this, KeyValuePair_2_t_503905507_0  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern "C"  void JsonObject_CopyTo_m_1018913929_0 (JsonObject_t2032102569_0 * __this, KeyValuePair_2U5BU5D_t1078115135_0* ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.JsonObject::get_Count()
extern "C"  int32_t JsonObject_get_Count_m287878091_0 (JsonObject_t2032102569_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern "C"  bool JsonObject_get_IsReadOnly_m1285123564_0 (JsonObject_t2032102569_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C"  bool JsonObject_Remove_m_269745328_0 (JsonObject_t2032102569_0 * __this, KeyValuePair_2_t_503905507_0  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern "C"  Object_t* JsonObject_GetEnumerator_m1456030472_0 (JsonObject_t2032102569_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.JsonObject::ToString()
extern "C"  String_t* JsonObject_ToString_m1046229766_0 (JsonObject_t2032102569_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
