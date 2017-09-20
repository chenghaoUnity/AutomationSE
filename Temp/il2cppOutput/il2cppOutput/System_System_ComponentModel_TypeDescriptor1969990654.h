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
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t_609289511_0;
// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t_2050595335_0;
// System.EventHandler
struct EventHandler_t_1938407861_0;

#include "mscorlib_System_Object_887538054.h"

// System.ComponentModel.TypeDescriptor
struct  TypeDescriptor_t1969990654_0  : public Object_t
{
};
struct TypeDescriptor_t1969990654_0_StaticFields{
	// System.Object System.ComponentModel.TypeDescriptor::creatingDefaultConverters
	Object_t * ___creatingDefaultConverters_0;
	// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::defaultConverters
	ArrayList_t536890563_0 * ___defaultConverters_1;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::componentTable
	Hashtable_t_2004451924_0 * ___componentTable_2;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::typeTable
	Hashtable_t_2004451924_0 * ___typeTable_3;
	// System.Object System.ComponentModel.TypeDescriptor::typeDescriptionProvidersLock
	Object_t * ___typeDescriptionProvidersLock_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::typeDescriptionProviders
	Dictionary_2_t_609289511_0 * ___typeDescriptionProviders_5;
	// System.Object System.ComponentModel.TypeDescriptor::componentDescriptionProvidersLock
	Object_t * ___componentDescriptionProvidersLock_6;
	// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::componentDescriptionProviders
	Dictionary_2_t_2050595335_0 * ___componentDescriptionProviders_7;
	// System.EventHandler System.ComponentModel.TypeDescriptor::onDispose
	EventHandler_t_1938407861_0 * ___onDispose_8;
};
