#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IDictionary
struct IDictionary_t_1514320629_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t_1121238188_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;

#include "mscorlib_System_Object_887538054.h"

// System.Text.RegularExpressions.RxInterpreterFactory
struct  RxInterpreterFactory_t1722557481_0  : public Object_t
{
	// System.Collections.IDictionary System.Text.RegularExpressions.RxInterpreterFactory::mapping
	Object_t * ___mapping_0;
	// System.Byte[] System.Text.RegularExpressions.RxInterpreterFactory::program
	ByteU5BU5D_t_1238178395_0* ___program_1;
	// System.Text.RegularExpressions.EvalDelegate System.Text.RegularExpressions.RxInterpreterFactory::eval_del
	EvalDelegate_t_1121238188_0 * ___eval_del_2;
	// System.String[] System.Text.RegularExpressions.RxInterpreterFactory::namesMapping
	StringU5BU5D_t_816028754_0* ___namesMapping_3;
	// System.Int32 System.Text.RegularExpressions.RxInterpreterFactory::gap
	int32_t ___gap_4;
};
