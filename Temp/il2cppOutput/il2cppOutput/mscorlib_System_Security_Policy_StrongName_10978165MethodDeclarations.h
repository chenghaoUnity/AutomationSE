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

// System.Security.Policy.StrongName
struct StrongName_t_10978165_0;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t_847256332_0;
// System.String
struct String_t;
// System.Version
struct Version_t267380989_0;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.Policy.Evidence
struct Evidence_t_738265248_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Policy.StrongName::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C"  void StrongName__ctor_m552959324_0 (StrongName_t_10978165_0 * __this, StrongNamePublicKeyBlob_t_847256332_0 * ___blob, String_t* ___name, Version_t267380989_0 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongName::get_Name()
extern "C"  String_t* StrongName_get_Name_m_1669235504_0 (StrongName_t_10978165_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::get_PublicKey()
extern "C"  StrongNamePublicKeyBlob_t_847256332_0 * StrongName_get_PublicKey_m99431051_0 (StrongName_t_10978165_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Policy.StrongName::get_Version()
extern "C"  Version_t267380989_0 * StrongName_get_Version_m1418835908_0 (StrongName_t_10978165_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.StrongName::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Object_t * StrongName_CreateIdentityPermission_m_394985680_0 (StrongName_t_10978165_0 * __this, Evidence_t_738265248_0 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongName::Equals(System.Object)
extern "C"  bool StrongName_Equals_m_878220072_0 (StrongName_t_10978165_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.StrongName::GetHashCode()
extern "C"  int32_t StrongName_GetHashCode_m1084673968_0 (StrongName_t_10978165_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongName::ToString()
extern "C"  String_t* StrongName_ToString_m1987456872_0 (StrongName_t_10978165_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
