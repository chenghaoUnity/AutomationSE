#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Version
struct Version_t267380989_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t_847256332_0;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t_1710921075_0;

#include "mscorlib_System_Object_887538054.h"

// System.Security.Policy.DefaultPolicies
struct  DefaultPolicies_t_1280674424_0  : public Object_t
{
};
struct DefaultPolicies_t_1280674424_0_StaticFields{
	// System.Version System.Security.Policy.DefaultPolicies::_fxVersion
	Version_t267380989_0 * ____fxVersion_0;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_ecmaKey
	ByteU5BU5D_t_1238178395_0* ____ecmaKey_1;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_ecma
	StrongNamePublicKeyBlob_t_847256332_0 * ____ecma_2;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_msFinalKey
	ByteU5BU5D_t_1238178395_0* ____msFinalKey_3;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_msFinal
	StrongNamePublicKeyBlob_t_847256332_0 * ____msFinal_4;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_fullTrust
	NamedPermissionSet_t_1710921075_0 * ____fullTrust_5;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_localIntranet
	NamedPermissionSet_t_1710921075_0 * ____localIntranet_6;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_internet
	NamedPermissionSet_t_1710921075_0 * ____internet_7;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_skipVerification
	NamedPermissionSet_t_1710921075_0 * ____skipVerification_8;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_execution
	NamedPermissionSet_t_1710921075_0 * ____execution_9;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_nothing
	NamedPermissionSet_t_1710921075_0 * ____nothing_10;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_everything
	NamedPermissionSet_t_1710921075_0 * ____everything_11;
};
