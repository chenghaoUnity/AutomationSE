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

// System.Security.Permissions.FileIOPermission
struct FileIOPermission_t1490390222_0;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;
// System.Object
struct Object_t;
// System.Collections.IList
struct IList_t_1078834989_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"
#include "mscorlib_System_Security_Permissions_FileIOPermis_1823679534.h"

// System.Void System.Security.Permissions.FileIOPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void FileIOPermission__ctor_m830644225_0 (FileIOPermission_t1490390222_0 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::.ctor(System.Security.Permissions.FileIOPermissionAccess,System.String)
extern "C"  void FileIOPermission__ctor_m1088009430_0 (FileIOPermission_t1490390222_0 * __this, int32_t ___access, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::.cctor()
extern "C"  void FileIOPermission__cctor_m1707637157_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::CreateLists()
extern "C"  void FileIOPermission_CreateLists_m447831583_0 (FileIOPermission_t1490390222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::get_AllFiles()
extern "C"  int32_t FileIOPermission_get_AllFiles_m_1972331208_0 (FileIOPermission_t1490390222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::set_AllFiles(System.Security.Permissions.FileIOPermissionAccess)
extern "C"  void FileIOPermission_set_AllFiles_m_1097640607_0 (FileIOPermission_t1490390222_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::get_AllLocalFiles()
extern "C"  int32_t FileIOPermission_get_AllLocalFiles_m1459791949_0 (FileIOPermission_t1490390222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::set_AllLocalFiles(System.Security.Permissions.FileIOPermissionAccess)
extern "C"  void FileIOPermission_set_AllLocalFiles_m_865698456_0 (FileIOPermission_t1490390222_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::AddPathList(System.Security.Permissions.FileIOPermissionAccess,System.String)
extern "C"  void FileIOPermission_AddPathList_m1394867032_0 (FileIOPermission_t1490390222_0 * __this, int32_t ___access, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::AddPathList(System.Security.Permissions.FileIOPermissionAccess,System.String[])
extern "C"  void FileIOPermission_AddPathList_m437472374_0 (FileIOPermission_t1490390222_0 * __this, int32_t ___access, StringU5BU5D_t_816028754_0* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::AddPathInternal(System.Security.Permissions.FileIOPermissionAccess,System.String)
extern "C"  void FileIOPermission_AddPathInternal_m1259855927_0 (FileIOPermission_t1490390222_0 * __this, int32_t ___access, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileIOPermission::Copy()
extern "C"  Object_t * FileIOPermission_Copy_m2091746171_0 (FileIOPermission_t1490390222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::FromXml(System.Security.SecurityElement)
extern "C"  void FileIOPermission_FromXml_m1310957906_0 (FileIOPermission_t1490390222_0 * __this, SecurityElement_t117540681_0 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Security.Permissions.FileIOPermission::GetPathList(System.Security.Permissions.FileIOPermissionAccess)
extern "C"  StringU5BU5D_t_816028754_0* FileIOPermission_GetPathList_m_1102982352_0 (FileIOPermission_t1490390222_0 * __this, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileIOPermission::Intersect(System.Security.IPermission)
extern "C"  Object_t * FileIOPermission_Intersect_m_1955005106_0 (FileIOPermission_t1490390222_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool FileIOPermission_IsSubsetOf_m518824744_0 (FileIOPermission_t1490390222_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::IsUnrestricted()
extern "C"  bool FileIOPermission_IsUnrestricted_m1725344124_0 (FileIOPermission_t1490390222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.FileIOPermission::ToXml()
extern "C"  SecurityElement_t117540681_0 * FileIOPermission_ToXml_m_1740256004_0 (FileIOPermission_t1490390222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileIOPermission::Union(System.Security.IPermission)
extern "C"  Object_t * FileIOPermission_Union_m2007405598_0 (FileIOPermission_t1490390222_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::Equals(System.Object)
extern "C"  bool FileIOPermission_Equals_m_213370697_0 (FileIOPermission_t1490390222_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Permissions.FileIOPermission::GetHashCode()
extern "C"  int32_t FileIOPermission_GetHashCode_m392254491_0 (FileIOPermission_t1490390222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::IsEmpty()
extern "C"  bool FileIOPermission_IsEmpty_m1312683815_0 (FileIOPermission_t1490390222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.FileIOPermission System.Security.Permissions.FileIOPermission::Cast(System.Security.IPermission)
extern "C"  FileIOPermission_t1490390222_0 * FileIOPermission_Cast_m_680555251_0 (Object_t * __this /* static, unused */, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::ThrowInvalidFlag(System.Security.Permissions.FileIOPermissionAccess,System.Boolean)
extern "C"  void FileIOPermission_ThrowInvalidFlag_m1283114642_0 (Object_t * __this /* static, unused */, int32_t ___access, bool ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::ThrowIfInvalidPath(System.String)
extern "C"  void FileIOPermission_ThrowIfInvalidPath_m_298593971_0 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::ThrowIfInvalidPath(System.String[])
extern "C"  void FileIOPermission_ThrowIfInvalidPath_m814053675_0 (Object_t * __this /* static, unused */, StringU5BU5D_t_816028754_0* ___paths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::KeyIsSubsetOf(System.Collections.IList,System.Collections.IList)
extern "C"  bool FileIOPermission_KeyIsSubsetOf_m341461728_0 (Object_t * __this /* static, unused */, Object_t * ___local, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::UnionKeys(System.Collections.IList,System.String[])
extern "C"  void FileIOPermission_UnionKeys_m_160074860_0 (Object_t * __this /* static, unused */, Object_t * ___list, StringU5BU5D_t_816028754_0* ___paths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::IntersectKeys(System.Collections.IList,System.Collections.IList,System.Collections.IList)
extern "C"  void FileIOPermission_IntersectKeys_m_1322128278_0 (Object_t * __this /* static, unused */, Object_t * ___local, Object_t * ___target, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
