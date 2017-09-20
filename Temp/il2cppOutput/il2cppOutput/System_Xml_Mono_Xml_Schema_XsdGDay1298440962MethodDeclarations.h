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

// Mono.Xml.Schema.XsdGDay
struct XsdGDay_t1298440962_0;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t_929928242_0;
// System.ValueType
struct ValueType_t_103494864_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet688014383.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode_1029406762.h"
#include "System_Xml_Mono_Xml_Schema_XsdOrdering_1189512031.h"

// System.Void Mono.Xml.Schema.XsdGDay::.ctor()
extern "C"  void XsdGDay__ctor_m_271071538_0 (XsdGDay_t1298440962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdGDay::get_AllowedFacets()
extern "C"  int32_t XsdGDay_get_AllowedFacets_m_786593062_0 (XsdGDay_t1298440962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdGDay::get_TypeCode()
extern "C"  int32_t XsdGDay_get_TypeCode_m1444350362_0 (XsdGDay_t1298440962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdGDay::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Object_t * XsdGDay_ParseValue_m1471048828_0 (XsdGDay_t1298440962_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdGDay::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t_103494864_0 * XsdGDay_ParseValueType_m1407371590_0 (XsdGDay_t1298440962_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdGDay::Compare(System.Object,System.Object)
extern "C"  int32_t XsdGDay_Compare_m_596576944_0 (XsdGDay_t1298440962_0 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
