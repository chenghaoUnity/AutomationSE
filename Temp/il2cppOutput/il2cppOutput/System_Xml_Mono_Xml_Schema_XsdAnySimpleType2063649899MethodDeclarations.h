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

// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t2063649899_0;
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
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Xml.Schema.XmlSchemaFacet
struct XmlSchemaFacet_t601576103_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode_1029406762.h"
#include "System_Xml_System_Xml_XmlTokenizedType_462541935.h"
#include "System_Xml_Mono_Xml_Schema_XsdOrdering_1189512031.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet688014383.h"

// System.Void Mono.Xml.Schema.XsdAnySimpleType::.ctor()
extern "C"  void XsdAnySimpleType__ctor_m711427083_0 (XsdAnySimpleType_t2063649899_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdAnySimpleType::.cctor()
extern "C"  void XsdAnySimpleType__cctor_m97306882_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnySimpleType Mono.Xml.Schema.XsdAnySimpleType::get_Instance()
extern "C"  XsdAnySimpleType_t2063649899_0 * XsdAnySimpleType_get_Instance_m_58812562_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdAnySimpleType::get_TypeCode()
extern "C"  int32_t XsdAnySimpleType_get_TypeCode_m1444970133_0 (XsdAnySimpleType_t2063649899_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdAnySimpleType::get_TokenizedType()
extern "C"  int32_t XsdAnySimpleType_get_TokenizedType_m_1763459918_0 (XsdAnySimpleType_t2063649899_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdAnySimpleType::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Object_t * XsdAnySimpleType_ParseValue_m1940261929_0 (XsdAnySimpleType_t2063649899_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdAnySimpleType::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t_103494864_0 * XsdAnySimpleType_ParseValueType_m_666664045_0 (XsdAnySimpleType_t2063649899_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.Schema.XsdAnySimpleType::ParseListValue(System.String,System.Xml.XmlNameTable)
extern "C"  StringU5BU5D_t_816028754_0* XsdAnySimpleType_ParseListValue_m596934066_0 (XsdAnySimpleType_t2063649899_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnySimpleType::AllowsFacet(System.Xml.Schema.XmlSchemaFacet)
extern "C"  bool XsdAnySimpleType_AllowsFacet_m93779672_0 (XsdAnySimpleType_t2063649899_0 * __this, XmlSchemaFacet_t601576103_0 * ___xsf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdAnySimpleType::Compare(System.Object,System.Object)
extern "C"  int32_t XsdAnySimpleType_Compare_m_978337451_0 (XsdAnySimpleType_t2063649899_0 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdAnySimpleType::Length(System.String)
extern "C"  int32_t XsdAnySimpleType_Length_m_703995903_0 (XsdAnySimpleType_t2063649899_0 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdAnySimpleType::get_AllowedFacets()
extern "C"  int32_t XsdAnySimpleType_get_AllowedFacets_m195062289_0 (XsdAnySimpleType_t2063649899_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
