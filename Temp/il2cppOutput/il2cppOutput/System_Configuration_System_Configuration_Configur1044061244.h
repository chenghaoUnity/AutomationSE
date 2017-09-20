#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.InternalConfigurationFactory
struct InternalConfigurationFactory_t1871069942_0;
// System.Configuration.Internal.IInternalConfigSystem
struct IInternalConfigSystem_t1107839243_0;
// System.Object
struct Object_t;

#include "mscorlib_System_Object_887538054.h"

// System.Configuration.ConfigurationManager
struct  ConfigurationManager_t1044061244_0  : public Object_t
{
};
struct ConfigurationManager_t1044061244_0_StaticFields{
	// System.Configuration.InternalConfigurationFactory System.Configuration.ConfigurationManager::configFactory
	InternalConfigurationFactory_t1871069942_0 * ___configFactory_0;
	// System.Configuration.Internal.IInternalConfigSystem System.Configuration.ConfigurationManager::configSystem
	Object_t * ___configSystem_1;
	// System.Object System.Configuration.ConfigurationManager::lockobj
	Object_t * ___lockobj_2;
};
