#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SimpleJson.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t_1342422316_0;
// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t570123546_0;

#include "mscorlib_System_Object_887538054.h"

// SimpleJson.SimpleJson
struct  SimpleJson_t279619612_0  : public Object_t
{
};
struct SimpleJson_t279619612_0_StaticFields{
	// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::_currentJsonSerializerStrategy
	Object_t * ____currentJsonSerializerStrategy_0;
	// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::_pocoJsonSerializerStrategy
	PocoJsonSerializerStrategy_t570123546_0 * ____pocoJsonSerializerStrategy_1;
};
