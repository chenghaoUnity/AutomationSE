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
// System.Collections.Hashtable
struct Hashtable_t_2004451924_0;

#include "mscorlib_System_Security_Policy_CodeGroup_1547711319.h"

// System.Security.Policy.NetCodeGroup
struct  NetCodeGroup_t119449598_0  : public CodeGroup_t_1547711319_0
{
	// System.Collections.Hashtable System.Security.Policy.NetCodeGroup::_rules
	Hashtable_t_2004451924_0 * ____rules_8;
	// System.Int32 System.Security.Policy.NetCodeGroup::_hashcode
	int32_t ____hashcode_9;
};
struct NetCodeGroup_t119449598_0_StaticFields{
	// System.String System.Security.Policy.NetCodeGroup::AbsentOriginScheme
	String_t* ___AbsentOriginScheme_6;
	// System.String System.Security.Policy.NetCodeGroup::AnyOtherOriginScheme
	String_t* ___AnyOtherOriginScheme_7;
};
