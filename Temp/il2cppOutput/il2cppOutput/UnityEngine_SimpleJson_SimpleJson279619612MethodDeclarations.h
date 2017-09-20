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
// SimpleJson.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t_1342422316_0;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t379315588_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;
// SimpleJson.JsonArray
struct JsonArray_t_1055272017_0;
// System.Text.StringBuilder
struct StringBuilder_t586045924_0;
// System.Collections.IEnumerable
struct IEnumerable_t1412919357_0;
// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t570123546_0;

#include "codegen/il2cpp-codegen.h"

// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern "C"  bool SimpleJson_TryDeserializeObject_m_885952695_0 (Object_t * __this /* static, unused */, String_t* ___json, Object_t ** ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern "C"  String_t* SimpleJson_SerializeObject_m471576100_0 (Object_t * __this /* static, unused */, Object_t * ___json, Object_t * ___jsonSerializerStrategy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C"  String_t* SimpleJson_SerializeObject_m290152864_0 (Object_t * __this /* static, unused */, Object_t * ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Object_t* SimpleJson_ParseObject_m_954891074_0 (Object_t * __this /* static, unused */, CharU5BU5D_t_1225802637_0* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern "C"  JsonArray_t_1055272017_0 * SimpleJson_ParseArray_m740903547_0 (Object_t * __this /* static, unused */, CharU5BU5D_t_1225802637_0* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Object_t * SimpleJson_ParseValue_m_1222286106_0 (Object_t * __this /* static, unused */, CharU5BU5D_t_1225802637_0* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern "C"  String_t* SimpleJson_ParseString_m_25240570_0 (Object_t * __this /* static, unused */, CharU5BU5D_t_1225802637_0* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern "C"  String_t* SimpleJson_ConvertFromUtf32_m1610721511_0 (Object_t * __this /* static, unused */, int32_t ___utf32, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Object_t * SimpleJson_ParseNumber_m1686696700_0 (Object_t * __this /* static, unused */, CharU5BU5D_t_1225802637_0* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C"  int32_t SimpleJson_GetLastIndexOfNumber_m_555898926_0 (Object_t * __this /* static, unused */, CharU5BU5D_t_1225802637_0* ___json, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern "C"  void SimpleJson_EatWhitespace_m499340649_0 (Object_t * __this /* static, unused */, CharU5BU5D_t_1225802637_0* ___json, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C"  int32_t SimpleJson_LookAhead_m1099107504_0 (Object_t * __this /* static, unused */, CharU5BU5D_t_1225802637_0* ___json, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C"  int32_t SimpleJson_NextToken_m647118648_0 (Object_t * __this /* static, unused */, CharU5BU5D_t_1225802637_0* ___json, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern "C"  bool SimpleJson_SerializeValue_m656357451_0 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___value, StringBuilder_t586045924_0 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C"  bool SimpleJson_SerializeObject_m953411705_0 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___keys, Object_t * ___values, StringBuilder_t586045924_0 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C"  bool SimpleJson_SerializeArray_m138026960_0 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___anArray, StringBuilder_t586045924_0 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C"  bool SimpleJson_SerializeString_m1869609533_0 (Object_t * __this /* static, unused */, String_t* ___aString, StringBuilder_t586045924_0 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern "C"  bool SimpleJson_SerializeNumber_m90746391_0 (Object_t * __this /* static, unused */, Object_t * ___number, StringBuilder_t586045924_0 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern "C"  bool SimpleJson_IsNumeric_m_1429242631_0 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern "C"  Object_t * SimpleJson_get_CurrentJsonSerializerStrategy_m_1282421412_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern "C"  PocoJsonSerializerStrategy_t570123546_0 * SimpleJson_get_PocoJsonSerializerStrategy_m_1350622390_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
