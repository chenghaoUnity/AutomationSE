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

// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1816173011_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"
#include "System_Xml_System_Xml_ReadState_2141932618.h"
#include "System_Xml_System_Xml_XmlSpace_638931788.h"

// System.Void System.Xml.Schema.XmlSchemaReader::.ctor(System.Xml.XmlReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaReader__ctor_m_387211891_0 (XmlSchemaReader_t1816173011_0 * __this, XmlReader_t1629164245_0 * ___reader, ValidationEventHandler_t513619217_0 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_FullName()
extern "C"  String_t* XmlSchemaReader_get_FullName_m2119236167_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.Schema.XmlSchemaReader::get_Reader()
extern "C"  XmlReader_t1629164245_0 * XmlSchemaReader_get_Reader_m_519338778_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::RaiseInvalidElementError()
extern "C"  void XmlSchemaReader_RaiseInvalidElementError_m1814784638_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::ReadNextElement()
extern "C"  bool XmlSchemaReader_ReadNextElement_m1979189718_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::SkipToEnd()
extern "C"  void XmlSchemaReader_SkipToEnd_m_1242005284_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::HasLineInfo()
extern "C"  bool XmlSchemaReader_HasLineInfo_m706787071_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_LineNumber()
extern "C"  int32_t XmlSchemaReader_get_LineNumber_m1268142987_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_LinePosition()
extern "C"  int32_t XmlSchemaReader_get_LinePosition_m689290539_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_AttributeCount()
extern "C"  int32_t XmlSchemaReader_get_AttributeCount_m1443043073_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_BaseURI()
extern "C"  String_t* XmlSchemaReader_get_BaseURI_m_1866202224_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_CanResolveEntity()
extern "C"  bool XmlSchemaReader_get_CanResolveEntity_m1981832327_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_Depth()
extern "C"  int32_t XmlSchemaReader_get_Depth_m_1961363081_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_EOF()
extern "C"  bool XmlSchemaReader_get_EOF_m1743604566_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_HasAttributes()
extern "C"  bool XmlSchemaReader_get_HasAttributes_m_974931605_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_HasValue()
extern "C"  bool XmlSchemaReader_get_HasValue_m_2050883201_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_IsDefault()
extern "C"  bool XmlSchemaReader_get_IsDefault_m_940819823_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_IsEmptyElement()
extern "C"  bool XmlSchemaReader_get_IsEmptyElement_m_61961215_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Item(System.String)
extern "C"  String_t* XmlSchemaReader_get_Item_m_2100468830_0 (XmlSchemaReader_t1816173011_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Item(System.String,System.String)
extern "C"  String_t* XmlSchemaReader_get_Item_m_545879970_0 (XmlSchemaReader_t1816173011_0 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_LocalName()
extern "C"  String_t* XmlSchemaReader_get_LocalName_m1950830475_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Name()
extern "C"  String_t* XmlSchemaReader_get_Name_m_1674495784_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_NamespaceURI()
extern "C"  String_t* XmlSchemaReader_get_NamespaceURI_m540957406_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaReader::get_NameTable()
extern "C"  XmlNameTable_t_662182735_0 * XmlSchemaReader_get_NameTable_m_635336250_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.Schema.XmlSchemaReader::get_NodeType()
extern "C"  int32_t XmlSchemaReader_get_NodeType_m1493339288_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Prefix()
extern "C"  String_t* XmlSchemaReader_get_Prefix_m_1705461729_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.Schema.XmlSchemaReader::get_ReadState()
extern "C"  int32_t XmlSchemaReader_get_ReadState_m_1778323143_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Value()
extern "C"  String_t* XmlSchemaReader_get_Value_m_1860055130_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_XmlLang()
extern "C"  String_t* XmlSchemaReader_get_XmlLang_m_1862981926_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.Schema.XmlSchemaReader::get_XmlSpace()
extern "C"  int32_t XmlSchemaReader_get_XmlSpace_m_1351304207_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::Close()
extern "C"  void XmlSchemaReader_Close_m1642193907_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::Equals(System.Object)
extern "C"  bool XmlSchemaReader_Equals_m43688982_0 (XmlSchemaReader_t1816173011_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::GetAttribute(System.String)
extern "C"  String_t* XmlSchemaReader_GetAttribute_m_1483250088_0 (XmlSchemaReader_t1816173011_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlSchemaReader_GetAttribute_m1938986132_0 (XmlSchemaReader_t1816173011_0 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::GetHashCode()
extern "C"  int32_t XmlSchemaReader_GetHashCode_m_507116114_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::LookupNamespace(System.String)
extern "C"  String_t* XmlSchemaReader_LookupNamespace_m_2015048701_0 (XmlSchemaReader_t1816173011_0 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.Int32)
extern "C"  void XmlSchemaReader_MoveToAttribute_m974258716_0 (XmlSchemaReader_t1816173011_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.String)
extern "C"  bool XmlSchemaReader_MoveToAttribute_m_811089265_0 (XmlSchemaReader_t1816173011_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlSchemaReader_MoveToAttribute_m1744159883_0 (XmlSchemaReader_t1816173011_0 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.Schema.XmlSchemaReader::MoveToContent()
extern "C"  int32_t XmlSchemaReader_MoveToContent_m1249486588_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToElement()
extern "C"  bool XmlSchemaReader_MoveToElement_m1682648371_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToFirstAttribute()
extern "C"  bool XmlSchemaReader_MoveToFirstAttribute_m_1233821993_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToNextAttribute()
extern "C"  bool XmlSchemaReader_MoveToNextAttribute_m1604691808_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::Read()
extern "C"  bool XmlSchemaReader_Read_m197994965_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::ReadAttributeValue()
extern "C"  bool XmlSchemaReader_ReadAttributeValue_m450456042_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ReadEndElement()
extern "C"  void XmlSchemaReader_ReadEndElement_m273434974_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadInnerXml()
extern "C"  String_t* XmlSchemaReader_ReadInnerXml_m_1228182949_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadOuterXml()
extern "C"  String_t* XmlSchemaReader_ReadOuterXml_m_307615914_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ReadStartElement()
extern "C"  void XmlSchemaReader_ReadStartElement_m_467253577_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ResolveEntity()
extern "C"  void XmlSchemaReader_ResolveEntity_m_712066262_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::Skip()
extern "C"  void XmlSchemaReader_Skip_m_1291181946_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ToString()
extern "C"  String_t* XmlSchemaReader_ToString_m1982196592_0 (XmlSchemaReader_t1816173011_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
