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

// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1115255140_0;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlNamespaceManager__ctor_m1896995422_0 (XmlNamespaceManager_t1115255140_0 * __this, XmlNameTable_t_662182735_0 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::InitData()
extern "C"  void XmlNamespaceManager_InitData_m1296972012_0 (XmlNamespaceManager_t1115255140_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::GrowDecls()
extern "C"  void XmlNamespaceManager_GrowDecls_m_1157803834_0 (XmlNamespaceManager_t1115255140_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::GrowScopes()
extern "C"  void XmlNamespaceManager_GrowScopes_m1707029604_0 (XmlNamespaceManager_t1115255140_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace()
extern "C"  String_t* XmlNamespaceManager_get_DefaultNamespace_m514922136_0 (XmlNamespaceManager_t1115255140_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable()
extern "C"  XmlNameTable_t_662182735_0 * XmlNamespaceManager_get_NameTable_m814846873_0 (XmlNamespaceManager_t1115255140_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String)
extern "C"  void XmlNamespaceManager_AddNamespace_m_1650967822_0 (XmlNamespaceManager_t1115255140_0 * __this, String_t* ___prefix, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String,System.Boolean)
extern "C"  void XmlNamespaceManager_AddNamespace_m_758081973_0 (XmlNamespaceManager_t1115255140_0 * __this, String_t* ___prefix, String_t* ___uri, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::IsValidDeclaration(System.String,System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_IsValidDeclaration_m_1614694052_0 (Object_t * __this /* static, unused */, String_t* ___prefix, String_t* ___uri, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNamespaceManager::GetEnumerator()
extern "C"  Object_t * XmlNamespaceManager_GetEnumerator_m_1225114066_0 (XmlNamespaceManager_t1115255140_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String)
extern "C"  String_t* XmlNamespaceManager_LookupNamespace_m1234724084_0 (XmlNamespaceManager_t1115255140_0 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupNamespace_m1482352649_0 (XmlNamespaceManager_t1115255140_0 * __this, String_t* ___prefix, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::CompareString(System.String,System.String,System.Boolean)
extern "C"  bool XmlNamespaceManager_CompareString_m_457992867_0 (XmlNamespaceManager_t1115255140_0 * __this, String_t* ___s1, String_t* ___s2, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupPrefix_m1650963420_0 (XmlNamespaceManager_t1115255140_0 * __this, String_t* ___uri, bool ___atomizedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixExclusive(System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupPrefixExclusive_m307859866_0 (XmlNamespaceManager_t1115255140_0 * __this, String_t* ___uri, bool ___atomizedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixCore(System.String,System.Boolean,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupPrefixCore_m1181901506_0 (XmlNamespaceManager_t1115255140_0 * __this, String_t* ___uri, bool ___atomizedName, bool ___excludeOverriden, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::IsOverriden(System.Int32)
extern "C"  bool XmlNamespaceManager_IsOverriden_m2085253169_0 (XmlNamespaceManager_t1115255140_0 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::PopScope()
extern "C"  bool XmlNamespaceManager_PopScope_m_906971043_0 (XmlNamespaceManager_t1115255140_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::PushScope()
extern "C"  void XmlNamespaceManager_PushScope_m629311082_0 (XmlNamespaceManager_t1115255140_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String)
extern "C"  void XmlNamespaceManager_RemoveNamespace_m609388951_0 (XmlNamespaceManager_t1115255140_0 * __this, String_t* ___prefix, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String,System.Boolean)
extern "C"  void XmlNamespaceManager_RemoveNamespace_m_1787524858_0 (XmlNamespaceManager_t1115255140_0 * __this, String_t* ___prefix, String_t* ___uri, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
