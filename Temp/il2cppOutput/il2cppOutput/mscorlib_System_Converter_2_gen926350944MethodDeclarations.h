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

// System.Converter`2<System.Int64,System.Int32>
struct Converter_2_t926350944_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Converter`2<System.Int64,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Converter_2__ctor_m_264409550_0_gshared (Converter_2_t926350944_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Converter_2__ctor_m_264409550_0(__this, ___object, ___method, method) ((  void (*) (Converter_2_t926350944_0 *, Object_t *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m_264409550_0_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Int64,System.Int32>::Invoke(TInput)
extern "C"  int32_t Converter_2_Invoke_m1344335470_0_gshared (Converter_2_t926350944_0 * __this, int64_t ___input, const MethodInfo* method);
#define Converter_2_Invoke_m1344335470_0(__this, ___input, method) ((  int32_t (*) (Converter_2_t926350944_0 *, int64_t, const MethodInfo*))Converter_2_Invoke_m1344335470_0_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Int64,System.Int32>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C"  Object_t * Converter_2_BeginInvoke_m_588703797_0_gshared (Converter_2_t926350944_0 * __this, int64_t ___input, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Converter_2_BeginInvoke_m_588703797_0(__this, ___input, ___callback, ___object, method) ((  Object_t * (*) (Converter_2_t926350944_0 *, int64_t, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Converter_2_BeginInvoke_m_588703797_0_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Int64,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Converter_2_EndInvoke_m1458194938_0_gshared (Converter_2_t926350944_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Converter_2_EndInvoke_m1458194938_0(__this, ___result, method) ((  int32_t (*) (Converter_2_t926350944_0 *, Object_t *, const MethodInfo*))Converter_2_EndInvoke_m1458194938_0_gshared)(__this, ___result, method)
