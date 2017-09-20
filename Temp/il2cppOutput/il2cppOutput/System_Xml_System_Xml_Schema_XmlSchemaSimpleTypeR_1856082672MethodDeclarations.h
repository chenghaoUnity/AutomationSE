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

// System.Xml.Schema.XmlSchemaSimpleTypeRestriction
struct XmlSchemaSimpleTypeRestriction_t_1856082672_0;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1845511452_0;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t_636905395_0;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1727784015_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.Xml.Schema.XmlSchemaFacet
struct XmlSchemaFacet_t601576103_0;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaTotalDigitsFacet
struct XmlSchemaTotalDigitsFacet_t1805025181_0;
// System.Xml.Schema.XmlSchemaFractionDigitsFacet
struct XmlSchemaFractionDigitsFacet_t2004247039_0;
// System.Xml.Schema.XmlSchemaLengthFacet
struct XmlSchemaLengthFacet_t125539169_0;
// System.Xml.Schema.XmlSchemaMaxLengthFacet
struct XmlSchemaMaxLengthFacet_t125654909_0;
// System.Xml.Schema.XmlSchemaMinLengthFacet
struct XmlSchemaMinLengthFacet_t782570959_0;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t2063649899_0;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t_929928242_0;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1816173011_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet688014383.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::.ctor()
extern "C"  void XmlSchemaSimpleTypeRestriction__ctor_m_497006842_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::.cctor()
extern "C"  void XmlSchemaSimpleTypeRestriction__cctor_m1290560871_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_BaseTypeName()
extern "C"  XmlQualifiedName_t_2082775307_0 * XmlSchemaSimpleTypeRestriction_get_BaseTypeName_m1100684618_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_BaseType()
extern "C"  XmlSchemaSimpleType_t1845511452_0 * XmlSchemaSimpleTypeRestriction_get_BaseType_m772514584_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_Facets()
extern "C"  XmlSchemaObjectCollection_t_636905395_0 * XmlSchemaSimpleTypeRestriction_get_Facets_m_1817585544_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaSimpleTypeRestriction_SetParent_m164797282_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, XmlSchemaObject_t1727784015_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeRestriction_Compile_m_920128928_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::IsAllowedFacet(System.Xml.Schema.XmlSchemaFacet)
extern "C"  bool XmlSchemaSimpleTypeRestriction_IsAllowedFacet_m1764378281_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, XmlSchemaFacet_t601576103_0 * ___xsf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeRestriction_Validate_m_1792261727_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateActualType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaSimpleTypeRestriction_ValidateActualType_m_151287289_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::GetActualType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  Object_t * XmlSchemaSimpleTypeRestriction_GetActualType_m953534181_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, bool ___validate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkTotalDigitsFacet(System.Xml.Schema.XmlSchemaTotalDigitsFacet,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkTotalDigitsFacet_m_1861312677_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, XmlSchemaTotalDigitsFacet_t1805025181_0 * ___totf, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkFractionDigitsFacet(System.Xml.Schema.XmlSchemaFractionDigitsFacet,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkFractionDigitsFacet_m449967183_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, XmlSchemaFractionDigitsFacet_t2004247039_0 * ___fracf, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMinMaxFacet(System.Xml.Schema.XmlSchemaFacet,System.Object&,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkMinMaxFacet_m_1257079347_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, XmlSchemaFacet_t601576103_0 * ___facet, Object_t ** ___baseFacet, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkLengthFacet(System.Xml.Schema.XmlSchemaLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkLengthFacet_m1926611573_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, XmlSchemaLengthFacet_t125539169_0 * ___lf, int32_t ___facetsDefined, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMaxLengthFacet(System.Xml.Schema.XmlSchemaMaxLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkMaxLengthFacet_m90842857_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, XmlSchemaMaxLengthFacet_t125654909_0 * ___maxlf, int32_t ___facetsDefined, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMinLengthFacet(System.Xml.Schema.XmlSchemaMinLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkMinLengthFacet_m1299209541_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, XmlSchemaMinLengthFacet_t782570959_0 * ___minlf, int32_t ___facetsDefined, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnySimpleType System.Xml.Schema.XmlSchemaSimpleTypeRestriction::getDatatype()
extern "C"  XsdAnySimpleType_t2063649899_0 * XmlSchemaSimpleTypeRestriction_getDatatype_m_1868968377_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateValueWithDatatype(System.String)
extern "C"  Object_t * XmlSchemaSimpleTypeRestriction_ValidateValueWithDatatype_m1620343502_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  bool XmlSchemaSimpleTypeRestriction_ValidateValueWithFacets_m1918122134_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, String_t* ___value, XmlNameTable_t_662182735_0 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateListValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  bool XmlSchemaSimpleTypeRestriction_ValidateListValueWithFacets_m_1424399464_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, String_t* ___value, XmlNameTable_t_662182735_0 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateListValueWithFacetsCore(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  bool XmlSchemaSimpleTypeRestriction_ValidateListValueWithFacetsCore_m_404057257_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, String_t* ___value, XmlNameTable_t_662182735_0 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateNonListValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  bool XmlSchemaSimpleTypeRestriction_ValidateNonListValueWithFacets_m_380190431_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, String_t* ___value, XmlNameTable_t_662182735_0 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateNonListValueWithFacetsCore(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  bool XmlSchemaSimpleTypeRestriction_ValidateNonListValueWithFacetsCore_m_440662944_0 (XmlSchemaSimpleTypeRestriction_t_1856082672_0 * __this, String_t* ___value, XmlNameTable_t_662182735_0 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeRestriction System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaSimpleTypeRestriction_t_1856082672_0 * XmlSchemaSimpleTypeRestriction_Read_m_141208674_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
