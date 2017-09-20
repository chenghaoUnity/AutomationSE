#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.CookieCollection
struct CookieCollection_t_926933416_0;

#include "mscorlib_System_Object_887538054.h"

// System.Net.CookieContainer
struct  CookieContainer_t1416428935_0  : public Object_t
{
	// System.Int32 System.Net.CookieContainer::capacity
	int32_t ___capacity_0;
	// System.Int32 System.Net.CookieContainer::perDomainCapacity
	int32_t ___perDomainCapacity_1;
	// System.Int32 System.Net.CookieContainer::maxCookieSize
	int32_t ___maxCookieSize_2;
	// System.Net.CookieCollection System.Net.CookieContainer::cookies
	CookieCollection_t_926933416_0 * ___cookies_3;
};
