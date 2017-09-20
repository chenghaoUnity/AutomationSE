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

// System.IConsoleDriver
struct IConsoleDriver_t_1633624399_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ConsoleKeyInfo_1495289199.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.ConsoleDriver::.cctor()
extern "C"  void ConsoleDriver__cctor_m107835675_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConsoleDriver System.ConsoleDriver::CreateNullConsoleDriver()
extern "C" IL2CPP_NO_INLINE Object_t * ConsoleDriver_CreateNullConsoleDriver_m636297422_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConsoleDriver System.ConsoleDriver::CreateWindowsConsoleDriver()
extern "C" IL2CPP_NO_INLINE Object_t * ConsoleDriver_CreateWindowsConsoleDriver_m_2087983928_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConsoleDriver System.ConsoleDriver::CreateTermInfoDriver(System.String)
extern "C" IL2CPP_NO_INLINE Object_t * ConsoleDriver_CreateTermInfoDriver_m_1045774124_0 (Object_t * __this /* static, unused */, String_t* ___term, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.ConsoleDriver::ReadKey(System.Boolean)
extern "C"  ConsoleKeyInfo_t_1495289199_0  ConsoleDriver_ReadKey_m_685529582_0 (Object_t * __this /* static, unused */, bool ___intercept, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::get_IsConsole()
extern "C"  bool ConsoleDriver_get_IsConsole_m1257434962_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::Isatty(System.IntPtr)
extern "C"  bool ConsoleDriver_Isatty_m1339398398_0 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ConsoleDriver::InternalKeyAvailable(System.Int32)
extern "C"  int32_t ConsoleDriver_InternalKeyAvailable_m818093286_0 (Object_t * __this /* static, unused */, int32_t ___ms_timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::TtySetup(System.String,System.String,System.Byte[]&,System.Int32*&)
extern "C"  bool ConsoleDriver_TtySetup_m1308557272_0 (Object_t * __this /* static, unused */, String_t* ___keypadXmit, String_t* ___teardown, ByteU5BU5D_t_1238178395_0** ___control_characters, int32_t** ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::SetEcho(System.Boolean)
extern "C"  bool ConsoleDriver_SetEcho_m137134988_0 (Object_t * __this /* static, unused */, bool ___wantEcho, const MethodInfo* method) IL2CPP_METHOD_ATTR;
