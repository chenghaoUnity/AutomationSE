﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.String
struct String_t;

#include "mscorlib_System_IO_Stream463444077.h"
#include "mscorlib_System_IO_FileAccess724014189.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.IO.FileStream
struct  FileStream_t1255485065_0  : public Stream_t463444077_0
{
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_2;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_3;
	// System.Boolean System.IO.FileStream::async
	bool ___async_4;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_5;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_6;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_7;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t_1238178395_0* ___buf_8;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_9;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_10;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_11;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_12;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_13;
	// System.String System.IO.FileStream::name
	String_t* ___name_14;
	// System.IntPtr System.IO.FileStream::handle
	IntPtr_t ___handle_15;
};
