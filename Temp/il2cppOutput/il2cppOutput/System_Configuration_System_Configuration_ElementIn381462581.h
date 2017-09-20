#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.PropertyInformation
struct PropertyInformation_t_1042739950_0;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t_1454036085_0;
// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t717810000_0;

#include "mscorlib_System_Object_887538054.h"

// System.Configuration.ElementInformation
struct  ElementInformation_t381462581_0  : public Object_t
{
	// System.Configuration.PropertyInformation System.Configuration.ElementInformation::propertyInfo
	PropertyInformation_t_1042739950_0 * ___propertyInfo_0;
	// System.Configuration.ConfigurationElement System.Configuration.ElementInformation::owner
	ConfigurationElement_t_1454036085_0 * ___owner_1;
	// System.Configuration.PropertyInformationCollection System.Configuration.ElementInformation::properties
	PropertyInformationCollection_t717810000_0 * ___properties_2;
};
