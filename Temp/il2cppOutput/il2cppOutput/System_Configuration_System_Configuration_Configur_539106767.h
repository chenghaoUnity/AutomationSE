#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.Configuration
struct Configuration_t_539106767_0;
// System.Collections.Hashtable
struct Hashtable_t_2004451924_0;
// System.String
struct String_t;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t2121106283_0;
// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t1922605124_0;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t_1902751923_0;
// System.Configuration.Internal.IConfigSystem
struct IConfigSystem_t_1228386642_0;

#include "mscorlib_System_Object_887538054.h"

// System.Configuration.Configuration
struct  Configuration_t_539106767_0  : public Object_t
{
	// System.Configuration.Configuration System.Configuration.Configuration::parent
	Configuration_t_539106767_0 * ___parent_0;
	// System.Collections.Hashtable System.Configuration.Configuration::elementData
	Hashtable_t_2004451924_0 * ___elementData_1;
	// System.String System.Configuration.Configuration::streamName
	String_t* ___streamName_2;
	// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::rootSectionGroup
	ConfigurationSectionGroup_t2121106283_0 * ___rootSectionGroup_3;
	// System.Configuration.ConfigurationLocationCollection System.Configuration.Configuration::locations
	ConfigurationLocationCollection_t1922605124_0 * ___locations_4;
	// System.Configuration.SectionGroupInfo System.Configuration.Configuration::rootGroup
	SectionGroupInfo_t_1902751923_0 * ___rootGroup_5;
	// System.Configuration.Internal.IConfigSystem System.Configuration.Configuration::system
	Object_t * ___system_6;
	// System.Boolean System.Configuration.Configuration::hasFile
	bool ___hasFile_7;
	// System.String System.Configuration.Configuration::rootNamespace
	String_t* ___rootNamespace_8;
	// System.String System.Configuration.Configuration::configPath
	String_t* ___configPath_9;
	// System.String System.Configuration.Configuration::locationConfigPath
	String_t* ___locationConfigPath_10;
	// System.String System.Configuration.Configuration::locationSubPath
	String_t* ___locationSubPath_11;
};
