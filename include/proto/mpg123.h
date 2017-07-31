#ifndef PROTO_MPG123_H
#define PROTO_MPG123_H

/*
**	$Id$
**
**	Prototype/inline/pragma header file combo
**
**	Copyright (c) 2010 Hyperion Entertainment CVBA.
**	All Rights Reserved.
*/

#ifndef LIBRARIES_MPG123_H
#include <libraries/mpg123.h>
#endif

/****************************************************************************/

#ifndef __NOLIBBASE__
 #ifndef __USE_BASETYPE__
  #if defined(__cplusplus) && defined(__USE_AMIGAOS_NAMESPACE__)
   extern struct AmigaOS::Library * Mpg123Base;
  #else
   extern struct Library * Mpg123Base;
  #endif
 #else
  #if defined(__cplusplus) && defined(__USE_AMIGAOS_NAMESPACE__)
   extern struct AmigaOS::Mpg123Base * Mpg123Base;
  #else
   extern struct Mpg123Base * Mpg123Base;
  #endif
 #endif /* __USE_BASETYPE__ */
#endif /* __NOLIBBASE__ */

/****************************************************************************/

#ifdef __amigaos4__
 #include <interfaces/mpg123.h>
 #ifdef __USE_INLINE__
  #include <inline4/mpg123.h>
 #endif /* __USE_INLINE__ */
 #ifndef CLIB_MPG123_PROTOS_H
  #define CLIB_MPG123_PROTOS_H 1
 #endif /* CLIB_MPG123_PROTOS_H */
 #ifndef __NOGLOBALIFACE__
  #if defined(__cplusplus) && defined(__USE_AMIGAOS_NAMESPACE__)
   extern struct AmigaOS::Mpg123IFace * IMpg123;
  #else
   extern struct Mpg123IFace * IMpg123;
  #endif
 #endif /* __NOGLOBALIFACE__ */
#else /* __amigaos4__ */
 #ifndef CLIB_MPG123_PROTOS_H
  #include <clib/mpg123_protos.h>
 #endif /* CLIB_MPG123_PROTOS_H */
 #if defined(__GNUC__)
  #ifndef __PPC__
   #include <inline/mpg123.h>
  #else /* __PPC__ */
   #include <ppcinline/mpg123.h>
  #endif /* __PPC__ */
 #elif defined(__VBCC__)
  #ifndef __PPC__
   #include <inline/mpg123_protos.h>
  #endif /* __PPC__ */
 #else /* __GNUC__ */
  #include <pragmas/mpg123_pragmas.h>
 #endif /* __GNUC__ */
#endif /* __amigaos4__ */

/****************************************************************************/

#endif /* PROTO_MPG123_H */
