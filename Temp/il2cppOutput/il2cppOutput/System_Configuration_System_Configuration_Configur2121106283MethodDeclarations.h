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

// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t2121106283_0;
// System.Configuration.Configuration
struct Configuration_t_539106767_0;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t_1902751923_0;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t1816396905_0;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t274224434_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Configuration.ConfigurationSectionGroup::.ctor()
extern "C"  void ConfigurationSectionGroup__ctor_m_1522550453_0 (ConfigurationSectionGroup_t2121106283_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::get_Config()
extern "C"  Configuration_t_539106767_0 * ConfigurationSectionGroup_get_Config_m_1487134572_0 (ConfigurationSectionGroup_t2121106283_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroup::Initialize(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C"  void ConfigurationSectionGroup_Initialize_m816537495_0 (ConfigurationSectionGroup_t2121106283_0 * __this, Configuration_t_539106767_0 * ___config, SectionGroupInfo_t_1902751923_0 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::get_SectionGroups()
extern "C"  ConfigurationSectionGroupCollection_t1816396905_0 * ConfigurationSectionGroup_get_SectionGroups_m_933777375_0 (ConfigurationSectionGroup_t2121106283_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::get_Sections()
extern "C"  ConfigurationSectionCollection_t274224434_0 * ConfigurationSectionGroup_get_Sections_m_459198177_0 (ConfigurationSectionGroup_t2121106283_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
