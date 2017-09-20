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

// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_t_80621077_0;
// System.Net.Configuration.ConnectionManagementElement
struct ConnectionManagementElement_t_898372755_0;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t_1454036085_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
extern "C"  void ConnectionManagementElementCollection__ctor_m_1401278261_0 (ConnectionManagementElementCollection_t_80621077_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ConnectionManagementElement System.Net.Configuration.ConnectionManagementElementCollection::get_Item(System.Int32)
extern "C"  ConnectionManagementElement_t_898372755_0 * ConnectionManagementElementCollection_get_Item_m1783444434_0 (ConnectionManagementElementCollection_t_80621077_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::set_Item(System.Int32,System.Net.Configuration.ConnectionManagementElement)
extern "C"  void ConnectionManagementElementCollection_set_Item_m1444687545_0 (ConnectionManagementElementCollection_t_80621077_0 * __this, int32_t ___index, ConnectionManagementElement_t_898372755_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ConnectionManagementElement System.Net.Configuration.ConnectionManagementElementCollection::get_Item(System.String)
extern "C"  ConnectionManagementElement_t_898372755_0 * ConnectionManagementElementCollection_get_Item_m_91098975_0 (ConnectionManagementElementCollection_t_80621077_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::set_Item(System.String,System.Net.Configuration.ConnectionManagementElement)
extern "C"  void ConnectionManagementElementCollection_set_Item_m_839326182_0 (ConnectionManagementElementCollection_t_80621077_0 * __this, String_t* ___name, ConnectionManagementElement_t_898372755_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Add(System.Net.Configuration.ConnectionManagementElement)
extern "C"  void ConnectionManagementElementCollection_Add_m_834124809_0 (ConnectionManagementElementCollection_t_80621077_0 * __this, ConnectionManagementElement_t_898372755_0 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Clear()
extern "C"  void ConnectionManagementElementCollection_Clear_m299822326_0 (ConnectionManagementElementCollection_t_80621077_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Net.Configuration.ConnectionManagementElementCollection::CreateNewElement()
extern "C"  ConfigurationElement_t_1454036085_0 * ConnectionManagementElementCollection_CreateNewElement_m729033031_0 (ConnectionManagementElementCollection_t_80621077_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.ConnectionManagementElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C"  Object_t * ConnectionManagementElementCollection_GetElementKey_m1601337672_0 (ConnectionManagementElementCollection_t_80621077_0 * __this, ConfigurationElement_t_1454036085_0 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.ConnectionManagementElementCollection::IndexOf(System.Net.Configuration.ConnectionManagementElement)
extern "C"  int32_t ConnectionManagementElementCollection_IndexOf_m397714799_0 (ConnectionManagementElementCollection_t_80621077_0 * __this, ConnectionManagementElement_t_898372755_0 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Remove(System.Net.Configuration.ConnectionManagementElement)
extern "C"  void ConnectionManagementElementCollection_Remove_m553567434_0 (ConnectionManagementElementCollection_t_80621077_0 * __this, ConnectionManagementElement_t_898372755_0 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Remove(System.String)
extern "C"  void ConnectionManagementElementCollection_Remove_m1417006469_0 (ConnectionManagementElementCollection_t_80621077_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::RemoveAt(System.Int32)
extern "C"  void ConnectionManagementElementCollection_RemoveAt_m858369665_0 (ConnectionManagementElementCollection_t_80621077_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
