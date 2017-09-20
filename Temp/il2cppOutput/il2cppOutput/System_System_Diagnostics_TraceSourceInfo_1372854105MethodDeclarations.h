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

// System.Diagnostics.TraceSourceInfo
struct TraceSourceInfo_t_1372854105_0;
// System.String
struct String_t;
// System.Diagnostics.TraceImplSettings
struct TraceImplSettings_t_390842335_0;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t2121469360_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Diagnostics_SourceLevels463197681.h"

// System.Void System.Diagnostics.TraceSourceInfo::.ctor(System.String,System.Diagnostics.SourceLevels,System.Diagnostics.TraceImplSettings)
extern "C"  void TraceSourceInfo__ctor_m886015755_0 (TraceSourceInfo_t_1372854105_0 * __this, String_t* ___name, int32_t ___levels, TraceImplSettings_t_390842335_0 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceSourceInfo::get_Name()
extern "C"  String_t* TraceSourceInfo_get_Name_m_402764980_0 (TraceSourceInfo_t_1372854105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSourceInfo::get_Listeners()
extern "C"  TraceListenerCollection_t2121469360_0 * TraceSourceInfo_get_Listeners_m_1015699718_0 (TraceSourceInfo_t_1372854105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
