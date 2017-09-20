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

// System.Text.RegularExpressions.RxInterpreterFactory
struct RxInterpreterFactory_t1722557481_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t_1121238188_0;
// System.Text.RegularExpressions.IMachine
struct IMachine_t1950118449_0;
// System.Collections.IDictionary
struct IDictionary_t_1514320629_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.RxInterpreterFactory::.ctor(System.Byte[],System.Text.RegularExpressions.EvalDelegate)
extern "C"  void RxInterpreterFactory__ctor_m_110718144_0 (RxInterpreterFactory_t1722557481_0 * __this, ByteU5BU5D_t_1238178395_0* ___program, EvalDelegate_t_1121238188_0 * ___eval_del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.RxInterpreterFactory::NewInstance()
extern "C"  Object_t * RxInterpreterFactory_NewInstance_m774969858_0 (RxInterpreterFactory_t1722557481_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreterFactory::get_GroupCount()
extern "C"  int32_t RxInterpreterFactory_get_GroupCount_m_2083802938_0 (RxInterpreterFactory_t1722557481_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreterFactory::get_Gap()
extern "C"  int32_t RxInterpreterFactory_get_Gap_m_835874302_0 (RxInterpreterFactory_t1722557481_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreterFactory::set_Gap(System.Int32)
extern "C"  void RxInterpreterFactory_set_Gap_m_554337745_0 (RxInterpreterFactory_t1722557481_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Text.RegularExpressions.RxInterpreterFactory::get_Mapping()
extern "C"  Object_t * RxInterpreterFactory_get_Mapping_m1004615138_0 (RxInterpreterFactory_t1722557481_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreterFactory::set_Mapping(System.Collections.IDictionary)
extern "C"  void RxInterpreterFactory_set_Mapping_m_896853425_0 (RxInterpreterFactory_t1722557481_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.RxInterpreterFactory::get_NamesMapping()
extern "C"  StringU5BU5D_t_816028754_0* RxInterpreterFactory_get_NamesMapping_m419886827_0 (RxInterpreterFactory_t1722557481_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreterFactory::set_NamesMapping(System.String[])
extern "C"  void RxInterpreterFactory_set_NamesMapping_m_439128736_0 (RxInterpreterFactory_t1722557481_0 * __this, StringU5BU5D_t_816028754_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
