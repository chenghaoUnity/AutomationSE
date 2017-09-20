#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t_1774777865_0;
// System.IO.Stream
struct Stream_t463444077_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Security.AuthenticatedStream::.ctor(System.IO.Stream,System.Boolean)
extern "C"  void AuthenticatedStream__ctor_m486529261_0 (AuthenticatedStream_t_1774777865_0 * __this, Stream_t463444077_0 * ___innerStream, bool ___leaveInnerStreamOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.Security.AuthenticatedStream::get_InnerStream()
extern "C"  Stream_t463444077_0 * AuthenticatedStream_get_InnerStream_m_1948025126_0 (AuthenticatedStream_t_1774777865_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.AuthenticatedStream::get_LeaveInnerStreamOpen()
extern "C"  bool AuthenticatedStream_get_LeaveInnerStreamOpen_m2037871303_0 (AuthenticatedStream_t_1774777865_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.AuthenticatedStream::Dispose(System.Boolean)
extern "C"  void AuthenticatedStream_Dispose_m1285944557_0 (AuthenticatedStream_t_1774777865_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
