#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaAttribute[]
struct XmlSchemaAttributeU5BU5D_t_1799723026_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// System.Xml.XmlResolver
struct XmlResolver_t_1510524520_0;
// Mono.Xml.IHasXmlSchemaInfo
struct IHasXmlSchemaInfo_t804584836_0;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t970576597_0;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1801753938_0;
// Mono.Xml.Schema.XsdIDManager
struct XsdIDManager_t2118556933_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t_1471708465_0;
// System.Text.StringBuilder
struct StringBuilder_t586045924_0;
// System.Object
struct Object_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t_1305703446_0;

#include "System_Xml_System_Xml_XmlReader1629164245.h"
#include "System_Xml_System_Xml_ValidationType127825176.h"

// Mono.Xml.Schema.XsdValidatingReader
struct  XsdValidatingReader_t1035926723_0  : public XmlReader_t1629164245_0
{
	// System.Xml.XmlReader Mono.Xml.Schema.XsdValidatingReader::reader
	XmlReader_t1629164245_0 * ___reader_3;
	// System.Xml.XmlResolver Mono.Xml.Schema.XsdValidatingReader::resolver
	XmlResolver_t_1510524520_0 * ___resolver_4;
	// Mono.Xml.IHasXmlSchemaInfo Mono.Xml.Schema.XsdValidatingReader::sourceReaderSchemaInfo
	Object_t * ___sourceReaderSchemaInfo_5;
	// System.Xml.IXmlLineInfo Mono.Xml.Schema.XsdValidatingReader::readerLineInfo
	Object_t * ___readerLineInfo_6;
	// System.Xml.ValidationType Mono.Xml.Schema.XsdValidatingReader::validationType
	int32_t ___validationType_7;
	// System.Xml.Schema.XmlSchemaSet Mono.Xml.Schema.XsdValidatingReader::schemas
	XmlSchemaSet_t1801753938_0 * ___schemas_8;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::namespaces
	bool ___namespaces_9;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::validationStarted
	bool ___validationStarted_10;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::checkIdentity
	bool ___checkIdentity_11;
	// Mono.Xml.Schema.XsdIDManager Mono.Xml.Schema.XsdValidatingReader::idManager
	XsdIDManager_t2118556933_0 * ___idManager_12;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::checkKeyConstraints
	bool ___checkKeyConstraints_13;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::keyTables
	ArrayList_t536890563_0 * ___keyTables_14;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::currentKeyFieldConsumers
	ArrayList_t536890563_0 * ___currentKeyFieldConsumers_15;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::tmpKeyrefPool
	ArrayList_t536890563_0 * ___tmpKeyrefPool_16;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::elementQNameStack
	ArrayList_t536890563_0 * ___elementQNameStack_17;
	// Mono.Xml.Schema.XsdParticleStateManager Mono.Xml.Schema.XsdValidatingReader::state
	XsdParticleStateManager_t_1471708465_0 * ___state_18;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::skipValidationDepth
	int32_t ___skipValidationDepth_19;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::xsiNilDepth
	int32_t ___xsiNilDepth_20;
	// System.Text.StringBuilder Mono.Xml.Schema.XsdValidatingReader::storedCharacters
	StringBuilder_t586045924_0 * ___storedCharacters_21;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::shouldValidateCharacters
	bool ___shouldValidateCharacters_22;
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XsdValidatingReader::defaultAttributes
	XmlSchemaAttributeU5BU5D_t_1799723026_0* ___defaultAttributes_23;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::currentDefaultAttribute
	int32_t ___currentDefaultAttribute_24;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::defaultAttributesCache
	ArrayList_t536890563_0 * ___defaultAttributesCache_25;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::defaultAttributeConsumed
	bool ___defaultAttributeConsumed_26;
	// System.Object Mono.Xml.Schema.XsdValidatingReader::currentAttrType
	Object_t * ___currentAttrType_27;
	// System.Xml.Schema.ValidationEventHandler Mono.Xml.Schema.XsdValidatingReader::ValidationEventHandler
	ValidationEventHandler_t513619217_0 * ___ValidationEventHandler_28;
};
struct XsdValidatingReader_t1035926723_0_StaticFields{
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XsdValidatingReader::emptyAttributeArray
	XmlSchemaAttributeU5BU5D_t_1799723026_0* ___emptyAttributeArray_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map3
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map3_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map4
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map4_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map5
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map5_31;
};
