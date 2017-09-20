#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ApplicationIdentity
struct ApplicationIdentity_t1443710675_0;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t680949556_0;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t65030558_0;

#include "mscorlib_System_Object_887538054.h"

// System.Security.Policy.ApplicationTrust
struct  ApplicationTrust_t1654282993_0  : public Object_t
{
	// System.ApplicationIdentity System.Security.Policy.ApplicationTrust::_appid
	ApplicationIdentity_t1443710675_0 * ____appid_0;
	// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::_defaultPolicy
	PolicyStatement_t680949556_0 * ____defaultPolicy_1;
	// System.Object System.Security.Policy.ApplicationTrust::_xtranfo
	Object_t * ____xtranfo_2;
	// System.Boolean System.Security.Policy.ApplicationTrust::_trustrun
	bool ____trustrun_3;
	// System.Boolean System.Security.Policy.ApplicationTrust::_persist
	bool ____persist_4;
	// System.Collections.Generic.IList`1<System.Security.Policy.StrongName> System.Security.Policy.ApplicationTrust::fullTrustAssemblies
	Object_t* ___fullTrustAssemblies_5;
};
