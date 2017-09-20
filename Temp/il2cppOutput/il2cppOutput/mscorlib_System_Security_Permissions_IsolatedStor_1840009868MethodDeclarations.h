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

// System.Security.Permissions.IsolatedStoragePermission
struct IsolatedStoragePermission_t_1840009868_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"
#include "mscorlib_System_Security_Permissions_IsolatedStor_2131575507.h"

// System.Void System.Security.Permissions.IsolatedStoragePermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void IsolatedStoragePermission__ctor_m2050851629_0 (IsolatedStoragePermission_t_1840009868_0 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.IsolatedStoragePermission::set_UserQuota(System.Int64)
extern "C"  void IsolatedStoragePermission_set_UserQuota_m_1755624676_0 (IsolatedStoragePermission_t_1840009868_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.IsolatedStoragePermission::set_UsageAllowed(System.Security.Permissions.IsolatedStorageContainment)
extern "C"  void IsolatedStoragePermission_set_UsageAllowed_m536824067_0 (IsolatedStoragePermission_t_1840009868_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.IsolatedStoragePermission::IsUnrestricted()
extern "C"  bool IsolatedStoragePermission_IsUnrestricted_m1810176740_0 (IsolatedStoragePermission_t_1840009868_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.IsolatedStoragePermission::ToXml()
extern "C"  SecurityElement_t117540681_0 * IsolatedStoragePermission_ToXml_m_672092644_0 (IsolatedStoragePermission_t_1840009868_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.IsolatedStoragePermission::FromXml(System.Security.SecurityElement)
extern "C"  void IsolatedStoragePermission_FromXml_m_1495512194_0 (IsolatedStoragePermission_t_1840009868_0 * __this, SecurityElement_t117540681_0 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.IsolatedStoragePermission::IsEmpty()
extern "C"  bool IsolatedStoragePermission_IsEmpty_m450808511_0 (IsolatedStoragePermission_t_1840009868_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
