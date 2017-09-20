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

// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t_1946880992_0;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t_1933432964_0;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t970576597_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.Object
struct Object_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t_929928242_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.Schema.XsdKeyEntry::.ctor(Mono.Xml.Schema.XsdKeyTable,System.Int32,System.Xml.IXmlLineInfo)
extern "C"  void XsdKeyEntry__ctor_m_1828235160_0 (XsdKeyEntry_t_1946880992_0 * __this, XsdKeyTable_t_1933432964_0 * ___keyseq, int32_t ___depth, Object_t * ___li, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntry::get_KeyFound()
extern "C"  bool XsdKeyEntry_get_KeyFound_m_1121236872_0 (XsdKeyEntry_t_1946880992_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntry::Init(Mono.Xml.Schema.XsdKeyTable,System.Int32,System.Xml.IXmlLineInfo)
extern "C"  void XsdKeyEntry_Init_m_622864676_0 (XsdKeyEntry_t_1946880992_0 * __this, XsdKeyTable_t_1933432964_0 * ___keyseq, int32_t ___depth, Object_t * ___li, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntry::CompareIdentity(Mono.Xml.Schema.XsdKeyEntry)
extern "C"  bool XsdKeyEntry_CompareIdentity_m1024870280_0 (XsdKeyEntry_t_1946880992_0 * __this, XsdKeyEntry_t_1946880992_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntry::ProcessMatch(System.Boolean,System.Collections.ArrayList,System.Object,System.Xml.XmlNameTable,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Xml.IXmlLineInfo,System.Int32,System.String,System.String,System.Object,System.Boolean,System.Collections.ArrayList)
extern "C"  void XsdKeyEntry_ProcessMatch_m_52271424_0 (XsdKeyEntry_t_1946880992_0 * __this, bool ___isAttribute, ArrayList_t536890563_0 * ___qnameStack, Object_t * ___sender, XmlNameTable_t_662182735_0 * ___nameTable, String_t* ___sourceUri, Object_t * ___schemaType, Object_t * ___nsResolver, Object_t * ___li, int32_t ___depth, String_t* ___attrName, String_t* ___attrNS, Object_t * ___attrValue, bool ___isXsiNil, ArrayList_t536890563_0 * ___currentKeyFieldConsumers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
