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

// System.Security.Permissions.IsolatedStorageFilePermission
struct IsolatedStorageFilePermission_t976714128_0;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"

// System.Void System.Security.Permissions.IsolatedStorageFilePermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void IsolatedStorageFilePermission__ctor_m_304318519_0 (IsolatedStorageFilePermission_t976714128_0 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.IsolatedStorageFilePermission::Copy()
extern "C"  Object_t * IsolatedStorageFilePermission_Copy_m1157463919_0 (IsolatedStorageFilePermission_t976714128_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.IsolatedStorageFilePermission::Intersect(System.Security.IPermission)
extern "C"  Object_t * IsolatedStorageFilePermission_Intersect_m_826529470_0 (IsolatedStorageFilePermission_t976714128_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.IsolatedStorageFilePermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool IsolatedStorageFilePermission_IsSubsetOf_m_650288988_0 (IsolatedStorageFilePermission_t976714128_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.IsolatedStorageFilePermission::Union(System.Security.IPermission)
extern "C"  Object_t * IsolatedStorageFilePermission_Union_m2024135186_0 (IsolatedStorageFilePermission_t976714128_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.IsolatedStorageFilePermission::ToXml()
extern "C"  SecurityElement_t117540681_0 * IsolatedStorageFilePermission_ToXml_m138485760_0 (IsolatedStorageFilePermission_t976714128_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.IsolatedStorageFilePermission System.Security.Permissions.IsolatedStorageFilePermission::Cast(System.Security.IPermission)
extern "C"  IsolatedStorageFilePermission_t976714128_0 * IsolatedStorageFilePermission_Cast_m1171738277_0 (IsolatedStorageFilePermission_t976714128_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
