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

// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t_809913950_0;
// Mono.Security.ASN1
struct ASN1_t1755619932_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.PKCS7/SignerInfo::.ctor()
extern "C"  void SignerInfo__ctor_m_1309660684_0 (SignerInfo_t_809913950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignerInfo::.ctor(Mono.Security.ASN1)
extern "C"  void SignerInfo__ctor_m_2104873796_0 (SignerInfo_t_809913950_0 * __this, ASN1_t1755619932_0 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignerInfo::get_IssuerName()
extern "C"  String_t* SignerInfo_get_IssuerName_m88375840_0 (SignerInfo_t_809913950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/SignerInfo::get_SerialNumber()
extern "C"  ByteU5BU5D_t_1238178395_0* SignerInfo_get_SerialNumber_m_1911208032_0 (SignerInfo_t_809913950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::get_AuthenticatedAttributes()
extern "C"  ArrayList_t536890563_0 * SignerInfo_get_AuthenticatedAttributes_m1095387203_0 (SignerInfo_t_809913950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignerInfo::get_HashName()
extern "C"  String_t* SignerInfo_get_HashName_m457445237_0 (SignerInfo_t_809913950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignerInfo::set_HashName(System.String)
extern "C"  void SignerInfo_set_HashName_m_1604819844_0 (SignerInfo_t_809913950_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/SignerInfo::get_Signature()
extern "C"  ByteU5BU5D_t_1238178395_0* SignerInfo_get_Signature_m1212704631_0 (SignerInfo_t_809913950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::get_UnauthenticatedAttributes()
extern "C"  ArrayList_t536890563_0 * SignerInfo_get_UnauthenticatedAttributes_m_901144374_0 (SignerInfo_t_809913950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.PKCS7/SignerInfo::get_Version()
extern "C"  uint8_t SignerInfo_get_Version_m590360565_0 (SignerInfo_t_809913950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
