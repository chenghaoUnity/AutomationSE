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

// Mono.Security.X509.X509Store
struct X509Store_t_295234342_0;
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t_865204850_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t_1016414512_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C"  void X509Store__ctor_m_1713095497_0 (X509Store_t_295234342_0 * __this, String_t* ___path, bool ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C"  X509CertificateCollection_t_865204850_0 * X509Store_get_Certificates_m79321966_0 (X509Store_t_295234342_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C"  ByteU5BU5D_t_1238178395_0* X509Store_Load_m_1239987286_0 (X509Store_t_295234342_0 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C"  X509Certificate_t_1016414512_0 * X509Store_LoadCertificate_m_896324522_0 (X509Store_t_295234342_0 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C"  bool X509Store_CheckStore_m_672737602_0 (X509Store_t_295234342_0 * __this, String_t* ___path, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C"  X509CertificateCollection_t_865204850_0 * X509Store_BuildCertificatesCollection_m_611497791_0 (X509Store_t_295234342_0 * __this, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
