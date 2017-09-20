#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>
struct LinkedList_1_t87932461_0;
// System.Collections.Generic.LinkedListNode`1<System.ComponentModel.TypeDescriptionProvider>
struct LinkedListNode_1_t_1073094069_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;

#include "mscorlib_System_ValueType_103494864.h"

// System.Collections.Generic.LinkedList`1/Enumerator<System.ComponentModel.TypeDescriptionProvider>
struct  Enumerator_t992933076_0 
{
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedList`1/Enumerator::list
	LinkedList_1_t87932461_0 * ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1/Enumerator::current
	LinkedListNode_1_t_1073094069_0 * ___current_1;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::index
	int32_t ___index_2;
	// System.UInt32 System.Collections.Generic.LinkedList`1/Enumerator::version
	uint32_t ___version_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1/Enumerator::si
	SerializationInfo_t526833679_0 * ___si_4;
};
