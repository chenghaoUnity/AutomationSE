#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Serialization.TypeData
struct TypeData_t1494685479_0;
// System.Xml.Schema.XmlSchemaPatternFacet
struct XmlSchemaPatternFacet_t837683479_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;

#include "mscorlib_System_Object_887538054.h"
#include "System_Xml_System_Xml_Serialization_SchemaTypes_941586603.h"

// System.Xml.Serialization.TypeData
struct  TypeData_t1494685479_0  : public Object_t
{
	// System.Type System.Xml.Serialization.TypeData::type
	Type_t * ___type_0;
	// System.String System.Xml.Serialization.TypeData::elementName
	String_t* ___elementName_1;
	// System.Xml.Serialization.SchemaTypes System.Xml.Serialization.TypeData::sType
	int32_t ___sType_2;
	// System.Type System.Xml.Serialization.TypeData::listItemType
	Type_t * ___listItemType_3;
	// System.String System.Xml.Serialization.TypeData::typeName
	String_t* ___typeName_4;
	// System.String System.Xml.Serialization.TypeData::fullTypeName
	String_t* ___fullTypeName_5;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeData::listItemTypeData
	TypeData_t1494685479_0 * ___listItemTypeData_6;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeData::mappedType
	TypeData_t1494685479_0 * ___mappedType_7;
	// System.Xml.Schema.XmlSchemaPatternFacet System.Xml.Serialization.TypeData::facet
	XmlSchemaPatternFacet_t837683479_0 * ___facet_8;
	// System.Boolean System.Xml.Serialization.TypeData::hasPublicConstructor
	bool ___hasPublicConstructor_9;
	// System.Boolean System.Xml.Serialization.TypeData::nullableOverride
	bool ___nullableOverride_10;
};
struct TypeData_t1494685479_0_StaticFields{
	// System.String[] System.Xml.Serialization.TypeData::keywords
	StringU5BU5D_t_816028754_0* ___keywords_11;
};
