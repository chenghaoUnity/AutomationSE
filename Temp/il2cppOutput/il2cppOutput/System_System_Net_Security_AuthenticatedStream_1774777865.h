#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t463444077_0;

#include "mscorlib_System_IO_Stream463444077.h"

// System.Net.Security.AuthenticatedStream
struct  AuthenticatedStream_t_1774777865_0  : public Stream_t463444077_0
{
	// System.IO.Stream System.Net.Security.AuthenticatedStream::innerStream
	Stream_t463444077_0 * ___innerStream_2;
	// System.Boolean System.Net.Security.AuthenticatedStream::leaveStreamOpen
	bool ___leaveStreamOpen_3;
};
