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

// System.Configuration.InternalConfigurationFactory
struct InternalConfigurationFactory_t1871069942_0;
// System.Configuration.Configuration
struct Configuration_t_539106767_0;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Configuration.InternalConfigurationFactory::.ctor()
extern "C"  void InternalConfigurationFactory__ctor_m1553217946_0 (InternalConfigurationFactory_t1871069942_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.InternalConfigurationFactory::Create(System.Type,System.Object[])
extern "C"  Configuration_t_539106767_0 * InternalConfigurationFactory_Create_m1322271343_0 (InternalConfigurationFactory_t1871069942_0 * __this, Type_t * ___typeConfigHost, ObjectU5BU5D_t1774424924_0* ___hostInitConfigurationParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
