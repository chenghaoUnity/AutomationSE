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

// System.Net.ChunkStream
struct ChunkStream_t_730507177_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t_1532305783_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_ChunkStream_State1548555449.h"

// System.Void System.Net.ChunkStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Net.WebHeaderCollection)
extern "C"  void ChunkStream__ctor_m_1275124627_0 (ChunkStream_t_730507177_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, WebHeaderCollection_t_1532305783_0 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::.ctor(System.Net.WebHeaderCollection)
extern "C"  void ChunkStream__ctor_m_1342957968_0 (ChunkStream_t_730507177_0 * __this, WebHeaderCollection_t_1532305783_0 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ResetBuffer()
extern "C"  void ChunkStream_ResetBuffer_m_1983958612_0 (ChunkStream_t_730507177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::WriteAndReadBack(System.Byte[],System.Int32,System.Int32,System.Int32&)
extern "C"  void ChunkStream_WriteAndReadBack_m1174558148_0 (ChunkStream_t_730507177_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, int32_t* ___read, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ChunkStream_Read_m154741438_0 (ChunkStream_t_730507177_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::ReadFromChunks(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ChunkStream_ReadFromChunks_m1120476462_0 (ChunkStream_t_730507177_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ChunkStream_Write_m_479715251_0 (ChunkStream_t_730507177_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::InternalWrite(System.Byte[],System.Int32&,System.Int32)
extern "C"  void ChunkStream_InternalWrite_m1638992728_0 (ChunkStream_t_730507177_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ChunkStream::get_WantMore()
extern "C"  bool ChunkStream_get_WantMore_m_502327447_0 (ChunkStream_t_730507177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::get_ChunkLeft()
extern "C"  int32_t ChunkStream_get_ChunkLeft_m642792824_0 (ChunkStream_t_730507177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadBody(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_ReadBody_m977300054_0 (ChunkStream_t_730507177_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::GetChunkSize(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_GetChunkSize_m_1991768746_0 (ChunkStream_t_730507177_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ChunkStream::RemoveChunkExtension(System.String)
extern "C"  String_t* ChunkStream_RemoveChunkExtension_m615575460_0 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadCRLF(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_ReadCRLF_m2102328829_0 (ChunkStream_t_730507177_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadTrailer(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_ReadTrailer_m_660449421_0 (ChunkStream_t_730507177_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ThrowProtocolViolation(System.String)
extern "C"  void ChunkStream_ThrowProtocolViolation_m_287751274_0 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
