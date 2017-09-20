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

// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t_1933432964_0;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t_509331893_0;
// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t_2034146166_0;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t335602256_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.Schema.XsdKeyTable::.ctor(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  void XsdKeyTable__ctor_m_1520630366_0 (XsdKeyTable_t_1933432964_0 * __this, XmlSchemaIdentityConstraint_t_509331893_0 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaIdentityConstraint Mono.Xml.Schema.XsdKeyTable::get_SourceSchemaIdentity()
extern "C"  XmlSchemaIdentityConstraint_t_509331893_0 * XsdKeyTable_get_SourceSchemaIdentity_m233246076_0 (XsdKeyTable_t_1933432964_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentitySelector Mono.Xml.Schema.XsdKeyTable::get_Selector()
extern "C"  XsdIdentitySelector_t_2034146166_0 * XsdKeyTable_get_Selector_m1159069408_0 (XsdKeyTable_t_1933432964_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyTable::Reset(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  void XsdKeyTable_Reset_m628396053_0 (XsdKeyTable_t_1933432964_0 * __this, XmlSchemaIdentityConstraint_t_509331893_0 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyTable::SelectorMatches(System.Collections.ArrayList,System.Int32)
extern "C"  XsdIdentityPath_t335602256_0 * XsdKeyTable_SelectorMatches_m_761021506_0 (XsdKeyTable_t_1933432964_0 * __this, ArrayList_t536890563_0 * ___qnameStack, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
