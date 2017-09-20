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

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_StringValueType2096142738.h"

// System.Void System.Xml.Schema.StringValueType::.ctor(System.String)
extern "C"  void StringValueType__ctor_m_1126349372_0 (StringValueType_t2096142738_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.StringValueType::get_Value()
extern "C"  String_t* StringValueType_get_Value_m_987652537_0 (StringValueType_t2096142738_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringValueType::Equals(System.Object)
extern "C"  bool StringValueType_Equals_m797269367_0 (StringValueType_t2096142738_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.StringValueType::GetHashCode()
extern "C"  int32_t StringValueType_GetHashCode_m353153039_0 (StringValueType_t2096142738_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringValueType::op_Equality(System.Xml.Schema.StringValueType,System.Xml.Schema.StringValueType)
extern "C"  bool StringValueType_op_Equality_m1814147548_0 (Object_t * __this /* static, unused */, StringValueType_t2096142738_0  ___v1, StringValueType_t2096142738_0  ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void StringValueType_t2096142738_0_marshal(const StringValueType_t2096142738_0& unmarshaled, StringValueType_t2096142738_0_marshaled& marshaled);
extern "C" void StringValueType_t2096142738_0_marshal_back(const StringValueType_t2096142738_0_marshaled& marshaled, StringValueType_t2096142738_0& unmarshaled);
extern "C" void StringValueType_t2096142738_0_marshal_cleanup(StringValueType_t2096142738_0_marshaled& marshaled);
