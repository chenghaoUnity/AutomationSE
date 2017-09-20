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

// System.Configuration.ConfigurationException
struct ConfigurationException_t275838238_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Exception
struct Exception_t2143823668_0;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Configuration.ConfigurationException::.ctor()
extern "C"  void ConfigurationException__ctor_m1138504242_0 (ConfigurationException_t275838238_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String)
extern "C"  void ConfigurationException__ctor_m649596432_0 (ConfigurationException_t275838238_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationException__ctor_m2070742131_0 (ConfigurationException_t275838238_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Exception)
extern "C"  void ConfigurationException__ctor_m1987549478_0 (ConfigurationException_t275838238_0 * __this, String_t* ___message, Exception_t2143823668_0 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Xml.XmlNode)
extern "C"  void ConfigurationException__ctor_m_1620280005_0 (ConfigurationException_t275838238_0 * __this, String_t* ___message, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.Exception,System.Xml.XmlNode)
extern "C"  void ConfigurationException__ctor_m2092643093_0 (ConfigurationException_t275838238_0 * __this, String_t* ___message, Exception_t2143823668_0 * ___inner, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::.ctor(System.String,System.String,System.Int32)
extern "C"  void ConfigurationException__ctor_m_1534730741_0 (ConfigurationException_t275838238_0 * __this, String_t* ___message, String_t* ___filename, int32_t ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationException::get_BareMessage()
extern "C"  String_t* ConfigurationException_get_BareMessage_m_1920488385_0 (ConfigurationException_t275838238_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationException::get_Message()
extern "C"  String_t* ConfigurationException_get_Message_m_1966596231_0 (ConfigurationException_t275838238_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationException::GetXmlNodeFilename(System.Xml.XmlNode)
extern "C"  String_t* ConfigurationException_GetXmlNodeFilename_m_1245965074_0 (Object_t * __this /* static, unused */, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationException::GetXmlNodeLineNumber(System.Xml.XmlNode)
extern "C"  int32_t ConfigurationException_GetXmlNodeLineNumber_m_1069134249_0 (Object_t * __this /* static, unused */, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationException_GetObjectData_m_349689648_0 (ConfigurationException_t275838238_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
