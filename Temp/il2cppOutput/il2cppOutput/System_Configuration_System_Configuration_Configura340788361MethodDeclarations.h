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

// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t340788361_0;
// System.Array
struct Array_t;
// System.Configuration.PropertyInformation
struct PropertyInformation_t_1042739950_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t_1454036085_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Xml.XmlWriter
struct XmlWriter_t1784569477_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configu_1402954909.h"
#include "System_Configuration_System_Configuration_Configura105049617.h"

// System.Void System.Configuration.ConfigurationElementCollection::.ctor()
extern "C"  void ConfigurationElementCollection__ctor_m_308482521_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ConfigurationElementCollection_System_Collections_ICollection_CopyTo_m2026796285_0 (ConfigurationElementCollection_t340788361_0 * __this, Array_t * ___arr, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::InitFromProperty(System.Configuration.PropertyInformation)
extern "C"  void ConfigurationElementCollection_InitFromProperty_m_1321225396_0 (ConfigurationElementCollection_t340788361_0 * __this, PropertyInformation_t_1042739950_0 * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType()
extern "C"  int32_t ConfigurationElementCollection_get_CollectionType_m_387279296_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsBasic()
extern "C"  bool ConfigurationElementCollection_get_IsBasic_m396734246_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsAlternate()
extern "C"  bool ConfigurationElementCollection_get_IsAlternate_m_728980238_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::get_Count()
extern "C"  int32_t ConfigurationElementCollection_get_Count_m1800701483_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_ElementName()
extern "C"  String_t* ConfigurationElementCollection_get_ElementName_m648817958_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::set_EmitClear(System.Boolean)
extern "C"  void ConfigurationElementCollection_set_EmitClear_m1190085785_0 (ConfigurationElementCollection_t340788361_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsSynchronized()
extern "C"  bool ConfigurationElementCollection_get_IsSynchronized_m_2083706946_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElementCollection::get_SyncRoot()
extern "C"  Object_t * ConfigurationElementCollection_get_SyncRoot_m_385328498_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_ThrowOnDuplicate()
extern "C"  bool ConfigurationElementCollection_get_ThrowOnDuplicate_m_587333178_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_AddElementName()
extern "C"  String_t* ConfigurationElementCollection_get_AddElementName_m362058953_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_ClearElementName()
extern "C"  String_t* ConfigurationElementCollection_get_ClearElementName_m1238939165_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_RemoveElementName()
extern "C"  String_t* ConfigurationElementCollection_get_RemoveElementName_m186987650_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement)
extern "C"  void ConfigurationElementCollection_BaseAdd_m1011464128_0 (ConfigurationElementCollection_t340788361_0 * __this, ConfigurationElement_t_1454036085_0 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement,System.Boolean)
extern "C"  void ConfigurationElementCollection_BaseAdd_m114828221_0 (ConfigurationElementCollection_t340788361_0 * __this, ConfigurationElement_t_1454036085_0 * ___element, bool ___throwIfExists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseClear()
extern "C"  void ConfigurationElementCollection_BaseClear_m_1290380223_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::BaseGet(System.Int32)
extern "C"  ConfigurationElement_t_1454036085_0 * ConfigurationElementCollection_BaseGet_m1672882929_0 (ConfigurationElementCollection_t340788361_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::BaseGet(System.Object)
extern "C"  ConfigurationElement_t_1454036085_0 * ConfigurationElementCollection_BaseGet_m998572020_0 (ConfigurationElementCollection_t340788361_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::BaseIndexOf(System.Configuration.ConfigurationElement)
extern "C"  int32_t ConfigurationElementCollection_BaseIndexOf_m_1502181608_0 (ConfigurationElementCollection_t340788361_0 * __this, ConfigurationElement_t_1454036085_0 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::IndexOfKey(System.Object)
extern "C"  int32_t ConfigurationElementCollection_IndexOfKey_m_231153439_0 (ConfigurationElementCollection_t340788361_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseRemove(System.Object)
extern "C"  void ConfigurationElementCollection_BaseRemove_m_1929101278_0 (ConfigurationElementCollection_t340788361_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseRemoveAt(System.Int32)
extern "C"  void ConfigurationElementCollection_BaseRemoveAt_m1912758230_0 (ConfigurationElementCollection_t340788361_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::CompareKeys(System.Object,System.Object)
extern "C"  bool ConfigurationElementCollection_CompareKeys_m_832487426_0 (ConfigurationElementCollection_t340788361_0 * __this, Object_t * ___key1, Object_t * ___key2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement(System.String)
extern "C"  ConfigurationElement_t_1454036085_0 * ConfigurationElementCollection_CreateNewElement_m_958170909_0 (ConfigurationElementCollection_t340788361_0 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElementInternal(System.String)
extern "C"  ConfigurationElement_t_1454036085_0 * ConfigurationElementCollection_CreateNewElementInternal_m_268683674_0 (ConfigurationElementCollection_t340788361_0 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::Equals(System.Object)
extern "C"  bool ConfigurationElementCollection_Equals_m_1993039298_0 (ConfigurationElementCollection_t340788361_0 * __this, Object_t * ___compareTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::GetHashCode()
extern "C"  int32_t ConfigurationElementCollection_GetHashCode_m731886870_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationElementCollection::GetEnumerator()
extern "C"  Object_t * ConfigurationElementCollection_GetEnumerator_m386038521_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsElementName(System.String)
extern "C"  bool ConfigurationElementCollection_IsElementName_m_1220004614_0 (ConfigurationElementCollection_t340788361_0 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsElementRemovable(System.Configuration.ConfigurationElement)
extern "C"  bool ConfigurationElementCollection_IsElementRemovable_m361522197_0 (ConfigurationElementCollection_t340788361_0 * __this, ConfigurationElement_t_1454036085_0 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsModified()
extern "C"  bool ConfigurationElementCollection_IsModified_m_939836054_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsReadOnly()
extern "C"  bool ConfigurationElementCollection_IsReadOnly_m1537600195_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::HasValues()
extern "C"  bool ConfigurationElementCollection_HasValues_m_1722704761_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::Reset(System.Configuration.ConfigurationElement)
extern "C"  void ConfigurationElementCollection_Reset_m_246037471_0 (ConfigurationElementCollection_t340788361_0 * __this, ConfigurationElement_t_1454036085_0 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::ResetModified()
extern "C"  void ConfigurationElementCollection_ResetModified_m_270195075_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::SetReadOnly()
extern "C"  void ConfigurationElementCollection_SetReadOnly_m_1768966103_0 (ConfigurationElementCollection_t340788361_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::SerializeElement(System.Xml.XmlWriter,System.Boolean)
extern "C"  bool ConfigurationElementCollection_SerializeElement_m_1522860994_0 (ConfigurationElementCollection_t340788361_0 * __this, XmlWriter_t1784569477_0 * ___writer, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader)
extern "C"  bool ConfigurationElementCollection_OnDeserializeUnrecognizedElement_m_1636169756_0 (ConfigurationElementCollection_t340788361_0 * __this, String_t* ___elementName, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C"  void ConfigurationElementCollection_Unmerge_m_1678319353_0 (ConfigurationElementCollection_t340788361_0 * __this, ConfigurationElement_t_1454036085_0 * ___sourceElement, ConfigurationElement_t_1454036085_0 * ___parentElement, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
