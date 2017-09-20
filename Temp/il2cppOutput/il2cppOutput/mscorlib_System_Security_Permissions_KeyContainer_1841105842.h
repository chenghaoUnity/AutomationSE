#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct KeyContainerPermissionAccessEntryCollection_t_530910466_0;

#include "mscorlib_System_Security_CodeAccessPermission943011539.h"
#include "mscorlib_System_Security_Permissions_KeyContainerP1855752921.h"

// System.Security.Permissions.KeyContainerPermission
struct  KeyContainerPermission_t_1841105842_0  : public CodeAccessPermission_t943011539_0
{
	// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection System.Security.Permissions.KeyContainerPermission::_accessEntries
	KeyContainerPermissionAccessEntryCollection_t_530910466_0 * ____accessEntries_0;
	// System.Security.Permissions.KeyContainerPermissionFlags System.Security.Permissions.KeyContainerPermission::_flags
	int32_t ____flags_1;
};
