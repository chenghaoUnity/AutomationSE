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

// System.Configuration.ElementInformation
struct ElementInformation_t381462581_0;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t_1454036085_0;
// System.Configuration.PropertyInformation
struct PropertyInformation_t_1042739950_0;
// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t717810000_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Configuration.ElementInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.PropertyInformation)
extern "C"  void ElementInformation__ctor_m761476204_0 (ElementInformation_t381462581_0 * __this, ConfigurationElement_t_1454036085_0 * ___owner, PropertyInformation_t_1042739950_0 * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyInformationCollection System.Configuration.ElementInformation::get_Properties()
extern "C"  PropertyInformationCollection_t717810000_0 * ElementInformation_get_Properties_m_1656419052_0 (ElementInformation_t381462581_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ElementInformation::Reset(System.Configuration.ElementInformation)
extern "C"  void ElementInformation_Reset_m1439910307_0 (ElementInformation_t381462581_0 * __this, ElementInformation_t381462581_0 * ___parentInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
