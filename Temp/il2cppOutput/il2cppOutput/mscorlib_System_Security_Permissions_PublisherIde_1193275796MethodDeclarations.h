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

// System.Security.Permissions.PublisherIdentityPermission
struct PublisherIdentityPermission_t_1193275796_0;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1524084820_0;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"

// System.Void System.Security.Permissions.PublisherIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void PublisherIdentityPermission__ctor_m343875429_0 (PublisherIdentityPermission_t_1193275796_0 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void PublisherIdentityPermission__ctor_m1228301654_0 (PublisherIdentityPermission_t_1193275796_0 * __this, X509Certificate_t1524084820_0 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::set_Certificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void PublisherIdentityPermission_set_Certificate_m_100712002_0 (PublisherIdentityPermission_t_1193275796_0 * __this, X509Certificate_t1524084820_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Copy()
extern "C"  Object_t * PublisherIdentityPermission_Copy_m_130763125_0 (PublisherIdentityPermission_t_1193275796_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void PublisherIdentityPermission_FromXml_m2079411638_0 (PublisherIdentityPermission_t_1193275796_0 * __this, SecurityElement_t117540681_0 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Object_t * PublisherIdentityPermission_Intersect_m49279070_0 (PublisherIdentityPermission_t_1193275796_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.PublisherIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool PublisherIdentityPermission_IsSubsetOf_m986520328_0 (PublisherIdentityPermission_t_1193275796_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.PublisherIdentityPermission::ToXml()
extern "C"  SecurityElement_t117540681_0 * PublisherIdentityPermission_ToXml_m697138020_0 (PublisherIdentityPermission_t_1193275796_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Union(System.Security.IPermission)
extern "C"  Object_t * PublisherIdentityPermission_Union_m1915850542_0 (PublisherIdentityPermission_t_1193275796_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.PublisherIdentityPermission System.Security.Permissions.PublisherIdentityPermission::Cast(System.Security.IPermission)
extern "C"  PublisherIdentityPermission_t_1193275796_0 * PublisherIdentityPermission_Cast_m_469792531_0 (PublisherIdentityPermission_t_1193275796_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
