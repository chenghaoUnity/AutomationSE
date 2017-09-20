#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml2.XmlTextReader/XmlTokenInfo
struct XmlTokenInfo_t_2023794415_0;
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo
struct XmlAttributeTokenInfo_t_1068913791_0;
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo[]
struct XmlAttributeTokenInfoU5BU5D_t_728966493_0;
// Mono.Xml2.XmlTextReader/XmlTokenInfo[]
struct XmlTokenInfoU5BU5D_t753755187_0;
// System.Xml.XmlParserContext
struct XmlParserContext_t1369943614_0;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1115255140_0;
// Mono.Xml2.XmlTextReader/TagName[]
struct TagNameU5BU5D_t349022694_0;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t586045924_0;
// System.IO.TextReader
struct TextReader_t1262698173_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;
// System.Xml.XmlReaderBinarySupport/CharGetter
struct CharGetter_t1560414263_0;
// System.Xml.XmlResolver
struct XmlResolver_t_1510524520_0;
// System.Xml.NameTable
struct NameTable_t205740830_0;
// Mono.Xml2.XmlTextReader/DtdInputStateStack
struct DtdInputStateStack_t941679566_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t_1305703446_0;

#include "System_Xml_System_Xml_XmlReader1629164245.h"
#include "System_Xml_System_Xml_ReadState_2141932618.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"
#include "System_Xml_System_Xml_WhitespaceHandling193147335.h"
#include "System_Xml_System_Xml_EntityHandling150823853.h"

