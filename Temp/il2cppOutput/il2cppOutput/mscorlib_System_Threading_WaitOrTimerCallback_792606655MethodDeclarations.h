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

// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t_792606655_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Threading.WaitOrTimerCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void WaitOrTimerCallback__ctor_m1555455757_0 (WaitOrTimerCallback_t_792606655_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitOrTimerCallback::Invoke(System.Object,System.Boolean)
extern "C"  void WaitOrTimerCallback_Invoke_m_1307866992_0 (WaitOrTimerCallback_t_792606655_0 * __this, Object_t * ___state, bool ___timedOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WaitOrTimerCallback_t_792606655_0(Il2CppObject* delegate, Object_t * ___state, bool ___timedOut);
// System.IAsyncResult System.Threading.WaitOrTimerCallback::BeginInvoke(System.Object,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Object_t * WaitOrTimerCallback_BeginInvoke_m_985608231_0 (WaitOrTimerCallback_t_792606655_0 * __this, Object_t * ___state, bool ___timedOut, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitOrTimerCallback::EndInvoke(System.IAsyncResult)
extern "C"  void WaitOrTimerCallback_EndInvoke_m1912954781_0 (WaitOrTimerCallback_t_792606655_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
