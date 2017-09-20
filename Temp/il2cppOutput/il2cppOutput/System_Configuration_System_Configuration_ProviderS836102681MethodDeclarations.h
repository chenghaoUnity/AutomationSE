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

// System.Configuration.ProviderSettings
struct ProviderSettings_t836102681_0;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t_1454036085_0;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t7845476_0;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2039613177_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configura105049617.h"

// System.Void System.Configuration.ProviderSettings::.ctor()
extern "C"  void ProviderSettings__ctor_m_9587369_0 (ProviderSettings_t836102681_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::.cctor()
extern "C"  void ProviderSettings__cctor_m_779304650_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ProviderSettings::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern "C"  bool ProviderSettings_OnDeserializeUnrecognizedAttribute_m_477598230_0 (ProviderSettings_t836102681_0 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ProviderSettings::IsModified()
extern "C"  bool ProviderSettings_IsModified_m_1311237702_0 (ProviderSettings_t836102681_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::Reset(System.Configuration.ConfigurationElement)
extern "C"  void ProviderSettings_Reset_m952816369_0 (ProviderSettings_t836102681_0 * __this, ConfigurationElement_t_1454036085_0 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C"  void ProviderSettings_Unmerge_m_836458441_0 (ProviderSettings_t836102681_0 * __this, ConfigurationElement_t_1454036085_0 * ___source, ConfigurationElement_t_1454036085_0 * ___parent, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ProviderSettings::get_Name()
extern "C"  String_t* ProviderSettings_get_Name_m2089129438_0 (ProviderSettings_t836102681_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ProviderSettings::get_Type()
extern "C"  String_t* ProviderSettings_get_Type_m_2011809075_0 (ProviderSettings_t836102681_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettings::get_Properties()
extern "C"  ConfigurationPropertyCollection_t7845476_0 * ProviderSettings_get_Properties_m1762981772_0 (ProviderSettings_t836102681_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Configuration.ProviderSettings::get_Parameters()
extern "C"  NameValueCollection_t2039613177_0 * ProviderSettings_get_Parameters_m_956798952_0 (ProviderSettings_t836102681_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
