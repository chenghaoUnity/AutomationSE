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

// System.Security.Policy.PolicyStatement
struct PolicyStatement_t680949556_0;
// System.Security.PermissionSet
struct PermissionSet_t_15044864_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1466995657_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Policy_PolicyStatementAtt1524903368.h"

// System.Void System.Security.Policy.PolicyStatement::.ctor(System.Security.PermissionSet)
extern "C"  void PolicyStatement__ctor_m_1857065620_0 (PolicyStatement_t680949556_0 * __this, PermissionSet_t_15044864_0 * ___permSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::.ctor(System.Security.PermissionSet,System.Security.Policy.PolicyStatementAttribute)
extern "C"  void PolicyStatement__ctor_m316175084_0 (PolicyStatement_t680949556_0 * __this, PermissionSet_t_15044864_0 * ___permSet, int32_t ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.PolicyStatement::get_PermissionSet()
extern "C"  PermissionSet_t_15044864_0 * PolicyStatement_get_PermissionSet_m1663906971_0 (PolicyStatement_t680949556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::set_PermissionSet(System.Security.PermissionSet)
extern "C"  void PolicyStatement_set_PermissionSet_m_1114777128_0 (PolicyStatement_t680949556_0 * __this, PermissionSet_t_15044864_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatementAttribute System.Security.Policy.PolicyStatement::get_Attributes()
extern "C"  int32_t PolicyStatement_get_Attributes_m500929513_0 (PolicyStatement_t680949556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyStatement::Copy()
extern "C"  PolicyStatement_t680949556_0 * PolicyStatement_Copy_m_1153331374_0 (PolicyStatement_t680949556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::FromXml(System.Security.SecurityElement)
extern "C"  void PolicyStatement_FromXml_m47483384_0 (PolicyStatement_t680949556_0 * __this, SecurityElement_t117540681_0 * ___et, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void PolicyStatement_FromXml_m_1597321207_0 (PolicyStatement_t680949556_0 * __this, SecurityElement_t117540681_0 * ___et, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyStatement::ToXml()
extern "C"  SecurityElement_t117540681_0 * PolicyStatement_ToXml_m_80194794_0 (PolicyStatement_t680949556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyStatement::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t117540681_0 * PolicyStatement_ToXml_m910494609_0 (PolicyStatement_t680949556_0 * __this, PolicyLevel_t1466995657_0 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.PolicyStatement::Equals(System.Object)
extern "C"  bool PolicyStatement_Equals_m248618065_0 (PolicyStatement_t680949556_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.PolicyStatement::GetHashCode()
extern "C"  int32_t PolicyStatement_GetHashCode_m_489986507_0 (PolicyStatement_t680949556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyStatement::Empty()
extern "C"  PolicyStatement_t680949556_0 * PolicyStatement_Empty_m324143730_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
