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

// Mono.Xml.Schema.XsdNMToken
struct XsdNMToken_t_752712915_0;
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

// System.Void Mono.Xml.Schema.XsdNMToken::.ctor()
extern "C"  void XsdNMToken__ctor_m327823817_0 (XsdNMToken_t_752712915_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdNMToken::get_TokenizedType()
extern "C"  int32_t XsdNMToken_get_TokenizedType_m611034288_0 (XsdNMToken_t_752712915_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdNMToken::get_TypeCode()
extern "C"  int32_t XsdNMToken_get_TypeCode_m481996823_0 (XsdNMToken_t_752712915_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdNMToken::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Object_t * XsdNMToken_ParseValue_m_551331989_0 (XsdNMToken_t_752712915_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdNMToken::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t_103494864_0 * XsdNMToken_ParseValueType_m645745109_0 (XsdNMToken_t_752712915_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
