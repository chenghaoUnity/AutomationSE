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

// System.Security.Permissions.FileDialogPermission
struct FileDialogPermission_t_1159643632_0;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"
#include "mscorlib_System_Security_Permissions_FileDialogPer_747957356.h"

// System.Void System.Security.Permissions.FileDialogPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void FileDialogPermission__ctor_m_756841021_0 (FileDialogPermission_t_1159643632_0 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileDialogPermission::.ctor(System.Security.Permissions.FileDialogPermissionAccess)
extern "C"  void FileDialogPermission__ctor_m_1242180074_0 (FileDialogPermission_t_1159643632_0 * __this, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileDialogPermission::set_Access(System.Security.Permissions.FileDialogPermissionAccess)
extern "C"  void FileDialogPermission_set_Access_m1935619759_0 (FileDialogPermission_t_1159643632_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileDialogPermission::Copy()
extern "C"  Object_t * FileDialogPermission_Copy_m_155848899_0 (FileDialogPermission_t_1159643632_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileDialogPermission::FromXml(System.Security.SecurityElement)
extern "C"  void FileDialogPermission_FromXml_m_1127059052_0 (FileDialogPermission_t_1159643632_0 * __this, SecurityElement_t117540681_0 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileDialogPermission::Intersect(System.Security.IPermission)
extern "C"  Object_t * FileDialogPermission_Intersect_m1855054096_0 (FileDialogPermission_t_1159643632_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileDialogPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool FileDialogPermission_IsSubsetOf_m_1894222938_0 (FileDialogPermission_t_1159643632_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileDialogPermission::IsUnrestricted()
extern "C"  bool FileDialogPermission_IsUnrestricted_m1951403710_0 (FileDialogPermission_t_1159643632_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.FileDialogPermission::ToXml()
extern "C"  SecurityElement_t117540681_0 * FileDialogPermission_ToXml_m_1472350342_0 (FileDialogPermission_t_1159643632_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileDialogPermission::Union(System.Security.IPermission)
extern "C"  Object_t * FileDialogPermission_Union_m_927225632_0 (FileDialogPermission_t_1159643632_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.FileDialogPermission System.Security.Permissions.FileDialogPermission::Cast(System.Security.IPermission)
extern "C"  FileDialogPermission_t_1159643632_0 * FileDialogPermission_Cast_m_1118611507_0 (FileDialogPermission_t_1159643632_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
