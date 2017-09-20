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

// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t_52373772_0;
// System.ValueType
struct ValueType_t_103494864_0;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t_929928242_0;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdWhitespaceFacet_516485683.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode_1029406762.h"

// System.Void System.Xml.Schema.XmlSchemaDatatype::.ctor()
extern "C"  void XmlSchemaDatatype__ctor_m503494556_0 (XmlSchemaDatatype_t_52373772_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaDatatype::.cctor()
extern "C"  void XmlSchemaDatatype__cctor_m_2053634159_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdWhitespaceFacet System.Xml.Schema.XmlSchemaDatatype::get_Whitespace()
extern "C"  int32_t XmlSchemaDatatype_get_Whitespace_m_557321863_0 (XmlSchemaDatatype_t_52373772_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlSchemaDatatype::get_TypeCode()
extern "C"  int32_t XmlSchemaDatatype_get_TypeCode_m_597125364_0 (XmlSchemaDatatype_t_52373772_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType System.Xml.Schema.XmlSchemaDatatype::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t_103494864_0 * XmlSchemaDatatype_ParseValueType_m1070187064_0 (XmlSchemaDatatype_t_52373772_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaDatatype::Normalize(System.String)
extern "C"  String_t* XmlSchemaDatatype_Normalize_m_336209768_0 (XmlSchemaDatatype_t_52373772_0 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaDatatype::Normalize(System.String,Mono.Xml.Schema.XsdWhitespaceFacet)
extern "C"  String_t* XmlSchemaDatatype_Normalize_m_639453326_0 (XmlSchemaDatatype_t_52373772_0 * __this, String_t* ___s, int32_t ___whitespaceFacet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaDatatype_t_52373772_0 * XmlSchemaDatatype_FromName_m2003221181_0 (Object_t * __this /* static, unused */, XmlQualifiedName_t_2082775307_0 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.String,System.String)
extern "C"  XmlSchemaDatatype_t_52373772_0 * XmlSchemaDatatype_FromName_m1008904623_0 (Object_t * __this /* static, unused */, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
