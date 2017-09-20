#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1845511452_0;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t_636905395_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Text.RegularExpressions.Regex[]
struct RegexU5BU5D_t_650675251_0;
// System.Object
struct Object_t;

#include "System_Xml_System_Xml_Schema_XmlSchemaSimpleTypeCo2074660797.h"
#include "mscorlib_System_Decimal1458036598.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet688014383.h"
#include "mscorlib_System_Globalization_NumberStyles_1056602413.h"

// System.Xml.Schema.XmlSchemaSimpleTypeRestriction
struct  XmlSchemaSimpleTypeRestriction_t_1856082672_0  : public XmlSchemaSimpleTypeContent_t2074660797_0
{
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeRestriction::baseType
	XmlSchemaSimpleType_t1845511452_0 * ___baseType_17;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleTypeRestriction::baseTypeName
	XmlQualifiedName_t_2082775307_0 * ___baseTypeName_18;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleTypeRestriction::facets
	XmlSchemaObjectCollection_t_636905395_0 * ___facets_19;
	// System.String[] System.Xml.Schema.XmlSchemaSimpleTypeRestriction::enumarationFacetValues
	StringU5BU5D_t_816028754_0* ___enumarationFacetValues_20;
	// System.String[] System.Xml.Schema.XmlSchemaSimpleTypeRestriction::patternFacetValues
	StringU5BU5D_t_816028754_0* ___patternFacetValues_21;
	// System.Text.RegularExpressions.Regex[] System.Xml.Schema.XmlSchemaSimpleTypeRestriction::rexPatterns
	RegexU5BU5D_t_650675251_0* ___rexPatterns_22;
	// System.Decimal System.Xml.Schema.XmlSchemaSimpleTypeRestriction::lengthFacet
	Decimal_t1458036598_0  ___lengthFacet_23;
	// System.Decimal System.Xml.Schema.XmlSchemaSimpleTypeRestriction::maxLengthFacet
	Decimal_t1458036598_0  ___maxLengthFacet_24;
	// System.Decimal System.Xml.Schema.XmlSchemaSimpleTypeRestriction::minLengthFacet
	Decimal_t1458036598_0  ___minLengthFacet_25;
	// System.Decimal System.Xml.Schema.XmlSchemaSimpleTypeRestriction::fractionDigitsFacet
	Decimal_t1458036598_0  ___fractionDigitsFacet_26;
	// System.Decimal System.Xml.Schema.XmlSchemaSimpleTypeRestriction::totalDigitsFacet
	Decimal_t1458036598_0  ___totalDigitsFacet_27;
	// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::maxInclusiveFacet
	Object_t * ___maxInclusiveFacet_28;
	// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::maxExclusiveFacet
	Object_t * ___maxExclusiveFacet_29;
	// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::minInclusiveFacet
	Object_t * ___minInclusiveFacet_30;
	// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::minExclusiveFacet
	Object_t * ___minExclusiveFacet_31;
	// System.Xml.Schema.XmlSchemaFacet/Facet System.Xml.Schema.XmlSchemaSimpleTypeRestriction::fixedFacets
	int32_t ___fixedFacets_32;
};
struct XmlSchemaSimpleTypeRestriction_t_1856082672_0_StaticFields{
	// System.Globalization.NumberStyles System.Xml.Schema.XmlSchemaSimpleTypeRestriction::lengthStyle
	int32_t ___lengthStyle_33;
	// System.Xml.Schema.XmlSchemaFacet/Facet System.Xml.Schema.XmlSchemaSimpleTypeRestriction::listFacets
	int32_t ___listFacets_34;
};
