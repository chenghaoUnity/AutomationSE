#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1466995657_0;

#include "mscorlib_System_Object_887538054.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"

// System.Security.PermissionSet
struct  PermissionSet_t_15044864_0  : public Object_t
{
	// System.Security.Permissions.PermissionState System.Security.PermissionSet::state
	int32_t ___state_1;
	// System.Collections.ArrayList System.Security.PermissionSet::list
	ArrayList_t536890563_0 * ___list_2;
	// System.Security.Policy.PolicyLevel System.Security.PermissionSet::_policyLevel
	PolicyLevel_t1466995657_0 * ____policyLevel_3;
	// System.Boolean System.Security.PermissionSet::_declsec
	bool ____declsec_4;
	// System.Boolean System.Security.PermissionSet::_readOnly
	bool ____readOnly_5;
};
struct PermissionSet_t_15044864_0_StaticFields{
	// System.Object[] System.Security.PermissionSet::psUnrestricted
	ObjectU5BU5D_t1774424924_0* ___psUnrestricted_0;
	// System.Object[] System.Security.PermissionSet::action
	ObjectU5BU5D_t1774424924_0* ___action_6;
};
