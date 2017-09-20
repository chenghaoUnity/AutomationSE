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

// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ConsoleKeyInfo_1495289199.h"
#include "mscorlib_System_ConsoleKey_1285672125.h"

// System.Void System.ConsoleKeyInfo::.ctor(System.Char,System.ConsoleKey,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void ConsoleKeyInfo__ctor_m_878007494_0 (ConsoleKeyInfo_t_1495289199_0 * __this, uint16_t ___keyChar, int32_t ___key, bool ___shift, bool ___alt, bool ___control, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleKeyInfo::.cctor()
extern "C"  void ConsoleKeyInfo__cctor_m_1615666002_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleKeyInfo::SetModifiers(System.Boolean,System.Boolean,System.Boolean)
extern "C"  void ConsoleKeyInfo_SetModifiers_m614469974_0 (ConsoleKeyInfo_t_1495289199_0 * __this, bool ___shift, bool ___alt, bool ___control, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKey System.ConsoleKeyInfo::get_Key()
extern "C"  int32_t ConsoleKeyInfo_get_Key_m1981446207_0 (ConsoleKeyInfo_t_1495289199_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.ConsoleKeyInfo::get_KeyChar()
extern "C"  uint16_t ConsoleKeyInfo_get_KeyChar_m_1527288345_0 (ConsoleKeyInfo_t_1495289199_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleKeyInfo::Equals(System.Object)
extern "C"  bool ConsoleKeyInfo_Equals_m778301074_0 (ConsoleKeyInfo_t_1495289199_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleKeyInfo::Equals(System.ConsoleKeyInfo)
extern "C"  bool ConsoleKeyInfo_Equals_m_363746725_0 (ConsoleKeyInfo_t_1495289199_0 * __this, ConsoleKeyInfo_t_1495289199_0  ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ConsoleKeyInfo::GetHashCode()
extern "C"  int32_t ConsoleKeyInfo_GetHashCode_m796590698_0 (ConsoleKeyInfo_t_1495289199_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void ConsoleKeyInfo_t_1495289199_0_marshal(const ConsoleKeyInfo_t_1495289199_0& unmarshaled, ConsoleKeyInfo_t_1495289199_0_marshaled& marshaled);
extern "C" void ConsoleKeyInfo_t_1495289199_0_marshal_back(const ConsoleKeyInfo_t_1495289199_0_marshaled& marshaled, ConsoleKeyInfo_t_1495289199_0& unmarshaled);
extern "C" void ConsoleKeyInfo_t_1495289199_0_marshal_cleanup(ConsoleKeyInfo_t_1495289199_0_marshaled& marshaled);
