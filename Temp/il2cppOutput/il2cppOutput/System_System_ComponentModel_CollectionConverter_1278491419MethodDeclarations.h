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

// System.ComponentModel.CollectionConverter
struct CollectionConverter_t_1278491419_0;
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

// System.Void System.ComponentModel.CollectionConverter::.ctor()
extern "C"  void CollectionConverter__ctor_m_781249141_0 (CollectionConverter_t_1278491419_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CollectionConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Object_t * CollectionConverter_ConvertTo_m1165220779_0 (CollectionConverter_t_1278491419_0 * __this, Object_t * ___context, CultureInfo_t_1039475404_0 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CollectionConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t1738037247_0 * CollectionConverter_GetProperties_m_1039806355_0 (CollectionConverter_t_1278491419_0 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t_1037111431_0* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.CollectionConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool CollectionConverter_GetPropertiesSupported_m_971989016_0 (CollectionConverter_t_1278491419_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
