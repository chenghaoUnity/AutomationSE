#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t_509331893_0;

#include "System_Xml_System_Xml_Schema_XmlSchemaIdentityCons_509331893.h"

// System.Xml.Schema.XmlSchemaKeyref
struct  XmlSchemaKeyref_t1616497380_0  : public XmlSchemaIdentityConstraint_t_509331893_0
{
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaKeyref::refer
	XmlQualifiedName_t_2082775307_0 * ___refer_21;
	// System.Xml.Schema.XmlSchemaIdentityConstraint System.Xml.Schema.XmlSchemaKeyref::target
	XmlSchemaIdentityConstraint_t_509331893_0 * ___target_22;
};
