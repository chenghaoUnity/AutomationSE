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

#include "mscorlib_System_Object_887538054.h"
#include "mscorlib_System_DateTime_818288618.h"

// TestCase
struct  TestCase_t573101789_0  : public Object_t
{
	// System.String TestCase::descitpion
	String_t* ___descitpion_0;
	// System.Boolean TestCase::result
	bool ___result_1;
	// System.String TestCase::failReason
	String_t* ___failReason_2;
	// System.DateTime TestCase::date
	DateTime_t_818288618_0  ___date_3;
	// System.String TestCase::caseLink
	String_t* ___caseLink_4;
};
