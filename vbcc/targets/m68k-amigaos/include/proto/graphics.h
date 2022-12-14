#ifndef _PROTO_GRAPHICS_H
#define _PROTO_GRAPHICS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#if !defined(CLIB_GRAPHICS_PROTOS_H) && !defined(__GNUC__)
#pragma stdargs-on
#include <clib/graphics_protos.h>
#pragma stdargs-off
#endif

#ifndef __NOLIBBASE__
extern struct GfxBase *GfxBase;
#endif

#ifdef __GNUC__
#ifdef __AROS__
#include <defines/graphics.h>
#else
#include <inline/graphics.h>
#endif
#elif defined(__VBCC__)
#ifndef _NO_INLINE
#include <inline/graphics_protos.h>
#endif
#else
#include <pragma/graphics_lib.h>
#endif

#endif	/*  _PROTO_GRAPHICS_H  */
