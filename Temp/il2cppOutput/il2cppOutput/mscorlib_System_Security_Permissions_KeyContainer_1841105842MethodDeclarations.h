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

// System.Security.Permissions.KeyContainerPermission
struct KeyContainerPermission_t_1841105842_0;
// System.Security.Permissions.KeyContainerPermissionAccessEntry[]
struct KeyContainerPermissionAccessEntryU5BU5D_t_1503677534_0;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"
#include "mscorlib_System_Security_Permissions_KeyContainerP1855752921.h"

// System.Void System.Security.Permissions.KeyContainerPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void KeyContainerPermission__ctor_m_1702598207_0 (KeyContainerPermission_t_1841105842_0 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::.ctor(System.Security.Permissions.KeyContainerPermissionFlags)
extern "C"  void KeyContainerPermission__ctor_m_181792627_0 (KeyContainerPermission_t_1841105842_0 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::.ctor(System.Security.Permissions.KeyContainerPermissionFlags,System.Security.Permissions.KeyContainerPermissionAccessEntry[])
extern "C"  void KeyContainerPermission__ctor_m_1588834957_0 (KeyContainerPermission_t_1841105842_0 * __this, int32_t ___flags, KeyContainerPermissionAccessEntryU5BU5D_t_1503677534_0* ___accessList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.KeyContainerPermission::Copy()
extern "C"  Object_t * KeyContainerPermission_Copy_m_658883141_0 (KeyContainerPermission_t_1841105842_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::FromXml(System.Security.SecurityElement)
extern "C"  void KeyContainerPermission_FromXml_m_415065326_0 (KeyContainerPermission_t_1841105842_0 * __this, SecurityElement_t117540681_0 * ___securityElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.KeyContainerPermission::Intersect(System.Security.IPermission)
extern "C"  Object_t * KeyContainerPermission_Intersect_m_334710898_0 (KeyContainerPermission_t_1841105842_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.KeyContainerPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool KeyContainerPermission_IsSubsetOf_m_2102572312_0 (KeyContainerPermission_t_1841105842_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.KeyContainerPermission::IsUnrestricted()
extern "C"  bool KeyContainerPermission_IsUnrestricted_m1833417148_0 (KeyContainerPermission_t_1841105842_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.KeyContainerPermission::ToXml()
extern "C"  SecurityElement_t117540681_0 * KeyContainerPermission_ToXml_m_2146891844_0 (KeyContainerPermission_t_1841105842_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.KeyContainerPermission::Union(System.Security.IPermission)
extern "C"  Object_t * KeyContainerPermission_Union_m_374247842_0 (KeyContainerPermission_t_1841105842_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::SetFlags(System.Security.Permissions.KeyContainerPermissionFlags)
extern "C"  void KeyContainerPermission_SetFlags_m_1793333708_0 (KeyContainerPermission_t_1841105842_0 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.KeyContainerPermission System.Security.Permissions.KeyContainerPermission::Cast(System.Security.IPermission)
extern "C"  KeyContainerPermission_t_1841105842_0 * KeyContainerPermission_Cast_m_335796339_0 (KeyContainerPermission_t_1841105842_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
