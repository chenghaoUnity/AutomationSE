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

// System.Net.Configuration.RequestCachingSection
struct RequestCachingSection_t2058332551_0;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t7845476_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Configuration.RequestCachingSection::.cctor()
extern "C"  void RequestCachingSection__cctor_m_94473506_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.RequestCachingSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t7845476_0 * RequestCachingSection_get_Properties_m479701950_0 (RequestCachingSection_t2058332551_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::PostDeserialize()
extern "C"  void RequestCachingSection_PostDeserialize_m437983180_0 (RequestCachingSection_t2058332551_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C"  void RequestCachingSection_DeserializeElement_m_247992369_0 (RequestCachingSection_t2058332551_0 * __this, XmlReader_t1629164245_0 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
