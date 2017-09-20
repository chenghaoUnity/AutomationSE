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

// System.Xml.NonBlockingStreamReader
struct NonBlockingStreamReader_t_1296686208_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.Text.Encoding
struct Encoding_t453909881_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.NonBlockingStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void NonBlockingStreamReader__ctor_m_1090949436_0 (NonBlockingStreamReader_t_1296686208_0 * __this, Stream_t463444077_0 * ___stream, Encoding_t453909881_0 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Xml.NonBlockingStreamReader::get_Encoding()
extern "C"  Encoding_t453909881_0 * NonBlockingStreamReader_get_Encoding_m_555027482_0 (NonBlockingStreamReader_t_1296686208_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.NonBlockingStreamReader::Close()
extern "C"  void NonBlockingStreamReader_Close_m37904620_0 (NonBlockingStreamReader_t_1296686208_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.NonBlockingStreamReader::Dispose(System.Boolean)
extern "C"  void NonBlockingStreamReader_Dispose_m_1396423990_0 (NonBlockingStreamReader_t_1296686208_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::ReadBuffer()
extern "C"  int32_t NonBlockingStreamReader_ReadBuffer_m_1015222074_0 (NonBlockingStreamReader_t_1296686208_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::Peek()
extern "C"  int32_t NonBlockingStreamReader_Peek_m717157035_0 (NonBlockingStreamReader_t_1296686208_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::Read()
extern "C"  int32_t NonBlockingStreamReader_Read_m774289446_0 (NonBlockingStreamReader_t_1296686208_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t NonBlockingStreamReader_Read_m_1882284683_0 (NonBlockingStreamReader_t_1296686208_0 * __this, CharU5BU5D_t_1225802637_0* ___dest_buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::FindNextEOL()
extern "C"  int32_t NonBlockingStreamReader_FindNextEOL_m1875155624_0 (NonBlockingStreamReader_t_1296686208_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NonBlockingStreamReader::ReadLine()
extern "C"  String_t* NonBlockingStreamReader_ReadLine_m1680805819_0 (NonBlockingStreamReader_t_1296686208_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NonBlockingStreamReader::ReadToEnd()
extern "C"  String_t* NonBlockingStreamReader_ReadToEnd_m_790295973_0 (NonBlockingStreamReader_t_1296686208_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
