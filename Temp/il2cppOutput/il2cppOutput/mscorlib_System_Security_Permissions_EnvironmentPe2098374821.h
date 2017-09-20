#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t536890563_0;

#include "mscorlib_System_Security_CodeAccessPermission943011539.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"

// System.Security.Permissions.EnvironmentPermission
struct  EnvironmentPermission_t2098374821_0  : public CodeAccessPermission_t943011539_0
{
	// System.Security.Permissions.PermissionState System.Security.Permissions.EnvironmentPermission::_state
	int32_t ____state_0;
	// System.Collections.ArrayList System.Security.Permissions.EnvironmentPermission::readList
	ArrayList_t536890563_0 * ___readList_1;
	// System.Collections.ArrayList System.Security.Permissions.EnvironmentPermission::writeList
	ArrayList_t536890563_0 * ___writeList_2;
};
