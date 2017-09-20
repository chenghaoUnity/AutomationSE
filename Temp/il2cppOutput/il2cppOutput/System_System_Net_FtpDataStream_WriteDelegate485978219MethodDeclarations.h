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

// System.Net.FtpDataStream/WriteDelegate
struct WriteDelegate_t485978219_0;
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

// System.Void System.Net.FtpDataStream/WriteDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void WriteDelegate__ctor_m_41551369_0 (WriteDelegate_t485978219_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream/WriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C"  void WriteDelegate_Invoke_m_38146632_0 (WriteDelegate_t485978219_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WriteDelegate_t485978219_0(Il2CppObject* delegate, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size);
// System.IAsyncResult System.Net.FtpDataStream/WriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * WriteDelegate_BeginInvoke_m_792924849_0 (WriteDelegate_t485978219_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream/WriteDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void WriteDelegate_EndInvoke_m937099143_0 (WriteDelegate_t485978219_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
