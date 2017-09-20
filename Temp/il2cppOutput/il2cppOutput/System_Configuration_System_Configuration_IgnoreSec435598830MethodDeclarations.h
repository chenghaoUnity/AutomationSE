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

// System.Configuration.IgnoreSection
struct IgnoreSection_t435598830_0;
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

// System.Void System.Configuration.IgnoreSection::.ctor()
extern "C"  void IgnoreSection__ctor_m_797929816_0 (IgnoreSection_t435598830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::.cctor()
extern "C"  void IgnoreSection__cctor_m551883269_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.IgnoreSection::IsModified()
extern "C"  bool IgnoreSection_IsModified_m_2019559275_0 (IgnoreSection_t435598830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::DeserializeSection(System.Xml.XmlReader)
extern "C"  void IgnoreSection_DeserializeSection_m_470194114_0 (IgnoreSection_t435598830_0 * __this, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::Reset(System.Configuration.ConfigurationElement)
extern "C"  void IgnoreSection_Reset_m320202944_0 (IgnoreSection_t435598830_0 * __this, ConfigurationElement_t_1454036085_0 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::ResetModified()
extern "C"  void IgnoreSection_ResetModified_m_879446530_0 (IgnoreSection_t435598830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.IgnoreSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C"  String_t* IgnoreSection_SerializeSection_m289992698_0 (IgnoreSection_t435598830_0 * __this, ConfigurationElement_t_1454036085_0 * ___parentElement, String_t* ___name, int32_t ___saveMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.IgnoreSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t7845476_0 * IgnoreSection_get_Properties_m_1989635403_0 (IgnoreSection_t435598830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
