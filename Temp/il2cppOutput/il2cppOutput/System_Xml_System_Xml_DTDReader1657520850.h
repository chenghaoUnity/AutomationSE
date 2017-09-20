#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlParserInput
struct XmlParserInput_t847161369_0;
// System.Collections.Stack
struct Stack_t_1068416332_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;
// System.Text.StringBuilder
struct StringBuilder_t586045924_0;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;

#include "mscorlib_System_Object_887538054.h"

// System.Xml.DTDReader
struct  DTDReader_t1657520850_0  : public Object_t
{
	// System.Xml.XmlParserInput System.Xml.DTDReader::currentInput
	XmlParserInput_t847161369_0 * ___currentInput_0;
	// System.Collections.Stack System.Xml.DTDReader::parserInputStack
	Stack_t_1068416332_0 * ___parserInputStack_1;
	// System.Char[] System.Xml.DTDReader::nameBuffer
	CharU5BU5D_t_1225802637_0* ___nameBuffer_2;
	// System.Int32 System.Xml.DTDReader::nameLength
	int32_t ___nameLength_3;
	// System.Int32 System.Xml.DTDReader::nameCapacity
	int32_t ___nameCapacity_4;
	// System.Text.StringBuilder System.Xml.DTDReader::valueBuffer
	StringBuilder_t586045924_0 * ___valueBuffer_5;
	// System.Int32 System.Xml.DTDReader::currentLinkedNodeLineNumber
	int32_t ___currentLinkedNodeLineNumber_6;
	// System.Int32 System.Xml.DTDReader::currentLinkedNodeLinePosition
	int32_t ___currentLinkedNodeLinePosition_7;
	// System.Int32 System.Xml.DTDReader::dtdIncludeSect
	int32_t ___dtdIncludeSect_8;
	// System.Boolean System.Xml.DTDReader::normalization
	bool ___normalization_9;
	// System.Boolean System.Xml.DTDReader::processingInternalSubset
	bool ___processingInternalSubset_10;
	// System.String System.Xml.DTDReader::cachedPublicId
	String_t* ___cachedPublicId_11;
	// System.String System.Xml.DTDReader::cachedSystemId
	String_t* ___cachedSystemId_12;
	// Mono.Xml.DTDObjectModel System.Xml.DTDReader::DTD
	DTDObjectModel_t_2044825337_0 * ___DTD_13;
};
