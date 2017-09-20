﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.ServicePoint
struct ServicePoint_t1961884333_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.Net.Sockets.Socket
struct Socket_t771039639_0;
// System.Object
struct Object_t;
// System.Threading.WaitCallback
struct WaitCallback_t_487418165_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;
// System.EventHandler
struct EventHandler_t_1938407861_0;
// System.Net.WebConnection/AbortHelper
struct AbortHelper_t1404110891_0;
// System.Net.WebConnectionData
struct WebConnectionData_t909510822_0;
// System.Net.ChunkStream
struct ChunkStream_t_730507177_0;
// System.Collections.Queue
struct Queue_t_1070229187_0;
// System.Net.HttpWebRequest
struct HttpWebRequest_t_319555179_0;
// System.Net.NetworkCredential
struct NetworkCredential_t23481775_0;
// System.Exception
struct Exception_t2143823668_0;
// System.Type
struct Type_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_Object_887538054.h"
#include "System_System_Net_WebExceptionStatus_18632733.h"
#include "System_System_Net_ReadState1596900133.h"

// System.Net.WebConnection
struct  WebConnection_t_192777508_0  : public Object_t
{
	// System.Net.ServicePoint System.Net.WebConnection::sPoint
	ServicePoint_t1961884333_0 * ___sPoint_0;
	// System.IO.Stream System.Net.WebConnection::nstream
	Stream_t463444077_0 * ___nstream_1;
	// System.Net.Sockets.Socket System.Net.WebConnection::socket
	Socket_t771039639_0 * ___socket_2;
	// System.Object System.Net.WebConnection::socketLock
	Object_t * ___socketLock_3;
	// System.Net.WebExceptionStatus System.Net.WebConnection::status
	int32_t ___status_4;
	// System.Threading.WaitCallback System.Net.WebConnection::initConn
	WaitCallback_t_487418165_0 * ___initConn_5;
	// System.Boolean System.Net.WebConnection::keepAlive
	bool ___keepAlive_6;
	// System.Byte[] System.Net.WebConnection::buffer
	ByteU5BU5D_t_1238178395_0* ___buffer_7;
	// System.EventHandler System.Net.WebConnection::abortHandler
	EventHandler_t_1938407861_0 * ___abortHandler_9;
	// System.Net.WebConnection/AbortHelper System.Net.WebConnection::abortHelper
	AbortHelper_t1404110891_0 * ___abortHelper_10;
	// System.Net.ReadState System.Net.WebConnection::readState
	int32_t ___readState_11;
	// System.Net.WebConnectionData System.Net.WebConnection::Data
	WebConnectionData_t909510822_0 * ___Data_12;
	// System.Boolean System.Net.WebConnection::chunkedRead
	bool ___chunkedRead_13;
	// System.Net.ChunkStream System.Net.WebConnection::chunkStream
	ChunkStream_t_730507177_0 * ___chunkStream_14;
	// System.Collections.Queue System.Net.WebConnection::queue
	Queue_t_1070229187_0 * ___queue_15;
	// System.Boolean System.Net.WebConnection::reused
	bool ___reused_16;
	// System.Int32 System.Net.WebConnection::position
	int32_t ___position_17;
	// System.Boolean System.Net.WebConnection::busy
	bool ___busy_18;
	// System.Net.HttpWebRequest System.Net.WebConnection::priority_request
	HttpWebRequest_t_319555179_0 * ___priority_request_19;
	// System.Net.NetworkCredential System.Net.WebConnection::ntlm_credentials
	NetworkCredential_t23481775_0 * ___ntlm_credentials_20;
	// System.Boolean System.Net.WebConnection::ntlm_authenticated
	bool ___ntlm_authenticated_21;
	// System.Boolean System.Net.WebConnection::unsafe_sharing
	bool ___unsafe_sharing_22;
	// System.Boolean System.Net.WebConnection::ssl
	bool ___ssl_23;
	// System.Boolean System.Net.WebConnection::certsAvailable
	bool ___certsAvailable_24;
	// System.Exception System.Net.WebConnection::connect_exception
	Exception_t2143823668_0 * ___connect_exception_25;
};
struct WebConnection_t_192777508_0_StaticFields{
	// System.AsyncCallback System.Net.WebConnection::readDoneDelegate
	AsyncCallback_t_266361018_0 * ___readDoneDelegate_8;
	// System.Object System.Net.WebConnection::classLock
	Object_t * ___classLock_26;
	// System.Type System.Net.WebConnection::sslStream
	Type_t * ___sslStream_27;
	// System.Reflection.PropertyInfo System.Net.WebConnection::piClient
	PropertyInfo_t * ___piClient_28;
	// System.Reflection.PropertyInfo System.Net.WebConnection::piServer
	PropertyInfo_t * ___piServer_29;
	// System.Reflection.PropertyInfo System.Net.WebConnection::piTrustFailure
	PropertyInfo_t * ___piTrustFailure_30;
	// System.Reflection.MethodInfo System.Net.WebConnection::method_GetSecurityPolicyFromNonMainThread
	MethodInfo_t * ___method_GetSecurityPolicyFromNonMainThread_31;
};