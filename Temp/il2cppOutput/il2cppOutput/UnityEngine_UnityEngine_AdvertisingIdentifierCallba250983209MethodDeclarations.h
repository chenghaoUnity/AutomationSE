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

// UnityEngine.AdvertisingIdentifierCallback
struct AdvertisingIdentifierCallback_t250983209_0;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_String_756155572.h"

// System.Void UnityEngine.AdvertisingIdentifierCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void AdvertisingIdentifierCallback__ctor_m_733100037_0 (AdvertisingIdentifierCallback_t250983209_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AdvertisingIdentifierCallback::Invoke(System.String,System.Boolean)
extern "C"  void AdvertisingIdentifierCallback_Invoke_m1805731536_0 (AdvertisingIdentifierCallback_t250983209_0 * __this, String_t* ___advertisingId, bool ___trackingEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AdvertisingIdentifierCallback_t250983209_0(Il2CppObject* delegate, String_t* ___advertisingId, bool ___trackingEnabled);
// System.IAsyncResult UnityEngine.AdvertisingIdentifierCallback::BeginInvoke(System.String,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Object_t * AdvertisingIdentifierCallback_BeginInvoke_m166582957_0 (AdvertisingIdentifierCallback_t250983209_0 * __this, String_t* ___advertisingId, bool ___trackingEnabled, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AdvertisingIdentifierCallback::EndInvoke(System.IAsyncResult)
extern "C"  void AdvertisingIdentifierCallback_EndInvoke_m530739083_0 (AdvertisingIdentifierCallback_t250983209_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
