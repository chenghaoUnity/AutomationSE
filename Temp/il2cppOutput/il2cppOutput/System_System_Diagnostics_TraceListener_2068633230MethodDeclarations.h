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

// System.Diagnostics.TraceListener
struct TraceListener_t_2068633230_0;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t_1542449046_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Diagnostics_TraceOptions_1636724192.h"

// System.Void System.Diagnostics.TraceListener::.ctor(System.String)
extern "C"  void TraceListener__ctor_m1786092830_0 (TraceListener_t_2068633230_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_IndentLevel(System.Int32)
extern "C"  void TraceListener_set_IndentLevel_m1540755758_0 (TraceListener_t_2068633230_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_IndentSize(System.Int32)
extern "C"  void TraceListener_set_IndentSize_m_31587269_0 (TraceListener_t_2068633230_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceListener::get_Name()
extern "C"  String_t* TraceListener_get_Name_m_525275241_0 (TraceListener_t_2068633230_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_Name(System.String)
extern "C"  void TraceListener_set_Name_m_432211750_0 (TraceListener_t_2068633230_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Dispose()
extern "C"  void TraceListener_Dispose_m_1695701087_0 (TraceListener_t_2068633230_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Dispose(System.Boolean)
extern "C"  void TraceListener_Dispose_m534900568_0 (TraceListener_t_2068633230_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Diagnostics.TraceListener::GetSupportedAttributes()
extern "C"  StringU5BU5D_t_816028754_0* TraceListener_GetSupportedAttributes_m2024753616_0 (TraceListener_t_2068633230_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Diagnostics.TraceListener::get_Attributes()
extern "C"  StringDictionary_t_1542449046_0 * TraceListener_get_Attributes_m182139119_0 (TraceListener_t_2068633230_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_TraceOutputOptions(System.Diagnostics.TraceOptions)
extern "C"  void TraceListener_set_TraceOutputOptions_m217665283_0 (TraceListener_t_2068633230_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
