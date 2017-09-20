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

// System.ComponentModel.BooleanConverter
struct BooleanConverter_t1833357557_0;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1913844506_0;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t_1039475404_0;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t_109748317_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.BooleanConverter::.ctor()
extern "C"  void BooleanConverter__ctor_m_1432287743_0 (BooleanConverter_t1833357557_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BooleanConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool BooleanConverter_CanConvertFrom_m_2126064935_0 (BooleanConverter_t1833357557_0 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.BooleanConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Object_t * BooleanConverter_ConvertFrom_m2012312061_0 (BooleanConverter_t1833357557_0 * __this, Object_t * ___context, CultureInfo_t_1039475404_0 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.BooleanConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C"  StandardValuesCollection_t_109748317_0 * BooleanConverter_GetStandardValues_m_1127165474_0 (BooleanConverter_t1833357557_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BooleanConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool BooleanConverter_GetStandardValuesExclusive_m200839298_0 (BooleanConverter_t1833357557_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BooleanConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool BooleanConverter_GetStandardValuesSupported_m195988114_0 (BooleanConverter_t1833357557_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
