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

// System.Configuration.ConfigurationErrorsException
struct ConfigurationErrorsException_t_248793421_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Exception
struct Exception_t2143823668_0;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Configuration.ConfigurationErrorsException::.ctor()
extern "C"  void ConfigurationErrorsException__ctor_m1016638077_0 (ConfigurationErrorsException_t_248793421_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String)
extern "C"  void ConfigurationErrorsException__ctor_m1643685797_0 (ConfigurationErrorsException_t_248793421_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationErrorsException__ctor_m_21391810_0 (ConfigurationErrorsException_t_248793421_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception)
extern "C"  void ConfigurationErrorsException__ctor_m_1136346063_0 (ConfigurationErrorsException_t_248793421_0 * __this, String_t* ___message, Exception_t2143823668_0 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlNode)
extern "C"  void ConfigurationErrorsException__ctor_m2049587550_0 (ConfigurationErrorsException_t_248793421_0 * __this, String_t* ___message, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlReader)
extern "C"  void ConfigurationErrorsException__ctor_m1524630781_0 (ConfigurationErrorsException_t_248793421_0 * __this, String_t* ___message, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception,System.String,System.Int32)
extern "C"  void ConfigurationErrorsException__ctor_m359555914_0 (ConfigurationErrorsException_t_248793421_0 * __this, String_t* ___message, Exception_t2143823668_0 * ___inner, String_t* ___filename, int32_t ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_BareMessage()
extern "C"  String_t* ConfigurationErrorsException_get_BareMessage_m1481301130_0 (ConfigurationErrorsException_t_248793421_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_Message()
extern "C"  String_t* ConfigurationErrorsException_get_Message_m1259234588_0 (ConfigurationErrorsException_t_248793421_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlReader)
extern "C"  String_t* ConfigurationErrorsException_GetFilename_m_981926089_0 (Object_t * __this /* static, unused */, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlReader)
extern "C"  int32_t ConfigurationErrorsException_GetLineNumber_m411316138_0 (Object_t * __this /* static, unused */, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlNode)
extern "C"  String_t* ConfigurationErrorsException_GetFilename_m357595672_0 (Object_t * __this /* static, unused */, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlNode)
extern "C"  int32_t ConfigurationErrorsException_GetLineNumber_m_633132213_0 (Object_t * __this /* static, unused */, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationErrorsException_GetObjectData_m_1214791781_0 (ConfigurationErrorsException_t_248793421_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
