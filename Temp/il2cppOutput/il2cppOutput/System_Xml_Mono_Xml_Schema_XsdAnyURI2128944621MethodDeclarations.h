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

// Mono.Xml.Schema.XsdAnyURI
struct XsdAnyURI_t2128944621_0;
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
#include "System_Xml_System_Xml_XmlTokenizedType_462541935.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode_1029406762.h"

// System.Void Mono.Xml.Schema.XsdAnyURI::.ctor()
extern "C"  void XsdAnyURI__ctor_m_1639983869_0 (XsdAnyURI_t2128944621_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdAnyURI::get_TokenizedType()
extern "C"  int32_t XsdAnyURI_get_TokenizedType_m1762949612_0 (XsdAnyURI_t2128944621_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdAnyURI::get_TypeCode()
extern "C"  int32_t XsdAnyURI_get_TypeCode_m399712453_0 (XsdAnyURI_t2128944621_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdAnyURI::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Object_t * XsdAnyURI_ParseValue_m_673954713_0 (XsdAnyURI_t2128944621_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdAnyURI::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t_103494864_0 * XsdAnyURI_ParseValueType_m1696454577_0 (XsdAnyURI_t2128944621_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
