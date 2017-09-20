#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t_1454036085_0;
// System.Collections.Hashtable
struct Hashtable_t_2004451924_0;
// System.String
struct String_t;

#include "mscorlib_System_Object_887538054.h"
#include "System_Configuration_System_Configuration_Configur_207765418.h"

// System.Configuration.ConfigurationLockCollection
struct  ConfigurationLockCollection_t_52258118_0  : public Object_t
{
	// System.Collections.ArrayList System.Configuration.ConfigurationLockCollection::names
	ArrayList_t536890563_0 * ___names_0;
	// System.Configuration.ConfigurationElement System.Configuration.ConfigurationLockCollection::element
	ConfigurationElement_t_1454036085_0 * ___element_1;
	// System.Configuration.ConfigurationLockType System.Configuration.ConfigurationLockCollection::lockType
	int32_t ___lockType_2;
	// System.Boolean System.Configuration.ConfigurationLockCollection::is_modified
	bool ___is_modified_3;
	// System.Collections.Hashtable System.Configuration.ConfigurationLockCollection::valid_name_hash
	Hashtable_t_2004451924_0 * ___valid_name_hash_4;
	// System.String System.Configuration.ConfigurationLockCollection::valid_names
	String_t* ___valid_names_5;
};
