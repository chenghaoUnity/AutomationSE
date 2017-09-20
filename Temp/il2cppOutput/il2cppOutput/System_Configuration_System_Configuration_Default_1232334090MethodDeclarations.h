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

// System.Configuration.DefaultValidator
struct DefaultValidator_t_1232334090_0;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Configuration.DefaultValidator::.ctor()
extern "C"  void DefaultValidator__ctor_m_997509862_0 (DefaultValidator_t_1232334090_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.DefaultValidator::CanValidate(System.Type)
extern "C"  bool DefaultValidator_CanValidate_m1533904277_0 (DefaultValidator_t_1232334090_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultValidator::Validate(System.Object)
extern "C"  void DefaultValidator_Validate_m_1563769452_0 (DefaultValidator_t_1232334090_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
