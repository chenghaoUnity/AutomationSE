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

// System.Xml.XmlDocument
struct XmlDocument_t_307474771_0;
// System.Xml.XmlImplementation
struct XmlImplementation_t2107716548_0;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t_1267764019_0;
// System.String
struct String_t;
// System.Xml.XmlElement
struct XmlElement_t516204330_0;
// System.Xml.XmlDocumentType
struct XmlDocumentType_t_1937558649_0;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t_1959421139_0;
// System.Xml.XmlResolver
struct XmlResolver_t_1510524520_0;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1704224293_0;
// System.Xml.XmlAttribute
struct XmlAttribute_t_1872240822_0;
// System.Xml.XmlCDataSection
struct XmlCDataSection_t1586828298_0;
// System.Xml.XmlComment
struct XmlComment_t_1165527411_0;
// System.Xml.XmlDocumentFragment
struct XmlDocumentFragment_t792369181_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// System.Xml.XmlEntityReference
struct XmlEntityReference_t_85744426_0;
// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t_410719447_0;
// System.Xml.XmlSignificantWhitespace
struct XmlSignificantWhitespace_t_1865347650_0;
// System.Xml.XmlText
struct XmlText_t_990422081_0;
// System.Xml.XmlWhitespace
struct XmlWhitespace_t1961342863_0;
// System.Xml.XmlDeclaration
struct XmlDeclaration_t_1350748504_0;
// System.IO.TextReader
struct TextReader_t1262698173_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"
#include "System_Xml_System_Xml_XmlSpace_638931788.h"

