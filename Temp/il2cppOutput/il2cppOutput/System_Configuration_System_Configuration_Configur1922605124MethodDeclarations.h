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

// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t1922605124_0;
// System.Configuration.ConfigurationLocation
struct ConfigurationLocation_t_216062714_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Configuration.ConfigurationLocationCollection::.ctor()
extern "C"  void ConfigurationLocationCollection__ctor_m_861694382_0 (ConfigurationLocationCollection_t1922605124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLocationCollection::Add(System.Configuration.ConfigurationLocation)
extern "C"  void ConfigurationLocationCollection_Add_m_305640291_0 (ConfigurationLocationCollection_t1922605124_0 * __this, ConfigurationLocation_t_216062714_0 * ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLocation System.Configuration.ConfigurationLocationCollection::Find(System.String)
extern "C"  ConfigurationLocation_t_216062714_0 * ConfigurationLocationCollection_Find_m_169078564_0 (ConfigurationLocationCollection_t1922605124_0 * __this, String_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
