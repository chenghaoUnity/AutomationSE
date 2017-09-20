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

// Mono.Xml.Schema.XsdDecimal
struct XsdDecimal_t_337039644_0;
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
#include "System_Xml_System_Xml_XmlTokenizedType_462541935.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode_1029406762.h"
#include "System_Xml_Mono_Xml_Schema_XsdOrdering_1189512031.h"

// System.Void Mono.Xml.Schema.XsdDecimal::.ctor()
extern "C"  void XsdDecimal__ctor_m680772594_0 (XsdDecimal_t_337039644_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdDecimal::get_AllowedFacets()
extern "C"  int32_t XsdDecimal_get_AllowedFacets_m1203068216_0 (XsdDecimal_t_337039644_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdDecimal::get_TokenizedType()
extern "C"  int32_t XsdDecimal_get_TokenizedType_m_525975207_0 (XsdDecimal_t_337039644_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdDecimal::get_TypeCode()
extern "C"  int32_t XsdDecimal_get_TypeCode_m171511246_0 (XsdDecimal_t_337039644_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdDecimal::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Object_t * XsdDecimal_ParseValue_m269535650_0 (XsdDecimal_t_337039644_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdDecimal::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t_103494864_0 * XsdDecimal_ParseValueType_m1651034252_0 (XsdDecimal_t_337039644_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdDecimal::Compare(System.Object,System.Object)
extern "C"  int32_t XsdDecimal_Compare_m1825878926_0 (XsdDecimal_t_337039644_0 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
