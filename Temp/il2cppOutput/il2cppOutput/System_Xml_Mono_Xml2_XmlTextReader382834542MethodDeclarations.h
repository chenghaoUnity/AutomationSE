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

// Mono.Xml2.XmlTextReader
struct XmlTextReader_t382834542_0;
// System.IO.TextReader
struct TextReader_t1262698173_0;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.Xml.XmlParserContext
struct XmlParserContext_t1369943614_0;
// System.String
struct String_t;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t_1674146280_0;
// System.Xml.XmlResolver
struct XmlResolver_t_1510524520_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// System.Xml.XmlException
struct XmlException_t_403700483_0;
// Mono.Xml2.XmlTextReader/XmlTokenInfo
struct XmlTokenInfo_t_2023794415_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"
#include "System_Xml_System_Xml_EntityHandling150823853.h"
#include "System_Xml_System_Xml_ReadState_2141932618.h"
#include "System_Xml_System_Xml_WhitespaceHandling193147335.h"
#include "System_Xml_System_Xml_XmlSpace_638931788.h"
#include "System_Xml_System_Xml_ConformanceLevel312386932.h"
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputState_1641077030.h"

// System.Void Mono.Xml2.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m2112230387_0 (XmlTextReader_t382834542_0 * __this, TextReader_t1262698173_0 * ___input, XmlNameTable_t_662182735_0 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.IO.Stream,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C"  void XmlTextReader__ctor_m_1818278963_0 (XmlTextReader_t382834542_0 * __this, Stream_t463444077_0 * ___xmlFragment, int32_t ___fragType, XmlParserContext_t1369943614_0 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.Stream,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m2102759687_0 (XmlTextReader_t382834542_0 * __this, String_t* ___url, Stream_t463444077_0 * ___input, XmlNameTable_t_662182735_0 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m_1015837641_0 (XmlTextReader_t382834542_0 * __this, String_t* ___url, TextReader_t1262698173_0 * ___input, XmlNameTable_t_662182735_0 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C"  void XmlTextReader__ctor_m_43479930_0 (XmlTextReader_t382834542_0 * __this, String_t* ___xmlFragment, int32_t ___fragType, XmlParserContext_t1369943614_0 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C"  void XmlTextReader__ctor_m_201112103_0 (XmlTextReader_t382834542_0 * __this, String_t* ___url, TextReader_t1262698173_0 * ___fragment, int32_t ___fragType, XmlParserContext_t1369943614_0 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml2.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t1369943614_0 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m_625926199_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_AttributeCount()
extern "C"  int32_t XmlTextReader_get_AttributeCount_m1193113500_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_BaseURI()
extern "C"  String_t* XmlTextReader_get_BaseURI_m323459221_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_CharacterChecking()
extern "C"  bool XmlTextReader_get_CharacterChecking_m_1084378622_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C"  void XmlTextReader_set_CharacterChecking_m243948029_0 (XmlTextReader_t382834542_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_CloseInput()
extern "C"  bool XmlTextReader_get_CloseInput_m_9237163_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_CloseInput(System.Boolean)
extern "C"  void XmlTextReader_set_CloseInput_m534161544_0 (XmlTextReader_t382834542_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_Depth()
extern "C"  int32_t XmlTextReader_get_Depth_m958426748_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml2.XmlTextReader::get_EntityHandling()
extern "C"  int32_t XmlTextReader_get_EntityHandling_m33030270_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_EOF()
extern "C"  bool XmlTextReader_get_EOF_m564876571_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_HasValue()
extern "C"  bool XmlTextReader_get_HasValue_m_561231142_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_IsDefault()
extern "C"  bool XmlTextReader_get_IsDefault_m_2006246250_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_IsEmptyElement()
extern "C"  bool XmlTextReader_get_IsEmptyElement_m_1974131428_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_LineNumber()
extern "C"  int32_t XmlTextReader_get_LineNumber_m_770229850_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_LinePosition()
extern "C"  int32_t XmlTextReader_get_LinePosition_m318081158_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_LocalName()
extern "C"  String_t* XmlTextReader_get_LocalName_m1681504080_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Name()
extern "C"  String_t* XmlTextReader_get_Name_m1653885427_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_Namespaces()
extern "C"  bool XmlTextReader_get_Namespaces_m_1872329317_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_NamespaceURI()
extern "C"  String_t* XmlTextReader_get_NamespaceURI_m37232889_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable()
extern "C"  XmlNameTable_t_662182735_0 * XmlTextReader_get_NameTable_m_301823221_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType()
extern "C"  int32_t XmlTextReader_get_NodeType_m_917424397_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_Normalization()
extern "C"  bool XmlTextReader_get_Normalization_m717792252_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_Normalization(System.Boolean)
extern "C"  void XmlTextReader_set_Normalization_m1554575479_0 (XmlTextReader_t382834542_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Prefix()
extern "C"  String_t* XmlTextReader_get_Prefix_m1413213818_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml2.XmlTextReader::get_ReadState()
extern "C"  int32_t XmlTextReader_get_ReadState_m734148670_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings Mono.Xml2.XmlTextReader::get_Settings()
extern "C"  XmlReaderSettings_t_1674146280_0 * XmlTextReader_get_Settings_m_1977058524_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Value()
extern "C"  String_t* XmlTextReader_get_Value_m_1759452693_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WhitespaceHandling Mono.Xml2.XmlTextReader::get_WhitespaceHandling()
extern "C"  int32_t XmlTextReader_get_WhitespaceHandling_m_1552155726_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C"  void XmlTextReader_set_WhitespaceHandling_m1022196025_0 (XmlTextReader_t382834542_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_XmlLang()
extern "C"  String_t* XmlTextReader_get_XmlLang_m326679519_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void XmlTextReader_set_XmlResolver_m_1613745991_0 (XmlTextReader_t382834542_0 * __this, XmlResolver_t_1510524520_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml2.XmlTextReader::get_XmlSpace()
extern "C"  int32_t XmlTextReader_get_XmlSpace_m_594205236_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Close()
extern "C"  void XmlTextReader_Close_m1957867768_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::GetAttribute(System.String)
extern "C"  String_t* XmlTextReader_GetAttribute_m2130398877_0 (XmlTextReader_t382834542_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::GetIndexOfQualifiedAttribute(System.String,System.String)
extern "C"  int32_t XmlTextReader_GetIndexOfQualifiedAttribute_m328924107_0 (XmlTextReader_t382834542_0 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlTextReader_GetAttribute_m841228313_0 (XmlTextReader_t382834542_0 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader Mono.Xml2.XmlTextReader::GetRemainder()
extern "C"  TextReader_t1262698173_0 * XmlTextReader_GetRemainder_m318592377_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::HasLineInfo()
extern "C"  bool XmlTextReader_HasLineInfo_m1586124356_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::LookupNamespace(System.String)
extern "C"  String_t* XmlTextReader_LookupNamespace_m_1154006626_0 (XmlTextReader_t382834542_0 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::LookupNamespace(System.String,System.Boolean)
extern "C"  String_t* XmlTextReader_LookupNamespace_m_595205601_0 (XmlTextReader_t382834542_0 * __this, String_t* ___prefix, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::MoveToAttribute(System.Int32)
extern "C"  void XmlTextReader_MoveToAttribute_m2073234785_0 (XmlTextReader_t382834542_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToAttribute(System.String)
extern "C"  bool XmlTextReader_MoveToAttribute_m1898051050_0 (XmlTextReader_t382834542_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlTextReader_MoveToAttribute_m_1827046234_0 (XmlTextReader_t382834542_0 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToElement()
extern "C"  bool XmlTextReader_MoveToElement_m617221944_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToFirstAttribute()
extern "C"  bool XmlTextReader_MoveToFirstAttribute_m_583393998_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToNextAttribute()
extern "C"  bool XmlTextReader_MoveToNextAttribute_m_1838009947_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::Read()
extern "C"  bool XmlTextReader_Read_m777518640_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadAttributeValue()
extern "C"  bool XmlTextReader_ReadAttributeValue_m_1461714171_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadChars(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t XmlTextReader_ReadChars_m2077762994_0 (XmlTextReader_t382834542_0 * __this, CharU5BU5D_t_1225802637_0* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ResolveEntity()
extern "C"  void XmlTextReader_ResolveEntity_m_895962321_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Skip()
extern "C"  void XmlTextReader_Skip_m_2112282911_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::get_DTD()
extern "C"  DTDObjectModel_t_2044825337_0 * XmlTextReader_get_DTD_m_449875514_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver Mono.Xml2.XmlTextReader::get_Resolver()
extern "C"  XmlResolver_t_1510524520_0 * XmlTextReader_get_Resolver_m_1046726201_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException Mono.Xml2.XmlTextReader::NotWFError(System.String)
extern "C"  XmlException_t_403700483_0 * XmlTextReader_NotWFError_m304583423_0 (XmlTextReader_t382834542_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Init()
extern "C"  void XmlTextReader_Init_m1899167282_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Clear()
extern "C"  void XmlTextReader_Clear_m1948108813_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::InitializeContext(System.String,System.Xml.XmlParserContext,System.IO.TextReader,System.Xml.XmlNodeType)
extern "C"  void XmlTextReader_InitializeContext_m_20842084_0 (XmlTextReader_t382834542_0 * __this, String_t* ___url, XmlParserContext_t1369943614_0 * ___context, TextReader_t1262698173_0 * ___fragment, int32_t ___fragType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ConformanceLevel Mono.Xml2.XmlTextReader::get_Conformance()
extern "C"  int32_t XmlTextReader_get_Conformance_m1190844346_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C"  void XmlTextReader_set_Conformance_m_1435269195_0 (XmlTextReader_t382834542_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetProperties(System.Xml.XmlNodeType,System.String,System.String,System.String,System.Boolean,System.String,System.Boolean)
extern "C"  void XmlTextReader_SetProperties_m_1260963504_0 (XmlTextReader_t382834542_0 * __this, int32_t ___nodeType, String_t* ___name, String_t* ___prefix, String_t* ___localName, bool ___isEmptyElement, String_t* ___value, bool ___clearAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetTokenProperties(Mono.Xml2.XmlTextReader/XmlTokenInfo,System.Xml.XmlNodeType,System.String,System.String,System.String,System.Boolean,System.String,System.Boolean)
extern "C"  void XmlTextReader_SetTokenProperties_m237691509_0 (XmlTextReader_t382834542_0 * __this, XmlTokenInfo_t_2023794415_0 * ___token, int32_t ___nodeType, String_t* ___name, String_t* ___prefix, String_t* ___localName, bool ___isEmptyElement, String_t* ___value, bool ___clearAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ClearAttributes()
extern "C"  void XmlTextReader_ClearAttributes_m_1343066940_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::PeekSurrogate(System.Int32)
extern "C"  int32_t XmlTextReader_PeekSurrogate_m_511303888_0 (XmlTextReader_t382834542_0 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::PeekChar()
extern "C"  int32_t XmlTextReader_PeekChar_m254641297_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadChar()
extern "C"  int32_t XmlTextReader_ReadChar_m_437250932_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Advance(System.Int32)
extern "C"  void XmlTextReader_Advance_m673767315_0 (XmlTextReader_t382834542_0 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadTextReader(System.Int32)
extern "C"  bool XmlTextReader_ReadTextReader_m1148791089_0 (XmlTextReader_t382834542_0 * __this, int32_t ___remained, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadContent()
extern "C"  bool XmlTextReader_ReadContent_m_940358901_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetEntityReferenceProperties()
extern "C"  void XmlTextReader_SetEntityReferenceProperties_m614061979_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadStartTag()
extern "C"  void XmlTextReader_ReadStartTag_m721786928_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::PushElementName(System.String,System.String,System.String)
extern "C"  void XmlTextReader_PushElementName_m1658182381_0 (XmlTextReader_t382834542_0 * __this, String_t* ___name, String_t* ___local, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadEndTag()
extern "C"  void XmlTextReader_ReadEndTag_m_535289577_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::CheckCurrentStateUpdate()
extern "C"  void XmlTextReader_CheckCurrentStateUpdate_m2095539625_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AppendValueChar(System.Int32)
extern "C"  void XmlTextReader_AppendValueChar_m_550176962_0 (XmlTextReader_t382834542_0 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AppendSurrogatePairValueChar(System.Int32)
extern "C"  void XmlTextReader_AppendSurrogatePairValueChar_m704355490_0 (XmlTextReader_t382834542_0 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::CreateValueString()
extern "C"  String_t* XmlTextReader_CreateValueString_m_2123869335_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ClearValueBuffer()
extern "C"  void XmlTextReader_ClearValueBuffer_m495962918_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadText(System.Boolean)
extern "C"  void XmlTextReader_ReadText_m502843516_0 (XmlTextReader_t382834542_0 * __this, bool ___notWhitespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadReference(System.Boolean)
extern "C"  int32_t XmlTextReader_ReadReference_m2020451886_0 (XmlTextReader_t382834542_0 * __this, bool ___ignoreEntityReferences, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadCharacterReference()
extern "C"  int32_t XmlTextReader_ReadCharacterReference_m_517308520_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadEntityReference(System.Boolean)
extern "C"  int32_t XmlTextReader_ReadEntityReference_m1180838731_0 (XmlTextReader_t382834542_0 * __this, bool ___ignoreEntityReferences, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadAttributes(System.Boolean)
extern "C"  void XmlTextReader_ReadAttributes_m1335987046_0 (XmlTextReader_t382834542_0 * __this, bool ___isXmlDecl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AddAttributeWithValue(System.String,System.String)
extern "C"  void XmlTextReader_AddAttributeWithValue_m1675559726_0 (XmlTextReader_t382834542_0 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::IncrementAttributeToken()
extern "C"  void XmlTextReader_IncrementAttributeToken_m639649356_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::IncrementAttributeValueToken()
extern "C"  void XmlTextReader_IncrementAttributeValueToken_m_1267997769_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadAttributeValueTokens(System.Int32)
extern "C"  void XmlTextReader_ReadAttributeValueTokens_m_650906344_0 (XmlTextReader_t382834542_0 * __this, int32_t ___dummyQuoteChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::CheckAttributeEntityReferenceWFC(System.String)
extern "C"  void XmlTextReader_CheckAttributeEntityReferenceWFC_m1075790688_0 (XmlTextReader_t382834542_0 * __this, String_t* ___entName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadProcessingInstruction()
extern "C"  void XmlTextReader_ReadProcessingInstruction_m_47060539_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::VerifyXmlDeclaration()
extern "C"  void XmlTextReader_VerifyXmlDeclaration_m_5803554_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::SkipWhitespaceInString(System.String,System.Int32&)
extern "C"  bool XmlTextReader_SkipWhitespaceInString_m1769166187_0 (XmlTextReader_t382834542_0 * __this, String_t* ___text, int32_t* ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ParseAttributeFromString(System.String,System.Int32&,System.String&,System.String&)
extern "C"  void XmlTextReader_ParseAttributeFromString_m132975569_0 (XmlTextReader_t382834542_0 * __this, String_t* ___src, int32_t* ___idx, String_t** ___name, String_t** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SkipTextDeclaration()
extern "C"  void XmlTextReader_SkipTextDeclaration_m_1016747570_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadDeclaration()
extern "C"  void XmlTextReader_ReadDeclaration_m_935897276_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadComment()
extern "C"  void XmlTextReader_ReadComment_m1765947241_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadCDATA()
extern "C"  void XmlTextReader_ReadCDATA_m_1918676393_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadDoctypeDecl()
extern "C"  void XmlTextReader_ReadDoctypeDecl_m1334696326_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::GenerateDTDObjectModel(System.String,System.String,System.String,System.String)
extern "C"  DTDObjectModel_t_2044825337_0 * XmlTextReader_GenerateDTDObjectModel_m991330180_0 (XmlTextReader_t382834542_0 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::GenerateDTDObjectModel(System.String,System.String,System.String,System.String,System.Int32,System.Int32)
extern "C"  DTDObjectModel_t_2044825337_0 * XmlTextReader_GenerateDTDObjectModel_m_1796982812_0 (XmlTextReader_t382834542_0 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, int32_t ___intSubsetStartLine, int32_t ___intSubsetStartColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader::get_State()
extern "C"  int32_t XmlTextReader_get_State_m_88980720_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadValueChar()
extern "C"  int32_t XmlTextReader_ReadValueChar_m579850003_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ExpectAndAppend(System.String)
extern "C"  void XmlTextReader_ExpectAndAppend_m_2088834486_0 (XmlTextReader_t382834542_0 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadInternalSubset()
extern "C"  void XmlTextReader_ReadInternalSubset_m934179991_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadSystemLiteral(System.Boolean)
extern "C"  String_t* XmlTextReader_ReadSystemLiteral_m287448164_0 (XmlTextReader_t382834542_0 * __this, bool ___expectSYSTEM, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadPubidLiteral()
extern "C"  String_t* XmlTextReader_ReadPubidLiteral_m_458945204_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadName()
extern "C"  String_t* XmlTextReader_ReadName_m_1420372448_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadName(System.String&,System.String&)
extern "C"  String_t* XmlTextReader_ReadName_m_1927772506_0 (XmlTextReader_t382834542_0 * __this, String_t** ___prefix, String_t** ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Expect(System.Int32)
extern "C"  void XmlTextReader_Expect_m_1506121780_0 (XmlTextReader_t382834542_0 * __this, int32_t ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Expect(System.String)
extern "C"  void XmlTextReader_Expect_m1011563495_0 (XmlTextReader_t382834542_0 * __this, String_t* ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ExpectAfterWhitespace(System.Char)
extern "C"  void XmlTextReader_ExpectAfterWhitespace_m_1018670083_0 (XmlTextReader_t382834542_0 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::SkipWhitespace()
extern "C"  bool XmlTextReader_SkipWhitespace_m1854637366_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadWhitespace()
extern "C"  bool XmlTextReader_ReadWhitespace_m885165773_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadCharsInternal(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t XmlTextReader_ReadCharsInternal_m_1890377867_0 (XmlTextReader_t382834542_0 * __this, CharU5BU5D_t_1225802637_0* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadUntilEndTag()
extern "C"  bool XmlTextReader_ReadUntilEndTag_m_1723484465_0 (XmlTextReader_t382834542_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
