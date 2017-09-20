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
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t_1931158377_0;

#include "mscorlib_System_Object_887538054.h"

// System.Net.Authorization
struct  Authorization_t1909147139_0  : public Object_t
{
	// System.String System.Net.Authorization::token
	String_t* ___token_0;
	// System.Boolean System.Net.Authorization::complete
	bool ___complete_1;
	// System.Net.IAuthenticationModule System.Net.Authorization::module
	Object_t * ___module_2;
};
