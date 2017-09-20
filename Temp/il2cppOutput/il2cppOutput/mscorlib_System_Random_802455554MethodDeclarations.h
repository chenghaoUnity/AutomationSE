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

// System.Random
struct Random_t_802455554_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Random::.ctor()
extern "C"  void Random__ctor_m_1804444398_0 (Random_t_802455554_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::.ctor(System.Int32)
extern "C"  void Random__ctor_m_292354205_0 (Random_t_802455554_0 * __this, int32_t ___Seed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Random::Sample()
extern "C"  double Random_Sample_m_752889511_0 (Random_t_802455554_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Random::Next(System.Int32,System.Int32)
extern "C"  int32_t Random_Next_m1579033021_0 (Random_t_802455554_0 * __this, int32_t ___minValue, int32_t ___maxValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::NextBytes(System.Byte[])
extern "C"  void Random_NextBytes_m_767619359_0 (Random_t_802455554_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
