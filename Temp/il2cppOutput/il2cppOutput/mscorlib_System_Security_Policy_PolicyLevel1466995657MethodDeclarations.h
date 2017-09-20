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

// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1466995657_0;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t_1710921075_0;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t680949556_0;
// System.Security.Policy.Evidence
struct Evidence_t_738265248_0;
// System.Reflection.Assembly
struct Assembly_t_957553394_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_PolicyLevelType700407673.h"

// System.Void System.Security.Policy.PolicyLevel::.ctor(System.String,System.Security.PolicyLevelType)
extern "C"  void PolicyLevel__ctor_m221530596_0 (PolicyLevel_t1466995657_0 * __this, String_t* ___label, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::LoadFromFile(System.String)
extern "C"  void PolicyLevel_LoadFromFile_m_223511521_0 (PolicyLevel_t1466995657_0 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyLevel::FromString(System.String)
extern "C"  SecurityElement_t117540681_0 * PolicyLevel_FromString_m22120426_0 (PolicyLevel_t1466995657_0 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::FromXml(System.Security.SecurityElement)
extern "C"  void PolicyLevel_FromXml_m_618698035_0 (PolicyLevel_t1466995657_0 * __this, SecurityElement_t117540681_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.PolicyLevel::GetNamedPermissionSet(System.String)
extern "C"  NamedPermissionSet_t_1710921075_0 * PolicyLevel_GetNamedPermissionSet_m_121872631_0 (PolicyLevel_t1466995657_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyLevel::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t680949556_0 * PolicyLevel_Resolve_m_1201823726_0 (PolicyLevel_t1466995657_0 * __this, Evidence_t_738265248_0 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyLevel::ToXml()
extern "C"  SecurityElement_t117540681_0 * PolicyLevel_ToXml_m1771003041_0 (PolicyLevel_t1466995657_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::Save()
extern "C"  void PolicyLevel_Save_m_1956485196_0 (PolicyLevel_t1466995657_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultLevel(System.Security.PolicyLevelType)
extern "C"  void PolicyLevel_CreateDefaultLevel_m_1136918945_0 (PolicyLevel_t1466995657_0 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultFullTrustAssemblies()
extern "C"  void PolicyLevel_CreateDefaultFullTrustAssemblies_m1776753535_0 (PolicyLevel_t1466995657_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultNamedPermissionSets()
extern "C"  void PolicyLevel_CreateDefaultNamedPermissionSets_m_665712661_0 (PolicyLevel_t1466995657_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.PolicyLevel::ResolveClassName(System.String)
extern "C"  String_t* PolicyLevel_ResolveClassName_m1530237105_0 (PolicyLevel_t1466995657_0 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.PolicyLevel::IsFullTrustAssembly(System.Reflection.Assembly)
extern "C"  bool PolicyLevel_IsFullTrustAssembly_m_1979933532_0 (PolicyLevel_t1466995657_0 * __this, Assembly_t_957553394_0 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
