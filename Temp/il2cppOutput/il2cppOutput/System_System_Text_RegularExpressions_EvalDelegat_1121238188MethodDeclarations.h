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

// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t_1121238188_0;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.RxInterpreter
struct RxInterpreter_t621165985_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Text.RegularExpressions.EvalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void EvalDelegate__ctor_m1348567526_0 (EvalDelegate_t_1121238188_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.EvalDelegate::Invoke(System.Text.RegularExpressions.RxInterpreter,System.Int32,System.Int32&)
extern "C"  bool EvalDelegate_Invoke_m1810867881_0 (EvalDelegate_t_1121238188_0 * __this, RxInterpreter_t621165985_0 * ___interp, int32_t ___strpos, int32_t* ___strpos_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_EvalDelegate_t_1121238188_0(Il2CppObject* delegate, RxInterpreter_t621165985_0 * ___interp, int32_t ___strpos, int32_t* ___strpos_result);
// System.IAsyncResult System.Text.RegularExpressions.EvalDelegate::BeginInvoke(System.Text.RegularExpressions.RxInterpreter,System.Int32,System.Int32&,System.AsyncCallback,System.Object)
extern "C"  Object_t * EvalDelegate_BeginInvoke_m_535910626_0 (EvalDelegate_t_1121238188_0 * __this, RxInterpreter_t621165985_0 * ___interp, int32_t ___strpos, int32_t* ___strpos_result, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.EvalDelegate::EndInvoke(System.Int32&,System.IAsyncResult)
extern "C"  bool EvalDelegate_EndInvoke_m1878541493_0 (EvalDelegate_t_1121238188_0 * __this, int32_t* ___strpos_result, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
