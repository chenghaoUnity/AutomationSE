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

// System.Runtime.Remoting.ClientActivatedIdentity
struct ClientActivatedIdentity_t1401398154_0;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.MarshalByRefObject
struct MarshalByRefObject_t1484498776_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.ClientActivatedIdentity::.ctor(System.String,System.Type)
extern "C"  void ClientActivatedIdentity__ctor_m_660282833_0 (ClientActivatedIdentity_t1401398154_0 * __this, String_t* ___objectUri, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientActivatedIdentity::GetServerObject()
extern "C"  MarshalByRefObject_t1484498776_0 * ClientActivatedIdentity_GetServerObject_m1626506643_0 (ClientActivatedIdentity_t1401398154_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientActivatedIdentity::OnLifetimeExpired()
extern "C"  void ClientActivatedIdentity_OnLifetimeExpired_m1622186081_0 (ClientActivatedIdentity_t1401398154_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
