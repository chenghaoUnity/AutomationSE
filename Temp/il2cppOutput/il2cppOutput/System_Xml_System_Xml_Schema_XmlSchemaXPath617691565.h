#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1115255140_0;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t391223730_0;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t335602256_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t_1305703446_0;

#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated55549320.h"

// System.Xml.Schema.XmlSchemaXPath
struct  XmlSchemaXPath_t617691565_0  : public XmlSchemaAnnotated_t55549320_0
{
	// System.String System.Xml.Schema.XmlSchemaXPath::xpath
	String_t* ___xpath_16;
	// System.Xml.XmlNamespaceManager System.Xml.Schema.XmlSchemaXPath::nsmgr
	XmlNamespaceManager_t1115255140_0 * ___nsmgr_17;
	// System.Boolean System.Xml.Schema.XmlSchemaXPath::isSelector
	bool ___isSelector_18;
	// Mono.Xml.Schema.XsdIdentityPath[] System.Xml.Schema.XmlSchemaXPath::compiledExpression
	XsdIdentityPathU5BU5D_t391223730_0* ___compiledExpression_19;
	// Mono.Xml.Schema.XsdIdentityPath System.Xml.Schema.XmlSchemaXPath::currentPath
	XsdIdentityPath_t335602256_0 * ___currentPath_20;
};
struct XmlSchemaXPath_t617691565_0_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Schema.XmlSchemaXPath::<>f__switch$map4A
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map4A_21;
};
