#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.Schema.XsdKeyEntryFieldCollection
struct XsdKeyEntryFieldCollection_t_1908950280_0;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t_1933432964_0;

#include "mscorlib_System_Object_887538054.h"

// Mono.Xml.Schema.XsdKeyEntry
struct  XsdKeyEntry_t_1946880992_0  : public Object_t
{
	// System.Int32 Mono.Xml.Schema.XsdKeyEntry::StartDepth
	int32_t ___StartDepth_0;
	// System.Int32 Mono.Xml.Schema.XsdKeyEntry::SelectorLineNumber
	int32_t ___SelectorLineNumber_1;
	// System.Int32 Mono.Xml.Schema.XsdKeyEntry::SelectorLinePosition
	int32_t ___SelectorLinePosition_2;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntry::SelectorHasLineInfo
	bool ___SelectorHasLineInfo_3;
	// Mono.Xml.Schema.XsdKeyEntryFieldCollection Mono.Xml.Schema.XsdKeyEntry::KeyFields
	XsdKeyEntryFieldCollection_t_1908950280_0 * ___KeyFields_4;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntry::KeyRefFound
	bool ___KeyRefFound_5;
	// Mono.Xml.Schema.XsdKeyTable Mono.Xml.Schema.XsdKeyEntry::OwnerSequence
	XsdKeyTable_t_1933432964_0 * ___OwnerSequence_6;
	// System.Boolean Mono.Xml.Schema.XsdKeyEntry::keyFound
	bool ___keyFound_7;
};
