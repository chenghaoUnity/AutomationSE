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

// System.Xml.XmlNodeReader
struct XmlNodeReader_t_1441379721_0;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;
// System.Xml.XmlNodeReaderImpl
struct XmlNodeReaderImpl_t_930017993_0;
// System.Xml.XmlParserContext
struct XmlParserContext_t1369943614_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1704224293_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"
#include "System_Xml_System_Xml_ReadState_2141932618.h"
#include "System_Xml_System_Xml_XmlSpace_638931788.h"

// System.Void System.Xml.XmlNodeReader::.ctor(System.Xml.XmlNode)
extern "C"  void XmlNodeReader__ctor_m1653620444_0 (XmlNodeReader_t_1441379721_0 * __this, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::.ctor(System.Xml.XmlNodeReaderImpl,System.Boolean)
extern "C"  void XmlNodeReader__ctor_m1137952900_0 (XmlNodeReader_t_1441379721_0 * __this, XmlNodeReaderImpl_t_930017993_0 * ___entityContainer, bool ___insideAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlNodeReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t1369943614_0 * XmlNodeReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m_2109051874_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlNodeReader::get_Current()
extern "C"  XmlReader_t1629164245_0 * XmlNodeReader_get_Current_m_1602687232_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReader::get_AttributeCount()
extern "C"  int32_t XmlNodeReader_get_AttributeCount_m_1048985309_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_BaseURI()
extern "C"  String_t* XmlNodeReader_get_BaseURI_m_1918680820_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_CanResolveEntity()
extern "C"  bool XmlNodeReader_get_CanResolveEntity_m2018310069_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReader::get_Depth()
extern "C"  int32_t XmlNodeReader_get_Depth_m514654485_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_EOF()
extern "C"  bool XmlNodeReader_get_EOF_m146677096_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_HasAttributes()
extern "C"  bool XmlNodeReader_get_HasAttributes_m_1251304195_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_HasValue()
extern "C"  bool XmlNodeReader_get_HasValue_m1599842989_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_IsDefault()
extern "C"  bool XmlNodeReader_get_IsDefault_m562542371_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_IsEmptyElement()
extern "C"  bool XmlNodeReader_get_IsEmptyElement_m_39576913_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_LocalName()
extern "C"  String_t* XmlNodeReader_get_LocalName_m_1236460025_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Name()
extern "C"  String_t* XmlNodeReader_get_Name_m_1372893988_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_NamespaceURI()
extern "C"  String_t* XmlNodeReader_get_NamespaceURI_m1106651874_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNodeReader::get_NameTable()
extern "C"  XmlNameTable_t_662182735_0 * XmlNodeReader_get_NameTable_m_804877210_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNodeReader::get_NodeType()
extern "C"  int32_t XmlNodeReader_get_NodeType_m_357190306_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Prefix()
extern "C"  String_t* XmlNodeReader_get_Prefix_m371055395_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlNodeReader::get_ReadState()
extern "C"  int32_t XmlNodeReader_get_ReadState_m281368515_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlNodeReader::get_SchemaInfo()
extern "C"  Object_t * XmlNodeReader_get_SchemaInfo_m1841033562_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Value()
extern "C"  String_t* XmlNodeReader_get_Value_m_1100334046_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_XmlLang()
extern "C"  String_t* XmlNodeReader_get_XmlLang_m_1915460522_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNodeReader::get_XmlSpace()
extern "C"  int32_t XmlNodeReader_get_XmlSpace_m2069928811_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::Close()
extern "C"  void XmlNodeReader_Close_m1445002133_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::GetAttribute(System.String)
extern "C"  String_t* XmlNodeReader_GetAttribute_m13589204_0 (XmlNodeReader_t_1441379721_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlNodeReader_GetAttribute_m_2011758576_0 (XmlNodeReader_t_1441379721_0 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::LookupNamespace(System.String)
extern "C"  String_t* XmlNodeReader_LookupNamespace_m_26167801_0 (XmlNodeReader_t_1441379721_0 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::MoveToAttribute(System.Int32)
extern "C"  void XmlNodeReader_MoveToAttribute_m1295569982_0 (XmlNodeReader_t_1441379721_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToAttribute(System.String)
extern "C"  bool XmlNodeReader_MoveToAttribute_m_111849539_0 (XmlNodeReader_t_1441379721_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlNodeReader_MoveToAttribute_m_1646941895_0 (XmlNodeReader_t_1441379721_0 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToElement()
extern "C"  bool XmlNodeReader_MoveToElement_m_1108956731_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToFirstAttribute()
extern "C"  bool XmlNodeReader_MoveToFirstAttribute_m_1197344251_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToNextAttribute()
extern "C"  bool XmlNodeReader_MoveToNextAttribute_m_1996362126_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::Read()
extern "C"  bool XmlNodeReader_Read_m_1983782653_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::ReadAttributeValue()
extern "C"  bool XmlNodeReader_ReadAttributeValue_m472840344_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::ResolveEntity()
extern "C"  void XmlNodeReader_ResolveEntity_m336924876_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::Skip()
extern "C"  void XmlNodeReader_Skip_m1889045668_0 (XmlNodeReader_t_1441379721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
