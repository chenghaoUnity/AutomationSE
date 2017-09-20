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

// System.Xml.XmlNode
struct XmlNode_t_990591852_0;
// System.Xml.XmlDocument
struct XmlDocument_t_307474771_0;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t_864004728_0;
// System.String
struct String_t;
// System.Xml.XmlNodeList
struct XmlNodeList_t_46366894_0;
// System.Text.StringBuilder
struct StringBuilder_t586045924_0;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1704224293_0;
// System.Xml.XmlElement
struct XmlElement_t516204330_0;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1115255140_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlSpace_638931788.h"

// System.Void System.Xml.XmlNode::.ctor(System.Xml.XmlDocument)
extern "C"  void XmlNode__ctor_m_1156007706_0 (XmlNode_t_990591852_0 * __this, XmlDocument_t_307474771_0 * ___ownerDocument, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::.cctor()
extern "C"  void XmlNode__cctor_m_544957269_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlNode::System.ICloneable.Clone()
extern "C"  Object_t * XmlNode_System_ICloneable_Clone_m132385191_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNode::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * XmlNode_System_Collections_IEnumerable_GetEnumerator_m2007552963_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes()
extern "C"  XmlAttributeCollection_t_864004728_0 * XmlNode_get_Attributes_m755677596_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_BaseURI()
extern "C"  String_t* XmlNode_get_BaseURI_m422552911_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_ChildrenBaseURI()
extern "C"  String_t* XmlNode_get_ChildrenBaseURI_m_845950192_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes()
extern "C"  XmlNodeList_t_46366894_0 * XmlNode_get_ChildNodes_m_277140432_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild()
extern "C"  XmlNode_t_990591852_0 * XmlNode_get_FirstChild_m_214315067_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_HasChildNodes()
extern "C"  bool XmlNode_get_HasChildNodes_m_545894050_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_InnerText()
extern "C"  String_t* XmlNode_get_InnerText_m598702679_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::AppendChildValues(System.Text.StringBuilder&)
extern "C"  void XmlNode_AppendChildValues_m1946715878_0 (XmlNode_t_990591852_0 * __this, StringBuilder_t586045924_0 ** ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_IsReadOnly()
extern "C"  bool XmlNode_get_IsReadOnly_m910873471_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_LastChild()
extern "C"  XmlNode_t_990591852_0 * XmlNode_get_LastChild_m_1692969169_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_NamespaceURI()
extern "C"  String_t* XmlNode_get_NamespaceURI_m618461311_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_NextSibling()
extern "C"  XmlNode_t_990591852_0 * XmlNode_get_NextSibling_m1361451800_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument()
extern "C"  XmlDocument_t_307474771_0 * XmlNode_get_OwnerDocument_m574628624_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
extern "C"  XmlNode_t_990591852_0 * XmlNode_get_ParentNode_m33805637_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Prefix()
extern "C"  String_t* XmlNode_get_Prefix_m723673728_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_PreviousSibling()
extern "C"  XmlNode_t_990591852_0 * XmlNode_get_PreviousSibling_m210086804_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Value()
extern "C"  String_t* XmlNode_get_Value_m1127798053_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_Value(System.String)
extern "C"  void XmlNode_set_Value_m288584782_0 (XmlNode_t_990591852_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_XmlLang()
extern "C"  String_t* XmlNode_get_XmlLang_m425773209_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNode::get_XmlSpace()
extern "C"  int32_t XmlNode_get_XmlSpace_m953945032_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlNode::get_SchemaInfo()
extern "C"  Object_t * XmlNode_get_SchemaInfo_m360881591_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C"  void XmlNode_set_SchemaInfo_m_96403430_0 (XmlNode_t_990591852_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode)
extern "C"  XmlNode_t_990591852_0 * XmlNode_AppendChild_m_1519528207_0 (XmlNode_t_990591852_0 * __this, XmlNode_t_990591852_0 * ___newChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode,System.Boolean)
extern "C"  XmlNode_t_990591852_0 * XmlNode_AppendChild_m_2013422484_0 (XmlNode_t_990591852_0 * __this, XmlNode_t_990591852_0 * ___newChild, bool ___checkNodeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::Clone()
extern "C"  XmlNode_t_990591852_0 * XmlNode_Clone_m_2069752049_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNode::GetEnumerator()
extern "C"  Object_t * XmlNode_GetEnumerator_m1468861310_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  XmlNode_t_990591852_0 * XmlNode_InsertBefore_m1256162142_0 (XmlNode_t_990591852_0 * __this, XmlNode_t_990591852_0 * ___newChild, XmlNode_t_990591852_0 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::IsAncestor(System.Xml.XmlNode)
extern "C"  bool XmlNode_IsAncestor_m538990404_0 (XmlNode_t_990591852_0 * __this, XmlNode_t_990591852_0 * ___newChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode,System.Boolean,System.Boolean)
extern "C"  XmlNode_t_990591852_0 * XmlNode_InsertBefore_m_1917140674_0 (XmlNode_t_990591852_0 * __this, XmlNode_t_990591852_0 * ___newChild, XmlNode_t_990591852_0 * ___refChild, bool ___checkNodeType, bool ___raiseEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeInsertion(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlNode_CheckNodeInsertion_m1447703263_0 (XmlNode_t_990591852_0 * __this, XmlNode_t_990591852_0 * ___newChild, XmlNode_t_990591852_0 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::RemoveAll()
extern "C"  void XmlNode_RemoveAll_m47387677_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode)
extern "C"  XmlNode_t_990591852_0 * XmlNode_RemoveChild_m_1173079865_0 (XmlNode_t_990591852_0 * __this, XmlNode_t_990591852_0 * ___oldChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeRemoval()
extern "C"  void XmlNode_CheckNodeRemoval_m553592100_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode,System.Boolean)
extern "C"  XmlNode_t_990591852_0 * XmlNode_RemoveChild_m_1483172906_0 (XmlNode_t_990591852_0 * __this, XmlNode_t_990591852_0 * ___oldChild, bool ___checkNodeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlNode::get_AttributeOwnerElement()
extern "C"  XmlElement_t516204330_0 * XmlNode_get_AttributeOwnerElement_m_1952266396_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_AttributeOwnerElement(System.Xml.XmlElement)
extern "C"  void XmlNode_set_AttributeOwnerElement_m1563997167_0 (XmlNode_t_990591852_0 * __this, XmlElement_t516204330_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager System.Xml.XmlNode::ConstructNamespaceManager()
extern "C"  XmlNamespaceManager_t1115255140_0 * XmlNode_ConstructNamespaceManager_m2096658635_0 (XmlNode_t_990591852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
