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

// System.Xml.XmlEntityReference
struct XmlEntityReference_t_85744426_0;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t_307474771_0;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t_1267764019_0;
// System.Xml.XmlEntity
struct XmlEntity_t1265868277_0;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"

// System.Void System.Xml.XmlEntityReference::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlEntityReference__ctor_m_90196318_0 (XmlEntityReference_t_85744426_0 * __this, String_t* ___name, XmlDocument_t_307474771_0 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t_1267764019_0 * XmlEntityReference_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m1444792401_0 (XmlEntityReference_t_85744426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlEntityReference_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m_1035074100_0 (XmlEntityReference_t_85744426_0 * __this, XmlLinkedNode_t_1267764019_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_BaseURI()
extern "C"  String_t* XmlEntityReference_get_BaseURI_m_1010398675_0 (XmlEntityReference_t_85744426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntity System.Xml.XmlEntityReference::get_Entity()
extern "C"  XmlEntity_t1265868277_0 * XmlEntityReference_get_Entity_m1580380137_0 (XmlEntityReference_t_85744426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_ChildrenBaseURI()
extern "C"  String_t* XmlEntityReference_get_ChildrenBaseURI_m140442094_0 (XmlEntityReference_t_85744426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlEntityReference::get_IsReadOnly()
extern "C"  bool XmlEntityReference_get_IsReadOnly_m_634963209_0 (XmlEntityReference_t_85744426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_LocalName()
extern "C"  String_t* XmlEntityReference_get_LocalName_m_255679768_0 (XmlEntityReference_t_85744426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Name()
extern "C"  String_t* XmlEntityReference_get_Name_m1968996187_0 (XmlEntityReference_t_85744426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlEntityReference::get_NodeType()
extern "C"  int32_t XmlEntityReference_get_NodeType_m304105755_0 (XmlEntityReference_t_85744426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Value()
extern "C"  String_t* XmlEntityReference_get_Value_m_580953725_0 (XmlEntityReference_t_85744426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::set_Value(System.String)
extern "C"  void XmlEntityReference_set_Value_m_763235114_0 (XmlEntityReference_t_85744426_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlEntityReference::CloneNode(System.Boolean)
extern "C"  XmlNode_t_990591852_0 * XmlEntityReference_CloneNode_m_1887216004_0 (XmlEntityReference_t_85744426_0 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::SetReferencedEntityContent()
extern "C"  void XmlEntityReference_SetReferencedEntityContent_m_1133137115_0 (XmlEntityReference_t_85744426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
