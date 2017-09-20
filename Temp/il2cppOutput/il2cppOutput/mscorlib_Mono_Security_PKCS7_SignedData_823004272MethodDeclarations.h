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

// Mono.Security.PKCS7/SignedData
struct SignedData_t_823004272_0;
// Mono.Security.ASN1
struct ASN1_t1755619932_0;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t_865204850_0;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t193589085_0;
// System.String
struct String_t;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t_809913950_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.PKCS7/SignedData::.ctor(Mono.Security.ASN1)
extern "C"  void SignedData__ctor_m_1249499634_0 (SignedData_t_823004272_0 * __this, ASN1_t1755619932_0 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.PKCS7/SignedData::get_Certificates()
extern "C"  X509CertificateCollection_t_865204850_0 * SignedData_get_Certificates_m_1706205276_0 (SignedData_t_823004272_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/SignedData::get_ContentInfo()
extern "C"  ContentInfo_t193589085_0 * SignedData_get_ContentInfo_m1754582864_0 (SignedData_t_823004272_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignedData::set_HashName(System.String)
extern "C"  void SignedData_set_HashName_m70996302_0 (SignedData_t_823004272_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/SignerInfo Mono.Security.PKCS7/SignedData::get_SignerInfo()
extern "C"  SignerInfo_t_809913950_0 * SignedData_get_SignerInfo_m440356364_0 (SignedData_t_823004272_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignedData::OidToName(System.String)
extern "C"  String_t* SignedData_OidToName_m1635943665_0 (SignedData_t_823004272_0 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
