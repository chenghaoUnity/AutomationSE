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

// Mono.Security.StrongName
struct StrongName_t_1999711831_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Security.Cryptography.RSA
struct RSA_t1573116945_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.StrongName::.ctor(System.Byte[])
extern "C"  void StrongName__ctor_m_1927888676_0 (StrongName_t_1999711831_0 * __this, ByteU5BU5D_t_1238178395_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::.ctor(System.Security.Cryptography.RSA)
extern "C"  void StrongName__ctor_m_714266240_0 (StrongName_t_1999711831_0 * __this, RSA_t1573116945_0 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::.cctor()
extern "C"  void StrongName__cctor_m1937985856_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::InvalidateCache()
extern "C"  void StrongName_InvalidateCache_m757934578_0 (StrongName_t_1999711831_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::set_RSA(System.Security.Cryptography.RSA)
extern "C"  void StrongName_set_RSA_m_1591555007_0 (StrongName_t_1999711831_0 * __this, RSA_t1573116945_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKey()
extern "C"  ByteU5BU5D_t_1238178395_0* StrongName_get_PublicKey_m_131430386_0 (StrongName_t_1999711831_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKeyToken()
extern "C"  ByteU5BU5D_t_1238178395_0* StrongName_get_PublicKeyToken_m1378294189_0 (StrongName_t_1999711831_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.StrongName::get_TokenAlgorithm()
extern "C"  String_t* StrongName_get_TokenAlgorithm_m1030232697_0 (StrongName_t_1999711831_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
