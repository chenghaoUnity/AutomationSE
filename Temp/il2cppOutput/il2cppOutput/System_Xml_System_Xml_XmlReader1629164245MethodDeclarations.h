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

// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t1288361913_0;
// System.String
struct String_t;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1704224293_0;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t_1674146280_0;
// System.Xml.XmlException
struct XmlException_t_403700483_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlSpace_638931788.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"

// System.Void System.Xml.XmlReader::.ctor()
extern "C"  void XmlReader__ctor_m_2066654879_0 (XmlReader_t1629164245_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::System.IDisposable.Dispose()
extern "C"  void XmlReader_System_IDisposable_Dispose_m2040909022_0 (XmlReader_t1629164245_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::get_Binary()
extern "C"  XmlReaderBinarySupport_t1288361913_0 * XmlReader_get_Binary_m_1345890634_0 (XmlReader_t1629164245_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_CanResolveEntity()
extern "C"  bool XmlReader_get_CanResolveEntity_m176347283_0 (XmlReader_t1629164245_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_HasAttributes()
extern "C"  bool XmlReader_get_HasAttributes_m_1586128673_0 (XmlReader_t1629164245_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_IsDefault()
extern "C"  bool XmlReader_get_IsDefault_m2141189125_0 (XmlReader_t1629164245_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.String)
extern "C"  String_t* XmlReader_get_Item_m_995665024_0 (XmlReader_t1629164245_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.String,System.String)
extern "C"  String_t* XmlReader_get_Item_m291136444_0 (XmlReader_t1629164245_0 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Name()
extern "C"  String_t* XmlReader_get_Name_m1902891066_0 (XmlReader_t1629164245_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlReader::get_SchemaInfo()
extern "C"  Object_t * XmlReader_get_SchemaInfo_m2040468280_0 (XmlReader_t1629164245_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings()
extern "C"  XmlReaderSettings_t_1674146280_0 * XmlReader_get_Settings_m1880490585_0 (XmlReader_t1629164245_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_XmlLang()
extern "C"  String_t* XmlReader_get_XmlLang_m1045150776_0 (XmlReader_t1629164245_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace()
extern "C"  int32_t XmlReader_get_XmlSpace_m_777491127_0 (XmlReader_t1629164245_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::Dispose(System.Boolean)
extern "C"  void XmlReader_Dispose_m2125359701_0 (XmlReader_t1629164245_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32)
extern "C"  void XmlReader_MoveToAttribute_m_1990286944_0 (XmlReader_t1629164245_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::IsContent(System.Xml.XmlNodeType)
extern "C"  bool XmlReader_IsContent_m_861545943_0 (XmlReader_t1629164245_0 * __this, int32_t ___nodeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent()
extern "C"  int32_t XmlReader_MoveToContent_m992177624_0 (XmlReader_t1629164245_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadEndElement()
extern "C"  void XmlReader_ReadEndElement_m_388054182_0 (XmlReader_t1629164245_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadInnerXml()
extern "C"  String_t* XmlReader_ReadInnerXml_m_1270382403_0 (XmlReader_t1629164245_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadOuterXml()
extern "C"  String_t* XmlReader_ReadOuterXml_m_349815368_0 (XmlReader_t1629164245_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadStartElement()
extern "C"  void XmlReader_ReadStartElement_m_503172685_0 (XmlReader_t1629164245_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::Skip()
extern "C"  void XmlReader_Skip_m722576770_0 (XmlReader_t1629164245_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException System.Xml.XmlReader::XmlError(System.String)
extern "C"  XmlException_t_403700483_0 * XmlReader_XmlError_m_1351106167_0 (XmlReader_t1629164245_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
