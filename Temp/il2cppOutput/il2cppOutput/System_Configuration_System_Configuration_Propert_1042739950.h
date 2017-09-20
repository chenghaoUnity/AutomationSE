#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t_1454036085_0;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t1184719654_0;

#include "mscorlib_System_Object_887538054.h"
#include "System_Configuration_System_Configuration_Property_257610787.h"

// System.Configuration.PropertyInformation
struct  PropertyInformation_t_1042739950_0  : public Object_t
{
	// System.Boolean System.Configuration.PropertyInformation::isModified
	bool ___isModified_0;
	// System.Object System.Configuration.PropertyInformation::val
	Object_t * ___val_1;
	// System.Configuration.PropertyValueOrigin System.Configuration.PropertyInformation::origin
	int32_t ___origin_2;
	// System.Configuration.ConfigurationElement System.Configuration.PropertyInformation::owner
	ConfigurationElement_t_1454036085_0 * ___owner_3;
	// System.Configuration.ConfigurationProperty System.Configuration.PropertyInformation::property
	ConfigurationProperty_t1184719654_0 * ___property_4;
};
