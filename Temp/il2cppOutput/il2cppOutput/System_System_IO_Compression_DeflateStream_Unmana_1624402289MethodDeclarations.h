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

// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t_1624402289_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
extern "C"  void UnmanagedReadOrWrite__ctor_m1253704923_0 (UnmanagedReadOrWrite_t_1624402289_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::Invoke(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t UnmanagedReadOrWrite_Invoke_m1047666038_0 (UnmanagedReadOrWrite_t_1624402289_0 * __this, IntPtr_t ___buffer, int32_t ___length, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_UnmanagedReadOrWrite_t_1624402289_0(Il2CppObject* delegate, IntPtr_t ___buffer, int32_t ___length, IntPtr_t ___data);
// System.IAsyncResult System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Object_t * UnmanagedReadOrWrite_BeginInvoke_m_1433089985_0 (UnmanagedReadOrWrite_t_1624402289_0 * __this, IntPtr_t ___buffer, int32_t ___length, IntPtr_t ___data, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::EndInvoke(System.IAsyncResult)
extern "C"  int32_t UnmanagedReadOrWrite_EndInvoke_m_1896913765_0 (UnmanagedReadOrWrite_t_1624402289_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
