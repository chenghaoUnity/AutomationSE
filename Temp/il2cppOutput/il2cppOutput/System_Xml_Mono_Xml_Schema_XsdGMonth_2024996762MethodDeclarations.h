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

// Mono.Xml.Schema.XsdGMonth
struct XsdGMonth_t_2024996762_0;
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

// System.Void Mono.Xml.Schema.XsdGMonth::.ctor()
extern "C"  void XsdGMonth__ctor_m1716300458_0 (XsdGMonth_t_2024996762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdGMonth::get_AllowedFacets()
extern "C"  int32_t XsdGMonth_get_AllowedFacets_m323605494_0 (XsdGMonth_t_2024996762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdGMonth::get_TypeCode()
extern "C"  int32_t XsdGMonth_get_TypeCode_m_2004815554_0 (XsdGMonth_t_2024996762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdGMonth::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Object_t * XsdGMonth_ParseValue_m_1775835040_0 (XsdGMonth_t_2024996762_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdGMonth::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t_103494864_0 * XsdGMonth_ParseValueType_m_1323575510_0 (XsdGMonth_t_2024996762_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdGMonth::Compare(System.Object,System.Object)
extern "C"  int32_t XsdGMonth_Compare_m1579225908_0 (XsdGMonth_t_2024996762_0 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
