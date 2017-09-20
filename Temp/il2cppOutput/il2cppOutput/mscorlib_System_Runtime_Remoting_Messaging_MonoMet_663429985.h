#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t_459661748_0;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t2143823668_0;
// System.String
struct String_t;
// System.Runtime.Remoting.Messaging.MethodCallDictionary
struct MethodCallDictionary_t_1888648071_0;
// System.Type[]
struct TypeU5BU5D_t_722972841_0;

#include "mscorlib_System_Object_887538054.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_CallTyp_263384996.h"

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct  MonoMethodMessage_t_663429985_0  : public Object_t
{
	// System.Reflection.MonoMethod System.Runtime.Remoting.Messaging.MonoMethodMessage::method
	MonoMethod_t * ___method_0;
	// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::args
	ObjectU5BU5D_t1774424924_0* ___args_1;
	// System.Byte[] System.Runtime.Remoting.Messaging.MonoMethodMessage::arg_types
	ByteU5BU5D_t_1238178395_0* ___arg_types_2;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::ctx
	LogicalCallContext_t_459661748_0 * ___ctx_3;
	// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::rval
	Object_t * ___rval_4;
	// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::exc
	Exception_t2143823668_0 * ___exc_5;
	// System.Runtime.Remoting.Messaging.CallType System.Runtime.Remoting.Messaging.MonoMethodMessage::call_type
	int32_t ___call_type_6;
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::uri
	String_t* ___uri_7;
	// System.Runtime.Remoting.Messaging.MethodCallDictionary System.Runtime.Remoting.Messaging.MonoMethodMessage::properties
	MethodCallDictionary_t_1888648071_0 * ___properties_8;
	// System.Type[] System.Runtime.Remoting.Messaging.MonoMethodMessage::methodSignature
	TypeU5BU5D_t_722972841_0* ___methodSignature_9;
};
