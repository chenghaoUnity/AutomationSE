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

// System.Security.Permissions.ReflectionPermission
struct ReflectionPermission_t_69309545_0;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"
#include "mscorlib_System_Security_Permissions_ReflectionPer_920503389.h"

// System.Void System.Security.Permissions.ReflectionPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void ReflectionPermission__ctor_m1250414026_0 (ReflectionPermission_t_69309545_0 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ReflectionPermission::.ctor(System.Security.Permissions.ReflectionPermissionFlag)
extern "C"  void ReflectionPermission__ctor_m_2057942016_0 (ReflectionPermission_t_69309545_0 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.ReflectionPermissionFlag System.Security.Permissions.ReflectionPermission::get_Flags()
extern "C"  int32_t ReflectionPermission_get_Flags_m1908790767_0 (ReflectionPermission_t_69309545_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ReflectionPermission::set_Flags(System.Security.Permissions.ReflectionPermissionFlag)
extern "C"  void ReflectionPermission_set_Flags_m_1915545336_0 (ReflectionPermission_t_69309545_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ReflectionPermission::Copy()
extern "C"  Object_t * ReflectionPermission_Copy_m575448516_0 (ReflectionPermission_t_69309545_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ReflectionPermission::FromXml(System.Security.SecurityElement)
extern "C"  void ReflectionPermission_FromXml_m_678902181_0 (ReflectionPermission_t_69309545_0 * __this, SecurityElement_t117540681_0 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ReflectionPermission::Intersect(System.Security.IPermission)
extern "C"  Object_t * ReflectionPermission_Intersect_m2123676567_0 (ReflectionPermission_t_69309545_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.ReflectionPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool ReflectionPermission_IsSubsetOf_m2138106367_0 (ReflectionPermission_t_69309545_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.ReflectionPermission::IsUnrestricted()
extern "C"  bool ReflectionPermission_IsUnrestricted_m_1206548347_0 (ReflectionPermission_t_69309545_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.ReflectionPermission::ToXml()
extern "C"  SecurityElement_t117540681_0 * ReflectionPermission_ToXml_m_276966957_0 (ReflectionPermission_t_69309545_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ReflectionPermission::Union(System.Security.IPermission)
extern "C"  Object_t * ReflectionPermission_Union_m_320413977_0 (ReflectionPermission_t_69309545_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.ReflectionPermission System.Security.Permissions.ReflectionPermission::Cast(System.Security.IPermission)
extern "C"  ReflectionPermission_t_69309545_0 * ReflectionPermission_Cast_m_1562365715_0 (ReflectionPermission_t_69309545_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
