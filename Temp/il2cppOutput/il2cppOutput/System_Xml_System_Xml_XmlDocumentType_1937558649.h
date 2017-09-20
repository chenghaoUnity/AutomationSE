#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t_1798706413_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;

#include "System_Xml_System_Xml_XmlLinkedNode_1267764019.h"

// System.Xml.XmlDocumentType
struct  XmlDocumentType_t_1937558649_0  : public XmlLinkedNode_t_1267764019_0
{
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::entities
	XmlNamedNodeMap_t_1798706413_0 * ___entities_6;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::notations
	XmlNamedNodeMap_t_1798706413_0 * ___notations_7;
	// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::dtd
	DTDObjectModel_t_2044825337_0 * ___dtd_8;
};
