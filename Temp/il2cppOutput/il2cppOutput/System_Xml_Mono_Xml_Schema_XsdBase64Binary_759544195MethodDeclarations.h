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

// Mono.Xml.Schema.XsdBase64Binary
struct XsdBase64Binary_t_759544195_0;
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
#include "System_Xml_System_Xml_Schema_XmlTypeCode_1029406762.h"

// System.Void Mono.Xml.Schema.XsdBase64Binary::.ctor()
extern "C"  void XsdBase64Binary__ctor_m501055667_0 (XsdBase64Binary_t_759544195_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdBase64Binary::.cctor()
extern "C"  void XsdBase64Binary__cctor_m_2129239718_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdBase64Binary::get_TypeCode()
extern "C"  int32_t XsdBase64Binary_get_TypeCode_m_1452130283_0 (XsdBase64Binary_t_759544195_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdBase64Binary::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Object_t * XsdBase64Binary_ParseValue_m1244909175_0 (XsdBase64Binary_t_759544195_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdBase64Binary::Length(System.String)
extern "C"  int32_t XsdBase64Binary_Length_m_1378230483_0 (XsdBase64Binary_t_759544195_0 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdBase64Binary::isPad(System.Char)
extern "C"  bool XsdBase64Binary_isPad_m816151771_0 (Object_t * __this /* static, unused */, uint16_t ___octect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdBase64Binary::isData(System.Char)
extern "C"  bool XsdBase64Binary_isData_m_1465657664_0 (Object_t * __this /* static, unused */, uint16_t ___octect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdBase64Binary::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t_103494864_0 * XsdBase64Binary_ParseValueType_m451888577_0 (XsdBase64Binary_t_759544195_0 * __this, String_t* ___s, XmlNameTable_t_662182735_0 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
