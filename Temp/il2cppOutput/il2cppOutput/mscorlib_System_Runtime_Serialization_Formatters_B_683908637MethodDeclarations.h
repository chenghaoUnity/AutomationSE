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

// System.Type
struct Type_t;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t_470051779_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::.cctor()
extern "C"  void BinaryCommon__cctor_m1035902784_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::IsPrimitive(System.Type)
extern "C"  bool BinaryCommon_IsPrimitive_m1612386671_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Runtime.Serialization.Formatters.Binary.BinaryCommon::GetTypeCode(System.Type)
extern "C"  uint8_t BinaryCommon_GetTypeCode_m_14129979_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.BinaryCommon::GetTypeFromCode(System.Int32)
extern "C"  Type_t * BinaryCommon_GetTypeFromCode_m_250948003_0 (Object_t * __this /* static, unused */, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::CheckSerializable(System.Type,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C"  void BinaryCommon_CheckSerializable_m_1356954658_0 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___selector, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::SwapBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void BinaryCommon_SwapBytes_m_1822700602_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___byteArray, int32_t ___size, int32_t ___dataSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
