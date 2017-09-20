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
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t1959284958_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1727784015_0;

#include "mscorlib_System_Object_887538054.h"
#include "mscorlib_System_Guid_224607100.h"

// System.Xml.Schema.XmlSchemaObject
struct  XmlSchemaObject_t1727784015_0  : public Object_t
{
	// System.Int32 System.Xml.Schema.XmlSchemaObject::lineNumber
	int32_t ___lineNumber_0;
	// System.Int32 System.Xml.Schema.XmlSchemaObject::linePosition
	int32_t ___linePosition_1;
	// System.String System.Xml.Schema.XmlSchemaObject::sourceUri
	String_t* ___sourceUri_2;
	// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::namespaces
	XmlSerializerNamespaces_t1959284958_0 * ___namespaces_3;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaObject::unhandledAttributeList
	ArrayList_t536890563_0 * ___unhandledAttributeList_4;
	// System.Boolean System.Xml.Schema.XmlSchemaObject::isCompiled
	bool ___isCompiled_5;
	// System.Int32 System.Xml.Schema.XmlSchemaObject::errorCount
	int32_t ___errorCount_6;
	// System.Guid System.Xml.Schema.XmlSchemaObject::CompilationId
	Guid_t_224607100_0  ___CompilationId_7;
	// System.Guid System.Xml.Schema.XmlSchemaObject::ValidationId
	Guid_t_224607100_0  ___ValidationId_8;
	// System.Boolean System.Xml.Schema.XmlSchemaObject::isRedefineChild
	bool ___isRedefineChild_9;
	// System.Boolean System.Xml.Schema.XmlSchemaObject::isRedefinedComponent
	bool ___isRedefinedComponent_10;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::redefinedObject
	XmlSchemaObject_t1727784015_0 * ___redefinedObject_11;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::parent
	XmlSchemaObject_t1727784015_0 * ___parent_12;
};
