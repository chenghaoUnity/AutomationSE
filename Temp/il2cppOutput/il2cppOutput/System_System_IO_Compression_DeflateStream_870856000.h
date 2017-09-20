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
// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t_1624402289_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "mscorlib_System_IO_Stream463444077.h"
#include "System_System_IO_Compression_CompressionMode_1565328866.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandle469075048.h"

// System.IO.Compression.DeflateStream
struct  DeflateStream_t_870856000_0  : public Stream_t463444077_0
{
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_t463444077_0 * ___base_stream_2;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode_3;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen_4;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed_5;
	// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite System.IO.Compression.DeflateStream::feeder
	UnmanagedReadOrWrite_t_1624402289_0 * ___feeder_6;
	// System.IntPtr System.IO.Compression.DeflateStream::z_stream
	IntPtr_t ___z_stream_7;
	// System.Byte[] System.IO.Compression.DeflateStream::io_buffer
	ByteU5BU5D_t_1238178395_0* ___io_buffer_8;
	// System.Runtime.InteropServices.GCHandle System.IO.Compression.DeflateStream::data
	GCHandle_t469075048_0  ___data_9;
};
