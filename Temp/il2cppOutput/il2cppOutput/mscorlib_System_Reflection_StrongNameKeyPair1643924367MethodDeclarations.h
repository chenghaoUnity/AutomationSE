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

// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t1643924367_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Object
struct Object_t;
// System.Security.Cryptography.RSA
struct RSA_t1573116945_0;
// Mono.Security.StrongName
struct StrongName_t_1999711831_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Reflection.StrongNameKeyPair::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void StrongNameKeyPair__ctor_m583813794_0 (StrongNameKeyPair_t1643924367_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void StrongNameKeyPair_System_Runtime_Serialization_ISerializable_GetObjectData_m285619594_0 (StrongNameKeyPair_t1643924367_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void StrongNameKeyPair_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m_604321419_0 (StrongNameKeyPair_t1643924367_0 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::GetRSA()
extern "C"  RSA_t1573116945_0 * StrongNameKeyPair_GetRSA_m987209039_0 (StrongNameKeyPair_t1643924367_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.StrongName System.Reflection.StrongNameKeyPair::StrongName()
extern "C"  StrongName_t_1999711831_0 * StrongNameKeyPair_StrongName_m2125236127_0 (StrongNameKeyPair_t1643924367_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
