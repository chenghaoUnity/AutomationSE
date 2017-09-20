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

// System.Xml.XmlNodeReaderImpl
struct XmlNodeReaderImpl_t_930017993_0;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;
// System.Xml.XmlParserContext
struct XmlParserContext_t1369943614_0;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1704224293_0;
// System.Xml.XmlElement
struct XmlElement_t516204330_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"
#include "System_Xml_System_Xml_ReadState_2141932618.h"
#include "System_Xml_System_Xml_XmlSpace_638931788.h"

// System.Void System.Xml.XmlNodeReaderImpl::.ctor(System.Xml.XmlNodeReaderImpl)
extern "C"  void XmlNodeReaderImpl__ctor_m_680283751_0 (XmlNodeReaderImpl_t_930017993_0 * __this, XmlNodeReaderImpl_t_930017993_0 * ___entityContainer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::.ctor(System.Xml.XmlNode)
extern "C"  void XmlNodeReaderImpl__ctor_m_333077860_0 (XmlNodeReaderImpl_t_930017993_0 * __this, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlNodeReaderImpl::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t1369943614_0 * XmlNodeReaderImpl_Mono_Xml_IHasXmlParserContext_get_ParserContext_m1965461982_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReaderImpl::get_AttributeCount()
extern "C"  int32_t XmlNodeReaderImpl_get_AttributeCount_m_1247542173_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_BaseURI()
extern "C"  String_t* XmlNodeReaderImpl_get_BaseURI_m1869676108_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_CanResolveEntity()
extern "C"  bool XmlNodeReaderImpl_get_CanResolveEntity_m_1782847499_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReaderImpl::get_Depth()
extern "C"  int32_t XmlNodeReaderImpl_get_Depth_m193861077_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_EOF()
extern "C"  bool XmlNodeReaderImpl_get_EOF_m1754121512_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_HasAttributes()
extern "C"  bool XmlNodeReaderImpl_get_HasAttributes_m_1164208963_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_HasValue()
extern "C"  bool XmlNodeReaderImpl_get_HasValue_m_908141843_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_IsDefault()
extern "C"  bool XmlNodeReaderImpl_get_IsDefault_m124423907_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_IsEmptyElement()
extern "C"  bool XmlNodeReaderImpl_get_IsEmptyElement_m_1634592017_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_LocalName()
extern "C"  String_t* XmlNodeReaderImpl_get_LocalName_m1537248071_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_Name()
extern "C"  String_t* XmlNodeReaderImpl_get_Name_m926455708_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_NamespaceURI()
extern "C"  String_t* XmlNodeReaderImpl_get_NamespaceURI_m1768732066_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNodeReaderImpl::get_NameTable()
extern "C"  XmlNameTable_t_662182735_0 * XmlNodeReaderImpl_get_NameTable_m1160220838_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNodeReaderImpl::get_NodeType()
extern "C"  int32_t XmlNodeReaderImpl_get_NodeType_m_1116291170_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_Prefix()
extern "C"  String_t* XmlNodeReaderImpl_get_Prefix_m_1862044189_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlNodeReaderImpl::get_ReadState()
extern "C"  int32_t XmlNodeReaderImpl_get_ReadState_m_312315517_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlNodeReaderImpl::get_SchemaInfo()
extern "C"  Object_t * XmlNodeReaderImpl_get_SchemaInfo_m_1713008870_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_Value()
extern "C"  String_t* XmlNodeReaderImpl_get_Value_m1460029794_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_XmlLang()
extern "C"  String_t* XmlNodeReaderImpl_get_XmlLang_m1872896406_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNodeReaderImpl::get_XmlSpace()
extern "C"  int32_t XmlNodeReaderImpl_get_XmlSpace_m1682512043_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::Close()
extern "C"  void XmlNodeReaderImpl_Close_m1809567573_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetAttribute(System.String)
extern "C"  String_t* XmlNodeReaderImpl_GetAttribute_m_1406605292_0 (XmlNodeReaderImpl_t_930017993_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlNodeReaderImpl_GetAttribute_m873487696_0 (XmlNodeReaderImpl_t_930017993_0 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetXmlDeclarationAttribute(System.String)
extern "C"  String_t* XmlNodeReaderImpl_GetXmlDeclarationAttribute_m388060631_0 (XmlNodeReaderImpl_t_930017993_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetDocumentTypeAttribute(System.String)
extern "C"  String_t* XmlNodeReaderImpl_GetDocumentTypeAttribute_m_877580887_0 (XmlNodeReaderImpl_t_930017993_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlNodeReaderImpl::GetCurrentElement()
extern "C"  XmlElement_t516204330_0 * XmlNodeReaderImpl_GetCurrentElement_m1311698814_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::LookupNamespace(System.String)
extern "C"  String_t* XmlNodeReaderImpl_LookupNamespace_m682434759_0 (XmlNodeReaderImpl_t_930017993_0 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::MoveToAttribute(System.Int32)
extern "C"  void XmlNodeReaderImpl_MoveToAttribute_m_2114562050_0 (XmlNodeReaderImpl_t_930017993_0 * __this, int32_t ___attributeIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToAttribute(System.String)
extern "C"  bool XmlNodeReaderImpl_MoveToAttribute_m32505853_0 (XmlNodeReaderImpl_t_930017993_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlNodeReaderImpl_MoveToAttribute_m_522786439_0 (XmlNodeReaderImpl_t_930017993_0 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToElement()
extern "C"  bool XmlNodeReaderImpl_MoveToElement_m_1547075195_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToFirstAttribute()
extern "C"  bool XmlNodeReaderImpl_MoveToFirstAttribute_m_703534523_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToNextAttribute()
extern "C"  bool XmlNodeReaderImpl_MoveToNextAttribute_m97777202_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::Read()
extern "C"  bool XmlNodeReaderImpl_Read_m_1181134525_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::ReadContent()
extern "C"  bool XmlNodeReaderImpl_ReadContent_m_120265576_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::ReadAttributeValue()
extern "C"  bool XmlNodeReaderImpl_ReadAttributeValue_m_1122174760_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::ResolveEntity()
extern "C"  void XmlNodeReaderImpl_ResolveEntity_m1788880012_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::Skip()
extern "C"  void XmlNodeReaderImpl_Skip_m_1839972124_0 (XmlNodeReaderImpl_t_930017993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
