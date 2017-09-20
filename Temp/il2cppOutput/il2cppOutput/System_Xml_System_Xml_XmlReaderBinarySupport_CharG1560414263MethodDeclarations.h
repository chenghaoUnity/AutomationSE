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

// System.Xml.XmlReaderBinarySupport/CharGetter
struct CharGetter_t1560414263_0;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Char_224738991.h"

// System.Void System.Xml.XmlReaderBinarySupport/CharGetter::.ctor(System.Object,System.IntPtr)
extern "C"  void CharGetter__ctor_m_543210621_0 (CharGetter_t1560414263_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::Invoke(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t CharGetter_Invoke_m_2085975172_0 (CharGetter_t1560414263_0 * __this, CharU5BU5D_t_1225802637_0* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_CharGetter_t1560414263_0(Il2CppObject* delegate, CharU5BU5D_t_1225802637_0* ___buffer, int32_t ___offset, int32_t ___length);
// System.IAsyncResult System.Xml.XmlReaderBinarySupport/CharGetter::BeginInvoke(System.Char[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * CharGetter_BeginInvoke_m657080209_0 (CharGetter_t1560414263_0 * __this, CharU5BU5D_t_1225802637_0* ___buffer, int32_t ___offset, int32_t ___length, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CharGetter_EndInvoke_m831480821_0 (CharGetter_t1560414263_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
