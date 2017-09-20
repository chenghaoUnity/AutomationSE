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

// System.Security.Policy.FirstMatchCodeGroup
struct FirstMatchCodeGroup_t1276476020_0;
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

// System.Void System.Security.Policy.FirstMatchCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C"  void FirstMatchCodeGroup__ctor_m842302031_0 (FirstMatchCodeGroup_t1276476020_0 * __this, Object_t * ___membershipCondition, PolicyStatement_t680949556_0 * ___policy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FirstMatchCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FirstMatchCodeGroup__ctor_m_776540194_0 (FirstMatchCodeGroup_t1276476020_0 * __this, SecurityElement_t117540681_0 * ___e, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.FirstMatchCodeGroup::Copy()
extern "C"  CodeGroup_t_1547711319_0 * FirstMatchCodeGroup_Copy_m_978950403_0 (FirstMatchCodeGroup_t1276476020_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.FirstMatchCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t680949556_0 * FirstMatchCodeGroup_Resolve_m707000573_0 (FirstMatchCodeGroup_t1276476020_0 * __this, Evidence_t_738265248_0 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.FirstMatchCodeGroup System.Security.Policy.FirstMatchCodeGroup::CopyNoChildren()
extern "C"  FirstMatchCodeGroup_t1276476020_0 * FirstMatchCodeGroup_CopyNoChildren_m2107878674_0 (FirstMatchCodeGroup_t1276476020_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
