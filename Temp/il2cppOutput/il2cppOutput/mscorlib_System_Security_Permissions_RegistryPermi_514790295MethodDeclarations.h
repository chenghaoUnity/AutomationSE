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

// System.Security.Permissions.RegistryPermission
struct RegistryPermission_t_514790295_0;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.Collections.IList
struct IList_t_1078834989_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"
#include "mscorlib_System_Security_Permissions_RegistryPermis183163693.h"

// System.Void System.Security.Permissions.RegistryPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void RegistryPermission__ctor_m_470578980_0 (RegistryPermission_t_514790295_0 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::AddPathList(System.Security.Permissions.RegistryPermissionAccess,System.String)
extern "C"  void RegistryPermission_AddPathList_m2020722274_0 (RegistryPermission_t_514790295_0 * __this, int32_t ___access, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.RegistryPermission::GetPathList(System.Security.Permissions.RegistryPermissionAccess)
extern "C"  String_t* RegistryPermission_GetPathList_m_316531944_0 (RegistryPermission_t_514790295_0 * __this, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::SetPathList(System.Security.Permissions.RegistryPermissionAccess,System.String)
extern "C"  void RegistryPermission_SetPathList_m523954339_0 (RegistryPermission_t_514790295_0 * __this, int32_t ___access, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.RegistryPermission::Copy()
extern "C"  Object_t * RegistryPermission_Copy_m_1295782314_0 (RegistryPermission_t_514790295_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::FromXml(System.Security.SecurityElement)
extern "C"  void RegistryPermission_FromXml_m_360853523_0 (RegistryPermission_t_514790295_0 * __this, SecurityElement_t117540681_0 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.RegistryPermission::Intersect(System.Security.IPermission)
extern "C"  Object_t * RegistryPermission_Intersect_m_453690327_0 (RegistryPermission_t_514790295_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool RegistryPermission_IsSubsetOf_m533470637_0 (RegistryPermission_t_514790295_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::IsUnrestricted()
extern "C"  bool RegistryPermission_IsUnrestricted_m230908055_0 (RegistryPermission_t_514790295_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.RegistryPermission::ToXml()
extern "C"  SecurityElement_t117540681_0 * RegistryPermission_ToXml_m260181121_0 (RegistryPermission_t_514790295_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.RegistryPermission::Union(System.Security.IPermission)
extern "C"  Object_t * RegistryPermission_Union_m_1129154439_0 (RegistryPermission_t_514790295_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::IsEmpty()
extern "C"  bool RegistryPermission_IsEmpty_m1195849836_0 (RegistryPermission_t_514790295_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.RegistryPermission System.Security.Permissions.RegistryPermission::Cast(System.Security.IPermission)
extern "C"  RegistryPermission_t_514790295_0 * RegistryPermission_Cast_m122710509_0 (RegistryPermission_t_514790295_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::ThrowInvalidFlag(System.Security.Permissions.RegistryPermissionAccess,System.Boolean)
extern "C"  void RegistryPermission_ThrowInvalidFlag_m660966962_0 (RegistryPermission_t_514790295_0 * __this, int32_t ___flag, bool ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.RegistryPermission::GetPathList(System.Collections.ArrayList)
extern "C"  String_t* RegistryPermission_GetPathList_m_1495166910_0 (RegistryPermission_t_514790295_0 * __this, ArrayList_t536890563_0 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::KeyIsSubsetOf(System.Collections.IList,System.Collections.IList)
extern "C"  bool RegistryPermission_KeyIsSubsetOf_m65028091_0 (RegistryPermission_t_514790295_0 * __this, Object_t * ___local, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::AddWithUnionKey(System.Collections.IList,System.String)
extern "C"  void RegistryPermission_AddWithUnionKey_m1394235407_0 (RegistryPermission_t_514790295_0 * __this, Object_t * ___list, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::IntersectKeys(System.Collections.IList,System.Collections.IList,System.Collections.IList)
extern "C"  void RegistryPermission_IntersectKeys_m_911666385_0 (RegistryPermission_t_514790295_0 * __this, Object_t * ___local, Object_t * ___target, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
