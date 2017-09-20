#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type[]
struct TypeU5BU5D_t_722972841_0;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.String
struct String_t;
// System.Xml.XmlImplementation
struct XmlImplementation_t2107716548_0;
// System.Xml.XmlResolver
struct XmlResolver_t_1510524520_0;
// System.Collections.Hashtable
struct Hashtable_t_2004451924_0;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t_1959421139_0;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t_1267764019_0;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1801753938_0;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1704224293_0;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t_464324880_0;

#include "System_Xml_System_Xml_XmlNode_990591852.h"

// System.Xml.XmlDocument
struct  XmlDocument_t_307474771_0  : public XmlNode_t_990591852_0
{
	// System.Boolean System.Xml.XmlDocument::optimal_create_element
	bool ___optimal_create_element_6;
	// System.Boolean System.Xml.XmlDocument::optimal_create_attribute
	bool ___optimal_create_attribute_7;
	// System.Xml.XmlNameTable System.Xml.XmlDocument::nameTable
	XmlNameTable_t_662182735_0 * ___nameTable_8;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_9;
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t2107716548_0 * ___implementation_10;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_11;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t_1510524520_0 * ___resolver_12;
	// System.Collections.Hashtable System.Xml.XmlDocument::idTable
	Hashtable_t_2004451924_0 * ___idTable_13;
	// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::nameCache
	XmlNameEntryCache_t_1959421139_0 * ___nameCache_14;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastLinkedChild
	XmlLinkedNode_t_1267764019_0 * ___lastLinkedChild_15;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t1801753938_0 * ___schemas_16;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::schemaInfo
	Object_t * ___schemaInfo_17;
	// System.Boolean System.Xml.XmlDocument::loadMode
	bool ___loadMode_18;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanged
	XmlNodeChangedEventHandler_t_464324880_0 * ___NodeChanged_19;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanging
	XmlNodeChangedEventHandler_t_464324880_0 * ___NodeChanging_20;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserted
	XmlNodeChangedEventHandler_t_464324880_0 * ___NodeInserted_21;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserting
	XmlNodeChangedEventHandler_t_464324880_0 * ___NodeInserting_22;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoved
	XmlNodeChangedEventHandler_t_464324880_0 * ___NodeRemoved_23;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoving
	XmlNodeChangedEventHandler_t_464324880_0 * ___NodeRemoving_24;
};
struct XmlDocument_t_307474771_0_StaticFields{
	// System.Type[] System.Xml.XmlDocument::optimal_create_types
	TypeU5BU5D_t_722972841_0* ___optimal_create_types_5;
};
