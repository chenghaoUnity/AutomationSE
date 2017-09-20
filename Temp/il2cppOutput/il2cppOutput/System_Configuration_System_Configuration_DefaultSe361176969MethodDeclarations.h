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

// System.Configuration.DefaultSection
struct DefaultSection_t361176969_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t_1454036085_0;
// System.String
struct String_t;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t7845476_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configura105049617.h"

// System.Void System.Configuration.DefaultSection::.ctor()
extern "C"  void DefaultSection__ctor_m_939004633_0 (DefaultSection_t361176969_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::.cctor()
extern "C"  void DefaultSection__cctor_m473531238_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::DeserializeSection(System.Xml.XmlReader)
extern "C"  void DefaultSection_DeserializeSection_m2013795743_0 (DefaultSection_t361176969_0 * __this, XmlReader_t1629164245_0 * ___xmlReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.DefaultSection::IsModified()
extern "C"  bool DefaultSection_IsModified_m_1607691670_0 (DefaultSection_t361176969_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::Reset(System.Configuration.ConfigurationElement)
extern "C"  void DefaultSection_Reset_m638952737_0 (DefaultSection_t361176969_0 * __this, ConfigurationElement_t_1454036085_0 * ___parentSection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::ResetModified()
extern "C"  void DefaultSection_ResetModified_m_354343555_0 (DefaultSection_t361176969_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.DefaultSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C"  String_t* DefaultSection_SerializeSection_m_1705576075_0 (DefaultSection_t361176969_0 * __this, ConfigurationElement_t_1454036085_0 * ___parentSection, String_t* ___name, int32_t ___saveMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.DefaultSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t7845476_0 * DefaultSection_get_Properties_m1817206396_0 (DefaultSection_t361176969_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
