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

// System.Security.Permissions.RegistryPermission
struct  RegistryPermission_t_514790295_0  : public CodeAccessPermission_t943011539_0
{
	// System.Security.Permissions.PermissionState System.Security.Permissions.RegistryPermission::_state
	int32_t ____state_0;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::createList
	ArrayList_t536890563_0 * ___createList_1;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::readList
	ArrayList_t536890563_0 * ___readList_2;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::writeList
	ArrayList_t536890563_0 * ___writeList_3;
};
