#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Specialized.StringDictionary
struct StringDictionary_t_1542449046_0;
// System.String
struct String_t;

#include "mscorlib_System_MarshalByRefObject1484498776.h"
#include "System_System_Diagnostics_TraceOptions_1636724192.h"

// System.Diagnostics.TraceListener
struct  TraceListener_t_2068633230_0  : public MarshalByRefObject_t1484498776_0
{
	// System.Int32 System.Diagnostics.TraceListener::indentLevel
	int32_t ___indentLevel_1;
	// System.Int32 System.Diagnostics.TraceListener::indentSize
	int32_t ___indentSize_2;
	// System.Collections.Specialized.StringDictionary System.Diagnostics.TraceListener::attributes
	StringDictionary_t_1542449046_0 * ___attributes_3;
	// System.Diagnostics.TraceOptions System.Diagnostics.TraceListener::options
	int32_t ___options_4;
	// System.String System.Diagnostics.TraceListener::name
	String_t* ___name_5;
	// System.Boolean System.Diagnostics.TraceListener::needIndent
	bool ___needIndent_6;
};
