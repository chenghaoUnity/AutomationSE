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
// System.Object
struct Object_t;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;
// System.Threading.WaitHandle
struct WaitHandle_t1045483054_0;
// System.Exception
struct Exception_t2143823668_0;
// System.Net.EndPoint
struct EndPoint_t_1941440085_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t296217_0;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t787395324_0;

#include "mscorlib_System_Object_887538054.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "System_System_Net_Sockets_SocketFlags_1731181776.h"
#include "System_System_Net_Sockets_Socket_SocketOperation1456803484.h"

// System.Net.Sockets.Socket/SocketAsyncResult
struct  SocketAsyncResult_t_745821778_0  : public Object_t
{
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::Sock
	Socket_t771039639_0 * ___Sock_0;
	// System.IntPtr System.Net.Sockets.Socket/SocketAsyncResult::handle
	IntPtr_t ___handle_1;
	// System.Object System.Net.Sockets.Socket/SocketAsyncResult::state
	Object_t * ___state_2;
	// System.AsyncCallback System.Net.Sockets.Socket/SocketAsyncResult::callback
	AsyncCallback_t_266361018_0 * ___callback_3;
	// System.Threading.WaitHandle System.Net.Sockets.Socket/SocketAsyncResult::waithandle
	WaitHandle_t1045483054_0 * ___waithandle_4;
	// System.Exception System.Net.Sockets.Socket/SocketAsyncResult::delayedException
	Exception_t2143823668_0 * ___delayedException_5;
	// System.Net.EndPoint System.Net.Sockets.Socket/SocketAsyncResult::EndPoint
	EndPoint_t_1941440085_0 * ___EndPoint_6;
	// System.Byte[] System.Net.Sockets.Socket/SocketAsyncResult::Buffer
	ByteU5BU5D_t_1238178395_0* ___Buffer_7;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Offset
	int32_t ___Offset_8;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Size
	int32_t ___Size_9;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.Socket/SocketAsyncResult::SockFlags
	int32_t ___SockFlags_10;
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::AcceptSocket
	Socket_t771039639_0 * ___AcceptSocket_11;
	// System.Net.IPAddress[] System.Net.Sockets.Socket/SocketAsyncResult::Addresses
	IPAddressU5BU5D_t296217_0* ___Addresses_12;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Port
	int32_t ___Port_13;
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.Socket/SocketAsyncResult::Buffers
	Object_t* ___Buffers_14;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::ReuseSocket
	bool ___ReuseSocket_15;
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::acc_socket
	Socket_t771039639_0 * ___acc_socket_16;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::total
	int32_t ___total_17;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::completed_sync
	bool ___completed_sync_18;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::completed
	bool ___completed_19;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::blocking
	bool ___blocking_20;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::error
	int32_t ___error_21;
	// System.Net.Sockets.Socket/SocketOperation System.Net.Sockets.Socket/SocketAsyncResult::operation
	int32_t ___operation_22;
	// System.Object System.Net.Sockets.Socket/SocketAsyncResult::ares
	Object_t * ___ares_23;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::EndCalled
	int32_t ___EndCalled_24;
};
