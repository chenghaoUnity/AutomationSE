#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t_2004451924_0;
// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct CallbackHandler_t1543768867_0;

#include "mscorlib_System_Object_887538054.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Runtime.Serialization.SerializationObjectManager
struct  SerializationObjectManager_t470645037_0  : public Object_t
{
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.SerializationObjectManager::context
	StreamingContext_t_1216992900_0  ___context_0;
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationObjectManager::seen
	Hashtable_t_2004451924_0 * ___seen_1;
	// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler System.Runtime.Serialization.SerializationObjectManager::callbacks
	CallbackHandler_t1543768867_0 * ___callbacks_2;
};
