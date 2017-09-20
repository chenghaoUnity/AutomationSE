﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.X509.X509Chain
struct X509Chain_t_310381894_0;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t_865204850_0;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t_1016414512_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X509Chain::.ctor()
extern "C"  void X509Chain__ctor_m1780268188_0 (X509Chain_t_310381894_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
extern "C"  X509CertificateCollection_t_865204850_0 * X509Chain_get_TrustAnchors_m1552322552_0 (X509Chain_t_310381894_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::LoadCertificates(Mono.Security.X509.X509CertificateCollection)
extern "C"  void X509Chain_LoadCertificates_m_1920117760_0 (X509Chain_t_310381894_0 * __this, X509CertificateCollection_t_865204850_0 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_Build_m1896692026_0 (X509Chain_t_310381894_0 * __this, X509Certificate_t_1016414512_0 * ___leaf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::Reset()
extern "C"  void X509Chain_Reset_m_573298871_0 (X509Chain_t_310381894_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsValid_m1157319678_0 (X509Chain_t_310381894_0 * __this, X509Certificate_t_1016414512_0 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
extern "C"  X509Certificate_t_1016414512_0 * X509Chain_FindCertificateParent_m_429309513_0 (X509Chain_t_310381894_0 * __this, X509Certificate_t_1016414512_0 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
extern "C"  X509Certificate_t_1016414512_0 * X509Chain_FindCertificateRoot_m1625488367_0 (X509Chain_t_310381894_0 * __this, X509Certificate_t_1016414512_0 * ___potentialRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsTrusted_m_1667463111_0 (X509Chain_t_310381894_0 * __this, X509Certificate_t_1016414512_0 * ___potentialTrusted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsParent_m179871016_0 (X509Chain_t_310381894_0 * __this, X509Certificate_t_1016414512_0 * ___child, X509Certificate_t_1016414512_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;