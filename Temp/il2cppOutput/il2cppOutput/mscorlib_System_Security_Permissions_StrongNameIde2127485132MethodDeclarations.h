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

// System.Security.Permissions.StrongNameIdentityPermission
struct StrongNameIdentityPermission_t2127485132_0;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t_847256332_0;
// System.String
struct String_t;
// System.Version
struct Version_t267380989_0;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"
#include "mscorlib_System_Security_Permissions_StrongNameId_2020474843.h"

// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void StrongNameIdentityPermission__ctor_m1585978751_0 (StrongNameIdentityPermission_t2127485132_0 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C"  void StrongNameIdentityPermission__ctor_m373253377_0 (StrongNameIdentityPermission_t2127485132_0 * __this, StrongNamePublicKeyBlob_t_847256332_0 * ___blob, String_t* ___name, Version_t267380989_0 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.StrongNameIdentityPermission)
extern "C"  void StrongNameIdentityPermission__ctor_m_1594763934_0 (StrongNameIdentityPermission_t2127485132_0 * __this, StrongNameIdentityPermission_t2127485132_0 * ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.cctor()
extern "C"  void StrongNameIdentityPermission__cctor_m_954035037_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.StrongNameIdentityPermission::get_Name()
extern "C"  String_t* StrongNameIdentityPermission_get_Name_m1169073777_0 (StrongNameIdentityPermission_t2127485132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNameIdentityPermission::get_PublicKey()
extern "C"  StrongNamePublicKeyBlob_t_847256332_0 * StrongNameIdentityPermission_get_PublicKey_m_899688486_0 (StrongNameIdentityPermission_t2127485132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Permissions.StrongNameIdentityPermission::get_Version()
extern "C"  Version_t267380989_0 * StrongNameIdentityPermission_get_Version_m756233413_0 (StrongNameIdentityPermission_t2127485132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Copy()
extern "C"  Object_t * StrongNameIdentityPermission_Copy_m_1370061063_0 (StrongNameIdentityPermission_t2127485132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void StrongNameIdentityPermission_FromXml_m_1935522736_0 (StrongNameIdentityPermission_t2127485132_0 * __this, SecurityElement_t117540681_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission/SNIP System.Security.Permissions.StrongNameIdentityPermission::FromSecurityElement(System.Security.SecurityElement)
extern "C"  SNIP_t_2020474843_0  StrongNameIdentityPermission_FromSecurityElement_m1843625365_0 (StrongNameIdentityPermission_t2127485132_0 * __this, SecurityElement_t117540681_0 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Object_t * StrongNameIdentityPermission_Intersect_m1350863052_0 (StrongNameIdentityPermission_t2127485132_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool StrongNameIdentityPermission_IsSubsetOf_m659635050_0 (StrongNameIdentityPermission_t2127485132_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.StrongNameIdentityPermission::ToXml()
extern "C"  SecurityElement_t117540681_0 * StrongNameIdentityPermission_ToXml_m741921598_0 (StrongNameIdentityPermission_t2127485132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::ToSecurityElement(System.Security.SecurityElement,System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C"  void StrongNameIdentityPermission_ToSecurityElement_m_6069377_0 (StrongNameIdentityPermission_t2127485132_0 * __this, SecurityElement_t117540681_0 * ___se, SNIP_t_2020474843_0  ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Union(System.Security.IPermission)
extern "C"  Object_t * StrongNameIdentityPermission_Union_m1188007580_0 (StrongNameIdentityPermission_t2127485132_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsUnrestricted()
extern "C"  bool StrongNameIdentityPermission_IsUnrestricted_m660845434_0 (StrongNameIdentityPermission_t2127485132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::Contains(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C"  bool StrongNameIdentityPermission_Contains_m2100415886_0 (StrongNameIdentityPermission_t2127485132_0 * __this, SNIP_t_2020474843_0  ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsEmpty(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C"  bool StrongNameIdentityPermission_IsEmpty_m1650442496_0 (StrongNameIdentityPermission_t2127485132_0 * __this, SNIP_t_2020474843_0  ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsEmpty()
extern "C"  bool StrongNameIdentityPermission_IsEmpty_m_864219415_0 (StrongNameIdentityPermission_t2127485132_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission System.Security.Permissions.StrongNameIdentityPermission::Cast(System.Security.IPermission)
extern "C"  StrongNameIdentityPermission_t2127485132_0 * StrongNameIdentityPermission_Cast_m_2136745907_0 (StrongNameIdentityPermission_t2127485132_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::Match(System.String)
extern "C"  bool StrongNameIdentityPermission_Match_m1262725559_0 (StrongNameIdentityPermission_t2127485132_0 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
