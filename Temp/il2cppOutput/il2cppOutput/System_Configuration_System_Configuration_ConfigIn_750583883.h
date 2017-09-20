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
// System.Type
struct Type_t;
// System.Configuration.ConfigInfo
struct ConfigInfo_t_750583883_0;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t1654444932_0;

#include "mscorlib_System_Object_887538054.h"

// System.Configuration.ConfigInfo
struct  ConfigInfo_t_750583883_0  : public Object_t
{
	// System.String System.Configuration.ConfigInfo::Name
	String_t* ___Name_0;
	// System.String System.Configuration.ConfigInfo::TypeName
	String_t* ___TypeName_1;
	// System.Type System.Configuration.ConfigInfo::Type
	Type_t * ___Type_2;
	// System.String System.Configuration.ConfigInfo::streamName
	String_t* ___streamName_3;
	// System.Configuration.ConfigInfo System.Configuration.ConfigInfo::Parent
	ConfigInfo_t_750583883_0 * ___Parent_4;
	// System.Configuration.Internal.IInternalConfigHost System.Configuration.ConfigInfo::ConfigHost
	Object_t * ___ConfigHost_5;
};
