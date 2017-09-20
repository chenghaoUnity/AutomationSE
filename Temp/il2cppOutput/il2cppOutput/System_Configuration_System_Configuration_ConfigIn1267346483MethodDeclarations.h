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

// System.Configuration.ConfigInfoCollection
struct ConfigInfoCollection_t1267346483_0;
// System.Collections.ICollection
struct ICollection_t592284435_0;
// System.Configuration.ConfigInfo
struct ConfigInfo_t_750583883_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Configuration.ConfigInfoCollection::.ctor()
extern "C"  void ConfigInfoCollection__ctor_m506266109_0 (ConfigInfoCollection_t1267346483_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Configuration.ConfigInfoCollection::get_AllKeys()
extern "C"  Object_t * ConfigInfoCollection_get_AllKeys_m_1009434681_0 (ConfigInfoCollection_t1267346483_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfo System.Configuration.ConfigInfoCollection::get_Item(System.String)
extern "C"  ConfigInfo_t_750583883_0 * ConfigInfoCollection_get_Item_m_78730677_0 (ConfigInfoCollection_t1267346483_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::set_Item(System.String,System.Configuration.ConfigInfo)
extern "C"  void ConfigInfoCollection_set_Item_m_1652167184_0 (ConfigInfoCollection_t1267346483_0 * __this, String_t* ___name, ConfigInfo_t_750583883_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Add(System.String,System.Configuration.ConfigInfo)
extern "C"  void ConfigInfoCollection_Add_m331693451_0 (ConfigInfoCollection_t1267346483_0 * __this, String_t* ___name, ConfigInfo_t_750583883_0 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Clear()
extern "C"  void ConfigInfoCollection_Clear_m_2087600600_0 (ConfigInfoCollection_t1267346483_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Remove(System.String)
extern "C"  void ConfigInfoCollection_Remove_m_1790861513_0 (ConfigInfoCollection_t1267346483_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
