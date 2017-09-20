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
// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
struct InstanceComparer_t_429528889_0;

#include "mscorlib_System_Object_887538054.h"

// System.Runtime.Serialization.ObjectIDGenerator
struct  ObjectIDGenerator_t_1430029654_0  : public Object_t
{
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectIDGenerator::table
	Hashtable_t_2004451924_0 * ___table_0;
	// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::current
	int64_t ___current_1;
};
struct ObjectIDGenerator_t_1430029654_0_StaticFields{
	// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer System.Runtime.Serialization.ObjectIDGenerator::comparer
	InstanceComparer_t_429528889_0 * ___comparer_2;
};
