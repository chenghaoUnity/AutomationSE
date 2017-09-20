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

// System.WindowsConsoleDriver
struct WindowsConsoleDriver_t_2036687209_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ConsoleKeyInfo_1495289199.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_Handles608576368.h"
#include "mscorlib_System_ConsoleScreenBufferInfo_1294413770.h"
#include "mscorlib_System_InputRecord368206432.h"

// System.Void System.WindowsConsoleDriver::.ctor()
extern "C"  void WindowsConsoleDriver__ctor_m_727240743_0 (WindowsConsoleDriver_t_2036687209_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.WindowsConsoleDriver::ReadKey(System.Boolean)
extern "C"  ConsoleKeyInfo_t_1495289199_0  WindowsConsoleDriver_ReadKey_m1393188309_0 (WindowsConsoleDriver_t_2036687209_0 * __this, bool ___intercept, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
extern "C"  IntPtr_t WindowsConsoleDriver_GetStdHandle_m_1584265825_0 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
extern "C"  bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m_237438648_0 (Object_t * __this /* static, unused */, IntPtr_t ___handle, ConsoleScreenBufferInfo_t_1294413770_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
extern "C"  bool WindowsConsoleDriver_ReadConsoleInput_m9651400_0 (Object_t * __this /* static, unused */, IntPtr_t ___handle, InputRecord_t368206432_0 * ___record, int32_t ___length, int32_t* ___nread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
