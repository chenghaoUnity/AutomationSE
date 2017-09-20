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

// System.Reflection.Emit.DynamicMethodTokenGenerator
struct DynamicMethodTokenGenerator_t1435268711_0;
// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t714200109_0;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type[]
struct TypeU5BU5D_t_722972841_0;
// System.Reflection.MemberInfo
struct MemberInfo_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.Emit.DynamicMethodTokenGenerator::.ctor(System.Reflection.Emit.DynamicMethod)
extern "C"  void DynamicMethodTokenGenerator__ctor_m1691264806_0 (DynamicMethodTokenGenerator_t1435268711_0 * __this, DynamicMethod_t714200109_0 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethodTokenGenerator::GetToken(System.String)
extern "C"  int32_t DynamicMethodTokenGenerator_GetToken_m_1371512114_0 (DynamicMethodTokenGenerator_t1435268711_0 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethodTokenGenerator::GetToken(System.Reflection.MethodInfo,System.Type[])
extern "C"  int32_t DynamicMethodTokenGenerator_GetToken_m1285718002_0 (DynamicMethodTokenGenerator_t1435268711_0 * __this, MethodInfo_t * ___method, TypeU5BU5D_t_722972841_0* ___opt_param_types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethodTokenGenerator::GetToken(System.Reflection.MemberInfo)
extern "C"  int32_t DynamicMethodTokenGenerator_GetToken_m_184423928_0 (DynamicMethodTokenGenerator_t1435268711_0 * __this, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
