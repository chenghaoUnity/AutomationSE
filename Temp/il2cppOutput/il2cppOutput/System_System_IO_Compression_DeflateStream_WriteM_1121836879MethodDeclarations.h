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

// System.IO.Compression.DeflateStream/WriteMethod
struct WriteMethod_t_1121836879_0;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte_224751869.h"

// System.Void System.IO.Compression.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
extern "C"  void WriteMethod__ctor_m_648801469_0 (WriteMethod_t_1121836879_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C"  void WriteMethod_Invoke_m_147566612_0 (WriteMethod_t_1121836879_0 * __this, ByteU5BU5D_t_1238178395_0* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WriteMethod_t_1121836879_0(Il2CppObject* delegate, ByteU5BU5D_t_1238178395_0* ___array, int32_t ___offset, int32_t ___count);
// System.IAsyncResult System.IO.Compression.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * WriteMethod_BeginInvoke_m703457547_0 (WriteMethod_t_1121836879_0 * __this, ByteU5BU5D_t_1238178395_0* ___array, int32_t ___offset, int32_t ___count, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::EndInvoke(System.IAsyncResult)
extern "C"  void WriteMethod_EndInvoke_m_1042178349_0 (WriteMethod_t_1121836879_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
