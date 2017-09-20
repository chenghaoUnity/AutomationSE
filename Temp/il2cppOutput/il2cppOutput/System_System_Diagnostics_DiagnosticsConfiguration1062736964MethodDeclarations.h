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

// System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler
struct ElementHandler_t1062736964_0;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t_1514320629_0;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ElementHandler__ctor_m132868758_0 (ElementHandler_t1062736964_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::Invoke(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void ElementHandler_Invoke_m1252101530_0 (ElementHandler_t1062736964_0 * __this, Object_t * ___d, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ElementHandler_t1062736964_0(Il2CppObject* delegate, Object_t * ___d, XmlNode_t_990591852_0 * ___node);
// System.IAsyncResult System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::BeginInvoke(System.Collections.IDictionary,System.Xml.XmlNode,System.AsyncCallback,System.Object)
extern "C"  Object_t * ElementHandler_BeginInvoke_m1937105431_0 (ElementHandler_t1062736964_0 * __this, Object_t * ___d, XmlNode_t_990591852_0 * ___node, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ElementHandler_EndInvoke_m_1600677978_0 (ElementHandler_t1062736964_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
