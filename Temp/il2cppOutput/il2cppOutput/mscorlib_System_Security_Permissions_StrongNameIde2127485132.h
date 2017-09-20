#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Version
struct Version_t267380989_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;

#include "mscorlib_System_Security_CodeAccessPermission943011539.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"

// System.Security.Permissions.StrongNameIdentityPermission
struct  StrongNameIdentityPermission_t2127485132_0  : public CodeAccessPermission_t943011539_0
{
	// System.Security.Permissions.PermissionState System.Security.Permissions.StrongNameIdentityPermission::_state
	int32_t ____state_1;
	// System.Collections.ArrayList System.Security.Permissions.StrongNameIdentityPermission::_list
	ArrayList_t536890563_0 * ____list_2;
};
struct StrongNameIdentityPermission_t2127485132_0_StaticFields{
	// System.Version System.Security.Permissions.StrongNameIdentityPermission::defaultVersion
	Version_t267380989_0 * ___defaultVersion_0;
};
