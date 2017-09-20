#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t_847256332_0;
// System.String
struct String_t;
// System.Version
struct Version_t267380989_0;

#include "mscorlib_System_Object_887538054.h"

// System.Security.Policy.StrongNameMembershipCondition
struct  StrongNameMembershipCondition_t431728474_0  : public Object_t
{
	// System.Int32 System.Security.Policy.StrongNameMembershipCondition::version
	int32_t ___version_0;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongNameMembershipCondition::blob
	StrongNamePublicKeyBlob_t_847256332_0 * ___blob_1;
	// System.String System.Security.Policy.StrongNameMembershipCondition::name
	String_t* ___name_2;
	// System.Version System.Security.Policy.StrongNameMembershipCondition::assemblyVersion
	Version_t267380989_0 * ___assemblyVersion_3;
};
