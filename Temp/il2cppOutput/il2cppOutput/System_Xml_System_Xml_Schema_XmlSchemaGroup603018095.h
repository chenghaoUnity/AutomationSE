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
// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t1531674336_0;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;

#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated55549320.h"

// System.Xml.Schema.XmlSchemaGroup
struct  XmlSchemaGroup_t603018095_0  : public XmlSchemaAnnotated_t55549320_0
{
	// System.String System.Xml.Schema.XmlSchemaGroup::name
	String_t* ___name_16;
	// System.Xml.Schema.XmlSchemaGroupBase System.Xml.Schema.XmlSchemaGroup::particle
	XmlSchemaGroupBase_t1531674336_0 * ___particle_17;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaGroup::qualifiedName
	XmlQualifiedName_t_2082775307_0 * ___qualifiedName_18;
	// System.Boolean System.Xml.Schema.XmlSchemaGroup::isCircularDefinition
	bool ___isCircularDefinition_19;
};
