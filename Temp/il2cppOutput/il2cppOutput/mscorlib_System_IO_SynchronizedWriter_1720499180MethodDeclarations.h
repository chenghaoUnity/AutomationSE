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

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t_1720499180_0;
// System.IO.TextWriter
struct TextWriter_t1418103405_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// System.Text.Encoding
struct Encoding_t453909881_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
extern "C"  void SynchronizedWriter__ctor_m_969329724_0 (SynchronizedWriter_t_1720499180_0 * __this, TextWriter_t1418103405_0 * ___writer, bool ___neverClose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
extern "C"  void SynchronizedWriter_Close_m69203352_0 (SynchronizedWriter_t_1720499180_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
extern "C"  void SynchronizedWriter_Flush_m_1557708892_0 (SynchronizedWriter_t_1720499180_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
extern "C"  void SynchronizedWriter_Write_m_896815170_0 (SynchronizedWriter_t_1720499180_0 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
extern "C"  void SynchronizedWriter_Write_m1449099100_0 (SynchronizedWriter_t_1720499180_0 * __this, CharU5BU5D_t_1225802637_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
extern "C"  void SynchronizedWriter_Write_m_1171711069_0 (SynchronizedWriter_t_1720499180_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object)
extern "C"  void SynchronizedWriter_Write_m_1224159951_0 (SynchronizedWriter_t_1720499180_0 * __this, String_t* ___format, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object[])
extern "C"  void SynchronizedWriter_Write_m403377167_0 (SynchronizedWriter_t_1720499180_0 * __this, String_t* ___format, ObjectU5BU5D_t1774424924_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void SynchronizedWriter_Write_m_1035822660_0 (SynchronizedWriter_t_1720499180_0 * __this, CharU5BU5D_t_1225802637_0* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object,System.Object)
extern "C"  void SynchronizedWriter_Write_m_841765313_0 (SynchronizedWriter_t_1720499180_0 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object,System.Object,System.Object)
extern "C"  void SynchronizedWriter_Write_m_41902387_0 (SynchronizedWriter_t_1720499180_0 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
extern "C"  void SynchronizedWriter_WriteLine_m_327126573_0 (SynchronizedWriter_t_1720499180_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
extern "C"  void SynchronizedWriter_WriteLine_m1236139023_0 (SynchronizedWriter_t_1720499180_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object)
extern "C"  void SynchronizedWriter_WriteLine_m_1256816483_0 (SynchronizedWriter_t_1720499180_0 * __this, String_t* ___format, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object[])
extern "C"  void SynchronizedWriter_WriteLine_m_914779013_0 (SynchronizedWriter_t_1720499180_0 * __this, String_t* ___format, ObjectU5BU5D_t1774424924_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object,System.Object)
extern "C"  void SynchronizedWriter_WriteLine_m83686571_0 (SynchronizedWriter_t_1720499180_0 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object,System.Object,System.Object)
extern "C"  void SynchronizedWriter_WriteLine_m_527943623_0 (SynchronizedWriter_t_1720499180_0 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.SynchronizedWriter::get_Encoding()
extern "C"  Encoding_t453909881_0 * SynchronizedWriter_get_Encoding_m1523733236_0 (SynchronizedWriter_t_1720499180_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedWriter::get_NewLine()
extern "C"  String_t* SynchronizedWriter_get_NewLine_m_1420542552_0 (SynchronizedWriter_t_1720499180_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
