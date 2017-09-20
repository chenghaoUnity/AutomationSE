#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t_2034146166_0;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t_509331893_0;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;
// Mono.Xml.Schema.XsdKeyEntryCollection
struct XsdKeyEntryCollection_t_789457186_0;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t_1933432964_0;

#include "mscorlib_System_Object_887538054.h"

// Mono.Xml.Schema.XsdKeyTable
struct  XsdKeyTable_t_1933432964_0  : public Object_t
{
	// System.Boolean Mono.Xml.Schema.XsdKeyTable::alwaysTrue
	bool ___alwaysTrue_0;
	// Mono.Xml.Schema.XsdIdentitySelector Mono.Xml.Schema.XsdKeyTable::selector
	XsdIdentitySelector_t_2034146166_0 * ___selector_1;
	// System.Xml.Schema.XmlSchemaIdentityConstraint Mono.Xml.Schema.XsdKeyTable::source
	XmlSchemaIdentityConstraint_t_509331893_0 * ___source_2;
	// System.Xml.XmlQualifiedName Mono.Xml.Schema.XsdKeyTable::qname
	XmlQualifiedName_t_2082775307_0 * ___qname_3;
	// System.Xml.XmlQualifiedName Mono.Xml.Schema.XsdKeyTable::refKeyName
	XmlQualifiedName_t_2082775307_0 * ___refKeyName_4;
	// Mono.Xml.Schema.XsdKeyEntryCollection Mono.Xml.Schema.XsdKeyTable::Entries
	XsdKeyEntryCollection_t_789457186_0 * ___Entries_5;
	// Mono.Xml.Schema.XsdKeyEntryCollection Mono.Xml.Schema.XsdKeyTable::FinishedEntries
	XsdKeyEntryCollection_t_789457186_0 * ___FinishedEntries_6;
	// System.Int32 Mono.Xml.Schema.XsdKeyTable::StartDepth
	int32_t ___StartDepth_7;
	// Mono.Xml.Schema.XsdKeyTable Mono.Xml.Schema.XsdKeyTable::ReferencedKey
	XsdKeyTable_t_1933432964_0 * ___ReferencedKey_8;
};
