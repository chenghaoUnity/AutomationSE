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

// System.Security.Policy.ApplicationTrust
struct ApplicationTrust_t1654282993_0;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t680949556_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Policy.ApplicationTrust::.ctor()
extern "C"  void ApplicationTrust__ctor_m_910029505_0 (ApplicationTrust_t1654282993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::get_DefaultGrantSet()
extern "C"  PolicyStatement_t680949556_0 * ApplicationTrust_get_DefaultGrantSet_m_1481021002_0 (ApplicationTrust_t1654282993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ApplicationTrust::FromXml(System.Security.SecurityElement)
extern "C"  void ApplicationTrust_FromXml_m_958813701_0 (ApplicationTrust_t1654282993_0 * __this, SecurityElement_t117540681_0 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ApplicationTrust::ToXml()
extern "C"  SecurityElement_t117540681_0 * ApplicationTrust_ToXml_m1527577215_0 (ApplicationTrust_t1654282993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::GetDefaultGrantSet()
extern "C"  PolicyStatement_t680949556_0 * ApplicationTrust_GetDefaultGrantSet_m787876507_0 (ApplicationTrust_t1654282993_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
