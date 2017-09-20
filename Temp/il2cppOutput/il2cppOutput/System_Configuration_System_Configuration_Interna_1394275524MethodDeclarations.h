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

// System.Configuration.InternalConfigurationHost
struct InternalConfigurationHost_t_1394275524_0;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.IO.Stream
struct Stream_t463444077_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur1032583947.h"
#include "System_Configuration_System_Configuration_Configura908815437.h"

// System.Void System.Configuration.InternalConfigurationHost::.ctor()
extern "C"  void InternalConfigurationHost__ctor_m_146445158_0 (InternalConfigurationHost_t_1394275524_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.InternalConfigurationHost::CreateDeprecatedConfigContext(System.String)
extern "C"  Object_t * InternalConfigurationHost_CreateDeprecatedConfigContext_m1830237825_0 (InternalConfigurationHost_t_1394275524_0 * __this, String_t* ___configPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.InternalConfigurationHost::GetConfigPathFromLocationSubPath(System.String,System.String)
extern "C"  String_t* InternalConfigurationHost_GetConfigPathFromLocationSubPath_m1221308008_0 (InternalConfigurationHost_t_1394275524_0 * __this, String_t* ___configPath, String_t* ___locationSubPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.InternalConfigurationHost::GetConfigType(System.String,System.Boolean)
extern "C"  Type_t * InternalConfigurationHost_GetConfigType_m_249040469_0 (InternalConfigurationHost_t_1394275524_0 * __this, String_t* ___typeName, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::IsDefinitionAllowed(System.String,System.Configuration.ConfigurationAllowDefinition,System.Configuration.ConfigurationAllowExeDefinition)
extern "C"  bool InternalConfigurationHost_IsDefinitionAllowed_m1273024759_0 (InternalConfigurationHost_t_1394275524_0 * __this, String_t* ___configPath, int32_t ___allowDefinition, int32_t ___allowExeDefinition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.InternalConfigurationHost::get_bundled_machine_config()
extern "C"  String_t* InternalConfigurationHost_get_bundled_machine_config_m_1647000723_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Configuration.InternalConfigurationHost::OpenStreamForRead(System.String)
extern "C"  Stream_t463444077_0 * InternalConfigurationHost_OpenStreamForRead_m_1225169093_0 (InternalConfigurationHost_t_1394275524_0 * __this, String_t* ___streamName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
