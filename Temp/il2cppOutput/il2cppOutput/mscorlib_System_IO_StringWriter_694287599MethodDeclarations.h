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

// System.IO.StringWriter
struct StringWriter_t_694287599_0;
// System.Text.StringBuilder
struct StringBuilder_t586045924_0;
// System.IFormatProvider
struct IFormatProvider_t_1172917514_0;
// System.Text.Encoding
struct Encoding_t453909881_0;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.StringWriter::.ctor()
extern "C"  void StringWriter__ctor_m_866744219_0 (StringWriter_t_694287599_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
extern "C"  void StringWriter__ctor_m_915896539_0 (StringWriter_t_694287599_0 * __this, StringBuilder_t586045924_0 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder,System.IFormatProvider)
extern "C"  void StringWriter__ctor_m_1378165713_0 (StringWriter_t_694287599_0 * __this, StringBuilder_t586045924_0 * ___sb, Object_t * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.StringWriter::get_Encoding()
extern "C"  Encoding_t453909881_0 * StringWriter_get_Encoding_m_1855586767_0 (StringWriter_t_694287599_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Close()
extern "C"  void StringWriter_Close_m844115323_0 (StringWriter_t_694287599_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Dispose(System.Boolean)
extern "C"  void StringWriter_Dispose_m_1902309031_0 (StringWriter_t_694287599_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.IO.StringWriter::GetStringBuilder()
extern "C"  StringBuilder_t586045924_0 * StringWriter_GetStringBuilder_m65831774_0 (StringWriter_t_694287599_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringWriter::ToString()
extern "C"  String_t* StringWriter_ToString_m_2039750706_0 (StringWriter_t_694287599_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char)
extern "C"  void StringWriter_Write_m_613893125_0 (StringWriter_t_694287599_0 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.String)
extern "C"  void StringWriter_Write_m133434528_0 (StringWriter_t_694287599_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void StringWriter_Write_m_1403053959_0 (StringWriter_t_694287599_0 * __this, CharU5BU5D_t_1225802637_0* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
