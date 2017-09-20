#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t952581733_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// System.Xml.XmlParserContext
struct XmlParserContext_t1369943614_0;
// System.Xml.XmlResolver
struct XmlResolver_t_1510524520_0;

#include "System_Xml_System_Xml_XmlReader1629164245.h"
#include "System_Xml_System_Xml_EntityHandling150823853.h"

// Mono.Xml.EntityResolvingXmlReader
struct  EntityResolvingXmlReader_t952581733_0  : public XmlReader_t1629164245_0
{
	// Mono.Xml.EntityResolvingXmlReader Mono.Xml.EntityResolvingXmlReader::entity
	EntityResolvingXmlReader_t952581733_0 * ___entity_2;
	// System.Xml.XmlReader Mono.Xml.EntityResolvingXmlReader::source
	XmlReader_t1629164245_0 * ___source_3;
	// System.Xml.XmlParserContext Mono.Xml.EntityResolvingXmlReader::context
	XmlParserContext_t1369943614_0 * ___context_4;
	// System.Xml.XmlResolver Mono.Xml.EntityResolvingXmlReader::resolver
	XmlResolver_t_1510524520_0 * ___resolver_5;
	// System.Xml.EntityHandling Mono.Xml.EntityResolvingXmlReader::entity_handling
	int32_t ___entity_handling_6;
	// System.Boolean Mono.Xml.EntityResolvingXmlReader::entity_inside_attr
	bool ___entity_inside_attr_7;
	// System.Boolean Mono.Xml.EntityResolvingXmlReader::inside_attr
	bool ___inside_attr_8;
	// System.Boolean Mono.Xml.EntityResolvingXmlReader::do_resolve
	bool ___do_resolve_9;
};
