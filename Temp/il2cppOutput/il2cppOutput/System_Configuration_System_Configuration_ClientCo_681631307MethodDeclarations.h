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

// System.Configuration.ClientConfigurationSystem
struct ClientConfigurationSystem_t_681631307_0;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Configuration.Configuration
struct Configuration_t_539106767_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Configuration.ClientConfigurationSystem::.ctor()
extern "C"  void ClientConfigurationSystem__ctor_m_1132818879_0 (ClientConfigurationSystem_t_681631307_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ClientConfigurationSystem::System.Configuration.Internal.IInternalConfigSystem.GetSection(System.String)
extern "C"  Object_t * ClientConfigurationSystem_System_Configuration_Internal_IInternalConfigSystem_GetSection_m2078483914_0 (ClientConfigurationSystem_t_681631307_0 * __this, String_t* ___configKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ClientConfigurationSystem::get_Configuration()
extern "C"  Configuration_t_539106767_0 * ClientConfigurationSystem_get_Configuration_m_1620546948_0 (ClientConfigurationSystem_t_681631307_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
