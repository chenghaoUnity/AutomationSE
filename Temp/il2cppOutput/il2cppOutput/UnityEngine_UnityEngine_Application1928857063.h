#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AdvertisingIdentifierCallback
struct AdvertisingIdentifierCallback_t250983209_0;
// UnityEngine.Application/LogCallback
struct LogCallback_t_1328739487_0;

#include "mscorlib_System_Object_887538054.h"

// UnityEngine.Application
struct  Application_t1928857063_0  : public Object_t
{
};
struct Application_t1928857063_0_StaticFields{
	// UnityEngine.AdvertisingIdentifierCallback UnityEngine.Application::OnAdvertisingIdentifierCallback
	AdvertisingIdentifierCallback_t250983209_0 * ___OnAdvertisingIdentifierCallback_0;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_t_1328739487_0 * ___s_LogCallbackHandler_1;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_t_1328739487_0 * ___s_LogCallbackHandlerThreaded_2;
};
