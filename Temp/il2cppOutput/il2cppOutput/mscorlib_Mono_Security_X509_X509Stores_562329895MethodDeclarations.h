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

// Mono.Security.X509.X509Stores
struct X509Stores_t_562329895_0;
// System.String
struct String_t;
// Mono.Security.X509.X509Store
struct X509Store_t_295234342_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X509Stores::.ctor(System.String)
extern "C"  void X509Stores__ctor_m1320364491_0 (X509Stores_t_562329895_0 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_TrustedRoot()
extern "C"  X509Store_t_295234342_0 * X509Stores_get_TrustedRoot_m_1447253030_0 (X509Stores_t_562329895_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
