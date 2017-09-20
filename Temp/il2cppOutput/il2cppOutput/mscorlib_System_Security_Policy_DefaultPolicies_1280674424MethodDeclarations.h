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

// System.Security.PermissionSet
struct PermissionSet_t_15044864_0;
// System.Security.Policy.StrongNameMembershipCondition
struct StrongNameMembershipCondition_t431728474_0;
// System.String
struct String_t;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t_1710921075_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Policy_DefaultPolicies_Ke1190851896.h"

// System.Void System.Security.Policy.DefaultPolicies::.cctor()
extern "C"  void DefaultPolicies__cctor_m_934371425_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_FullTrust()
extern "C"  PermissionSet_t_15044864_0 * DefaultPolicies_get_FullTrust_m_156568643_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_LocalIntranet()
extern "C"  PermissionSet_t_15044864_0 * DefaultPolicies_get_LocalIntranet_m1077460990_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Internet()
extern "C"  PermissionSet_t_15044864_0 * DefaultPolicies_get_Internet_m2076906927_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_SkipVerification()
extern "C"  PermissionSet_t_15044864_0 * DefaultPolicies_get_SkipVerification_m_2063302552_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Execution()
extern "C"  PermissionSet_t_15044864_0 * DefaultPolicies_get_Execution_m1581599244_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Nothing()
extern "C"  PermissionSet_t_15044864_0 * DefaultPolicies_get_Nothing_m_1053807039_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Everything()
extern "C"  PermissionSet_t_15044864_0 * DefaultPolicies_get_Everything_m_1910944415_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.StrongNameMembershipCondition System.Security.Policy.DefaultPolicies::FullTrustMembership(System.String,System.Security.Policy.DefaultPolicies/Key)
extern "C"  StrongNameMembershipCondition_t431728474_0 * DefaultPolicies_FullTrustMembership_m841224806_0 (Object_t * __this /* static, unused */, String_t* ___name, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildFullTrust()
extern "C"  NamedPermissionSet_t_1710921075_0 * DefaultPolicies_BuildFullTrust_m_745210445_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildLocalIntranet()
extern "C"  NamedPermissionSet_t_1710921075_0 * DefaultPolicies_BuildLocalIntranet_m612425460_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildInternet()
extern "C"  NamedPermissionSet_t_1710921075_0 * DefaultPolicies_BuildInternet_m1226634489_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildSkipVerification()
extern "C"  NamedPermissionSet_t_1710921075_0 * DefaultPolicies_BuildSkipVerification_m_372279886_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildExecution()
extern "C"  NamedPermissionSet_t_1710921075_0 * DefaultPolicies_BuildExecution_m992957442_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildNothing()
extern "C"  NamedPermissionSet_t_1710921075_0 * DefaultPolicies_BuildNothing_m165690807_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildEverything()
extern "C"  NamedPermissionSet_t_1710921075_0 * DefaultPolicies_BuildEverything_m1315996203_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.DefaultPolicies::PrintingPermission(System.String)
extern "C"  SecurityElement_t117540681_0 * DefaultPolicies_PrintingPermission_m_1617466686_0 (Object_t * __this /* static, unused */, String_t* ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
