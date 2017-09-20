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

// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1801753938_0;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1517207743_0;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_t861578230_0;
// System.Collections.Hashtable
struct Hashtable_t_2004451924_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.ICollection
struct ICollection_t592284435_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.Schema.XmlSchemaSet::.ctor()
extern "C"  void XmlSchemaSet__ctor_m1520080836_0 (XmlSchemaSet_t1801753938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlSchemaSet__ctor_m_1421752756_0 (XmlSchemaSet_t1801753938_0 * __this, XmlNameTable_t_662182735_0 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::add_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSet_add_ValidationEventHandler_m_5137913_0 (XmlSchemaSet_t1801753938_0 * __this, ValidationEventHandler_t513619217_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::remove_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSet_remove_ValidationEventHandler_m_2128251162_0 (XmlSchemaSet_t1801753938_0 * __this, ValidationEventHandler_t513619217_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSet::get_Count()
extern "C"  int32_t XmlSchemaSet_get_Count_m_1197327194_0 (XmlSchemaSet_t1801753938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalAttributes()
extern "C"  XmlSchemaObjectTable_t1517207743_0 * XmlSchemaSet_get_GlobalAttributes_m_397653754_0 (XmlSchemaSet_t1801753938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalElements()
extern "C"  XmlSchemaObjectTable_t1517207743_0 * XmlSchemaSet_get_GlobalElements_m1582185510_0 (XmlSchemaSet_t1801753938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalTypes()
extern "C"  XmlSchemaObjectTable_t1517207743_0 * XmlSchemaSet_get_GlobalTypes_m_193461748_0 (XmlSchemaSet_t1801753938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::get_IsCompiled()
extern "C"  bool XmlSchemaSet_get_IsCompiled_m_312286292_0 (XmlSchemaSet_t1801753938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.XmlSchemaSet::get_CompilationSettings()
extern "C"  XmlSchemaCompilationSettings_t861578230_0 * XmlSchemaSet_get_CompilationSettings_m_777750029_0 (XmlSchemaSet_t1801753938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Schema.XmlSchemaSet::get_IDCollection()
extern "C"  Hashtable_t_2004451924_0 * XmlSchemaSet_get_IDCollection_m1977632075_0 (XmlSchemaSet_t1801753938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_NamedIdentities()
extern "C"  XmlSchemaObjectTable_t1517207743_0 * XmlSchemaSet_get_NamedIdentities_m_479118549_0 (XmlSchemaSet_t1801753938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaSet::Add(System.Xml.Schema.XmlSchema)
extern "C"  XmlSchema_t_881538832_0 * XmlSchemaSet_Add_m305966240_0 (XmlSchemaSet_t1801753938_0 * __this, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::Compile()
extern "C"  void XmlSchemaSet_Compile_m_1249304043_0 (XmlSchemaSet_t1801753938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::ClearGlobalComponents()
extern "C"  void XmlSchemaSet_ClearGlobalComponents_m_2109176600_0 (XmlSchemaSet_t1801753938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::AddGlobalComponents(System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaSet_AddGlobalComponents_m1311651381_0 (XmlSchemaSet_t1801753938_0 * __this, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::Contains(System.String)
extern "C"  bool XmlSchemaSet_Contains_m953675387_0 (XmlSchemaSet_t1801753938_0 * __this, String_t* ___targetNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::Contains(System.Xml.Schema.XmlSchema)
extern "C"  bool XmlSchemaSet_Contains_m_1793291798_0 (XmlSchemaSet_t1801753938_0 * __this, XmlSchema_t_881538832_0 * ___targetNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::CopyTo(System.Array,System.Int32)
extern "C"  void XmlSchemaSet_CopyTo_m1918407585_0 (XmlSchemaSet_t1801753938_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaSet::GetSafeNs(System.String)
extern "C"  String_t* XmlSchemaSet_GetSafeNs_m912533339_0 (XmlSchemaSet_t1801753938_0 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::ResetCompile()
extern "C"  void XmlSchemaSet_ResetCompile_m_1005141276_0 (XmlSchemaSet_t1801753938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaSet::Schemas()
extern "C"  Object_t * XmlSchemaSet_Schemas_m_445689006_0 (XmlSchemaSet_t1801753938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaSet::Schemas(System.String)
extern "C"  Object_t * XmlSchemaSet_Schemas_m_1094991632_0 (XmlSchemaSet_t1801753938_0 * __this, String_t* ___targetNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::MissedSubComponents(System.String)
extern "C"  bool XmlSchemaSet_MissedSubComponents_m1738495789_0 (XmlSchemaSet_t1801753938_0 * __this, String_t* ___targetNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
