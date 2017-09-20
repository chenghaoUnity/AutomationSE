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

// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t_715093191_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t_2119528824_0;
// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t952581733_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t201864511_0;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t1388169374_0;
// Mono.Xml.DTDValidatingReader/AttributeSlot
struct AttributeSlot_t1659077188_0;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Xml.XmlParserContext
struct XmlParserContext_t1369943614_0;
// System.Object
struct Object_t;
// System.Xml.XmlResolver
struct XmlResolver_t_1510524520_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_EntityHandling150823853.h"
#include "System_Xml_System_Xml_Schema_XmlSeverityType_608244762.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"
#include "System_Xml_System_Xml_ReadState_2141932618.h"
#include "System_Xml_System_Xml_XmlSpace_638931788.h"

// System.Void Mono.Xml.DTDValidatingReader::.ctor(System.Xml.XmlReader,System.Xml.XmlValidatingReader)
extern "C"  void DTDValidatingReader__ctor_m_2130315882_0 (DTDValidatingReader_t_715093191_0 * __this, XmlReader_t1629164245_0 * ___reader, XmlValidatingReader_t_2119528824_0 * ___validatingReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::System.Xml.IXmlLineInfo.HasLineInfo()
extern "C"  bool DTDValidatingReader_System_Xml_IXmlLineInfo_HasLineInfo_m1836088807_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.EntityResolvingXmlReader Mono.Xml.DTDValidatingReader::get_Source()
extern "C"  EntityResolvingXmlReader_t952581733_0 * DTDValidatingReader_get_Source_m_524771960_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDValidatingReader::get_DTD()
extern "C"  DTDObjectModel_t_2044825337_0 * DTDValidatingReader_get_DTD_m_1404391733_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml.DTDValidatingReader::get_EntityHandling()
extern "C"  int32_t DTDValidatingReader_get_EntityHandling_m_1947957811_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C"  void DTDValidatingReader_set_EntityHandling_m346929096_0 (DTDValidatingReader_t_715093191_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::Close()
extern "C"  void DTDValidatingReader_Close_m1714221971_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::GetAttributeIndex(System.String)
extern "C"  int32_t DTDValidatingReader_GetAttributeIndex_m1801951389_0 (DTDValidatingReader_t_715093191_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::GetAttributeIndex(System.String,System.String)
extern "C"  int32_t DTDValidatingReader_GetAttributeIndex_m1581705753_0 (DTDValidatingReader_t_715093191_0 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::GetAttribute(System.String)
extern "C"  String_t* DTDValidatingReader_GetAttribute_m_477396654_0 (DTDValidatingReader_t_715093191_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::GetAttribute(System.String,System.String)
extern "C"  String_t* DTDValidatingReader_GetAttribute_m_1114181106_0 (DTDValidatingReader_t_715093191_0 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::LookupNamespace(System.String)
extern "C"  String_t* DTDValidatingReader_LookupNamespace_m1672746697_0 (DTDValidatingReader_t_715093191_0 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::MoveToAttribute(System.Int32)
extern "C"  void DTDValidatingReader_MoveToAttribute_m1796708796_0 (DTDValidatingReader_t_715093191_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToAttribute(System.String)
extern "C"  bool DTDValidatingReader_MoveToAttribute_m1022817791_0 (DTDValidatingReader_t_715093191_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToAttribute(System.String,System.String)
extern "C"  bool DTDValidatingReader_MoveToAttribute_m_449956869_0 (DTDValidatingReader_t_715093191_0 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToElement()
extern "C"  bool DTDValidatingReader_MoveToElement_m1162446787_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToFirstAttribute()
extern "C"  bool DTDValidatingReader_MoveToFirstAttribute_m_198770105_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToNextAttribute()
extern "C"  bool DTDValidatingReader_MoveToNextAttribute_m_1132866064_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::Read()
extern "C"  bool DTDValidatingReader_Read_m1586736453_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ReadContent()
extern "C"  bool DTDValidatingReader_ReadContent_m1652384342_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ProcessContent()
extern "C"  bool DTDValidatingReader_ProcessContent_m1702774841_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::FillAttributes()
extern "C"  void DTDValidatingReader_FillAttributes_m_1804341151_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateText()
extern "C"  void DTDValidatingReader_ValidateText_m_2115461174_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateWhitespaceNode()
extern "C"  void DTDValidatingReader_ValidateWhitespaceNode_m_1048939204_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::HandleError(System.String,System.Xml.Schema.XmlSeverityType)
extern "C"  void DTDValidatingReader_HandleError_m1011757180_0 (DTDValidatingReader_t_715093191_0 * __this, String_t* ___message, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::HandleError(System.Xml.Schema.XmlSchemaException,System.Xml.Schema.XmlSeverityType)
extern "C"  void DTDValidatingReader_HandleError_m_1065844446_0 (DTDValidatingReader_t_715093191_0 * __this, XmlSchemaException_t201864511_0 * ___ex, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateAttributes(Mono.Xml.DTDAttListDeclaration,System.Boolean)
extern "C"  void DTDValidatingReader_ValidateAttributes_m746481622_0 (DTDValidatingReader_t_715093191_0 * __this, DTDAttListDeclaration_t1388169374_0 * ___decl, bool ___validate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDValidatingReader/AttributeSlot Mono.Xml.DTDValidatingReader::GetAttributeSlot()
extern "C"  AttributeSlot_t1659077188_0 * DTDValidatingReader_GetAttributeSlot_m1739415337_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::DtdValidateAttributes(Mono.Xml.DTDAttListDeclaration,System.Boolean)
extern "C"  void DTDValidatingReader_DtdValidateAttributes_m953948654_0 (DTDValidatingReader_t_715093191_0 * __this, DTDAttListDeclaration_t1388169374_0 * ___decl, bool ___validate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ReadDoctype()
extern "C"  void DTDValidatingReader_ReadDoctype_m_902075625_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ProcessStartElement()
extern "C"  void DTDValidatingReader_ProcessStartElement_m2136937508_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ProcessEndElement()
extern "C"  void DTDValidatingReader_ProcessEndElement_m_867987957_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::VerifyDeclaredAttributes(Mono.Xml.DTDAttListDeclaration)
extern "C"  void DTDValidatingReader_VerifyDeclaredAttributes_m412018372_0 (DTDValidatingReader_t_715093191_0 * __this, DTDAttListDeclaration_t1388169374_0 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ReadAttributeValue()
extern "C"  bool DTDValidatingReader_ReadAttributeValue_m_1300420262_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ResolveEntity()
extern "C"  void DTDValidatingReader_ResolveEntity_m203434698_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_AttributeCount()
extern "C"  int32_t DTDValidatingReader_get_AttributeCount_m_1425787675_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_BaseURI()
extern "C"  String_t* DTDValidatingReader_get_BaseURI_m_652641270_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_CanResolveEntity()
extern "C"  bool DTDValidatingReader_get_CanResolveEntity_m_1278083081_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_Depth()
extern "C"  int32_t DTDValidatingReader_get_Depth_m1947659027_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_EOF()
extern "C"  bool DTDValidatingReader_get_EOF_m321311206_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_HasValue()
extern "C"  bool DTDValidatingReader_get_HasValue_m_1790569233_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_IsDefault()
extern "C"  bool DTDValidatingReader_get_IsDefault_m_1461021407_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_IsEmptyElement()
extern "C"  bool DTDValidatingReader_get_IsEmptyElement_m_1812837519_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Item(System.String)
extern "C"  String_t* DTDValidatingReader_get_Item_m1302989724_0 (DTDValidatingReader_t_715093191_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Item(System.String,System.String)
extern "C"  String_t* DTDValidatingReader_get_Item_m1541976792_0 (DTDValidatingReader_t_715093191_0 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_LineNumber()
extern "C"  int32_t DTDValidatingReader_get_LineNumber_m_1686502545_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_LinePosition()
extern "C"  int32_t DTDValidatingReader_get_LinePosition_m248316943_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_LocalName()
extern "C"  String_t* DTDValidatingReader_get_LocalName_m_48197243_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Name()
extern "C"  String_t* DTDValidatingReader_get_Name_m_540990818_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_NamespaceURI()
extern "C"  String_t* DTDValidatingReader_get_NamespaceURI_m1522736804_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.DTDValidatingReader::get_NameTable()
extern "C"  XmlNameTable_t_662182735_0 * DTDValidatingReader_get_NameTable_m_425224476_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.DTDValidatingReader::get_NodeType()
extern "C"  int32_t DTDValidatingReader_get_NodeType_m_1998718560_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.DTDValidatingReader::get_ParserContext()
extern "C"  XmlParserContext_t1369943614_0 * DTDValidatingReader_get_ParserContext_m1401558142_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Prefix()
extern "C"  String_t* DTDValidatingReader_get_Prefix_m966084709_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.DTDValidatingReader::get_ReadState()
extern "C"  int32_t DTDValidatingReader_get_ReadState_m_1897760831_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.DTDValidatingReader::get_SchemaType()
extern "C"  Object_t * DTDValidatingReader_get_SchemaType_m_615990752_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::FilterNormalization(System.String,System.String)
extern "C"  String_t* DTDValidatingReader_FilterNormalization_m1358656833_0 (DTDValidatingReader_t_715093191_0 * __this, String_t* ___attrName, String_t* ___rawValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Value()
extern "C"  String_t* DTDValidatingReader_get_Value_m_1081139552_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_XmlLang()
extern "C"  String_t* DTDValidatingReader_get_XmlLang_m_649420972_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void DTDValidatingReader_set_XmlResolver_m_111065260_0 (DTDValidatingReader_t_715093191_0 * __this, XmlResolver_t_1510524520_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.DTDValidatingReader::get_XmlSpace()
extern "C"  int32_t DTDValidatingReader_get_XmlSpace_m800084653_0 (DTDValidatingReader_t_715093191_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
