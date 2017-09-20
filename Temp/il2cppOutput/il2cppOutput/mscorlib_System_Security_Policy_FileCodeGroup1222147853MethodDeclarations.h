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

// System.Security.Policy.FileCodeGroup
struct FileCodeGroup_t1222147853_0;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t_448250299_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1466995657_0;
// System.Security.Policy.CodeGroup
struct CodeGroup_t_1547711319_0;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t680949556_0;
// System.Security.Policy.Evidence
struct Evidence_t_738265248_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_FileIOPermis_1823679534.h"

// System.Void System.Security.Policy.FileCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Permissions.FileIOPermissionAccess)
extern "C"  void FileCodeGroup__ctor_m1371733496_0 (FileCodeGroup_t1222147853_0 * __this, Object_t * ___membershipCondition, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FileCodeGroup__ctor_m_886737947_0 (FileCodeGroup_t1222147853_0 * __this, SecurityElement_t117540681_0 * ___e, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.FileCodeGroup::Copy()
extern "C"  CodeGroup_t_1547711319_0 * FileCodeGroup_Copy_m1605956822_0 (FileCodeGroup_t1222147853_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.FileCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t680949556_0 * FileCodeGroup_Resolve_m110064726_0 (FileCodeGroup_t1222147853_0 * __this, Evidence_t_738265248_0 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.FileCodeGroup::Equals(System.Object)
extern "C"  bool FileCodeGroup_Equals_m1325977752_0 (FileCodeGroup_t1222147853_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.FileCodeGroup::GetHashCode()
extern "C"  int32_t FileCodeGroup_GetHashCode_m2071225084_0 (FileCodeGroup_t1222147853_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FileCodeGroup_ParseXml_m_2030873701_0 (FileCodeGroup_t1222147853_0 * __this, SecurityElement_t117540681_0 * ___e, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FileCodeGroup_CreateXml_m215596670_0 (FileCodeGroup_t1222147853_0 * __this, SecurityElement_t117540681_0 * ___element, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
