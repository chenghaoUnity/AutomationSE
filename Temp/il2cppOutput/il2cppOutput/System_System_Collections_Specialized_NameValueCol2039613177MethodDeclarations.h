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

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2039613177_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Collections.Specialized.NameValueCollection::.ctor()
extern "C"  void NameValueCollection__ctor_m_530893827_0 (NameValueCollection_t2039613177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32,System.Collections.Specialized.NameValueCollection)
extern "C"  void NameValueCollection__ctor_m1341942833_0 (NameValueCollection_t2039613177_0 * __this, int32_t ___capacity, NameValueCollection_t2039613177_0 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void NameValueCollection__ctor_m_1101693290_0 (NameValueCollection_t2039613177_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
extern "C"  String_t* NameValueCollection_get_Item_m_1882461796_0 (NameValueCollection_t2039613177_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::set_Item(System.String,System.String)
extern "C"  void NameValueCollection_set_Item_m_1670699545_0 (NameValueCollection_t2039613177_0 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.Collections.Specialized.NameValueCollection)
extern "C"  void NameValueCollection_Add_m1634684301_0 (NameValueCollection_t2039613177_0 * __this, NameValueCollection_t2039613177_0 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
extern "C"  void NameValueCollection_Add_m1609818730_0 (NameValueCollection_t2039613177_0 * __this, String_t* ___name, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
extern "C"  String_t* NameValueCollection_Get_m_1454014057_0 (NameValueCollection_t2039613177_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.String)
extern "C"  String_t* NameValueCollection_Get_m_1668064388_0 (NameValueCollection_t2039613177_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::AsSingleString(System.Collections.ArrayList)
extern "C"  String_t* NameValueCollection_AsSingleString_m_1113033922_0 (Object_t * __this /* static, unused */, ArrayList_t536890563_0 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
extern "C"  String_t* NameValueCollection_GetKey_m_217818644_0 (NameValueCollection_t2039613177_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.String)
extern "C"  StringU5BU5D_t_816028754_0* NameValueCollection_GetValues_m_593408232_0 (NameValueCollection_t2039613177_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::AsStringArray(System.Collections.ArrayList)
extern "C"  StringU5BU5D_t_816028754_0* NameValueCollection_AsStringArray_m1125265865_0 (Object_t * __this /* static, unused */, ArrayList_t536890563_0 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Remove(System.String)
extern "C"  void NameValueCollection_Remove_m_939652593_0 (NameValueCollection_t2039613177_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Set(System.String,System.String)
extern "C"  void NameValueCollection_Set_m_424078815_0 (NameValueCollection_t2039613177_0 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
extern "C"  void NameValueCollection_InvalidateCachedArrays_m_725946266_0 (NameValueCollection_t2039613177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
