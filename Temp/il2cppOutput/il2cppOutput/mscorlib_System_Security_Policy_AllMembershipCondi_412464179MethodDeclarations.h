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

// System.Security.Policy.AllMembershipCondition
struct AllMembershipCondition_t_412464179_0;
// System.Security.Policy.Evidence
struct Evidence_t_738265248_0;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t_448250299_0;
// System.Object
struct Object_t;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1466995657_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Policy.AllMembershipCondition::.ctor()
extern "C"  void AllMembershipCondition__ctor_m_160172509_0 (AllMembershipCondition_t_412464179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.AllMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C"  bool AllMembershipCondition_Check_m1130693891_0 (AllMembershipCondition_t_412464179_0 * __this, Evidence_t_738265248_0 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.AllMembershipCondition::Copy()
extern "C"  Object_t * AllMembershipCondition_Copy_m_906729684_0 (AllMembershipCondition_t_412464179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.AllMembershipCondition::Equals(System.Object)
extern "C"  bool AllMembershipCondition_Equals_m_475646762_0 (AllMembershipCondition_t_412464179_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.AllMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C"  void AllMembershipCondition_FromXml_m_296784489_0 (AllMembershipCondition_t_412464179_0 * __this, SecurityElement_t117540681_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.AllMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void AllMembershipCondition_FromXml_m_179236854_0 (AllMembershipCondition_t_412464179_0 * __this, SecurityElement_t117540681_0 * ___e, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.AllMembershipCondition::GetHashCode()
extern "C"  int32_t AllMembershipCondition_GetHashCode_m_1816551762_0 (AllMembershipCondition_t_412464179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.AllMembershipCondition::ToString()
extern "C"  String_t* AllMembershipCondition_ToString_m_1640213590_0 (AllMembershipCondition_t_412464179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.AllMembershipCondition::ToXml()
extern "C"  SecurityElement_t117540681_0 * AllMembershipCondition_ToXml_m455976675_0 (AllMembershipCondition_t_412464179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.AllMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t117540681_0 * AllMembershipCondition_ToXml_m_1162400738_0 (AllMembershipCondition_t_412464179_0 * __this, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
