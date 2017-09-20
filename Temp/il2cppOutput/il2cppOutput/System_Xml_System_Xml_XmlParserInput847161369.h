#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Stack
struct Stack_t_1068416332_0;
// System.Xml.XmlParserInput/XmlParserInputSource
struct XmlParserInputSource_t1006483429_0;

#include "mscorlib_System_Object_887538054.h"

// System.Xml.XmlParserInput
struct  XmlParserInput_t847161369_0  : public Object_t
{
	// System.Collections.Stack System.Xml.XmlParserInput::sourceStack
	Stack_t_1068416332_0 * ___sourceStack_0;
	// System.Xml.XmlParserInput/XmlParserInputSource System.Xml.XmlParserInput::source
	XmlParserInputSource_t1006483429_0 * ___source_1;
	// System.Boolean System.Xml.XmlParserInput::has_peek
	bool ___has_peek_2;
	// System.Int32 System.Xml.XmlParserInput::peek_char
	int32_t ___peek_char_3;
	// System.Boolean System.Xml.XmlParserInput::allowTextDecl
	bool ___allowTextDecl_4;
};
