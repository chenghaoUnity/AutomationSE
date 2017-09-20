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
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.String
struct String_t;

#include "mscorlib_System_Object_887538054.h"

// Mono.Xml.Schema.XsdIDManager
struct  XsdIDManager_t2118556933_0  : public Object_t
{
	// System.Collections.Hashtable Mono.Xml.Schema.XsdIDManager::idList
	Hashtable_t_2004451924_0 * ___idList_0;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdIDManager::missingIDReferences
	ArrayList_t536890563_0 * ___missingIDReferences_1;
	// System.String Mono.Xml.Schema.XsdIDManager::thisElementId
	String_t* ___thisElementId_2;
};
