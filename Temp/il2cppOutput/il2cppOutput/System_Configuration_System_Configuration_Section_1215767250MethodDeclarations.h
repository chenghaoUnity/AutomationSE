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

// System.Configuration.SectionInfo
struct SectionInfo_t_1215767250_0;
// System.Object
struct Object_t;
// System.Configuration.Configuration
struct Configuration_t_539106767_0;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// System.Configuration.ConfigInfo
struct ConfigInfo_t_750583883_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Configuration.SectionInfo::.ctor()
extern "C"  void SectionInfo__ctor_m772573224_0 (SectionInfo_t_1215767250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.SectionInfo::CreateInstance()
extern "C"  Object_t * SectionInfo_CreateInstance_m_1740188798_0 (SectionInfo_t_1215767250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
extern "C"  void SectionInfo_ReadConfig_m1839267793_0 (SectionInfo_t_1215767250_0 * __this, Configuration_t_539106767_0 * ___cfg, String_t* ___streamName, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
extern "C"  void SectionInfo_ReadData_m_32269640_0 (SectionInfo_t_1215767250_0 * __this, Configuration_t_539106767_0 * ___config, XmlReader_t1629164245_0 * ___reader, bool ___overrideAllowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::Merge(System.Configuration.ConfigInfo)
extern "C"  void SectionInfo_Merge_m_1111075571_0 (SectionInfo_t_1215767250_0 * __this, ConfigInfo_t_750583883_0 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
