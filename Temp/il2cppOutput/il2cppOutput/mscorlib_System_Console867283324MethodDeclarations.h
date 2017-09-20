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

// System.Text.Encoding
struct Encoding_t453909881_0;
// System.IO.TextWriter
struct TextWriter_t1418103405_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_IO_FileAccess724014189.h"
#include "mscorlib_System_ConsoleKeyInfo_1495289199.h"

// System.Void System.Console::.cctor()
extern "C"  void Console__cctor_m_300084845_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::SetEncodings(System.Text.Encoding,System.Text.Encoding)
extern "C"  void Console_SetEncodings_m_511731714_0 (Object_t * __this /* static, unused */, Encoding_t453909881_0 * ___inputEncoding, Encoding_t453909881_0 * ___outputEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Console::get_Error()
extern "C"  TextWriter_t1418103405_0 * Console_get_Error_m_1286059787_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::Open(System.IntPtr,System.IO.FileAccess,System.Int32)
extern "C"  Stream_t463444077_0 * Console_Open_m1728401432_0 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t ___access, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardError(System.Int32)
extern "C"  Stream_t463444077_0 * Console_OpenStandardError_m1760848776_0 (Object_t * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardInput(System.Int32)
extern "C"  Stream_t463444077_0 * Console_OpenStandardInput_m_383470134_0 (Object_t * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardOutput(System.Int32)
extern "C"  Stream_t463444077_0 * Console_OpenStandardOutput_m51663653_0 (Object_t * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String)
extern "C"  void Console_WriteLine_m_1465765321_0 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object)
extern "C"  void Console_WriteLine_m733794501_0 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object[])
extern "C"  void Console_WriteLine_m801929891_0 (Object_t * __this /* static, unused */, String_t* ___format, ObjectU5BU5D_t1774424924_0* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object,System.Object)
extern "C"  void Console_WriteLine_m2090852051_0 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object,System.Object,System.Object)
extern "C"  void Console_WriteLine_m_300794783_0 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Console::get_InputEncoding()
extern "C"  Encoding_t453909881_0 * Console_get_InputEncoding_m1670761974_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Console::get_OutputEncoding()
extern "C"  Encoding_t453909881_0 * Console_get_OutputEncoding_m_1478554755_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.Console::ReadKey()
extern "C"  ConsoleKeyInfo_t_1495289199_0  Console_ReadKey_m838968291_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.Console::ReadKey(System.Boolean)
extern "C"  ConsoleKeyInfo_t_1495289199_0  Console_ReadKey_m_2132914150_0 (Object_t * __this /* static, unused */, bool ___intercept, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::DoConsoleCancelEvent()
extern "C"  void Console_DoConsoleCancelEvent_m_1183875074_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
