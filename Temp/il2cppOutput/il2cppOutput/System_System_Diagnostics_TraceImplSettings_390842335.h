#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t2121469360_0;

#include "mscorlib_System_Object_887538054.h"

// System.Diagnostics.TraceImplSettings
struct  TraceImplSettings_t_390842335_0  : public Object_t
{
	// System.Boolean System.Diagnostics.TraceImplSettings::AutoFlush
	bool ___AutoFlush_0;
	// System.Int32 System.Diagnostics.TraceImplSettings::IndentLevel
	int32_t ___IndentLevel_1;
	// System.Int32 System.Diagnostics.TraceImplSettings::IndentSize
	int32_t ___IndentSize_2;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceImplSettings::Listeners
	TraceListenerCollection_t2121469360_0 * ___Listeners_3;
};
