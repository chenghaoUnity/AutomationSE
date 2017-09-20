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

// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t_1895664804_0;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t_636914146_0;
// System.String
struct String_t;
// System.Configuration.Provider.ProviderBase
struct ProviderBase_t_367162470_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Configuration.ProtectedConfigurationProviderCollection::.ctor()
extern "C"  void ProtectedConfigurationProviderCollection__ctor_m_1997303692_0 (ProtectedConfigurationProviderCollection_t_1895664804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationProviderCollection::get_Item(System.String)
extern "C"  ProtectedConfigurationProvider_t_636914146_0 * ProtectedConfigurationProviderCollection_get_Item_m40970297_0 (ProtectedConfigurationProviderCollection_t_1895664804_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProtectedConfigurationProviderCollection::Add(System.Configuration.Provider.ProviderBase)
extern "C"  void ProtectedConfigurationProviderCollection_Add_m_282433365_0 (ProtectedConfigurationProviderCollection_t_1895664804_0 * __this, ProviderBase_t_367162470_0 * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
