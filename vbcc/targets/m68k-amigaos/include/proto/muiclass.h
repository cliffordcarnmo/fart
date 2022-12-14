#ifndef _PROTO_MUICLASS_H
#define _PROTO_MUICLASS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#if !defined(CLIB_MUICLASS_PROTOS_H) && !defined(__GNUC__)
#pragma stdargs-on
#include <clib/muiclass_protos.h>
#pragma stdargs-off
#endif

#ifndef __NOLIBBASE__
extern struct Library *MUIClassBase;
#endif

#ifdef __GNUC__
#ifdef __AROS__
#include <defines/muiclass.h>
#else
#include <inline/muiclass.h>
#endif
#elif defined(__VBCC__)
#ifndef _NO_INLINE
#include <inline/muiclass_protos.h>
#endif
#else
#include <pragma/muiclass_lib.h>
#endif

#endif	/*  _PROTO_MUICLASS_H  */
