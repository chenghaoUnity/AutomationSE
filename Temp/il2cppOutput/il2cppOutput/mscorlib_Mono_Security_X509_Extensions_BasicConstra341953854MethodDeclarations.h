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

// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct BasicConstraintsExtension_t341953854_0;
// Mono.Security.X509.X509Extension
struct X509Extension_t_7826504_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void BasicConstraintsExtension__ctor_m734608958_0 (BasicConstraintsExtension_t341953854_0 * __this, X509Extension_t_7826504_0 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::Decode()
extern "C"  void BasicConstraintsExtension_Decode_m_1599979104_0 (BasicConstraintsExtension_t341953854_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::Encode()
extern "C"  void BasicConstraintsExtension_Encode_m_459570232_0 (BasicConstraintsExtension_t341953854_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::get_CertificateAuthority()
extern "C"  bool BasicConstraintsExtension_get_CertificateAuthority_m_1457014235_0 (BasicConstraintsExtension_t341953854_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.BasicConstraintsExtension::ToString()
extern "C"  String_t* BasicConstraintsExtension_ToString_m1735983003_0 (BasicConstraintsExtension_t341953854_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
