#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.FtpWebResponse
struct FtpWebResponse_t_474528599_0;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t856229986_0;
// System.Exception
struct Exception_t2143823668_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.Object
struct Object_t;

#include "mscorlib_System_Object_887538054.h"

// System.Net.FtpAsyncResult
struct  FtpAsyncResult_t_2145026387_0  : public Object_t
{
	// System.Net.FtpWebResponse System.Net.FtpAsyncResult::response
	FtpWebResponse_t_474528599_0 * ___response_0;
	// System.Threading.ManualResetEvent System.Net.FtpAsyncResult::waitHandle
	ManualResetEvent_t856229986_0 * ___waitHandle_1;
	// System.Exception System.Net.FtpAsyncResult::exception
	Exception_t2143823668_0 * ___exception_2;
	// System.AsyncCallback System.Net.FtpAsyncResult::callback
	AsyncCallback_t_266361018_0 * ___callback_3;
	// System.IO.Stream System.Net.FtpAsyncResult::stream
	Stream_t463444077_0 * ___stream_4;
	// System.Object System.Net.FtpAsyncResult::state
	Object_t * ___state_5;
	// System.Boolean System.Net.FtpAsyncResult::completed
	bool ___completed_6;
	// System.Boolean System.Net.FtpAsyncResult::synch
	bool ___synch_7;
	// System.Object System.Net.FtpAsyncResult::locker
	Object_t * ___locker_8;
};
