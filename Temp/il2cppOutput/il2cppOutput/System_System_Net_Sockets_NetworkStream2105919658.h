#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.Socket
struct Socket_t771039639_0;

#include "mscorlib_System_IO_Stream463444077.h"
#include "mscorlib_System_IO_FileAccess724014189.h"

// System.Net.Sockets.NetworkStream
struct  NetworkStream_t2105919658_0  : public Stream_t463444077_0
{
	// System.IO.FileAccess System.Net.Sockets.NetworkStream::access
	int32_t ___access_2;
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::socket
	Socket_t771039639_0 * ___socket_3;
	// System.Boolean System.Net.Sockets.NetworkStream::owns_socket
	bool ___owns_socket_4;
	// System.Boolean System.Net.Sockets.NetworkStream::readable
	bool ___readable_5;
	// System.Boolean System.Net.Sockets.NetworkStream::writeable
	bool ___writeable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::disposed
	bool ___disposed_7;
};
