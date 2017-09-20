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

// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t_1902751923_0;
// System.Configuration.ConfigInfo
struct ConfigInfo_t_750583883_0;
// System.String
struct String_t;
// System.Configuration.ConfigInfoCollection
struct ConfigInfoCollection_t1267346483_0;
// System.Configuration.Configuration
struct Configuration_t_539106767_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Configuration.SectionGroupInfo::.ctor()
extern "C"  void SectionGroupInfo__ctor_m_1824920925_0 (SectionGroupInfo_t_1902751923_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::.cctor()
extern "C"  void SectionGroupInfo__cctor_m_1220070038_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::AddChild(System.Configuration.ConfigInfo)
extern "C"  void SectionGroupInfo_AddChild_m_1367580593_0 (SectionGroupInfo_t_1902751923_0 * __this, ConfigInfo_t_750583883_0 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::Clear()
extern "C"  void SectionGroupInfo_Clear_m_123820338_0 (SectionGroupInfo_t_1902751923_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.SectionGroupInfo::HasChild(System.String)
extern "C"  bool SectionGroupInfo_HasChild_m_1581898011_0 (SectionGroupInfo_t_1902751923_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::RemoveChild(System.String)
extern "C"  void SectionGroupInfo_RemoveChild_m417673961_0 (SectionGroupInfo_t_1902751923_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::get_Sections()
extern "C"  ConfigInfoCollection_t1267346483_0 * SectionGroupInfo_get_Sections_m_1294254710_0 (SectionGroupInfo_t_1902751923_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::get_Groups()
extern "C"  ConfigInfoCollection_t1267346483_0 * SectionGroupInfo_get_Groups_m_572513680_0 (SectionGroupInfo_t_1902751923_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
extern "C"  void SectionGroupInfo_ReadConfig_m_1751487348_0 (SectionGroupInfo_t_1902751923_0 * __this, Configuration_t_539106767_0 * ___cfg, String_t* ___streamName, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadRemoveSection(System.Xml.XmlReader)
extern "C"  void SectionGroupInfo_ReadRemoveSection_m56977608_0 (SectionGroupInfo_t_1902751923_0 * __this, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadRootData(System.Xml.XmlReader,System.Configuration.Configuration,System.Boolean)
extern "C"  void SectionGroupInfo_ReadRootData_m_1836897291_0 (SectionGroupInfo_t_1902751923_0 * __this, XmlReader_t1629164245_0 * ___reader, Configuration_t_539106767_0 * ___config, bool ___overrideAllowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
extern "C"  void SectionGroupInfo_ReadData_m_148100451_0 (SectionGroupInfo_t_1902751923_0 * __this, Configuration_t_539106767_0 * ___config, XmlReader_t1629164245_0 * ___reader, bool ___overrideAllowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadContent(System.Xml.XmlReader,System.Configuration.Configuration,System.Boolean,System.Boolean)
extern "C"  void SectionGroupInfo_ReadContent_m1170104743_0 (SectionGroupInfo_t_1902751923_0 * __this, XmlReader_t1629164245_0 * ___reader, Configuration_t_539106767_0 * ___config, bool ___overrideAllowed, bool ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfo System.Configuration.SectionGroupInfo::GetConfigInfo(System.Xml.XmlReader,System.Configuration.SectionGroupInfo)
extern "C"  ConfigInfo_t_750583883_0 * SectionGroupInfo_GetConfigInfo_m2104472220_0 (SectionGroupInfo_t_1902751923_0 * __this, XmlReader_t1629164245_0 * ___reader, SectionGroupInfo_t_1902751923_0 * ___current, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::Merge(System.Configuration.ConfigInfo)
extern "C"  void SectionGroupInfo_Merge_m_627350734_0 (SectionGroupInfo_t_1902751923_0 * __this, ConfigInfo_t_750583883_0 * ___newData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
