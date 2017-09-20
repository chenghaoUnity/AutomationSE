#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t2121469360_0;

#include "mscorlib_System_Object_887538054.h"
#include "System_System_Diagnostics_SourceLevels463197681.h"

// System.Diagnostics.TraceSourceInfo
struct  TraceSourceInfo_t_1372854105_0  : public Object_t
{
	// System.String System.Diagnostics.TraceSourceInfo::name
	String_t* ___name_0;
	// System.Diagnostics.SourceLevels System.Diagnostics.TraceSourceInfo::levels
	int32_t ___levels_1;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSourceInfo::listeners
	TraceListenerCollection_t2121469360_0 * ___listeners_2;
};
