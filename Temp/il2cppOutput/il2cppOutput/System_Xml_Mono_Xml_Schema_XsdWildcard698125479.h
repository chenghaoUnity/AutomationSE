#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1727784015_0;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t705385851_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t_1305703446_0;

#include "mscorlib_System_Object_887538054.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProc_1684590244.h"

// Mono.Xml.Schema.XsdWildcard
struct  XsdWildcard_t698125479_0  : public Object_t
{
	// System.Xml.Schema.XmlSchemaObject Mono.Xml.Schema.XsdWildcard::xsobj
	XmlSchemaObject_t1727784015_0 * ___xsobj_0;
	// System.Xml.Schema.XmlSchemaContentProcessing Mono.Xml.Schema.XsdWildcard::ResolvedProcessing
	int32_t ___ResolvedProcessing_1;
	// System.String Mono.Xml.Schema.XsdWildcard::TargetNamespace
	String_t* ___TargetNamespace_2;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::SkipCompile
	bool ___SkipCompile_3;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::HasValueAny
	bool ___HasValueAny_4;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::HasValueLocal
	bool ___HasValueLocal_5;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::HasValueOther
	bool ___HasValueOther_6;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::HasValueTargetNamespace
	bool ___HasValueTargetNamespace_7;
	// System.Collections.Specialized.StringCollection Mono.Xml.Schema.XsdWildcard::ResolvedNamespaces
	StringCollection_t705385851_0 * ___ResolvedNamespaces_8;
};
struct XsdWildcard_t698125479_0_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdWildcard::<>f__switch$map6
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map6_9;
};
