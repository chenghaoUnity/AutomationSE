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

// System.Xml.XmlElement
struct XmlElement_t516204330_0;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t_307474771_0;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t_1267764019_0;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t_864004728_0;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1704224293_0;
// System.Xml.XmlAttribute
struct XmlAttribute_t_1872240822_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"

// System.Void System.Xml.XmlElement::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean)
extern "C"  void XmlElement__ctor_m1054306151_0 (XmlElement_t516204330_0 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, XmlDocument_t_307474771_0 * ___doc, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlElement::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t_1267764019_0 * XmlElement_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m737144701_0 (XmlElement_t516204330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlElement_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m_2098199560_0 (XmlElement_t516204330_0 * __this, XmlLinkedNode_t_1267764019_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes()
extern "C"  XmlAttributeCollection_t_864004728_0 * XmlElement_get_Attributes_m925376964_0 (XmlElement_t516204330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_InnerText()
extern "C"  String_t* XmlElement_get_InnerText_m535347169_0 (XmlElement_t516204330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlElement::get_IsEmpty()
extern "C"  bool XmlElement_get_IsEmpty_m1811931046_0 (XmlElement_t516204330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_IsEmpty(System.Boolean)
extern "C"  void XmlElement_set_IsEmpty_m_636687455_0 (XmlElement_t516204330_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_LocalName()
extern "C"  String_t* XmlElement_get_LocalName_m_1937063148_0 (XmlElement_t516204330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Name()
extern "C"  String_t* XmlElement_get_Name_m1366553519_0 (XmlElement_t516204330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_NamespaceURI()
extern "C"  String_t* XmlElement_get_NamespaceURI_m_1314894155_0 (XmlElement_t516204330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_NextSibling()
extern "C"  XmlNode_t_990591852_0 * XmlElement_get_NextSibling_m114548824_0 (XmlElement_t516204330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlElement::get_NodeType()
extern "C"  int32_t XmlElement_get_NodeType_m1843892847_0 (XmlElement_t516204330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlElement::get_OwnerDocument()
extern "C"  XmlDocument_t_307474771_0 * XmlElement_get_OwnerDocument_m_808166530_0 (XmlElement_t516204330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Prefix()
extern "C"  String_t* XmlElement_get_Prefix_m165157174_0 (XmlElement_t516204330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_ParentNode()
extern "C"  XmlNode_t_990591852_0 * XmlElement_get_ParentNode_m686319621_0 (XmlElement_t516204330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlElement::get_SchemaInfo()
extern "C"  Object_t * XmlElement_get_SchemaInfo_m952006649_0 (XmlElement_t516204330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C"  void XmlElement_set_SchemaInfo_m260485366_0 (XmlElement_t516204330_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::CloneNode(System.Boolean)
extern "C"  XmlNode_t_990591852_0 * XmlElement_CloneNode_m252539560_0 (XmlElement_t516204330_0 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::RemoveAll()
extern "C"  void XmlElement_RemoveAll_m891345345_0 (XmlElement_t516204330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String)
extern "C"  void XmlElement_SetAttribute_m_606312890_0 (XmlElement_t516204330_0 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlElement::SetAttributeNode(System.Xml.XmlAttribute)
extern "C"  XmlAttribute_t_1872240822_0 * XmlElement_SetAttributeNode_m_1376973835_0 (XmlElement_t516204330_0 * __this, XmlAttribute_t_1872240822_0 * ___newAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
