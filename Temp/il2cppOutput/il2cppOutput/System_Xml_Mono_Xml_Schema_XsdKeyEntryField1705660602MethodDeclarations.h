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

// Mono.Xml.Schema.XsdKeyEntryField
struct XsdKeyEntryField_t1705660602_0;
// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t_1946880992_0;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t1804724271_0;
// System.Object
struct Object_t;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t2063649899_0;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t970576597_0;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t335602256_0;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t_929928242_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.Schema.XsdKeyEntryField::.ctor(Mono.Xml.Schema.XsdKeyEntry,Mono.Xml.Schema.XsdIdentityField)
extern "C"  void XsdKeyEntryField__ctor_m1596920355_0 (XsdKeyEntryField_t1705660602_0 * __this, XsdKeyEntry_t_1946880992_0 * ___entry, XsdIdentityField_t1804724271_0 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::SetIdentityField(System.Object,System.Boolean,Mono.Xml.Schema.XsdAnySimpleType,System.Int32,System.Xml.IXmlLineInfo)
extern "C"  bool XsdKeyEntryField_SetIdentityField_m_1205493948_0 (XsdKeyEntryField_t1705660602_0 * __this, Object_t * ___identity, bool ___isXsiNil, XsdAnySimpleType_t2063649899_0 * ___type, int32_t ___depth, Object_t * ___li, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyEntryField::Matches(System.Boolean,System.Object,System.Xml.XmlNameTable,System.Collections.ArrayList,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Xml.IXmlLineInfo,System.Int32,System.String,System.String,System.Object)
extern "C"  XsdIdentityPath_t335602256_0 * XsdKeyEntryField_Matches_m_439805451_0 (XsdKeyEntryField_t1705660602_0 * __this, bool ___matchesAttr, Object_t * ___sender, XmlNameTable_t_662182735_0 * ___nameTable, ArrayList_t536890563_0 * ___qnameStack, String_t* ___sourceUri, Object_t * ___schemaType, Object_t * ___nsResolver, Object_t * ___lineInfo, int32_t ___depth, String_t* ___attrName, String_t* ___attrNS, Object_t * ___attrValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntryField::FillAttributeFieldValue(System.Object,System.Xml.XmlNameTable,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Object,System.Xml.IXmlLineInfo,System.Int32)
extern "C"  void XsdKeyEntryField_FillAttributeFieldValue_m618592376_0 (XsdKeyEntryField_t1705660602_0 * __this, Object_t * ___sender, XmlNameTable_t_662182735_0 * ___nameTable, String_t* ___sourceUri, Object_t * ___schemaType, Object_t * ___nsResolver, Object_t * ___identity, Object_t * ___lineInfo, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
