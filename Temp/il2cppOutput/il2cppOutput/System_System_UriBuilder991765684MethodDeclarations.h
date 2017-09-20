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

// System.UriBuilder
struct UriBuilder_t991765684_0;
// System.Uri
struct Uri_t_27263938_0;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.UriBuilder::.ctor(System.Uri)
extern "C"  void UriBuilder__ctor_m101958223_0 (UriBuilder_t991765684_0 * __this, Uri_t_27263938_0 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::set_Host(System.String)
extern "C"  void UriBuilder_set_Host_m_1131253419_0 (UriBuilder_t991765684_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.UriBuilder::get_Uri()
extern "C"  Uri_t_27263938_0 * UriBuilder_get_Uri_m1652017167_0 (UriBuilder_t991765684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriBuilder::Equals(System.Object)
extern "C"  bool UriBuilder_Equals_m2032023843_0 (UriBuilder_t991765684_0 * __this, Object_t * ___rparam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriBuilder::GetHashCode()
extern "C"  int32_t UriBuilder_GetHashCode_m615431547_0 (UriBuilder_t991765684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriBuilder::ToString()
extern "C"  String_t* UriBuilder_ToString_m1248051345_0 (UriBuilder_t991765684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
