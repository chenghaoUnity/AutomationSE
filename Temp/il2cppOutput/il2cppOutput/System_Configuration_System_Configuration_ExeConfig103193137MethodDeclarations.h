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

// System.Configuration.ExeConfigurationHost
struct ExeConfigurationHost_t103193137_0;
// System.Configuration.Internal.IInternalConfigRoot
struct IInternalConfigRoot_t1654742718_0;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Configuration.ExeConfigurationHost::.ctor()
extern "C"  void ExeConfigurationHost__ctor_m957968831_0 (ExeConfigurationHost_t103193137_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ExeConfigurationHost::Init(System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern "C"  void ExeConfigurationHost_Init_m367743737_0 (ExeConfigurationHost_t103193137_0 * __this, Object_t * ___root, ObjectU5BU5D_t1774424924_0* ___hostInitParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ExeConfigurationHost::GetStreamName(System.String)
extern "C"  String_t* ExeConfigurationHost_GetStreamName_m1983209793_0 (ExeConfigurationHost_t103193137_0 * __this, String_t* ___configPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ExeConfigurationHost::InitForConfiguration(System.String&,System.String&,System.String&,System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern "C"  void ExeConfigurationHost_InitForConfiguration_m706706708_0 (ExeConfigurationHost_t103193137_0 * __this, String_t** ___locationSubPath, String_t** ___configPath, String_t** ___locationConfigPath, Object_t * ___root, ObjectU5BU5D_t1774424924_0* ___hostInitConfigurationParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
