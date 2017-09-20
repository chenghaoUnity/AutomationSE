#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.PermissionSet
struct PermissionSet_t_15044864_0;

#include "mscorlib_System_Object_887538054.h"

// System.Security.Policy.PermissionRequestEvidence
struct  PermissionRequestEvidence_t_1449891250_0  : public Object_t
{
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::requested
	PermissionSet_t_15044864_0 * ___requested_0;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::optional
	PermissionSet_t_15044864_0 * ___optional_1;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::denied
	PermissionSet_t_15044864_0 * ___denied_2;
};
