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

// ConfigXmlTextReader
struct ConfigXmlTextReader_t_589695437_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1262698173_0;

#include "codegen/il2cpp-codegen.h"

// System.Void ConfigXmlTextReader::.ctor(System.IO.Stream,System.String)
extern "C"  void ConfigXmlTextReader__ctor_m1105518992_0 (ConfigXmlTextReader_t_589695437_0 * __this, Stream_t463444077_0 * ___s, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigXmlTextReader::.ctor(System.IO.TextReader,System.String)
extern "C"  void ConfigXmlTextReader__ctor_m_1653435072_0 (ConfigXmlTextReader_t_589695437_0 * __this, TextReader_t1262698173_0 * ___input, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ConfigXmlTextReader::get_Filename()
extern "C"  String_t* ConfigXmlTextReader_get_Filename_m527049076_0 (ConfigXmlTextReader_t_589695437_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
