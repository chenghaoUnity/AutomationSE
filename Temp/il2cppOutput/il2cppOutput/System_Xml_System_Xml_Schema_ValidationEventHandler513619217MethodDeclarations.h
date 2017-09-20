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

// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Object
struct Object_t;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t2045452406_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Xml.Schema.ValidationEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ValidationEventHandler__ctor_m2060655069_0 (ValidationEventHandler_t513619217_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.ValidationEventHandler::Invoke(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C"  void ValidationEventHandler_Invoke_m_1074604702_0 (ValidationEventHandler_t513619217_0 * __this, Object_t * ___sender, ValidationEventArgs_t2045452406_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ValidationEventHandler_t513619217_0(Il2CppObject* delegate, Object_t * ___sender, ValidationEventArgs_t2045452406_0 * ___e);
// System.IAsyncResult System.Xml.Schema.ValidationEventHandler::BeginInvoke(System.Object,System.Xml.Schema.ValidationEventArgs,System.AsyncCallback,System.Object)
extern "C"  Object_t * ValidationEventHandler_BeginInvoke_m_1396584487_0 (ValidationEventHandler_t513619217_0 * __this, Object_t * ___sender, ValidationEventArgs_t2045452406_0 * ___e, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.ValidationEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ValidationEventHandler_EndInvoke_m248513133_0 (ValidationEventHandler_t513619217_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
