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

// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_t512494826_0;
// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t1625636132_0;
// System.Net.Configuration.ModuleElement
struct ModuleElement_t734405602_0;
// System.Net.Configuration.ProxyElement
struct ProxyElement_t_1679906436_0;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t7845476_0;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t_1454036085_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Configuration.DefaultProxySection::.ctor()
extern "C"  void DefaultProxySection__ctor_m384484204_0 (DefaultProxySection_t512494826_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::.cctor()
extern "C"  void DefaultProxySection__cctor_m_1447987775_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.BypassElementCollection System.Net.Configuration.DefaultProxySection::get_BypassList()
extern "C"  BypassElementCollection_t1625636132_0 * DefaultProxySection_get_BypassList_m_2127299332_0 (DefaultProxySection_t512494826_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Configuration.DefaultProxySection::get_Enabled()
extern "C"  bool DefaultProxySection_get_Enabled_m_1371577140_0 (DefaultProxySection_t512494826_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::set_Enabled(System.Boolean)
extern "C"  void DefaultProxySection_set_Enabled_m_1404535259_0 (DefaultProxySection_t512494826_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ModuleElement System.Net.Configuration.DefaultProxySection::get_Module()
extern "C"  ModuleElement_t734405602_0 * DefaultProxySection_get_Module_m1644046660_0 (DefaultProxySection_t512494826_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ProxyElement System.Net.Configuration.DefaultProxySection::get_Proxy()
extern "C"  ProxyElement_t_1679906436_0 * DefaultProxySection_get_Proxy_m_1868694190_0 (DefaultProxySection_t512494826_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Configuration.DefaultProxySection::get_UseDefaultCredentials()
extern "C"  bool DefaultProxySection_get_UseDefaultCredentials_m_1253110867_0 (DefaultProxySection_t512494826_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::set_UseDefaultCredentials(System.Boolean)
extern "C"  void DefaultProxySection_set_UseDefaultCredentials_m_1477979194_0 (DefaultProxySection_t512494826_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t7845476_0 * DefaultProxySection_get_Properties_m_829420831_0 (DefaultProxySection_t512494826_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::PostDeserialize()
extern "C"  void DefaultProxySection_PostDeserialize_m673817673_0 (DefaultProxySection_t512494826_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::Reset(System.Configuration.ConfigurationElement)
extern "C"  void DefaultProxySection_Reset_m371384444_0 (DefaultProxySection_t512494826_0 * __this, ConfigurationElement_t_1454036085_0 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
