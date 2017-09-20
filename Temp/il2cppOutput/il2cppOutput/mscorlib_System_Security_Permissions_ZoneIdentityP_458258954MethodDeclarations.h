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

// System.Security.Permissions.ZoneIdentityPermission
struct ZoneIdentityPermission_t_458258954_0;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityZone2101044863.h"

// System.Void System.Security.Permissions.ZoneIdentityPermission::.ctor(System.Security.SecurityZone)
extern "C"  void ZoneIdentityPermission__ctor_m17979109_0 (ZoneIdentityPermission_t_458258954_0 * __this, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Copy()
extern "C"  Object_t * ZoneIdentityPermission_Copy_m250521443_0 (ZoneIdentityPermission_t_458258954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.ZoneIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool ZoneIdentityPermission_IsSubsetOf_m121812544_0 (ZoneIdentityPermission_t_458258954_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Union(System.Security.IPermission)
extern "C"  Object_t * ZoneIdentityPermission_Union_m1795968006_0 (ZoneIdentityPermission_t_458258954_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Object_t * ZoneIdentityPermission_Intersect_m1676706102_0 (ZoneIdentityPermission_t_458258954_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ZoneIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void ZoneIdentityPermission_FromXml_m_178611526_0 (ZoneIdentityPermission_t_458258954_0 * __this, SecurityElement_t117540681_0 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.ZoneIdentityPermission::ToXml()
extern "C"  SecurityElement_t117540681_0 * ZoneIdentityPermission_ToXml_m274846484_0 (ZoneIdentityPermission_t_458258954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ZoneIdentityPermission::set_SecurityZone(System.Security.SecurityZone)
extern "C"  void ZoneIdentityPermission_set_SecurityZone_m_1930026382_0 (ZoneIdentityPermission_t_458258954_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.ZoneIdentityPermission System.Security.Permissions.ZoneIdentityPermission::Cast(System.Security.IPermission)
extern "C"  ZoneIdentityPermission_t_458258954_0 * ZoneIdentityPermission_Cast_m1565530253_0 (ZoneIdentityPermission_t_458258954_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
