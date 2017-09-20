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

// System.Configuration.ConfigurationLocation
struct ConfigurationLocation_t_216062714_0;
// System.String
struct String_t;
// System.Configuration.Configuration
struct Configuration_t_539106767_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Configuration.ConfigurationLocation::.ctor(System.String,System.String,System.Configuration.Configuration,System.Boolean)
extern "C"  void ConfigurationLocation__ctor_m_1900804924_0 (ConfigurationLocation_t_216062714_0 * __this, String_t* ___path, String_t* ___xmlContent, Configuration_t_539106767_0 * ___parent, bool ___allowOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLocation::.cctor()
extern "C"  void ConfigurationLocation__cctor_m_1111546339_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationLocation::get_Path()
extern "C"  String_t* ConfigurationLocation_get_Path_m_846736827_0 (ConfigurationLocation_t_216062714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationLocation::OpenConfiguration()
extern "C"  Configuration_t_539106767_0 * ConfigurationLocation_OpenConfiguration_m1387186314_0 (ConfigurationLocation_t_216062714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLocation::SetParentConfiguration(System.Configuration.Configuration)
extern "C"  void ConfigurationLocation_SetParentConfiguration_m_888855777_0 (ConfigurationLocation_t_216062714_0 * __this, Configuration_t_539106767_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
