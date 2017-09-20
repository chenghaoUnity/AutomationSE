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

// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t717810000_0;
// System.Configuration.PropertyInformation
struct PropertyInformation_t_1042739950_0;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Configuration.PropertyInformationCollection::.ctor()
extern "C"  void PropertyInformationCollection__ctor_m112722822_0 (PropertyInformationCollection_t717810000_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyInformation System.Configuration.PropertyInformationCollection::get_Item(System.String)
extern "C"  PropertyInformation_t_1042739950_0 * PropertyInformationCollection_get_Item_m_864597927_0 (PropertyInformationCollection_t717810000_0 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.PropertyInformationCollection::GetEnumerator()
extern "C"  Object_t * PropertyInformationCollection_GetEnumerator_m941901092_0 (PropertyInformationCollection_t717810000_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformationCollection::Add(System.Configuration.PropertyInformation)
extern "C"  void PropertyInformationCollection_Add_m_1259785531_0 (PropertyInformationCollection_t717810000_0 * __this, PropertyInformation_t_1042739950_0 * ___pi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformationCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void PropertyInformationCollection_GetObjectData_m_1260634076_0 (PropertyInformationCollection_t717810000_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
