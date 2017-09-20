#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t_1946880992_0;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t1804724271_0;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t2063649899_0;
// System.Object
struct Object_t;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t335602256_0;

#include "mscorlib_System_Object_887538054.h"

// Mono.Xml.Schema.XsdKeyEntryField
struct  XsdKeyEntryField_t1705660602_0  : public Object_t
{
	// Mono.Xml.Schema.XsdKeyEntry Mono.Xml.Schema.XsdKeyEntryField::entry
	XsdKeyEntry_t_1946880992_0 * ___entry_0;
	// Mono.Xml.Schema.XsdIdentityField Mono.Xml.Schema.XsdKeyEntryField::field
	XsdIdentityField_t1804724271_0 * ___field_1;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::FieldFound
	bool ___FieldFound_2;
	// System.Int32 Mono.Xml.Schema.XsdKeyEntryField::FieldLineNumber
	int32_t ___FieldLineNumber_3;
	// System.Int32 Mono.Xml.Schema.XsdKeyEntryField::FieldLinePosition
	int32_t ___FieldLinePosition_4;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::FieldHasLineInfo
	bool ___FieldHasLineInfo_5;
	// Mono.Xml.Schema.XsdAnySimpleType Mono.Xml.Schema.XsdKeyEntryField::FieldType
	XsdAnySimpleType_t2063649899_0 * ___FieldType_6;
	// System.Object Mono.Xml.Schema.XsdKeyEntryField::Identity
	Object_t * ___Identity_7;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::IsXsiNil
	bool ___IsXsiNil_8;
	// System.Int32 Mono.Xml.Schema.XsdKeyEntryField::FieldFoundDepth
	int32_t ___FieldFoundDepth_9;
	// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyEntryField::FieldFoundPath
	XsdIdentityPath_t335602256_0 * ___FieldFoundPath_10;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::Consuming
	bool ___Consuming_11;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::Consumed
	bool ___Consumed_12;
};
