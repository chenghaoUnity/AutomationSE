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

// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t274224434_0;
// System.Configuration.Configuration
struct Configuration_t_539106767_0;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t_1902751923_0;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t2107895645_0;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t_2115925132_0;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Configuration.ConfigurationSectionCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C"  void ConfigurationSectionCollection__ctor_m_877426164_0 (ConfigurationSectionCollection_t274224434_0 * __this, Configuration_t_539106767_0 * ___config, SectionGroupInfo_t_1902751923_0 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionCollection::get_Keys()
extern "C"  KeysCollection_t2107895645_0 * ConfigurationSectionCollection_get_Keys_m_287228385_0 (ConfigurationSectionCollection_t274224434_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationSectionCollection::get_Count()
extern "C"  int32_t ConfigurationSectionCollection_get_Count_m_1497870302_0 (ConfigurationSectionCollection_t274224434_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.ConfigurationSectionCollection::get_Item(System.String)
extern "C"  ConfigurationSection_t_2115925132_0 * ConfigurationSectionCollection_get_Item_m1008055693_0 (ConfigurationSectionCollection_t274224434_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionCollection::GetEnumerator()
extern "C"  Object_t * ConfigurationSectionCollection_GetEnumerator_m116552048_0 (ConfigurationSectionCollection_t274224434_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationSectionCollection_GetObjectData_m1708760124_0 (ConfigurationSectionCollection_t274224434_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
