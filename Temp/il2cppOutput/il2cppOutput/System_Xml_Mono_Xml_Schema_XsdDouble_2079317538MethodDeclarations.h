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

// Mono.Xml.Schema.XsdDouble
struct XsdDouble_t_2079317538_0;
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

// System.Void Mono.Xml.Schema.XsdDouble::.ctor()
extern "C"  void XsdDouble__ctor_m250327090_0 (XsdDouble_t_2079317538_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdDouble::get_AllowedFacets()
extern "C"  int32_t XsdDouble_get_AllowedFacets_m170184062_0 (XsdDouble_t_2079317538_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdDouble::get_TypeCode()
extern "C"  int32_t XsdDouble_get_TypeCode_m1417814710_0 (XsdDouble_t_2079317538_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdDouble::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Object_t * XsdDouble_ParseValue_m_1403331112_0 (XsdDouble_t_2079317538_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdDouble::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t_103494864_0 * XsdDouble_ParseValueType_m_118992734_0 (XsdDouble_t_2079317538_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdDouble::Compare(System.Object,System.Object)
extern "C"  int32_t XsdDouble_Compare_m150428332_0 (XsdDouble_t_2079317538_0 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
