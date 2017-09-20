#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.Collections.Hashtable
struct Hashtable_t_2004451924_0;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1466995657_0;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t1137216428_0;

#include "mscorlib_System_Object_887538054.h"

// System.Security.SecurityManager
struct  SecurityManager_t_1679329286_0  : public Object_t
{
};
struct SecurityManager_t_1679329286_0_StaticFields{
	// System.Object System.Security.SecurityManager::_lockObject
	Object_t * ____lockObject_0;
	// System.Collections.ArrayList System.Security.SecurityManager::_hierarchy
	ArrayList_t536890563_0 * ____hierarchy_1;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t_2004451924_0 * ____declsecCache_2;
	// System.Security.Policy.PolicyLevel System.Security.SecurityManager::_level
	PolicyLevel_t1466995657_0 * ____level_3;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t1137216428_0 * ____execution_4;
};
