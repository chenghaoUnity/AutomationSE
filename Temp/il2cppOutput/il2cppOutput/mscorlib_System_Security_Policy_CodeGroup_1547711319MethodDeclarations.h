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

// System.Security.Policy.CodeGroup
struct CodeGroup_t_1547711319_0;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t_448250299_0;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t680949556_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1466995657_0;
// System.String
struct String_t;
// System.Collections.IList
struct IList_t_1078834989_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Policy.CodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C"  void CodeGroup__ctor_m2017258170_0 (CodeGroup_t_1547711319_0 * __this, Object_t * ___membershipCondition, PolicyStatement_t680949556_0 * ___policy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void CodeGroup__ctor_m297504329_0 (CodeGroup_t_1547711319_0 * __this, SecurityElement_t117540681_0 * ___e, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::get_PolicyStatement()
extern "C"  PolicyStatement_t680949556_0 * CodeGroup_get_PolicyStatement_m_1312362812_0 (CodeGroup_t_1547711319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_PolicyStatement(System.Security.Policy.PolicyStatement)
extern "C"  void CodeGroup_set_PolicyStatement_m_2113927589_0 (CodeGroup_t_1547711319_0 * __this, PolicyStatement_t680949556_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.CodeGroup::get_Description()
extern "C"  String_t* CodeGroup_get_Description_m_811592261_0 (CodeGroup_t_1547711319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_Description(System.String)
extern "C"  void CodeGroup_set_Description_m_319711048_0 (CodeGroup_t_1547711319_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::get_MembershipCondition()
extern "C"  Object_t * CodeGroup_get_MembershipCondition_m1069806301_0 (CodeGroup_t_1547711319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.CodeGroup::get_Name()
extern "C"  String_t* CodeGroup_get_Name_m_2008283442_0 (CodeGroup_t_1547711319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_Name(System.String)
extern "C"  void CodeGroup_set_Name_m_675815293_0 (CodeGroup_t_1547711319_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Security.Policy.CodeGroup::get_Children()
extern "C"  Object_t * CodeGroup_get_Children_m_378603109_0 (CodeGroup_t_1547711319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::AddChild(System.Security.Policy.CodeGroup)
extern "C"  void CodeGroup_AddChild_m1295765677_0 (CodeGroup_t_1547711319_0 * __this, CodeGroup_t_1547711319_0 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Object)
extern "C"  bool CodeGroup_Equals_m_1132911620_0 (CodeGroup_t_1547711319_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Security.Policy.CodeGroup,System.Boolean)
extern "C"  bool CodeGroup_Equals_m1198507690_0 (CodeGroup_t_1547711319_0 * __this, CodeGroup_t_1547711319_0 * ___cg, bool ___compareChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.CodeGroup::GetHashCode()
extern "C"  int32_t CodeGroup_GetHashCode_m_1737581216_0 (CodeGroup_t_1547711319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void CodeGroup_FromXml_m2137875188_0 (CodeGroup_t_1547711319_0 * __this, SecurityElement_t117540681_0 * ___e, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void CodeGroup_ParseXml_m_1130598729_0 (CodeGroup_t_1547711319_0 * __this, SecurityElement_t117540681_0 * ___e, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.CodeGroup::ToXml()
extern "C"  SecurityElement_t117540681_0 * CodeGroup_ToXml_m_1745764607_0 (CodeGroup_t_1547711319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.CodeGroup::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t117540681_0 * CodeGroup_ToXml_m1708899516_0 (CodeGroup_t_1547711319_0 * __this, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void CodeGroup_CreateXml_m_1940650270_0 (CodeGroup_t_1547711319_0 * __this, SecurityElement_t117540681_0 * ___element, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.CodeGroup::CreateFromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  CodeGroup_t_1547711319_0 * CodeGroup_CreateFromXml_m_904785678_0 (Object_t * __this /* static, unused */, SecurityElement_t117540681_0 * ___se, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
