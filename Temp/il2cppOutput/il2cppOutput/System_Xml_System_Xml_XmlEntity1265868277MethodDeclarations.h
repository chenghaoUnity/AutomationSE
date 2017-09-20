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

// System.Xml.XmlEntity
struct XmlEntity_t1265868277_0;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t_307474771_0;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t_1267764019_0;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"

// System.Void System.Xml.XmlEntity::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlEntity__ctor_m_1422715723_0 (XmlEntity_t1265868277_0 * __this, String_t* ___name, String_t* ___NDATA, String_t* ___publicId, String_t* ___systemId, XmlDocument_t_307474771_0 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlEntity::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t_1267764019_0 * XmlEntity_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m640766286_0 (XmlEntity_t1265868277_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlEntity_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m1732330643_0 (XmlEntity_t1265868277_0 * __this, XmlLinkedNode_t_1267764019_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_BaseURI()
extern "C"  String_t* XmlEntity_get_BaseURI_m_1099535922_0 (XmlEntity_t1265868277_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_InnerText()
extern "C"  String_t* XmlEntity_get_InnerText_m_1839785194_0 (XmlEntity_t1265868277_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlEntity::get_IsReadOnly()
extern "C"  bool XmlEntity_get_IsReadOnly_m1672029536_0 (XmlEntity_t1265868277_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_LocalName()
extern "C"  String_t* XmlEntity_get_LocalName_m_17228215_0 (XmlEntity_t1265868277_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_Name()
extern "C"  String_t* XmlEntity_get_Name_m_1934840998_0 (XmlEntity_t1265868277_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlEntity::get_NodeType()
extern "C"  int32_t XmlEntity_get_NodeType_m771016028_0 (XmlEntity_t1265868277_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_SystemId()
extern "C"  String_t* XmlEntity_get_SystemId_m1709840825_0 (XmlEntity_t1265868277_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlEntity::CloneNode(System.Boolean)
extern "C"  XmlNode_t_990591852_0 * XmlEntity_CloneNode_m_370193881_0 (XmlEntity_t1265868277_0 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::SetEntityContent()
extern "C"  void XmlEntity_SetEntityContent_m1743264951_0 (XmlEntity_t1265868277_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
