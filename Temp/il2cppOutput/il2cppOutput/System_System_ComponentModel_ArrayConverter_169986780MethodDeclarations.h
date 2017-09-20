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

// System.ComponentModel.ArrayConverter
struct ArrayConverter_t_169986780_0;
// System.Object
struct Object_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1913844506_0;
// System.Globalization.CultureInfo
struct CultureInfo_t_1039475404_0;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t1738037247_0;
// System.Attribute[]
struct AttributeU5BU5D_t_1037111431_0;

#include "codegen/il2cpp-codegen.h"

// System.Object System.ComponentModel.ArrayConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Object_t * ArrayConverter_ConvertTo_m_1042959826_0 (ArrayConverter_t_169986780_0 * __this, Object_t * ___context, CultureInfo_t_1039475404_0 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ArrayConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t1738037247_0 * ArrayConverter_GetProperties_m1453199386_0 (ArrayConverter_t_169986780_0 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t_1037111431_0* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ArrayConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool ArrayConverter_GetPropertiesSupported_m1407323085_0 (ArrayConverter_t_169986780_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
