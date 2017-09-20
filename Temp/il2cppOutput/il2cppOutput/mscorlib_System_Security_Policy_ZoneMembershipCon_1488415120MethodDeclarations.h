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

// System.Security.Policy.ZoneMembershipCondition
struct ZoneMembershipCondition_t_1488415120_0;
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
#include "mscorlib_System_Security_SecurityZone2101044863.h"

// System.Void System.Security.Policy.ZoneMembershipCondition::.ctor()
extern "C"  void ZoneMembershipCondition__ctor_m_649804058_0 (ZoneMembershipCondition_t_1488415120_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::.ctor(System.Security.SecurityZone)
extern "C"  void ZoneMembershipCondition__ctor_m_49918933_0 (ZoneMembershipCondition_t_1488415120_0 * __this, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityZone System.Security.Policy.ZoneMembershipCondition::get_SecurityZone()
extern "C"  int32_t ZoneMembershipCondition_get_SecurityZone_m_1486891709_0 (ZoneMembershipCondition_t_1488415120_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::set_SecurityZone(System.Security.SecurityZone)
extern "C"  void ZoneMembershipCondition_set_SecurityZone_m_923122324_0 (ZoneMembershipCondition_t_1488415120_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.ZoneMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C"  bool ZoneMembershipCondition_Check_m_746809564_0 (ZoneMembershipCondition_t_1488415120_0 * __this, Evidence_t_738265248_0 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.ZoneMembershipCondition::Copy()
extern "C"  Object_t * ZoneMembershipCondition_Copy_m_1722645411_0 (ZoneMembershipCondition_t_1488415120_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.ZoneMembershipCondition::Equals(System.Object)
extern "C"  bool ZoneMembershipCondition_Equals_m_1780696939_0 (ZoneMembershipCondition_t_1488415120_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C"  void ZoneMembershipCondition_FromXml_m67830068_0 (ZoneMembershipCondition_t_1488415120_0 * __this, SecurityElement_t117540681_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void ZoneMembershipCondition_FromXml_m_2049298611_0 (ZoneMembershipCondition_t_1488415120_0 * __this, SecurityElement_t117540681_0 * ___e, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.ZoneMembershipCondition::GetHashCode()
extern "C"  int32_t ZoneMembershipCondition_GetHashCode_m_498958215_0 (ZoneMembershipCondition_t_1488415120_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.ZoneMembershipCondition::ToString()
extern "C"  String_t* ZoneMembershipCondition_ToString_m_706147155_0 (ZoneMembershipCondition_t_1488415120_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ZoneMembershipCondition::ToXml()
extern "C"  SecurityElement_t117540681_0 * ZoneMembershipCondition_ToXml_m_2104772006_0 (ZoneMembershipCondition_t_1488415120_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ZoneMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t117540681_0 * ZoneMembershipCondition_ToXml_m_1349410347_0 (ZoneMembershipCondition_t_1488415120_0 * __this, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
