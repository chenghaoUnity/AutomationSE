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

// System.Security.Permissions.SiteIdentityPermission
struct SiteIdentityPermission_t1497149649_0;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"

// System.Void System.Security.Permissions.SiteIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void SiteIdentityPermission__ctor_m1717631684_0 (SiteIdentityPermission_t1497149649_0 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SiteIdentityPermission::.ctor(System.String)
extern "C"  void SiteIdentityPermission__ctor_m1223465725_0 (SiteIdentityPermission_t1497149649_0 * __this, String_t* ___site, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SiteIdentityPermission::.cctor()
extern "C"  void SiteIdentityPermission__cctor_m591702056_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SiteIdentityPermission::set_Site(System.String)
extern "C"  void SiteIdentityPermission_set_Site_m_1124710817_0 (SiteIdentityPermission_t1497149649_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SiteIdentityPermission::Copy()
extern "C"  Object_t * SiteIdentityPermission_Copy_m_1220753602_0 (SiteIdentityPermission_t1497149649_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SiteIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void SiteIdentityPermission_FromXml_m1154286549_0 (SiteIdentityPermission_t1497149649_0 * __this, SecurityElement_t117540681_0 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SiteIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Object_t * SiteIdentityPermission_Intersect_m462451985_0 (SiteIdentityPermission_t1497149649_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SiteIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool SiteIdentityPermission_IsSubsetOf_m1134640581_0 (SiteIdentityPermission_t1497149649_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.SiteIdentityPermission::ToXml()
extern "C"  SecurityElement_t117540681_0 * SiteIdentityPermission_ToXml_m1909960345_0 (SiteIdentityPermission_t1497149649_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SiteIdentityPermission::Union(System.Security.IPermission)
extern "C"  Object_t * SiteIdentityPermission_Union_m_1235327647_0 (SiteIdentityPermission_t1497149649_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SiteIdentityPermission::IsEmpty()
extern "C"  bool SiteIdentityPermission_IsEmpty_m_201125244_0 (SiteIdentityPermission_t1497149649_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.SiteIdentityPermission System.Security.Permissions.SiteIdentityPermission::Cast(System.Security.IPermission)
extern "C"  SiteIdentityPermission_t1497149649_0 * SiteIdentityPermission_Cast_m_232434579_0 (SiteIdentityPermission_t1497149649_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SiteIdentityPermission::IsValid(System.String)
extern "C"  bool SiteIdentityPermission_IsValid_m_2130762641_0 (SiteIdentityPermission_t1497149649_0 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SiteIdentityPermission::Match(System.String)
extern "C"  bool SiteIdentityPermission_Match_m293398332_0 (SiteIdentityPermission_t1497149649_0 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
