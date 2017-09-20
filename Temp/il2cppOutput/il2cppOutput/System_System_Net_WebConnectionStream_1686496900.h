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
// System.Net.WebConnection
struct WebConnection_t_192777508_0;
// System.Net.HttpWebRequest
struct HttpWebRequest_t_319555179_0;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t856229986_0;
// System.IO.MemoryStream
struct MemoryStream_t_197486834_0;
// System.Object
struct Object_t;

#include "mscorlib_System_IO_Stream463444077.h"

// System.Net.WebConnectionStream
struct  WebConnectionStream_t_1686496900_0  : public Stream_t463444077_0
{
	// System.Boolean System.Net.WebConnectionStream::isRead
	bool ___isRead_3;
	// System.Net.WebConnection System.Net.WebConnectionStream::cnc
	WebConnection_t_192777508_0 * ___cnc_4;
	// System.Net.HttpWebRequest System.Net.WebConnectionStream::request
	HttpWebRequest_t_319555179_0 * ___request_5;
	// System.Byte[] System.Net.WebConnectionStream::readBuffer
	ByteU5BU5D_t_1238178395_0* ___readBuffer_6;
	// System.Int32 System.Net.WebConnectionStream::readBufferOffset
	int32_t ___readBufferOffset_7;
	// System.Int32 System.Net.WebConnectionStream::readBufferSize
	int32_t ___readBufferSize_8;
	// System.Int32 System.Net.WebConnectionStream::contentLength
	int32_t ___contentLength_9;
	// System.Int32 System.Net.WebConnectionStream::totalRead
	int32_t ___totalRead_10;
	// System.Int64 System.Net.WebConnectionStream::totalWritten
	int64_t ___totalWritten_11;
	// System.Boolean System.Net.WebConnectionStream::nextReadCalled
	bool ___nextReadCalled_12;
	// System.Int32 System.Net.WebConnectionStream::pendingReads
	int32_t ___pendingReads_13;
	// System.Int32 System.Net.WebConnectionStream::pendingWrites
	int32_t ___pendingWrites_14;
	// System.Threading.ManualResetEvent System.Net.WebConnectionStream::pending
	ManualResetEvent_t856229986_0 * ___pending_15;
	// System.Boolean System.Net.WebConnectionStream::allowBuffering
	bool ___allowBuffering_16;
	// System.Boolean System.Net.WebConnectionStream::sendChunked
	bool ___sendChunked_17;
	// System.IO.MemoryStream System.Net.WebConnectionStream::writeBuffer
	MemoryStream_t_197486834_0 * ___writeBuffer_18;
	// System.Boolean System.Net.WebConnectionStream::requestWritten
	bool ___requestWritten_19;
	// System.Byte[] System.Net.WebConnectionStream::headers
	ByteU5BU5D_t_1238178395_0* ___headers_20;
	// System.Boolean System.Net.WebConnectionStream::disposed
	bool ___disposed_21;
	// System.Boolean System.Net.WebConnectionStream::headersSent
	bool ___headersSent_22;
	// System.Object System.Net.WebConnectionStream::locker
	Object_t * ___locker_23;
	// System.Boolean System.Net.WebConnectionStream::initRead
	bool ___initRead_24;
	// System.Boolean System.Net.WebConnectionStream::read_eof
	bool ___read_eof_25;
	// System.Boolean System.Net.WebConnectionStream::complete_request_written
	bool ___complete_request_written_26;
	// System.Int32 System.Net.WebConnectionStream::read_timeout
	int32_t ___read_timeout_27;
	// System.Int32 System.Net.WebConnectionStream::write_timeout
	int32_t ___write_timeout_28;
};
struct WebConnectionStream_t_1686496900_0_StaticFields{
	// System.Byte[] System.Net.WebConnectionStream::crlf
	ByteU5BU5D_t_1238178395_0* ___crlf_2;
};
