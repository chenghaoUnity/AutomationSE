#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t_2004451924_0;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t_675630763_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;

#include "mscorlib_System_Object_887538054.h"

// System.Xml.XmlNameEntryCache
struct  XmlNameEntryCache_t_1959421139_0  : public Object_t
{
	// System.Collections.Hashtable System.Xml.XmlNameEntryCache::table
	Hashtable_t_2004451924_0 * ___table_0;
	// System.Xml.XmlNameTable System.Xml.XmlNameEntryCache::nameTable
	XmlNameTable_t_662182735_0 * ___nameTable_1;
	// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::dummy
	XmlNameEntry_t_675630763_0 * ___dummy_2;
	// System.Char[] System.Xml.XmlNameEntryCache::cacheBuffer
	CharU5BU5D_t_1225802637_0* ___cacheBuffer_3;
};
