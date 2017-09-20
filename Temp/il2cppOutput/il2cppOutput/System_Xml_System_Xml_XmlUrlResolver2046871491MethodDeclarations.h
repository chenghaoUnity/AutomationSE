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

// System.Xml.XmlUrlResolver
struct XmlUrlResolver_t2046871491_0;
// System.Object
struct Object_t;
// System.Uri
struct Uri_t_27263938_0;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.XmlUrlResolver::.ctor()
extern "C"  void XmlUrlResolver__ctor_m_1567171603_0 (XmlUrlResolver_t2046871491_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlUrlResolver::GetEntity(System.Uri,System.String,System.Type)
extern "C"  Object_t * XmlUrlResolver_GetEntity_m203780859_0 (XmlUrlResolver_t2046871491_0 * __this, Uri_t_27263938_0 * ___absoluteUri, String_t* ___role, Type_t * ___ofObjectToReturn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Xml.XmlUrlResolver::ResolveUri(System.Uri,System.String)
extern "C"  Uri_t_27263938_0 * XmlUrlResolver_ResolveUri_m569585666_0 (XmlUrlResolver_t2046871491_0 * __this, Uri_t_27263938_0 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlUrlResolver::UnescapeRelativeUriBody(System.String)
extern "C"  String_t* XmlUrlResolver_UnescapeRelativeUriBody_m764219404_0 (XmlUrlResolver_t2046871491_0 * __this, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
