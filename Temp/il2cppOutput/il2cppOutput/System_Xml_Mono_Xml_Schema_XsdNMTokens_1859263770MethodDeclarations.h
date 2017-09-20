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

// Mono.Xml.Schema.XsdNMTokens
struct XsdNMTokens_t_1859263770_0;
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

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlTokenizedType_462541935.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode_1029406762.h"

// System.Void Mono.Xml.Schema.XsdNMTokens::.ctor()
extern "C"  void XsdNMTokens__ctor_m_1874994966_0 (XsdNMTokens_t_1859263770_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdNMTokens::get_TokenizedType()
extern "C"  int32_t XsdNMTokens_get_TokenizedType_m_1151747309_0 (XsdNMTokens_t_1859263770_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdNMTokens::get_TypeCode()
extern "C"  int32_t XsdNMTokens_get_TypeCode_m_1864231426_0 (XsdNMTokens_t_1859263770_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdNMTokens::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Object_t * XsdNMTokens_ParseValue_m_951893152_0 (XsdNMTokens_t_1859263770_0 * __this, String_t* ___value, XmlNameTable_t_662182735_0 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdNMTokens::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t_103494864_0 * XsdNMTokens_ParseValueType_m_1446848982_0 (XsdNMTokens_t_1859263770_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.Schema.XsdNMTokens::GetValidatedArray(System.String,System.Xml.XmlNameTable)
extern "C"  StringU5BU5D_t_816028754_0* XsdNMTokens_GetValidatedArray_m_257300958_0 (XsdNMTokens_t_1859263770_0 * __this, String_t* ___value, XmlNameTable_t_662182735_0 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
