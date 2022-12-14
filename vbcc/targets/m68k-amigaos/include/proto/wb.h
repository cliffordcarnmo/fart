#ifndef _PROTO_WB_H
#define _PROTO_WB_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#if !defined(CLIB_WB_PROTOS_H) && !defined(__GNUC__)
#pragma stdargs-on
#include <clib/wb_protos.h>
#pragma stdargs-off
#endif

#ifndef __NOLIBBASE__
extern struct Library *WorkbenchBase;
#endif

#ifdef __GNUC__
#ifdef __AROS__
#include <defines/wb.h>
#else
#include <inline/wb.h>
#endif
#elif defined(__VBCC__)
#ifndef _NO_INLINE
#include <inline/wb_protos.h>
#endif
#else
#include <pragma/wb_lib.h>
#endif

#endif	/*  _PROTO_WB_H  */
