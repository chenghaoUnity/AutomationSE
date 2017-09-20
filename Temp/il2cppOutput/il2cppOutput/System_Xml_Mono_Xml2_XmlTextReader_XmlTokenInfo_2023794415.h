#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t382834542_0;

#include "mscorlib_System_Object_887538054.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"

// Mono.Xml2.XmlTextReader/XmlTokenInfo
struct  XmlTokenInfo_t_2023794415_0  : public Object_t
{
	// System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::valueCache
	String_t* ___valueCache_0;
	// Mono.Xml2.XmlTextReader Mono.Xml2.XmlTextReader/XmlTokenInfo::Reader
	XmlTextReader_t382834542_0 * ___Reader_1;
	// System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::Name
	String_t* ___Name_2;
	// System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::LocalName
	String_t* ___LocalName_3;
	// System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::Prefix
	String_t* ___Prefix_4;
	// System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::NamespaceURI
	String_t* ___NamespaceURI_5;
	// System.Boolean Mono.Xml2.XmlTextReader/XmlTokenInfo::IsEmptyElement
	bool ___IsEmptyElement_6;
	// System.Char Mono.Xml2.XmlTextReader/XmlTokenInfo::QuoteChar
	uint16_t ___QuoteChar_7;
	// System.Int32 Mono.Xml2.XmlTextReader/XmlTokenInfo::LineNumber
	int32_t ___LineNumber_8;
	// System.Int32 Mono.Xml2.XmlTextReader/XmlTokenInfo::LinePosition
	int32_t ___LinePosition_9;
	// System.Int32 Mono.Xml2.XmlTextReader/XmlTokenInfo::ValueBufferStart
	int32_t ___ValueBufferStart_10;
	// System.Int32 Mono.Xml2.XmlTextReader/XmlTokenInfo::ValueBufferEnd
	int32_t ___ValueBufferEnd_11;
	// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader/XmlTokenInfo::NodeType
	int32_t ___NodeType_12;
};
