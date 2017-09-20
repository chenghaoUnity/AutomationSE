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

// System.Xml.XmlNameEntry
struct XmlNameEntry_t_675630763_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t_1959421139_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.XmlNameEntry::.ctor(System.String,System.String,System.String)
extern "C"  void XmlNameEntry__ctor_m1623657471_0 (XmlNameEntry_t_675630763_0 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNameEntry::Update(System.String,System.String,System.String)
extern "C"  void XmlNameEntry_Update_m1900151592_0 (XmlNameEntry_t_675630763_0 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNameEntry::Equals(System.Object)
extern "C"  bool XmlNameEntry_Equals_m179953812_0 (XmlNameEntry_t_675630763_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNameEntry::GetHashCode()
extern "C"  int32_t XmlNameEntry_GetHashCode_m684083372_0 (XmlNameEntry_t_675630763_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNameEntry::GetPrefixedName(System.Xml.XmlNameEntryCache)
extern "C"  String_t* XmlNameEntry_GetPrefixedName_m_172634030_0 (XmlNameEntry_t_675630763_0 * __this, XmlNameEntryCache_t_1959421139_0 * ___owner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
