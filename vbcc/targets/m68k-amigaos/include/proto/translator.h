#ifndef _PROTO_TRANSLATOR_H
#define _PROTO_TRANSLATOR_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#if !defined(CLIB_TRANSLATOR_PROTOS_H) && !defined(__GNUC__)
#pragma stdargs-on
#include <clib/translator_protos.h>
#pragma stdargs-off
#endif

#ifndef __NOLIBBASE__
extern struct Library *TranslatorBase;
#endif

#ifdef __GNUC__
#ifdef __AROS__
#include <defines/translator.h>
#else
#include <inline/translator.h>
#endif
#elif defined(__VBCC__)
#ifndef _NO_INLINE
#include <inline/translator_protos.h>
#endif
#else
#include <pragma/translator_lib.h>
#endif

#endif	/*  _PROTO_TRANSLATOR_H  */
