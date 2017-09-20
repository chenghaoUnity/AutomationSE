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

// System.Configuration.PropertyInformation
struct PropertyInformation_t_1042739950_0;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t_1454036085_0;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t1184719654_0;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Property_257610787.h"

// System.Void System.Configuration.PropertyInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationProperty)
extern "C"  void PropertyInformation__ctor_m_1299839135_0 (PropertyInformation_t_1042739950_0 * __this, ConfigurationElement_t_1454036085_0 * ___owner, ConfigurationProperty_t1184719654_0 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.PropertyInformation::get_DefaultValue()
extern "C"  Object_t * PropertyInformation_get_DefaultValue_m905528750_0 (PropertyInformation_t_1042739950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsKey()
extern "C"  bool PropertyInformation_get_IsKey_m1021649896_0 (PropertyInformation_t_1042739950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsModified()
extern "C"  bool PropertyInformation_get_IsModified_m1510427202_0 (PropertyInformation_t_1042739950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::set_IsModified(System.Boolean)
extern "C"  void PropertyInformation_set_IsModified_m_2047033_0 (PropertyInformation_t_1042739950_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsRequired()
extern "C"  bool PropertyInformation_get_IsRequired_m463574424_0 (PropertyInformation_t_1042739950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.PropertyInformation::get_Name()
extern "C"  String_t* PropertyInformation_get_Name_m1695013175_0 (PropertyInformation_t_1042739950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.PropertyInformation::get_Type()
extern "C"  Type_t * PropertyInformation_get_Type_m1418850141_0 (PropertyInformation_t_1042739950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.PropertyInformation::get_Value()
extern "C"  Object_t * PropertyInformation_get_Value_m_1400795179_0 (PropertyInformation_t_1042739950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::set_Value(System.Object)
extern "C"  void PropertyInformation_set_Value_m492965022_0 (PropertyInformation_t_1042739950_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::Reset(System.Configuration.PropertyInformation)
extern "C"  void PropertyInformation_Reset_m_706155151_0 (PropertyInformation_t_1042739950_0 * __this, PropertyInformation_t_1042739950_0 * ___parentProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsElement()
extern "C"  bool PropertyInformation_get_IsElement_m_248410811_0 (PropertyInformation_t_1042739950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyValueOrigin System.Configuration.PropertyInformation::get_ValueOrigin()
extern "C"  int32_t PropertyInformation_get_ValueOrigin_m_699435540_0 (PropertyInformation_t_1042739950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.PropertyInformation::GetStringValue()
extern "C"  String_t* PropertyInformation_GetStringValue_m1585019661_0 (PropertyInformation_t_1042739950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::SetStringValue(System.String)
extern "C"  void PropertyInformation_SetStringValue_m1853091044_0 (PropertyInformation_t_1042739950_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationProperty System.Configuration.PropertyInformation::get_Property()
extern "C"  ConfigurationProperty_t1184719654_0 * PropertyInformation_get_Property_m1040359481_0 (PropertyInformation_t_1042739950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
