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

// System.Security.Policy.Publisher
struct Publisher_t1048930835_0;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1524084820_0;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.Policy.Evidence
struct Evidence_t_738265248_0;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Policy.Publisher::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void Publisher__ctor_m1303687159_0 (Publisher_t1048930835_0 * __this, X509Certificate_t1524084820_0 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Policy.Publisher::get_Certificate()
extern "C"  X509Certificate_t1524084820_0 * Publisher_get_Certificate_m1285922804_0 (Publisher_t1048930835_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Publisher::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Object_t * Publisher_CreateIdentityPermission_m_784918630_0 (Publisher_t1048930835_0 * __this, Evidence_t_738265248_0 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Publisher::Equals(System.Object)
extern "C"  bool Publisher_Equals_m559419218_0 (Publisher_t1048930835_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Publisher::GetHashCode()
extern "C"  int32_t Publisher_GetHashCode_m1451310774_0 (Publisher_t1048930835_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Publisher::ToString()
extern "C"  String_t* Publisher_ToString_m449021904_0 (Publisher_t1048930835_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
