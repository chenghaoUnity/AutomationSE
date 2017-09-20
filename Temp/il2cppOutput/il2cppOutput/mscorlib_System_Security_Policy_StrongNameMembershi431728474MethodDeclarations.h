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

// System.Security.Policy.StrongNameMembershipCondition
struct StrongNameMembershipCondition_t431728474_0;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t_847256332_0;
// System.String
struct String_t;
// System.Version
struct Version_t267380989_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;
// System.Security.Policy.Evidence
struct Evidence_t_738265248_0;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t_448250299_0;
// System.Object
struct Object_t;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1466995657_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C"  void StrongNameMembershipCondition__ctor_m754934707_0 (StrongNameMembershipCondition_t431728474_0 * __this, StrongNamePublicKeyBlob_t_847256332_0 * ___blob, String_t* ___name, Version_t267380989_0 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.SecurityElement)
extern "C"  void StrongNameMembershipCondition__ctor_m1628815593_0 (StrongNameMembershipCondition_t431728474_0 * __this, SecurityElement_t117540681_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor()
extern "C"  void StrongNameMembershipCondition__ctor_m_1327533316_0 (StrongNameMembershipCondition_t431728474_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::get_Name()
extern "C"  String_t* StrongNameMembershipCondition_get_Name_m_1680947201_0 (StrongNameMembershipCondition_t431728474_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Policy.StrongNameMembershipCondition::get_Version()
extern "C"  Version_t267380989_0 * StrongNameMembershipCondition_get_Version_m_1847852809_0 (StrongNameMembershipCondition_t431728474_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongNameMembershipCondition::get_PublicKey()
extern "C"  StrongNamePublicKeyBlob_t_847256332_0 * StrongNameMembershipCondition_get_PublicKey_m1184535308_0 (StrongNameMembershipCondition_t431728474_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C"  bool StrongNameMembershipCondition_Check_m585580238_0 (StrongNameMembershipCondition_t431728474_0 * __this, Evidence_t_738265248_0 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.StrongNameMembershipCondition::Copy()
extern "C"  Object_t * StrongNameMembershipCondition_Copy_m409071111_0 (StrongNameMembershipCondition_t431728474_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Equals(System.Object)
extern "C"  bool StrongNameMembershipCondition_Equals_m_274833493_0 (StrongNameMembershipCondition_t431728474_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.StrongNameMembershipCondition::GetHashCode()
extern "C"  int32_t StrongNameMembershipCondition_GetHashCode_m_705844977_0 (StrongNameMembershipCondition_t431728474_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C"  void StrongNameMembershipCondition_FromXml_m_1607421986_0 (StrongNameMembershipCondition_t431728474_0 * __this, SecurityElement_t117540681_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void StrongNameMembershipCondition_FromXml_m_1176424349_0 (StrongNameMembershipCondition_t431728474_0 * __this, SecurityElement_t117540681_0 * ___e, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::ToString()
extern "C"  String_t* StrongNameMembershipCondition_ToString_m1975745175_0 (StrongNameMembershipCondition_t431728474_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml()
extern "C"  SecurityElement_t117540681_0 * StrongNameMembershipCondition_ToXml_m616346352_0 (StrongNameMembershipCondition_t431728474_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t117540681_0 * StrongNameMembershipCondition_ToXml_m42267883_0 (StrongNameMembershipCondition_t431728474_0 * __this, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
