#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t_1225802637_0;
// System.String
struct String_t;
// System.Configuration.Configuration
struct Configuration_t_539106767_0;

#include "mscorlib_System_Object_887538054.h"

// System.Configuration.ConfigurationLocation
struct  ConfigurationLocation_t_216062714_0  : public Object_t
{
	// System.String System.Configuration.ConfigurationLocation::path
	String_t* ___path_1;
	// System.Configuration.Configuration System.Configuration.ConfigurationLocation::configuration
	Configuration_t_539106767_0 * ___configuration_2;
	// System.Configuration.Configuration System.Configuration.ConfigurationLocation::parent
	Configuration_t_539106767_0 * ___parent_3;
	// System.String System.Configuration.ConfigurationLocation::xmlContent
	String_t* ___xmlContent_4;
	// System.Boolean System.Configuration.ConfigurationLocation::parentResolved
	bool ___parentResolved_5;
	// System.Boolean System.Configuration.ConfigurationLocation::allowOverride
	bool ___allowOverride_6;
};
struct ConfigurationLocation_t_216062714_0_StaticFields{
	// System.Char[] System.Configuration.ConfigurationLocation::pathTrimChars
	CharU5BU5D_t_1225802637_0* ___pathTrimChars_0;
};
