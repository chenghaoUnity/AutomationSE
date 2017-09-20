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

// System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata
struct SerializableTypeMetadata_t_1682598593_0;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t385194272_0;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t_1400533719_0;
// System.IO.BinaryWriter
struct BinaryWriter_t_764806399_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.SerializationInfo)
extern "C"  void SerializableTypeMetadata__ctor_m_280284461_0 (SerializableTypeMetadata_t_1682598593_0 * __this, Type_t * ___itype, SerializationInfo_t526833679_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::IsCompatible(System.Runtime.Serialization.Formatters.Binary.TypeMetadata)
extern "C"  bool SerializableTypeMetadata_IsCompatible_m828851263_0 (SerializableTypeMetadata_t_1682598593_0 * __this, TypeMetadata_t385194272_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C"  void SerializableTypeMetadata_WriteAssemblies_m355185654_0 (SerializableTypeMetadata_t_1682598593_0 * __this, ObjectWriter_t_1400533719_0 * ___ow, BinaryWriter_t_764806399_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C"  void SerializableTypeMetadata_WriteTypeData_m_1617505145_0 (SerializableTypeMetadata_t_1682598593_0 * __this, ObjectWriter_t_1400533719_0 * ___ow, BinaryWriter_t_764806399_0 * ___writer, bool ___writeTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C"  void SerializableTypeMetadata_WriteObjectData_m1813279113_0 (SerializableTypeMetadata_t_1682598593_0 * __this, ObjectWriter_t_1400533719_0 * ___ow, BinaryWriter_t_764806399_0 * ___writer, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::get_RequiresTypes()
extern "C"  bool SerializableTypeMetadata_get_RequiresTypes_m_1941675373_0 (SerializableTypeMetadata_t_1682598593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
