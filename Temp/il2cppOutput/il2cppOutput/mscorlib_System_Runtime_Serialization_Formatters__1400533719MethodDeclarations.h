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

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t_1400533719_0;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t_470051779_0;
// System.IO.BinaryWriter
struct BinaryWriter_t_764806399_0;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t_1206030253_0;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t385194272_0;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t_957553394_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo840361687.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo398254083.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Bin63500041.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C"  void ObjectWriter__ctor_m381946506_0 (ObjectWriter_t_1400533719_0 * __this, Object_t * ___surrogateSelector, StreamingContext_t_1216992900_0  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::.cctor()
extern "C"  void ObjectWriter__cctor_m_329848058_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectGraph(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[])
extern "C"  void ObjectWriter_WriteObjectGraph_m1495072729_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, Object_t * ___obj, HeaderU5BU5D_t_1206030253_0* ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::QueueObject(System.Object)
extern "C"  void ObjectWriter_QueueObject_m_1821393825_0 (ObjectWriter_t_1400533719_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteQueuedObjects(System.IO.BinaryWriter)
extern "C"  void ObjectWriter_WriteQueuedObjects_m_1783736094_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectInstance(System.IO.BinaryWriter,System.Object,System.Boolean)
extern "C"  void ObjectWriter_WriteObjectInstance_m971580148_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, Object_t * ___obj, bool ___isValueObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteSerializationEnd(System.IO.BinaryWriter)
extern "C"  void ObjectWriter_WriteSerializationEnd_m1314927090_0 (Object_t * __this /* static, unused */, BinaryWriter_t_764806399_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObject(System.IO.BinaryWriter,System.Int64,System.Object)
extern "C"  void ObjectWriter_WriteObject_m_727656640_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, int64_t ___id, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetObjectData(System.Object,System.Runtime.Serialization.Formatters.Binary.TypeMetadata&,System.Object&)
extern "C"  void ObjectWriter_GetObjectData_m_2138535478_0 (ObjectWriter_t_1400533719_0 * __this, Object_t * ___obj, TypeMetadata_t385194272_0 ** ___metadata, Object_t ** ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CreateMemberTypeMetadata(System.Type)
extern "C"  TypeMetadata_t385194272_0 * ObjectWriter_CreateMemberTypeMetadata_m_1404905652_0 (ObjectWriter_t_1400533719_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WriteArray_m1513238702_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteGenericArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WriteGenericArray_m621377085_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WriteObjectArray_m120109231_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteStringArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WriteStringArray_m_1539278947_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WritePrimitiveTypeArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WritePrimitiveTypeArray_m360539603_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::BlockWrite(System.IO.BinaryWriter,System.Array,System.Int32)
extern "C"  void ObjectWriter_BlockWrite_m817303837_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, Array_t * ___array, int32_t ___dataSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteSingleDimensionArrayElements(System.IO.BinaryWriter,System.Array,System.Type)
extern "C"  void ObjectWriter_WriteSingleDimensionArrayElements_m_1537368314_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, Array_t * ___array, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteNullFiller(System.IO.BinaryWriter,System.Int32)
extern "C"  void ObjectWriter_WriteNullFiller_m518213209_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, int32_t ___numNulls, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectReference(System.IO.BinaryWriter,System.Int64)
extern "C"  void ObjectWriter_WriteObjectReference_m_2043008469_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, int64_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteValue(System.IO.BinaryWriter,System.Type,System.Object)
extern "C"  void ObjectWriter_WriteValue_m_1547864717_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, Type_t * ___valueType, Object_t * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteString(System.IO.BinaryWriter,System.Int64,System.String)
extern "C"  void ObjectWriter_WriteString_m_467920228_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, int64_t ___id, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteAssembly(System.IO.BinaryWriter,System.Reflection.Assembly)
extern "C"  int32_t ObjectWriter_WriteAssembly_m_1505543277_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, Assembly_t_957553394_0 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteAssemblyName(System.IO.BinaryWriter,System.String)
extern "C"  int32_t ObjectWriter_WriteAssemblyName_m1777729680_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, String_t* ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetAssemblyId(System.Reflection.Assembly)
extern "C"  int32_t ObjectWriter_GetAssemblyId_m1900776174_0 (ObjectWriter_t_1400533719_0 * __this, Assembly_t_957553394_0 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetAssemblyNameId(System.String)
extern "C"  int32_t ObjectWriter_GetAssemblyNameId_m218712095_0 (ObjectWriter_t_1400533719_0 * __this, String_t* ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::RegisterAssembly(System.String,System.Boolean&)
extern "C"  int32_t ObjectWriter_RegisterAssembly_m_657765753_0 (ObjectWriter_t_1400533719_0 * __this, String_t* ___assembly, bool* ___firstTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WritePrimitiveValue(System.IO.BinaryWriter,System.Object)
extern "C"  void ObjectWriter_WritePrimitiveValue_m_2027020097_0 (Object_t * __this /* static, unused */, BinaryWriter_t_764806399_0 * ___writer, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteTypeCode(System.IO.BinaryWriter,System.Type)
extern "C"  void ObjectWriter_WriteTypeCode_m_2005905247_0 (Object_t * __this /* static, unused */, BinaryWriter_t_764806399_0 * ___writer, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.TypeTag System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetTypeTag(System.Type)
extern "C"  uint8_t ObjectWriter_GetTypeTag_m835100856_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteTypeSpec(System.IO.BinaryWriter,System.Type)
extern "C"  void ObjectWriter_WriteTypeSpec_m_44872849_0 (ObjectWriter_t_1400533719_0 * __this, BinaryWriter_t_764806399_0 * ___writer, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
