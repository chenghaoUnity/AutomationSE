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
// System.Xml.XmlTextReader
struct XmlTextReader_t_801663646_0;
// System.Xml.XmlResolver
struct XmlResolver_t_1510524520_0;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t1535764398_0;
// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t_715093191_0;
// Mono.Xml.IHasXmlSchemaInfo
struct IHasXmlSchemaInfo_t804584836_0;
// System.Text.StringBuilder
struct StringBuilder_t586045924_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;

#include "System_Xml_System_Xml_XmlReader1629164245.h"
#include "System_Xml_System_Xml_EntityHandling150823853.h"
#include "System_Xml_System_Xml_ValidationType127825176.h"

// System.Xml.XmlValidatingReader
struct  XmlValidatingReader_t_2119528824_0  : public XmlReader_t1629164245_0
{
	// System.Xml.EntityHandling System.Xml.XmlValidatingReader::entityHandling
	int32_t ___entityHandling_2;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::sourceReader
	XmlReader_t1629164245_0 * ___sourceReader_3;
	// System.Xml.XmlTextReader System.Xml.XmlValidatingReader::xmlTextReader
	XmlTextReader_t_801663646_0 * ___xmlTextReader_4;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::validatingReader
	XmlReader_t1629164245_0 * ___validatingReader_5;
	// System.Xml.XmlResolver System.Xml.XmlValidatingReader::resolver
	XmlResolver_t_1510524520_0 * ___resolver_6;
	// System.Boolean System.Xml.XmlValidatingReader::resolverSpecified
	bool ___resolverSpecified_7;
	// System.Xml.ValidationType System.Xml.XmlValidatingReader::validationType
	int32_t ___validationType_8;
	// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::schemas
	XmlSchemaCollection_t1535764398_0 * ___schemas_9;
	// Mono.Xml.DTDValidatingReader System.Xml.XmlValidatingReader::dtdReader
	DTDValidatingReader_t_715093191_0 * ___dtdReader_10;
	// Mono.Xml.IHasXmlSchemaInfo System.Xml.XmlValidatingReader::schemaInfo
	Object_t * ___schemaInfo_11;
	// System.Text.StringBuilder System.Xml.XmlValidatingReader::storedCharacters
	StringBuilder_t586045924_0 * ___storedCharacters_12;
	// System.Xml.Schema.ValidationEventHandler System.Xml.XmlValidatingReader::ValidationEventHandler
	ValidationEventHandler_t513619217_0 * ___ValidationEventHandler_13;
};
