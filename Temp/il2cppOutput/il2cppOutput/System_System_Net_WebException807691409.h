#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.WebResponse
struct WebResponse_t_2034122602_0;

#include "mscorlib_System_InvalidOperationException_523179548.h"
#include "System_System_Net_WebExceptionStatus_18632733.h"

// System.Net.WebException
struct  WebException_t807691409_0  : public InvalidOperationException_t_523179548_0
{
	// System.Net.WebResponse System.Net.WebException::response
	WebResponse_t_2034122602_0 * ___response_12;
	// System.Net.WebExceptionStatus System.Net.WebException::status
	int32_t ___status_13;
};
