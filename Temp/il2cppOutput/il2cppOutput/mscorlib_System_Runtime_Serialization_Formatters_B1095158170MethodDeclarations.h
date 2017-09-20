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

// System.IO.BinaryWriter
struct BinaryWriter_t_764806399_0;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t_1206030253_0;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t_470051779_0;
// System.IO.BinaryReader
struct BinaryReader_t_920211631_0;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t_1637549863_0;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5166546_0;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t818199395_0;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// System.Type
struct Type_t;
// System.Collections.IDictionary
struct IDictionary_t_1514320629_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo840361687.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo398254083.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B1955390980.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.MessageFormatter::WriteMethodCall(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[],System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C"  void MessageFormatter_WriteMethodCall_m422932223_0 (Object_t * __this /* static, unused */, BinaryWriter_t_764806399_0 * ___writer, Object_t * ___obj, HeaderU5BU5D_t_1206030253_0* ___headers, Object_t * ___surrogateSelector, StreamingContext_t_1216992900_0  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MessageFormatter::WriteMethodResponse(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[],System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C"  void MessageFormatter_WriteMethodResponse_m_439467524_0 (Object_t * __this /* static, unused */, BinaryWriter_t_764806399_0 * ___writer, Object_t * ___obj, HeaderU5BU5D_t_1206030253_0* ___headers, Object_t * ___surrogateSelector, StreamingContext_t_1216992900_0  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  Object_t * MessageFormatter_ReadMethodCall_m_521892073_0 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t_920211631_0 * ___reader, bool ___hasHeaders, HeaderHandler_t_1637549863_0 * ___headerHandler, BinaryFormatter_t5166546_0 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  Object_t * MessageFormatter_ReadMethodResponse_m1841037205_0 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t_920211631_0 * ___reader, bool ___hasHeaders, HeaderHandler_t_1637549863_0 * ___headerHandler, Object_t * ___methodCallMessage, BinaryFormatter_t5166546_0 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::AllTypesArePrimitive(System.Object[])
extern "C"  bool MessageFormatter_AllTypesArePrimitive_m_367991909_0 (Object_t * __this /* static, unused */, ObjectU5BU5D_t1774424924_0* ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsMethodPrimitive(System.Type)
extern "C"  bool MessageFormatter_IsMethodPrimitive_m_831927193_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Serialization.Formatters.Binary.MessageFormatter::GetExtraProperties(System.Collections.IDictionary,System.String[])
extern "C"  ObjectU5BU5D_t1774424924_0* MessageFormatter_GetExtraProperties_m1259624667_0 (Object_t * __this /* static, unused */, Object_t * ___properties, StringU5BU5D_t_816028754_0* ___internalKeys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsInternalKey(System.String,System.String[])
extern "C"  bool MessageFormatter_IsInternalKey_m_2135458194_0 (Object_t * __this /* static, unused */, String_t* ___key, StringU5BU5D_t_816028754_0* ___internalKeys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
