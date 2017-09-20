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
// System.Text.Encoding
struct Encoding_t453909881_0;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1115255140_0;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;

#include "mscorlib_System_Object_887538054.h"
#include "System_Xml_System_Xml_XmlSpace_638931788.h"

// System.Xml.XmlParserContext
struct  XmlParserContext_t1369943614_0  : public Object_t
{
	// System.String System.Xml.XmlParserContext::baseURI
	String_t* ___baseURI_0;
	// System.String System.Xml.XmlParserContext::docTypeName
	String_t* ___docTypeName_1;
	// System.Text.Encoding System.Xml.XmlParserContext::encoding
	Encoding_t453909881_0 * ___encoding_2;
	// System.String System.Xml.XmlParserContext::internalSubset
	String_t* ___internalSubset_3;
	// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::namespaceManager
	XmlNamespaceManager_t1115255140_0 * ___namespaceManager_4;
	// System.Xml.XmlNameTable System.Xml.XmlParserContext::nameTable
	XmlNameTable_t_662182735_0 * ___nameTable_5;
	// System.String System.Xml.XmlParserContext::publicID
	String_t* ___publicID_6;
	// System.String System.Xml.XmlParserContext::systemID
	String_t* ___systemID_7;
	// System.String System.Xml.XmlParserContext::xmlLang
	String_t* ___xmlLang_8;
	// System.Xml.XmlSpace System.Xml.XmlParserContext::xmlSpace
	int32_t ___xmlSpace_9;
	// System.Collections.ArrayList System.Xml.XmlParserContext::contextItems
	ArrayList_t536890563_0 * ___contextItems_10;
	// System.Int32 System.Xml.XmlParserContext::contextItemCount
	int32_t ___contextItemCount_11;
	// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::dtd
	DTDObjectModel_t_2044825337_0 * ___dtd_12;
};
