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

// System.Security.Policy.NetCodeGroup
struct NetCodeGroup_t119449598_0;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t_448250299_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1466995657_0;
// System.Security.Policy.CodeGroup
struct CodeGroup_t_1547711319_0;
// System.Security.Policy.CodeConnectAccess[]
struct CodeConnectAccessU5BU5D_t1585771642_0;
// System.Object
struct Object_t;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t680949556_0;
// System.Security.Policy.Evidence
struct Evidence_t_738265248_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Policy.NetCodeGroup::.ctor(System.Security.Policy.IMembershipCondition)
extern "C"  void NetCodeGroup__ctor_m788856791_0 (NetCodeGroup_t119449598_0 * __this, Object_t * ___membershipCondition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void NetCodeGroup__ctor_m_140314546_0 (NetCodeGroup_t119449598_0 * __this, SecurityElement_t117540681_0 * ___e, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::.cctor()
extern "C"  void NetCodeGroup__cctor_m_233174885_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.NetCodeGroup::Copy()
extern "C"  CodeGroup_t_1547711319_0 * NetCodeGroup_Copy_m982483457_0 (NetCodeGroup_t119449598_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.NetCodeGroup::Equals(System.Security.Policy.CodeConnectAccess[],System.Security.Policy.CodeConnectAccess[])
extern "C"  bool NetCodeGroup_Equals_m_1341278089_0 (NetCodeGroup_t119449598_0 * __this, CodeConnectAccessU5BU5D_t1585771642_0* ___rules1, CodeConnectAccessU5BU5D_t1585771642_0* ___rules2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.NetCodeGroup::Equals(System.Object)
extern "C"  bool NetCodeGroup_Equals_m1413032005_0 (NetCodeGroup_t119449598_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.NetCodeGroup::GetHashCode()
extern "C"  int32_t NetCodeGroup_GetHashCode_m_1734776419_0 (NetCodeGroup_t119449598_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.NetCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t680949556_0 * NetCodeGroup_Resolve_m_1166371849_0 (NetCodeGroup_t119449598_0 * __this, Evidence_t_738265248_0 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void NetCodeGroup_CreateXml_m_54729113_0 (NetCodeGroup_t119449598_0 * __this, SecurityElement_t117540681_0 * ___element, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void NetCodeGroup_ParseXml_m_377025902_0 (NetCodeGroup_t119449598_0 * __this, SecurityElement_t117540681_0 * ___e, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
