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

// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t_957553394_0;
// System.Configuration.Configuration
struct Configuration_t_539106767_0;
// System.Configuration.Internal.IInternalConfigConfigurationFactory
struct IInternalConfigConfigurationFactory_t1028888848_0;
// System.Configuration.Internal.IInternalConfigSystem
struct IInternalConfigSystem_t1107839243_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur_884241592.h"

// System.Void System.Configuration.ConfigurationManager::.cctor()
extern "C"  void ConfigurationManager__cctor_m_2063187431_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationManager::GetAssemblyInfo(System.Reflection.Assembly)
extern "C"  String_t* ConfigurationManager_GetAssemblyInfo_m_2118871787_0 (Object_t * __this /* static, unused */, Assembly_t_957553394_0 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationManager::OpenExeConfigurationInternal(System.Configuration.ConfigurationUserLevel,System.Reflection.Assembly,System.String)
extern "C"  Configuration_t_539106767_0 * ConfigurationManager_OpenExeConfigurationInternal_m705051979_0 (Object_t * __this /* static, unused */, int32_t ___userLevel, Assembly_t_957553394_0 * ___calling_assembly, String_t* ___exePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigConfigurationFactory System.Configuration.ConfigurationManager::get_ConfigurationFactory()
extern "C"  Object_t * ConfigurationManager_get_ConfigurationFactory_m_1437603428_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigSystem System.Configuration.ConfigurationManager::get_ConfigurationSystem()
extern "C"  Object_t * ConfigurationManager_get_ConfigurationSystem_m_2092384220_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationManager::GetSection(System.String)
extern "C"  Object_t * ConfigurationManager_GetSection_m_840321160_0 (Object_t * __this /* static, unused */, String_t* ___sectionName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
