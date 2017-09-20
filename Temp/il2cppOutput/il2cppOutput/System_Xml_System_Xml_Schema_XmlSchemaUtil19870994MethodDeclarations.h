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

// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1517207743_0;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1727784015_0;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t_2004451924_0;
// System.Xml.XmlParserContext
struct XmlParserContext_t1369943614_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t2063649899_0;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Xml.XmlAttribute
struct XmlAttribute_t_1872240822_0;
// System.Exception
struct Exception_t2143823668_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t_636905395_0;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t313454368_0;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t_1489645997_0;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t_1266675828_0;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1801753938_0;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t_1084196614_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe1167302024.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaForm19419604.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProc_1684590244.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaUse1801756279.h"

// System.Void System.Xml.Schema.XmlSchemaUtil::.cctor()
extern "C"  void XmlSchemaUtil__cctor_m1976949167_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::AddToTable(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.XmlSchemaObject,System.Xml.XmlQualifiedName,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaUtil_AddToTable_m_1805090742_0 (Object_t * __this /* static, unused */, XmlSchemaObjectTable_t1517207743_0 * ___table, XmlSchemaObject_t1727784015_0 * ___obj, XmlQualifiedName_t_2082775307_0 * ___qname, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::CompileID(System.String,System.Xml.Schema.XmlSchemaObject,System.Collections.Hashtable,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaUtil_CompileID_m_1203260916_0 (Object_t * __this /* static, unused */, String_t* ___id, XmlSchemaObject_t1727784015_0 * ___xso, Hashtable_t_2004451924_0 * ___idCollection, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckAnyUri(System.String)
extern "C"  bool XmlSchemaUtil_CheckAnyUri_m_148056362_0 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNormalizedString(System.String)
extern "C"  bool XmlSchemaUtil_CheckNormalizedString_m_537398898_0 (Object_t * __this /* static, unused */, String_t* ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNCName(System.String)
extern "C"  bool XmlSchemaUtil_CheckNCName_m1147251958_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckQName(System.Xml.XmlQualifiedName)
extern "C"  bool XmlSchemaUtil_CheckQName_m_683821798_0 (Object_t * __this /* static, unused */, XmlQualifiedName_t_2082775307_0 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.Schema.XmlSchemaUtil::GetParserContext(System.Xml.XmlReader)
extern "C"  XmlParserContext_t1369943614_0 * XmlSchemaUtil_GetParserContext_m469864920_0 (Object_t * __this /* static, unused */, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsBuiltInDatatypeName(System.Xml.XmlQualifiedName)
extern "C"  bool XmlSchemaUtil_IsBuiltInDatatypeName_m_829591680_0 (Object_t * __this /* static, unused */, XmlQualifiedName_t_2082775307_0 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreSchemaDatatypeEqual(Mono.Xml.Schema.XsdAnySimpleType,System.Object,Mono.Xml.Schema.XsdAnySimpleType,System.Object)
extern "C"  bool XmlSchemaUtil_AreSchemaDatatypeEqual_m_931350323_0 (Object_t * __this /* static, unused */, XsdAnySimpleType_t2063649899_0 * ___st1, Object_t * ___v1, XsdAnySimpleType_t2063649899_0 * ___st2, Object_t * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsValidQName(System.String)
extern "C"  bool XmlSchemaUtil_IsValidQName_m1274079738_0 (Object_t * __this /* static, unused */, String_t* ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Schema.XmlSchemaUtil::SplitList(System.String)
extern "C"  StringU5BU5D_t_816028754_0* XmlSchemaUtil_SplitList_m739244845_0 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ReadUnhandledAttribute(System.Xml.XmlReader,System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaUtil_ReadUnhandledAttribute_m1450247805_0 (Object_t * __this /* static, unused */, XmlReader_t1629164245_0 * ___reader, XmlSchemaObject_t1727784015_0 * ___xso, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ParseWsdlArrayType(System.Xml.XmlReader,System.Xml.XmlAttribute)
extern "C"  void XmlSchemaUtil_ParseWsdlArrayType_m153752591_0 (Object_t * __this /* static, unused */, XmlReader_t1629164245_0 * ___reader, XmlAttribute_t_1872240822_0 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::ReadBoolAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  bool XmlSchemaUtil_ReadBoolAttribute_m_1736471918_0 (Object_t * __this /* static, unused */, XmlReader_t1629164245_0 * ___reader, Exception_t2143823668_0 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::ReadDerivationAttribute(System.Xml.XmlReader,System.Exception&,System.String,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  int32_t XmlSchemaUtil_ReadDerivationAttribute_m_1065906010_0 (Object_t * __this /* static, unused */, XmlReader_t1629164245_0 * ___reader, Exception_t2143823668_0 ** ___innerExcpetion, String_t* ___name, int32_t ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::AddFlag(System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  int32_t XmlSchemaUtil_AddFlag_m_196316516_0 (Object_t * __this /* static, unused */, int32_t ___dst, int32_t ___add, int32_t ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaUtil::ReadFormAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  int32_t XmlSchemaUtil_ReadFormAttribute_m_1198481442_0 (Object_t * __this /* static, unused */, XmlReader_t1629164245_0 * ___reader, Exception_t2143823668_0 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaUtil::ReadProcessingAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  int32_t XmlSchemaUtil_ReadProcessingAttribute_m389093543_0 (Object_t * __this /* static, unused */, XmlReader_t1629164245_0 * ___reader, Exception_t2143823668_0 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaUtil::ReadUseAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  int32_t XmlSchemaUtil_ReadUseAttribute_m_1989290024_0 (Object_t * __this /* static, unused */, XmlReader_t1629164245_0 * ___reader, Exception_t2143823668_0 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ReadQNameAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  XmlQualifiedName_t_2082775307_0 * XmlSchemaUtil_ReadQNameAttribute_m_1495975199_0 (Object_t * __this /* static, unused */, XmlReader_t1629164245_0 * ___reader, Exception_t2143823668_0 ** ___innerEx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ToQName(System.Xml.XmlReader,System.String,System.Exception&)
extern "C"  XmlQualifiedName_t_2082775307_0 * XmlSchemaUtil_ToQName_m_1643858824_0 (Object_t * __this /* static, unused */, XmlReader_t1629164245_0 * ___reader, String_t* ___qnamestr, Exception_t2143823668_0 ** ___innerEx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaUtil::ValidateAttributesResolved(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.XmlSchemaAnyAttribute&,System.Xml.Schema.XmlSchemaAttributeGroup,System.Boolean)
extern "C"  int32_t XmlSchemaUtil_ValidateAttributesResolved_m_463444317_0 (Object_t * __this /* static, unused */, XmlSchemaObjectTable_t1517207743_0 * ___attributesResolved, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, XmlSchemaObjectCollection_t_636905395_0 * ___attributes, XmlSchemaAnyAttribute_t313454368_0 * ___anyAttribute, XmlSchemaAnyAttribute_t313454368_0 ** ___anyAttributeUse, XmlSchemaAttributeGroup_t_1489645997_0 * ___redefined, bool ___skipEquivalent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreAttributesEqual(System.Xml.Schema.XmlSchemaAttribute,System.Xml.Schema.XmlSchemaAttribute)
extern "C"  bool XmlSchemaUtil_AreAttributesEqual_m_1352396385_0 (Object_t * __this /* static, unused */, XmlSchemaAttribute_t_1266675828_0 * ___one, XmlSchemaAttribute_t_1266675828_0 * ___another, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaUtil::FindAttributeDeclaration(System.String,System.Xml.Schema.XmlSchemaSet,System.Xml.Schema.XmlSchemaComplexType,System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaObject_t1727784015_0 * XmlSchemaUtil_FindAttributeDeclaration_m_845408874_0 (Object_t * __this /* static, unused */, String_t* ___ns, XmlSchemaSet_t1801753938_0 * ___schemas, XmlSchemaComplexType_t_1084196614_0 * ___cType, XmlQualifiedName_t_2082775307_0 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AttributeWildcardItemValid(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.XmlQualifiedName,System.String)
extern "C"  bool XmlSchemaUtil_AttributeWildcardItemValid_m814712370_0 (Object_t * __this /* static, unused */, XmlSchemaAnyAttribute_t313454368_0 * ___anyAttr, XmlQualifiedName_t_2082775307_0 * ___qname, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
