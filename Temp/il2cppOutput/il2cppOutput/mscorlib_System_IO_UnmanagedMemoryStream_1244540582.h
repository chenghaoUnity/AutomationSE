#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.EventHandler
struct EventHandler_t_1938407861_0;

#include "mscorlib_System_IO_Stream463444077.h"
#include "mscorlib_System_IO_FileAccess724014189.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.IO.UnmanagedMemoryStream
struct  UnmanagedMemoryStream_t_1244540582_0  : public Stream_t463444077_0
{
	// System.Int64 System.IO.UnmanagedMemoryStream::length
	int64_t ___length_2;
	// System.Boolean System.IO.UnmanagedMemoryStream::closed
	bool ___closed_3;
	// System.Int64 System.IO.UnmanagedMemoryStream::capacity
	int64_t ___capacity_4;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::fileaccess
	int32_t ___fileaccess_5;
	// System.IntPtr System.IO.UnmanagedMemoryStream::initial_pointer
	IntPtr_t ___initial_pointer_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::initial_position
	int64_t ___initial_position_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::current_position
	int64_t ___current_position_8;
	// System.EventHandler System.IO.UnmanagedMemoryStream::Closed
	EventHandler_t_1938407861_0 * ___Closed_9;
};
