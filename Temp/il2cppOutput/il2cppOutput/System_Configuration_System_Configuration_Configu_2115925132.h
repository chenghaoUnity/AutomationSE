#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.SectionInformation
struct SectionInformation_t_1682019156_0;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t_1313525129_0;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "System_Configuration_System_Configuration_Configu_1454036085.h"

// System.Configuration.ConfigurationSection
struct  ConfigurationSection_t_2115925132_0  : public ConfigurationElement_t_1454036085_0
{
	// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::sectionInformation
	SectionInformation_t_1682019156_0 * ___sectionInformation_13;
	// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::section_handler
	Object_t * ___section_handler_14;
	// System.String System.Configuration.ConfigurationSection::externalDataXml
	String_t* ___externalDataXml_15;
	// System.Object System.Configuration.ConfigurationSection::_configContext
	Object_t * ____configContext_16;
};
