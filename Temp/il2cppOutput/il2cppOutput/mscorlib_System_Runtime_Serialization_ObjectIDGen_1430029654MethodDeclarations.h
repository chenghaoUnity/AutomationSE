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

// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t_1430029654_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Serialization.ObjectIDGenerator::.ctor()
extern "C"  void ObjectIDGenerator__ctor_m_529660948_0 (ObjectIDGenerator_t_1430029654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectIDGenerator::.cctor()
extern "C"  void ObjectIDGenerator__cctor_m278283585_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::GetId(System.Object,System.Boolean&)
extern "C"  int64_t ObjectIDGenerator_GetId_m_757255515_0 (ObjectIDGenerator_t_1430029654_0 * __this, Object_t * ___obj, bool* ___firstTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::get_NextId()
extern "C"  int64_t ObjectIDGenerator_get_NextId_m_507680916_0 (ObjectIDGenerator_t_1430029654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
