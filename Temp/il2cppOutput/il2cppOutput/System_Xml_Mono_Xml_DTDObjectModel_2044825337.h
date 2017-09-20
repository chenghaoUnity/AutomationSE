#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t1424408855_0;
// Mono.Xml.DTDElementAutomata
struct DTDElementAutomata_t1581113257_0;
// Mono.Xml.DTDEmptyAutomata
struct DTDEmptyAutomata_t_1566992326_0;
// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t_1552645863_0;
// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t206669732_0;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t_292744737_0;
// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t1783735772_0;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t_824511761_0;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t_493668494_0;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t_1742154381_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.Xml.XmlResolver
struct XmlResolver_t_1510524520_0;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Collections.Hashtable
struct Hashtable_t_2004451924_0;
// System.String
struct String_t;

#include "mscorlib_System_Object_887538054.h"

// Mono.Xml.DTDObjectModel
struct  DTDObjectModel_t_2044825337_0  : public Object_t
{
	// Mono.Xml.DTDAutomataFactory Mono.Xml.DTDObjectModel::factory
	DTDAutomataFactory_t1424408855_0 * ___factory_0;
	// Mono.Xml.DTDElementAutomata Mono.Xml.DTDObjectModel::rootAutomata
	DTDElementAutomata_t1581113257_0 * ___rootAutomata_1;
	// Mono.Xml.DTDEmptyAutomata Mono.Xml.DTDObjectModel::emptyAutomata
	DTDEmptyAutomata_t_1566992326_0 * ___emptyAutomata_2;
	// Mono.Xml.DTDAnyAutomata Mono.Xml.DTDObjectModel::anyAutomata
	DTDAnyAutomata_t_1552645863_0 * ___anyAutomata_3;
	// Mono.Xml.DTDInvalidAutomata Mono.Xml.DTDObjectModel::invalidAutomata
	DTDInvalidAutomata_t206669732_0 * ___invalidAutomata_4;
	// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::elementDecls
	DTDElementDeclarationCollection_t_292744737_0 * ___elementDecls_5;
	// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::attListDecls
	DTDAttListDeclarationCollection_t1783735772_0 * ___attListDecls_6;
	// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::peDecls
	DTDParameterEntityDeclarationCollection_t_824511761_0 * ___peDecls_7;
	// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::entityDecls
	DTDEntityDeclarationCollection_t_493668494_0 * ___entityDecls_8;
	// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::notationDecls
	DTDNotationDeclarationCollection_t_1742154381_0 * ___notationDecls_9;
	// System.Collections.ArrayList Mono.Xml.DTDObjectModel::validationErrors
	ArrayList_t536890563_0 * ___validationErrors_10;
	// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::resolver
	XmlResolver_t_1510524520_0 * ___resolver_11;
	// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::nameTable
	XmlNameTable_t_662182735_0 * ___nameTable_12;
	// System.Collections.Hashtable Mono.Xml.DTDObjectModel::externalResources
	Hashtable_t_2004451924_0 * ___externalResources_13;
	// System.String Mono.Xml.DTDObjectModel::baseURI
	String_t* ___baseURI_14;
	// System.String Mono.Xml.DTDObjectModel::name
	String_t* ___name_15;
	// System.String Mono.Xml.DTDObjectModel::publicId
	String_t* ___publicId_16;
	// System.String Mono.Xml.DTDObjectModel::systemId
	String_t* ___systemId_17;
	// System.String Mono.Xml.DTDObjectModel::intSubset
	String_t* ___intSubset_18;
	// System.Boolean Mono.Xml.DTDObjectModel::intSubsetHasPERef
	bool ___intSubsetHasPERef_19;
	// System.Boolean Mono.Xml.DTDObjectModel::isStandalone
	bool ___isStandalone_20;
	// System.Int32 Mono.Xml.DTDObjectModel::lineNumber
	int32_t ___lineNumber_21;
	// System.Int32 Mono.Xml.DTDObjectModel::linePosition
	int32_t ___linePosition_22;
};
