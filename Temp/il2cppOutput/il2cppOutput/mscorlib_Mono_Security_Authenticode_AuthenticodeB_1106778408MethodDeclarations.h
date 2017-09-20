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

// Mono.Security.Authenticode.AuthenticodeBase
struct AuthenticodeBase_t_1106778408_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t_1530054766_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Authenticode.AuthenticodeBase::.ctor()
extern "C"  void AuthenticodeBase__ctor_m_2049382728_0 (AuthenticodeBase_t_1106778408_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::get_PEOffset()
extern "C"  int32_t AuthenticodeBase_get_PEOffset_m_1455172543_0 (AuthenticodeBase_t_1106778408_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Open(System.String)
extern "C"  void AuthenticodeBase_Open_m378302316_0 (AuthenticodeBase_t_1106778408_0 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Close()
extern "C"  void AuthenticodeBase_Close_m_338523186_0 (AuthenticodeBase_t_1106778408_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeBase::ReadFirstBlock()
extern "C"  bool AuthenticodeBase_ReadFirstBlock_m_2043891907_0 (AuthenticodeBase_t_1106778408_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::GetSecurityEntry()
extern "C"  ByteU5BU5D_t_1238178395_0* AuthenticodeBase_GetSecurityEntry_m1581271934_0 (AuthenticodeBase_t_1106778408_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::GetHash(System.Security.Cryptography.HashAlgorithm)
extern "C"  ByteU5BU5D_t_1238178395_0* AuthenticodeBase_GetHash_m546000790_0 (AuthenticodeBase_t_1106778408_0 * __this, HashAlgorithm_t_1530054766_0 * ___hash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
