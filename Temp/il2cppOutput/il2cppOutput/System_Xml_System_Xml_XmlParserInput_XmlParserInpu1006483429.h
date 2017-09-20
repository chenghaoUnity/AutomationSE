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
// System.IO.TextReader
struct TextReader_t1262698173_0;

#include "mscorlib_System_Object_887538054.h"

// System.Xml.XmlParserInput/XmlParserInputSource
struct  XmlParserInputSource_t1006483429_0  : public Object_t
{
	// System.String System.Xml.XmlParserInput/XmlParserInputSource::BaseURI
	String_t* ___BaseURI_0;
	// System.IO.TextReader System.Xml.XmlParserInput/XmlParserInputSource::reader
	TextReader_t1262698173_0 * ___reader_1;
	// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::state
	int32_t ___state_2;
	// System.Boolean System.Xml.XmlParserInput/XmlParserInputSource::isPE
	bool ___isPE_3;
	// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::line
	int32_t ___line_4;
	// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::column
	int32_t ___column_5;
};
