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

// System.Xml.XmlDocumentType
struct XmlDocumentType_t_1937558649_0;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t_307474771_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t_1798706413_0;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"

// System.Void System.Xml.XmlDocumentType::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlDocumentType__ctor_m978796707_0 (XmlDocumentType_t_1937558649_0 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, XmlDocument_t_307474771_0 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::.ctor(Mono.Xml.DTDObjectModel,System.Xml.XmlDocument)
extern "C"  void XmlDocumentType__ctor_m1497903455_0 (XmlDocumentType_t_1937558649_0 * __this, DTDObjectModel_t_2044825337_0 * ___dtd, XmlDocument_t_307474771_0 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::ImportFromDTD()
extern "C"  void XmlDocumentType_ImportFromDTD_m_634215182_0 (XmlDocumentType_t_1937558649_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::get_DTD()
extern "C"  DTDObjectModel_t_2044825337_0 * XmlDocumentType_get_DTD_m1586388925_0 (XmlDocumentType_t_1937558649_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::get_Entities()
extern "C"  XmlNamedNodeMap_t_1798706413_0 * XmlDocumentType_get_Entities_m_1128855026_0 (XmlDocumentType_t_1937558649_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_InternalSubset()
extern "C"  String_t* XmlDocumentType_get_InternalSubset_m1333229984_0 (XmlDocumentType_t_1937558649_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentType::get_IsReadOnly()
extern "C"  bool XmlDocumentType_get_IsReadOnly_m1626547890_0 (XmlDocumentType_t_1937558649_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_LocalName()
extern "C"  String_t* XmlDocumentType_get_LocalName_m_1592843529_0 (XmlDocumentType_t_1937558649_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_Name()
extern "C"  String_t* XmlDocumentType_get_Name_m1620439532_0 (XmlDocumentType_t_1937558649_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentType::get_NodeType()
extern "C"  int32_t XmlDocumentType_get_NodeType_m_1859888594_0 (XmlDocumentType_t_1937558649_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_PublicId()
extern "C"  String_t* XmlDocumentType_get_PublicId_m1258052229_0 (XmlDocumentType_t_1937558649_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_SystemId()
extern "C"  String_t* XmlDocumentType_get_SystemId_m_3553461_0 (XmlDocumentType_t_1937558649_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentType::CloneNode(System.Boolean)
extern "C"  XmlNode_t_990591852_0 * XmlDocumentType_CloneNode_m1338362261_0 (XmlDocumentType_t_1937558649_0 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
