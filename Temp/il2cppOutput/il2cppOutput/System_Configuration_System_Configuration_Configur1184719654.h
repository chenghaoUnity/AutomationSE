#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t430695217_0;
// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t_1496075630_0;
// System.Configuration.ConfigurationCollectionAttribute
struct ConfigurationCollectionAttribute_t1288461229_0;

#include "mscorlib_System_Object_887538054.h"
#include "System_Configuration_System_Configuration_Configura390661272.h"

// System.Configuration.ConfigurationProperty
struct  ConfigurationProperty_t1184719654_0  : public Object_t
{
	// System.String System.Configuration.ConfigurationProperty::name
	String_t* ___name_1;
	// System.Type System.Configuration.ConfigurationProperty::type
	Type_t * ___type_2;
	// System.Object System.Configuration.ConfigurationProperty::default_value
	Object_t * ___default_value_3;
	// System.ComponentModel.TypeConverter System.Configuration.ConfigurationProperty::converter
	TypeConverter_t430695217_0 * ___converter_4;
	// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationProperty::validation
	ConfigurationValidatorBase_t_1496075630_0 * ___validation_5;
	// System.Configuration.ConfigurationPropertyOptions System.Configuration.ConfigurationProperty::flags
	int32_t ___flags_6;
	// System.String System.Configuration.ConfigurationProperty::description
	String_t* ___description_7;
	// System.Configuration.ConfigurationCollectionAttribute System.Configuration.ConfigurationProperty::collectionAttribute
	ConfigurationCollectionAttribute_t1288461229_0 * ___collectionAttribute_8;
};
struct ConfigurationProperty_t1184719654_0_StaticFields{
	// System.Object System.Configuration.ConfigurationProperty::NoDefaultValue
	Object_t * ___NoDefaultValue_0;
};
