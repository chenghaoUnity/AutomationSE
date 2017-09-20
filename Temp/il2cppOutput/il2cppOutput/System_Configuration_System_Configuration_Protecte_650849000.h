#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t1184719654_0;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t7845476_0;
// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t_1895664804_0;

#include "System_Configuration_System_Configuration_Configu_2115925132.h"

// System.Configuration.ProtectedConfigurationSection
struct  ProtectedConfigurationSection_t_650849000_0  : public ConfigurationSection_t_2115925132_0
{
	// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfigurationSection::providers
	ProtectedConfigurationProviderCollection_t_1895664804_0 * ___providers_20;
};
struct ProtectedConfigurationSection_t_650849000_0_StaticFields{
	// System.Configuration.ConfigurationProperty System.Configuration.ProtectedConfigurationSection::defaultProviderProp
	ConfigurationProperty_t1184719654_0 * ___defaultProviderProp_17;
	// System.Configuration.ConfigurationProperty System.Configuration.ProtectedConfigurationSection::providersProp
	ConfigurationProperty_t1184719654_0 * ___providersProp_18;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProtectedConfigurationSection::properties
	ConfigurationPropertyCollection_t7845476_0 * ___properties_19;
};
