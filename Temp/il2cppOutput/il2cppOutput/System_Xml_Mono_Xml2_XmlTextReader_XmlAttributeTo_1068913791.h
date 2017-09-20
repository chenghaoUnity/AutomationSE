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
// System.Text.StringBuilder
struct StringBuilder_t586045924_0;

#include "System_Xml_Mono_Xml2_XmlTextReader_XmlTokenInfo_2023794415.h"

// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo
struct  XmlAttributeTokenInfo_t_1068913791_0  : public XmlTokenInfo_t_2023794415_0
{
	// System.Int32 Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::ValueTokenStartIndex
	int32_t ___ValueTokenStartIndex_13;
	// System.Int32 Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::ValueTokenEndIndex
	int32_t ___ValueTokenEndIndex_14;
	// System.String Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::valueCache
	String_t* ___valueCache_15;
	// System.Text.StringBuilder Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo::tmpBuilder
	StringBuilder_t586045924_0 * ___tmpBuilder_16;
};
