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

// System.Configuration.Provider.ProviderCollection
struct ProviderCollection_t1379317927_0;
// System.Array
struct Array_t;
// System.Configuration.Provider.ProviderBase
struct ProviderBase_t_367162470_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Configuration.Provider.ProviderCollection::.ctor()
extern "C"  void ProviderCollection__ctor_m_1440416049_0 (ProviderCollection_t1379317927_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Provider.ProviderCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ProviderCollection_System_Collections_ICollection_CopyTo_m_766537387_0 (ProviderCollection_t1379317927_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Provider.ProviderCollection::Add(System.Configuration.Provider.ProviderBase)
extern "C"  void ProviderCollection_Add_m449126406_0 (ProviderCollection_t1379317927_0 * __this, ProviderBase_t_367162470_0 * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.Provider.ProviderCollection::GetEnumerator()
extern "C"  Object_t * ProviderCollection_GetEnumerator_m92979437_0 (ProviderCollection_t1379317927_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.Provider.ProviderCollection::get_Count()
extern "C"  int32_t ProviderCollection_get_Count_m_558154797_0 (ProviderCollection_t1379317927_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Provider.ProviderCollection::get_IsSynchronized()
extern "C"  bool ProviderCollection_get_IsSynchronized_m757466274_0 (ProviderCollection_t1379317927_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.Provider.ProviderCollection::get_SyncRoot()
extern "C"  Object_t * ProviderCollection_get_SyncRoot_m1238328048_0 (ProviderCollection_t1379317927_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Provider.ProviderBase System.Configuration.Provider.ProviderCollection::get_Item(System.String)
extern "C"  ProviderBase_t_367162470_0 * ProviderCollection_get_Item_m1343934058_0 (ProviderCollection_t1379317927_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
