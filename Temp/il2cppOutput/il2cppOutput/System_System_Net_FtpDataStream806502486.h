#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.FtpWebRequest
struct FtpWebRequest_t1507005735_0;
// System.IO.Stream
struct Stream_t463444077_0;

#include "mscorlib_System_IO_Stream463444077.h"

// System.Net.FtpDataStream
struct  FtpDataStream_t806502486_0  : public Stream_t463444077_0
{
	// System.Net.FtpWebRequest System.Net.FtpDataStream::request
	FtpWebRequest_t1507005735_0 * ___request_2;
	// System.IO.Stream System.Net.FtpDataStream::networkStream
	Stream_t463444077_0 * ___networkStream_3;
	// System.Boolean System.Net.FtpDataStream::disposed
	bool ___disposed_4;
	// System.Boolean System.Net.FtpDataStream::isRead
	bool ___isRead_5;
	// System.Int32 System.Net.FtpDataStream::totalRead
	int32_t ___totalRead_6;
};
