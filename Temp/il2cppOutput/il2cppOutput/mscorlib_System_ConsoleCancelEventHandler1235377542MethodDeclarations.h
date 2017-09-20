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

// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t1235377542_0;
// System.Object
struct Object_t;
// System.ConsoleCancelEventArgs
struct ConsoleCancelEventArgs_t_952970207_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.ConsoleCancelEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ConsoleCancelEventHandler__ctor_m1663124562_0 (ConsoleCancelEventHandler_t1235377542_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleCancelEventHandler::Invoke(System.Object,System.ConsoleCancelEventArgs)
extern "C"  void ConsoleCancelEventHandler_Invoke_m_868541457_0 (ConsoleCancelEventHandler_t1235377542_0 * __this, Object_t * ___sender, ConsoleCancelEventArgs_t_952970207_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ConsoleCancelEventHandler_t1235377542_0(Il2CppObject* delegate, Object_t * ___sender, ConsoleCancelEventArgs_t_952970207_0 * ___e);
// System.IAsyncResult System.ConsoleCancelEventHandler::BeginInvoke(System.Object,System.ConsoleCancelEventArgs,System.AsyncCallback,System.Object)
extern "C"  Object_t * ConsoleCancelEventHandler_BeginInvoke_m_1790203038_0 (ConsoleCancelEventHandler_t1235377542_0 * __this, Object_t * ___sender, ConsoleCancelEventArgs_t_952970207_0 * ___e, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleCancelEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ConsoleCancelEventHandler_EndInvoke_m223850338_0 (ConsoleCancelEventHandler_t1235377542_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
