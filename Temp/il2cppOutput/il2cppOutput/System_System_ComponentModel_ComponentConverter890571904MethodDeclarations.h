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

// System.ComponentModel.ComponentConverter
struct ComponentConverter_t890571904_0;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t1738037247_0;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1913844506_0;
// System.Object
struct Object_t;
// System.Attribute[]
struct AttributeU5BU5D_t_1037111431_0;

#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t1738037247_0 * ComponentConverter_GetProperties_m_1961794826_0 (ComponentConverter_t890571904_0 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t_1037111431_0* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ComponentConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool ComponentConverter_GetPropertiesSupported_m_406707031_0 (ComponentConverter_t890571904_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
