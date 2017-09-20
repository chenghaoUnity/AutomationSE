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

// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t_1959421139_0;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.String
struct String_t;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t_675630763_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.XmlNameEntryCache::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlNameEntryCache__ctor_m718589799_0 (XmlNameEntryCache_t_1959421139_0 * __this, XmlNameTable_t_662182735_0 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNameEntryCache::GetAtomizedPrefixedName(System.String,System.String)
extern "C"  String_t* XmlNameEntryCache_GetAtomizedPrefixedName_m1842421543_0 (XmlNameEntryCache_t_1959421139_0 * __this, String_t* ___prefix, String_t* ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::Add(System.String,System.String,System.String,System.Boolean)
extern "C"  XmlNameEntry_t_675630763_0 * XmlNameEntryCache_Add_m1016483486_0 (XmlNameEntryCache_t_1959421139_0 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, bool ___atomic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::GetInternal(System.String,System.String,System.String,System.Boolean)
extern "C"  XmlNameEntry_t_675630763_0 * XmlNameEntryCache_GetInternal_m_393193808_0 (XmlNameEntryCache_t_1959421139_0 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, bool ___atomic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
