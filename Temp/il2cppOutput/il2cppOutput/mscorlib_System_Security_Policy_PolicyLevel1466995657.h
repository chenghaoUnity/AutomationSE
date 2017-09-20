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
// System.Security.Policy.CodeGroup
struct CodeGroup_t_1547711319_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.Collections.Hashtable
struct Hashtable_t_2004451924_0;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;

#include "mscorlib_System_Object_887538054.h"
#include "mscorlib_System_Security_PolicyLevelType700407673.h"

// System.Security.Policy.PolicyLevel
struct  PolicyLevel_t1466995657_0  : public Object_t
{
	// System.String System.Security.Policy.PolicyLevel::label
	String_t* ___label_0;
	// System.Security.Policy.CodeGroup System.Security.Policy.PolicyLevel::root_code_group
	CodeGroup_t_1547711319_0 * ___root_code_group_1;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::full_trust_assemblies
	ArrayList_t536890563_0 * ___full_trust_assemblies_2;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::named_permission_sets
	ArrayList_t536890563_0 * ___named_permission_sets_3;
	// System.String System.Security.Policy.PolicyLevel::_location
	String_t* ____location_4;
	// System.Security.PolicyLevelType System.Security.Policy.PolicyLevel::_type
	int32_t ____type_5;
	// System.Collections.Hashtable System.Security.Policy.PolicyLevel::fullNames
	Hashtable_t_2004451924_0 * ___fullNames_6;
	// System.Security.SecurityElement System.Security.Policy.PolicyLevel::xml
	SecurityElement_t117540681_0 * ___xml_7;
};
