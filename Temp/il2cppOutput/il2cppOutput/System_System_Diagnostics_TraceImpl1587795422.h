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
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t2121469360_0;
// System.Diagnostics.CorrelationManager
struct CorrelationManager_t_769333486_0;

#include "mscorlib_System_Object_887538054.h"

// System.Diagnostics.TraceImpl
struct  TraceImpl_t1587795422_0  : public Object_t
{
};
struct TraceImpl_t1587795422_0_StaticFields{
	// System.Object System.Diagnostics.TraceImpl::initLock
	Object_t * ___initLock_0;
	// System.Boolean System.Diagnostics.TraceImpl::autoFlush
	bool ___autoFlush_1;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceImpl::listeners
	TraceListenerCollection_t2121469360_0 * ___listeners_4;
	// System.Diagnostics.CorrelationManager System.Diagnostics.TraceImpl::correlation_manager
	CorrelationManager_t_769333486_0 * ___correlation_manager_5;
};
struct TraceImpl_t1587795422_0_ThreadStaticFields{
	// System.Int32 System.Diagnostics.TraceImpl::indentLevel
	int32_t ___indentLevel_2;
	// System.Int32 System.Diagnostics.TraceImpl::indentSize
	int32_t ___indentSize_3;
};
