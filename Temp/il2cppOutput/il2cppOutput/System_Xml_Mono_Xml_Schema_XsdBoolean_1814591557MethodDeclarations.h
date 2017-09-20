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

// Mono.Xml.Schema.XsdBoolean
struct XsdBoolean_t_1814591557_0;
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

// System.Void Mono.Xml.Schema.XsdBoolean::.ctor()
extern "C"  void XsdBoolean__ctor_m_185176837_0 (XsdBoolean_t_1814591557_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdBoolean::get_AllowedFacets()
extern "C"  int32_t XsdBoolean_get_AllowedFacets_m1929232577_0 (XsdBoolean_t_1814591557_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdBoolean::get_TokenizedType()
extern "C"  int32_t XsdBoolean_get_TokenizedType_m200189154_0 (XsdBoolean_t_1814591557_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdBoolean::get_TypeCode()
extern "C"  int32_t XsdBoolean_get_TypeCode_m958453925_0 (XsdBoolean_t_1814591557_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdBoolean::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Object_t * XsdBoolean_ParseValue_m_1036838663_0 (XsdBoolean_t_1814591557_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdBoolean::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t_103494864_0 * XsdBoolean_ParseValueType_m_1852468125_0 (XsdBoolean_t_1814591557_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
