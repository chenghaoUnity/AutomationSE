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

// System.TermInfoReader
struct TermInfoReader_t_1823561512_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TermInfoNumbers518209749.h"
#include "mscorlib_System_TermInfoStrings636966157.h"

// System.Void System.TermInfoReader::.ctor(System.String,System.String)
extern "C"  void TermInfoReader__ctor_m1302979654_0 (TermInfoReader_t_1823561512_0 * __this, String_t* ___term, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoReader::.ctor(System.String,System.Byte[])
extern "C"  void TermInfoReader__ctor_m_754825971_0 (TermInfoReader_t_1823561512_0 * __this, String_t* ___term, ByteU5BU5D_t_1238178395_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoReader::ReadHeader(System.Byte[],System.Int32&)
extern "C"  void TermInfoReader_ReadHeader_m_281165841_0 (TermInfoReader_t_1823561512_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t* ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoReader::ReadNames(System.Byte[],System.Int32&)
extern "C"  void TermInfoReader_ReadNames_m_1646908682_0 (TermInfoReader_t_1823561512_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t* ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TermInfoReader::Get(System.TermInfoNumbers)
extern "C"  int32_t TermInfoReader_Get_m_1323471945_0 (TermInfoReader_t_1823561512_0 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoReader::Get(System.TermInfoStrings)
extern "C"  String_t* TermInfoReader_Get_m_1794990458_0 (TermInfoReader_t_1823561512_0 * __this, int32_t ___tstr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.TermInfoReader::GetStringBytes(System.TermInfoStrings)
extern "C"  ByteU5BU5D_t_1238178395_0* TermInfoReader_GetStringBytes_m447772157_0 (TermInfoReader_t_1823561512_0 * __this, int32_t ___tstr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.TermInfoReader::GetInt16(System.Byte[],System.Int32)
extern "C"  int16_t TermInfoReader_GetInt16_m1978272194_0 (TermInfoReader_t_1823561512_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoReader::GetString(System.Byte[],System.Int32)
extern "C"  String_t* TermInfoReader_GetString_m_1092547794_0 (TermInfoReader_t_1823561512_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.TermInfoReader::GetStringBytes(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t_1238178395_0* TermInfoReader_GetStringBytes_m_479811340_0 (TermInfoReader_t_1823561512_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
