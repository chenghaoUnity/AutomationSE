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

// System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata
struct MemberTypeMetadata_t_87010406_0;
// System.Type
struct Type_t;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t_1400533719_0;
// System.IO.BinaryWriter
struct BinaryWriter_t_764806399_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C"  void MemberTypeMetadata__ctor_m_1739095025_0 (MemberTypeMetadata_t_87010406_0 * __this, Type_t * ___type, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C"  void MemberTypeMetadata_WriteAssemblies_m1974093883_0 (MemberTypeMetadata_t_87010406_0 * __this, ObjectWriter_t_1400533719_0 * ___ow, BinaryWriter_t_764806399_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C"  void MemberTypeMetadata_WriteTypeData_m_1792010142_0 (MemberTypeMetadata_t_87010406_0 * __this, ObjectWriter_t_1400533719_0 * ___ow, BinaryWriter_t_764806399_0 * ___writer, bool ___writeTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C"  void MemberTypeMetadata_WriteObjectData_m698591502_0 (MemberTypeMetadata_t_87010406_0 * __this, ObjectWriter_t_1400533719_0 * ___ow, BinaryWriter_t_764806399_0 * ___writer, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
