#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;

#include "System_Xml_System_Xml_XmlReader1629164245.h"

// System.Xml.Schema.XmlSchemaReader
struct  XmlSchemaReader_t1816173011_0  : public XmlReader_t1629164245_0
{
	// System.Xml.XmlReader System.Xml.Schema.XmlSchemaReader::reader
	XmlReader_t1629164245_0 * ___reader_2;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaReader::handler
	ValidationEventHandler_t513619217_0 * ___handler_3;
	// System.Boolean System.Xml.Schema.XmlSchemaReader::hasLineInfo
	bool ___hasLineInfo_4;
};
