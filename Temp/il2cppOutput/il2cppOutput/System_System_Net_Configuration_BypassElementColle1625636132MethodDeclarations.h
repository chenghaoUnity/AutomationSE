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

// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t1625636132_0;
// System.Net.Configuration.BypassElement
struct BypassElement_t_633316890_0;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t_1454036085_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Configuration.BypassElementCollection::.ctor()
extern "C"  void BypassElementCollection__ctor_m_2131578126_0 (BypassElementCollection_t1625636132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.BypassElement System.Net.Configuration.BypassElementCollection::get_Item(System.Int32)
extern "C"  BypassElement_t_633316890_0 * BypassElementCollection_get_Item_m_1607125646_0 (BypassElementCollection_t1625636132_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::set_Item(System.Int32,System.Net.Configuration.BypassElement)
extern "C"  void BypassElementCollection_set_Item_m744998151_0 (BypassElementCollection_t1625636132_0 * __this, int32_t ___index, BypassElement_t_633316890_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.BypassElement System.Net.Configuration.BypassElementCollection::get_Item(System.String)
extern "C"  BypassElement_t_633316890_0 * BypassElementCollection_get_Item_m_2119556351_0 (BypassElementCollection_t1625636132_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::set_Item(System.String,System.Net.Configuration.BypassElement)
extern "C"  void BypassElementCollection_set_Item_m41969978_0 (BypassElementCollection_t1625636132_0 * __this, String_t* ___name, BypassElement_t_633316890_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Configuration.BypassElementCollection::get_ThrowOnDuplicate()
extern "C"  bool BypassElementCollection_get_ThrowOnDuplicate_m_894472745_0 (BypassElementCollection_t1625636132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Add(System.Net.Configuration.BypassElement)
extern "C"  void BypassElementCollection_Add_m_1380484475_0 (BypassElementCollection_t1625636132_0 * __this, BypassElement_t_633316890_0 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Clear()
extern "C"  void BypassElementCollection_Clear_m_430477539_0 (BypassElementCollection_t1625636132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Net.Configuration.BypassElementCollection::CreateNewElement()
extern "C"  ConfigurationElement_t_1454036085_0 * BypassElementCollection_CreateNewElement_m1472145216_0 (BypassElementCollection_t1625636132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.BypassElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C"  Object_t * BypassElementCollection_GetElementKey_m1980950209_0 (BypassElementCollection_t1625636132_0 * __this, ConfigurationElement_t_1454036085_0 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.BypassElementCollection::IndexOf(System.Net.Configuration.BypassElement)
extern "C"  int32_t BypassElementCollection_IndexOf_m_350744963_0 (BypassElementCollection_t1625636132_0 * __this, BypassElement_t_633316890_0 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Remove(System.Net.Configuration.BypassElement)
extern "C"  void BypassElementCollection_Remove_m1512689130_0 (BypassElementCollection_t1625636132_0 * __this, BypassElement_t_633316890_0 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Remove(System.String)
extern "C"  void BypassElementCollection_Remove_m324009836_0 (BypassElementCollection_t1625636132_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::RemoveAt(System.Int32)
extern "C"  void BypassElementCollection_RemoveAt_m1335212410_0 (BypassElementCollection_t1625636132_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
