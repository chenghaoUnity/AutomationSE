#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.ServicePoint
struct ServicePoint_t1961884333_0;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.Random
struct Random_t_802455554_0;
// System.Collections.Queue
struct Queue_t_1070229187_0;

#include "mscorlib_System_Object_887538054.h"

// System.Net.WebConnectionGroup
struct  WebConnectionGroup_t_1866662653_0  : public Object_t
{
	// System.Net.ServicePoint System.Net.WebConnectionGroup::sPoint
	ServicePoint_t1961884333_0 * ___sPoint_0;
	// System.String System.Net.WebConnectionGroup::name
	String_t* ___name_1;
	// System.Collections.ArrayList System.Net.WebConnectionGroup::connections
	ArrayList_t536890563_0 * ___connections_2;
	// System.Random System.Net.WebConnectionGroup::rnd
	Random_t_802455554_0 * ___rnd_3;
	// System.Collections.Queue System.Net.WebConnectionGroup::queue
	Queue_t_1070229187_0 * ___queue_4;
};
