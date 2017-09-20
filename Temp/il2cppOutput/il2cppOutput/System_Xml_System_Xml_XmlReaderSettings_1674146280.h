#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1801753938_0;

#include "mscorlib_System_Object_887538054.h"
#include "System_Xml_System_Xml_ConformanceLevel312386932.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaValidationF_1960703362.h"

// System.Xml.XmlReaderSettings
struct  XmlReaderSettings_t_1674146280_0  : public Object_t
{
	// System.Boolean System.Xml.XmlReaderSettings::checkCharacters
	bool ___checkCharacters_0;
	// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::conformance
	int32_t ___conformance_1;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlReaderSettings::schemas
	XmlSchemaSet_t1801753938_0 * ___schemas_2;
	// System.Boolean System.Xml.XmlReaderSettings::schemasNeedsInitialization
	bool ___schemasNeedsInitialization_3;
	// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.XmlReaderSettings::validationFlags
	int32_t ___validationFlags_4;
};
