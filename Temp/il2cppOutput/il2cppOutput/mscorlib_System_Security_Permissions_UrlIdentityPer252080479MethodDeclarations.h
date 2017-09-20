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

// System.Security.Permissions.UrlIdentityPermission
struct UrlIdentityPermission_t252080479_0;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"

// System.Void System.Security.Permissions.UrlIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void UrlIdentityPermission__ctor_m_1895515880_0 (UrlIdentityPermission_t252080479_0 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::.ctor(System.String)
extern "C"  void UrlIdentityPermission__ctor_m104096849_0 (UrlIdentityPermission_t252080479_0 * __this, String_t* ___site, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::set_Url(System.String)
extern "C"  void UrlIdentityPermission_set_Url_m700312865_0 (UrlIdentityPermission_t252080479_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Copy()
extern "C"  Object_t * UrlIdentityPermission_Copy_m74944830_0 (UrlIdentityPermission_t252080479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void UrlIdentityPermission_FromXml_m_746136791_0 (UrlIdentityPermission_t252080479_0 * __this, SecurityElement_t117540681_0 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Object_t * UrlIdentityPermission_Intersect_m992165649_0 (UrlIdentityPermission_t252080479_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool UrlIdentityPermission_IsSubsetOf_m_1161790283_0 (UrlIdentityPermission_t252080479_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.UrlIdentityPermission::ToXml()
extern "C"  SecurityElement_t117540681_0 * UrlIdentityPermission_ToXml_m_1904573423_0 (UrlIdentityPermission_t252080479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Union(System.Security.IPermission)
extern "C"  Object_t * UrlIdentityPermission_Union_m1390817121_0 (UrlIdentityPermission_t252080479_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::IsEmpty()
extern "C"  bool UrlIdentityPermission_IsEmpty_m_2104093324_0 (UrlIdentityPermission_t252080479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.UrlIdentityPermission System.Security.Permissions.UrlIdentityPermission::Cast(System.Security.IPermission)
extern "C"  UrlIdentityPermission_t252080479_0 * UrlIdentityPermission_Cast_m955596807_0 (UrlIdentityPermission_t252080479_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::Match(System.String)
extern "C"  bool UrlIdentityPermission_Match_m1390390860_0 (UrlIdentityPermission_t252080479_0 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
