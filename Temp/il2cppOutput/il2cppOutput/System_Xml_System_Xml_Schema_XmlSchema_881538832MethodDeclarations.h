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

// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t_636905395_0;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1517207743_0;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1801753938_0;
// System.Collections.Hashtable
struct Hashtable_t_2004451924_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Xml.XmlResolver
struct XmlResolver_t_1510524520_0;
// System.Xml.Schema.XmlSchemaExternal
struct XmlSchemaExternal_t631808219_0;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t_1266675828_0;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t_1489645997_0;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t2018508780_0;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t19846218_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1816173011_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaForm19419604.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe1167302024.h"

// System.Void System.Xml.Schema.XmlSchema::.ctor()
extern "C"  void XmlSchema__ctor_m188227104_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::get_AttributeFormDefault()
extern "C"  int32_t XmlSchema_get_AttributeFormDefault_m_1888602656_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::get_BlockDefault()
extern "C"  int32_t XmlSchema_get_BlockDefault_m1868070695_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::get_FinalDefault()
extern "C"  int32_t XmlSchema_get_FinalDefault_m_300615586_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::get_ElementFormDefault()
extern "C"  int32_t XmlSchema_get_ElementFormDefault_m361882880_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_TargetNamespace()
extern "C"  String_t* XmlSchema_get_TargetNamespace_m1263789570_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::set_TargetNamespace(System.String)
extern "C"  void XmlSchema_set_TargetNamespace_m_782255433_0 (XmlSchema_t_881538832_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_Version()
extern "C"  String_t* XmlSchema_get_Version_m1135093648_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::get_Includes()
extern "C"  XmlSchemaObjectCollection_t_636905395_0 * XmlSchema_get_Includes_m748082563_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::get_Items()
extern "C"  XmlSchemaObjectCollection_t_636905395_0 * XmlSchema_get_Items_m_827731542_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchema::get_IsCompiled()
extern "C"  bool XmlSchema_get_IsCompiled_m_1124643392_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Attributes()
extern "C"  XmlSchemaObjectTable_t1517207743_0 * XmlSchema_get_Attributes_m631487041_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_AttributeGroups()
extern "C"  XmlSchemaObjectTable_t1517207743_0 * XmlSchema_get_AttributeGroups_m_1434613624_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_SchemaTypes()
extern "C"  XmlSchemaObjectTable_t1517207743_0 * XmlSchema_get_SchemaTypes_m_1888760368_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Elements()
extern "C"  XmlSchemaObjectTable_t1517207743_0 * XmlSchema_get_Elements_m1404485665_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_Id()
extern "C"  String_t* XmlSchema_get_Id_m792700229_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Groups()
extern "C"  XmlSchemaObjectTable_t1517207743_0 * XmlSchema_get_Groups_m1629027326_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Notations()
extern "C"  XmlSchemaObjectTable_t1517207743_0 * XmlSchema_get_Notations_m506061481_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_NamedIdentities()
extern "C"  XmlSchemaObjectTable_t1517207743_0 * XmlSchema_get_NamedIdentities_m543179181_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchema::get_Schemas()
extern "C"  XmlSchemaSet_t1801753938_0 * XmlSchema_get_Schemas_m_1909604361_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Schema.XmlSchema::get_IDCollection()
extern "C"  Hashtable_t_2004451924_0 * XmlSchema_get_IDCollection_m_1639111683_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::CompileSubset(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchemaSet,System.Xml.XmlResolver,System.Collections.Hashtable)
extern "C"  void XmlSchema_CompileSubset_m_727471279_0 (XmlSchema_t_881538832_0 * __this, ValidationEventHandler_t513619217_0 * ___handler, XmlSchemaSet_t1801753938_0 * ___col, XmlResolver_t_1510524520_0 * ___resolver, Hashtable_t_2004451924_0 * ___handledUris, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::SetParent()
extern "C"  void XmlSchema_SetParent_m798376298_0 (XmlSchema_t_881538832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::DoCompile(System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.Schema.XmlSchemaSet,System.Xml.XmlResolver)
extern "C"  void XmlSchema_DoCompile_m1793284530_0 (XmlSchema_t_881538832_0 * __this, ValidationEventHandler_t513619217_0 * ___handler, Hashtable_t_2004451924_0 * ___handledUris, XmlSchemaSet_t1801753938_0 * ___col, XmlResolver_t_1510524520_0 * ___resolver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::GetResolvedUri(System.Xml.XmlResolver,System.String)
extern "C"  String_t* XmlSchema_GetResolvedUri_m669425620_0 (XmlSchema_t_881538832_0 * __this, XmlResolver_t_1510524520_0 * ___resolver, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ProcessExternal(System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.XmlResolver,System.Xml.Schema.XmlSchemaExternal,System.Xml.Schema.XmlSchemaSet)
extern "C"  void XmlSchema_ProcessExternal_m_670939028_0 (XmlSchema_t_881538832_0 * __this, ValidationEventHandler_t513619217_0 * ___handler, Hashtable_t_2004451924_0 * ___handledUris, XmlResolver_t_1510524520_0 * ___resolver, XmlSchemaExternal_t631808219_0 * ___ext, XmlSchemaSet_t1801753938_0 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::AddExternalComponentsTo(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.XmlResolver,System.Xml.Schema.XmlSchemaSet)
extern "C"  void XmlSchema_AddExternalComponentsTo_m_665544766_0 (XmlSchema_t_881538832_0 * __this, XmlSchema_t_881538832_0 * ___s, XmlSchemaObjectCollection_t_636905395_0 * ___items, ValidationEventHandler_t513619217_0 * ___handler, Hashtable_t_2004451924_0 * ___handledUris, XmlResolver_t_1510524520_0 * ___resolver, XmlSchemaSet_t1801753938_0 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchema::IsNamespaceAbsent(System.String)
extern "C"  bool XmlSchema_IsNamespaceAbsent_m_408555566_0 (XmlSchema_t_881538832_0 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchema::FindAttribute(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaAttribute_t_1266675828_0 * XmlSchema_FindAttribute_m1642502741_0 (XmlSchema_t_881538832_0 * __this, XmlQualifiedName_t_2082775307_0 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttributeGroup System.Xml.Schema.XmlSchema::FindAttributeGroup(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaAttributeGroup_t_1489645997_0 * XmlSchema_FindAttributeGroup_m_2144383781_0 (XmlSchema_t_881538832_0 * __this, XmlQualifiedName_t_2082775307_0 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchema::FindElement(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaElement_t2018508780_0 * XmlSchema_FindElement_m_802782251_0 (XmlSchema_t_881538832_0 * __this, XmlQualifiedName_t_2082775307_0 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchema::FindSchemaType(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaType_t19846218_0 * XmlSchema_FindSchemaType_m2055392780_0 (XmlSchema_t_881538832_0 * __this, XmlQualifiedName_t_2082775307_0 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::Validate(System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchema_Validate_m_1036468614_0 (XmlSchema_t_881538832_0 * __this, ValidationEventHandler_t513619217_0 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchema::Read(System.Xml.XmlReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchema_t_881538832_0 * XmlSchema_Read_m807478306_0 (Object_t * __this /* static, unused */, XmlReader_t1629164245_0 * ___rdr, ValidationEventHandler_t513619217_0 * ___validationEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ReadAttributes(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchema_ReadAttributes_m_18841858_0 (Object_t * __this /* static, unused */, XmlSchema_t_881538832_0 * ___schema, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ReadContent(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchema_ReadContent_m572495374_0 (Object_t * __this /* static, unused */, XmlSchema_t_881538832_0 * ___schema, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
