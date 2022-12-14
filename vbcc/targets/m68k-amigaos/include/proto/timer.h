#ifndef _PROTO_TIMER_H
#define _PROTO_TIMER_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#if !defined(CLIB_TIMER_PROTOS_H) && !defined(__GNUC__)
#pragma stdargs-on
#include <clib/timer_protos.h>
#pragma stdargs-off
#endif

#ifndef __NOLIBBASE__
extern struct Device *TimerBase;
#endif

#ifdef __GNUC__
#ifdef __AROS__
#include <defines/timer.h>
#else
#include <inline/timer.h>
#endif
#elif defined(__VBCC__)
#ifndef _NO_INLINE
#include <inline/timer_protos.h>
#endif
#else
#include <pragma/timer_lib.h>
#endif

#endif	/*  _PROTO_TIMER_H  */