// System.Void System.Xml.XmlDocument::.ctor()
extern "C"  void XmlDocument__ctor_m467220425_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation)
extern "C"  void XmlDocument__ctor_m629872438_0 (XmlDocument_t_307474771_0 * __this, XmlImplementation_t2107716548_0 * ___imp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation,System.Xml.XmlNameTable)
extern "C"  void XmlDocument__ctor_m_1927546752_0 (XmlDocument_t_307474771_0 * __this, XmlImplementation_t2107716548_0 * ___impl, XmlNameTable_t_662182735_0 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.cctor()
extern "C"  void XmlDocument__cctor_m1116835076_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t_1267764019_0 * XmlDocument_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m_1810643434_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlDocument_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m1766041627_0 (XmlDocument_t_307474771_0 * __this, XmlLinkedNode_t_1267764019_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_BaseURI()
extern "C"  String_t* XmlDocument_get_BaseURI_m_1810768362_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::get_DocumentElement()
extern "C"  XmlElement_t516204330_0 * XmlDocument_get_DocumentElement_m2125605639_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::get_DocumentType()
extern "C"  XmlDocumentType_t_1937558649_0 * XmlDocument_get_DocumentType_m_1241129100_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_IsReadOnly()
extern "C"  bool XmlDocument_get_IsReadOnly_m1661998808_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_LocalName()
extern "C"  String_t* XmlDocument_get_LocalName_m_611802991_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_Name()
extern "C"  String_t* XmlDocument_get_Name_m_252257262_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::get_NameCache()
extern "C"  XmlNameEntryCache_t_1959421139_0 * XmlDocument_get_NameCache_m803787936_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlDocument::get_NameTable()
extern "C"  XmlNameTable_t_662182735_0 * XmlDocument_get_NameTable_m_179178640_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocument::get_NodeType()
extern "C"  int32_t XmlDocument_get_NodeType_m2013184468_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlDocument::get_OwnerDocument()
extern "C"  XmlDocument_t_307474771_0 * XmlDocument_get_OwnerDocument_m_2138020969_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_PreserveWhitespace()
extern "C"  bool XmlDocument_get_PreserveWhitespace_m_1031456555_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlDocument::get_Resolver()
extern "C"  XmlResolver_t_1510524520_0 * XmlDocument_get_Resolver_m_605547500_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_XmlLang()
extern "C"  String_t* XmlDocument_get_XmlLang_m_1807548064_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlDocument::get_XmlSpace()
extern "C"  int32_t XmlDocument_get_XmlSpace_m_1472242079_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::get_ParentNode()
extern "C"  XmlNode_t_990591852_0 * XmlDocument_get_ParentNode_m_1764371042_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::get_SchemaInfo()
extern "C"  Object_t * XmlDocument_get_SchemaInfo_m608534160_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C"  void XmlDocument_set_SchemaInfo_m1833755507_0 (XmlDocument_t_307474771_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddIdenticalAttribute(System.Xml.XmlAttribute)
extern "C"  void XmlDocument_AddIdenticalAttribute_m1995420520_0 (XmlDocument_t_307474771_0 * __this, XmlAttribute_t_1872240822_0 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::CloneNode(System.Boolean)
extern "C"  XmlNode_t_990591852_0 * XmlDocument_CloneNode_m1087324463_0 (XmlDocument_t_307474771_0 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String)
extern "C"  XmlAttribute_t_1872240822_0 * XmlDocument_CreateAttribute_m_184457037_0 (XmlDocument_t_307474771_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String)
extern "C"  XmlAttribute_t_1872240822_0 * XmlDocument_CreateAttribute_m_1487938641_0 (XmlDocument_t_307474771_0 * __this, String_t* ___qualifiedName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String)
extern "C"  XmlAttribute_t_1872240822_0 * XmlDocument_CreateAttribute_m1651205547_0 (XmlDocument_t_307474771_0 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  XmlAttribute_t_1872240822_0 * XmlDocument_CreateAttribute_m_355246389_0 (XmlDocument_t_307474771_0 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, bool ___atomizedNames, bool ___checkNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlCDataSection System.Xml.XmlDocument::CreateCDataSection(System.String)
extern "C"  XmlCDataSection_t1586828298_0 * XmlDocument_CreateCDataSection_m1753360379_0 (XmlDocument_t_307474771_0 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlComment System.Xml.XmlDocument::CreateComment(System.String)
extern "C"  XmlComment_t_1165527411_0 * XmlDocument_CreateComment_m1687987885_0 (XmlDocument_t_307474771_0 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentFragment System.Xml.XmlDocument::CreateDocumentFragment()
extern "C"  XmlDocumentFragment_t792369181_0 * XmlDocument_CreateDocumentFragment_m1451172871_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(System.String,System.String,System.String,System.String)
extern "C"  XmlDocumentType_t_1937558649_0 * XmlDocument_CreateDocumentType_m_2136837105_0 (XmlDocument_t_307474771_0 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(Mono.Xml.DTDObjectModel)
extern "C"  XmlDocumentType_t_1937558649_0 * XmlDocument_CreateDocumentType_m_175487277_0 (XmlDocument_t_307474771_0 * __this, DTDObjectModel_t_2044825337_0 * ___dtd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String)
extern "C"  XmlElement_t516204330_0 * XmlDocument_CreateElement_m1870044395_0 (XmlDocument_t_307474771_0 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String,System.Boolean)
extern "C"  XmlElement_t516204330_0 * XmlDocument_CreateElement_m_182131918_0 (XmlDocument_t_307474771_0 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, bool ___nameAtomized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntityReference System.Xml.XmlDocument::CreateEntityReference(System.String)
extern "C"  XmlEntityReference_t_85744426_0 * XmlDocument_CreateEntityReference_m_209773925_0 (XmlDocument_t_307474771_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlProcessingInstruction System.Xml.XmlDocument::CreateProcessingInstruction(System.String,System.String)
extern "C"  XmlProcessingInstruction_t_410719447_0 * XmlDocument_CreateProcessingInstruction_m1557261361_0 (XmlDocument_t_307474771_0 * __this, String_t* ___target, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSignificantWhitespace System.Xml.XmlDocument::CreateSignificantWhitespace(System.String)
extern "C"  XmlSignificantWhitespace_t_1865347650_0 * XmlDocument_CreateSignificantWhitespace_m842262219_0 (XmlDocument_t_307474771_0 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlText System.Xml.XmlDocument::CreateTextNode(System.String)
extern "C"  XmlText_t_990422081_0 * XmlDocument_CreateTextNode_m1905564857_0 (XmlDocument_t_307474771_0 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWhitespace System.Xml.XmlDocument::CreateWhitespace(System.String)
extern "C"  XmlWhitespace_t1961342863_0 * XmlDocument_CreateWhitespace_m_570240165_0 (XmlDocument_t_307474771_0 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDeclaration System.Xml.XmlDocument::CreateXmlDeclaration(System.String,System.String,System.String)
extern "C"  XmlDeclaration_t_1350748504_0 * XmlDocument_CreateXmlDeclaration_m1494345414_0 (XmlDocument_t_307474771_0 * __this, String_t* ___version, String_t* ___encoding, String_t* ___standalone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::GetIdenticalAttribute(System.String)
extern "C"  XmlAttribute_t_1872240822_0 * XmlDocument_GetIdenticalAttribute_m_1909379274_0 (XmlDocument_t_307474771_0 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ImportNode(System.Xml.XmlNode,System.Boolean)
extern "C"  XmlNode_t_990591852_0 * XmlDocument_ImportNode_m873297840_0 (XmlDocument_t_307474771_0 * __this, XmlNode_t_990591852_0 * ___node, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::Load(System.IO.TextReader)
extern "C"  void XmlDocument_Load_m_783751672_0 (XmlDocument_t_307474771_0 * __this, TextReader_t1262698173_0 * ___txtReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::Load(System.Xml.XmlReader)
extern "C"  void XmlDocument_Load_m_1107225795_0 (XmlDocument_t_307474771_0 * __this, XmlReader_t1629164245_0 * ___xmlReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::LoadXml(System.String)
extern "C"  void XmlDocument_LoadXml_m974116234_0 (XmlDocument_t_307474771_0 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanged(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C"  void XmlDocument_onNodeChanged_m_958492572_0 (XmlDocument_t_307474771_0 * __this, XmlNode_t_990591852_0 * ___node, XmlNode_t_990591852_0 * ___parent, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanging(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C"  void XmlDocument_onNodeChanging_m1929815861_0 (XmlDocument_t_307474771_0 * __this, XmlNode_t_990591852_0 * ___node, XmlNode_t_990591852_0 * ___parent, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserted(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlDocument_onNodeInserted_m1032282674_0 (XmlDocument_t_307474771_0 * __this, XmlNode_t_990591852_0 * ___node, XmlNode_t_990591852_0 * ___newParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserting(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlDocument_onNodeInserting_m_1694648649_0 (XmlDocument_t_307474771_0 * __this, XmlNode_t_990591852_0 * ___node, XmlNode_t_990591852_0 * ___newParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoved(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlDocument_onNodeRemoved_m_704564288_0 (XmlDocument_t_307474771_0 * __this, XmlNode_t_990591852_0 * ___node, XmlNode_t_990591852_0 * ___oldParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoving(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlDocument_onNodeRemoving_m297670377_0 (XmlDocument_t_307474771_0 * __this, XmlNode_t_990591852_0 * ___node, XmlNode_t_990591852_0 * ___oldParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ParseName(System.String,System.String&,System.String&)
extern "C"  void XmlDocument_ParseName_m632676893_0 (XmlDocument_t_307474771_0 * __this, String_t* ___name, String_t** ___prefix, String_t** ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::ReadAttributeNode(System.Xml.XmlReader)
extern "C"  XmlAttribute_t_1872240822_0 * XmlDocument_ReadAttributeNode_m_192112269_0 (XmlDocument_t_307474771_0 * __this, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ReadAttributeNodeValue(System.Xml.XmlReader,System.Xml.XmlAttribute)
extern "C"  void XmlDocument_ReadAttributeNodeValue_m_1563590415_0 (XmlDocument_t_307474771_0 * __this, XmlReader_t1629164245_0 * ___reader, XmlAttribute_t_1872240822_0 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNode(System.Xml.XmlReader)
extern "C"  XmlNode_t_990591852_0 * XmlDocument_ReadNode_m1929665725_0 (XmlDocument_t_307474771_0 * __this, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNodeCore(System.Xml.XmlReader)
extern "C"  XmlNode_t_990591852_0 * XmlDocument_ReadNodeCore_m1324316476_0 (XmlDocument_t_307474771_0 * __this, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::MakeReaderErrorMessage(System.String,System.Xml.XmlReader)
extern "C"  String_t* XmlDocument_MakeReaderErrorMessage_m666557070_0 (XmlDocument_t_307474771_0 * __this, String_t* ___message, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::RemoveIdenticalAttribute(System.String)
extern "C"  void XmlDocument_RemoveIdenticalAttribute_m942731036_0 (XmlDocument_t_307474771_0 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddDefaultNameTableKeys()
extern "C"  void XmlDocument_AddDefaultNameTableKeys_m1442151358_0 (XmlDocument_t_307474771_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::CheckIdTableUpdate(System.Xml.XmlAttribute,System.String,System.String)
extern "C"  void XmlDocument_CheckIdTableUpdate_m827207136_0 (XmlDocument_t_307474771_0 * __this, XmlAttribute_t_1872240822_0 * ___attr, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
