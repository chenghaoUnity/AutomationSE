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

// System.ComponentModel.SByteConverter
struct SByteConverter_t1274879394_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t746228406_0;

#include "codegen/il2cpp-codegen.h"

// System.Boolean System.ComponentModel.SByteConverter::get_SupportHex()
extern "C"  bool SByteConverter_get_SupportHex_m_1331007621_0 (SByteConverter_t1274879394_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.SByteConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* SByteConverter_ConvertToString_m349016216_0 (SByteConverter_t1274879394_0 * __this, Object_t * ___value, NumberFormatInfo_t746228406_0 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.SByteConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Object_t * SByteConverter_ConvertFromString_m119370953_0 (SByteConverter_t1274879394_0 * __this, String_t* ___value, NumberFormatInfo_t746228406_0 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.SByteConverter::ConvertFromString(System.String,System.Int32)
extern "C"  Object_t * SByteConverter_ConvertFromString_m_28649152_0 (SByteConverter_t1274879394_0 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
