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

// System.Configuration.ConfigurationSection
struct ConfigurationSection_t_2115925132_0;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t_1313525129_0;
// System.Configuration.SectionInformation
struct SectionInformation_t_1682019156_0;
// System.Object
struct Object_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t_1454036085_0;
// System.Type
struct Type_t;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configura105049617.h"

// System.Void System.Configuration.ConfigurationSection::.ctor()
extern "C"  void ConfigurationSection__ctor_m1633041372_0 (ConfigurationSection_t_2115925132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::get_SectionHandler()
extern "C"  Object_t * ConfigurationSection_get_SectionHandler_m368337580_0 (ConfigurationSection_t_2115925132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::set_SectionHandler(System.Configuration.IConfigurationSectionHandler)
extern "C"  void ConfigurationSection_set_SectionHandler_m_1214150657_0 (ConfigurationSection_t_2115925132_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::get_SectionInformation()
extern "C"  SectionInformation_t_1682019156_0 * ConfigurationSection_get_SectionInformation_m_1247205565_0 (ConfigurationSection_t_2115925132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationSection::get_ConfigContext()
extern "C"  Object_t * ConfigurationSection_get_ConfigContext_m_1805736557_0 (ConfigurationSection_t_2115925132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::set_ConfigContext(System.Object)
extern "C"  void ConfigurationSection_set_ConfigContext_m_999039126_0 (ConfigurationSection_t_2115925132_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationSection::GetRuntimeObject()
extern "C"  Object_t * ConfigurationSection_GetRuntimeObject_m821684692_0 (ConfigurationSection_t_2115925132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationSection::IsModified()
extern "C"  bool ConfigurationSection_IsModified_m1585717589_0 (ConfigurationSection_t_2115925132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::ResetModified()
extern "C"  void ConfigurationSection_ResetModified_m73658162_0 (ConfigurationSection_t_2115925132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationSection::CreateElement(System.Type)
extern "C"  ConfigurationElement_t_1454036085_0 * ConfigurationSection_CreateElement_m_980048311_0 (ConfigurationSection_t_2115925132_0 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::DoDeserializeSection(System.Xml.XmlReader)
extern "C"  void ConfigurationSection_DoDeserializeSection_m_970371723_0 (ConfigurationSection_t_2115925132_0 * __this, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::DeserializeSection(System.Xml.XmlReader)
extern "C"  void ConfigurationSection_DeserializeSection_m_1515114102_0 (ConfigurationSection_t_2115925132_0 * __this, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::DeserializeConfigSource(System.String)
extern "C"  void ConfigurationSection_DeserializeConfigSource_m_1934604820_0 (ConfigurationSection_t_2115925132_0 * __this, String_t* ___basePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C"  String_t* ConfigurationSection_SerializeSection_m_1267907808_0 (ConfigurationSection_t_2115925132_0 * __this, ConfigurationElement_t_1454036085_0 * ___parentElement, String_t* ___name, int32_t ___saveMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
