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

// System.Reflection.Emit.ByRefType
struct ByRefType_t1564067523_0;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.Emit.ByRefType::.ctor(System.Type)
extern "C"  void ByRefType__ctor_m_1432031130_0 (ByRefType_t1564067523_0 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ByRefType::IsByRefImpl()
extern "C"  bool ByRefType_IsByRefImpl_m1928017281_0 (ByRefType_t1564067523_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ByRefType::get_BaseType()
extern "C"  Type_t * ByRefType_get_BaseType_m1370407999_0 (ByRefType_t1564067523_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ByRefType::FormatName(System.String)
extern "C"  String_t* ByRefType_FormatName_m1652232140_0 (ByRefType_t1564067523_0 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ByRefType::MakeByRefType()
extern "C"  Type_t * ByRefType_MakeByRefType_m1268406335_0 (ByRefType_t1564067523_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
