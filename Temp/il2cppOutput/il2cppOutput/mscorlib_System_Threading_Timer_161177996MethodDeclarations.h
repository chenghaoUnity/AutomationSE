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

// System.Threading.Timer
struct Timer_t_161177996_0;
// System.Threading.TimerCallback
struct TimerCallback_t_1216385319_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan_393459662.h"

// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback,System.Object,System.TimeSpan,System.TimeSpan)
extern "C"  void Timer__ctor_m425594887_0 (Timer_t_161177996_0 * __this, TimerCallback_t_1216385319_0 * ___callback, Object_t * ___state, TimeSpan_t_393459662_0  ___dueTime, TimeSpan_t_393459662_0  ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::.cctor()
extern "C"  void Timer__cctor_m1320176523_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Init(System.Threading.TimerCallback,System.Object,System.Int64,System.Int64)
extern "C"  void Timer_Init_m_93562901_0 (Timer_t_161177996_0 * __this, TimerCallback_t_1216385319_0 * ___callback, Object_t * ___state, int64_t ___dueTime, int64_t ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.TimeSpan,System.TimeSpan)
extern "C"  bool Timer_Change_m_186887074_0 (Timer_t_161177996_0 * __this, TimeSpan_t_393459662_0  ___dueTime, TimeSpan_t_393459662_0  ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Dispose()
extern "C"  void Timer_Dispose_m_65837025_0 (Timer_t_161177996_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.Int64,System.Int64,System.Boolean)
extern "C"  bool Timer_Change_m_162405109_0 (Timer_t_161177996_0 * __this, int64_t ___dueTime, int64_t ___period, bool ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
