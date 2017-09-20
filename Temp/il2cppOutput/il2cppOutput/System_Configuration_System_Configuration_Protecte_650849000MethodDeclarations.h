#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Configuration.ProtectedConfigurationSection
struct ProtectedConfigurationSection_t_650849000_0;
// System.Configuration.ProviderSettingsCollection
struct ProviderSettingsCollection_t1347840407_0;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t7845476_0;
// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t_1895664804_0;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t_636914146_0;
// System.Configuration.ProviderSettings
struct ProviderSettings_t836102681_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Configuration.ProtectedConfigurationSection::.cctor()
extern "C"  void ProtectedConfigurationSection__cctor_m_621147473_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProviderSettingsCollection System.Configuration.ProtectedConfigurationSection::get_Providers()
extern "C"  ProviderSettingsCollection_t1347840407_0 * ProtectedConfigurationSection_get_Providers_m_1302354037_0 (ProtectedConfigurationSection_t_650849000_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProtectedConfigurationSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t7845476_0 * ProtectedConfigurationSection_get_Properties_m1794991967_0 (ProtectedConfigurationSection_t_650849000_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfigurationSection::GetAllProviders()
extern "C"  ProtectedConfigurationProviderCollection_t_1895664804_0 * ProtectedConfigurationSection_GetAllProviders_m625639758_0 (ProtectedConfigurationSection_t_650849000_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationSection::InstantiateProvider(System.Configuration.ProviderSettings)
extern "C"  ProtectedConfigurationProvider_t_636914146_0 * ProtectedConfigurationSection_InstantiateProvider_m_1437354093_0 (ProtectedConfigurationSection_t_650849000_0 * __this, ProviderSettings_t836102681_0 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
