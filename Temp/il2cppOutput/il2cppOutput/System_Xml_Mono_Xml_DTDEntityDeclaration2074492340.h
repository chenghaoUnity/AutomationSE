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
// System.Collections.ArrayList
struct ArrayList_t536890563_0;

#include "System_Xml_Mono_Xml_DTDEntityBase1817357271.h"

// Mono.Xml.DTDEntityDeclaration
struct  DTDEntityDeclaration_t2074492340_0  : public DTDEntityBase_t1817357271_0
{
	// System.String Mono.Xml.DTDEntityDeclaration::entityValue
	String_t* ___entityValue_15;
	// System.String Mono.Xml.DTDEntityDeclaration::notationName
	String_t* ___notationName_16;
	// System.Collections.ArrayList Mono.Xml.DTDEntityDeclaration::ReferencingEntities
	ArrayList_t536890563_0 * ___ReferencingEntities_17;
	// System.Boolean Mono.Xml.DTDEntityDeclaration::scanned
	bool ___scanned_18;
	// System.Boolean Mono.Xml.DTDEntityDeclaration::recursed
	bool ___recursed_19;
	// System.Boolean Mono.Xml.DTDEntityDeclaration::hasExternalReference
	bool ___hasExternalReference_20;
};
