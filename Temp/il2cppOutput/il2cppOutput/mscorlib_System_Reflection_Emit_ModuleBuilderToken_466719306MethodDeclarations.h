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

// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t_466719306_0;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t_1005964868_0;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type[]
struct TypeU5BU5D_t_722972841_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.Emit.ModuleBuilderTokenGenerator::.ctor(System.Reflection.Emit.ModuleBuilder)
extern "C"  void ModuleBuilderTokenGenerator__ctor_m_756410232_0 (ModuleBuilderTokenGenerator_t_466719306_0 * __this, ModuleBuilder_t_1005964868_0 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.String)
extern "C"  int32_t ModuleBuilderTokenGenerator_GetToken_m1745023583_0 (ModuleBuilderTokenGenerator_t_466719306_0 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.Reflection.MemberInfo)
extern "C"  int32_t ModuleBuilderTokenGenerator_GetToken_m2106467927_0 (ModuleBuilderTokenGenerator_t_466719306_0 * __this, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.Reflection.MethodInfo,System.Type[])
extern "C"  int32_t ModuleBuilderTokenGenerator_GetToken_m399214081_0 (ModuleBuilderTokenGenerator_t_466719306_0 * __this, MethodInfo_t * ___method, TypeU5BU5D_t_722972841_0* ___opt_param_types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
