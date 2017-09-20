#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t463444077_0;

#include "mscorlib_System_ValueType_103494864.h"
#include "mscorlib_System_Reflection_ResourceAttributes_1907497683.h"

// System.Reflection.Emit.MonoResource
struct  MonoResource_t676934724_0 
{
	// System.Byte[] System.Reflection.Emit.MonoResource::data
	ByteU5BU5D_t_1238178395_0* ___data_0;
	// System.String System.Reflection.Emit.MonoResource::name
	String_t* ___name_1;
	// System.String System.Reflection.Emit.MonoResource::filename
	String_t* ___filename_2;
	// System.Reflection.ResourceAttributes System.Reflection.Emit.MonoResource::attrs
	int32_t ___attrs_3;
	// System.Int32 System.Reflection.Emit.MonoResource::offset
	int32_t ___offset_4;
	// System.IO.Stream System.Reflection.Emit.MonoResource::stream
	Stream_t463444077_0 * ___stream_5;
};
