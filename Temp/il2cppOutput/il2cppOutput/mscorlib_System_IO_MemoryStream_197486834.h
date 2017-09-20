#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "mscorlib_System_IO_Stream463444077.h"

// System.IO.MemoryStream
struct  MemoryStream_t_197486834_0  : public Stream_t463444077_0
{
	// System.Boolean System.IO.MemoryStream::canWrite
	bool ___canWrite_2;
	// System.Boolean System.IO.MemoryStream::allowGetBuffer
	bool ___allowGetBuffer_3;
	// System.Int32 System.IO.MemoryStream::capacity
	int32_t ___capacity_4;
	// System.Int32 System.IO.MemoryStream::length
	int32_t ___length_5;
	// System.Byte[] System.IO.MemoryStream::internalBuffer
	ByteU5BU5D_t_1238178395_0* ___internalBuffer_6;
	// System.Int32 System.IO.MemoryStream::initialIndex
	int32_t ___initialIndex_7;
	// System.Boolean System.IO.MemoryStream::expandable
	bool ___expandable_8;
	// System.Boolean System.IO.MemoryStream::streamClosed
	bool ___streamClosed_9;
	// System.Int32 System.IO.MemoryStream::position
	int32_t ___position_10;
	// System.Int32 System.IO.MemoryStream::dirty_bytes
	int32_t ___dirty_bytes_11;
};
