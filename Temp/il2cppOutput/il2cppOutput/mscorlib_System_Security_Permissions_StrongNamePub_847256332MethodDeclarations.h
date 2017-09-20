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

// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t_847256332_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Permissions.StrongNamePublicKeyBlob::.ctor(System.Byte[])
extern "C"  void StrongNamePublicKeyBlob__ctor_m1989886509_0 (StrongNamePublicKeyBlob_t_847256332_0 * __this, ByteU5BU5D_t_1238178395_0* ___publicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNamePublicKeyBlob::FromString(System.String)
extern "C"  StrongNamePublicKeyBlob_t_847256332_0 * StrongNamePublicKeyBlob_FromString_m_2122145574_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Permissions.StrongNamePublicKeyBlob::CharToByte(System.Char)
extern "C"  uint8_t StrongNamePublicKeyBlob_CharToByte_m_1274265336_0 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNamePublicKeyBlob::Equals(System.Object)
extern "C"  bool StrongNamePublicKeyBlob_Equals_m167131279_0 (StrongNamePublicKeyBlob_t_847256332_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Permissions.StrongNamePublicKeyBlob::GetHashCode()
extern "C"  int32_t StrongNamePublicKeyBlob_GetHashCode_m1175711719_0 (StrongNamePublicKeyBlob_t_847256332_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.StrongNamePublicKeyBlob::ToString()
extern "C"  String_t* StrongNamePublicKeyBlob_ToString_m_1999536559_0 (StrongNamePublicKeyBlob_t_847256332_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
