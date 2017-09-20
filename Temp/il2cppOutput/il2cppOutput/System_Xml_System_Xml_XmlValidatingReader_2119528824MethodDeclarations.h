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

// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t_2119528824_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// System.Xml.XmlParserContext
struct XmlParserContext_t1369943614_0;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Xml.XmlResolver
struct XmlResolver_t_1510524520_0;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t1535764398_0;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t_1674146280_0;
// System.Object
struct Object_t;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t2045452406_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_EntityHandling150823853.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"
#include "System_Xml_System_Xml_ReadState_2141932618.h"
#include "System_Xml_System_Xml_ValidationType127825176.h"
#include "System_Xml_System_Xml_XmlSpace_638931788.h"

// System.Void System.Xml.XmlValidatingReader::.ctor(System.Xml.XmlReader)
extern "C"  void XmlValidatingReader__ctor_m_1282250166_0 (XmlValidatingReader_t_2119528824_0 * __this, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlValidatingReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t1369943614_0 * XmlValidatingReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m_1971068627_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_AttributeCount()
extern "C"  int32_t XmlValidatingReader_get_AttributeCount_m_817581260_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_BaseURI()
extern "C"  String_t* XmlValidatingReader_get_BaseURI_m1328757979_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_CanResolveEntity()
extern "C"  bool XmlValidatingReader_get_CanResolveEntity_m975828230_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_Depth()
extern "C"  int32_t XmlValidatingReader_get_Depth_m1005799396_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling System.Xml.XmlValidatingReader::get_EntityHandling()
extern "C"  int32_t XmlValidatingReader_get_EntityHandling_m1995197276_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C"  void XmlValidatingReader_set_EntityHandling_m_2098864167_0 (XmlValidatingReader_t_2119528824_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_EOF()
extern "C"  bool XmlValidatingReader_get_EOF_m1415237751_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_HasValue()
extern "C"  bool XmlValidatingReader_get_HasValue_m_2108716802_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_IsDefault()
extern "C"  bool XmlValidatingReader_get_IsDefault_m1561305842_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_IsEmptyElement()
extern "C"  bool XmlValidatingReader_get_IsEmptyElement_m1116878912_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_LineNumber()
extern "C"  int32_t XmlValidatingReader_get_LineNumber_m_1080295106_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_LinePosition()
extern "C"  int32_t XmlValidatingReader_get_LinePosition_m_1301886434_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_LocalName()
extern "C"  String_t* XmlValidatingReader_get_LocalName_m1405968918_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_Name()
extern "C"  String_t* XmlValidatingReader_get_Name_m_471434387_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_Namespaces()
extern "C"  bool XmlValidatingReader_get_Namespaces_m1347603135_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_NamespaceURI()
extern "C"  String_t* XmlValidatingReader_get_NamespaceURI_m_748275597_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlValidatingReader::get_NameTable()
extern "C"  XmlNameTable_t_662182735_0 * XmlValidatingReader_get_NameTable_m1151460085_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlValidatingReader::get_NodeType()
extern "C"  int32_t XmlValidatingReader_get_NodeType_m_1615889745_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_Prefix()
extern "C"  String_t* XmlValidatingReader_get_Prefix_m_909661836_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlValidatingReader::get_ReadState()
extern "C"  int32_t XmlValidatingReader_get_ReadState_m_1698543982_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlValidatingReader::get_Resolver()
extern "C"  XmlResolver_t_1510524520_0 * XmlValidatingReader_get_Resolver_m464606959_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::get_Schemas()
extern "C"  XmlSchemaCollection_t1535764398_0 * XmlValidatingReader_get_Schemas_m_685180255_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlValidatingReader::get_Settings()
extern "C"  XmlReaderSettings_t_1674146280_0 * XmlValidatingReader_get_Settings_m_48505012_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ValidationType System.Xml.XmlValidatingReader::get_ValidationType()
extern "C"  int32_t XmlValidatingReader_get_ValidationType_m1920215420_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::set_ValidationType(System.Xml.ValidationType)
extern "C"  void XmlValidatingReader_set_ValidationType_m_972988541_0 (XmlValidatingReader_t_2119528824_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_Value()
extern "C"  String_t* XmlValidatingReader_get_Value_m1075109809_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_XmlLang()
extern "C"  String_t* XmlValidatingReader_get_XmlLang_m1331978277_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlValidatingReader::get_XmlSpace()
extern "C"  int32_t XmlValidatingReader_get_XmlSpace_m1232010556_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::Close()
extern "C"  void XmlValidatingReader_Close_m_562806684_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.String)
extern "C"  String_t* XmlValidatingReader_GetAttribute_m632750179_0 (XmlValidatingReader_t_2119528824_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlValidatingReader_GetAttribute_m701120351_0 (XmlValidatingReader_t_2119528824_0 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::HasLineInfo()
extern "C"  bool XmlValidatingReader_HasLineInfo_m1813300128_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::LookupNamespace(System.String)
extern "C"  String_t* XmlValidatingReader_LookupNamespace_m_1486097896_0 (XmlValidatingReader_t_2119528824_0 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::MoveToAttribute(System.Int32)
extern "C"  void XmlValidatingReader_MoveToAttribute_m_1340341299_0 (XmlValidatingReader_t_2119528824_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToAttribute(System.String)
extern "C"  bool XmlValidatingReader_MoveToAttribute_m_1433637874_0 (XmlValidatingReader_t_2119528824_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlValidatingReader_MoveToAttribute_m_791125046_0 (XmlValidatingReader_t_2119528824_0 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToElement()
extern "C"  bool XmlValidatingReader_MoveToElement_m_110193260_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToFirstAttribute()
extern "C"  bool XmlValidatingReader_MoveToFirstAttribute_m2055141206_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToNextAttribute()
extern "C"  bool XmlValidatingReader_MoveToNextAttribute_m_505969919_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::Read()
extern "C"  bool XmlValidatingReader_Read_m1597874260_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::ReadAttributeValue()
extern "C"  bool XmlValidatingReader_ReadAttributeValue_m1629296169_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::ResolveEntity()
extern "C"  void XmlValidatingReader_ResolveEntity_m_1439033701_0 (XmlValidatingReader_t_2119528824_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::OnValidationEvent(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C"  void XmlValidatingReader_OnValidationEvent_m_1141779637_0 (XmlValidatingReader_t_2119528824_0 * __this, Object_t * ___o, ValidationEventArgs_t2045452406_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
