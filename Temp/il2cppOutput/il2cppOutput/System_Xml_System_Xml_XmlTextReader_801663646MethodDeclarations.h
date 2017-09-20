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

// System.Xml.XmlTextReader
struct XmlTextReader_t_801663646_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.IO.TextReader
struct TextReader_t1262698173_0;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.String
struct String_t;
// System.Xml.XmlParserContext
struct XmlParserContext_t1369943614_0;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t382834542_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t_1674146280_0;
// System.Xml.XmlResolver
struct XmlResolver_t_1510524520_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"
#include "System_Xml_System_Xml_ReadState_2141932618.h"
#include "System_Xml_System_Xml_XmlSpace_638931788.h"
#include "System_Xml_System_Xml_ConformanceLevel312386932.h"
#include "System_Xml_System_Xml_EntityHandling150823853.h"
#include "System_Xml_System_Xml_WhitespaceHandling193147335.h"

// System.Void System.Xml.XmlTextReader::.ctor(System.IO.Stream)
extern "C"  void XmlTextReader__ctor_m1701184139_0 (XmlTextReader_t_801663646_0 * __this, Stream_t463444077_0 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader)
extern "C"  void XmlTextReader__ctor_m381613755_0 (XmlTextReader_t_801663646_0 * __this, TextReader_t1262698173_0 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m_1787111163_0 (XmlTextReader_t_801663646_0 * __this, TextReader_t1262698173_0 * ___input, XmlNameTable_t_662182735_0 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.Stream,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m_1584617575_0 (XmlTextReader_t_801663646_0 * __this, String_t* ___url, Stream_t463444077_0 * ___input, XmlNameTable_t_662182735_0 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m842598857_0 (XmlTextReader_t_801663646_0 * __this, String_t* ___url, TextReader_t1262698173_0 * ___input, XmlNameTable_t_662182735_0 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C"  void XmlTextReader__ctor_m447354008_0 (XmlTextReader_t_801663646_0 * __this, String_t* ___xmlFragment, int32_t ___fragType, XmlParserContext_t1369943614_0 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(Mono.Xml2.XmlTextReader,System.Boolean)
extern "C"  void XmlTextReader__ctor_m_2077938530_0 (XmlTextReader_t_801663646_0 * __this, XmlTextReader_t382834542_0 * ___entityContainer, bool ___insideAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t1369943614_0 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m889100115_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlTextReader::get_Current()
extern "C"  XmlReader_t1629164245_0 * XmlTextReader_get_Current_m_1891561291_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_AttributeCount()
extern "C"  int32_t XmlTextReader_get_AttributeCount_m_1699792434_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_BaseURI()
extern "C"  String_t* XmlTextReader_get_BaseURI_m2087412417_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CanResolveEntity()
extern "C"  bool XmlTextReader_get_CanResolveEntity_m_637079136_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_Depth()
extern "C"  int32_t XmlTextReader_get_Depth_m688655370_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_EOF()
extern "C"  bool XmlTextReader_get_EOF_m_572694115_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_HasValue()
extern "C"  bool XmlTextReader_get_HasValue_m1234681752_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_IsDefault()
extern "C"  bool XmlTextReader_get_IsDefault_m2127445912_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_IsEmptyElement()
extern "C"  bool XmlTextReader_get_IsEmptyElement_m_690384038_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_LocalName()
extern "C"  String_t* XmlTextReader_get_LocalName_m328443516_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Name()
extern "C"  String_t* XmlTextReader_get_Name_m2096402247_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_NamespaceURI()
extern "C"  String_t* XmlTextReader_get_NamespaceURI_m_721956275_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlTextReader::get_NameTable()
extern "C"  XmlNameTable_t_662182735_0 * XmlTextReader_get_NameTable_m760026331_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlTextReader::get_NodeType()
extern "C"  int32_t XmlTextReader_get_NodeType_m_722351543_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlTextReader::get_ParserContext()
extern "C"  XmlParserContext_t1369943614_0 * XmlTextReader_get_ParserContext_m1687547253_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Prefix()
extern "C"  String_t* XmlTextReader_get_Prefix_m1470115534_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState()
extern "C"  int32_t XmlTextReader_get_ReadState_m1846272056_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings()
extern "C"  XmlReaderSettings_t_1674146280_0 * XmlTextReader_get_Settings_m_388606106_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Value()
extern "C"  String_t* XmlTextReader_get_Value_m_926333161_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_XmlLang()
extern "C"  String_t* XmlTextReader_get_XmlLang_m2090632715_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlTextReader::get_XmlSpace()
extern "C"  int32_t XmlTextReader_get_XmlSpace_m1704767574_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CharacterChecking()
extern "C"  bool XmlTextReader_get_CharacterChecking_m645313284_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C"  void XmlTextReader_set_CharacterChecking_m519669391_0 (XmlTextReader_t_801663646_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CloseInput()
extern "C"  bool XmlTextReader_get_CloseInput_m_713799021_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CloseInput(System.Boolean)
extern "C"  void XmlTextReader_set_CloseInput_m_965960650_0 (XmlTextReader_t_801663646_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C"  void XmlTextReader_set_Conformance_m21394147_0 (XmlTextReader_t_801663646_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlTextReader::get_Resolver()
extern "C"  XmlResolver_t_1510524520_0 * XmlTextReader_get_Resolver_m_988729591_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CopyProperties(System.Xml.XmlTextReader)
extern "C"  void XmlTextReader_CopyProperties_m1514394023_0 (XmlTextReader_t_801663646_0 * __this, XmlTextReader_t_801663646_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling System.Xml.XmlTextReader::get_EntityHandling()
extern "C"  int32_t XmlTextReader_get_EntityHandling_m_418214858_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LineNumber()
extern "C"  int32_t XmlTextReader_get_LineNumber_m_130685736_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LinePosition()
extern "C"  int32_t XmlTextReader_get_LinePosition_m739651384_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_Namespaces()
extern "C"  bool XmlTextReader_get_Namespaces_m1718076121_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_Normalization()
extern "C"  bool XmlTextReader_get_Normalization_m620656126_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Normalization(System.Boolean)
extern "C"  void XmlTextReader_set_Normalization_m549008905_0 (XmlTextReader_t_801663646_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WhitespaceHandling System.Xml.XmlTextReader::get_WhitespaceHandling()
extern "C"  int32_t XmlTextReader_get_WhitespaceHandling_m1018541942_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C"  void XmlTextReader_set_WhitespaceHandling_m_1033551413_0 (XmlTextReader_t_801663646_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void XmlTextReader_set_XmlResolver_m1361477835_0 (XmlTextReader_t_801663646_0 * __this, XmlResolver_t_1510524520_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::SkipTextDeclaration()
extern "C"  void XmlTextReader_SkipTextDeclaration_m1645492832_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::Close()
extern "C"  void XmlTextReader_Close_m_12728054_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::GetAttribute(System.String)
extern "C"  String_t* XmlTextReader_GetAttribute_m1114364873_0 (XmlTextReader_t_801663646_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlTextReader_GetAttribute_m2094018629_0 (XmlTextReader_t_801663646_0 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::LookupNamespace(System.String)
extern "C"  String_t* XmlTextReader_LookupNamespace_m1106482418_0 (XmlTextReader_t_801663646_0 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::MoveToAttribute(System.Int32)
extern "C"  void XmlTextReader_MoveToAttribute_m_1715934221_0 (XmlTextReader_t_801663646_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String)
extern "C"  bool XmlTextReader_MoveToAttribute_m1020800680_0 (XmlTextReader_t_801663646_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlTextReader_MoveToAttribute_m1483116772_0 (XmlTextReader_t_801663646_0 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToElement()
extern "C"  bool XmlTextReader_MoveToElement_m455946810_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToFirstAttribute()
extern "C"  bool XmlTextReader_MoveToFirstAttribute_m442233840_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToNextAttribute()
extern "C"  bool XmlTextReader_MoveToNextAttribute_m_696546521_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::Read()
extern "C"  bool XmlTextReader_Read_m_506785554_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::ReadAttributeValue()
extern "C"  bool XmlTextReader_ReadAttributeValue_m_177966781_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::ResolveEntity()
extern "C"  void XmlTextReader_ResolveEntity_m1901828417_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CloseEntity()
extern "C"  void XmlTextReader_CloseEntity_m_2055095923_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::Skip()
extern "C"  void XmlTextReader_Skip_m_928924529_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.Xml.XmlTextReader::GetRemainder()
extern "C"  TextReader_t1262698173_0 * XmlTextReader_GetRemainder_m_1871372585_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::HasLineInfo()
extern "C"  bool XmlTextReader_HasLineInfo_m1644057030_0 (XmlTextReader_t_801663646_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
