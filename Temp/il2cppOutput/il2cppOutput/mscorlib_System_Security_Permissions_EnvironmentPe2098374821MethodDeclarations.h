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

// System.Security.Permissions.EnvironmentPermission
struct EnvironmentPermission_t2098374821_0;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"
#include "mscorlib_System_Security_Permissions_EnvironmentP_1956283799.h"

// System.Void System.Security.Permissions.EnvironmentPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void EnvironmentPermission__ctor_m_1992296098_0 (EnvironmentPermission_t2098374821_0 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::.ctor(System.Security.Permissions.EnvironmentPermissionAccess,System.String)
extern "C"  void EnvironmentPermission__ctor_m_854142506_0 (EnvironmentPermission_t2098374821_0 * __this, int32_t ___flag, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::AddPathList(System.Security.Permissions.EnvironmentPermissionAccess,System.String)
extern "C"  void EnvironmentPermission_AddPathList_m_824982828_0 (EnvironmentPermission_t2098374821_0 * __this, int32_t ___flag, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.EnvironmentPermission::Copy()
extern "C"  Object_t * EnvironmentPermission_Copy_m_451730812_0 (EnvironmentPermission_t2098374821_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::FromXml(System.Security.SecurityElement)
extern "C"  void EnvironmentPermission_FromXml_m_1321035025_0 (EnvironmentPermission_t2098374821_0 * __this, SecurityElement_t117540681_0 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.EnvironmentPermission::GetPathList(System.Security.Permissions.EnvironmentPermissionAccess)
extern "C"  String_t* EnvironmentPermission_GetPathList_m_2107890368_0 (EnvironmentPermission_t2098374821_0 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.EnvironmentPermission::Intersect(System.Security.IPermission)
extern "C"  Object_t * EnvironmentPermission_Intersect_m_1976027049_0 (EnvironmentPermission_t2098374821_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.EnvironmentPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool EnvironmentPermission_IsSubsetOf_m1313516591_0 (EnvironmentPermission_t2098374821_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.EnvironmentPermission::IsUnrestricted()
extern "C"  bool EnvironmentPermission_IsUnrestricted_m471759957_0 (EnvironmentPermission_t2098374821_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::SetPathList(System.Security.Permissions.EnvironmentPermissionAccess,System.String)
extern "C"  void EnvironmentPermission_SetPathList_m_688067341_0 (EnvironmentPermission_t2098374821_0 * __this, int32_t ___flag, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.EnvironmentPermission::ToXml()
extern "C"  SecurityElement_t117540681_0 * EnvironmentPermission_ToXml_m_1051649141_0 (EnvironmentPermission_t2098374821_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.EnvironmentPermission::Union(System.Security.IPermission)
extern "C"  Object_t * EnvironmentPermission_Union_m424065959_0 (EnvironmentPermission_t2098374821_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.EnvironmentPermission::IsEmpty()
extern "C"  bool EnvironmentPermission_IsEmpty_m1512355438_0 (EnvironmentPermission_t2098374821_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.EnvironmentPermission System.Security.Permissions.EnvironmentPermission::Cast(System.Security.IPermission)
extern "C"  EnvironmentPermission_t2098374821_0 * EnvironmentPermission_Cast_m782988155_0 (EnvironmentPermission_t2098374821_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.EnvironmentPermission::ThrowInvalidFlag(System.Security.Permissions.EnvironmentPermissionAccess,System.Boolean)
extern "C"  void EnvironmentPermission_ThrowInvalidFlag_m_1360685778_0 (EnvironmentPermission_t2098374821_0 * __this, int32_t ___flag, bool ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.EnvironmentPermission::GetPathList(System.Collections.ArrayList)
extern "C"  String_t* EnvironmentPermission_GetPathList_m1501164902_0 (EnvironmentPermission_t2098374821_0 * __this, ArrayList_t536890563_0 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
