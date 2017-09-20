#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t_745821778_0;

#include "mscorlib_System_Object_887538054.h"

// System.Net.Sockets.Socket/Worker
struct  Worker_t_1039050986_0  : public Object_t
{
	// System.Net.Sockets.Socket/SocketAsyncResult System.Net.Sockets.Socket/Worker::result
	SocketAsyncResult_t_745821778_0 * ___result_0;
	// System.Boolean System.Net.Sockets.Socket/Worker::requireSocketSecurity
	bool ___requireSocketSecurity_1;
	// System.Int32 System.Net.Sockets.Socket/Worker::send_so_far
	int32_t ___send_so_far_2;
};
