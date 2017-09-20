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

// System.IO.CStreamReader
struct CStreamReader_t_2035806503_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.Text.Encoding
struct Encoding_t453909881_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.CStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void CStreamReader__ctor_m725065443_0 (CStreamReader_t_2035806503_0 * __this, Stream_t463444077_0 * ___stream, Encoding_t453909881_0 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.CStreamReader::Peek()
extern "C"  int32_t CStreamReader_Peek_m2109289740_0 (CStreamReader_t_2035806503_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.CStreamReader::Read()
extern "C"  int32_t CStreamReader_Read_m_2128545145_0 (CStreamReader_t_2035806503_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.CStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t CStreamReader_Read_m_234463244_0 (CStreamReader_t_2035806503_0 * __this, CharU5BU5D_t_1225802637_0* ___dest, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.CStreamReader::ReadLine()
extern "C"  String_t* CStreamReader_ReadLine_m1098008948_0 (CStreamReader_t_2035806503_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.CStreamReader::ReadToEnd()
extern "C"  String_t* CStreamReader_ReadToEnd_m_1677129790_0 (CStreamReader_t_2035806503_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
