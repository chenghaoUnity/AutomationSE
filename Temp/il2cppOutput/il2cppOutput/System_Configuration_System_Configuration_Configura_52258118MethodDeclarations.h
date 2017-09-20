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

// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t_52258118_0;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t_1454036085_0;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur_207765418.h"

// System.Void System.Configuration.ConfigurationLockCollection::.ctor(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationLockType)
extern "C"  void ConfigurationLockCollection__ctor_m_279019383_0 (ConfigurationLockCollection_t_52258118_0 * __this, ConfigurationElement_t_1454036085_0 * ___element, int32_t ___lockType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ConfigurationLockCollection_System_Collections_ICollection_CopyTo_m_992533848_0 (ConfigurationLockCollection_t_52258118_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::CheckName(System.String)
extern "C"  void ConfigurationLockCollection_CheckName_m2069114485_0 (ConfigurationLockCollection_t_52258118_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::Add(System.String)
extern "C"  void ConfigurationLockCollection_Add_m1108477191_0 (ConfigurationLockCollection_t_52258118_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::Clear()
extern "C"  void ConfigurationLockCollection_Clear_m747601479_0 (ConfigurationLockCollection_t_52258118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationLockCollection::GetEnumerator()
extern "C"  Object_t * ConfigurationLockCollection_GetEnumerator_m112387898_0 (ConfigurationLockCollection_t_52258118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::SetFromList(System.String)
extern "C"  void ConfigurationLockCollection_SetFromList_m_1660938850_0 (ConfigurationLockCollection_t_52258118_0 * __this, String_t* ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationLockCollection::get_Count()
extern "C"  int32_t ConfigurationLockCollection_get_Count_m_1318809440_0 (ConfigurationLockCollection_t_52258118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationLockCollection::get_IsSynchronized()
extern "C"  bool ConfigurationLockCollection_get_IsSynchronized_m9094773_0 (ConfigurationLockCollection_t_52258118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationLockCollection::get_SyncRoot()
extern "C"  Object_t * ConfigurationLockCollection_get_SyncRoot_m823312131_0 (ConfigurationLockCollection_t_52258118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
