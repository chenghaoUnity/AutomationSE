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

// System.Configuration.ConfigurationElement
struct ConfigurationElement_t_1454036085_0;
// System.Configuration.Configuration
struct Configuration_t_539106767_0;
// System.Configuration.PropertyInformation
struct PropertyInformation_t_1042739950_0;
// System.Configuration.ElementInformation
struct ElementInformation_t381462581_0;
// System.String
struct String_t;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t_52258118_0;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t1184719654_0;
// System.Object
struct Object_t;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t7845476_0;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t340788361_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// System.Xml.XmlWriter
struct XmlWriter_t1784569477_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configura105049617.h"

// System.Void System.Configuration.ConfigurationElement::.ctor()
extern "C"  void ConfigurationElement__ctor_m_997210715_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationElement::get_Configuration()
extern "C"  Configuration_t_539106767_0 * ConfigurationElement_get_Configuration_m1316584128_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Configuration(System.Configuration.Configuration)
extern "C"  void ConfigurationElement_set_Configuration_m857039325_0 (ConfigurationElement_t_1454036085_0 * __this, Configuration_t_539106767_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::InitFromProperty(System.Configuration.PropertyInformation)
extern "C"  void ConfigurationElement_InitFromProperty_m_2091944178_0 (ConfigurationElement_t_1454036085_0 * __this, PropertyInformation_t_1042739950_0 * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::get_ElementInformation()
extern "C"  ElementInformation_t381462581_0 * ConfigurationElement_get_ElementInformation_m_181318420_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElement::get_RawXml()
extern "C"  String_t* ConfigurationElement_get_RawXml_m_324389228_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_RawXml(System.String)
extern "C"  void ConfigurationElement_set_RawXml_m109833751_0 (ConfigurationElement_t_1454036085_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Init()
extern "C"  void ConfigurationElement_Init_m1720483855_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllAttributesExcept()
extern "C"  ConfigurationLockCollection_t_52258118_0 * ConfigurationElement_get_LockAllAttributesExcept_m_1880630777_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllElementsExcept()
extern "C"  ConfigurationLockCollection_t_52258118_0 * ConfigurationElement_get_LockAllElementsExcept_m_796080345_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAttributes()
extern "C"  ConfigurationLockCollection_t_52258118_0 * ConfigurationElement_get_LockAttributes_m_1664960317_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockElements()
extern "C"  ConfigurationLockCollection_t_52258118_0 * ConfigurationElement_get_LockElements_m606566179_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_LockItem(System.Boolean)
extern "C"  void ConfigurationElement_set_LockItem_m1659220049_0 (ConfigurationElement_t_1454036085_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::SetPropertyValue(System.Configuration.ConfigurationProperty,System.Object,System.Boolean)
extern "C"  void ConfigurationElement_SetPropertyValue_m_284474038_0 (ConfigurationElement_t_1454036085_0 * __this, ConfigurationProperty_t1184719654_0 * ___prop, Object_t * ___value, bool ___ignoreLocks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::GetKeyProperties()
extern "C"  ConfigurationPropertyCollection_t7845476_0 * ConfigurationElement_GetKeyProperties_m_1868693314_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::GetDefaultCollection()
extern "C"  ConfigurationElementCollection_t340788361_0 * ConfigurationElement_GetDefaultCollection_m_1639318608_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::get_Item(System.Configuration.ConfigurationProperty)
extern "C"  Object_t * ConfigurationElement_get_Item_m882145330_0 (ConfigurationElement_t_1454036085_0 * __this, ConfigurationProperty_t1184719654_0 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Item(System.Configuration.ConfigurationProperty,System.Object)
extern "C"  void ConfigurationElement_set_Item_m_220201527_0 (ConfigurationElement_t_1454036085_0 * __this, ConfigurationProperty_t1184719654_0 * ___property, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::get_Item(System.String)
extern "C"  Object_t * ConfigurationElement_get_Item_m_745373380_0 (ConfigurationElement_t_1454036085_0 * __this, String_t* ___property_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Item(System.String,System.Object)
extern "C"  void ConfigurationElement_set_Item_m_854817759_0 (ConfigurationElement_t_1454036085_0 * __this, String_t* ___property_name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties()
extern "C"  ConfigurationPropertyCollection_t7845476_0 * ConfigurationElement_get_Properties_m1602766206_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::Equals(System.Object)
extern "C"  bool ConfigurationElement_Equals_m_285070148_0 (ConfigurationElement_t_1454036085_0 * __this, Object_t * ___compareTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElement::GetHashCode()
extern "C"  int32_t ConfigurationElement_GetHashCode_m_910502380_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasValues()
extern "C"  bool ConfigurationElement_HasValues_m2077527173_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasLocalModifications()
extern "C"  bool ConfigurationElement_HasLocalModifications_m1860323983_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C"  void ConfigurationElement_DeserializeElement_m_1712160059_0 (ConfigurationElement_t_1454036085_0 * __this, XmlReader_t1629164245_0 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern "C"  bool ConfigurationElement_OnDeserializeUnrecognizedAttribute_m1006639416_0 (ConfigurationElement_t_1454036085_0 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader)
extern "C"  bool ConfigurationElement_OnDeserializeUnrecognizedElement_m_435492442_0 (ConfigurationElement_t_1454036085_0 * __this, String_t* ___element, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::OnRequiredPropertyNotFound(System.String)
extern "C"  Object_t * ConfigurationElement_OnRequiredPropertyNotFound_m_1670870282_0 (ConfigurationElement_t_1454036085_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::PreSerialize(System.Xml.XmlWriter)
extern "C"  void ConfigurationElement_PreSerialize_m1216817032_0 (ConfigurationElement_t_1454036085_0 * __this, XmlWriter_t1784569477_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::PostDeserialize()
extern "C"  void ConfigurationElement_PostDeserialize_m_1142951102_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::InitializeDefault()
extern "C"  void ConfigurationElement_InitializeDefault_m838875156_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::IsModified()
extern "C"  bool ConfigurationElement_IsModified_m903236908_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::SetReadOnly()
extern "C"  void ConfigurationElement_SetReadOnly_m1427536167_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::IsReadOnly()
extern "C"  bool ConfigurationElement_IsReadOnly_m_914294139_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Reset(System.Configuration.ConfigurationElement)
extern "C"  void ConfigurationElement_Reset_m_1240403357_0 (ConfigurationElement_t_1454036085_0 * __this, ConfigurationElement_t_1454036085_0 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::ResetModified()
extern "C"  void ConfigurationElement_ResetModified_m666869755_0 (ConfigurationElement_t_1454036085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::SerializeElement(System.Xml.XmlWriter,System.Boolean)
extern "C"  bool ConfigurationElement_SerializeElement_m_762376516_0 (ConfigurationElement_t_1454036085_0 * __this, XmlWriter_t1784569477_0 * ___writer, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String)
extern "C"  bool ConfigurationElement_SerializeToXmlElement_m432706353_0 (ConfigurationElement_t_1454036085_0 * __this, XmlWriter_t1784569477_0 * ___writer, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C"  void ConfigurationElement_Unmerge_m_965486459_0 (ConfigurationElement_t_1454036085_0 * __this, ConfigurationElement_t_1454036085_0 * ___source, ConfigurationElement_t_1454036085_0 * ___parent, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasValue(System.String)
extern "C"  bool ConfigurationElement_HasValue_m560998898_0 (ConfigurationElement_t_1454036085_0 * __this, String_t* ___propName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::ValidateValue(System.Configuration.ConfigurationProperty,System.String)
extern "C"  void ConfigurationElement_ValidateValue_m_106427034_0 (ConfigurationElement_t_1454036085_0 * __this, ConfigurationProperty_t1184719654_0 * ___p, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
