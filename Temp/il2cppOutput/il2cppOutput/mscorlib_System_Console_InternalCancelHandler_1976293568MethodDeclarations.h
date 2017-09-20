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

// System.Console/InternalCancelHandler
struct InternalCancelHandler_t_1976293568_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Console/InternalCancelHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void InternalCancelHandler__ctor_m_117609844_0 (InternalCancelHandler_t_1976293568_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console/InternalCancelHandler::Invoke()
extern "C"  void InternalCancelHandler_Invoke_m793783782_0 (InternalCancelHandler_t_1976293568_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_InternalCancelHandler_t_1976293568_0(Il2CppObject* delegate);
// System.IAsyncResult System.Console/InternalCancelHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * InternalCancelHandler_BeginInvoke_m_591168675_0 (InternalCancelHandler_t_1976293568_0 * __this, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console/InternalCancelHandler::EndInvoke(System.IAsyncResult)
extern "C"  void InternalCancelHandler_EndInvoke_m1952711324_0 (InternalCancelHandler_t_1976293568_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
