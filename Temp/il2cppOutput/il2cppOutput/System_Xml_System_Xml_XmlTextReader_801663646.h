#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlTextReader
struct XmlTextReader_t_801663646_0;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t382834542_0;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t_352206353_0;

#include "System_Xml_System_Xml_XmlReader1629164245.h"

// System.Xml.XmlTextReader
struct  XmlTextReader_t_801663646_0  : public XmlReader_t1629164245_0
{
	// System.Xml.XmlTextReader System.Xml.XmlTextReader::entity
	XmlTextReader_t_801663646_0 * ___entity_2;
	// Mono.Xml2.XmlTextReader System.Xml.XmlTextReader::source
	XmlTextReader_t382834542_0 * ___source_3;
	// System.Boolean System.Xml.XmlTextReader::entityInsideAttribute
	bool ___entityInsideAttribute_4;
	// System.Boolean System.Xml.XmlTextReader::insideAttribute
	bool ___insideAttribute_5;
	// System.Collections.Generic.Stack`1<System.String> System.Xml.XmlTextReader::entityNameStack
	Stack_1_t_352206353_0 * ___entityNameStack_6;
};
