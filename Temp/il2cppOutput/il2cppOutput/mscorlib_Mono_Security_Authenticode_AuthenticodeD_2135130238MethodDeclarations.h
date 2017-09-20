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

// Mono.Security.Authenticode.AuthenticodeDeformatter
struct AuthenticodeDeformatter_t_2135130238_0;
// System.String
struct String_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t_1016414512_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// Mono.Security.PKCS7/SignedData
struct SignedData_t_823004272_0;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t_1530054766_0;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t_809913950_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor()
extern "C"  void AuthenticodeDeformatter__ctor_m_1481420652_0 (AuthenticodeDeformatter_t_2135130238_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor(System.String)
extern "C"  void AuthenticodeDeformatter__ctor_m1825103598_0 (AuthenticodeDeformatter_t_2135130238_0 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::set_FileName(System.String)
extern "C"  void AuthenticodeDeformatter_set_FileName_m995910638_0 (AuthenticodeDeformatter_t_2135130238_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::get_SigningCertificate()
extern "C"  X509Certificate_t_1016414512_0 * AuthenticodeDeformatter_get_SigningCertificate_m1080501994_0 (AuthenticodeDeformatter_t_2135130238_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CheckSignature(System.String)
extern "C"  bool AuthenticodeDeformatter_CheckSignature_m273272896_0 (AuthenticodeDeformatter_t_2135130238_0 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CompareIssuerSerial(System.String,System.Byte[],Mono.Security.X509.X509Certificate)
extern "C"  bool AuthenticodeDeformatter_CompareIssuerSerial_m1845840631_0 (AuthenticodeDeformatter_t_2135130238_0 * __this, String_t* ___issuer, ByteU5BU5D_t_1238178395_0* ___serial, X509Certificate_t_1016414512_0 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifySignature(Mono.Security.PKCS7/SignedData,System.Byte[],System.Security.Cryptography.HashAlgorithm)
extern "C"  bool AuthenticodeDeformatter_VerifySignature_m1923757650_0 (AuthenticodeDeformatter_t_2135130238_0 * __this, SignedData_t_823004272_0 * ___sd, ByteU5BU5D_t_1238178395_0* ___calculatedMessageDigest, HashAlgorithm_t_1530054766_0 * ___ha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifyCounterSignature(Mono.Security.PKCS7/SignerInfo,System.Byte[])
extern "C"  bool AuthenticodeDeformatter_VerifyCounterSignature_m_685480020_0 (AuthenticodeDeformatter_t_2135130238_0 * __this, SignerInfo_t_809913950_0 * ___cs, ByteU5BU5D_t_1238178395_0* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::Reset()
extern "C"  void AuthenticodeDeformatter_Reset_m459979585_0 (AuthenticodeDeformatter_t_2135130238_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
