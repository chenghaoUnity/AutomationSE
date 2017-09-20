#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t274224434_0;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t1816396905_0;
// System.Configuration.Configuration
struct Configuration_t_539106767_0;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t_1902751923_0;

#include "mscorlib_System_Object_887538054.h"

// System.Configuration.ConfigurationSectionGroup
struct  ConfigurationSectionGroup_t2121106283_0  : public Object_t
{
	// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::sections
	ConfigurationSectionCollection_t274224434_0 * ___sections_0;
	// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::groups
	ConfigurationSectionGroupCollection_t1816396905_0 * ___groups_1;
	// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::config
	Configuration_t_539106767_0 * ___config_2;
	// System.Configuration.SectionGroupInfo System.Configuration.ConfigurationSectionGroup::group
	SectionGroupInfo_t_1902751923_0 * ___group_3;
	// System.Boolean System.Configuration.ConfigurationSectionGroup::initialized
	bool ___initialized_4;
};
