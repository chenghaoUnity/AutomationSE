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

// System.Xml.XmlResolver
struct XmlResolver_t_1510524520_0;
// System.Uri
struct Uri_t_27263938_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.XmlResolver::.ctor()
extern "C"  void XmlResolver__ctor_m2007000382_0 (XmlResolver_t_1510524520_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
extern "C"  Uri_t_27263938_0 * XmlResolver_ResolveUri_m1762389849_0 (XmlResolver_t_1510524520_0 * __this, Uri_t_27263938_0 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlResolver::EscapeRelativeUriBody(System.String)
extern "C"  String_t* XmlResolver_EscapeRelativeUriBody_m2055152168_0 (XmlResolver_t_1510524520_0 * __this, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
