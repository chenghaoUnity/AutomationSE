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
// System.Object
struct Object_t;
// System.Net.ICredentialPolicy
struct ICredentialPolicy_t1844871036_0;

#include "mscorlib_System_Object_887538054.h"

// System.Net.AuthenticationManager
struct  AuthenticationManager_t_592131681_0  : public Object_t
{
};
struct AuthenticationManager_t_592131681_0_StaticFields{
	// System.Collections.ArrayList System.Net.AuthenticationManager::modules
	ArrayList_t536890563_0 * ___modules_0;
	// System.Object System.Net.AuthenticationManager::locker
	Object_t * ___locker_1;
	// System.Net.ICredentialPolicy System.Net.AuthenticationManager::credential_policy
	Object_t * ___credential_policy_2;
};
