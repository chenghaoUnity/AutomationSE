﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t1335972267_0;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t_629363303_0;
// System.Collections.IDictionary
struct IDictionary_t_1514320629_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;
// System.String
struct String_t;

#include "mscorlib_System_Object_887538054.h"
#include "System_System_Text_RegularExpressions_RegexOptions2138459498.h"

// System.Text.RegularExpressions.Regex
struct  Regex_t111054635_0  : public Object_t
{
	// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::machineFactory
	Object_t * ___machineFactory_2;
	// System.Collections.IDictionary System.Text.RegularExpressions.Regex::mapping
	Object_t * ___mapping_3;
	// System.Int32 System.Text.RegularExpressions.Regex::group_count
	int32_t ___group_count_4;
	// System.Int32 System.Text.RegularExpressions.Regex::gap
	int32_t ___gap_5;
	// System.String[] System.Text.RegularExpressions.Regex::group_names
	StringU5BU5D_t_816028754_0* ___group_names_6;
	// System.Int32[] System.Text.RegularExpressions.Regex::group_numbers
	Int32U5BU5D_t1872284309_0* ___group_numbers_7;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_8;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_9;
};
struct Regex_t111054635_0_StaticFields{
	// System.Text.RegularExpressions.FactoryCache System.Text.RegularExpressions.Regex::cache
	FactoryCache_t1335972267_0 * ___cache_0;
	// System.Boolean System.Text.RegularExpressions.Regex::old_rx
	bool ___old_rx_1;
};