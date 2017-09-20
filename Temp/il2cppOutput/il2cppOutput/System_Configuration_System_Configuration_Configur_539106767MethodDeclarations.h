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

// System.Configuration.Configuration
struct Configuration_t_539106767_0;
// System.String
struct String_t;
// System.Configuration.InternalConfigurationSystem
struct InternalConfigurationSystem_t455176899_0;
// System.Configuration.Internal.IConfigSystem
struct IConfigSystem_t_1228386642_0;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t1654444932_0;
// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t1922605124_0;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t2121106283_0;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t1816396905_0;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t274224434_0;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t_2115925132_0;
// System.Configuration.SectionInfo
struct SectionInfo_t_1215767250_0;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t_1902751923_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Configuration.Configuration::.ctor(System.Configuration.Configuration,System.String)
extern "C"  void Configuration__ctor_m1712686530_0 (Configuration_t_539106767_0 * __this, Configuration_t_539106767_0 * ___parent, String_t* ___locationSubPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::.ctor(System.Configuration.InternalConfigurationSystem,System.String)
extern "C"  void Configuration__ctor_m_1783175568_0 (Configuration_t_539106767_0 * __this, InternalConfigurationSystem_t455176899_0 * ___system, String_t* ___locationSubPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::FindLocationConfiguration(System.String,System.Configuration.Configuration)
extern "C"  Configuration_t_539106767_0 * Configuration_FindLocationConfiguration_m_1950577472_0 (Configuration_t_539106767_0 * __this, String_t* ___relativePath, Configuration_t_539106767_0 * ___defaultConfiguration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::Init(System.Configuration.Internal.IConfigSystem,System.String,System.Configuration.Configuration)
extern "C"  void Configuration_Init_m_1538642808_0 (Configuration_t_539106767_0 * __this, Object_t * ___system, String_t* ___configPath, Configuration_t_539106767_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::get_Parent()
extern "C"  Configuration_t_539106767_0 * Configuration_get_Parent_m_185332798_0 (Configuration_t_539106767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::set_Parent(System.Configuration.Configuration)
extern "C"  void Configuration_set_Parent_m1155432391_0 (Configuration_t_539106767_0 * __this, Configuration_t_539106767_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::GetParentWithFile()
extern "C"  Configuration_t_539106767_0 * Configuration_GetParentWithFile_m_914257387_0 (Configuration_t_539106767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigHost System.Configuration.Configuration::get_ConfigHost()
extern "C"  Object_t * Configuration_get_ConfigHost_m418627631_0 (Configuration_t_539106767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_LocationConfigPath()
extern "C"  String_t* Configuration_get_LocationConfigPath_m1991016359_0 (Configuration_t_539106767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_ConfigPath()
extern "C"  String_t* Configuration_get_ConfigPath_m_312238766_0 (Configuration_t_539106767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_FilePath()
extern "C"  String_t* Configuration_get_FilePath_m2064340620_0 (Configuration_t_539106767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::get_HasFile()
extern "C"  bool Configuration_get_HasFile_m1182408778_0 (Configuration_t_539106767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLocationCollection System.Configuration.Configuration::get_Locations()
extern "C"  ConfigurationLocationCollection_t1922605124_0 * Configuration_get_Locations_m_129299589_0 (Configuration_t_539106767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::get_RootSectionGroup()
extern "C"  ConfigurationSectionGroup_t2121106283_0 * Configuration_get_RootSectionGroup_m_1233407750_0 (Configuration_t_539106767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.Configuration::get_SectionGroups()
extern "C"  ConfigurationSectionGroupCollection_t1816396905_0 * Configuration_get_SectionGroups_m614791579_0 (Configuration_t_539106767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionCollection System.Configuration.Configuration::get_Sections()
extern "C"  ConfigurationSectionCollection_t274224434_0 * Configuration_get_Sections_m_1927049755_0 (Configuration_t_539106767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSection(System.String)
extern "C"  ConfigurationSection_t_2115925132_0 * Configuration_GetSection_m598223879_0 (Configuration_t_539106767_0 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSectionInstance(System.Configuration.SectionInfo,System.Boolean)
extern "C"  ConfigurationSection_t_2115925132_0 * Configuration_GetSectionInstance_m1119437385_0 (Configuration_t_539106767_0 * __this, SectionInfo_t_1215767250_0 * ___config, bool ___createDefaultInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::GetSectionGroupInstance(System.Configuration.SectionGroupInfo)
extern "C"  ConfigurationSectionGroup_t2121106283_0 * Configuration_GetSectionGroupInstance_m1836884865_0 (Configuration_t_539106767_0 * __this, SectionGroupInfo_t_1902751923_0 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::SetSectionXml(System.Configuration.SectionInfo,System.String)
extern "C"  void Configuration_SetSectionXml_m435041335_0 (Configuration_t_539106767_0 * __this, SectionInfo_t_1215767250_0 * ___config, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::GetSectionXml(System.Configuration.SectionInfo)
extern "C"  String_t* Configuration_GetSectionXml_m1601149676_0 (Configuration_t_539106767_0 * __this, SectionInfo_t_1215767250_0 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::Load()
extern "C"  bool Configuration_Load_m1257171115_0 (Configuration_t_539106767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadConfigFile(System.Xml.XmlReader,System.String)
extern "C"  void Configuration_ReadConfigFile_m126468843_0 (Configuration_t_539106767_0 * __this, XmlReader_t1629164245_0 * ___reader, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadData(System.Xml.XmlReader,System.Boolean)
extern "C"  void Configuration_ReadData_m_1792439454_0 (Configuration_t_539106767_0 * __this, XmlReader_t1629164245_0 * ___reader, bool ___allowOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ThrowException(System.String,System.Xml.XmlReader)
extern "C"  void Configuration_ThrowException_m_249634072_0 (Configuration_t_539106767_0 * __this, String_t* ___text, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
