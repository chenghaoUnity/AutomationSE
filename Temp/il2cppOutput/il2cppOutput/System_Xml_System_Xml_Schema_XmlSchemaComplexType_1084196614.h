#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t313454368_0;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t_636905395_0;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1517207743_0;
// System.Xml.Schema.XmlSchemaContentModel
struct XmlSchemaContentModel_t1874784064_0;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t_653546602_0;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t_1084196614_0;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;

#include "System_Xml_System_Xml_Schema_XmlSchemaType19846218.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe1167302024.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentType_1878967229.h"
#include "mscorlib_System_Guid_224607100.h"

// System.Xml.Schema.XmlSchemaComplexType
struct  XmlSchemaComplexType_t_1084196614_0  : public XmlSchemaType_t19846218_0
{
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaComplexType::anyAttribute
	XmlSchemaAnyAttribute_t313454368_0 * ___anyAttribute_28;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaComplexType::attributes
	XmlSchemaObjectCollection_t_636905395_0 * ___attributes_29;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaComplexType::attributeUses
	XmlSchemaObjectTable_t1517207743_0 * ___attributeUses_30;
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaComplexType::attributeWildcard
	XmlSchemaAnyAttribute_t313454368_0 * ___attributeWildcard_31;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaComplexType::block
	int32_t ___block_32;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaComplexType::blockResolved
	int32_t ___blockResolved_33;
	// System.Xml.Schema.XmlSchemaContentModel System.Xml.Schema.XmlSchemaComplexType::contentModel
	XmlSchemaContentModel_t1874784064_0 * ___contentModel_34;
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexType::validatableParticle
	XmlSchemaParticle_t_653546602_0 * ___validatableParticle_35;
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexType::contentTypeParticle
	XmlSchemaParticle_t_653546602_0 * ___contentTypeParticle_36;
	// System.Boolean System.Xml.Schema.XmlSchemaComplexType::isAbstract
	bool ___isAbstract_37;
	// System.Boolean System.Xml.Schema.XmlSchemaComplexType::isMixed
	bool ___isMixed_38;
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexType::particle
	XmlSchemaParticle_t_653546602_0 * ___particle_39;
	// System.Xml.Schema.XmlSchemaContentType System.Xml.Schema.XmlSchemaComplexType::resolvedContentType
	int32_t ___resolvedContentType_40;
	// System.Boolean System.Xml.Schema.XmlSchemaComplexType::ValidatedIsAbstract
	bool ___ValidatedIsAbstract_41;
	// System.Guid System.Xml.Schema.XmlSchemaComplexType::CollectProcessId
	Guid_t_224607100_0  ___CollectProcessId_44;
};
struct XmlSchemaComplexType_t_1084196614_0_StaticFields{
	// System.Xml.Schema.XmlSchemaComplexType System.Xml.Schema.XmlSchemaComplexType::anyType
	XmlSchemaComplexType_t_1084196614_0 * ___anyType_42;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaComplexType::AnyTypeName
	XmlQualifiedName_t_2082775307_0 * ___AnyTypeName_43;
};
