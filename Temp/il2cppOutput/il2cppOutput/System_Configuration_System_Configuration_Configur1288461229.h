#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Type
struct Type_t;

#include "mscorlib_System_Attribute675283329.h"
#include "System_Configuration_System_Configuration_Configu_1402954909.h"

// System.Configuration.ConfigurationCollectionAttribute
struct  ConfigurationCollectionAttribute_t1288461229_0  : public Attribute_t675283329_0
{
	// System.String System.Configuration.ConfigurationCollectionAttribute::addItemName
	String_t* ___addItemName_0;
	// System.String System.Configuration.ConfigurationCollectionAttribute::clearItemsName
	String_t* ___clearItemsName_1;
	// System.String System.Configuration.ConfigurationCollectionAttribute::removeItemName
	String_t* ___removeItemName_2;
	// System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationCollectionAttribute::collectionType
	int32_t ___collectionType_3;
	// System.Type System.Configuration.ConfigurationCollectionAttribute::itemType
	Type_t * ___itemType_4;
};
