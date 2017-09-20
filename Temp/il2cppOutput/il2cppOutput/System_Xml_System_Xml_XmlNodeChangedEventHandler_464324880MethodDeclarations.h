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

// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t_464324880_0;
// System.Object
struct Object_t;
// System.Xml.XmlNodeChangedEventArgs
struct XmlNodeChangedEventArgs_t1702150903_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Xml.XmlNodeChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlNodeChangedEventHandler__ctor_m_372667326_0 (XmlNodeChangedEventHandler_t_464324880_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeChangedEventHandler::Invoke(System.Object,System.Xml.XmlNodeChangedEventArgs)
extern "C"  void XmlNodeChangedEventHandler_Invoke_m_2032657368_0 (XmlNodeChangedEventHandler_t_464324880_0 * __this, Object_t * ___sender, XmlNodeChangedEventArgs_t1702150903_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlNodeChangedEventHandler_t_464324880_0(Il2CppObject* delegate, Object_t * ___sender, XmlNodeChangedEventArgs_t1702150903_0 * ___e);
// System.IAsyncResult System.Xml.XmlNodeChangedEventHandler::BeginInvoke(System.Object,System.Xml.XmlNodeChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Object_t * XmlNodeChangedEventHandler_BeginInvoke_m411216963_0 (XmlNodeChangedEventHandler_t_464324880_0 * __this, Object_t * ___sender, XmlNodeChangedEventArgs_t1702150903_0 * ___e, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void XmlNodeChangedEventHandler_EndInvoke_m1606512466_0 (XmlNodeChangedEventHandler_t_464324880_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
