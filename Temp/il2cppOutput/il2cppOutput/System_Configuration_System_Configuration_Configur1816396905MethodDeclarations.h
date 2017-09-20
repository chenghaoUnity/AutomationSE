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

// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t1816396905_0;
// System.Configuration.Configuration
struct Configuration_t_539106767_0;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t_1902751923_0;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t2107895645_0;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t2121106283_0;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Configuration.ConfigurationSectionGroupCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C"  void ConfigurationSectionGroupCollection__ctor_m_1755106885_0 (ConfigurationSectionGroupCollection_t1816396905_0 * __this, Configuration_t_539106767_0 * ___config, SectionGroupInfo_t_1902751923_0 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionGroupCollection::get_Keys()
extern "C"  KeysCollection_t2107895645_0 * ConfigurationSectionGroupCollection_get_Keys_m1573863704_0 (ConfigurationSectionGroupCollection_t1816396905_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationSectionGroupCollection::get_Count()
extern "C"  int32_t ConfigurationSectionGroupCollection_get_Count_m_560932783_0 (ConfigurationSectionGroupCollection_t1816396905_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.ConfigurationSectionGroupCollection::get_Item(System.String)
extern "C"  ConfigurationSectionGroup_t2121106283_0 * ConfigurationSectionGroupCollection_get_Item_m732451449_0 (ConfigurationSectionGroupCollection_t1816396905_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionGroupCollection::GetEnumerator()
extern "C"  Object_t * ConfigurationSectionGroupCollection_GetEnumerator_m_1990375317_0 (ConfigurationSectionGroupCollection_t1816396905_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroupCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationSectionGroupCollection_GetObjectData_m1085667179_0 (ConfigurationSectionGroupCollection_t1816396905_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
