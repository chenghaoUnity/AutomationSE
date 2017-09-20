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

// System.Security.Policy.UnionCodeGroup
struct UnionCodeGroup_t1875752140_0;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t_448250299_0;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t680949556_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1466995657_0;
// System.Security.Policy.CodeGroup
struct CodeGroup_t_1547711319_0;
// System.Security.Policy.Evidence
struct Evidence_t_738265248_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Policy.UnionCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C"  void UnionCodeGroup__ctor_m1956265457_0 (UnionCodeGroup_t1875752140_0 * __this, Object_t * ___membershipCondition, PolicyStatement_t680949556_0 * ___policy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.UnionCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void UnionCodeGroup__ctor_m1694248832_0 (UnionCodeGroup_t1875752140_0 * __this, SecurityElement_t117540681_0 * ___e, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.UnionCodeGroup::Copy()
extern "C"  CodeGroup_t_1547711319_0 * UnionCodeGroup_Copy_m1862744463_0 (UnionCodeGroup_t1875752140_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.UnionCodeGroup::Copy(System.Boolean)
extern "C"  CodeGroup_t_1547711319_0 * UnionCodeGroup_Copy_m627476678_0 (UnionCodeGroup_t1875752140_0 * __this, bool ___childs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.UnionCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t680949556_0 * UnionCodeGroup_Resolve_m1015759173_0 (UnionCodeGroup_t1875752140_0 * __this, Evidence_t_738265248_0 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
