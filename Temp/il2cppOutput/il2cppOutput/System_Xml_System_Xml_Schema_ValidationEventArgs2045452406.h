#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t201864511_0;
// System.String
struct String_t;

#include "mscorlib_System_EventArgs693055868.h"
#include "System_Xml_System_Xml_Schema_XmlSeverityType_608244762.h"

// System.Xml.Schema.ValidationEventArgs
struct  ValidationEventArgs_t2045452406_0  : public EventArgs_t693055868_0
{
	// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::exception
	XmlSchemaException_t201864511_0 * ___exception_1;
	// System.String System.Xml.Schema.ValidationEventArgs::message
	String_t* ___message_2;
	// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::severity
	int32_t ___severity_3;
};
