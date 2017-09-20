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

// Mono.Xml.Schema.XsdValidatingReader
struct XsdValidatingReader_t1035926723_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t_572605751_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.Xml.XmlResolver
struct XmlResolver_t_1510524520_0;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1801753938_0;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Xml.XmlParserContext
struct XmlParserContext_t1369943614_0;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1115255140_0;
// System.Exception
struct Exception_t2143823668_0;
// System.Xml.Schema.XmlSchemaValidationException
struct XmlSchemaValidationException_t1857362118_0;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t2018508780_0;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t19846218_0;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1845511452_0;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t_52373772_0;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t_1084196614_0;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t_1266675828_0;
// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t_1946880992_0;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t_1933432964_0;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t_509331893_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_ValidationType127825176.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"
#include "System_Xml_System_Xml_ReadState_2141932618.h"
#include "System_Xml_System_Xml_XmlSpace_638931788.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe1167302024.h"

// System.Void Mono.Xml.Schema.XsdValidatingReader::.ctor(System.Xml.XmlReader)
extern "C"  void XsdValidatingReader__ctor_m_354544599_0 (XsdValidatingReader_t1035926723_0 * __this, XmlReader_t1629164245_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::.cctor()
extern "C"  void XsdValidatingReader__cctor_m1001944736_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationContext Mono.Xml.Schema.XsdValidatingReader::get_Context()
extern "C"  XsdValidationContext_t_572605751_0 * XsdValidatingReader_get_Context_m_1235241110_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::get_CurrentKeyFieldConsumers()
extern "C"  ArrayList_t536890563_0 * XsdValidatingReader_get_CurrentKeyFieldConsumers_m_245231081_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_XsiNilDepth()
extern "C"  int32_t XsdValidatingReader_get_XsiNilDepth_m1240332964_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void XsdValidatingReader_set_XmlResolver_m1087497092_0 (XsdValidatingReader_t1035926723_0 * __this, XmlResolver_t_1510524520_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_Schemas(System.Xml.Schema.XmlSchemaSet)
extern "C"  void XsdValidatingReader_set_Schemas_m308878399_0 (XsdValidatingReader_t1035926723_0 * __this, XmlSchemaSet_t1801753938_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::get_SchemaType()
extern "C"  Object_t * XsdValidatingReader_get_SchemaType_m_387919514_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::get_SourceReaderSchemaType()
extern "C"  Object_t * XsdValidatingReader_get_SourceReaderSchemaType_m_801950140_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ValidationType Mono.Xml.Schema.XsdValidatingReader::get_ValidationType()
extern "C"  int32_t XsdValidatingReader_get_ValidationType_m_583269527_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_ValidationType(System.Xml.ValidationType)
extern "C"  void XsdValidatingReader_set_ValidationType_m_2105544798_0 (XsdValidatingReader_t1035926723_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_AttributeCount()
extern "C"  int32_t XsdValidatingReader_get_AttributeCount_m_1270129231_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_BaseURI()
extern "C"  String_t* XsdValidatingReader_get_BaseURI_m1249523360_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_CanResolveEntity()
extern "C"  bool XsdValidatingReader_get_CanResolveEntity_m_233768777_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_Depth()
extern "C"  int32_t XsdValidatingReader_get_Depth_m_48993081_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_EOF()
extern "C"  bool XsdValidatingReader_get_EOF_m_968711898_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_HasValue()
extern "C"  bool XsdValidatingReader_get_HasValue_m1131007407_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_IsDefault()
extern "C"  bool XsdValidatingReader_get_IsDefault_m_1086458783_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_IsEmptyElement()
extern "C"  bool XsdValidatingReader_get_IsEmptyElement_m51934257_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Item(System.String)
extern "C"  String_t* XsdValidatingReader_get_Item_m_286588238_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Item(System.String,System.String)
extern "C"  String_t* XsdValidatingReader_get_Item_m965249902_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_LineNumber()
extern "C"  int32_t XsdValidatingReader_get_LineNumber_m2095936059_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_LinePosition()
extern "C"  int32_t XsdValidatingReader_get_LinePosition_m1629482971_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_LocalName()
extern "C"  String_t* XsdValidatingReader_get_LocalName_m_1724055909_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Name()
extern "C"  String_t* XsdValidatingReader_get_Name_m_1425121336_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_NamespaceURI()
extern "C"  String_t* XsdValidatingReader_get_NamespaceURI_m717066702_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.Schema.XsdValidatingReader::get_NameTable()
extern "C"  XmlNameTable_t_662182735_0 * XsdValidatingReader_get_NameTable_m1047194966_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.Schema.XsdValidatingReader::get_NodeType()
extern "C"  int32_t XsdValidatingReader_get_NodeType_m_119379000_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.Schema.XsdValidatingReader::get_ParserContext()
extern "C"  XmlParserContext_t1369943614_0 * XsdValidatingReader_get_ParserContext_m_870577994_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager Mono.Xml.Schema.XsdValidatingReader::get_NamespaceManager()
extern "C"  XmlNamespaceManager_t1115255140_0 * XsdValidatingReader_get_NamespaceManager_m1178443572_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Prefix()
extern "C"  String_t* XsdValidatingReader_get_Prefix_m1720181519_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.Schema.XsdValidatingReader::get_ReadState()
extern "C"  int32_t XsdValidatingReader_get_ReadState_m1361611273_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Value()
extern "C"  String_t* XsdValidatingReader_get_Value_m1575585462_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_XmlLang()
extern "C"  String_t* XsdValidatingReader_get_XmlLang_m1252743658_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.Schema.XsdValidatingReader::get_XmlSpace()
extern "C"  int32_t XsdValidatingReader_get_XmlSpace_m_375037535_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String)
extern "C"  void XsdValidatingReader_HandleError_m_666551337_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String,System.Exception)
extern "C"  void XsdValidatingReader_HandleError_m_491728321_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___error, Exception_t2143823668_0 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String,System.Exception,System.Boolean)
extern "C"  void XsdValidatingReader_HandleError_m_1653154978_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___error, Exception_t2143823668_0 * ___innerException, bool ___isWarning, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.Xml.Schema.XmlSchemaValidationException)
extern "C"  void XsdValidatingReader_HandleError_m_788442634_0 (XsdValidatingReader_t1035926723_0 * __this, XmlSchemaValidationException_t1857362118_0 * ___schemaException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.Xml.Schema.XmlSchemaValidationException,System.Boolean)
extern "C"  void XsdValidatingReader_HandleError_m_511830329_0 (XsdValidatingReader_t1035926723_0 * __this, XmlSchemaValidationException_t1857362118_0 * ___schemaException, bool ___isWarning, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdValidatingReader::FindElement(System.String,System.String)
extern "C"  XmlSchemaElement_t2018508780_0 * XsdValidatingReader_FindElement_m1417503194_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType Mono.Xml.Schema.XsdValidatingReader::FindType(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaType_t19846218_0 * XsdValidatingReader_FindType_m1847654522_0 (XsdValidatingReader_t1035926723_0 * __this, XmlQualifiedName_t_2082775307_0 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateStartElementParticle()
extern "C"  void XsdValidatingReader_ValidateStartElementParticle_m475826317_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndElementParticle()
extern "C"  void XsdValidatingReader_ValidateEndElementParticle_m_1202003916_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateCharacters()
extern "C"  void XsdValidatingReader_ValidateCharacters_m_438204777_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndSimpleContent()
extern "C"  void XsdValidatingReader_ValidateEndSimpleContent_m476220409_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndSimpleContentCore()
extern "C"  void XsdValidatingReader_ValidateEndSimpleContentCore_m33325048_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStringValid(System.Xml.Schema.XmlSchemaSimpleType,System.Xml.Schema.XmlSchemaDatatype,System.String)
extern "C"  void XsdValidatingReader_AssessStringValid_m1581096182_0 (XsdValidatingReader_t1035926723_0 * __this, XmlSchemaSimpleType_t1845511452_0 * ___st, XmlSchemaDatatype_t_52373772_0 * ___dt, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateRestrictedSimpleTypeValue(System.Xml.Schema.XmlSchemaSimpleType,System.Xml.Schema.XmlSchemaDatatype&,System.String)
extern "C"  void XsdValidatingReader_ValidateRestrictedSimpleTypeValue_m1536825691_0 (XsdValidatingReader_t1035926723_0 * __this, XmlSchemaSimpleType_t1845511452_0 * ___st, XmlSchemaDatatype_t_52373772_0 ** ___dt, String_t* ___normalized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::GetXsiType(System.String)
extern "C"  Object_t * XsdValidatingReader_GetXsiType_m_154882770_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessLocalTypeDerivationOK(System.Object,System.Object,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  void XsdValidatingReader_AssessLocalTypeDerivationOK_m687748310_0 (XsdValidatingReader_t1035926723_0 * __this, Object_t * ___xsiType, Object_t * ___baseType, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStartElementSchemaValidity()
extern "C"  void XsdValidatingReader_AssessStartElementSchemaValidity_m_175016696_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessElementLocallyValidElement(System.String)
extern "C"  void XsdValidatingReader_AssessElementLocallyValidElement_m_1640035125_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___xsiNilValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStartElementLocallyValidType(System.Object)
extern "C"  void XsdValidatingReader_AssessStartElementLocallyValidType_m_636169951_0 (XsdValidatingReader_t1035926723_0 * __this, Object_t * ___schemaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessElementLocallyValidComplexType(System.Xml.Schema.XmlSchemaComplexType)
extern "C"  void XsdValidatingReader_AssessElementLocallyValidComplexType_m_1543728420_0 (XsdValidatingReader_t1035926723_0 * __this, XmlSchemaComplexType_t_1084196614_0 * ___cType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessAttributeLocallyValid(System.Xml.Schema.XmlSchemaAttribute)
extern "C"  void XsdValidatingReader_AssessAttributeLocallyValid_m263583308_0 (XsdValidatingReader_t1035926723_0 * __this, XmlSchemaAttribute_t_1266675828_0 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessAttributeLocallyValidUse(System.Xml.Schema.XmlSchemaAttribute)
extern "C"  void XsdValidatingReader_AssessAttributeLocallyValidUse_m_1682853529_0 (XsdValidatingReader_t1035926723_0 * __this, XmlSchemaAttribute_t_1266675828_0 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessEndElementSchemaValidity()
extern "C"  void XsdValidatingReader_AssessEndElementSchemaValidity_m642289391_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndElementKeyConstraints()
extern "C"  void XsdValidatingReader_ValidateEndElementKeyConstraints_m_1980827131_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateKeySelectors()
extern "C"  void XsdValidatingReader_ValidateKeySelectors_m1926821698_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateKeyFields()
extern "C"  void XsdValidatingReader_ValidateKeyFields_m_773374515_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ProcessKeyEntry(Mono.Xml.Schema.XsdKeyEntry)
extern "C"  void XsdValidatingReader_ProcessKeyEntry_m1991273780_0 (XsdValidatingReader_t1035926723_0 * __this, XsdKeyEntry_t_1946880992_0 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdKeyTable Mono.Xml.Schema.XsdValidatingReader::CreateNewKeyTable(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  XsdKeyTable_t_1933432964_0 * XsdValidatingReader_CreateNewKeyTable_m_1124105710_0 (XsdValidatingReader_t1035926723_0 * __this, XmlSchemaIdentityConstraint_t_509331893_0 * ___ident, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateSimpleContentIdentity(System.Xml.Schema.XmlSchemaDatatype,System.String)
extern "C"  void XsdValidatingReader_ValidateSimpleContentIdentity_m_459554161_0 (XsdValidatingReader_t1035926723_0 * __this, XmlSchemaDatatype_t_52373772_0 * ___dt, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::EndIdentityValidation(Mono.Xml.Schema.XsdKeyTable)
extern "C"  void XsdValidatingReader_EndIdentityValidation_m881844136_0 (XsdValidatingReader_t1035926723_0 * __this, XsdKeyTable_t_1933432964_0 * ___seq, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::EndKeyrefValidation(Mono.Xml.Schema.XsdKeyTable,System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  void XsdValidatingReader_EndKeyrefValidation_m1248389250_0 (XsdValidatingReader_t1035926723_0 * __this, XsdKeyTable_t_1933432964_0 * ___seq, XmlSchemaIdentityConstraint_t_509331893_0 * ___targetIdent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::Close()
extern "C"  void XsdValidatingReader_Close_m_2120593469_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetAttribute(System.String)
extern "C"  String_t* XsdValidatingReader_GetAttribute_m2125397352_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName Mono.Xml.Schema.XsdValidatingReader::SplitQName(System.String)
extern "C"  XmlQualifiedName_t_2082775307_0 * XsdValidatingReader_SplitQName_m_46909514_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XsdValidatingReader_GetAttribute_m_1613983836_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetDefaultAttribute(System.String,System.String)
extern "C"  String_t* XsdValidatingReader_GetDefaultAttribute_m1040686751_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::FindDefaultAttribute(System.String,System.String)
extern "C"  int32_t XsdValidatingReader_FindDefaultAttribute_m_1332586987_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::HasLineInfo()
extern "C"  bool XsdValidatingReader_HasLineInfo_m255239375_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::LookupNamespace(System.String)
extern "C"  String_t* XsdValidatingReader_LookupNamespace_m169417459_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.Int32)
extern "C"  void XsdValidatingReader_MoveToAttribute_m1126478316_0 (XsdValidatingReader_t1035926723_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.String)
extern "C"  bool XsdValidatingReader_MoveToAttribute_m_602853697_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XsdValidatingReader_MoveToAttribute_m1922440379_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToDefaultAttribute(System.String,System.String)
extern "C"  bool XsdValidatingReader_MoveToDefaultAttribute_m_1039107672_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToElement()
extern "C"  bool XsdValidatingReader_MoveToElement_m1537009411_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToFirstAttribute()
extern "C"  bool XsdValidatingReader_MoveToFirstAttribute_m845544199_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToNextAttribute()
extern "C"  bool XsdValidatingReader_MoveToNextAttribute_m840484144_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema Mono.Xml.Schema.XsdValidatingReader::ReadExternalSchema(System.String)
extern "C"  XmlSchema_t_881538832_0 * XsdValidatingReader_ReadExternalSchema_m_1683686021_0 (XsdValidatingReader_t1035926723_0 * __this, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ExamineAdditionalSchema()
extern "C"  void XsdValidatingReader_ExamineAdditionalSchema_m_2112273100_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::Read()
extern "C"  bool XsdValidatingReader_Read_m224142853_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::ReadAttributeValue()
extern "C"  bool XsdValidatingReader_ReadAttributeValue_m564351514_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ResolveEntity()
extern "C"  void XsdValidatingReader_ResolveEntity_m_817473798_0 (XsdValidatingReader_t1035926723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
