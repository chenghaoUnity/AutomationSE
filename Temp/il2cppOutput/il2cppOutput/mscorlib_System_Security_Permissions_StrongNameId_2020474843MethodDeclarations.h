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

// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t_847256332_0;
// System.String
struct String_t;
// System.Version
struct Version_t267380989_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_StrongNameId_2020474843.h"

// System.Void System.Security.Permissions.StrongNameIdentityPermission/SNIP::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C"  void SNIP__ctor_m_1016142462_0 (SNIP_t_2020474843_0 * __this, StrongNamePublicKeyBlob_t_847256332_0 * ___pk, String_t* ___name, Version_t267380989_0 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission/SNIP System.Security.Permissions.StrongNameIdentityPermission/SNIP::CreateDefault()
extern "C"  SNIP_t_2020474843_0  SNIP_CreateDefault_m_1473725192_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission/SNIP::IsNameSubsetOf(System.String)
extern "C"  bool SNIP_IsNameSubsetOf_m2053063997_0 (SNIP_t_2020474843_0 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission/SNIP::IsSubsetOf(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C"  bool SNIP_IsSubsetOf_m1761032335_0 (SNIP_t_2020474843_0 * __this, SNIP_t_2020474843_0  ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