// Mono.Xml2.XmlTextReader
struct  XmlTextReader_t382834542_0  : public XmlReader_t1629164245_0
{
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::cursorToken
	XmlTokenInfo_t_2023794415_0 * ___cursorToken_2;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::currentToken
	XmlTokenInfo_t_2023794415_0 * ___currentToken_3;
	// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo Mono.Xml2.XmlTextReader::currentAttributeToken
	XmlAttributeTokenInfo_t_1068913791_0 * ___currentAttributeToken_4;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::currentAttributeValueToken
	XmlTokenInfo_t_2023794415_0 * ___currentAttributeValueToken_5;
	// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo[] Mono.Xml2.XmlTextReader::attributeTokens
	XmlAttributeTokenInfoU5BU5D_t_728966493_0* ___attributeTokens_6;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo[] Mono.Xml2.XmlTextReader::attributeValueTokens
	XmlTokenInfoU5BU5D_t753755187_0* ___attributeValueTokens_7;
	// System.Int32 Mono.Xml2.XmlTextReader::currentAttribute
	int32_t ___currentAttribute_8;
	// System.Int32 Mono.Xml2.XmlTextReader::currentAttributeValue
	int32_t ___currentAttributeValue_9;
	// System.Int32 Mono.Xml2.XmlTextReader::attributeCount
	int32_t ___attributeCount_10;
	// System.Xml.XmlParserContext Mono.Xml2.XmlTextReader::parserContext
	XmlParserContext_t1369943614_0 * ___parserContext_11;
	// System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::nameTable
	XmlNameTable_t_662182735_0 * ___nameTable_12;
	// System.Xml.XmlNamespaceManager Mono.Xml2.XmlTextReader::nsmgr
	XmlNamespaceManager_t1115255140_0 * ___nsmgr_13;
	// System.Xml.ReadState Mono.Xml2.XmlTextReader::readState
	int32_t ___readState_14;
	// System.Boolean Mono.Xml2.XmlTextReader::disallowReset
	bool ___disallowReset_15;
	// System.Int32 Mono.Xml2.XmlTextReader::depth
	int32_t ___depth_16;
	// System.Int32 Mono.Xml2.XmlTextReader::elementDepth
	int32_t ___elementDepth_17;
	// System.Boolean Mono.Xml2.XmlTextReader::depthUp
	bool ___depthUp_18;
	// System.Boolean Mono.Xml2.XmlTextReader::popScope
	bool ___popScope_19;
	// Mono.Xml2.XmlTextReader/TagName[] Mono.Xml2.XmlTextReader::elementNames
	TagNameU5BU5D_t349022694_0* ___elementNames_20;
	// System.Int32 Mono.Xml2.XmlTextReader::elementNameStackPos
	int32_t ___elementNameStackPos_21;
	// System.Boolean Mono.Xml2.XmlTextReader::allowMultipleRoot
	bool ___allowMultipleRoot_22;
	// System.Boolean Mono.Xml2.XmlTextReader::isStandalone
	bool ___isStandalone_23;
	// System.Boolean Mono.Xml2.XmlTextReader::returnEntityReference
	bool ___returnEntityReference_24;
	// System.String Mono.Xml2.XmlTextReader::entityReferenceName
	String_t* ___entityReferenceName_25;
	// System.Text.StringBuilder Mono.Xml2.XmlTextReader::valueBuffer
	StringBuilder_t586045924_0 * ___valueBuffer_26;
	// System.IO.TextReader Mono.Xml2.XmlTextReader::reader
	TextReader_t1262698173_0 * ___reader_27;
	// System.Char[] Mono.Xml2.XmlTextReader::peekChars
	CharU5BU5D_t_1225802637_0* ___peekChars_28;
	// System.Int32 Mono.Xml2.XmlTextReader::peekCharsIndex
	int32_t ___peekCharsIndex_29;
	// System.Int32 Mono.Xml2.XmlTextReader::peekCharsLength
	int32_t ___peekCharsLength_30;
	// System.Int32 Mono.Xml2.XmlTextReader::curNodePeekIndex
	int32_t ___curNodePeekIndex_31;
	// System.Boolean Mono.Xml2.XmlTextReader::preserveCurrentTag
	bool ___preserveCurrentTag_32;
	// System.Int32 Mono.Xml2.XmlTextReader::line
	int32_t ___line_33;
	// System.Int32 Mono.Xml2.XmlTextReader::column
	int32_t ___column_34;
	// System.Int32 Mono.Xml2.XmlTextReader::currentLinkedNodeLineNumber
	int32_t ___currentLinkedNodeLineNumber_35;
	// System.Int32 Mono.Xml2.XmlTextReader::currentLinkedNodeLinePosition
	int32_t ___currentLinkedNodeLinePosition_36;
	// System.Boolean Mono.Xml2.XmlTextReader::useProceedingLineInfo
	bool ___useProceedingLineInfo_37;
	// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::startNodeType
	int32_t ___startNodeType_38;
	// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::currentState
	int32_t ___currentState_39;
	// System.Int32 Mono.Xml2.XmlTextReader::nestLevel
	int32_t ___nestLevel_40;
	// System.Boolean Mono.Xml2.XmlTextReader::readCharsInProgress
	bool ___readCharsInProgress_41;
	// System.Xml.XmlReaderBinarySupport/CharGetter Mono.Xml2.XmlTextReader::binaryCharGetter
	CharGetter_t1560414263_0 * ___binaryCharGetter_42;
	// System.Boolean Mono.Xml2.XmlTextReader::namespaces
	bool ___namespaces_43;
	// System.Xml.WhitespaceHandling Mono.Xml2.XmlTextReader::whitespaceHandling
	int32_t ___whitespaceHandling_44;
	// System.Xml.XmlResolver Mono.Xml2.XmlTextReader::resolver
	XmlResolver_t_1510524520_0 * ___resolver_45;
	// System.Boolean Mono.Xml2.XmlTextReader::normalization
	bool ___normalization_46;
	// System.Boolean Mono.Xml2.XmlTextReader::checkCharacters
	bool ___checkCharacters_47;
	// System.Boolean Mono.Xml2.XmlTextReader::prohibitDtd
	bool ___prohibitDtd_48;
	// System.Boolean Mono.Xml2.XmlTextReader::closeInput
	bool ___closeInput_49;
	// System.Xml.EntityHandling Mono.Xml2.XmlTextReader::entityHandling
	int32_t ___entityHandling_50;
	// System.Xml.NameTable Mono.Xml2.XmlTextReader::whitespacePool
	NameTable_t205740830_0 * ___whitespacePool_51;
	// System.Char[] Mono.Xml2.XmlTextReader::whitespaceCache
	CharU5BU5D_t_1225802637_0* ___whitespaceCache_52;
	// Mono.Xml2.XmlTextReader/DtdInputStateStack Mono.Xml2.XmlTextReader::stateStack
	DtdInputStateStack_t941679566_0 * ___stateStack_53;
};
struct XmlTextReader_t382834542_0_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml2.XmlTextReader::<>f__switch$map38
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map38_54;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml2.XmlTextReader::<>f__switch$map39
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map39_55;
};
