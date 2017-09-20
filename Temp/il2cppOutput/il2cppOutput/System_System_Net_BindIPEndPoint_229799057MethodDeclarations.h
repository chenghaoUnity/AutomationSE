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

// System.Net.BindIPEndPoint
struct BindIPEndPoint_t_229799057_0;
// System.Object
struct Object_t;
// System.Net.IPEndPoint
struct IPEndPoint_t_1780335022_0;
// System.Net.ServicePoint
struct ServicePoint_t1961884333_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Net.BindIPEndPoint::.ctor(System.Object,System.IntPtr)
extern "C"  void BindIPEndPoint__ctor_m218773313_0 (BindIPEndPoint_t_229799057_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::Invoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32)
extern "C"  IPEndPoint_t_1780335022_0 * BindIPEndPoint_Invoke_m554750276_0 (BindIPEndPoint_t_229799057_0 * __this, ServicePoint_t1961884333_0 * ___servicePoint, IPEndPoint_t_1780335022_0 * ___remoteEndPoint, int32_t ___retryCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" IPEndPoint_t_1780335022_0 * pinvoke_delegate_wrapper_BindIPEndPoint_t_229799057_0(Il2CppObject* delegate, ServicePoint_t1961884333_0 * ___servicePoint, IPEndPoint_t_1780335022_0 * ___remoteEndPoint, int32_t ___retryCount);
// System.IAsyncResult System.Net.BindIPEndPoint::BeginInvoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * BindIPEndPoint_BeginInvoke_m_890545538_0 (BindIPEndPoint_t_229799057_0 * __this, ServicePoint_t1961884333_0 * ___servicePoint, IPEndPoint_t_1780335022_0 * ___remoteEndPoint, int32_t ___retryCount, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::EndInvoke(System.IAsyncResult)
extern "C"  IPEndPoint_t_1780335022_0 * BindIPEndPoint_EndInvoke_m_1407542934_0 (BindIPEndPoint_t_229799057_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
