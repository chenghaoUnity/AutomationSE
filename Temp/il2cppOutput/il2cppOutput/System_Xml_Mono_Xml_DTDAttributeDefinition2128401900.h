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
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t_52373772_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;

#include "System_Xml_Mono_Xml_DTDNode_138181947.h"
#include "System_Xml_Mono_Xml_DTDAttributeOccurenceType1932995928.h"

// Mono.Xml.DTDAttributeDefinition
struct  DTDAttributeDefinition_t2128401900_0  : public DTDNode_t_138181947_0
{
	// System.String Mono.Xml.DTDAttributeDefinition::name
	String_t* ___name_5;
	// System.Xml.Schema.XmlSchemaDatatype Mono.Xml.DTDAttributeDefinition::datatype
	XmlSchemaDatatype_t_52373772_0 * ___datatype_6;
	// System.Collections.ArrayList Mono.Xml.DTDAttributeDefinition::enumeratedLiterals
	ArrayList_t536890563_0 * ___enumeratedLiterals_7;
	// System.String Mono.Xml.DTDAttributeDefinition::unresolvedDefault
	String_t* ___unresolvedDefault_8;
	// System.Collections.ArrayList Mono.Xml.DTDAttributeDefinition::enumeratedNotations
	ArrayList_t536890563_0 * ___enumeratedNotations_9;
	// Mono.Xml.DTDAttributeOccurenceType Mono.Xml.DTDAttributeDefinition::occurenceType
	int32_t ___occurenceType_10;
	// System.String Mono.Xml.DTDAttributeDefinition::resolvedDefaultValue
	String_t* ___resolvedDefaultValue_11;
};
