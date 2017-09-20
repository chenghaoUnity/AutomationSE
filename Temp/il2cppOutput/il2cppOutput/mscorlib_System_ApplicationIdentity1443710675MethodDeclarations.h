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

// System.ApplicationIdentity
struct ApplicationIdentity_t1443710675_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.ApplicationIdentity::.ctor(System.String)
extern "C"  void ApplicationIdentity__ctor_m548502143_0 (ApplicationIdentity_t1443710675_0 * __this, String_t* ___applicationIdentityFullName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationIdentity::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ApplicationIdentity_System_Runtime_Serialization_ISerializable_GetObjectData_m769720520_0 (ApplicationIdentity_t1443710675_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ApplicationIdentity::get_FullName()
extern "C"  String_t* ApplicationIdentity_get_FullName_m_508799129_0 (ApplicationIdentity_t1443710675_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ApplicationIdentity::ToString()
extern "C"  String_t* ApplicationIdentity_ToString_m654104720_0 (ApplicationIdentity_t1443710675_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
