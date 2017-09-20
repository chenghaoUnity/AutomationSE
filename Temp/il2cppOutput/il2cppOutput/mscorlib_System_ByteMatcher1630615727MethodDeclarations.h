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

// System.ByteMatcher
struct ByteMatcher_t1630615727_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TermInfoStrings636966157.h"

// System.Void System.ByteMatcher::.ctor()
extern "C"  void ByteMatcher__ctor_m1555670535_0 (ByteMatcher_t1630615727_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ByteMatcher::AddMapping(System.TermInfoStrings,System.Byte[])
extern "C"  void ByteMatcher_AddMapping_m2067637380_0 (ByteMatcher_t1630615727_0 * __this, int32_t ___key, ByteU5BU5D_t_1238178395_0* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ByteMatcher::Sort()
extern "C"  void ByteMatcher_Sort_m_126439301_0 (ByteMatcher_t1630615727_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ByteMatcher::StartsWith(System.Int32)
extern "C"  bool ByteMatcher_StartsWith_m2105047975_0 (ByteMatcher_t1630615727_0 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TermInfoStrings System.ByteMatcher::Match(System.Char[],System.Int32,System.Int32,System.Int32&)
extern "C"  int32_t ByteMatcher_Match_m_1934177336_0 (ByteMatcher_t1630615727_0 * __this, CharU5BU5D_t_1225802637_0* ___buffer, int32_t ___offset, int32_t ___length, int32_t* ___used, const MethodInfo* method) IL2CPP_METHOD_ATTR;
