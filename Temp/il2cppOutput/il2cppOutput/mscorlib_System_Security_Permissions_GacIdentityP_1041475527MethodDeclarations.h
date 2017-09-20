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

// System.Security.Permissions.GacIdentityPermission
struct GacIdentityPermission_t_1041475527_0;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Permissions.GacIdentityPermission::.ctor()
extern "C"  void GacIdentityPermission__ctor_m_804064073_0 (GacIdentityPermission_t_1041475527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Copy()
extern "C"  Object_t * GacIdentityPermission_Copy_m_1067581928_0 (GacIdentityPermission_t_1041475527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Object_t * GacIdentityPermission_Intersect_m202359787_0 (GacIdentityPermission_t_1041475527_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.GacIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool GacIdentityPermission_IsSubsetOf_m124031771_0 (GacIdentityPermission_t_1041475527_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Union(System.Security.IPermission)
extern "C"  Object_t * GacIdentityPermission_Union_m_1136971461_0 (GacIdentityPermission_t_1041475527_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.GacIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void GacIdentityPermission_FromXml_m459641219_0 (GacIdentityPermission_t_1041475527_0 * __this, SecurityElement_t117540681_0 * ___securityElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.GacIdentityPermission::ToXml()
extern "C"  SecurityElement_t117540681_0 * GacIdentityPermission_ToXml_m1331802743_0 (GacIdentityPermission_t_1041475527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.GacIdentityPermission System.Security.Permissions.GacIdentityPermission::Cast(System.Security.IPermission)
extern "C"  GacIdentityPermission_t_1041475527_0 * GacIdentityPermission_Cast_m_774623149_0 (GacIdentityPermission_t_1041475527_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
