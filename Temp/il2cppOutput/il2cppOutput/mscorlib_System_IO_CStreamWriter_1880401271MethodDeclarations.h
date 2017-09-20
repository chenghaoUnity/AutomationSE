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

// System.IO.CStreamWriter
struct CStreamWriter_t_1880401271_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.Text.Encoding
struct Encoding_t453909881_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.CStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void CStreamWriter__ctor_m74053267_0 (CStreamWriter_t_1880401271_0 * __this, Stream_t463444077_0 * ___stream, Encoding_t453909881_0 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void CStreamWriter_Write_m_959535113_0 (CStreamWriter_t_1880401271_0 * __this, CharU5BU5D_t_1225802637_0* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char)
extern "C"  void CStreamWriter_Write_m_426126215_0 (CStreamWriter_t_1880401271_0 * __this, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteString(System.String)
extern "C"  void CStreamWriter_InternalWriteString_m_604947414_0 (CStreamWriter_t_1880401271_0 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteChar(System.Char)
extern "C"  void CStreamWriter_InternalWriteChar_m_270216864_0 (CStreamWriter_t_1880401271_0 * __this, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteChars(System.Char[],System.Int32)
extern "C"  void CStreamWriter_InternalWriteChars_m_836425772_0 (CStreamWriter_t_1880401271_0 * __this, CharU5BU5D_t_1225802637_0* ___buffer, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char[])
extern "C"  void CStreamWriter_Write_m_1485348521_0 (CStreamWriter_t_1880401271_0 * __this, CharU5BU5D_t_1225802637_0* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.String)
extern "C"  void CStreamWriter_Write_m188808606_0 (CStreamWriter_t_1880401271_0 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
