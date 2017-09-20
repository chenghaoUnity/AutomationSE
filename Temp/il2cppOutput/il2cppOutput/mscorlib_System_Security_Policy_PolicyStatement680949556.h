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
#include "mscorlib_System_Security_Policy_PolicyStatementAtt1524903368.h"

// System.Security.Policy.PolicyStatement
struct  PolicyStatement_t680949556_0  : public Object_t
{
	// System.Security.PermissionSet System.Security.Policy.PolicyStatement::perms
	PermissionSet_t_15044864_0 * ___perms_0;
	// System.Security.Policy.PolicyStatementAttribute System.Security.Policy.PolicyStatement::attrs
	int32_t ___attrs_1;
};
