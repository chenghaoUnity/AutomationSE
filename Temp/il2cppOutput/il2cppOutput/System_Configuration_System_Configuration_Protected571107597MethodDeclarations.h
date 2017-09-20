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

// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t_1895664804_0;
// System.Configuration.ProtectedConfigurationSection
struct ProtectedConfigurationSection_t_650849000_0;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t_636914146_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfiguration::get_Providers()
extern "C"  ProtectedConfigurationProviderCollection_t_1895664804_0 * ProtectedConfiguration_get_Providers_m_829777377_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationSection System.Configuration.ProtectedConfiguration::get_Section()
extern "C"  ProtectedConfigurationSection_t_650849000_0 * ProtectedConfiguration_get_Section_m_1654766746_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfiguration::GetProvider(System.String,System.Boolean)
extern "C"  ProtectedConfigurationProvider_t_636914146_0 * ProtectedConfiguration_GetProvider_m1256966_0 (Object_t * __this /* static, unused */, String_t* ___name, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
