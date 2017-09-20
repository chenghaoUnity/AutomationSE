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

// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t1184719654_0;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t430695217_0;
// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t_1496075630_0;
// System.Configuration.ConfigurationCollectionAttribute
struct ConfigurationCollectionAttribute_t1288461229_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configura390661272.h"

// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type)
extern "C"  void ConfigurationProperty__ctor_m_308905019_0 (ConfigurationProperty_t1184719654_0 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object)
extern "C"  void ConfigurationProperty__ctor_m515000787_0 (ConfigurationProperty_t1184719654_0 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.Configuration.ConfigurationPropertyOptions)
extern "C"  void ConfigurationProperty__ctor_m_767917227_0 (ConfigurationProperty_t1184719654_0 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions)
extern "C"  void ConfigurationProperty__ctor_m1859680230_0 (ConfigurationProperty_t1184719654_0 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, TypeConverter_t430695217_0 * ___converter, ConfigurationValidatorBase_t_1496075630_0 * ___validation, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions,System.String)
extern "C"  void ConfigurationProperty__ctor_m1591137698_0 (ConfigurationProperty_t1184719654_0 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, TypeConverter_t430695217_0 * ___converter, ConfigurationValidatorBase_t_1496075630_0 * ___validation, int32_t ___flags, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.cctor()
extern "C"  void ConfigurationProperty__cctor_m1268661309_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationProperty::get_DefaultValue()
extern "C"  Object_t * ConfigurationProperty_get_DefaultValue_m_272731838_0 (ConfigurationProperty_t1184719654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsKey()
extern "C"  bool ConfigurationProperty_get_IsKey_m1860200212_0 (ConfigurationProperty_t1184719654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsRequired()
extern "C"  bool ConfigurationProperty_get_IsRequired_m_1907528212_0 (ConfigurationProperty_t1184719654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsDefaultCollection()
extern "C"  bool ConfigurationProperty_get_IsDefaultCollection_m1180572020_0 (ConfigurationProperty_t1184719654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationProperty::get_Name()
extern "C"  String_t* ConfigurationProperty_get_Name_m1552741707_0 (ConfigurationProperty_t1184719654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.ConfigurationProperty::get_Type()
extern "C"  Type_t * ConfigurationProperty_get_Type_m864000433_0 (ConfigurationProperty_t1184719654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationProperty::get_Validator()
extern "C"  ConfigurationValidatorBase_t_1496075630_0 * ConfigurationProperty_get_Validator_m_422273688_0 (ConfigurationProperty_t1184719654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationProperty::ConvertFromString(System.String)
extern "C"  Object_t * ConfigurationProperty_ConvertFromString_m_298693125_0 (ConfigurationProperty_t1184719654_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationProperty::ConvertToString(System.Object)
extern "C"  String_t* ConfigurationProperty_ConvertToString_m_1319595126_0 (ConfigurationProperty_t1184719654_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsElement()
extern "C"  bool ConfigurationProperty_get_IsElement_m1614764657_0 (ConfigurationProperty_t1184719654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationCollectionAttribute System.Configuration.ConfigurationProperty::get_CollectionAttribute()
extern "C"  ConfigurationCollectionAttribute_t1288461229_0 * ConfigurationProperty_get_CollectionAttribute_m544307023_0 (ConfigurationProperty_t1184719654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::set_CollectionAttribute(System.Configuration.ConfigurationCollectionAttribute)
extern "C"  void ConfigurationProperty_set_CollectionAttribute_m_2021991388_0 (ConfigurationProperty_t1184719654_0 * __this, ConfigurationCollectionAttribute_t1288461229_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::Validate(System.Object)
extern "C"  void ConfigurationProperty_Validate_m1133339114_0 (ConfigurationProperty_t1184719654_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
