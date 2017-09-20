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

// System.Xml.XmlAttribute
struct XmlAttribute_t_1872240822_0;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t_307474771_0;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t_1267764019_0;
// System.Xml.XmlElement
struct XmlElement_t516204330_0;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1704224293_0;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t2128401900_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"
#include "System_Xml_System_Xml_XmlSpace_638931788.h"

// System.Void System.Xml.XmlAttribute::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean,System.Boolean)
extern "C"  void XmlAttribute__ctor_m1012661718_0 (XmlAttribute_t_1872240822_0 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, XmlDocument_t_307474771_0 * ___doc, bool ___atomizedNames, bool ___checkNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t_1267764019_0 * XmlAttribute_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m2118181597_0 (XmlAttribute_t_1872240822_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlAttribute_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m250472600_0 (XmlAttribute_t_1872240822_0 * __this, XmlLinkedNode_t_1267764019_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_BaseURI()
extern "C"  String_t* XmlAttribute_get_BaseURI_m_925557447_0 (XmlAttribute_t_1872240822_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_LocalName()
extern "C"  String_t* XmlAttribute_get_LocalName_m_327638284_0 (XmlAttribute_t_1872240822_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Name()
extern "C"  String_t* XmlAttribute_get_Name_m2056366031_0 (XmlAttribute_t_1872240822_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_NamespaceURI()
extern "C"  String_t* XmlAttribute_get_NamespaceURI_m341304021_0 (XmlAttribute_t_1872240822_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlAttribute::get_NodeType()
extern "C"  int32_t XmlAttribute_get_NodeType_m_982235441_0 (XmlAttribute_t_1872240822_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlAttribute::get_OwnerDocument()
extern "C"  XmlDocument_t_307474771_0 * XmlAttribute_get_OwnerDocument_m_1502253346_0 (XmlAttribute_t_1872240822_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlAttribute::get_OwnerElement()
extern "C"  XmlElement_t516204330_0 * XmlAttribute_get_OwnerElement_m_784025032_0 (XmlAttribute_t_1872240822_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::get_ParentNode()
extern "C"  XmlNode_t_990591852_0 * XmlAttribute_get_ParentNode_m1823077093_0 (XmlAttribute_t_1872240822_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Prefix()
extern "C"  String_t* XmlAttribute_get_Prefix_m1650017622_0 (XmlAttribute_t_1872240822_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlAttribute::get_SchemaInfo()
extern "C"  Object_t * XmlAttribute_get_SchemaInfo_m800268953_0 (XmlAttribute_t_1872240822_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C"  void XmlAttribute_set_SchemaInfo_m_753805226_0 (XmlAttribute_t_1872240822_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttribute::get_Specified()
extern "C"  bool XmlAttribute_get_Specified_m_128250381_0 (XmlAttribute_t_1872240822_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Value()
extern "C"  String_t* XmlAttribute_get_Value_m2127511439_0 (XmlAttribute_t_1872240822_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::set_Value(System.String)
extern "C"  void XmlAttribute_set_Value_m928399498_0 (XmlAttribute_t_1872240822_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_XmlLang()
extern "C"  String_t* XmlAttribute_get_XmlLang_m_922337149_0 (XmlAttribute_t_1872240822_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlAttribute::get_XmlSpace()
extern "C"  int32_t XmlAttribute_get_XmlSpace_m_659016280_0 (XmlAttribute_t_1872240822_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::AppendChild(System.Xml.XmlNode)
extern "C"  XmlNode_t_990591852_0 * XmlAttribute_AppendChild_m1532282193_0 (XmlAttribute_t_1872240822_0 * __this, XmlNode_t_990591852_0 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  XmlNode_t_990591852_0 * XmlAttribute_InsertBefore_m_10518082_0 (XmlAttribute_t_1872240822_0 * __this, XmlNode_t_990591852_0 * ___newChild, XmlNode_t_990591852_0 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::RemoveChild(System.Xml.XmlNode)
extern "C"  XmlNode_t_990591852_0 * XmlAttribute_RemoveChild_m1878730535_0 (XmlAttribute_t_1872240822_0 * __this, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::CloneNode(System.Boolean)
extern "C"  XmlNode_t_990591852_0 * XmlAttribute_CloneNode_m_878042168_0 (XmlAttribute_t_1872240822_0 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::SetDefault()
extern "C"  void XmlAttribute_SetDefault_m_529001731_0 (XmlAttribute_t_1872240822_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition System.Xml.XmlAttribute::GetAttributeDefinition()
extern "C"  DTDAttributeDefinition_t2128401900_0 * XmlAttribute_GetAttributeDefinition_m1813260737_0 (XmlAttribute_t_1872240822_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
