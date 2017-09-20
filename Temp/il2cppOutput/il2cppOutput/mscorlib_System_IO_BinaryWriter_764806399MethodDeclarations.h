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

// System.IO.BinaryWriter
struct BinaryWriter_t_764806399_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.Text.Encoding
struct Encoding_t453909881_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Decimal1458036598.h"

// System.Void System.IO.BinaryWriter::.ctor()
extern "C"  void BinaryWriter__ctor_m_974487947_0 (BinaryWriter_t_764806399_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
extern "C"  void BinaryWriter__ctor_m_474924276_0 (BinaryWriter_t_764806399_0 * __this, Stream_t463444077_0 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void BinaryWriter__ctor_m_1023921275_0 (BinaryWriter_t_764806399_0 * __this, Stream_t463444077_0 * ___output, Encoding_t453909881_0 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.cctor()
extern "C"  void BinaryWriter__cctor_m_626451496_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::System.IDisposable.Dispose()
extern "C"  void BinaryWriter_System_IDisposable_Dispose_m_392668086_0 (BinaryWriter_t_764806399_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Dispose(System.Boolean)
extern "C"  void BinaryWriter_Dispose_m1210247017_0 (BinaryWriter_t_764806399_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Flush()
extern "C"  void BinaryWriter_Flush_m_890540649_0 (BinaryWriter_t_764806399_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Boolean)
extern "C"  void BinaryWriter_Write_m_1253698135_0 (BinaryWriter_t_764806399_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte)
extern "C"  void BinaryWriter_Write_m1743996025_0 (BinaryWriter_t_764806399_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte[])
extern "C"  void BinaryWriter_Write_m942985559_0 (BinaryWriter_t_764806399_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void BinaryWriter_Write_m748689399_0 (BinaryWriter_t_764806399_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Char)
extern "C"  void BinaryWriter_Write_m1744395243_0 (BinaryWriter_t_764806399_0 * __this, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Char[])
extern "C"  void BinaryWriter_Write_m1326634057_0 (BinaryWriter_t_764806399_0 * __this, CharU5BU5D_t_1225802637_0* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Decimal)
extern "C"  void BinaryWriter_Write_m1600738208_0 (BinaryWriter_t_764806399_0 * __this, Decimal_t1458036598_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Double)
extern "C"  void BinaryWriter_Write_m_1862415152_0 (BinaryWriter_t_764806399_0 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int16)
extern "C"  void BinaryWriter_Write_m_1580502275_0 (BinaryWriter_t_764806399_0 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int32)
extern "C"  void BinaryWriter_Write_m_1580500477_0 (BinaryWriter_t_764806399_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int64)
extern "C"  void BinaryWriter_Write_m_1580497532_0 (BinaryWriter_t_764806399_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.SByte)
extern "C"  void BinaryWriter_Write_m_1334630890_0 (BinaryWriter_t_764806399_0 * __this, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Single)
extern "C"  void BinaryWriter_Write_m_1612852423_0 (BinaryWriter_t_764806399_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.String)
extern "C"  void BinaryWriter_Write_m_1294176112_0 (BinaryWriter_t_764806399_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt16)
extern "C"  void BinaryWriter_Write_m_753648766_0 (BinaryWriter_t_764806399_0 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt32)
extern "C"  void BinaryWriter_Write_m_753646968_0 (BinaryWriter_t_764806399_0 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt64)
extern "C"  void BinaryWriter_Write_m_753644023_0 (BinaryWriter_t_764806399_0 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write7BitEncodedInt(System.Int32)
extern "C"  void BinaryWriter_Write7BitEncodedInt_m1552112122_0 (BinaryWriter_t_764806399_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
