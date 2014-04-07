# 1 "<built-in>" 1
# 1 "expy.c" 1

/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "expy.y"

#if 0 /* expanded by -frewrite-includes */
#include <stdio.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/stdio.h" 1 3 4
/* Define ISO C stdio on top of C++ iostreams.
   Copyright (C) 1991-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.19 Input/output	<stdio.h>
 */

#ifndef _STDIO_H

#if !defined __need_FILE && !defined __need___FILE
# define _STDIO_H	1
#if 0 /* expanded by -frewrite-includes */
# include <features.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef	_FEATURES_H
#define	_FEATURES_H	1

/* These are defined by the user (or the compiler)
   to specify the desired environment:

   __STRICT_ANSI__	ISO Standard C.
   _ISOC99_SOURCE	Extensions to ISO C89 from ISO C99.
   _ISOC11_SOURCE	Extensions to ISO C99 from ISO C11.
   _POSIX_SOURCE	IEEE Std 1003.1.
   _POSIX_C_SOURCE	If ==1, like _POSIX_SOURCE; if >=2 add IEEE Std 1003.2;
			if >=199309L, add IEEE Std 1003.1b-1993;
			if >=199506L, add IEEE Std 1003.1c-1995;
			if >=200112L, all of IEEE 1003.1-2004
			if >=200809L, all of IEEE 1003.1-2008
   _XOPEN_SOURCE	Includes POSIX and XPG things.  Set to 500 if
			Single Unix conformance is wanted, to 600 for the
			sixth revision, to 700 for the seventh revision.
   _XOPEN_SOURCE_EXTENDED XPG things and X/Open Unix extensions.
   _LARGEFILE_SOURCE	Some more functions for correct standard I/O.
   _LARGEFILE64_SOURCE	Additional functionality from LFS for large files.
   _FILE_OFFSET_BITS=N	Select default filesystem interface.
   _BSD_SOURCE		ISO C, POSIX, and 4.3BSD things.
   _SVID_SOURCE		ISO C, POSIX, and SVID things.
   _ATFILE_SOURCE	Additional *at interfaces.
   _GNU_SOURCE		All of the above, plus GNU extensions.
   _REENTRANT		Select additionally reentrant object.
   _THREAD_SAFE		Same as _REENTRANT, often used by other systems.
   _FORTIFY_SOURCE	If set to numeric value > 0 additional security
			measures are defined, according to level.

   The `-ansi' switch to the GNU C compiler defines __STRICT_ANSI__.
   If none of these are defined, the default is to have _SVID_SOURCE,
   _BSD_SOURCE, and _POSIX_SOURCE set to one and _POSIX_C_SOURCE set to
   200112L.  If more than one of these are defined, they accumulate.
   For example __STRICT_ANSI__, _POSIX_SOURCE and _POSIX_C_SOURCE
   together give you ISO C, 1003.1, and 1003.2, but nothing else.

   These are defined by this file and are used by the
   header files to decide what to declare or define:

   __USE_ISOC11		Define ISO C11 things.
   __USE_ISOC99		Define ISO C99 things.
   __USE_ISOC95		Define ISO C90 AMD1 (C95) things.
   __USE_POSIX		Define IEEE Std 1003.1 things.
   __USE_POSIX2		Define IEEE Std 1003.2 things.
   __USE_POSIX199309	Define IEEE Std 1003.1, and .1b things.
   __USE_POSIX199506	Define IEEE Std 1003.1, .1b, .1c and .1i things.
   __USE_XOPEN		Define XPG things.
   __USE_XOPEN_EXTENDED	Define X/Open Unix things.
   __USE_UNIX98		Define Single Unix V2 things.
   __USE_XOPEN2K        Define XPG6 things.
   __USE_XOPEN2KXSI     Define XPG6 XSI things.
   __USE_XOPEN2K8       Define XPG7 things.
   __USE_XOPEN2K8XSI    Define XPG7 XSI things.
   __USE_LARGEFILE	Define correct standard I/O things.
   __USE_LARGEFILE64	Define LFS things with separate names.
   __USE_FILE_OFFSET64	Define 64bit interface as default.
   __USE_BSD		Define 4.3BSD things.
   __USE_SVID		Define SVID things.
   __USE_MISC		Define things common to BSD and System V Unix.
   __USE_ATFILE		Define *at interfaces and AT_* constants for them.
   __USE_GNU		Define GNU extensions.
   __USE_REENTRANT	Define reentrant/thread-safe *_r functions.
   __USE_FORTIFY_LEVEL	Additional security measures used, according to level.
   __FAVOR_BSD		Favor 4.3BSD things in cases of conflict.

   The macros `__GNU_LIBRARY__', `__GLIBC__', and `__GLIBC_MINOR__' are
   defined by this file unconditionally.  `__GNU_LIBRARY__' is provided
   only for compatibility.  All new code should use the other symbols
   to test for features.

   All macros listed above as possibly being defined by this file are
   explicitly undefined if they are not explicitly defined.
   Feature-test macros that are not defined by the user or compiler
   but are implied by the other feature-test macros defined (or by the
   lack of any definitions) are defined by the file.  */


/* Undefine everything, so we get a clean slate.  */
#undef	__USE_ISOC11
#undef	__USE_ISOC99
#undef	__USE_ISOC95
#undef	__USE_ISOCXX11
#undef	__USE_POSIX
#undef	__USE_POSIX2
#undef	__USE_POSIX199309
#undef	__USE_POSIX199506
#undef	__USE_XOPEN
#undef	__USE_XOPEN_EXTENDED
#undef	__USE_UNIX98
#undef	__USE_XOPEN2K
#undef	__USE_XOPEN2KXSI
#undef	__USE_XOPEN2K8
#undef	__USE_XOPEN2K8XSI
#undef	__USE_LARGEFILE
#undef	__USE_LARGEFILE64
#undef	__USE_FILE_OFFSET64
#undef	__USE_BSD
#undef	__USE_SVID
#undef	__USE_MISC
#undef	__USE_ATFILE
#undef	__USE_GNU
#undef	__USE_REENTRANT
#undef	__USE_FORTIFY_LEVEL
#undef	__FAVOR_BSD
#undef	__KERNEL_STRICT_NAMES

/* Suppress kernel-name space pollution unless user expressedly asks
   for it.  */
#ifndef _LOOSE_KERNEL_NAMES
# define __KERNEL_STRICT_NAMES
#endif
# 131 "/usr/include/features.h" 3 4

/* Convenience macros to test the versions of glibc and gcc.
   Use them like this:
   #if __GNUC_PREREQ (2,8)
   ... code requiring gcc 2.8 or later ...
   #endif
   Note - they won't work for gcc1 or glibc1, since the _MINOR macros
   were not defined then.  */
#if defined __GNUC__ && defined __GNUC_MINOR__
# define __GNUC_PREREQ(maj, min) \
	((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#else
# 143 "/usr/include/features.h" 3 4
# define __GNUC_PREREQ(maj, min) 0
#endif
# 145 "/usr/include/features.h" 3 4


/* If _BSD_SOURCE was defined by the user, favor BSD over POSIX.  */
#if defined _BSD_SOURCE && \
    !(defined _POSIX_SOURCE || defined _POSIX_C_SOURCE || \
      defined _XOPEN_SOURCE || defined _GNU_SOURCE || defined _SVID_SOURCE)
# define __FAVOR_BSD	1
#endif
# 153 "/usr/include/features.h" 3 4

/* If _GNU_SOURCE was defined by the user, turn on all the other features.  */
#ifdef _GNU_SOURCE
# undef  _ISOC95_SOURCE
# define _ISOC95_SOURCE	1
# undef  _ISOC99_SOURCE
# define _ISOC99_SOURCE	1
# undef  _ISOC11_SOURCE
# define _ISOC11_SOURCE	1
# undef  _POSIX_SOURCE
# define _POSIX_SOURCE	1
# undef  _POSIX_C_SOURCE
# define _POSIX_C_SOURCE	200809L
# undef  _XOPEN_SOURCE
# define _XOPEN_SOURCE	700
# undef  _XOPEN_SOURCE_EXTENDED
# define _XOPEN_SOURCE_EXTENDED	1
# undef	 _LARGEFILE64_SOURCE
# define _LARGEFILE64_SOURCE	1
# undef  _BSD_SOURCE
# define _BSD_SOURCE	1
# undef  _SVID_SOURCE
# define _SVID_SOURCE	1
# undef  _ATFILE_SOURCE
# define _ATFILE_SOURCE	1
#endif
# 179 "/usr/include/features.h" 3 4

/* If nothing (other than _GNU_SOURCE) is defined,
   define _BSD_SOURCE and _SVID_SOURCE.  */
#if (!defined __STRICT_ANSI__ && !defined _ISOC99_SOURCE && \
     !defined _POSIX_SOURCE && !defined _POSIX_C_SOURCE && \
     !defined _XOPEN_SOURCE && !defined _BSD_SOURCE && !defined _SVID_SOURCE)
# define _BSD_SOURCE	1
# define _SVID_SOURCE	1
#endif
# 188 "/usr/include/features.h" 3 4

/* This is to enable the ISO C11 extension.  */
#if (defined _ISOC11_SOURCE \
     || (defined __STDC_VERSION__ && __STDC_VERSION__ >= 201112L))
# define __USE_ISOC11	1
#endif
# 194 "/usr/include/features.h" 3 4

/* This is to enable the ISO C99 extension.  */
#if (defined _ISOC99_SOURCE || defined _ISOC11_SOURCE \
     || (defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L))
# define __USE_ISOC99	1
#endif
# 200 "/usr/include/features.h" 3 4

/* This is to enable the ISO C90 Amendment 1:1995 extension.  */
#if (defined _ISOC99_SOURCE || defined _ISOC11_SOURCE \
     || (defined __STDC_VERSION__ && __STDC_VERSION__ >= 199409L))
# define __USE_ISOC95	1
#endif
# 206 "/usr/include/features.h" 3 4

/* This is to enable compatibility for ISO C++11.

   So far g++ does not provide a macro.  Check the temporary macro for
   now, too.  */
#if ((defined __cplusplus && __cplusplus >= 201103L)			      \
     || defined __GXX_EXPERIMENTAL_CXX0X__)
# define __USE_ISOCXX11	1
#endif
# 215 "/usr/include/features.h" 3 4

/* If none of the ANSI/POSIX macros are defined, use POSIX.1 and POSIX.2
   (and IEEE Std 1003.1b-1993 unless _XOPEN_SOURCE is defined).  */
#if ((!defined __STRICT_ANSI__ || (_XOPEN_SOURCE - 0) >= 500) && \
     !defined _POSIX_SOURCE && !defined _POSIX_C_SOURCE)
# define _POSIX_SOURCE	1
# if defined _XOPEN_SOURCE && (_XOPEN_SOURCE - 0) < 500
#  define _POSIX_C_SOURCE	2
# elif defined _XOPEN_SOURCE && (_XOPEN_SOURCE - 0) < 600
# 224 "/usr/include/features.h" 3 4
#  define _POSIX_C_SOURCE	199506L
# elif defined _XOPEN_SOURCE && (_XOPEN_SOURCE - 0) < 700
# 226 "/usr/include/features.h" 3 4
#  define _POSIX_C_SOURCE	200112L
# else
# 228 "/usr/include/features.h" 3 4
#  define _POSIX_C_SOURCE	200809L
# endif
# 230 "/usr/include/features.h" 3 4
# define __USE_POSIX_IMPLICITLY	1
#endif
# 232 "/usr/include/features.h" 3 4

#if defined _POSIX_SOURCE || _POSIX_C_SOURCE >= 1 || defined _XOPEN_SOURCE
# define __USE_POSIX	1
#endif
# 236 "/usr/include/features.h" 3 4

#if defined _POSIX_C_SOURCE && _POSIX_C_SOURCE >= 2 || defined _XOPEN_SOURCE
# define __USE_POSIX2	1
#endif
# 240 "/usr/include/features.h" 3 4

#if (_POSIX_C_SOURCE - 0) >= 199309L
# define __USE_POSIX199309	1
#endif
# 244 "/usr/include/features.h" 3 4

#if (_POSIX_C_SOURCE - 0) >= 199506L
# define __USE_POSIX199506	1
#endif
# 248 "/usr/include/features.h" 3 4

#if (_POSIX_C_SOURCE - 0) >= 200112L
# define __USE_XOPEN2K		1
# undef __USE_ISOC95
# define __USE_ISOC95		1
# undef __USE_ISOC99
# define __USE_ISOC99		1
#endif
# 256 "/usr/include/features.h" 3 4

#if (_POSIX_C_SOURCE - 0) >= 200809L
# define __USE_XOPEN2K8		1
# undef  _ATFILE_SOURCE
# define _ATFILE_SOURCE	1
#endif
# 262 "/usr/include/features.h" 3 4

#ifdef	_XOPEN_SOURCE
# define __USE_XOPEN	1
# if (_XOPEN_SOURCE - 0) >= 500
#  define __USE_XOPEN_EXTENDED	1
#  define __USE_UNIX98	1
#  undef _LARGEFILE_SOURCE
#  define _LARGEFILE_SOURCE	1
#  if (_XOPEN_SOURCE - 0) >= 600
#   if (_XOPEN_SOURCE - 0) >= 700
#    define __USE_XOPEN2K8	1
#    define __USE_XOPEN2K8XSI	1
#   endif
# 275 "/usr/include/features.h" 3 4
#   define __USE_XOPEN2K	1
#   define __USE_XOPEN2KXSI	1
#   undef __USE_ISOC95
#   define __USE_ISOC95		1
#   undef __USE_ISOC99
#   define __USE_ISOC99		1
#  endif
# 282 "/usr/include/features.h" 3 4
# else
# 283 "/usr/include/features.h" 3 4
#  ifdef _XOPEN_SOURCE_EXTENDED
#   define __USE_XOPEN_EXTENDED	1
#  endif
# 286 "/usr/include/features.h" 3 4
# endif
# 287 "/usr/include/features.h" 3 4
#endif
# 288 "/usr/include/features.h" 3 4

#ifdef _LARGEFILE_SOURCE
# define __USE_LARGEFILE	1
#endif
# 292 "/usr/include/features.h" 3 4

#ifdef _LARGEFILE64_SOURCE
# define __USE_LARGEFILE64	1
#endif
# 296 "/usr/include/features.h" 3 4

#if defined _FILE_OFFSET_BITS && _FILE_OFFSET_BITS == 64
# define __USE_FILE_OFFSET64	1
#endif
# 300 "/usr/include/features.h" 3 4

#if defined _BSD_SOURCE || defined _SVID_SOURCE
# define __USE_MISC	1
#endif
# 304 "/usr/include/features.h" 3 4

#ifdef	_BSD_SOURCE
# define __USE_BSD	1
#endif
# 308 "/usr/include/features.h" 3 4

#ifdef	_SVID_SOURCE
# define __USE_SVID	1
#endif
# 312 "/usr/include/features.h" 3 4

#ifdef	_ATFILE_SOURCE
# define __USE_ATFILE	1
#endif
# 316 "/usr/include/features.h" 3 4

#ifdef	_GNU_SOURCE
# define __USE_GNU	1
#endif
# 320 "/usr/include/features.h" 3 4

#if defined _REENTRANT || defined _THREAD_SAFE
# define __USE_REENTRANT	1
#endif
# 324 "/usr/include/features.h" 3 4

#if defined _FORTIFY_SOURCE && _FORTIFY_SOURCE > 0 \
    && __GNUC_PREREQ (4, 1) && defined __OPTIMIZE__ && __OPTIMIZE__ > 0
# if _FORTIFY_SOURCE > 1
#  define __USE_FORTIFY_LEVEL 2
# else
# 330 "/usr/include/features.h" 3 4
#  define __USE_FORTIFY_LEVEL 1
# endif
# 332 "/usr/include/features.h" 3 4
#else
# 333 "/usr/include/features.h" 3 4
# define __USE_FORTIFY_LEVEL 0
#endif
# 335 "/usr/include/features.h" 3 4

/* Get definitions of __STDC_* predefined macros, if the compiler has
   not preincluded this header automatically.  */
#if 0 /* expanded by -frewrite-includes */
#include <stdc-predef.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/stdc-predef.h" 1 3 4
/* Copyright (C) 1991-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef	_STDC_PREDEF_H
#define	_STDC_PREDEF_H	1

/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */

/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */

#ifdef __GCC_IEC_559
# if __GCC_IEC_559 > 0
#  define __STDC_IEC_559__		1
# endif
# 40 "/usr/include/stdc-predef.h" 3 4
#elif defined (__arm__)
# 41 "/usr/include/stdc-predef.h" 3 4
# if defined (__VFP_FP__) && !defined (__SOFTFP__)
#  define __STDC_IEC_559__		1
# endif
# 44 "/usr/include/stdc-predef.h" 3 4
#else
# 45 "/usr/include/stdc-predef.h" 3 4
# define __STDC_IEC_559__		1
#endif
# 47 "/usr/include/stdc-predef.h" 3 4

#ifdef __GCC_IEC_559_COMPLEX
# if __GCC_IEC_559_COMPLEX > 0
#  define __STDC_IEC_559_COMPLEX__	1
# endif
# 52 "/usr/include/stdc-predef.h" 3 4
#elif defined (__arm__)
# 53 "/usr/include/stdc-predef.h" 3 4
# if defined (__VFP_FP__) && !defined (__SOFTFP__)
#  define __STDC_IEC_559_COMPLEX__	1
# endif
# 56 "/usr/include/stdc-predef.h" 3 4
#else
# 57 "/usr/include/stdc-predef.h" 3 4
# define __STDC_IEC_559_COMPLEX__	1
#endif
# 59 "/usr/include/stdc-predef.h" 3 4

/* wchar_t uses ISO/IEC 10646 (2nd ed., published 2011-03-15) /
   Unicode 6.0.  */
#define __STDC_ISO_10646__		201103L

/* We do not support C11 <threads.h>.  */
#define __STDC_NO_THREADS__		1

#endif
# 68 "/usr/include/stdc-predef.h" 3 4
# 339 "/usr/include/features.h" 2 3 4

/* This macro indicates that the installed library is the GNU C Library.
   For historic reasons the value now is 6 and this will stay from now
   on.  The use of this variable is deprecated.  Use __GLIBC__ and
   __GLIBC_MINOR__ now (see below) when you want to test for a specific
   GNU C library version and use the values in <gnu/lib-names.h> to get
   the sonames of the shared libraries.  */
#undef  __GNU_LIBRARY__
#define __GNU_LIBRARY__ 6

/* Major and minor version number of the GNU C library package.  Use
   these macros to test for features in specific releases.  */
#define	__GLIBC__	2
#define	__GLIBC_MINOR__	18

#define __GLIBC_PREREQ(maj, min) \
	((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))

/* This is here only because every header file already includes this one.  */
#ifndef __ASSEMBLER__
# ifndef _SYS_CDEFS_H
#if 0 /* expanded by -frewrite-includes */
#  include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
/* Copyright (C) 1992-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef	_SYS_CDEFS_H
#define	_SYS_CDEFS_H	1

/* We are almost always included from features.h. */
#ifndef _FEATURES_H
#if 0 /* expanded by -frewrite-includes */
# include <features.h>
#endif /* expanded by -frewrite-includes */
# 24 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 25 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* The GNU libc does not support any K&R compilers or the traditional mode
   of ISO C compilers anymore.  Check for some of the combinations not
   anymore supported.  */
#if defined __GNUC__ && !defined __STDC__
# error "You need a ISO C conforming compiler to use the glibc headers"
#endif
# 32 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* Some user header file might have defined this before.  */
#undef	__P
#undef	__PMT

#ifdef __GNUC__

/* All functions, except those with callbacks or those that
   synchronize memory, are leaf functions.  */
# if __GNUC_PREREQ (4, 6) && !defined _LIBC
#  define __LEAF , __leaf__
#  define __LEAF_ATTR __attribute__ ((__leaf__))
# else
# 45 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#  define __LEAF
#  define __LEAF_ATTR
# endif
# 48 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* GCC can always grok prototypes.  For C++ programs we add throw()
   to help it optimize the function calls.  But this works only with
   gcc 2.8.x and egcs.  For gcc 3.2 and up we even mark C functions
   as non-throwing using a function attribute since programs can use
   the -fexceptions options for C code as well.  */
# if !defined __cplusplus && __GNUC_PREREQ (3, 3)
#  define __THROW	__attribute__ ((__nothrow__ __LEAF))
#  define __THROWNL	__attribute__ ((__nothrow__))
#  define __NTH(fct)	__attribute__ ((__nothrow__ __LEAF)) fct
# else
# 59 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#  if defined __cplusplus && __GNUC_PREREQ (2,8)
#   define __THROW	throw ()
#   define __THROWNL	throw ()
#   define __NTH(fct)	__LEAF_ATTR fct throw ()
#  else
# 64 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#   define __THROW
#   define __THROWNL
#   define __NTH(fct)	fct
#  endif
# 68 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# endif
# 69 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

#else	/* Not GCC.  */
# 71 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

# define __inline		/* No inline functions.  */

# define __THROW
# define __THROWNL
# define __NTH(fct)	fct

#endif	/* GCC.  */
# 79 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* These two macros are not used in glibc anymore.  They are kept here
   only because some other projects expect the macros to be defined.  */
#define __P(args)	args
#define __PMT(args)	args

/* For these things, GCC behaves the ANSI way normally,
   and the non-ANSI way under -traditional.  */

#define __CONCAT(x,y)	x ## y
#define __STRING(x)	#x

/* This is not a typedef so `const __ptr_t' does the right thing.  */
#define __ptr_t void *
#define __long_double_t  long double


/* C++ needs to know that types and declarations are C, not C++.  */
#ifdef	__cplusplus
# define __BEGIN_DECLS	extern "C" {
# define __END_DECLS	}
#else
# 101 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __BEGIN_DECLS
# define __END_DECLS
#endif
# 104 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4


/* The standard library needs the functions from the ISO C90 standard
   in the std namespace.  At the same time we want to be safe for
   future changes and we include the ISO C99 code in the non-standard
   namespace __c99.  The C++ wrapper header take case of adding the
   definitions to the global namespace.  */
#if defined __cplusplus && defined _GLIBCPP_USE_NAMESPACES
# define __BEGIN_NAMESPACE_STD	namespace std {
# define __END_NAMESPACE_STD	}
# define __USING_NAMESPACE_STD(name) using std::name;
# define __BEGIN_NAMESPACE_C99	namespace __c99 {
# define __END_NAMESPACE_C99	}
# define __USING_NAMESPACE_C99(name) using __c99::name;
#else
# 119 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* For compatibility we do not add the declarations into any
   namespace.  They will end up in the global namespace which is what
   old code expects.  */
# define __BEGIN_NAMESPACE_STD
# define __END_NAMESPACE_STD
# define __USING_NAMESPACE_STD(name)
# define __BEGIN_NAMESPACE_C99
# define __END_NAMESPACE_C99
# define __USING_NAMESPACE_C99(name)
#endif
# 129 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4


/* Fortify support.  */
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define __fortify_function __extern_always_inline __attribute_artificial__

#if __GNUC_PREREQ (4,3)
# define __warndecl(name, msg) \
  extern void name (void) __attribute__((__warning__ (msg)))
# define __warnattr(msg) __attribute__((__warning__ (msg)))
# define __errordecl(name, msg) \
  extern void name (void) __attribute__((__error__ (msg)))
#else
# 143 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __warndecl(name, msg) extern void name (void)
# define __warnattr(msg)
# define __errordecl(name, msg) extern void name (void)
#endif
# 147 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* Support for flexible arrays.  */
#if __GNUC_PREREQ (2,97)
/* GCC 2.97 supports C99 flexible array members.  */
# define __flexarr	[]
#else
# 153 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# ifdef __GNUC__
#  define __flexarr	[0]
# else
# 156 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#  if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L
#   define __flexarr	[]
#  else
# 159 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Some other non-C99 compiler.  Approximate with [1].  */
#   define __flexarr	[1]
#  endif
# 162 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# endif
# 163 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 164 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4


/* __asm__ ("xyz") is used throughout the headers to rename functions
   at the assembly language level.  This is wrapped by the __REDIRECT
   macro, in order to support compilers that can do this some other
   way.  When compilers don't support asm-names at all, we have to do
   preprocessor tricks instead (which don't have exactly the right
   semantics, but it's the best we can do).

   Example:
   int __REDIRECT(setpgrp, (__pid_t pid, __pid_t pgrp), setpgid); */

#if defined __GNUC__ && __GNUC__ >= 2

# define __REDIRECT(name, proto, alias) name proto __asm__ (__ASMNAME (#alias))
# ifdef __cplusplus
#  define __REDIRECT_NTH(name, proto, alias) \
     name proto __THROW __asm__ (__ASMNAME (#alias))
#  define __REDIRECT_NTHNL(name, proto, alias) \
     name proto __THROWNL __asm__ (__ASMNAME (#alias))
# else
# 185 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#  define __REDIRECT_NTH(name, proto, alias) \
     name proto __asm__ (__ASMNAME (#alias)) __THROW
#  define __REDIRECT_NTHNL(name, proto, alias) \
     name proto __asm__ (__ASMNAME (#alias)) __THROWNL
# endif
# 190 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __ASMNAME(cname)  __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
# define __ASMNAME2(prefix, cname) __STRING (prefix) cname

/*
#elif __SOME_OTHER_COMPILER__

# define __REDIRECT(name, proto, alias) name proto; \
	_Pragma("let " #name " = " #alias)
*/
#endif
# 200 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* GCC has various useful declarations that can be made with the
   `__attribute__' syntax.  All of the ways we use this do fine if
   they are omitted for compilers that don't understand it. */
#if !defined __GNUC__ || __GNUC__ < 2
# define __attribute__(xyz)	/* Ignore */
#endif
# 207 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* At some point during the gcc 2.96 development the `malloc' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
#if __GNUC_PREREQ (2,96)
# define __attribute_malloc__ __attribute__ ((__malloc__))
#else
# 214 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_malloc__ /* Ignore */
#endif
# 216 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* Tell the compiler which arguments to an allocation function
   indicate the size of the allocation.  */
#if __GNUC_PREREQ (4, 3)
# define __attribute_alloc_size__(params) \
  __attribute__ ((__alloc_size__ params))
#else
# 223 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_alloc_size__(params) /* Ignore.  */
#endif
# 225 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* At some point during the gcc 2.96 development the `pure' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
#if __GNUC_PREREQ (2,96)
# define __attribute_pure__ __attribute__ ((__pure__))
#else
# 232 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_pure__ /* Ignore */
#endif
# 234 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* This declaration tells the compiler that the value is constant.  */
#if __GNUC_PREREQ (2,5)
# define __attribute_const__ __attribute__ ((__const__))
#else
# 239 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_const__ /* Ignore */
#endif
# 241 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* At some point during the gcc 3.1 development the `used' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
#if __GNUC_PREREQ (3,1)
# define __attribute_used__ __attribute__ ((__used__))
# define __attribute_noinline__ __attribute__ ((__noinline__))
#else
# 249 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_used__ __attribute__ ((__unused__))
# define __attribute_noinline__ /* Ignore */
#endif
# 252 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* gcc allows marking deprecated functions.  */
#if __GNUC_PREREQ (3,2)
# define __attribute_deprecated__ __attribute__ ((__deprecated__))
#else
# 257 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_deprecated__ /* Ignore */
#endif
# 259 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* At some point during the gcc 2.8 development the `format_arg' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.
   If several `format_arg' attributes are given for the same function, in
   gcc-3.0 and older, all but the last one are ignored.  In newer gccs,
   all designated arguments are considered.  */
#if __GNUC_PREREQ (2,8)
# define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#else
# 269 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_format_arg__(x) /* Ignore */
#endif
# 271 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* At some point during the gcc 2.97 development the `strfmon' format
   attribute for functions was introduced.  We don't want to use it
   unconditionally (although this would be possible) since it
   generates warnings.  */
#if __GNUC_PREREQ (2,97)
# define __attribute_format_strfmon__(a,b) \
  __attribute__ ((__format__ (__strfmon__, a, b)))
#else
# 280 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_format_strfmon__(a,b) /* Ignore */
#endif
# 282 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* The nonull function attribute allows to mark pointer parameters which
   must not be NULL.  */
#if __GNUC_PREREQ (3,3)
# define __nonnull(params) __attribute__ ((__nonnull__ params))
#else
# 288 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __nonnull(params)
#endif
# 290 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* If fortification mode, we warn about unused results of certain
   function calls which can lead to problems.  */
#if __GNUC_PREREQ (3,4)
# define __attribute_warn_unused_result__ \
   __attribute__ ((__warn_unused_result__))
# if __USE_FORTIFY_LEVEL > 0
#  define __wur __attribute_warn_unused_result__
# endif
# 299 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#else
# 300 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_warn_unused_result__ /* empty */
#endif
# 302 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#ifndef __wur
# define __wur /* Ignore */
#endif
# 305 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* Forces a function to be always inlined.  */
#if __GNUC_PREREQ (3,2)
# define __always_inline __inline __attribute__ ((__always_inline__))
#else
# 310 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __always_inline __inline
#endif
# 312 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* Associate error messages with the source location of the call site rather
   than with the source location inside the function.  */
#if __GNUC_PREREQ (4,3)
# define __attribute_artificial__ __attribute__ ((__artificial__))
#else
# 318 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_artificial__ /* Ignore */
#endif
# 320 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

#ifdef __GNUC__
/* One of these will be defined if the __gnu_inline__ attribute is
   available.  In C++, __GNUC_GNU_INLINE__ will be defined even though
   __inline does not use the GNU inlining rules.  If neither macro is
   defined, this version of GCC only supports GNU inline semantics. */
# if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
#  define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#  define __extern_always_inline \
  extern __always_inline __attribute__ ((__gnu_inline__))
# else
# 331 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#  define __extern_inline extern __inline
#  define __extern_always_inline extern __always_inline
# endif
# 334 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#else /* Not GCC.  */
# 335 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __extern_inline  /* Ignore */
# define __extern_always_inline /* Ignore */
#endif
# 338 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* GCC 4.3 and above allow passing all anonymous arguments of an
   __extern_always_inline function to some other vararg function.  */
#if __GNUC_PREREQ (4,3)
# define __va_arg_pack() __builtin_va_arg_pack ()
# define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#endif
# 345 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* It is possible to compile containing GCC extensions even if GCC is
   run in pedantic mode if the uses are carefully marked using the
   `__extension__' keyword.  But this is not generally available before
   version 2.8.  */
#if !__GNUC_PREREQ (2,8)
# define __extension__		/* Ignore */
#endif
# 353 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* __restrict is known in EGCS 1.2 and above. */
#if !__GNUC_PREREQ (2,92)
# define __restrict	/* Ignore */
#endif
# 358 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* ISO C99 also allows to declare arrays as non-overlapping.  The syntax is
     array_name[restrict]
   GCC 3.1 supports this.  */
#if __GNUC_PREREQ (3,1) && !defined __GNUG__
# define __restrict_arr	__restrict
#else
# 365 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# ifdef __GNUC__
#  define __restrict_arr	/* Not supported in old GCC.  */
# else
# 368 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#  if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L
#   define __restrict_arr	restrict
#  else
# 371 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Some other non-C99 compiler.  */
#   define __restrict_arr	/* Not supported.  */
#  endif
# 374 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# endif
# 375 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 376 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

#if __GNUC__ >= 3
# define __glibc_unlikely(cond)	__builtin_expect ((cond), 0)
# define __glibc_likely(cond)	__builtin_expect ((cond), 1)
#else
# 381 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __glibc_unlikely(cond)	(cond)
# define __glibc_likely(cond)	(cond)
#endif
# 384 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

#if 0 /* expanded by -frewrite-includes */
#include <bits/wordsize.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */

#if defined __x86_64__ && !defined __ILP32__
# define __WORDSIZE	64
#else
# 6 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE	32
#endif
# 8 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4

#ifdef __x86_64__
# define __WORDSIZE_TIME64_COMPAT32	1
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# define __SYSCALL_WORDSIZE		64
#endif
# 14 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# 386 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4

#if defined __LONG_DOUBLE_MATH_OPTIONAL && defined __NO_LONG_DOUBLE_MATH
# define __LDBL_COMPAT 1
# ifdef __REDIRECT
#  define __LDBL_REDIR1(name, proto, alias) __REDIRECT (name, proto, alias)
#  define __LDBL_REDIR(name, proto) \
  __LDBL_REDIR1 (name, proto, __nldbl_##name)
#  define __LDBL_REDIR1_NTH(name, proto, alias) __REDIRECT_NTH (name, proto, alias)
#  define __LDBL_REDIR_NTH(name, proto) \
  __LDBL_REDIR1_NTH (name, proto, __nldbl_##name)
#  define __LDBL_REDIR1_DECL(name, alias) \
  extern __typeof (name) name __asm (__ASMNAME (#alias));
#  define __LDBL_REDIR_DECL(name) \
  extern __typeof (name) name __asm (__ASMNAME ("__nldbl_" #name));
#  define __REDIRECT_LDBL(name, proto, alias) \
  __LDBL_REDIR1 (name, proto, __nldbl_##alias)
#  define __REDIRECT_NTH_LDBL(name, proto, alias) \
  __LDBL_REDIR1_NTH (name, proto, __nldbl_##alias)
# endif
# 405 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 406 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#if !defined __LDBL_COMPAT || !defined __REDIRECT
# define __LDBL_REDIR1(name, proto, alias) name proto
# define __LDBL_REDIR(name, proto) name proto
# define __LDBL_REDIR1_NTH(name, proto, alias) name proto __THROW
# define __LDBL_REDIR_NTH(name, proto) name proto __THROW
# define __LDBL_REDIR_DECL(name)
# ifdef __REDIRECT
#  define __REDIRECT_LDBL(name, proto, alias) __REDIRECT (name, proto, alias)
#  define __REDIRECT_NTH_LDBL(name, proto, alias) \
  __REDIRECT_NTH (name, proto, alias)
# endif
# 417 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 418 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

#endif	 /* sys/cdefs.h */
# 420 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 361 "/usr/include/features.h" 2 3 4
# endif
# 362 "/usr/include/features.h" 3 4

/* If we don't have __REDIRECT, prototypes will be missing if
   __USE_FILE_OFFSET64 but not __USE_LARGEFILE[64]. */
# if defined __USE_FILE_OFFSET64 && !defined __REDIRECT
#  define __USE_LARGEFILE	1
#  define __USE_LARGEFILE64	1
# endif
# 369 "/usr/include/features.h" 3 4

#endif	/* !ASSEMBLER */
# 371 "/usr/include/features.h" 3 4

/* Decide whether we can define 'extern inline' functions in headers.  */
#if __GNUC_PREREQ (2, 7) && defined __OPTIMIZE__ \
    && !defined __OPTIMIZE_SIZE__ && !defined __NO_INLINE__ \
    && defined __extern_inline
# define __USE_EXTERN_INLINES	1
#endif
# 378 "/usr/include/features.h" 3 4


/* This is here only because every header file already includes this one.
   Get the definitions of all the appropriate `__stub_FUNCTION' symbols.
   <gnu/stubs.h> contains `#define __stub_FUNCTION' when FUNCTION is a stub
   that will always return failure (and set errno to ENOSYS).  */
#if 0 /* expanded by -frewrite-includes */
#include <gnu/stubs.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
/* This file is automatically generated.
   This file selects the right generated file of `__stub_FUNCTION' macros
   based on the architecture being compiled for.  */


#if !defined __x86_64__
#if 0 /* expanded by -frewrite-includes */
# include <gnu/stubs-32.h>
#endif /* expanded by -frewrite-includes */
# 8 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
#endif
# 9 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
#if defined __x86_64__ && defined __LP64__
#if 0 /* expanded by -frewrite-includes */
# include <gnu/stubs-64.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
/* This file is automatically generated.
   It defines a symbol `__stub_FUNCTION' for each function
   in the C library which is a stub, meaning it will fail
   every time called, usually setting errno to ENOSYS.  */

#ifdef _LIBC
# error Applications may not define the macro _LIBC
#endif
# 9 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 3 4

#define __stub_bdflush
#define __stub_chflags
#define __stub_fattach
#define __stub_fchflags
#define __stub_fdetach
#define __stub_getmsg
#define __stub_gtty
#define __stub_lchmod
#define __stub_putmsg
#define __stub_revoke
#define __stub_setlogin
#define __stub_sigreturn
#define __stub_sstk
#define __stub_stty
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
#endif
# 12 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
#if defined __x86_64__ && defined __ILP32__
#if 0 /* expanded by -frewrite-includes */
# include <gnu/stubs-x32.h>
#endif /* expanded by -frewrite-includes */
# 14 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
#endif
# 15 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 385 "/usr/include/features.h" 2 3 4


#endif	/* features.h  */
# 388 "/usr/include/features.h" 3 4
# 28 "/usr/include/stdio.h" 2 3 4

__BEGIN_DECLS

# define __need_size_t
# define __need_NULL
#if 0 /* expanded by -frewrite-includes */
# include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/bin/../lib/clang/3.4/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __STDDEF_H
#define __STDDEF_H

#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 34 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 36 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 42 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 44 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 53 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 55 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 64 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#endif
# 65 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 67 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#endif
# 68 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 74 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 76 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#else
# 77 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 79 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 85 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#endif
# 86 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#define offsetof(t, d) __builtin_offsetof(t, d)

#endif /* __STDDEF_H */
# 90 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 99 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 101 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 103 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
# 34 "/usr/include/stdio.h" 2 3 4

#if 0 /* expanded by -frewrite-includes */
# include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */

#ifndef	_BITS_TYPES_H
#define	_BITS_TYPES_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/wordsize.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */

#if defined __x86_64__ && !defined __ILP32__
# define __WORDSIZE	64
#else
# 6 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE	32
#endif
# 8 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4

#ifdef __x86_64__
# define __WORDSIZE_TIME64_COMPAT32	1
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# define __SYSCALL_WORDSIZE		64
#endif
# 14 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4

/* Convenience types.  */
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;

/* Fixed-size types, underlying types depend on word size and compiler.  */
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
#if __WORDSIZE == 64
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
#else
# 46 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;
#endif
# 49 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4

/* quad_t is also 64 bits.  */
#if __WORDSIZE == 64
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#else
# 55 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
#endif
# 58 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4


/* The machine-dependent file <bits/typesizes.h> defines __*_T_TYPE
   macros for each of the OS types we define below.  The definitions
   of those macros must use the following macros for underlying types.
   We define __S<SIZE>_TYPE and __U<SIZE>_TYPE for the signed and unsigned
   variants of each of the following integer types on this machine.

	16		-- "natural" 16-bit type (always short)
	32		-- "natural" 32-bit type (always int)
	64		-- "natural" 64-bit type (long or long long)
	LONG32		-- 32-bit type, traditionally long
	QUAD		-- 64-bit type, always long long
	WORD		-- natural type of __WORDSIZE bits (int or long)
	LONGWORD	-- type of __WORDSIZE bits, traditionally long

   We distinguish WORD/LONGWORD, 32/LONG32, and 64/QUAD so that the
   conventional uses of `long' or `long long' type modifiers match the
   types we define, even when a less-adorned type would be the same size.
   This matters for (somewhat) portably writing printf/scanf formats for
   these types, where using the appropriate l or ll format modifiers can
   make the typedefs and the formats match up across all GNU platforms.  If
   we used `long' when it's 64 bits where `long long' is expected, then the
   compiler would warn about the formats not matching the argument types,
   and the programmer changing them to shut up the compiler would break the
   program's portability.

   Here we assume what is presently the case in all the GCC configurations
   we support: long long is always 64 bits, long is always word/address size,
   and int is always 32 bits.  */

#define	__S16_TYPE		short int
#define __U16_TYPE		unsigned short int
#define	__S32_TYPE		int
#define __U32_TYPE		unsigned int
#define __SLONGWORD_TYPE	long int
#define __ULONGWORD_TYPE	unsigned long int
#if __WORDSIZE == 32
# define __SQUAD_TYPE		__quad_t
# define __UQUAD_TYPE		__u_quad_t
# define __SWORD_TYPE		int
# define __UWORD_TYPE		unsigned int
# define __SLONG32_TYPE		long int
# define __ULONG32_TYPE		unsigned long int
# define __S64_TYPE		__quad_t
# define __U64_TYPE		__u_quad_t
/* We want __extension__ before typedef's that use nonstandard base types
   such as `long long' in C89 mode.  */
# define __STD_TYPE		__extension__ typedef
#elif __WORDSIZE == 64
# 108 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# define __SQUAD_TYPE		long int
# define __UQUAD_TYPE		unsigned long int
# define __SWORD_TYPE		long int
# define __UWORD_TYPE		unsigned long int
# define __SLONG32_TYPE		int
# define __ULONG32_TYPE		unsigned int
# define __S64_TYPE		long int
# define __U64_TYPE		unsigned long int
/* No need to mark the typedef with __extension__.   */
# define __STD_TYPE		typedef
#else
# 119 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# error
#endif
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/typesizes.h>	/* Defines __*_T_TYPE macros.  */
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
/* bits/typesizes.h -- underlying types for *_t.  Linux/x86-64 version.
   Copyright (C) 2012-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _BITS_TYPES_H
# error "Never include <bits/typesizes.h> directly; use <sys/types.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4

#ifndef	_BITS_TYPESIZES_H
#define	_BITS_TYPESIZES_H	1

/* See <bits/types.h> for the meaning of these macros.  This file exists so
   that <bits/types.h> need not vary across different GNU platforms.  */

/* X32 kernel interface is 64-bit.  */
#if defined __x86_64__ && defined __ILP32__
# define __SYSCALL_SLONG_TYPE	__SQUAD_TYPE
# define __SYSCALL_ULONG_TYPE	__UQUAD_TYPE
#else
# 34 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4
# define __SYSCALL_SLONG_TYPE	__SLONGWORD_TYPE
# define __SYSCALL_ULONG_TYPE	__ULONGWORD_TYPE
#endif
# 37 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4

#define __DEV_T_TYPE		__UQUAD_TYPE
#define __UID_T_TYPE		__U32_TYPE
#define __GID_T_TYPE		__U32_TYPE
#define __INO_T_TYPE		__SYSCALL_ULONG_TYPE
#define __INO64_T_TYPE		__UQUAD_TYPE
#define __MODE_T_TYPE		__U32_TYPE
#ifdef __x86_64__
# define __NLINK_T_TYPE		__SYSCALL_ULONG_TYPE
# define __FSWORD_T_TYPE	__SYSCALL_SLONG_TYPE
#else
# 48 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4
# define __NLINK_T_TYPE		__UWORD_TYPE
# define __FSWORD_T_TYPE	__SWORD_TYPE
#endif
# 51 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4
#define __OFF_T_TYPE		__SYSCALL_SLONG_TYPE
#define __OFF64_T_TYPE		__SQUAD_TYPE
#define __PID_T_TYPE		__S32_TYPE
#define __RLIM_T_TYPE		__SYSCALL_ULONG_TYPE
#define __RLIM64_T_TYPE		__UQUAD_TYPE
#define __BLKCNT_T_TYPE		__SYSCALL_SLONG_TYPE
#define __BLKCNT64_T_TYPE	__SQUAD_TYPE
#define __FSBLKCNT_T_TYPE	__SYSCALL_ULONG_TYPE
#define __FSBLKCNT64_T_TYPE	__UQUAD_TYPE
#define __FSFILCNT_T_TYPE	__SYSCALL_ULONG_TYPE
#define __FSFILCNT64_T_TYPE	__UQUAD_TYPE
#define __ID_T_TYPE		__U32_TYPE
#define __CLOCK_T_TYPE		__SYSCALL_SLONG_TYPE
#define __TIME_T_TYPE		__SYSCALL_SLONG_TYPE
#define __USECONDS_T_TYPE	__U32_TYPE
#define __SUSECONDS_T_TYPE	__SYSCALL_SLONG_TYPE
#define __DADDR_T_TYPE		__S32_TYPE
#define __KEY_T_TYPE		__S32_TYPE
#define __CLOCKID_T_TYPE	__S32_TYPE
#define __TIMER_T_TYPE		void *
#define __BLKSIZE_T_TYPE	__SYSCALL_SLONG_TYPE
#define __FSID_T_TYPE		struct { int __val[2]; }
#define __SSIZE_T_TYPE		__SWORD_TYPE

#ifdef __x86_64__
/* Tell the libc code that off_t and off64_t are actually the same type
   for all ABI purposes, even if possibly expressed as different base types
   for C type-checking purposes.  */
# define __OFF_T_MATCHES_OFF64_T	1

/* Same for ino_t and ino64_t.  */
# define __INO_T_MATCHES_INO64_T	1
#endif
# 84 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4

/* Number of descriptors that can fit in an `fd_set'.  */
#define __FD_SETSIZE		1024


#endif /* bits/typesizes.h */
# 90 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


__STD_TYPE __DEV_T_TYPE __dev_t;	/* Type of device numbers.  */
__STD_TYPE __UID_T_TYPE __uid_t;	/* Type of user identifications.  */
__STD_TYPE __GID_T_TYPE __gid_t;	/* Type of group identifications.  */
__STD_TYPE __INO_T_TYPE __ino_t;	/* Type of file serial numbers.  */
__STD_TYPE __INO64_T_TYPE __ino64_t;	/* Type of file serial numbers (LFS).*/
__STD_TYPE __MODE_T_TYPE __mode_t;	/* Type of file attribute bitmasks.  */
__STD_TYPE __NLINK_T_TYPE __nlink_t;	/* Type of file link counts.  */
__STD_TYPE __OFF_T_TYPE __off_t;	/* Type of file sizes and offsets.  */
__STD_TYPE __OFF64_T_TYPE __off64_t;	/* Type of file sizes and offsets (LFS).  */
__STD_TYPE __PID_T_TYPE __pid_t;	/* Type of process identifications.  */
__STD_TYPE __FSID_T_TYPE __fsid_t;	/* Type of file system IDs.  */
__STD_TYPE __CLOCK_T_TYPE __clock_t;	/* Type of CPU usage counts.  */
__STD_TYPE __RLIM_T_TYPE __rlim_t;	/* Type for resource measurement.  */
__STD_TYPE __RLIM64_T_TYPE __rlim64_t;	/* Type for resource measurement (LFS).  */
__STD_TYPE __ID_T_TYPE __id_t;		/* General type for IDs.  */
__STD_TYPE __TIME_T_TYPE __time_t;	/* Seconds since the Epoch.  */
__STD_TYPE __USECONDS_T_TYPE __useconds_t; /* Count of microseconds.  */
__STD_TYPE __SUSECONDS_T_TYPE __suseconds_t; /* Signed count of microseconds.  */

__STD_TYPE __DADDR_T_TYPE __daddr_t;	/* The type of a disk address.  */
__STD_TYPE __KEY_T_TYPE __key_t;	/* Type of an IPC key.  */

/* Clock ID used in clock and timer functions.  */
__STD_TYPE __CLOCKID_T_TYPE __clockid_t;

/* Timer ID returned by `timer_create'.  */
__STD_TYPE __TIMER_T_TYPE __timer_t;

/* Type to represent block size.  */
__STD_TYPE __BLKSIZE_T_TYPE __blksize_t;

/* Types from the Large File Support interface.  */

/* Type to count number of disk blocks.  */
__STD_TYPE __BLKCNT_T_TYPE __blkcnt_t;
__STD_TYPE __BLKCNT64_T_TYPE __blkcnt64_t;

/* Type to count file system blocks.  */
__STD_TYPE __FSBLKCNT_T_TYPE __fsblkcnt_t;
__STD_TYPE __FSBLKCNT64_T_TYPE __fsblkcnt64_t;

/* Type to count file system nodes.  */
__STD_TYPE __FSFILCNT_T_TYPE __fsfilcnt_t;
__STD_TYPE __FSFILCNT64_T_TYPE __fsfilcnt64_t;

/* Type of miscellaneous file system fields.  */
__STD_TYPE __FSWORD_T_TYPE __fsword_t;

__STD_TYPE __SSIZE_T_TYPE __ssize_t; /* Type of a byte count, or error.  */

/* Signed long type used in system calls.  */
__STD_TYPE __SYSCALL_SLONG_TYPE __syscall_slong_t;
/* Unsigned long type used in system calls.  */
__STD_TYPE __SYSCALL_ULONG_TYPE __syscall_ulong_t;

/* These few don't really vary by system, they always correspond
   to one of the other defined types.  */
typedef __off64_t __loff_t;	/* Type of file sizes and offsets (LFS).  */
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;

/* Duplicates info from stdint.h but this is used in unistd.h.  */
__STD_TYPE __SWORD_TYPE __intptr_t;

/* Duplicate info from sys/socket.h.  */
__STD_TYPE __U32_TYPE __socklen_t;


#undef __STD_TYPE

#endif /* bits/types.h */
# 195 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 36 "/usr/include/stdio.h" 2 3 4
# define __need_FILE
# define __need___FILE
#endif /* Don't need FILE.  */
# 39 "/usr/include/stdio.h" 3 4


#if !defined __FILE_defined && defined __need_FILE

/* Define outside of namespace so the C++ is happy.  */
struct _IO_FILE;

__BEGIN_NAMESPACE_STD
/* The opaque type of streams.  This is the definition used elsewhere.  */
typedef struct _IO_FILE FILE;
__END_NAMESPACE_STD
#if defined __USE_LARGEFILE64 || defined __USE_SVID || defined __USE_POSIX \
    || defined __USE_BSD || defined __USE_ISOC99 || defined __USE_XOPEN \
    || defined __USE_POSIX2
__USING_NAMESPACE_STD(FILE)
#endif
# 55 "/usr/include/stdio.h" 3 4

# define __FILE_defined	1
#endif /* FILE not defined.  */
# 58 "/usr/include/stdio.h" 3 4
#undef	__need_FILE


#if !defined ____FILE_defined && defined __need___FILE

/* The opaque type of streams.  This is the definition used elsewhere.  */
typedef struct _IO_FILE __FILE;

# define ____FILE_defined	1
#endif /* __FILE not defined.  */
# 68 "/usr/include/stdio.h" 3 4
#undef	__need___FILE


#ifdef	_STDIO_H
#define _STDIO_USES_IOSTREAM

#if 0 /* expanded by -frewrite-includes */
#include <libio.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/libio.h" 1 3 4
/* Copyright (C) 1991-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Written by Per Bothner <bothner@cygnus.com>.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.

   As a special exception, if you link the code in this file with
   files compiled with a GNU compiler to produce an executable,
   that does not cause the resulting executable to be covered by
   the GNU Lesser General Public License.  This exception does not
   however invalidate any other reasons why the executable file
   might be covered by the GNU Lesser General Public License.
   This exception applies to code released by its copyright holders
   in files containing the exception.  */

#ifndef _IO_STDIO_H
#define _IO_STDIO_H

#if 0 /* expanded by -frewrite-includes */
#include <_G_config.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/_G_config.h" 1 3 4
/* This file is needed by libio to define various configuration parameters.
   These are always the same in the GNU C library.  */

#ifndef _G_config_h
#define _G_config_h 1

/* Define types for libio in terms of the standard internal type names.  */

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 10 "/usr/include/_G_config.h" 3 4
#define __need_size_t
#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
# define __need_wchar_t
#endif
# 14 "/usr/include/_G_config.h" 3 4
#define __need_NULL
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/bin/../lib/clang/3.4/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __STDDEF_H
#define __STDDEF_H

#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 34 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 36 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 42 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 44 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 53 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 55 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 64 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#endif
# 65 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 67 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#endif
# 68 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 74 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 76 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#else
# 77 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 79 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 85 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#endif
# 86 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#define offsetof(t, d) __builtin_offsetof(t, d)

#endif /* __STDDEF_H */
# 90 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 99 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 101 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 103 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
# 16 "/usr/include/_G_config.h" 2 3 4
#define __need_mbstate_t
#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
# define __need_wint_t
#endif
# 20 "/usr/include/_G_config.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <wchar.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/wchar.h" 1 3 4
/* Copyright (C) 1995-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *      ISO C99 Standard: 7.24
 *	Extended multibyte and wide character utilities	<wchar.h>
 */

#ifndef _WCHAR_H

#if !defined __need_mbstate_t && !defined __need_wint_t
# define _WCHAR_H 1
#if 0 /* expanded by -frewrite-includes */
# include <features.h>
#endif /* expanded by -frewrite-includes */
# 28 "/usr/include/wchar.h" 3 4
#endif
# 29 "/usr/include/wchar.h" 3 4

#ifdef _WCHAR_H
/* Get FILE definition.  */
# define __need___FILE
# if defined __USE_UNIX98 || defined __USE_XOPEN2K
#  define __need_FILE
# endif
# 36 "/usr/include/wchar.h" 3 4
#if 0 /* expanded by -frewrite-includes */
# include <stdio.h>
#endif /* expanded by -frewrite-includes */
# 37 "/usr/include/wchar.h" 3 4
/* Get va_list definition.  */
# define __need___va_list
#if 0 /* expanded by -frewrite-includes */
# include <stdarg.h>
#endif /* expanded by -frewrite-includes */
# 40 "/usr/include/wchar.h" 3 4

#if 0 /* expanded by -frewrite-includes */
# include <bits/wchar.h>
#endif /* expanded by -frewrite-includes */
# 42 "/usr/include/wchar.h" 3 4

/* Get size_t, wchar_t, wint_t and NULL from <stddef.h>.  */
# define __need_size_t
# define __need_wchar_t
# define __need_NULL
#endif
# 48 "/usr/include/wchar.h" 3 4
#if defined _WCHAR_H || defined __need_wint_t || !defined __WINT_TYPE__
# undef __need_wint_t
# define __need_wint_t
#if 0 /* expanded by -frewrite-includes */
# include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 52 "/usr/include/wchar.h" 3 4

/* We try to get wint_t from <stddef.h>, but not all GCC versions define it
   there.  So define it ourselves if it remains undefined.  */
# ifndef _WINT_T
/* Integral type unchanged by default argument promotions that can
   hold any value corresponding to members of the extended character
   set, as well as at least one value that does not correspond to any
   member of the extended character set.  */
#  define _WINT_T
typedef unsigned int wint_t;
# else
# 63 "/usr/include/wchar.h" 3 4
/* Work around problems with the <stddef.h> file which doesn't put
   wint_t in the std namespace.  */
#  if defined __cplusplus && defined _GLIBCPP_USE_NAMESPACES \
      && defined __WINT_TYPE__
__BEGIN_NAMESPACE_STD
typedef __WINT_TYPE__ wint_t;
__END_NAMESPACE_STD
#  endif
# 71 "/usr/include/wchar.h" 3 4
# endif
# 72 "/usr/include/wchar.h" 3 4

/* Tell the caller that we provide correct C++ prototypes.  */
# if defined __cplusplus && __GNUC_PREREQ (4, 4)
#  define __CORRECT_ISO_CPP_WCHAR_H_PROTO
# endif
# 77 "/usr/include/wchar.h" 3 4
#endif
# 78 "/usr/include/wchar.h" 3 4

#if (defined _WCHAR_H || defined __need_mbstate_t) && !defined ____mbstate_t_defined
# define ____mbstate_t_defined	1
/* Conversion state information.  */
typedef struct
{
  int __count;
  union
  {
# ifdef __WINT_TYPE__
    __WINT_TYPE__ __wch;
# else
# 90 "/usr/include/wchar.h" 3 4
    wint_t __wch;
# endif
# 92 "/usr/include/wchar.h" 3 4
    char __wchb[4];
  } __value;		/* Value so far.  */
} __mbstate_t;
#endif
# 96 "/usr/include/wchar.h" 3 4
#undef __need_mbstate_t


/* The rest of the file is only used if used if __need_mbstate_t is not
   defined.  */
#ifdef _WCHAR_H

# ifndef __mbstate_t_defined
__BEGIN_NAMESPACE_C99
/* Public type.  */
typedef __mbstate_t mbstate_t;
__END_NAMESPACE_C99
#  define __mbstate_t_defined 1
# endif
# 110 "/usr/include/wchar.h" 3 4

#ifdef __USE_GNU
__USING_NAMESPACE_C99(mbstate_t)
#endif
# 114 "/usr/include/wchar.h" 3 4

#ifndef WCHAR_MIN
/* These constants might also be defined in <inttypes.h>.  */
# define WCHAR_MIN __WCHAR_MIN
# define WCHAR_MAX __WCHAR_MAX
#endif
# 120 "/usr/include/wchar.h" 3 4

#ifndef WEOF
# define WEOF (0xffffffffu)
#endif
# 124 "/usr/include/wchar.h" 3 4

/* For XPG4 compliance we have to define the stuff from <wctype.h> here
   as well.  */
#if defined __USE_XOPEN && !defined __USE_UNIX98
#if 0 /* expanded by -frewrite-includes */
# include <wctype.h>
#endif /* expanded by -frewrite-includes */
# 129 "/usr/include/wchar.h" 3 4
#endif
# 130 "/usr/include/wchar.h" 3 4


__BEGIN_DECLS

__BEGIN_NAMESPACE_STD
/* This incomplete type is defined in <time.h> but needed here because
   of `wcsftime'.  */
struct tm;
__END_NAMESPACE_STD
/* XXX We have to clean this up at some point.  Since tm is in the std
   namespace but wcsftime is in __c99 the type wouldn't be found
   without inserting it in the global namespace.  */
__USING_NAMESPACE_STD(tm)


__BEGIN_NAMESPACE_STD
/* Copy SRC to DEST.  */
extern wchar_t *wcscpy (wchar_t *__restrict __dest,
			const wchar_t *__restrict __src) __THROW;
/* Copy no more than N wide-characters of SRC to DEST.  */
extern wchar_t *wcsncpy (wchar_t *__restrict __dest,
			 const wchar_t *__restrict __src, size_t __n)
     __THROW;

/* Append SRC onto DEST.  */
extern wchar_t *wcscat (wchar_t *__restrict __dest,
			const wchar_t *__restrict __src) __THROW;
/* Append no more than N wide-characters of SRC onto DEST.  */
extern wchar_t *wcsncat (wchar_t *__restrict __dest,
			 const wchar_t *__restrict __src, size_t __n)
     __THROW;

/* Compare S1 and S2.  */
extern int wcscmp (const wchar_t *__s1, const wchar_t *__s2)
     __THROW __attribute_pure__;
/* Compare N wide-characters of S1 and S2.  */
extern int wcsncmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __THROW __attribute_pure__;
__END_NAMESPACE_STD

#ifdef __USE_XOPEN2K8
/* Compare S1 and S2, ignoring case.  */
extern int wcscasecmp (const wchar_t *__s1, const wchar_t *__s2) __THROW;

/* Compare no more than N chars of S1 and S2, ignoring case.  */
extern int wcsncasecmp (const wchar_t *__s1, const wchar_t *__s2,
			size_t __n) __THROW;

/* Similar to the two functions above but take the information from
   the provided locale and not the global locale.  */
#if 0 /* expanded by -frewrite-includes */
# include <xlocale.h>
#endif /* expanded by -frewrite-includes */
# 181 "/usr/include/wchar.h" 3 4

extern int wcscasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
			 __locale_t __loc) __THROW;

extern int wcsncasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
			  size_t __n, __locale_t __loc) __THROW;
#endif
# 188 "/usr/include/wchar.h" 3 4

__BEGIN_NAMESPACE_STD
/* Compare S1 and S2, both interpreted as appropriate to the
   LC_COLLATE category of the current locale.  */
extern int wcscoll (const wchar_t *__s1, const wchar_t *__s2) __THROW;
/* Transform S2 into array pointed to by S1 such that if wcscmp is
   applied to two transformed strings the result is the as applying
   `wcscoll' to the original strings.  */
extern size_t wcsxfrm (wchar_t *__restrict __s1,
		       const wchar_t *__restrict __s2, size_t __n) __THROW;
__END_NAMESPACE_STD

#ifdef __USE_XOPEN2K8
/* Similar to the two functions above but take the information from
   the provided locale and not the global locale.  */

/* Compare S1 and S2, both interpreted as appropriate to the
   LC_COLLATE category of the given locale.  */
extern int wcscoll_l (const wchar_t *__s1, const wchar_t *__s2,
		      __locale_t __loc) __THROW;

/* Transform S2 into array pointed to by S1 such that if wcscmp is
   applied to two transformed strings the result is the as applying
   `wcscoll' to the original strings.  */
extern size_t wcsxfrm_l (wchar_t *__s1, const wchar_t *__s2,
			 size_t __n, __locale_t __loc) __THROW;

/* Duplicate S, returning an identical malloc'd string.  */
extern wchar_t *wcsdup (const wchar_t *__s) __THROW __attribute_malloc__;
#endif
# 218 "/usr/include/wchar.h" 3 4

__BEGIN_NAMESPACE_STD
/* Find the first occurrence of WC in WCS.  */
#ifdef __CORRECT_ISO_CPP_WCHAR_H_PROTO
extern "C++" wchar_t *wcschr (wchar_t *__wcs, wchar_t __wc)
     __THROW __asm ("wcschr") __attribute_pure__;
extern "C++" const wchar_t *wcschr (const wchar_t *__wcs, wchar_t __wc)
     __THROW __asm ("wcschr") __attribute_pure__;
#else
# 227 "/usr/include/wchar.h" 3 4
extern wchar_t *wcschr (const wchar_t *__wcs, wchar_t __wc)
     __THROW __attribute_pure__;
#endif
# 230 "/usr/include/wchar.h" 3 4
/* Find the last occurrence of WC in WCS.  */
#ifdef __CORRECT_ISO_CPP_WCHAR_H_PROTO
extern "C++" wchar_t *wcsrchr (wchar_t *__wcs, wchar_t __wc)
     __THROW __asm ("wcsrchr") __attribute_pure__;
extern "C++" const wchar_t *wcsrchr (const wchar_t *__wcs, wchar_t __wc)
     __THROW __asm ("wcsrchr") __attribute_pure__;
#else
# 237 "/usr/include/wchar.h" 3 4
extern wchar_t *wcsrchr (const wchar_t *__wcs, wchar_t __wc)
     __THROW __attribute_pure__;
#endif
# 240 "/usr/include/wchar.h" 3 4
__END_NAMESPACE_STD

#ifdef __USE_GNU
/* This function is similar to `wcschr'.  But it returns a pointer to
   the closing NUL wide character in case C is not found in S.  */
extern wchar_t *wcschrnul (const wchar_t *__s, wchar_t __wc)
     __THROW __attribute_pure__;
#endif
# 248 "/usr/include/wchar.h" 3 4

__BEGIN_NAMESPACE_STD
/* Return the length of the initial segmet of WCS which
   consists entirely of wide characters not in REJECT.  */
extern size_t wcscspn (const wchar_t *__wcs, const wchar_t *__reject)
     __THROW __attribute_pure__;
/* Return the length of the initial segmet of WCS which
   consists entirely of wide characters in  ACCEPT.  */
extern size_t wcsspn (const wchar_t *__wcs, const wchar_t *__accept)
     __THROW __attribute_pure__;
/* Find the first occurrence in WCS of any character in ACCEPT.  */
#ifdef __CORRECT_ISO_CPP_WCHAR_H_PROTO
extern "C++" wchar_t *wcspbrk (wchar_t *__wcs, const wchar_t *__accept)
     __THROW __asm ("wcspbrk") __attribute_pure__;
extern "C++" const wchar_t *wcspbrk (const wchar_t *__wcs,
				     const wchar_t *__accept)
     __THROW __asm ("wcspbrk") __attribute_pure__;
#else
# 266 "/usr/include/wchar.h" 3 4
extern wchar_t *wcspbrk (const wchar_t *__wcs, const wchar_t *__accept)
     __THROW __attribute_pure__;
#endif
# 269 "/usr/include/wchar.h" 3 4
/* Find the first occurrence of NEEDLE in HAYSTACK.  */
#ifdef __CORRECT_ISO_CPP_WCHAR_H_PROTO
extern "C++" wchar_t *wcsstr (wchar_t *__haystack, const wchar_t *__needle)
     __THROW __asm ("wcsstr") __attribute_pure__;
extern "C++" const wchar_t *wcsstr (const wchar_t *__haystack,
				    const wchar_t *__needle)
     __THROW __asm ("wcsstr") __attribute_pure__;
#else
# 277 "/usr/include/wchar.h" 3 4
extern wchar_t *wcsstr (const wchar_t *__haystack, const wchar_t *__needle)
     __THROW __attribute_pure__;
#endif
# 280 "/usr/include/wchar.h" 3 4

/* Divide WCS into tokens separated by characters in DELIM.  */
extern wchar_t *wcstok (wchar_t *__restrict __s,
			const wchar_t *__restrict __delim,
			wchar_t **__restrict __ptr) __THROW;

/* Return the number of wide characters in S.  */
extern size_t wcslen (const wchar_t *__s) __THROW __attribute_pure__;
__END_NAMESPACE_STD

#ifdef __USE_XOPEN
/* Another name for `wcsstr' from XPG4.  */
# ifdef __CORRECT_ISO_CPP_WCHAR_H_PROTO
extern "C++" wchar_t *wcswcs (wchar_t *__haystack, const wchar_t *__needle)
     __THROW __asm ("wcswcs") __attribute_pure__;
extern "C++" const wchar_t *wcswcs (const wchar_t *__haystack,
				    const wchar_t *__needle)
     __THROW __asm ("wcswcs") __attribute_pure__;
# else
# 299 "/usr/include/wchar.h" 3 4
extern wchar_t *wcswcs (const wchar_t *__haystack, const wchar_t *__needle)
     __THROW __attribute_pure__;
# endif
# 302 "/usr/include/wchar.h" 3 4
#endif
# 303 "/usr/include/wchar.h" 3 4

#ifdef __USE_XOPEN2K8
/* Return the number of wide characters in S, but at most MAXLEN.  */
extern size_t wcsnlen (const wchar_t *__s, size_t __maxlen)
     __THROW __attribute_pure__;
#endif
# 309 "/usr/include/wchar.h" 3 4


__BEGIN_NAMESPACE_STD
/* Search N wide characters of S for C.  */
#ifdef __CORRECT_ISO_CPP_WCHAR_H_PROTO
extern "C++" wchar_t *wmemchr (wchar_t *__s, wchar_t __c, size_t __n)
     __THROW __asm ("wmemchr") __attribute_pure__;
extern "C++" const wchar_t *wmemchr (const wchar_t *__s, wchar_t __c,
				     size_t __n)
     __THROW __asm ("wmemchr") __attribute_pure__;
#else
# 320 "/usr/include/wchar.h" 3 4
extern wchar_t *wmemchr (const wchar_t *__s, wchar_t __c, size_t __n)
     __THROW __attribute_pure__;
#endif
# 323 "/usr/include/wchar.h" 3 4

/* Compare N wide characters of S1 and S2.  */
extern int wmemcmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __THROW __attribute_pure__;

/* Copy N wide characters of SRC to DEST.  */
extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
			 const wchar_t *__restrict __s2, size_t __n) __THROW;

/* Copy N wide characters of SRC to DEST, guaranteeing
   correct behavior for overlapping strings.  */
extern wchar_t *wmemmove (wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __THROW;

/* Set N wide characters of S to C.  */
extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) __THROW;
__END_NAMESPACE_STD

#ifdef __USE_GNU
/* Copy N wide characters of SRC to DEST and return pointer to following
   wide character.  */
extern wchar_t *wmempcpy (wchar_t *__restrict __s1,
			  const wchar_t *__restrict __s2, size_t __n)
     __THROW;
#endif
# 348 "/usr/include/wchar.h" 3 4


__BEGIN_NAMESPACE_STD
/* Determine whether C constitutes a valid (one-byte) multibyte
   character.  */
extern wint_t btowc (int __c) __THROW;

/* Determine whether C corresponds to a member of the extended
   character set whose multibyte representation is a single byte.  */
extern int wctob (wint_t __c) __THROW;

/* Determine whether PS points to an object representing the initial
   state.  */
extern int mbsinit (const mbstate_t *__ps) __THROW __attribute_pure__;

/* Write wide character representation of multibyte character pointed
   to by S to PWC.  */
extern size_t mbrtowc (wchar_t *__restrict __pwc,
		       const char *__restrict __s, size_t __n,
		       mbstate_t *__restrict __p) __THROW;

/* Write multibyte representation of wide character WC to S.  */
extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
		       mbstate_t *__restrict __ps) __THROW;

/* Return number of bytes in multibyte character pointed to by S.  */
extern size_t __mbrlen (const char *__restrict __s, size_t __n,
			mbstate_t *__restrict __ps) __THROW;
extern size_t mbrlen (const char *__restrict __s, size_t __n,
		      mbstate_t *__restrict __ps) __THROW;
__END_NAMESPACE_STD

#ifdef __USE_EXTERN_INLINES
/* Define inline function as optimization.  */

/* We can use the BTOWC and WCTOB optimizations since we know that all
   locales must use ASCII encoding for the values in the ASCII range
   and because the wchar_t encoding is always ISO 10646.  */
extern wint_t __btowc_alias (int __c) __asm ("btowc");
__extern_inline wint_t
__NTH (btowc (int __c))
{ return (__builtin_constant_p (__c) && __c >= '\0' && __c <= '\x7f'
	  ? (wint_t) __c : __btowc_alias (__c)); }

extern int __wctob_alias (wint_t __c) __asm ("wctob");
__extern_inline int
__NTH (wctob (wint_t __wc))
{ return (__builtin_constant_p (__wc) && __wc >= L'\0' && __wc <= L'\x7f'
	  ? (int) __wc : __wctob_alias (__wc)); }

__extern_inline size_t
__NTH (mbrlen (const char *__restrict __s, size_t __n,
	       mbstate_t *__restrict __ps))
{ return (__ps != NULL
	  ? mbrtowc (NULL, __s, __n, __ps) : __mbrlen (__s, __n, NULL)); }
#endif
# 404 "/usr/include/wchar.h" 3 4

__BEGIN_NAMESPACE_STD
/* Write wide character representation of multibyte character string
   SRC to DST.  */
extern size_t mbsrtowcs (wchar_t *__restrict __dst,
			 const char **__restrict __src, size_t __len,
			 mbstate_t *__restrict __ps) __THROW;

/* Write multibyte character representation of wide character string
   SRC to DST.  */
extern size_t wcsrtombs (char *__restrict __dst,
			 const wchar_t **__restrict __src, size_t __len,
			 mbstate_t *__restrict __ps) __THROW;
__END_NAMESPACE_STD


#ifdef	__USE_XOPEN2K8
/* Write wide character representation of at most NMC bytes of the
   multibyte character string SRC to DST.  */
extern size_t mbsnrtowcs (wchar_t *__restrict __dst,
			  const char **__restrict __src, size_t __nmc,
			  size_t __len, mbstate_t *__restrict __ps) __THROW;

/* Write multibyte character representation of at most NWC characters
   from the wide character string SRC to DST.  */
extern size_t wcsnrtombs (char *__restrict __dst,
			  const wchar_t **__restrict __src,
			  size_t __nwc, size_t __len,
			  mbstate_t *__restrict __ps) __THROW;
#endif	/* use POSIX 2008 */
# 434 "/usr/include/wchar.h" 3 4


/* The following functions are extensions found in X/Open CAE.  */
#ifdef __USE_XOPEN
/* Determine number of column positions required for C.  */
extern int wcwidth (wchar_t __c) __THROW;

/* Determine number of column positions required for first N wide
   characters (or fewer if S ends before this) in S.  */
extern int wcswidth (const wchar_t *__s, size_t __n) __THROW;
#endif	/* Use X/Open.  */
# 445 "/usr/include/wchar.h" 3 4


__BEGIN_NAMESPACE_STD
/* Convert initial portion of the wide string NPTR to `double'
   representation.  */
extern double wcstod (const wchar_t *__restrict __nptr,
		      wchar_t **__restrict __endptr) __THROW;
__END_NAMESPACE_STD

#ifdef __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Likewise for `float' and `long double' sizes of floating-point numbers.  */
extern float wcstof (const wchar_t *__restrict __nptr,
		     wchar_t **__restrict __endptr) __THROW;
extern long double wcstold (const wchar_t *__restrict __nptr,
			    wchar_t **__restrict __endptr) __THROW;
__END_NAMESPACE_C99
#endif /* C99 */
# 463 "/usr/include/wchar.h" 3 4


__BEGIN_NAMESPACE_STD
/* Convert initial portion of wide string NPTR to `long int'
   representation.  */
extern long int wcstol (const wchar_t *__restrict __nptr,
			wchar_t **__restrict __endptr, int __base) __THROW;

/* Convert initial portion of wide string NPTR to `unsigned long int'
   representation.  */
extern unsigned long int wcstoul (const wchar_t *__restrict __nptr,
				  wchar_t **__restrict __endptr, int __base)
     __THROW;
__END_NAMESPACE_STD

#ifdef __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Convert initial portion of wide string NPTR to `long long int'
   representation.  */
__extension__
extern long long int wcstoll (const wchar_t *__restrict __nptr,
			      wchar_t **__restrict __endptr, int __base)
     __THROW;

/* Convert initial portion of wide string NPTR to `unsigned long long int'
   representation.  */
__extension__
extern unsigned long long int wcstoull (const wchar_t *__restrict __nptr,
					wchar_t **__restrict __endptr,
					int __base) __THROW;
__END_NAMESPACE_C99
#endif /* ISO C99.  */
# 495 "/usr/include/wchar.h" 3 4

#ifdef __USE_GNU
/* Convert initial portion of wide string NPTR to `long long int'
   representation.  */
__extension__
extern long long int wcstoq (const wchar_t *__restrict __nptr,
			     wchar_t **__restrict __endptr, int __base)
     __THROW;

/* Convert initial portion of wide string NPTR to `unsigned long long int'
   representation.  */
__extension__
extern unsigned long long int wcstouq (const wchar_t *__restrict __nptr,
				       wchar_t **__restrict __endptr,
				       int __base) __THROW;
#endif /* Use GNU.  */
# 511 "/usr/include/wchar.h" 3 4

#ifdef __USE_GNU
/* The concept of one static locale per category is not very well
   thought out.  Many applications will need to process its data using
   information from several different locales.  Another application is
   the implementation of the internationalization handling in the
   upcoming ISO C++ standard library.  To support this another set of
   the functions using locale data exist which have an additional
   argument.

   Attention: all these functions are *not* standardized in any form.
   This is a proof-of-concept implementation.  */

/* Structure for reentrant locale using functions.  This is an
   (almost) opaque type for the user level programs.  */
#if 0 /* expanded by -frewrite-includes */
# include <xlocale.h>
#endif /* expanded by -frewrite-includes */
# 527 "/usr/include/wchar.h" 3 4

/* Special versions of the functions above which take the locale to
   use as an additional parameter.  */
extern long int wcstol_l (const wchar_t *__restrict __nptr,
			  wchar_t **__restrict __endptr, int __base,
			  __locale_t __loc) __THROW;

extern unsigned long int wcstoul_l (const wchar_t *__restrict __nptr,
				    wchar_t **__restrict __endptr,
				    int __base, __locale_t __loc) __THROW;

__extension__
extern long long int wcstoll_l (const wchar_t *__restrict __nptr,
				wchar_t **__restrict __endptr,
				int __base, __locale_t __loc) __THROW;

__extension__
extern unsigned long long int wcstoull_l (const wchar_t *__restrict __nptr,
					  wchar_t **__restrict __endptr,
					  int __base, __locale_t __loc)
     __THROW;

extern double wcstod_l (const wchar_t *__restrict __nptr,
			wchar_t **__restrict __endptr, __locale_t __loc)
     __THROW;

extern float wcstof_l (const wchar_t *__restrict __nptr,
		       wchar_t **__restrict __endptr, __locale_t __loc)
     __THROW;

extern long double wcstold_l (const wchar_t *__restrict __nptr,
			      wchar_t **__restrict __endptr,
			      __locale_t __loc) __THROW;
#endif	/* use GNU */
# 561 "/usr/include/wchar.h" 3 4


#ifdef __USE_XOPEN2K8
/* Copy SRC to DEST, returning the address of the terminating L'\0' in
   DEST.  */
extern wchar_t *wcpcpy (wchar_t *__restrict __dest,
			const wchar_t *__restrict __src) __THROW;

/* Copy no more than N characters of SRC to DEST, returning the address of
   the last character written into DEST.  */
extern wchar_t *wcpncpy (wchar_t *__restrict __dest,
			 const wchar_t *__restrict __src, size_t __n)
     __THROW;


/* Wide character I/O functions.  */

/* Like OPEN_MEMSTREAM, but the stream is wide oriented and produces
   a wide character string.  */
extern __FILE *open_wmemstream (wchar_t **__bufloc, size_t *__sizeloc) __THROW;
#endif
# 582 "/usr/include/wchar.h" 3 4

#if defined __USE_ISOC95 || defined __USE_UNIX98
__BEGIN_NAMESPACE_STD

/* Select orientation for stream.  */
extern int fwide (__FILE *__fp, int __mode) __THROW;


/* Write formatted output to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fwprintf (__FILE *__restrict __stream,
		     const wchar_t *__restrict __format, ...)
     /* __attribute__ ((__format__ (__wprintf__, 2, 3))) */;
/* Write formatted output to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int wprintf (const wchar_t *__restrict __format, ...)
     /* __attribute__ ((__format__ (__wprintf__, 1, 2))) */;
/* Write formatted output of at most N characters to S.  */
extern int swprintf (wchar_t *__restrict __s, size_t __n,
		     const wchar_t *__restrict __format, ...)
     __THROW /* __attribute__ ((__format__ (__wprintf__, 3, 4))) */;

/* Write formatted output to S from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfwprintf (__FILE *__restrict __s,
		      const wchar_t *__restrict __format,
		      __gnuc_va_list __arg)
     /* __attribute__ ((__format__ (__wprintf__, 2, 0))) */;
/* Write formatted output to stdout from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vwprintf (const wchar_t *__restrict __format,
		     __gnuc_va_list __arg)
     /* __attribute__ ((__format__ (__wprintf__, 1, 0))) */;
/* Write formatted output of at most N character to S from argument
   list ARG.  */
extern int vswprintf (wchar_t *__restrict __s, size_t __n,
		      const wchar_t *__restrict __format,
		      __gnuc_va_list __arg)
     __THROW /* __attribute__ ((__format__ (__wprintf__, 3, 0))) */;


/* Read formatted input from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fwscanf (__FILE *__restrict __stream,
		    const wchar_t *__restrict __format, ...)
     /* __attribute__ ((__format__ (__wscanf__, 2, 3))) */;
/* Read formatted input from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int wscanf (const wchar_t *__restrict __format, ...)
     /* __attribute__ ((__format__ (__wscanf__, 1, 2))) */;
/* Read formatted input from S.  */
extern int swscanf (const wchar_t *__restrict __s,
		    const wchar_t *__restrict __format, ...)
     __THROW /* __attribute__ ((__format__ (__wscanf__, 2, 3))) */;

# if defined __USE_ISOC99 && !defined __USE_GNU \
     && (!defined __LDBL_COMPAT || !defined __REDIRECT) \
     && (defined __STRICT_ANSI__ || defined __USE_XOPEN2K)
#  ifdef __REDIRECT
/* For strict ISO C99 or POSIX compliance disallow %as, %aS and %a[
   GNU extension which conflicts with valid %a followed by letter
   s, S or [.  */
extern int __REDIRECT (fwscanf, (__FILE *__restrict __stream,
				 const wchar_t *__restrict __format, ...),
		       __isoc99_fwscanf)
     /* __attribute__ ((__format__ (__wscanf__, 2, 3))) */;
extern int __REDIRECT (wscanf, (const wchar_t *__restrict __format, ...),
		       __isoc99_wscanf)
     /* __attribute__ ((__format__ (__wscanf__, 1, 2))) */;
extern int __REDIRECT_NTH (swscanf, (const wchar_t *__restrict __s,
				     const wchar_t *__restrict __format,
				     ...), __isoc99_swscanf)
     /* __attribute__ ((__format__ (__wscanf__, 2, 3))) */;
#  else
# 668 "/usr/include/wchar.h" 3 4
extern int __isoc99_fwscanf (__FILE *__restrict __stream,
			     const wchar_t *__restrict __format, ...);
extern int __isoc99_wscanf (const wchar_t *__restrict __format, ...);
extern int __isoc99_swscanf (const wchar_t *__restrict __s,
			     const wchar_t *__restrict __format, ...)
     __THROW;
#   define fwscanf __isoc99_fwscanf
#   define wscanf __isoc99_wscanf
#   define swscanf __isoc99_swscanf
#  endif
# 678 "/usr/include/wchar.h" 3 4
# endif
# 679 "/usr/include/wchar.h" 3 4

__END_NAMESPACE_STD
#endif /* Use ISO C95, C99 and Unix98. */
# 682 "/usr/include/wchar.h" 3 4

#ifdef __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Read formatted input from S into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfwscanf (__FILE *__restrict __s,
		     const wchar_t *__restrict __format,
		     __gnuc_va_list __arg)
     /* __attribute__ ((__format__ (__wscanf__, 2, 0))) */;
/* Read formatted input from stdin into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vwscanf (const wchar_t *__restrict __format,
		    __gnuc_va_list __arg)
     /* __attribute__ ((__format__ (__wscanf__, 1, 0))) */;
/* Read formatted input from S into argument list ARG.  */
extern int vswscanf (const wchar_t *__restrict __s,
		     const wchar_t *__restrict __format,
		     __gnuc_va_list __arg)
     __THROW /* __attribute__ ((__format__ (__wscanf__, 2, 0))) */;

# if !defined __USE_GNU \
     && (!defined __LDBL_COMPAT || !defined __REDIRECT) \
     && (defined __STRICT_ANSI__ || defined __USE_XOPEN2K)
#  ifdef __REDIRECT
extern int __REDIRECT (vfwscanf, (__FILE *__restrict __s,
				  const wchar_t *__restrict __format,
				  __gnuc_va_list __arg), __isoc99_vfwscanf)
     /* __attribute__ ((__format__ (__wscanf__, 2, 0))) */;
extern int __REDIRECT (vwscanf, (const wchar_t *__restrict __format,
				 __gnuc_va_list __arg), __isoc99_vwscanf)
     /* __attribute__ ((__format__ (__wscanf__, 1, 0))) */;
extern int __REDIRECT_NTH (vswscanf, (const wchar_t *__restrict __s,
				      const wchar_t *__restrict __format,
				      __gnuc_va_list __arg), __isoc99_vswscanf)
     /* __attribute__ ((__format__ (__wscanf__, 2, 0))) */;
#  else
# 722 "/usr/include/wchar.h" 3 4
extern int __isoc99_vfwscanf (__FILE *__restrict __s,
			      const wchar_t *__restrict __format,
			      __gnuc_va_list __arg);
extern int __isoc99_vwscanf (const wchar_t *__restrict __format,
			     __gnuc_va_list __arg);
extern int __isoc99_vswscanf (const wchar_t *__restrict __s,
			      const wchar_t *__restrict __format,
			      __gnuc_va_list __arg) __THROW;
#   define vfwscanf __isoc99_vfwscanf
#   define vwscanf __isoc99_vwscanf
#   define vswscanf __isoc99_vswscanf
#  endif
# 734 "/usr/include/wchar.h" 3 4
# endif
# 735 "/usr/include/wchar.h" 3 4

__END_NAMESPACE_C99
#endif /* Use ISO C99. */
# 738 "/usr/include/wchar.h" 3 4


__BEGIN_NAMESPACE_STD
/* Read a character from STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern wint_t fgetwc (__FILE *__stream);
extern wint_t getwc (__FILE *__stream);

/* Read a character from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern wint_t getwchar (void);


/* Write a character to STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);

/* Write a character to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern wint_t putwchar (wchar_t __wc);


/* Get a newline-terminated wide character string of finite length
   from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
			__FILE *__restrict __stream);

/* Write a string to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputws (const wchar_t *__restrict __ws,
		   __FILE *__restrict __stream);


/* Push a character back onto the input buffer of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern wint_t ungetwc (wint_t __wc, __FILE *__stream);
__END_NAMESPACE_STD


#ifdef __USE_GNU
/* These are defined to be equivalent to the `char' functions defined
   in POSIX.1:1996.

   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern wint_t getwc_unlocked (__FILE *__stream);
extern wint_t getwchar_unlocked (void);

/* This is the wide character version of a GNU extension.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern wint_t fgetwc_unlocked (__FILE *__stream);

/* Faster version when locking is not necessary.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern wint_t fputwc_unlocked (wchar_t __wc, __FILE *__stream);

/* These are defined to be equivalent to the `char' functions defined
   in POSIX.1:1996.

   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern wint_t putwc_unlocked (wchar_t __wc, __FILE *__stream);
extern wint_t putwchar_unlocked (wchar_t __wc);


/* This function does the same as `fgetws' but does not lock the stream.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern wchar_t *fgetws_unlocked (wchar_t *__restrict __ws, int __n,
				 __FILE *__restrict __stream);

/* This function does the same as `fputws' but does not lock the stream.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fputws_unlocked (const wchar_t *__restrict __ws,
			    __FILE *__restrict __stream);
#endif
# 849 "/usr/include/wchar.h" 3 4


__BEGIN_NAMESPACE_C99
/* Format TP into S according to FORMAT.
   Write no more than MAXSIZE wide characters and return the number
   of wide characters written, or 0 if it would exceed MAXSIZE.  */
extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
			const wchar_t *__restrict __format,
			const struct tm *__restrict __tp) __THROW;
__END_NAMESPACE_C99

# ifdef __USE_GNU
#if 0 /* expanded by -frewrite-includes */
# include <xlocale.h>
#endif /* expanded by -frewrite-includes */
# 862 "/usr/include/wchar.h" 3 4

/* Similar to `wcsftime' but takes the information from
   the provided locale and not the global locale.  */
extern size_t wcsftime_l (wchar_t *__restrict __s, size_t __maxsize,
			  const wchar_t *__restrict __format,
			  const struct tm *__restrict __tp,
			  __locale_t __loc) __THROW;
# endif
# 870 "/usr/include/wchar.h" 3 4

/* The X/Open standard demands that most of the functions defined in
   the <wctype.h> header must also appear here.  This is probably
   because some X/Open members wrote their implementation before the
   ISO C standard was published and introduced the better solution.
   We have to provide these definitions for compliance reasons but we
   do this nonsense only if really necessary.  */
#if defined __USE_UNIX98 && !defined __USE_GNU
# define __need_iswxxx
#if 0 /* expanded by -frewrite-includes */
# include <wctype.h>
#endif /* expanded by -frewrite-includes */
# 880 "/usr/include/wchar.h" 3 4
#endif
# 881 "/usr/include/wchar.h" 3 4

/* Define some macros helping to catch buffer overflows.  */
#if __USE_FORTIFY_LEVEL > 0 && defined __fortify_function
#if 0 /* expanded by -frewrite-includes */
# include <bits/wchar2.h>
#endif /* expanded by -frewrite-includes */
# 885 "/usr/include/wchar.h" 3 4
#endif
# 886 "/usr/include/wchar.h" 3 4

#ifdef __LDBL_COMPAT
#if 0 /* expanded by -frewrite-includes */
# include <bits/wchar-ldbl.h>
#endif /* expanded by -frewrite-includes */
# 889 "/usr/include/wchar.h" 3 4
#endif
# 890 "/usr/include/wchar.h" 3 4

__END_DECLS

#endif	/* _WCHAR_H defined */
# 894 "/usr/include/wchar.h" 3 4

#endif /* wchar.h  */
# 896 "/usr/include/wchar.h" 3 4

/* Undefine all __need_* constants in case we are included to get those
   constants but the whole file was already read.  */
#undef __need_mbstate_t
#undef __need_wint_t
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
#if 0 /* expanded by -frewrite-includes */
# include <gconv.h>
#endif /* expanded by -frewrite-includes */
# 33 "/usr/include/_G_config.h" 3 4
typedef union
{
  struct __gconv_info __cd;
  struct
  {
    struct __gconv_info __cd;
    struct __gconv_step_data __data;
  } __combined;
} _G_iconv_t;
#endif
# 43 "/usr/include/_G_config.h" 3 4


/* These library features are always available in the GNU C library.  */
#define _G_va_list __gnuc_va_list

#define _G_HAVE_MMAP 1
#define _G_HAVE_MREMAP 1

#define _G_IO_IO_FILE_VERSION 0x20001

/* This is defined by <bits/stat.h> if `st_blksize' exists.  */
#define _G_HAVE_ST_BLKSIZE defined (_STATBUF_ST_BLKSIZE)

#define _G_BUFSIZ 8192

#endif	/* _G_config.h */
# 59 "/usr/include/_G_config.h" 3 4
# 32 "/usr/include/libio.h" 2 3 4
/* ALL of these should be defined in _G_config.h */
#define _IO_fpos_t _G_fpos_t
#define _IO_fpos64_t _G_fpos64_t
#define _IO_size_t size_t
#define _IO_ssize_t __ssize_t
#define _IO_off_t __off_t
#define _IO_off64_t __off64_t
#define _IO_pid_t __pid_t
#define _IO_uid_t __uid_t
#define _IO_iconv_t _G_iconv_t
#define _IO_HAVE_ST_BLKSIZE _G_HAVE_ST_BLKSIZE
#define _IO_BUFSIZ _G_BUFSIZ
#define _IO_va_list _G_va_list
#define _IO_wint_t wint_t

/* This define avoids name pollution if we're using GNU stdarg.h */
#define __need___va_list
#if 0 /* expanded by -frewrite-includes */
#include <stdarg.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/bin/../lib/clang/3.4/include/stdarg.h" 1 3 4
/*===---- stdarg.h - Variable argument handling ----------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __STDARG_H
#define __STDARG_H

#ifndef _VA_LIST
typedef __builtin_va_list va_list;
#define _VA_LIST
#endif
# 33 "/usr/bin/../lib/clang/3.4/include/stdarg.h" 3 4
#define va_start(ap, param) __builtin_va_start(ap, param)
#define va_end(ap)          __builtin_va_end(ap)
#define va_arg(ap, type)    __builtin_va_arg(ap, type)

/* GCC always defines __va_copy, but does not define va_copy unless in c99 mode
 * or -ansi is not specified, since it was not part of C90.
 */
#define __va_copy(d,s) __builtin_va_copy(d,s)

#if __STDC_VERSION__ >= 199900L || __cplusplus >= 201103L || !defined(__STRICT_ANSI__)
#define va_copy(dest, src)  __builtin_va_copy(dest, src)
#endif
# 45 "/usr/bin/../lib/clang/3.4/include/stdarg.h" 3 4

/* Hack required to make standard headers work, at least on Ubuntu */
#define __GNUC_VA_LIST 1
typedef __builtin_va_list __gnuc_va_list;

#endif /* __STDARG_H */
# 51 "/usr/bin/../lib/clang/3.4/include/stdarg.h" 3 4
# 50 "/usr/include/libio.h" 2 3 4
#ifdef __GNUC_VA_LIST
# undef _IO_va_list
# define _IO_va_list __gnuc_va_list
#endif /* __GNUC_VA_LIST */
# 54 "/usr/include/libio.h" 3 4

#ifndef __P
#if 0 /* expanded by -frewrite-includes */
# include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 57 "/usr/include/libio.h" 3 4
#endif /*!__P*/
# 58 "/usr/include/libio.h" 3 4

#define _IO_UNIFIED_JUMPTABLES 1

#ifndef EOF
# define EOF (-1)
#endif
# 64 "/usr/include/libio.h" 3 4
#ifndef NULL
# if defined __GNUG__ && \
    (__GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 8))
#  define NULL (__null)
# else
# 69 "/usr/include/libio.h" 3 4
#  if !defined(__cplusplus)
#   define NULL ((void*)0)
#  else
# 72 "/usr/include/libio.h" 3 4
#   define NULL (0)
#  endif
# 74 "/usr/include/libio.h" 3 4
# endif
# 75 "/usr/include/libio.h" 3 4
#endif
# 76 "/usr/include/libio.h" 3 4

#define _IOS_INPUT	1
#define _IOS_OUTPUT	2
#define _IOS_ATEND	4
#define _IOS_APPEND	8
#define _IOS_TRUNC	16
#define _IOS_NOCREATE	32
#define _IOS_NOREPLACE	64
#define _IOS_BIN	128

/* Magic numbers and bits for the _flags field.
   The magic numbers use the high-order bits of _flags;
   the remaining bits are available for variable flags.
   Note: The magic numbers must all be negative if stdio
   emulation is desired. */

#define _IO_MAGIC 0xFBAD0000 /* Magic number */
#define _OLD_STDIO_MAGIC 0xFABC0000 /* Emulate old stdio. */
#define _IO_MAGIC_MASK 0xFFFF0000
#define _IO_USER_BUF 1 /* User owns buffer; don't delete it on close. */
#define _IO_UNBUFFERED 2
#define _IO_NO_READS 4 /* Reading not allowed */
#define _IO_NO_WRITES 8 /* Writing not allowd */
#define _IO_EOF_SEEN 0x10
#define _IO_ERR_SEEN 0x20
#define _IO_DELETE_DONT_CLOSE 0x40 /* Don't call close(_fileno) on cleanup. */
#define _IO_LINKED 0x80 /* Set if linked (using _chain) to streambuf::_list_all.*/
#define _IO_IN_BACKUP 0x100
#define _IO_LINE_BUF 0x200
#define _IO_TIED_PUT_GET 0x400 /* Set if put and get pointer logicly tied. */
#define _IO_CURRENTLY_PUTTING 0x800
#define _IO_IS_APPENDING 0x1000
#define _IO_IS_FILEBUF 0x2000
#define _IO_BAD_SEEN 0x4000
#define _IO_USER_LOCK 0x8000

#define _IO_FLAGS2_MMAP 1
#define _IO_FLAGS2_NOTCANCEL 2
#ifdef _LIBC
# define _IO_FLAGS2_FORTIFY 4
#endif
# 117 "/usr/include/libio.h" 3 4
#define _IO_FLAGS2_USER_WBUF 8
#ifdef _LIBC
# define _IO_FLAGS2_SCANF_STD 16
# define _IO_FLAGS2_NOCLOSE 32
# define _IO_FLAGS2_CLOEXEC 64
#endif
# 123 "/usr/include/libio.h" 3 4

/* These are "formatting flags" matching the iostream fmtflags enum values. */
#define _IO_SKIPWS 01
#define _IO_LEFT 02
#define _IO_RIGHT 04
#define _IO_INTERNAL 010
#define _IO_DEC 020
#define _IO_OCT 040
#define _IO_HEX 0100
#define _IO_SHOWBASE 0200
#define _IO_SHOWPOINT 0400
#define _IO_UPPERCASE 01000
#define _IO_SHOWPOS 02000
#define _IO_SCIENTIFIC 04000
#define _IO_FIXED 010000
#define _IO_UNITBUF 020000
#define _IO_STDIO 040000
#define _IO_DONT_CLOSE 0100000
#define _IO_BOOLALPHA 0200000


struct _IO_jump_t;  struct _IO_FILE;

/* Handle lock.  */
#ifdef _IO_MTSAFE_IO
# if defined __GLIBC__ && __GLIBC__ >= 2
#if 0 /* expanded by -frewrite-includes */
#  include <bits/stdio-lock.h>
#endif /* expanded by -frewrite-includes */
# 150 "/usr/include/libio.h" 3 4
# else
# 151 "/usr/include/libio.h" 3 4
/*# include <comthread.h>*/
# endif
# 153 "/usr/include/libio.h" 3 4
#else
# 154 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;
#endif
# 156 "/usr/include/libio.h" 3 4


/* A streammarker remembers a position in a buffer. */

struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  /* If _pos >= 0
 it points to _buf->Gbase()+_pos. FIXME comment */
  /* if _pos < 0, it points to _buf->eBptr()+_pos. FIXME comment */
  int _pos;
#if 0
    void set_streampos(streampos sp) { _spos = sp; }
    void set_offset(int offset) { _pos = offset; _spos = (streampos)(-2); }
  public:
    streammarker(streambuf *sb);
    ~streammarker();
    int saving() { return  _spos == -2; }
    int delta(streammarker&);
    int delta();
#endif
# 177 "/usr/include/libio.h" 3 4
};

/* This is the structure from the libstdc++ codecvt class.  */
enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};

#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
/* The order of the elements in the following struct must match the order
   of the virtual functions in the libstdc++ codecvt class.  */
struct _IO_codecvt
{
  void (*__codecvt_destr) (struct _IO_codecvt *);
  enum __codecvt_result (*__codecvt_do_out) (struct _IO_codecvt *,
					     __mbstate_t *,
					     const wchar_t *,
					     const wchar_t *,
					     const wchar_t **, char *,
					     char *, char **);
  enum __codecvt_result (*__codecvt_do_unshift) (struct _IO_codecvt *,
						 __mbstate_t *, char *,
						 char *, char **);
  enum __codecvt_result (*__codecvt_do_in) (struct _IO_codecvt *,
					    __mbstate_t *,
					    const char *, const char *,
					    const char **, wchar_t *,
					    wchar_t *, wchar_t **);
  int (*__codecvt_do_encoding) (struct _IO_codecvt *);
  int (*__codecvt_do_always_noconv) (struct _IO_codecvt *);
  int (*__codecvt_do_length) (struct _IO_codecvt *, __mbstate_t *,
			      const char *, const char *, _IO_size_t);
  int (*__codecvt_do_max_length) (struct _IO_codecvt *);

  _IO_iconv_t __cd_in;
  _IO_iconv_t __cd_out;
};

/* Extra data for wide character streams.  */
struct _IO_wide_data
{
  wchar_t *_IO_read_ptr;	/* Current read pointer */
  wchar_t *_IO_read_end;	/* End of get area. */
  wchar_t *_IO_read_base;	/* Start of putback+get area. */
  wchar_t *_IO_write_base;	/* Start of put area. */
  wchar_t *_IO_write_ptr;	/* Current put pointer. */
  wchar_t *_IO_write_end;	/* End of put area. */
  wchar_t *_IO_buf_base;	/* Start of reserve area. */
  wchar_t *_IO_buf_end;		/* End of reserve area. */
  /* The following fields are used to support backing up and undo. */
  wchar_t *_IO_save_base;	/* Pointer to start of non-current get area. */
  wchar_t *_IO_backup_base;	/* Pointer to first valid character of
				   backup area */
  wchar_t *_IO_save_end;	/* Pointer to end of non-current get area. */

  __mbstate_t _IO_state;
  __mbstate_t _IO_last_state;
  struct _IO_codecvt _codecvt;

  wchar_t _shortbuf[1];

  const struct _IO_jump_t *_wide_vtable;
};
#endif
# 244 "/usr/include/libio.h" 3 4

struct _IO_FILE {
  int _flags;		/* High-order word is _IO_MAGIC; rest is flags. */
#define _IO_file_flags _flags

  /* The following pointers correspond to the C++ streambuf protocol. */
  /* Note:  Tk uses the _IO_read_ptr and _IO_read_end fields directly. */
  char* _IO_read_ptr;	/* Current read pointer */
  char* _IO_read_end;	/* End of get area. */
  char* _IO_read_base;	/* Start of putback+get area. */
  char* _IO_write_base;	/* Start of put area. */
  char* _IO_write_ptr;	/* Current put pointer. */
  char* _IO_write_end;	/* End of put area. */
  char* _IO_buf_base;	/* Start of reserve area. */
  char* _IO_buf_end;	/* End of reserve area. */
  /* The following fields are used to support backing up and undo. */
  char *_IO_save_base; /* Pointer to start of non-current get area. */
  char *_IO_backup_base;  /* Pointer to first valid character of backup area */
  char *_IO_save_end; /* Pointer to end of non-current get area. */

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
#if 0
  int _blksize;
#else
# 272 "/usr/include/libio.h" 3 4
  int _flags2;
#endif
# 274 "/usr/include/libio.h" 3 4
  _IO_off_t _old_offset; /* This used to be _offset but it's too small.  */

#define __HAVE_COLUMN /* temporary */
  /* 1+column number of pbase(); 0 is unknown. */
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  /*  char* _save_gptr;  char* _save_egptr; */

  _IO_lock_t *_lock;
#ifdef _IO_USE_OLD_IO_FILE
};

struct _IO_FILE_complete
{
  struct _IO_FILE _file;
#endif
# 292 "/usr/include/libio.h" 3 4
#if defined _G_IO_IO_FILE_VERSION && _G_IO_IO_FILE_VERSION == 0x20001
  _IO_off64_t _offset;
# if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
  /* Wide character stream stuff.  */
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t _freeres_size;
# else
# 302 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;
# endif
# 308 "/usr/include/libio.h" 3 4
  int _mode;
  /* Make sure we don't get into trouble again.  */
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
#endif
# 312 "/usr/include/libio.h" 3 4
};

#ifndef __cplusplus
typedef struct _IO_FILE _IO_FILE;
#endif
# 317 "/usr/include/libio.h" 3 4

struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
#ifndef _LIBC
#define _IO_stdin ((_IO_FILE*)(&_IO_2_1_stdin_))
#define _IO_stdout ((_IO_FILE*)(&_IO_2_1_stdout_))
#define _IO_stderr ((_IO_FILE*)(&_IO_2_1_stderr_))
#else
# 328 "/usr/include/libio.h" 3 4
extern _IO_FILE *_IO_stdin attribute_hidden;
extern _IO_FILE *_IO_stdout attribute_hidden;
extern _IO_FILE *_IO_stderr attribute_hidden;
#endif
# 332 "/usr/include/libio.h" 3 4


/* Functions to do I/O and file management for a stream.  */

/* Read NBYTES bytes from COOKIE into a buffer pointed to by BUF.
   Return number of bytes read.  */
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);

/* Write N bytes pointed to by BUF to COOKIE.  Write all N bytes
   unless there is an error.  Return number of bytes written.  If
   there is an error, return 0 and do not write anything.  If the file
   has been opened for append (__mode.__append set), then set the file
   pointer to the end of the file and then do the write; if not, just
   write at the current file pointer.  */
typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
				 size_t __n);

/* Move COOKIE's file position to *POS bytes from the
   beginning of the file (if W is SEEK_SET),
   the current position (if W is SEEK_CUR),
   or the end of the file (if W is SEEK_END).
   Set *POS to the new file position.
   Returns zero if successful, nonzero if not.  */
typedef int __io_seek_fn (void *__cookie, _IO_off64_t *__pos, int __w);

/* Close COOKIE.  */
typedef int __io_close_fn (void *__cookie);


#ifdef _GNU_SOURCE
/* User-visible names for the above.  */
typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;

/* The structure with the cookie function pointers.  */
typedef struct
{
  __io_read_fn *read;		/* Read bytes.  */
  __io_write_fn *write;		/* Write bytes.  */
  __io_seek_fn *seek;		/* Seek/tell file position.  */
  __io_close_fn *close;		/* Close file.  */
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;

/* Initialize one of those.  */
extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
			     void *__cookie, _IO_cookie_io_functions_t __fns);
#endif
# 384 "/usr/include/libio.h" 3 4


#ifdef __cplusplus
extern "C" {
#endif
# 389 "/usr/include/libio.h" 3 4

extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
extern _IO_wint_t __wunderflow (_IO_FILE *);
extern _IO_wint_t __wuflow (_IO_FILE *);
extern _IO_wint_t __woverflow (_IO_FILE *, _IO_wint_t);
#endif
# 398 "/usr/include/libio.h" 3 4

#if  __GNUC__ >= 3
# define _IO_BE(expr, res) __builtin_expect ((expr), res)
#else
# 402 "/usr/include/libio.h" 3 4
# define _IO_BE(expr, res) (expr)
#endif
# 404 "/usr/include/libio.h" 3 4

#define _IO_getc_unlocked(_fp) \
       (_IO_BE ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end, 0) \
	? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define _IO_peekc_unlocked(_fp) \
       (_IO_BE ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end, 0) \
	  && __underflow (_fp) == EOF ? EOF \
	: *(unsigned char *) (_fp)->_IO_read_ptr)
#define _IO_putc_unlocked(_ch, _fp) \
   (_IO_BE ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end, 0) \
    ? __overflow (_fp, (unsigned char) (_ch)) \
    : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))

#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
# define _IO_getwc_unlocked(_fp) \
  (_IO_BE ((_fp)->_wide_data == NULL					\
	   || ((_fp)->_wide_data->_IO_read_ptr				\
	       >= (_fp)->_wide_data->_IO_read_end), 0)			\
   ? __wuflow (_fp) : (_IO_wint_t) *(_fp)->_wide_data->_IO_read_ptr++)
# define _IO_putwc_unlocked(_wch, _fp) \
  (_IO_BE ((_fp)->_wide_data == NULL					\
	   || ((_fp)->_wide_data->_IO_write_ptr				\
	       >= (_fp)->_wide_data->_IO_write_end), 0)			\
   ? __woverflow (_fp, _wch)						\
   : (_IO_wint_t) (*(_fp)->_wide_data->_IO_write_ptr++ = (_wch)))
#endif
# 430 "/usr/include/libio.h" 3 4

#define _IO_feof_unlocked(__fp) (((__fp)->_flags & _IO_EOF_SEEN) != 0)
#define _IO_ferror_unlocked(__fp) (((__fp)->_flags & _IO_ERR_SEEN) != 0)

extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __THROW;
extern int _IO_ferror (_IO_FILE *__fp) __THROW;

extern int _IO_peekc_locked (_IO_FILE *__fp);

/* This one is for Emacs. */
#define _IO_PENDING_OUTPUT_COUNT(_fp)	\
	((_fp)->_IO_write_ptr - (_fp)->_IO_write_base)

extern void _IO_flockfile (_IO_FILE *) __THROW;
extern void _IO_funlockfile (_IO_FILE *) __THROW;
extern int _IO_ftrylockfile (_IO_FILE *) __THROW;

#ifdef _IO_MTSAFE_IO
# define _IO_peekc(_fp) _IO_peekc_locked (_fp)
# define _IO_flockfile(_fp) \
  if (((_fp)->_flags & _IO_USER_LOCK) == 0) _IO_flockfile (_fp)
# define _IO_funlockfile(_fp) \
  if (((_fp)->_flags & _IO_USER_LOCK) == 0) _IO_funlockfile (_fp)
#else
# 456 "/usr/include/libio.h" 3 4
# define _IO_peekc(_fp) _IO_peekc_unlocked (_fp)
# define _IO_flockfile(_fp) /**/
# define _IO_funlockfile(_fp) /**/
# define _IO_ftrylockfile(_fp) /**/
# define _IO_cleanup_region_start(_fct, _fp) /**/
# define _IO_cleanup_region_end(_Doit) /**/
#endif /* !_IO_MTSAFE_IO */
# 463 "/usr/include/libio.h" 3 4

extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
			_IO_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
			 _IO_va_list);
extern _IO_ssize_t _IO_padn (_IO_FILE *, int, _IO_ssize_t);
extern _IO_size_t _IO_sgetn (_IO_FILE *, void *, _IO_size_t);

extern _IO_off64_t _IO_seekoff (_IO_FILE *, _IO_off64_t, int, int);
extern _IO_off64_t _IO_seekpos (_IO_FILE *, _IO_off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __THROW;

#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
extern _IO_wint_t _IO_getwc (_IO_FILE *__fp);
extern _IO_wint_t _IO_putwc (wchar_t __wc, _IO_FILE *__fp);
extern int _IO_fwide (_IO_FILE *__fp, int __mode) __THROW;
# if __GNUC__ >= 2
/* While compiling glibc we have to handle compatibility with very old
   versions.  */
#  if defined _LIBC && defined SHARED
#if 0 /* expanded by -frewrite-includes */
#   include <shlib-compat.h>
#endif /* expanded by -frewrite-includes */
# 485 "/usr/include/libio.h" 3 4
#   if SHLIB_COMPAT (libc, GLIBC_2_0, GLIBC_2_1)
#    define _IO_fwide_maybe_incompatible \
  (__builtin_expect (&_IO_stdin_used == NULL, 0))
extern const int _IO_stdin_used;
weak_extern (_IO_stdin_used);
#   endif
# 491 "/usr/include/libio.h" 3 4
#  endif
# 492 "/usr/include/libio.h" 3 4
#  ifndef _IO_fwide_maybe_incompatible
#   define _IO_fwide_maybe_incompatible (0)
#  endif
# 495 "/usr/include/libio.h" 3 4
/* A special optimized version of the function above.  It optimizes the
   case of initializing an unoriented byte stream.  */
#  define _IO_fwide(__fp, __mode) \
  ({ int __result = (__mode);						      \
     if (__result < 0 && ! _IO_fwide_maybe_incompatible)		      \
       {								      \
	 if ((__fp)->_mode == 0)					      \
	   /* We know that all we have to do is to set the flag.  */	      \
	   (__fp)->_mode = -1;						      \
	 __result = (__fp)->_mode;					      \
       }								      \
     else if (__builtin_constant_p (__mode) && (__mode) == 0)		      \
       __result = _IO_fwide_maybe_incompatible ? -1 : (__fp)->_mode;	      \
     else								      \
       __result = _IO_fwide (__fp, __result);				      \
     __result; })
# endif
# 512 "/usr/include/libio.h" 3 4

extern int _IO_vfwscanf (_IO_FILE * __restrict, const wchar_t * __restrict,
			 _IO_va_list, int *__restrict);
extern int _IO_vfwprintf (_IO_FILE *__restrict, const wchar_t *__restrict,
			  _IO_va_list);
extern _IO_ssize_t _IO_wpadn (_IO_FILE *, wint_t, _IO_ssize_t);
extern void _IO_free_wbackup_area (_IO_FILE *) __THROW;
#endif
# 520 "/usr/include/libio.h" 3 4

#ifdef __LDBL_COMPAT
#if 0 /* expanded by -frewrite-includes */
# include <bits/libio-ldbl.h>
#endif /* expanded by -frewrite-includes */
# 523 "/usr/include/libio.h" 3 4
#endif
# 524 "/usr/include/libio.h" 3 4

#ifdef __cplusplus
}
#endif
# 528 "/usr/include/libio.h" 3 4

#endif /* _IO_STDIO_H */
# 530 "/usr/include/libio.h" 3 4
# 75 "/usr/include/stdio.h" 2 3 4

#if defined __USE_XOPEN || defined __USE_XOPEN2K8
# ifdef __GNUC__
#  ifndef _VA_LIST_DEFINED
typedef _G_va_list va_list;
#   define _VA_LIST_DEFINED
#  endif
# 82 "/usr/include/stdio.h" 3 4
# else
# 83 "/usr/include/stdio.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#  include <stdarg.h>
#endif /* expanded by -frewrite-includes */
# 84 "/usr/include/stdio.h" 3 4
# endif
# 85 "/usr/include/stdio.h" 3 4
#endif
# 86 "/usr/include/stdio.h" 3 4

#ifdef __USE_XOPEN2K8
# ifndef __off_t_defined
# ifndef __USE_FILE_OFFSET64
typedef __off_t off_t;
# else
# 92 "/usr/include/stdio.h" 3 4
typedef __off64_t off_t;
# endif
# 94 "/usr/include/stdio.h" 3 4
# define __off_t_defined
# endif
# 96 "/usr/include/stdio.h" 3 4
# if defined __USE_LARGEFILE64 && !defined __off64_t_defined
typedef __off64_t off64_t;
# define __off64_t_defined
# endif
# 100 "/usr/include/stdio.h" 3 4

# ifndef __ssize_t_defined
typedef __ssize_t ssize_t;
# define __ssize_t_defined
# endif
# 105 "/usr/include/stdio.h" 3 4
#endif
# 106 "/usr/include/stdio.h" 3 4

/* The type of the second argument to `fgetpos' and `fsetpos'.  */
__BEGIN_NAMESPACE_STD
#ifndef __USE_FILE_OFFSET64
typedef _G_fpos_t fpos_t;
#else
# 112 "/usr/include/stdio.h" 3 4
typedef _G_fpos64_t fpos_t;
#endif
# 114 "/usr/include/stdio.h" 3 4
__END_NAMESPACE_STD
#ifdef __USE_LARGEFILE64
typedef _G_fpos64_t fpos64_t;
#endif
# 118 "/usr/include/stdio.h" 3 4

/* The possibilities for the third argument to `setvbuf'.  */
#define _IOFBF 0		/* Fully buffered.  */
#define _IOLBF 1		/* Line buffered.  */
#define _IONBF 2		/* No buffering.  */


/* Default buffer size.  */
#ifndef BUFSIZ
# define BUFSIZ _IO_BUFSIZ
#endif
# 129 "/usr/include/stdio.h" 3 4


/* End of file character.
   Some things throughout the library rely on this being -1.  */
#ifndef EOF
# define EOF (-1)
#endif
# 136 "/usr/include/stdio.h" 3 4


/* The possibilities for the third argument to `fseek'.
   These values should not be changed.  */
#define SEEK_SET	0	/* Seek from beginning of file.  */
#define SEEK_CUR	1	/* Seek from current position.  */
#define SEEK_END	2	/* Seek from end of file.  */
#ifdef __USE_GNU
# define SEEK_DATA	3	/* Seek to next data.  */
# define SEEK_HOLE	4	/* Seek to next hole.  */
#endif
# 147 "/usr/include/stdio.h" 3 4


#if defined __USE_SVID || defined __USE_XOPEN
/* Default path prefix for `tempnam' and `tmpnam'.  */
# define P_tmpdir	"/tmp"
#endif
# 153 "/usr/include/stdio.h" 3 4


/* Get the values:
   L_tmpnam	How long an array of chars must be to be passed to `tmpnam'.
   TMP_MAX	The minimum number of unique filenames generated by tmpnam
		(and tempnam when it uses tmpnam's name space),
		or tempnam (the two are separate).
   L_ctermid	How long an array to pass to `ctermid'.
   L_cuserid	How long an array to pass to `cuserid'.
   FOPEN_MAX	Minimum number of files that can be open at once.
   FILENAME_MAX	Maximum length of a filename.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/stdio_lim.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
/* Copyright (C) 1994-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#if !defined _STDIO_H && !defined __need_FOPEN_MAX && !defined __need_IOV_MAX
# error "Never include <bits/stdio_lim.h> directly; use <stdio.h> instead."
#endif
# 21 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 3 4

#ifdef _STDIO_H
# define L_tmpnam 20
# define TMP_MAX 238328
# define FILENAME_MAX 4096

# ifdef __USE_POSIX
#  define L_ctermid 9
#  if !defined __USE_XOPEN2K || defined __USE_GNU
#   define L_cuserid 9
#  endif
# 32 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 3 4
# endif
# 33 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 3 4
#endif
# 34 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 3 4

#if defined __need_FOPEN_MAX || defined _STDIO_H
# undef  FOPEN_MAX
# define FOPEN_MAX 16
#endif
# 39 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 3 4

#if defined __need_IOV_MAX && !defined IOV_MAX
# define IOV_MAX 1024
#endif
# 43 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 3 4
# 165 "/usr/include/stdio.h" 2 3 4


/* Standard streams.  */
extern struct _IO_FILE *stdin;		/* Standard input stream.  */
extern struct _IO_FILE *stdout;		/* Standard output stream.  */
extern struct _IO_FILE *stderr;		/* Standard error output stream.  */
/* C89/C99 say they're macros.  Make them happy.  */
#define stdin stdin
#define stdout stdout
#define stderr stderr

__BEGIN_NAMESPACE_STD
/* Remove file FILENAME.  */
extern int remove (const char *__filename) __THROW;
/* Rename file OLD to NEW.  */
extern int rename (const char *__old, const char *__new) __THROW;
__END_NAMESPACE_STD

#ifdef __USE_ATFILE
/* Rename file OLD relative to OLDFD to NEW relative to NEWFD.  */
extern int renameat (int __oldfd, const char *__old, int __newfd,
		     const char *__new) __THROW;
#endif
# 188 "/usr/include/stdio.h" 3 4

__BEGIN_NAMESPACE_STD
/* Create a temporary file and open it read/write.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
#ifndef __USE_FILE_OFFSET64
extern FILE *tmpfile (void) __wur;
#else
# 197 "/usr/include/stdio.h" 3 4
# ifdef __REDIRECT
extern FILE *__REDIRECT (tmpfile, (void), tmpfile64) __wur;
# else
# 200 "/usr/include/stdio.h" 3 4
#  define tmpfile tmpfile64
# endif
# 202 "/usr/include/stdio.h" 3 4
#endif
# 203 "/usr/include/stdio.h" 3 4

#ifdef __USE_LARGEFILE64
extern FILE *tmpfile64 (void) __wur;
#endif
# 207 "/usr/include/stdio.h" 3 4

/* Generate a temporary filename.  */
extern char *tmpnam (char *__s) __THROW __wur;
__END_NAMESPACE_STD

#ifdef __USE_MISC
/* This is the reentrant variant of `tmpnam'.  The only difference is
   that it does not allow S to be NULL.  */
extern char *tmpnam_r (char *__s) __THROW __wur;
#endif
# 217 "/usr/include/stdio.h" 3 4


#if defined __USE_SVID || defined __USE_XOPEN
/* Generate a unique temporary filename using up to five characters of PFX
   if it is not NULL.  The directory to put this file in is searched for
   as follows: First the environment variable "TMPDIR" is checked.
   If it contains the name of a writable directory, that directory is used.
   If not and if DIR is not NULL, that value is checked.  If that fails,
   P_tmpdir is tried and finally "/tmp".  The storage for the filename
   is allocated by `malloc'.  */
extern char *tempnam (const char *__dir, const char *__pfx)
     __THROW __attribute_malloc__ __wur;
#endif
# 230 "/usr/include/stdio.h" 3 4


__BEGIN_NAMESPACE_STD
/* Close STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fclose (FILE *__stream);
/* Flush STREAM, or all streams if STREAM is NULL.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fflush (FILE *__stream);
__END_NAMESPACE_STD

#ifdef __USE_MISC
/* Faster versions when locking is not required.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fflush_unlocked (FILE *__stream);
#endif
# 254 "/usr/include/stdio.h" 3 4

#ifdef __USE_GNU
/* Close all streams.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fcloseall (void);
#endif
# 264 "/usr/include/stdio.h" 3 4


__BEGIN_NAMESPACE_STD
#ifndef __USE_FILE_OFFSET64
/* Open a file and create a new stream for it.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *fopen (const char *__restrict __filename,
		    const char *__restrict __modes) __wur;
/* Open a file, replacing an existing stream with it.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *freopen (const char *__restrict __filename,
		      const char *__restrict __modes,
		      FILE *__restrict __stream) __wur;
#else
# 282 "/usr/include/stdio.h" 3 4
# ifdef __REDIRECT
extern FILE *__REDIRECT (fopen, (const char *__restrict __filename,
				 const char *__restrict __modes), fopen64)
  __wur;
extern FILE *__REDIRECT (freopen, (const char *__restrict __filename,
				   const char *__restrict __modes,
				   FILE *__restrict __stream), freopen64)
  __wur;
# else
# 291 "/usr/include/stdio.h" 3 4
#  define fopen fopen64
#  define freopen freopen64
# endif
# 294 "/usr/include/stdio.h" 3 4
#endif
# 295 "/usr/include/stdio.h" 3 4
__END_NAMESPACE_STD
#ifdef __USE_LARGEFILE64
extern FILE *fopen64 (const char *__restrict __filename,
		      const char *__restrict __modes) __wur;
extern FILE *freopen64 (const char *__restrict __filename,
			const char *__restrict __modes,
			FILE *__restrict __stream) __wur;
#endif
# 303 "/usr/include/stdio.h" 3 4

#ifdef	__USE_POSIX
/* Create a new stream that refers to an existing system file descriptor.  */
extern FILE *fdopen (int __fd, const char *__modes) __THROW __wur;
#endif
# 308 "/usr/include/stdio.h" 3 4

#ifdef	__USE_GNU
/* Create a new stream that refers to the given magic cookie,
   and uses the given functions for input and output.  */
extern FILE *fopencookie (void *__restrict __magic_cookie,
			  const char *__restrict __modes,
			  _IO_cookie_io_functions_t __io_funcs) __THROW __wur;
#endif
# 316 "/usr/include/stdio.h" 3 4

#ifdef __USE_XOPEN2K8
/* Create a new stream that refers to a memory buffer.  */
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __THROW __wur;

/* Open a stream that writes into a malloc'd buffer that is expanded as
   necessary.  *BUFLOC and *SIZELOC are updated with the buffer's location
   and the number of characters written on fflush or fclose.  */
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __THROW __wur;
#endif
# 327 "/usr/include/stdio.h" 3 4


__BEGIN_NAMESPACE_STD
/* If BUF is NULL, make STREAM unbuffered.
   Else make it use buffer BUF, of size BUFSIZ.  */
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __THROW;
/* Make STREAM use buffering mode MODE.
   If BUF is not NULL, use N bytes of it for buffering;
   else allocate an internal buffer N bytes long.  */
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
		    int __modes, size_t __n) __THROW;
__END_NAMESPACE_STD

#ifdef	__USE_BSD
/* If BUF is NULL, make STREAM unbuffered.
   Else make it use SIZE bytes of BUF for buffering.  */
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
		       size_t __size) __THROW;

/* Make STREAM line-buffered.  */
extern void setlinebuf (FILE *__stream) __THROW;
#endif
# 349 "/usr/include/stdio.h" 3 4


__BEGIN_NAMESPACE_STD
/* Write formatted output to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fprintf (FILE *__restrict __stream,
		    const char *__restrict __format, ...);
/* Write formatted output to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int printf (const char *__restrict __format, ...);
/* Write formatted output to S.  */
extern int sprintf (char *__restrict __s,
		    const char *__restrict __format, ...) __THROWNL;

/* Write formatted output to S from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
		     _G_va_list __arg);
/* Write formatted output to stdout from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vprintf (const char *__restrict __format, _G_va_list __arg);
/* Write formatted output to S from argument list ARG.  */
extern int vsprintf (char *__restrict __s, const char *__restrict __format,
		     _G_va_list __arg) __THROWNL;
__END_NAMESPACE_STD

#if defined __USE_BSD || defined __USE_ISOC99 || defined __USE_UNIX98
__BEGIN_NAMESPACE_C99
/* Maximum chars of output to write in MAXLEN.  */
extern int snprintf (char *__restrict __s, size_t __maxlen,
		     const char *__restrict __format, ...)
     __THROWNL __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
		      const char *__restrict __format, _G_va_list __arg)
     __THROWNL __attribute__ ((__format__ (__printf__, 3, 0)));
__END_NAMESPACE_C99
#endif
# 395 "/usr/include/stdio.h" 3 4

#ifdef __USE_GNU
/* Write formatted output to a string dynamically allocated with `malloc'.
   Store the address of the string in *PTR.  */
extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
		      _G_va_list __arg)
     __THROWNL __attribute__ ((__format__ (__printf__, 2, 0))) __wur;
extern int __asprintf (char **__restrict __ptr,
		       const char *__restrict __fmt, ...)
     __THROWNL __attribute__ ((__format__ (__printf__, 2, 3))) __wur;
extern int asprintf (char **__restrict __ptr,
		     const char *__restrict __fmt, ...)
     __THROWNL __attribute__ ((__format__ (__printf__, 2, 3))) __wur;
#endif
# 409 "/usr/include/stdio.h" 3 4

#ifdef __USE_XOPEN2K8
/* Write formatted output to a file descriptor.  */
extern int vdprintf (int __fd, const char *__restrict __fmt,
		     _G_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
#endif
# 418 "/usr/include/stdio.h" 3 4


__BEGIN_NAMESPACE_STD
/* Read formatted input from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fscanf (FILE *__restrict __stream,
		   const char *__restrict __format, ...) __wur;
/* Read formatted input from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int scanf (const char *__restrict __format, ...) __wur;
/* Read formatted input from S.  */
extern int sscanf (const char *__restrict __s,
		   const char *__restrict __format, ...) __THROW;

#if defined __USE_ISOC99 && !defined __USE_GNU \
    && (!defined __LDBL_COMPAT || !defined __REDIRECT) \
    && (defined __STRICT_ANSI__ || defined __USE_XOPEN2K)
# ifdef __REDIRECT
/* For strict ISO C99 or POSIX compliance disallow %as, %aS and %a[
   GNU extension which conflicts with valid %a followed by letter
   s, S or [.  */
extern int __REDIRECT (fscanf, (FILE *__restrict __stream,
				const char *__restrict __format, ...),
		       __isoc99_fscanf) __wur;
extern int __REDIRECT (scanf, (const char *__restrict __format, ...),
		       __isoc99_scanf) __wur;
extern int __REDIRECT_NTH (sscanf, (const char *__restrict __s,
				    const char *__restrict __format, ...),
			   __isoc99_sscanf);
# else
# 452 "/usr/include/stdio.h" 3 4
extern int __isoc99_fscanf (FILE *__restrict __stream,
			    const char *__restrict __format, ...) __wur;
extern int __isoc99_scanf (const char *__restrict __format, ...) __wur;
extern int __isoc99_sscanf (const char *__restrict __s,
			    const char *__restrict __format, ...) __THROW;
#  define fscanf __isoc99_fscanf
#  define scanf __isoc99_scanf
#  define sscanf __isoc99_sscanf
# endif
# 461 "/usr/include/stdio.h" 3 4
#endif
# 462 "/usr/include/stdio.h" 3 4

__END_NAMESPACE_STD

#ifdef	__USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Read formatted input from S into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
		    _G_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __wur;

/* Read formatted input from stdin into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vscanf (const char *__restrict __format, _G_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __wur;

/* Read formatted input from S into argument list ARG.  */
extern int vsscanf (const char *__restrict __s,
		    const char *__restrict __format, _G_va_list __arg)
     __THROW __attribute__ ((__format__ (__scanf__, 2, 0)));

# if !defined __USE_GNU \
     && (!defined __LDBL_COMPAT || !defined __REDIRECT) \
     && (defined __STRICT_ANSI__ || defined __USE_XOPEN2K)
#  ifdef __REDIRECT
/* For strict ISO C99 or POSIX compliance disallow %as, %aS and %a[
   GNU extension which conflicts with valid %a followed by letter
   s, S or [.  */
extern int __REDIRECT (vfscanf,
		       (FILE *__restrict __s,
			const char *__restrict __format, _G_va_list __arg),
		       __isoc99_vfscanf)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __wur;
extern int __REDIRECT (vscanf, (const char *__restrict __format,
				_G_va_list __arg), __isoc99_vscanf)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __wur;
extern int __REDIRECT_NTH (vsscanf,
			   (const char *__restrict __s,
			    const char *__restrict __format,
			    _G_va_list __arg), __isoc99_vsscanf)
     __attribute__ ((__format__ (__scanf__, 2, 0)));
#  else
# 508 "/usr/include/stdio.h" 3 4
extern int __isoc99_vfscanf (FILE *__restrict __s,
			     const char *__restrict __format,
			     _G_va_list __arg) __wur;
extern int __isoc99_vscanf (const char *__restrict __format,
			    _G_va_list __arg) __wur;
extern int __isoc99_vsscanf (const char *__restrict __s,
			     const char *__restrict __format,
			     _G_va_list __arg) __THROW;
#   define vfscanf __isoc99_vfscanf
#   define vscanf __isoc99_vscanf
#   define vsscanf __isoc99_vsscanf
#  endif
# 520 "/usr/include/stdio.h" 3 4
# endif
# 521 "/usr/include/stdio.h" 3 4

__END_NAMESPACE_C99
#endif /* Use ISO C9x.  */
# 524 "/usr/include/stdio.h" 3 4


__BEGIN_NAMESPACE_STD
/* Read a character from STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);

/* Read a character from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int getchar (void);
__END_NAMESPACE_STD

/* The C standard explicitly says this is a macro, so we always do the
   optimization for it.  */
#define getc(_fp) _IO_getc (_fp)

#if defined __USE_POSIX || defined __USE_MISC
/* These are defined in POSIX.1:1996.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
#endif /* Use POSIX or MISC.  */
# 553 "/usr/include/stdio.h" 3 4

#ifdef __USE_MISC
/* Faster version when locking is not necessary.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fgetc_unlocked (FILE *__stream);
#endif /* Use MISC.  */
# 563 "/usr/include/stdio.h" 3 4


__BEGIN_NAMESPACE_STD
/* Write a character to STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.

   These functions is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);

/* Write a character to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int putchar (int __c);
__END_NAMESPACE_STD

/* The C standard explicitly says this can be a macro,
   so we always do the optimization for it.  */
#define putc(_ch, _fp) _IO_putc (_ch, _fp)

#ifdef __USE_MISC
/* Faster version when locking is not necessary.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fputc_unlocked (int __c, FILE *__stream);
#endif /* Use MISC.  */
# 596 "/usr/include/stdio.h" 3 4

#if defined __USE_POSIX || defined __USE_MISC
/* These are defined in POSIX.1:1996.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
#endif /* Use POSIX or MISC.  */
# 605 "/usr/include/stdio.h" 3 4


#if defined __USE_SVID || defined __USE_MISC \
    || (defined __USE_XOPEN && !defined __USE_XOPEN2K)
/* Get a word (int) from STREAM.  */
extern int getw (FILE *__stream);

/* Write a word (int) to STREAM.  */
extern int putw (int __w, FILE *__stream);
#endif
# 615 "/usr/include/stdio.h" 3 4


__BEGIN_NAMESPACE_STD
/* Get a newline-terminated string of finite length from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __wur;

#if !defined __USE_ISOC11 \
    || (defined __cplusplus && __cplusplus <= 201103L)
/* Get a newline-terminated string from stdin, removing the newline.
   DO NOT USE THIS FUNCTION!!  There is no limit on how much it will read.

   The function has been officially removed in ISO C11.  This opportunity
   is used to also remove it from the GNU feature list.  It is now only
   available when explicitly using an old ISO C, Unix, or POSIX standard.
   GCC defines _GNU_SOURCE when building C++ code and the function is still
   in C++11, so it is also available for C++.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *gets (char *__s) __wur __attribute_deprecated__;
#endif
# 640 "/usr/include/stdio.h" 3 4
__END_NAMESPACE_STD

#ifdef __USE_GNU
/* This function does the same as `fgets' but does not lock the stream.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern char *fgets_unlocked (char *__restrict __s, int __n,
			     FILE *__restrict __stream) __wur;
#endif
# 652 "/usr/include/stdio.h" 3 4


#ifdef	__USE_XOPEN2K8
/* Read up to (and including) a DELIMITER from STREAM into *LINEPTR
   (and null-terminate it). *LINEPTR is a pointer returned from malloc (or
   NULL), pointing to *N characters of space.  It is realloc'd as
   necessary.  Returns the number of characters read (not including the
   null terminator), or -1 on error or EOF.

   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern _IO_ssize_t __getdelim (char **__restrict __lineptr,
			       size_t *__restrict __n, int __delimiter,
			       FILE *__restrict __stream) __wur;
extern _IO_ssize_t getdelim (char **__restrict __lineptr,
			     size_t *__restrict __n, int __delimiter,
			     FILE *__restrict __stream) __wur;

/* Like `getdelim', but reads up to a newline.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern _IO_ssize_t getline (char **__restrict __lineptr,
			    size_t *__restrict __n,
			    FILE *__restrict __stream) __wur;
#endif
# 682 "/usr/include/stdio.h" 3 4


__BEGIN_NAMESPACE_STD
/* Write a string to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);

/* Write a string, followed by a newline, to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int puts (const char *__s);


/* Push a character back onto the input buffer of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int ungetc (int __c, FILE *__stream);


/* Read chunks of generic data from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern size_t fread (void *__restrict __ptr, size_t __size,
		     size_t __n, FILE *__restrict __stream) __wur;
/* Write chunks of generic data to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern size_t fwrite (const void *__restrict __ptr, size_t __size,
		      size_t __n, FILE *__restrict __s);
__END_NAMESPACE_STD

#ifdef __USE_GNU
/* This function does the same as `fputs' but does not lock the stream.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fputs_unlocked (const char *__restrict __s,
			   FILE *__restrict __stream);
#endif
# 729 "/usr/include/stdio.h" 3 4

#ifdef __USE_MISC
/* Faster versions when locking is not necessary.

   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
			      size_t __n, FILE *__restrict __stream) __wur;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
			       size_t __n, FILE *__restrict __stream);
#endif
# 742 "/usr/include/stdio.h" 3 4


__BEGIN_NAMESPACE_STD
/* Seek to a certain position on STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fseek (FILE *__stream, long int __off, int __whence);
/* Return the current position of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern long int ftell (FILE *__stream) __wur;
/* Rewind to the beginning of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void rewind (FILE *__stream);
__END_NAMESPACE_STD

/* The Single Unix Specification, Version 2, specifies an alternative,
   more adequate interface for the two functions above which deal with
   file offset.  `long int' is not the right type.  These definitions
   are originally defined in the Large File Support API.  */

#if defined __USE_LARGEFILE || defined __USE_XOPEN2K
# ifndef __USE_FILE_OFFSET64
/* Seek to a certain position on STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
/* Return the current position of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern __off_t ftello (FILE *__stream) __wur;
# else
# 780 "/usr/include/stdio.h" 3 4
#  ifdef __REDIRECT
extern int __REDIRECT (fseeko,
		       (FILE *__stream, __off64_t __off, int __whence),
		       fseeko64);
extern __off64_t __REDIRECT (ftello, (FILE *__stream), ftello64);
#  else
# 786 "/usr/include/stdio.h" 3 4
#   define fseeko fseeko64
#   define ftello ftello64
#  endif
# 789 "/usr/include/stdio.h" 3 4
# endif
# 790 "/usr/include/stdio.h" 3 4
#endif
# 791 "/usr/include/stdio.h" 3 4

__BEGIN_NAMESPACE_STD
#ifndef __USE_FILE_OFFSET64
/* Get STREAM's position.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
/* Set STREAM's position.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fsetpos (FILE *__stream, const fpos_t *__pos);
#else
# 805 "/usr/include/stdio.h" 3 4
# ifdef __REDIRECT
extern int __REDIRECT (fgetpos, (FILE *__restrict __stream,
				 fpos_t *__restrict __pos), fgetpos64);
extern int __REDIRECT (fsetpos,
		       (FILE *__stream, const fpos_t *__pos), fsetpos64);
# else
# 811 "/usr/include/stdio.h" 3 4
#  define fgetpos fgetpos64
#  define fsetpos fsetpos64
# endif
# 814 "/usr/include/stdio.h" 3 4
#endif
# 815 "/usr/include/stdio.h" 3 4
__END_NAMESPACE_STD

#ifdef __USE_LARGEFILE64
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) __wur;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);
#endif
# 823 "/usr/include/stdio.h" 3 4

__BEGIN_NAMESPACE_STD
/* Clear the error and EOF indicators for STREAM.  */
extern void clearerr (FILE *__stream) __THROW;
/* Return the EOF indicator for STREAM.  */
extern int feof (FILE *__stream) __THROW __wur;
/* Return the error indicator for STREAM.  */
extern int ferror (FILE *__stream) __THROW __wur;
__END_NAMESPACE_STD

#ifdef __USE_MISC
/* Faster versions when locking is not required.  */
extern void clearerr_unlocked (FILE *__stream) __THROW;
extern int feof_unlocked (FILE *__stream) __THROW __wur;
extern int ferror_unlocked (FILE *__stream) __THROW __wur;
#endif
# 839 "/usr/include/stdio.h" 3 4


__BEGIN_NAMESPACE_STD
/* Print a message describing the meaning of the value of errno.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void perror (const char *__s);
__END_NAMESPACE_STD

/* Provide the declarations for `sys_errlist' and `sys_nerr' if they
   are available on this system.  Even if available, these variables
   should not be used directly.  The `strerror' function provides
   all the necessary functionality.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/sys_errlist.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
/* Declare sys_errlist and sys_nerr, or don't.  Compatibility (do) version.
   Copyright (C) 2002-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _STDIO_H
# error "Never include <bits/sys_errlist.h> directly; use <stdio.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4

/* sys_errlist and sys_nerr are deprecated.  Use strerror instead.  */

#ifdef  __USE_BSD
extern int sys_nerr;
extern const char *const sys_errlist[];
#endif
# 29 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
#ifdef  __USE_GNU
extern int _sys_nerr;
extern const char *const _sys_errlist[];
#endif
# 33 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
# 854 "/usr/include/stdio.h" 2 3 4


#ifdef	__USE_POSIX
/* Return the system file descriptor for STREAM.  */
extern int fileno (FILE *__stream) __THROW __wur;
#endif /* Use POSIX.  */
# 860 "/usr/include/stdio.h" 3 4

#ifdef __USE_MISC
/* Faster version when locking is not required.  */
extern int fileno_unlocked (FILE *__stream) __THROW __wur;
#endif
# 865 "/usr/include/stdio.h" 3 4


#if (defined __USE_POSIX2 || defined __USE_SVID  || defined __USE_BSD || \
     defined __USE_MISC)
/* Create a new stream connected to a pipe running the given command.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *popen (const char *__command, const char *__modes) __wur;

/* Close a stream opened by popen and return the status of its child.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int pclose (FILE *__stream);
#endif
# 881 "/usr/include/stdio.h" 3 4


#ifdef	__USE_POSIX
/* Return the name of the controlling terminal.  */
extern char *ctermid (char *__s) __THROW;
#endif /* Use POSIX.  */
# 887 "/usr/include/stdio.h" 3 4


#ifdef __USE_XOPEN
/* Return the name of the current user.  */
extern char *cuserid (char *__s);
#endif /* Use X/Open, but not issue 6.  */
# 893 "/usr/include/stdio.h" 3 4


#ifdef	__USE_GNU
struct obstack;			/* See <obstack.h>.  */

/* Write formatted output to an obstack.  */
extern int obstack_printf (struct obstack *__restrict __obstack,
			   const char *__restrict __format, ...)
     __THROWNL __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
			    const char *__restrict __format,
			    _G_va_list __args)
     __THROWNL __attribute__ ((__format__ (__printf__, 2, 0)));
#endif /* Use GNU.  */
# 907 "/usr/include/stdio.h" 3 4


#if defined __USE_POSIX || defined __USE_MISC
/* These are defined in POSIX.1:1996.  */

/* Acquire ownership of STREAM.  */
extern void flockfile (FILE *__stream) __THROW;

/* Try to acquire ownership of STREAM but do not block if it is not
   possible.  */
extern int ftrylockfile (FILE *__stream) __THROW __wur;

/* Relinquish the ownership granted for STREAM.  */
extern void funlockfile (FILE *__stream) __THROW;
#endif /* POSIX || misc */
# 922 "/usr/include/stdio.h" 3 4

#if defined __USE_XOPEN && !defined __USE_XOPEN2K && !defined __USE_GNU
/* The X/Open standard requires some functions and variables to be
   declared here which do not belong into this header.  But we have to
   follow.  In GNU mode we don't do this nonsense.  */
# define __need_getopt
#if 0 /* expanded by -frewrite-includes */
# include <getopt.h>
#endif /* expanded by -frewrite-includes */
# 929 "/usr/include/stdio.h" 3 4
#endif	/* X/Open, but not issue 6 and not for GNU.  */
# 930 "/usr/include/stdio.h" 3 4

/* If we are compiling with optimizing read this file.  It contains
   several optimizing inline functions and macros.  */
#ifdef __USE_EXTERN_INLINES
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdio.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 1 3 4
/* Optimizing macros and inline functions for stdio functions.
   Copyright (C) 1998-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _STDIO_H
# error "Never include <bits/stdio.h> directly; use <stdio.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4

#ifndef __extern_inline
# define __STDIO_INLINE inline
#else
# 26 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
# define __STDIO_INLINE __extern_inline
#endif
# 28 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4


#ifdef __USE_EXTERN_INLINES
/* For -D_FORTIFY_SOURCE{,=2} bits/stdio2.h will define a different
   inline.  */
# if !(__USE_FORTIFY_LEVEL > 0 && defined __fortify_function)
/* Write formatted output to stdout from argument list ARG.  */
__STDIO_INLINE int
vprintf (const char *__restrict __fmt, _G_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}
# endif
# 41 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4

/* Read a character from stdin.  */
__STDIO_INLINE int
getchar (void)
{
  return _IO_getc (stdin);
}


# ifdef __USE_MISC
/* Faster version when locking is not necessary.  */
__STDIO_INLINE int
fgetc_unlocked (FILE *__fp)
{
  return _IO_getc_unlocked (__fp);
}
# endif /* misc */
# 58 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4


# if defined __USE_POSIX || defined __USE_MISC
/* This is defined in POSIX.1:1996.  */
__STDIO_INLINE int
getc_unlocked (FILE *__fp)
{
  return _IO_getc_unlocked (__fp);
}

/* This is defined in POSIX.1:1996.  */
__STDIO_INLINE int
getchar_unlocked (void)
{
  return _IO_getc_unlocked (stdin);
}
# endif	/* POSIX || misc */
# 75 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4


/* Write a character to stdout.  */
__STDIO_INLINE int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}


# ifdef __USE_MISC
/* Faster version when locking is not necessary.  */
__STDIO_INLINE int
fputc_unlocked (int __c, FILE *__stream)
{
  return _IO_putc_unlocked (__c, __stream);
}
# endif /* misc */
# 93 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4


# if defined __USE_POSIX || defined __USE_MISC
/* This is defined in POSIX.1:1996.  */
__STDIO_INLINE int
putc_unlocked (int __c, FILE *__stream)
{
  return _IO_putc_unlocked (__c, __stream);
}

/* This is defined in POSIX.1:1996.  */
__STDIO_INLINE int
putchar_unlocked (int __c)
{
  return _IO_putc_unlocked (__c, stdout);
}
# endif	/* POSIX || misc */
# 110 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4


# ifdef	__USE_GNU
/* Like `getdelim', but reads up to a newline.  */
__STDIO_INLINE _IO_ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}
# endif /* GNU */
# 120 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4


# ifdef __USE_MISC
/* Faster versions when locking is not required.  */
__STDIO_INLINE int
__NTH (feof_unlocked (FILE *__stream))
{
  return _IO_feof_unlocked (__stream);
}

/* Faster versions when locking is not required.  */
__STDIO_INLINE int
__NTH (ferror_unlocked (FILE *__stream))
{
  return _IO_ferror_unlocked (__stream);
}
# endif /* misc */
# 137 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4

#endif /* Use extern inlines.  */
# 139 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4


#if defined __USE_MISC && defined __GNUC__ && defined __OPTIMIZE__ \
    && !defined __cplusplus
/* Perform some simple optimizations.  */
# define fread_unlocked(ptr, size, n, stream) \
  (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n)    \
		   && (size_t) (size) * (size_t) (n) <= 8		      \
		   && (size_t) (size) != 0)				      \
		  ? ({ char *__ptr = (char *) (ptr);			      \
		       FILE *__stream = (stream);			      \
		       size_t __cnt;					      \
		       for (__cnt = (size_t) (size) * (size_t) (n);	      \
			    __cnt > 0; --__cnt)				      \
			 {						      \
			   int __c = _IO_getc_unlocked (__stream);	      \
			   if (__c == EOF)				      \
			     break;					      \
			   *__ptr++ = __c;				      \
			 }						      \
		       ((size_t) (size) * (size_t) (n) - __cnt)		      \
			/ (size_t) (size); })				      \
		  : (((__builtin_constant_p (size) && (size_t) (size) == 0)   \
		      || (__builtin_constant_p (n) && (size_t) (n) == 0))     \
			/* Evaluate all parameters once.  */		      \
		     ? ((void) (ptr), (void) (stream), (void) (size),	      \
			(void) (n), (size_t) 0)				      \
		     : fread_unlocked (ptr, size, n, stream))))

# define fwrite_unlocked(ptr, size, n, stream) \
  (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n)    \
		   && (size_t) (size) * (size_t) (n) <= 8		      \
		   && (size_t) (size) != 0)				      \
		  ? ({ const char *__ptr = (const char *) (ptr);	      \
		       FILE *__stream = (stream);			      \
		       size_t __cnt;					      \
		       for (__cnt = (size_t) (size) * (size_t) (n);	      \
			    __cnt > 0; --__cnt)				      \
			 if (_IO_putc_unlocked (*__ptr++, __stream) == EOF)   \
			   break;					      \
		       ((size_t) (size) * (size_t) (n) - __cnt)		      \
			/ (size_t) (size); })				      \
		  : (((__builtin_constant_p (size) && (size_t) (size) == 0)   \
		      || (__builtin_constant_p (n) && (size_t) (n) == 0))     \
			/* Evaluate all parameters once.  */		      \
		     ? ((void) (ptr), (void) (stream), (void) (size),	      \
			(void) (n), (size_t) 0)				      \
		     : fwrite_unlocked (ptr, size, n, stream))))
#endif
# 188 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4

/* Define helper macro.  */
#undef __STDIO_INLINE
# 935 "/usr/include/stdio.h" 2 3 4
#endif
# 936 "/usr/include/stdio.h" 3 4
#if __USE_FORTIFY_LEVEL > 0 && defined __extern_always_inline
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdio2.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 1 3 4
/* Checking macros for stdio functions.
   Copyright (C) 2004-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _STDIO_H
# error "Never include <bits/stdio2.h> directly; use <stdio.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4

extern int __sprintf_chk (char *__restrict __s, int __flag, size_t __slen,
			  const char *__restrict __format, ...) __THROW;
extern int __vsprintf_chk (char *__restrict __s, int __flag, size_t __slen,
			   const char *__restrict __format,
			   _G_va_list __ap) __THROW;

#ifdef __va_arg_pack
__fortify_function int
__NTH (sprintf (char *__restrict __s, const char *__restrict __fmt, ...))
{
  return __builtin___sprintf_chk (__s, __USE_FORTIFY_LEVEL - 1,
				  __bos (__s), __fmt, __va_arg_pack ());
}
#elif !defined __cplusplus
# 37 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
# define sprintf(str, ...) \
  __builtin___sprintf_chk (str, __USE_FORTIFY_LEVEL - 1, __bos (str), \
			   __VA_ARGS__)
#endif
# 41 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4

__fortify_function int
__NTH (vsprintf (char *__restrict __s, const char *__restrict __fmt,
		 _G_va_list __ap))
{
  return __builtin___vsprintf_chk (__s, __USE_FORTIFY_LEVEL - 1,
				   __bos (__s), __fmt, __ap);
}

#if defined __USE_BSD || defined __USE_ISOC99 || defined __USE_UNIX98

extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
			   size_t __slen, const char *__restrict __format,
			   ...) __THROW;
extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
			    size_t __slen, const char *__restrict __format,
			    _G_va_list __ap) __THROW;

# ifdef __va_arg_pack
__fortify_function int
__NTH (snprintf (char *__restrict __s, size_t __n,
		 const char *__restrict __fmt, ...))
{
  return __builtin___snprintf_chk (__s, __n, __USE_FORTIFY_LEVEL - 1,
				   __bos (__s), __fmt, __va_arg_pack ());
}
# elif !defined __cplusplus
# 68 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
#  define snprintf(str, len, ...) \
  __builtin___snprintf_chk (str, len, __USE_FORTIFY_LEVEL - 1, __bos (str), \
			    __VA_ARGS__)
# endif
# 72 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4

__fortify_function int
__NTH (vsnprintf (char *__restrict __s, size_t __n,
		  const char *__restrict __fmt, _G_va_list __ap))
{
  return __builtin___vsnprintf_chk (__s, __n, __USE_FORTIFY_LEVEL - 1,
				    __bos (__s), __fmt, __ap);
}

#endif
# 82 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4

#if __USE_FORTIFY_LEVEL > 1

extern int __fprintf_chk (FILE *__restrict __stream, int __flag,
			  const char *__restrict __format, ...);
extern int __printf_chk (int __flag, const char *__restrict __format, ...);
extern int __vfprintf_chk (FILE *__restrict __stream, int __flag,
			   const char *__restrict __format, _G_va_list __ap);
extern int __vprintf_chk (int __flag, const char *__restrict __format,
			  _G_va_list __ap);

# ifdef __va_arg_pack
__fortify_function int
fprintf (FILE *__restrict __stream, const char *__restrict __fmt, ...)
{
  return __fprintf_chk (__stream, __USE_FORTIFY_LEVEL - 1, __fmt,
			__va_arg_pack ());
}

__fortify_function int
printf (const char *__restrict __fmt, ...)
{
  return __printf_chk (__USE_FORTIFY_LEVEL - 1, __fmt, __va_arg_pack ());
}
# elif !defined __cplusplus
# 107 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
#  define printf(...) \
  __printf_chk (__USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
#  define fprintf(stream, ...) \
  __fprintf_chk (stream, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
# endif
# 112 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4

__fortify_function int
vprintf (const char *__restrict __fmt, _G_va_list __ap)
{
#ifdef __USE_EXTERN_INLINES
  return __vfprintf_chk (stdout, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
#else
# 119 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
  return __vprintf_chk (__USE_FORTIFY_LEVEL - 1, __fmt, __ap);
#endif
# 121 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
}

__fortify_function int
vfprintf (FILE *__restrict __stream,
	  const char *__restrict __fmt, _G_va_list __ap)
{
  return __vfprintf_chk (__stream, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
}

# ifdef __USE_XOPEN2K8
extern int __dprintf_chk (int __fd, int __flag, const char *__restrict __fmt,
			  ...) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __vdprintf_chk (int __fd, int __flag,
			   const char *__restrict __fmt, _G_va_list __arg)
     __attribute__ ((__format__ (__printf__, 3, 0)));

#  ifdef __va_arg_pack
__fortify_function int
dprintf (int __fd, const char *__restrict __fmt, ...)
{
  return __dprintf_chk (__fd, __USE_FORTIFY_LEVEL - 1, __fmt,
			__va_arg_pack ());
}
#  elif !defined __cplusplus
# 145 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
#   define dprintf(fd, ...) \
  __dprintf_chk (fd, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
#  endif
# 148 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4

__fortify_function int
vdprintf (int __fd, const char *__restrict __fmt, _G_va_list __ap)
{
  return __vdprintf_chk (__fd, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
}
# endif
# 155 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4

# ifdef __USE_GNU

extern int __asprintf_chk (char **__restrict __ptr, int __flag,
			   const char *__restrict __fmt, ...)
     __THROW __attribute__ ((__format__ (__printf__, 3, 4))) __wur;
extern int __vasprintf_chk (char **__restrict __ptr, int __flag,
			    const char *__restrict __fmt, _G_va_list __arg)
     __THROW __attribute__ ((__format__ (__printf__, 3, 0))) __wur;
extern int __obstack_printf_chk (struct obstack *__restrict __obstack,
				 int __flag, const char *__restrict __format,
				 ...)
     __THROW __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __obstack_vprintf_chk (struct obstack *__restrict __obstack,
				  int __flag,
				  const char *__restrict __format,
				  _G_va_list __args)
     __THROW __attribute__ ((__format__ (__printf__, 3, 0)));

#  ifdef __va_arg_pack
__fortify_function int
__NTH (asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...))
{
  return __asprintf_chk (__ptr, __USE_FORTIFY_LEVEL - 1, __fmt,
			 __va_arg_pack ());
}

__fortify_function int
__NTH (__asprintf (char **__restrict __ptr, const char *__restrict __fmt,
		   ...))
{
  return __asprintf_chk (__ptr, __USE_FORTIFY_LEVEL - 1, __fmt,
			 __va_arg_pack ());
}

__fortify_function int
__NTH (obstack_printf (struct obstack *__restrict __obstack,
		       const char *__restrict __fmt, ...))
{
  return __obstack_printf_chk (__obstack, __USE_FORTIFY_LEVEL - 1, __fmt,
			       __va_arg_pack ());
}
#  elif !defined __cplusplus
# 198 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
#   define asprintf(ptr, ...) \
  __asprintf_chk (ptr, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
#   define __asprintf(ptr, ...) \
  __asprintf_chk (ptr, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
#   define obstack_printf(obstack, ...) \
  __obstack_printf_chk (obstack, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
#  endif
# 205 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4

__fortify_function int
__NTH (vasprintf (char **__restrict __ptr, const char *__restrict __fmt,
		  _G_va_list __ap))
{
  return __vasprintf_chk (__ptr, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
}

__fortify_function int
__NTH (obstack_vprintf (struct obstack *__restrict __obstack,
			const char *__restrict __fmt, _G_va_list __ap))
{
  return __obstack_vprintf_chk (__obstack, __USE_FORTIFY_LEVEL - 1, __fmt,
				__ap);
}

# endif
# 222 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4

#endif
# 224 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4

#if !defined __USE_ISOC11 \
    || (defined __cplusplus && __cplusplus <= 201103L && !defined __USE_GNU)
extern char *__gets_chk (char *__str, size_t) __wur;
extern char *__REDIRECT (__gets_warn, (char *__str), gets)
     __wur __warnattr ("please use fgets or getline instead, gets can't "
		       "specify buffer size");

__fortify_function __wur char *
gets (char *__str)
{
  if (__bos (__str) != (size_t) -1)
    return __gets_chk (__str, __bos (__str));
  return __gets_warn (__str);
}
#endif
# 240 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4

extern char *__fgets_chk (char *__restrict __s, size_t __size, int __n,
			  FILE *__restrict __stream) __wur;
extern char *__REDIRECT (__fgets_alias,
			 (char *__restrict __s, int __n,
			  FILE *__restrict __stream), fgets) __wur;
extern char *__REDIRECT (__fgets_chk_warn,
			 (char *__restrict __s, size_t __size, int __n,
			  FILE *__restrict __stream), __fgets_chk)
     __wur __warnattr ("fgets called with bigger size than length "
		       "of destination buffer");

__fortify_function __wur char *
fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  if (__bos (__s) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
	return __fgets_chk (__s, __bos (__s), __n, __stream);

      if ((size_t) __n > __bos (__s))
	return __fgets_chk_warn (__s, __bos (__s), __n, __stream);
    }
  return __fgets_alias (__s, __n, __stream);
}

extern size_t __fread_chk (void *__restrict __ptr, size_t __ptrlen,
			   size_t __size, size_t __n,
			   FILE *__restrict __stream) __wur;
extern size_t __REDIRECT (__fread_alias,
			  (void *__restrict __ptr, size_t __size,
			   size_t __n, FILE *__restrict __stream),
			  fread) __wur;
extern size_t __REDIRECT (__fread_chk_warn,
			  (void *__restrict __ptr, size_t __ptrlen,
			   size_t __size, size_t __n,
			   FILE *__restrict __stream),
			  __fread_chk)
     __wur __warnattr ("fread called with bigger size * nmemb than length "
		       "of destination buffer");

__fortify_function __wur size_t
fread (void *__restrict __ptr, size_t __size, size_t __n,
       FILE *__restrict __stream)
{
  if (__bos0 (__ptr) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
	  || !__builtin_constant_p (__n)
	  || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
	return __fread_chk (__ptr, __bos0 (__ptr), __size, __n, __stream);

      if (__size * __n > __bos0 (__ptr))
	return __fread_chk_warn (__ptr, __bos0 (__ptr), __size, __n, __stream);
    }
  return __fread_alias (__ptr, __size, __n, __stream);
}

#ifdef __USE_GNU
extern char *__fgets_unlocked_chk (char *__restrict __s, size_t __size,
				   int __n, FILE *__restrict __stream) __wur;
extern char *__REDIRECT (__fgets_unlocked_alias,
			 (char *__restrict __s, int __n,
			  FILE *__restrict __stream), fgets_unlocked) __wur;
extern char *__REDIRECT (__fgets_unlocked_chk_warn,
			 (char *__restrict __s, size_t __size, int __n,
			  FILE *__restrict __stream), __fgets_unlocked_chk)
     __wur __warnattr ("fgets_unlocked called with bigger size than length "
		       "of destination buffer");

__fortify_function __wur char *
fgets_unlocked (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  if (__bos (__s) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
	return __fgets_unlocked_chk (__s, __bos (__s), __n, __stream);

      if ((size_t) __n > __bos (__s))
	return __fgets_unlocked_chk_warn (__s, __bos (__s), __n, __stream);
    }
  return __fgets_unlocked_alias (__s, __n, __stream);
}
#endif
# 324 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4

#ifdef __USE_MISC
# undef fread_unlocked
extern size_t __fread_unlocked_chk (void *__restrict __ptr, size_t __ptrlen,
				    size_t __size, size_t __n,
				    FILE *__restrict __stream) __wur;
extern size_t __REDIRECT (__fread_unlocked_alias,
			  (void *__restrict __ptr, size_t __size,
			   size_t __n, FILE *__restrict __stream),
			  fread_unlocked) __wur;
extern size_t __REDIRECT (__fread_unlocked_chk_warn,
			  (void *__restrict __ptr, size_t __ptrlen,
			   size_t __size, size_t __n,
			   FILE *__restrict __stream),
			  __fread_unlocked_chk)
     __wur __warnattr ("fread_unlocked called with bigger size * nmemb than "
		       "length of destination buffer");

__fortify_function __wur size_t
fread_unlocked (void *__restrict __ptr, size_t __size, size_t __n,
		FILE *__restrict __stream)
{
  if (__bos0 (__ptr) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
	  || !__builtin_constant_p (__n)
	  || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
	return __fread_unlocked_chk (__ptr, __bos0 (__ptr), __size, __n,
				     __stream);

      if (__size * __n > __bos0 (__ptr))
	return __fread_unlocked_chk_warn (__ptr, __bos0 (__ptr), __size, __n,
					  __stream);
    }

# ifdef __USE_EXTERN_INLINES
  if (__builtin_constant_p (__size)
      && __builtin_constant_p (__n)
      && (__size | __n) < (((size_t) 1) << (8 * sizeof (size_t) / 2))
      && __size * __n <= 8)
    {
      size_t __cnt = __size * __n;
      char *__cptr = (char *) __ptr;
      if (__cnt == 0)
	return 0;

      for (; __cnt > 0; --__cnt)
	{
	  int __c = _IO_getc_unlocked (__stream);
	  if (__c == EOF)
	    break;
	  *__cptr++ = __c;
	}
      return (__cptr - (char *) __ptr) / __size;
    }
# endif
# 380 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
  return __fread_unlocked_alias (__ptr, __size, __n, __stream);
}
#endif
# 383 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
# 938 "/usr/include/stdio.h" 2 3 4
#endif
# 939 "/usr/include/stdio.h" 3 4
#ifdef __LDBL_COMPAT
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdio-ldbl.h>
#endif /* expanded by -frewrite-includes */
# 941 "/usr/include/stdio.h" 3 4
#endif
# 942 "/usr/include/stdio.h" 3 4

__END_DECLS

#endif /* <stdio.h> included.  */
# 946 "/usr/include/stdio.h" 3 4

#endif /* !_STDIO_H */
# 948 "/usr/include/stdio.h" 3 4
# 74 "expy.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <stdlib.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/stdlib.h" 1 3 4
/* Copyright (C) 1991-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.20 General utilities	<stdlib.h>
 */

#ifndef	_STDLIB_H

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 25 "/usr/include/stdlib.h" 3 4

/* Get size_t, wchar_t and NULL from <stddef.h>.  */
#define		__need_size_t
#ifndef __need_malloc_and_calloc
# define	__need_wchar_t
# define	__need_NULL
#endif
# 32 "/usr/include/stdlib.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/bin/../lib/clang/3.4/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __STDDEF_H
#define __STDDEF_H

#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 34 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 36 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 42 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 44 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 53 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 55 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 64 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#endif
# 65 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 67 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#endif
# 68 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 74 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 76 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#else
# 77 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 79 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 85 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#endif
# 86 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#define offsetof(t, d) __builtin_offsetof(t, d)

#endif /* __STDDEF_H */
# 90 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 99 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 101 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 103 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
# 33 "/usr/include/stdlib.h" 2 3 4

__BEGIN_DECLS

#ifndef __need_malloc_and_calloc
#define	_STDLIB_H	1

#if (defined __USE_XOPEN || defined __USE_XOPEN2K8) && !defined _SYS_WAIT_H
/* XPG requires a few symbols from <sys/wait.h> being defined.  */
#if 0 /* expanded by -frewrite-includes */
# include <bits/waitflags.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
/* Definitions of flag bits for `waitpid' et al.
   Copyright (C) 1992-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#if !defined _SYS_WAIT_H && !defined _STDLIB_H
# error "Never include <bits/waitflags.h> directly; use <sys/wait.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4


/* Bits in the third argument to `waitpid'.  */
#define	WNOHANG		1	/* Don't block waiting.  */
#define	WUNTRACED	2	/* Report status of stopped children.  */

/* Bits in the fourth argument to `waitid'.  */
#define WSTOPPED	2	/* Report stopped child (same as WUNTRACED). */
#define WEXITED		4	/* Report dead child.  */
#define WCONTINUED	8	/* Report continued child.  */
#define WNOWAIT		0x01000000 /* Don't reap, just poll status.  */

#define __WNOTHREAD     0x20000000 /* Don't wait on children of other threads
				      in this group */
#define __WALL		0x40000000 /* Wait for any child.  */
#define __WCLONE	0x80000000 /* Wait for cloned process.  */

/* The following values are used by the `waitid' function.  */
#if defined __USE_SVID || defined __USE_XOPEN || defined __USE_XOPEN2K8
# ifndef __ENUM_IDTYPE_T
# define __ENUM_IDTYPE_T 1

/* The Linux kernel defines these bare, rather than an enum,
   which causes a conflict if the include order is reversed. */
# undef P_ALL
# undef P_PID
# undef P_PGID

typedef enum
{
  P_ALL,		/* Wait for any child.  */
  P_PID,		/* Wait for specified process.  */
  P_PGID		/* Wait for members of process group.  */
} idtype_t;
# endif
# 57 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
#endif
# 58 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
# include <bits/waitstatus.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
/* Definitions of status bits for `wait' et al.
   Copyright (C) 1992-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#if !defined _SYS_WAIT_H && !defined _STDLIB_H
# error "Never include <bits/waitstatus.h> directly; use <sys/wait.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4


/* Everything extant so far uses these same bits.  */


/* If WIFEXITED(STATUS), the low-order 8 bits of the status.  */
#define	__WEXITSTATUS(status)	(((status) & 0xff00) >> 8)

/* If WIFSIGNALED(STATUS), the terminating signal.  */
#define	__WTERMSIG(status)	((status) & 0x7f)

/* If WIFSTOPPED(STATUS), the signal that stopped the child.  */
#define	__WSTOPSIG(status)	__WEXITSTATUS(status)

/* Nonzero if STATUS indicates normal termination.  */
#define	__WIFEXITED(status)	(__WTERMSIG(status) == 0)

/* Nonzero if STATUS indicates termination by a signal.  */
#define __WIFSIGNALED(status) \
  (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)

/* Nonzero if STATUS indicates the child is stopped.  */
#define	__WIFSTOPPED(status)	(((status) & 0xff) == 0x7f)

/* Nonzero if STATUS indicates the child continued after a stop.  We only
   define this if <bits/waitflags.h> provides the WCONTINUED flag bit.  */
#ifdef WCONTINUED
# define __WIFCONTINUED(status)	((status) == __W_CONTINUED)
#endif
# 51 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4

/* Nonzero if STATUS indicates the child dumped core.  */
#define	__WCOREDUMP(status)	((status) & __WCOREFLAG)

/* Macros for constructing status values.  */
#define	__W_EXITCODE(ret, sig)	((ret) << 8 | (sig))
#define	__W_STOPCODE(sig)	((sig) << 8 | 0x7f)
#define __W_CONTINUED		0xffff
#define	__WCOREFLAG		0x80


#ifdef	__USE_BSD

#if 0 /* expanded by -frewrite-includes */
# include <endian.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/endian.h" 1 3 4
/* Copyright (C) 1992-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef	_ENDIAN_H
#define	_ENDIAN_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 22 "/usr/include/endian.h" 3 4

/* Definitions for byte order, according to significance of bytes,
   from low addresses to high addresses.  The value is what you get by
   putting '4' in the most significant byte, '3' in the second most
   significant byte, '2' in the second least significant byte, and '1'
   in the least significant byte, and then writing down one digit for
   each byte, starting with the byte at the lowest address at the left,
   and proceeding to the byte with the highest address at the right.  */

#define	__LITTLE_ENDIAN	1234
#define	__BIG_ENDIAN	4321
#define	__PDP_ENDIAN	3412

/* This file defines `__BYTE_ORDER' for the particular machine.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/endian.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
/* i386/x86_64 are little-endian.  */

#ifndef _ENDIAN_H
# error "Never use <bits/endian.h> directly; include <endian.h> instead."
#endif
# 6 "/usr/include/x86_64-linux-gnu/bits/endian.h" 3 4

#define __BYTE_ORDER __LITTLE_ENDIAN
# 37 "/usr/include/endian.h" 2 3 4

/* Some machines may need to use a different endianness for floating point
   values.  */
#ifndef __FLOAT_WORD_ORDER
# define __FLOAT_WORD_ORDER __BYTE_ORDER
#endif
# 43 "/usr/include/endian.h" 3 4

#ifdef	__USE_BSD
# define LITTLE_ENDIAN	__LITTLE_ENDIAN
# define BIG_ENDIAN	__BIG_ENDIAN
# define PDP_ENDIAN	__PDP_ENDIAN
# define BYTE_ORDER	__BYTE_ORDER
#endif
# 50 "/usr/include/endian.h" 3 4

#if __BYTE_ORDER == __LITTLE_ENDIAN
# define __LONG_LONG_PAIR(HI, LO) LO, HI
#elif __BYTE_ORDER == __BIG_ENDIAN
# 54 "/usr/include/endian.h" 3 4
# define __LONG_LONG_PAIR(HI, LO) HI, LO
#endif
# 56 "/usr/include/endian.h" 3 4


#if defined __USE_BSD && !defined __ASSEMBLER__
/* Conversion interfaces.  */
#if 0 /* expanded by -frewrite-includes */
# include <bits/byteswap.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
/* Macros to swap the order of bytes in integer values.
   Copyright (C) 1997-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#if !defined _BYTESWAP_H && !defined _NETINET_IN_H && !defined _ENDIAN_H
# error "Never use <bits/byteswap.h> directly; include <byteswap.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4

#ifndef _BITS_BYTESWAP_H
#define _BITS_BYTESWAP_H 1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 27 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/wordsize.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */

#if defined __x86_64__ && !defined __ILP32__
# define __WORDSIZE	64
#else
# 6 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE	32
#endif
# 8 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4

#ifdef __x86_64__
# define __WORDSIZE_TIME64_COMPAT32	1
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# define __SYSCALL_WORDSIZE		64
#endif
# 14 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4

/* Swap bytes in 16 bit value.  */
#define __bswap_constant_16(x) \
     ((unsigned short int) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))

/* Get __bswap_16.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/byteswap-16.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
/* Macros to swap the order of bytes in 16-bit integer values.
   Copyright (C) 2012-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _BITS_BYTESWAP_H
# error "Never use <bits/byteswap-16.h> directly; include <byteswap.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 3 4

#ifdef __GNUC__
# if __GNUC__ >= 2
#  define __bswap_16(x) \
     (__extension__							      \
      ({ unsigned short int __v, __x = (unsigned short int) (x);	      \
	 if (__builtin_constant_p (__x))				      \
	   __v = __bswap_constant_16 (__x);				      \
	 else								      \
	   __asm__ ("rorw $8, %w0"					      \
		    : "=r" (__v)					      \
		    : "0" (__x)						      \
		    : "cc");						      \
	 __v; }))
# else
# 37 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 3 4
/* This is better than nothing.  */
#  define __bswap_16(x) \
     (__extension__							      \
      ({ unsigned short int __x = (unsigned short int) (x);		      \
	 __bswap_constant_16 (__x); }))
# endif
# 43 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 3 4
#else
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 3 4
static __inline unsigned short int
__bswap_16 (unsigned short int __bsx)
{
  return __bswap_constant_16 (__bsx);
}
#endif
# 50 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4

/* Swap bytes in 32 bit value.  */
#define __bswap_constant_32(x) \
     ((((x) & 0xff000000) >> 24) | (((x) & 0x00ff0000) >>  8) |		      \
      (((x) & 0x0000ff00) <<  8) | (((x) & 0x000000ff) << 24))

#ifdef __GNUC__
# if __GNUC_PREREQ (4, 3)
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# elif __GNUC__ >= 2
# 50 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#  if __WORDSIZE == 64 || (defined __i486__ || defined __pentium__	      \
			   || defined __pentiumpro__ || defined __pentium4__  \
			   || defined __k8__ || defined __athlon__	      \
			   || defined __k6__ || defined __nocona__	      \
			   || defined __core2__ || defined __geode__	      \
			   || defined __amdfam10__)
/* To swap the bytes in a word the i486 processors and up provide the
   `bswap' opcode.  On i386 we have to use three instructions.  */
#   define __bswap_32(x) \
      (__extension__							      \
       ({ unsigned int __v, __x = (x);					      \
	  if (__builtin_constant_p (__x))				      \
	    __v = __bswap_constant_32 (__x);				      \
	  else								      \
	    __asm__ ("bswap %0" : "=r" (__v) : "0" (__x));		      \
	  __v; }))
#  else
# 67 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#   define __bswap_32(x)						      \
      (__extension__							      \
       ({ unsigned int __v, __x = (x);					      \
	  if (__builtin_constant_p (__x))				      \
	    __v = __bswap_constant_32 (__x);				      \
	  else								      \
	    __asm__ ("rorw $8, %w0;"					      \
		     "rorl $16, %0;"					      \
		     "rorw $8, %w0"					      \
		     : "=r" (__v)					      \
		     : "0" (__x)					      \
		     : "cc");						      \
	  __v; }))
#  endif
# 81 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# else
# 82 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#  define __bswap_32(x) \
     (__extension__							      \
      ({ unsigned int __x = (x); __bswap_constant_32 (__x); }))
# endif
# 86 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#else
# 87 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __bswap_constant_32 (__bsx);
}
#endif
# 93 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4


#if __GNUC_PREREQ (2, 0)
/* Swap bytes in 64 bit value.  */
# define __bswap_constant_64(x) \
     (__extension__ ((((x) & 0xff00000000000000ull) >> 56)		      \
		     | (((x) & 0x00ff000000000000ull) >> 40)		      \
		     | (((x) & 0x0000ff0000000000ull) >> 24)		      \
		     | (((x) & 0x000000ff00000000ull) >> 8)		      \
		     | (((x) & 0x00000000ff000000ull) << 8)		      \
		     | (((x) & 0x0000000000ff0000ull) << 24)		      \
		     | (((x) & 0x000000000000ff00ull) << 40)		      \
		     | (((x) & 0x00000000000000ffull) << 56)))

# if __GNUC_PREREQ (4, 3)
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# elif __WORDSIZE == 64
# 114 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#  define __bswap_64(x) \
     (__extension__							      \
      ({ __uint64_t __v, __x = (x);					      \
	 if (__builtin_constant_p (__x))				      \
	   __v = __bswap_constant_64 (__x);				      \
	 else								      \
	   __asm__ ("bswap %q0" : "=r" (__v) : "0" (__x));		      \
	 __v; }))
# else
# 123 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#  define __bswap_64(x) \
     (__extension__                                                           \
      ({ union { __extension__ __uint64_t __ll;		                      \
		 unsigned int __l[2]; } __w, __r;                             \
	 if (__builtin_constant_p (x))                                        \
	   __r.__ll = __bswap_constant_64 (x);                                \
	 else                                                                 \
	   {                                                                  \
	     __w.__ll = (x);                                                  \
	     __r.__l[0] = __bswap_32 (__w.__l[1]);                            \
	     __r.__l[1] = __bswap_32 (__w.__l[0]);                            \
	   }                                                                  \
	 __r.__ll; }))
# endif
# 137 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#else
# 138 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# define __bswap_constant_64(x) \
     ((((x) & 0xff00000000000000ull) >> 56)				      \
      | (((x) & 0x00ff000000000000ull) >> 40)				      \
      | (((x) & 0x0000ff0000000000ull) >> 24)				      \
      | (((x) & 0x000000ff00000000ull) >> 8)				      \
      | (((x) & 0x00000000ff000000ull) << 8)				      \
      | (((x) & 0x0000000000ff0000ull) << 24)				      \
      | (((x) & 0x000000000000ff00ull) << 40)				      \
      | (((x) & 0x00000000000000ffull) << 56))

static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __bswap_constant_64 (__bsx);
}
#endif
# 154 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4

#endif /* _BITS_BYTESWAP_H */
# 156 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 61 "/usr/include/endian.h" 2 3 4

# if __BYTE_ORDER == __LITTLE_ENDIAN
#  define htobe16(x) __bswap_16 (x)
#  define htole16(x) (x)
#  define be16toh(x) __bswap_16 (x)
#  define le16toh(x) (x)

#  define htobe32(x) __bswap_32 (x)
#  define htole32(x) (x)
#  define be32toh(x) __bswap_32 (x)
#  define le32toh(x) (x)

#  define htobe64(x) __bswap_64 (x)
#  define htole64(x) (x)
#  define be64toh(x) __bswap_64 (x)
#  define le64toh(x) (x)

# else
# 79 "/usr/include/endian.h" 3 4
#  define htobe16(x) (x)
#  define htole16(x) __bswap_16 (x)
#  define be16toh(x) (x)
#  define le16toh(x) __bswap_16 (x)

#  define htobe32(x) (x)
#  define htole32(x) __bswap_32 (x)
#  define be32toh(x) (x)
#  define le32toh(x) __bswap_32 (x)

#  define htobe64(x) (x)
#  define htole64(x) __bswap_64 (x)
#  define be64toh(x) (x)
#  define le64toh(x) __bswap_64 (x)
# endif
# 94 "/usr/include/endian.h" 3 4
#endif
# 95 "/usr/include/endian.h" 3 4

#endif	/* endian.h */
# 97 "/usr/include/endian.h" 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {
# if	__BYTE_ORDER == __LITTLE_ENDIAN
	unsigned int __w_termsig:7; /* Terminating signal.  */
	unsigned int __w_coredump:1; /* Set if dumped core.  */
	unsigned int __w_retcode:8; /* Return code if exited normally.  */
	unsigned int:16;
# endif				/* Little endian.  */
# 77 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# if	__BYTE_ORDER == __BIG_ENDIAN
	unsigned int:16;
	unsigned int __w_retcode:8;
	unsigned int __w_coredump:1;
	unsigned int __w_termsig:7;
# endif				/* Big endian.  */
# 83 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
      } __wait_terminated;
    struct
      {
# if	__BYTE_ORDER == __LITTLE_ENDIAN
	unsigned int __w_stopval:8; /* W_STOPPED if stopped.  */
	unsigned int __w_stopsig:8; /* Stopping signal.  */
	unsigned int:16;
# endif				/* Little endian.  */
# 91 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# if	__BYTE_ORDER == __BIG_ENDIAN
	unsigned int:16;
	unsigned int __w_stopsig:8; /* Stopping signal.  */
	unsigned int __w_stopval:8; /* W_STOPPED if stopped.  */
# endif				/* Big endian.  */
# 96 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
      } __wait_stopped;
  };

# define w_termsig	__wait_terminated.__w_termsig
# define w_coredump	__wait_terminated.__w_coredump
# define w_retcode	__wait_terminated.__w_retcode
# define w_stopsig	__wait_stopped.__w_stopsig
# define w_stopval	__wait_stopped.__w_stopval

#endif	/* Use BSD.  */
# 106 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 43 "/usr/include/stdlib.h" 2 3 4

# ifdef __USE_BSD

/* Lots of hair to allow traditional BSD use of `union wait'
   as well as POSIX.1 use of `int' for the status word.  */

#  if defined __GNUC__ && !defined __cplusplus
#   define __WAIT_INT(status) \
  (__extension__ (((union { __typeof(status) __in; int __i; }) \
		   { .__in = (status) }).__i))
#  else
# 54 "/usr/include/stdlib.h" 3 4
#   define __WAIT_INT(status)	(*(int *) &(status))
#  endif
# 56 "/usr/include/stdlib.h" 3 4

/* This is the type of the argument to `wait'.  The funky union
   causes redeclarations with either `int *' or `union wait *' to be
   allowed without complaint.  __WAIT_STATUS_DEFN is the type used in
   the actual function definitions.  */

#  if !defined __GNUC__ || __GNUC__ < 2 || defined __cplusplus
#   define __WAIT_STATUS	void *
#   define __WAIT_STATUS_DEFN	void *
#  else
# 66 "/usr/include/stdlib.h" 3 4
/* This works in GCC 2.6.1 and later.  */
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
#   define __WAIT_STATUS_DEFN	int *
#  endif
# 74 "/usr/include/stdlib.h" 3 4

# else /* Don't use BSD.  */
# 76 "/usr/include/stdlib.h" 3 4

#  define __WAIT_INT(status)	(status)
#  define __WAIT_STATUS		int *
#  define __WAIT_STATUS_DEFN	int *

# endif /* Use BSD.  */
# 82 "/usr/include/stdlib.h" 3 4

/* Define the macros <sys/wait.h> also would define this way.  */
# define WEXITSTATUS(status)	__WEXITSTATUS (__WAIT_INT (status))
# define WTERMSIG(status)	__WTERMSIG (__WAIT_INT (status))
# define WSTOPSIG(status)	__WSTOPSIG (__WAIT_INT (status))
# define WIFEXITED(status)	__WIFEXITED (__WAIT_INT (status))
# define WIFSIGNALED(status)	__WIFSIGNALED (__WAIT_INT (status))
# define WIFSTOPPED(status)	__WIFSTOPPED (__WAIT_INT (status))
# ifdef __WIFCONTINUED
#  define WIFCONTINUED(status)	__WIFCONTINUED (__WAIT_INT (status))
# endif
# 93 "/usr/include/stdlib.h" 3 4
#endif	/* X/Open or XPG7 and <sys/wait.h> not included.  */
# 94 "/usr/include/stdlib.h" 3 4

__BEGIN_NAMESPACE_STD
/* Returned by `div'.  */
typedef struct
  {
    int quot;			/* Quotient.  */
    int rem;			/* Remainder.  */
  } div_t;

/* Returned by `ldiv'.  */
#ifndef __ldiv_t_defined
typedef struct
  {
    long int quot;		/* Quotient.  */
    long int rem;		/* Remainder.  */
  } ldiv_t;
# define __ldiv_t_defined	1
#endif
# 112 "/usr/include/stdlib.h" 3 4
__END_NAMESPACE_STD

#if defined __USE_ISOC99 && !defined __lldiv_t_defined
__BEGIN_NAMESPACE_C99
/* Returned by `lldiv'.  */
__extension__ typedef struct
  {
    long long int quot;		/* Quotient.  */
    long long int rem;		/* Remainder.  */
  } lldiv_t;
# define __lldiv_t_defined	1
__END_NAMESPACE_C99
#endif
# 125 "/usr/include/stdlib.h" 3 4


/* The largest number rand will return (same as INT_MAX).  */
#define	RAND_MAX	2147483647


/* We define these the same for all machines.
   Changes from this to the outside world should be done in `_exit'.  */
#define	EXIT_FAILURE	1	/* Failing exit status.  */
#define	EXIT_SUCCESS	0	/* Successful exit status.  */


/* Maximum length of a multibyte character in the current locale.  */
#define	MB_CUR_MAX	(__ctype_get_mb_cur_max ())
extern size_t __ctype_get_mb_cur_max (void) __THROW __wur;


__BEGIN_NAMESPACE_STD
/* Convert a string to a floating-point number.  */
extern double atof (const char *__nptr)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;
/* Convert a string to an integer.  */
extern int atoi (const char *__nptr)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;
/* Convert a string to a long integer.  */
extern long int atol (const char *__nptr)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;
__END_NAMESPACE_STD

#if defined __USE_ISOC99 || defined __USE_MISC
__BEGIN_NAMESPACE_C99
/* Convert a string to a long long integer.  */
__extension__ extern long long int atoll (const char *__nptr)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;
__END_NAMESPACE_C99
#endif
# 161 "/usr/include/stdlib.h" 3 4

__BEGIN_NAMESPACE_STD
/* Convert a string to a floating-point number.  */
extern double strtod (const char *__restrict __nptr,
		      char **__restrict __endptr)
     __THROW __nonnull ((1));
__END_NAMESPACE_STD

#ifdef	__USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Likewise for `float' and `long double' sizes of floating-point numbers.  */
extern float strtof (const char *__restrict __nptr,
		     char **__restrict __endptr) __THROW __nonnull ((1));

extern long double strtold (const char *__restrict __nptr,
			    char **__restrict __endptr)
     __THROW __nonnull ((1));
__END_NAMESPACE_C99
#endif
# 180 "/usr/include/stdlib.h" 3 4

__BEGIN_NAMESPACE_STD
/* Convert a string to a long integer.  */
extern long int strtol (const char *__restrict __nptr,
			char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));
/* Convert a string to an unsigned long integer.  */
extern unsigned long int strtoul (const char *__restrict __nptr,
				  char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));
__END_NAMESPACE_STD

#ifdef __USE_BSD
/* Convert a string to a quadword integer.  */
__extension__
extern long long int strtoq (const char *__restrict __nptr,
			     char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));
/* Convert a string to an unsigned quadword integer.  */
__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
				       char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));
#endif /* Use BSD.  */
# 204 "/usr/include/stdlib.h" 3 4

#if defined __USE_ISOC99 || defined __USE_MISC
__BEGIN_NAMESPACE_C99
/* Convert a string to a quadword integer.  */
__extension__
extern long long int strtoll (const char *__restrict __nptr,
			      char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));
/* Convert a string to an unsigned quadword integer.  */
__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
					char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));
__END_NAMESPACE_C99
#endif /* ISO C99 or use MISC.  */
# 219 "/usr/include/stdlib.h" 3 4


#ifdef __USE_GNU
/* The concept of one static locale per category is not very well
   thought out.  Many applications will need to process its data using
   information from several different locales.  Another problem is
   the implementation of the internationalization handling in the
   ISO C++ standard library.  To support this another set of
   the functions using locale data exist which take an additional
   argument.

   Attention: even though several *_l interfaces are part of POSIX:2008,
   these are not.  */

/* Structure for reentrant locale using functions.  This is an
   (almost) opaque type for the user level programs.  */
#if 0 /* expanded by -frewrite-includes */
# include <xlocale.h>
#endif /* expanded by -frewrite-includes */
# 236 "/usr/include/stdlib.h" 3 4

/* Special versions of the functions above which take the locale to
   use as an additional parameter.  */
extern long int strtol_l (const char *__restrict __nptr,
			  char **__restrict __endptr, int __base,
			  __locale_t __loc) __THROW __nonnull ((1, 4));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
				    char **__restrict __endptr,
				    int __base, __locale_t __loc)
     __THROW __nonnull ((1, 4));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
				char **__restrict __endptr, int __base,
				__locale_t __loc)
     __THROW __nonnull ((1, 4));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
					  char **__restrict __endptr,
					  int __base, __locale_t __loc)
     __THROW __nonnull ((1, 4));

extern double strtod_l (const char *__restrict __nptr,
			char **__restrict __endptr, __locale_t __loc)
     __THROW __nonnull ((1, 3));

extern float strtof_l (const char *__restrict __nptr,
		       char **__restrict __endptr, __locale_t __loc)
     __THROW __nonnull ((1, 3));

extern long double strtold_l (const char *__restrict __nptr,
			      char **__restrict __endptr,
			      __locale_t __loc)
     __THROW __nonnull ((1, 3));
#endif /* GNU */
# 273 "/usr/include/stdlib.h" 3 4


#ifdef __USE_EXTERN_INLINES
__BEGIN_NAMESPACE_STD
__extern_inline int
__NTH (atoi (const char *__nptr))
{
  return (int) strtol (__nptr, (char **) NULL, 10);
}
__extern_inline long int
__NTH (atol (const char *__nptr))
{
  return strtol (__nptr, (char **) NULL, 10);
}
__END_NAMESPACE_STD

# if defined __USE_MISC || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
__extension__ __extern_inline long long int
__NTH (atoll (const char *__nptr))
{
  return strtoll (__nptr, (char **) NULL, 10);
}
__END_NAMESPACE_C99
# endif
# 298 "/usr/include/stdlib.h" 3 4
#endif /* Optimizing and Inlining.  */
# 299 "/usr/include/stdlib.h" 3 4


#if defined __USE_SVID || defined __USE_XOPEN_EXTENDED
/* Convert N to base 64 using the digits "./0-9A-Za-z", least-significant
   digit first.  Returns a pointer to static storage overwritten by the
   next call.  */
extern char *l64a (long int __n) __THROW __wur;

/* Read a number from a string S in base 64 as above.  */
extern long int a64l (const char *__s)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;

#endif	/* Use SVID || extended X/Open.  */
# 312 "/usr/include/stdlib.h" 3 4

#if defined __USE_SVID || defined __USE_XOPEN_EXTENDED || defined __USE_BSD
#if 0 /* expanded by -frewrite-includes */
# include <sys/types.h>	/* we need int32_t... */
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
/* Copyright (C) 1991-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 2.6 Primitive System Data Types	<sys/types.h>
 */

#ifndef	_SYS_TYPES_H
#define	_SYS_TYPES_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 26 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

__BEGIN_DECLS

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 30 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifdef	__USE_BSD
# ifndef __u_char_defined
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
#  define __u_char_defined
# endif
# 42 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#endif
# 43 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

typedef __loff_t loff_t;

#ifndef __ino_t_defined
# ifndef __USE_FILE_OFFSET64
typedef __ino_t ino_t;
# else
# 50 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __ino64_t ino_t;
# endif
# 52 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# define __ino_t_defined
#endif
# 54 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#if defined __USE_LARGEFILE64 && !defined __ino64_t_defined
typedef __ino64_t ino64_t;
# define __ino64_t_defined
#endif
# 58 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifndef __dev_t_defined
typedef __dev_t dev_t;
# define __dev_t_defined
#endif
# 63 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifndef __gid_t_defined
typedef __gid_t gid_t;
# define __gid_t_defined
#endif
# 68 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifndef __mode_t_defined
typedef __mode_t mode_t;
# define __mode_t_defined
#endif
# 73 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifndef __nlink_t_defined
typedef __nlink_t nlink_t;
# define __nlink_t_defined
#endif
# 78 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifndef __uid_t_defined
typedef __uid_t uid_t;
# define __uid_t_defined
#endif
# 83 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifndef __off_t_defined
# ifndef __USE_FILE_OFFSET64
typedef __off_t off_t;
# else
# 88 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __off64_t off_t;
# endif
# 90 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# define __off_t_defined
#endif
# 92 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#if defined __USE_LARGEFILE64 && !defined __off64_t_defined
typedef __off64_t off64_t;
# define __off64_t_defined
#endif
# 96 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifndef __pid_t_defined
typedef __pid_t pid_t;
# define __pid_t_defined
#endif
# 101 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#if (defined __USE_SVID || defined __USE_XOPEN || defined __USE_XOPEN2K8) \
    && !defined __id_t_defined
typedef __id_t id_t;
# define __id_t_defined
#endif
# 107 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifndef __ssize_t_defined
typedef __ssize_t ssize_t;
# define __ssize_t_defined
#endif
# 112 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifdef	__USE_BSD
# ifndef __daddr_t_defined
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
#  define __daddr_t_defined
# endif
# 119 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#endif
# 120 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#if (defined __USE_SVID || defined __USE_XOPEN) && !defined __key_t_defined
typedef __key_t key_t;
# define __key_t_defined
#endif
# 125 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#if defined __USE_XOPEN || defined __USE_XOPEN2K8
# define __need_clock_t
#endif
# 129 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#define	__need_time_t
#define __need_timer_t
#define __need_clockid_t
#if 0 /* expanded by -frewrite-includes */
#include <time.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/time.h" 1 3 4
/* Copyright (C) 1991-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.23 Date and time	<time.h>
 */

#ifndef	_TIME_H

#if (! defined __need_time_t && !defined __need_clock_t && \
     ! defined __need_timespec)
# define _TIME_H	1
#if 0 /* expanded by -frewrite-includes */
# include <features.h>
#endif /* expanded by -frewrite-includes */
# 28 "/usr/include/time.h" 3 4

__BEGIN_DECLS

#endif
# 32 "/usr/include/time.h" 3 4

#ifdef	_TIME_H
/* Get size_t and NULL from <stddef.h>.  */
# define __need_size_t
# define __need_NULL
#if 0 /* expanded by -frewrite-includes */
# include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 38 "/usr/include/time.h" 3 4

/* This defines CLOCKS_PER_SEC, which is the number of processor clock
   ticks per second.  */
#if 0 /* expanded by -frewrite-includes */
# include <bits/time.h>
#endif /* expanded by -frewrite-includes */
# 42 "/usr/include/time.h" 3 4

/* This is the obsolete POSIX.1-1988 name for the same constant.  */
# if !defined __STRICT_ANSI__ && !defined __USE_XOPEN2K
#  ifndef CLK_TCK
#   define CLK_TCK	CLOCKS_PER_SEC
#  endif
# 48 "/usr/include/time.h" 3 4
# endif
# 49 "/usr/include/time.h" 3 4

#endif /* <time.h> included.  */
# 51 "/usr/include/time.h" 3 4

#if !defined __clock_t_defined && (defined _TIME_H || defined __need_clock_t)
# define __clock_t_defined	1

#if 0 /* expanded by -frewrite-includes */
# include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 56 "/usr/include/time.h" 3 4

__BEGIN_NAMESPACE_STD
/* Returned by `clock'.  */
typedef __clock_t clock_t;
__END_NAMESPACE_STD
#if defined __USE_XOPEN || defined __USE_POSIX || defined __USE_MISC
__USING_NAMESPACE_STD(clock_t)
#endif
# 64 "/usr/include/time.h" 3 4

#endif /* clock_t not defined and <time.h> or need clock_t.  */
# 66 "/usr/include/time.h" 3 4
#undef	__need_clock_t

#if !defined __time_t_defined && (defined _TIME_H || defined __need_time_t)
# define __time_t_defined	1

#if 0 /* expanded by -frewrite-includes */
# include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 72 "/usr/include/time.h" 3 4

__BEGIN_NAMESPACE_STD
/* Returned by `time'.  */
typedef __time_t time_t;
__END_NAMESPACE_STD
#if defined __USE_POSIX || defined __USE_MISC || defined __USE_SVID
__USING_NAMESPACE_STD(time_t)
#endif
# 80 "/usr/include/time.h" 3 4

#endif /* time_t not defined and <time.h> or need time_t.  */
# 82 "/usr/include/time.h" 3 4
#undef	__need_time_t

#if !defined __clockid_t_defined && \
   ((defined _TIME_H && defined __USE_POSIX199309) || defined __need_clockid_t)
# define __clockid_t_defined	1

#if 0 /* expanded by -frewrite-includes */
# include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 89 "/usr/include/time.h" 3 4

/* Clock ID used in clock and timer functions.  */
typedef __clockid_t clockid_t;

#endif /* clockid_t not defined and <time.h> or need clockid_t.  */
# 94 "/usr/include/time.h" 3 4
#undef	__clockid_time_t

#if !defined __timer_t_defined && \
    ((defined _TIME_H && defined __USE_POSIX199309) || defined __need_timer_t)
# define __timer_t_defined	1

#if 0 /* expanded by -frewrite-includes */
# include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 101 "/usr/include/time.h" 3 4

/* Timer ID returned by `timer_create'.  */
typedef __timer_t timer_t;

#endif /* timer_t not defined and <time.h> or need timer_t.  */
# 106 "/usr/include/time.h" 3 4
#undef	__need_timer_t


#if (!defined __timespec_defined					\
     && ((defined _TIME_H						\
	  && (defined __USE_POSIX199309 || defined __USE_MISC		\
	      || defined __USE_ISOC11))					\
	 || defined __need_timespec))
# define __timespec_defined	1

#if 0 /* expanded by -frewrite-includes */
# include <bits/types.h>	/* This defines __time_t for us.  */
#endif /* expanded by -frewrite-includes */
# 117 "/usr/include/time.h" 3 4

/* POSIX.1b structure for a time value.  This is like a `struct timeval' but
   has nanoseconds instead of microseconds.  */
struct timespec
  {
    __time_t tv_sec;		/* Seconds.  */
    __syscall_slong_t tv_nsec;	/* Nanoseconds.  */
  };

#endif /* timespec not defined and <time.h> or need timespec.  */
# 127 "/usr/include/time.h" 3 4
#undef	__need_timespec


#ifdef	_TIME_H
__BEGIN_NAMESPACE_STD
/* Used by other time functions.  */
struct tm
{
  int tm_sec;			/* Seconds.	[0-60] (1 leap second) */
  int tm_min;			/* Minutes.	[0-59] */
  int tm_hour;			/* Hours.	[0-23] */
  int tm_mday;			/* Day.		[1-31] */
  int tm_mon;			/* Month.	[0-11] */
  int tm_year;			/* Year	- 1900.  */
  int tm_wday;			/* Day of week.	[0-6] */
  int tm_yday;			/* Days in year.[0-365]	*/
  int tm_isdst;			/* DST.		[-1/0/1]*/

# ifdef	__USE_BSD
  long int tm_gmtoff;		/* Seconds east of UTC.  */
  const char *tm_zone;		/* Timezone abbreviation.  */
# else
# 149 "/usr/include/time.h" 3 4
  long int __tm_gmtoff;		/* Seconds east of UTC.  */
  const char *__tm_zone;	/* Timezone abbreviation.  */
# endif
# 152 "/usr/include/time.h" 3 4
};
__END_NAMESPACE_STD
#if defined __USE_XOPEN || defined __USE_POSIX || defined __USE_MISC
__USING_NAMESPACE_STD(tm)
#endif
# 157 "/usr/include/time.h" 3 4


# ifdef __USE_POSIX199309
/* POSIX.1b structure for timer start values and intervals.  */
struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };

/* We can use a simple forward declaration.  */
struct sigevent;

# endif	/* POSIX.1b */
# 171 "/usr/include/time.h" 3 4

# ifdef __USE_XOPEN2K
#  ifndef __pid_t_defined
typedef __pid_t pid_t;
#   define __pid_t_defined
#  endif
# 177 "/usr/include/time.h" 3 4
# endif
# 178 "/usr/include/time.h" 3 4


# ifdef __USE_ISOC11
/* Time base values for timespec_get.  */
# define TIME_UTC 1
# endif
# 184 "/usr/include/time.h" 3 4


__BEGIN_NAMESPACE_STD
/* Time used by the program so far (user time + system time).
   The result / CLOCKS_PER_SECOND is program time in seconds.  */
extern clock_t clock (void) __THROW;

/* Return the current time and put it in *TIMER if TIMER is not NULL.  */
extern time_t time (time_t *__timer) __THROW;

/* Return the difference between TIME1 and TIME0.  */
extern double difftime (time_t __time1, time_t __time0)
     __THROW __attribute__ ((__const__));

/* Return the `time_t' representation of TP and normalize TP.  */
extern time_t mktime (struct tm *__tp) __THROW;


/* Format TP into S according to FORMAT.
   Write no more than MAXSIZE characters and return the number
   of characters written, or 0 if it would exceed MAXSIZE.  */
extern size_t strftime (char *__restrict __s, size_t __maxsize,
			const char *__restrict __format,
			const struct tm *__restrict __tp) __THROW;
__END_NAMESPACE_STD

# ifdef __USE_XOPEN
/* Parse S according to FORMAT and store binary time information in TP.
   The return value is a pointer to the first unparsed character in S.  */
extern char *strptime (const char *__restrict __s,
		       const char *__restrict __fmt, struct tm *__tp)
     __THROW;
# endif
# 217 "/usr/include/time.h" 3 4

# ifdef __USE_XOPEN2K8
/* Similar to the two functions above but take the information from
   the provided locale and not the global locale.  */
#if 0 /* expanded by -frewrite-includes */
# include <xlocale.h>
#endif /* expanded by -frewrite-includes */
# 222 "/usr/include/time.h" 3 4

extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
			  const char *__restrict __format,
			  const struct tm *__restrict __tp,
			  __locale_t __loc) __THROW;
# endif
# 228 "/usr/include/time.h" 3 4

# ifdef __USE_GNU
extern char *strptime_l (const char *__restrict __s,
			 const char *__restrict __fmt, struct tm *__tp,
			 __locale_t __loc) __THROW;
# endif
# 234 "/usr/include/time.h" 3 4


__BEGIN_NAMESPACE_STD
/* Return the `struct tm' representation of *TIMER
   in Universal Coordinated Time (aka Greenwich Mean Time).  */
extern struct tm *gmtime (const time_t *__timer) __THROW;

/* Return the `struct tm' representation
   of *TIMER in the local timezone.  */
extern struct tm *localtime (const time_t *__timer) __THROW;
__END_NAMESPACE_STD

# if defined __USE_POSIX || defined __USE_MISC
/* Return the `struct tm' representation of *TIMER in UTC,
   using *TP to store the result.  */
extern struct tm *gmtime_r (const time_t *__restrict __timer,
			    struct tm *__restrict __tp) __THROW;

/* Return the `struct tm' representation of *TIMER in local time,
   using *TP to store the result.  */
extern struct tm *localtime_r (const time_t *__restrict __timer,
			       struct tm *__restrict __tp) __THROW;
# endif	/* POSIX or misc */
# 257 "/usr/include/time.h" 3 4

__BEGIN_NAMESPACE_STD
/* Return a string of the form "Day Mon dd hh:mm:ss yyyy\n"
   that is the representation of TP in this format.  */
extern char *asctime (const struct tm *__tp) __THROW;

/* Equivalent to `asctime (localtime (timer))'.  */
extern char *ctime (const time_t *__timer) __THROW;
__END_NAMESPACE_STD

# if defined __USE_POSIX || defined __USE_MISC
/* Reentrant versions of the above functions.  */

/* Return in BUF a string of the form "Day Mon dd hh:mm:ss yyyy\n"
   that is the representation of TP in this format.  */
extern char *asctime_r (const struct tm *__restrict __tp,
			char *__restrict __buf) __THROW;

/* Equivalent to `asctime_r (localtime_r (timer, *TMP*), buf)'.  */
extern char *ctime_r (const time_t *__restrict __timer,
		      char *__restrict __buf) __THROW;
# endif	/* POSIX or misc */
# 279 "/usr/include/time.h" 3 4


/* Defined in localtime.c.  */
extern char *__tzname[2];	/* Current timezone names.  */
extern int __daylight;		/* If daylight-saving time is ever in use.  */
extern long int __timezone;	/* Seconds west of UTC.  */


# ifdef	__USE_POSIX
/* Same as above.  */
extern char *tzname[2];

/* Set time conversion information from the TZ environment variable.
   If TZ is not defined, a locale-dependent default is used.  */
extern void tzset (void) __THROW;
# endif
# 295 "/usr/include/time.h" 3 4

# if defined __USE_SVID || defined __USE_XOPEN
extern int daylight;
extern long int timezone;
# endif
# 300 "/usr/include/time.h" 3 4

# ifdef __USE_SVID
/* Set the system time to *WHEN.
   This call is restricted to the superuser.  */
extern int stime (const time_t *__when) __THROW;
# endif
# 306 "/usr/include/time.h" 3 4


/* Nonzero if YEAR is a leap year (every 4 years,
   except every 100th isn't, and every 400th is).  */
# define __isleap(year)	\
  ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))


# ifdef __USE_MISC
/* Miscellaneous functions many Unices inherited from the public domain
   localtime package.  These are included only for compatibility.  */

/* Like `mktime', but for TP represents Universal Time, not local time.  */
extern time_t timegm (struct tm *__tp) __THROW;

/* Another name for `mktime'.  */
extern time_t timelocal (struct tm *__tp) __THROW;

/* Return the number of days in YEAR.  */
extern int dysize (int __year) __THROW  __attribute__ ((__const__));
# endif
# 327 "/usr/include/time.h" 3 4


# ifdef __USE_POSIX199309
/* Pause execution for a number of nanoseconds.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int nanosleep (const struct timespec *__requested_time,
		      struct timespec *__remaining);


/* Get resolution of clock CLOCK_ID.  */
extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __THROW;

/* Get current value of clock CLOCK_ID and store it in TP.  */
extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __THROW;

/* Set clock CLOCK_ID to value TP.  */
extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __THROW;

#  ifdef __USE_XOPEN2K
/* High-resolution sleep with the specified clock.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int clock_nanosleep (clockid_t __clock_id, int __flags,
			    const struct timespec *__req,
			    struct timespec *__rem);

/* Return clock ID for CPU-time clock.  */
extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __THROW;
#  endif
# 360 "/usr/include/time.h" 3 4


/* Create new per-process timer using CLOCK_ID.  */
extern int timer_create (clockid_t __clock_id,
			 struct sigevent *__restrict __evp,
			 timer_t *__restrict __timerid) __THROW;

/* Delete timer TIMERID.  */
extern int timer_delete (timer_t __timerid) __THROW;

/* Set timer TIMERID to VALUE, returning old value in OVALUE.  */
extern int timer_settime (timer_t __timerid, int __flags,
			  const struct itimerspec *__restrict __value,
			  struct itimerspec *__restrict __ovalue) __THROW;

/* Get current value of timer TIMERID and store it in VALUE.  */
extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __THROW;

/* Get expiration overrun for timer TIMERID.  */
extern int timer_getoverrun (timer_t __timerid) __THROW;
# endif
# 382 "/usr/include/time.h" 3 4


# ifdef __USE_ISOC11
/* Set TS to calendar time based in time base BASE.  */
extern int timespec_get (struct timespec *__ts, int __base)
     __THROW __nonnull ((1));
# endif
# 389 "/usr/include/time.h" 3 4


# ifdef __USE_XOPEN_EXTENDED
/* Set to one of the following values to indicate an error.
     1  the DATEMSK environment variable is null or undefined,
     2  the template file cannot be opened for reading,
     3  failed to get file status information,
     4  the template file is not a regular file,
     5  an error is encountered while reading the template file,
     6  memory allication failed (not enough memory available),
     7  there is no line in the template that matches the input,
     8  invalid input specification Example: February 31 or a time is
	specified that can not be represented in a time_t (representing
	the time in seconds since 00:00:00 UTC, January 1, 1970) */
extern int getdate_err;

/* Parse the given string as a date specification and return a value
   representing the value.  The templates from the file identified by
   the environment variable DATEMSK are used.  In case of an error
   `getdate_err' is set.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern struct tm *getdate (const char *__string);
# endif
# 414 "/usr/include/time.h" 3 4

# ifdef __USE_GNU
/* Since `getdate' is not reentrant because of the use of `getdate_err'
   and the static buffer to return the result in, we provide a thread-safe
   variant.  The functionality is the same.  The result is returned in
   the buffer pointed to by RESBUFP and in case of an error the return
   value is != 0 with the same values as given above for `getdate_err'.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int getdate_r (const char *__restrict __string,
		      struct tm *__restrict __resbufp);
# endif
# 429 "/usr/include/time.h" 3 4

__END_DECLS

#endif /* <time.h> included.  */
# 433 "/usr/include/time.h" 3 4

#endif /* <time.h> not already included.  */
# 435 "/usr/include/time.h" 3 4
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

#ifdef __USE_XOPEN
# ifndef __useconds_t_defined
typedef __useconds_t useconds_t;
#  define __useconds_t_defined
# endif
# 139 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# ifndef __suseconds_t_defined
typedef __suseconds_t suseconds_t;
#  define __suseconds_t_defined
# endif
# 143 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#endif
# 144 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#define	__need_size_t
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/bin/../lib/clang/3.4/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __STDDEF_H
#define __STDDEF_H

#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 34 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 36 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 42 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 44 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 53 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 55 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 64 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#endif
# 65 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 67 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#endif
# 68 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 74 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 76 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#else
# 77 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 79 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 85 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#endif
# 86 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#define offsetof(t, d) __builtin_offsetof(t, d)

#endif /* __STDDEF_H */
# 90 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 99 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 101 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 103 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

#ifdef __USE_MISC
/* Old compatibility names for C types.  */
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#endif
# 154 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

/* These size-specific names are used by some of the inet code.  */

#if !__GNUC_PREREQ (2, 7)

/* These types are defined by the ISO C99 header <inttypes.h>. */
# ifndef __int8_t_defined
#  define __int8_t_defined
typedef	char int8_t;
typedef	short int int16_t;
typedef	int int32_t;
#  if __WORDSIZE == 64
typedef long int int64_t;
#  else
# 168 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
__extension__ typedef long long int int64_t;
#  endif
# 170 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# endif
# 171 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

/* But these were defined by ISO C without the first `_'.  */
typedef	unsigned char u_int8_t;
typedef	unsigned short int u_int16_t;
typedef	unsigned int u_int32_t;
# if __WORDSIZE == 64
typedef unsigned long int u_int64_t;
# else
# 179 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
__extension__ typedef unsigned long long int u_int64_t;
# endif
# 181 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

typedef int register_t;

#else
# 185 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

/* For GCC 2.7 and later, we can use specific type-size attributes.  */
# define __intN_t(N, MODE) \
  typedef int int##N##_t __attribute__ ((__mode__ (MODE)))
# define __u_intN_t(N, MODE) \
  typedef unsigned int u_int##N##_t __attribute__ ((__mode__ (MODE)))

# ifndef __int8_t_defined
#  define __int8_t_defined
__intN_t (8, __QI__);
__intN_t (16, __HI__);
__intN_t (32, __SI__);
__intN_t (64, __DI__);
# endif
# 199 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

__u_intN_t (8, __QI__);
__u_intN_t (16, __HI__);
__u_intN_t (32, __SI__);
__u_intN_t (64, __DI__);

typedef int register_t __attribute__ ((__mode__ (__word__)));


/* Some code from BIND tests this macro to see if the types above are
   defined.  */
#endif
# 211 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#define __BIT_TYPES_DEFINED__	1


#ifdef	__USE_BSD
/* In BSD <sys/types.h> is expected to define BYTE_ORDER.  */
#if 0 /* expanded by -frewrite-includes */
# include <endian.h>
#endif /* expanded by -frewrite-includes */
# 217 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

/* It also defines `fd_set' and the FD_* macros for `select'.  */
#if 0 /* expanded by -frewrite-includes */
# include <sys/select.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
/* `fd_set' type and related macros, and `select'/`pselect' declarations.
   Copyright (C) 1996-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*	POSIX 1003.1g: 6.2 Select from File Descriptor Sets <sys/select.h>  */

#ifndef _SYS_SELECT_H
#define _SYS_SELECT_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 25 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

/* Get definition of needed basic types.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 28 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

/* Get __FD_* definitions.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/select.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
/* Copyright (C) 1997-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _SYS_SELECT_H
# error "Never use <bits/select.h> directly; include <sys/select.h> instead."
#endif
# 21 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4

#if 0 /* expanded by -frewrite-includes */
#include <bits/wordsize.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */

#if defined __x86_64__ && !defined __ILP32__
# define __WORDSIZE	64
#else
# 6 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE	32
#endif
# 8 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4

#ifdef __x86_64__
# define __WORDSIZE_TIME64_COMPAT32	1
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# define __SYSCALL_WORDSIZE		64
#endif
# 14 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4


#if defined __GNUC__ && __GNUC__ >= 2

# if __WORDSIZE == 64
#  define __FD_ZERO_STOS "stosq"
# else
# 30 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
#  define __FD_ZERO_STOS "stosl"
# endif
# 32 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4

# define __FD_ZERO(fdsp) \
  do {									      \
    int __d0, __d1;							      \
    __asm__ __volatile__ ("cld; rep; " __FD_ZERO_STOS			      \
			  : "=c" (__d0), "=D" (__d1)			      \
			  : "a" (0), "0" (sizeof (fd_set)		      \
					  / sizeof (__fd_mask)),	      \
			    "1" (&__FDS_BITS (fdsp)[0])			      \
			  : "memory");					      \
  } while (0)

#else	/* ! GNU CC */
# 45 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4

/* We don't use `memset' because this would require a prototype and
   the array isn't too big.  */
# define __FD_ZERO(set)  \
  do {									      \
    unsigned int __i;							      \
    fd_set *__arr = (set);						      \
    for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i)	      \
      __FDS_BITS (__arr)[__i] = 0;					      \
  } while (0)

#endif	/* GNU CC */
# 57 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4

#define __FD_SET(d, set) \
  ((void) (__FDS_BITS (set)[__FD_ELT (d)] |= __FD_MASK (d)))
#define __FD_CLR(d, set) \
  ((void) (__FDS_BITS (set)[__FD_ELT (d)] &= ~__FD_MASK (d)))
#define __FD_ISSET(d, set) \
  ((__FDS_BITS (set)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

/* Get __sigset_t.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/sigset.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
/* __sig_atomic_t, __sigset_t, and related definitions.  Linux version.
   Copyright (C) 1991-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef	_SIGSET_H_types
# define _SIGSET_H_types	1

typedef int __sig_atomic_t;

/* A `sigset_t' has a bit for each signal.  */

# define _SIGSET_NWORDS	(1024 / (8 * sizeof (unsigned long int)))
typedef struct
  {
    unsigned long int __val[_SIGSET_NWORDS];
  } __sigset_t;

#endif
# 33 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4


/* We only want to define these functions if <signal.h> was actually
   included; otherwise we were included just to define the types.  Since we
   are namespace-clean, it wouldn't hurt to define extra macros.  But
   trouble can be caused by functions being defined (e.g., any global
   register vars declared later will cause compilation errors).  */

#if !defined _SIGSET_H_fns && defined _SIGNAL_H
# define _SIGSET_H_fns 1

# ifndef _EXTERN_INLINE
#  define _EXTERN_INLINE __extern_inline
# endif
# 47 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4

/* Return a mask that includes the bit for SIG only.  */
# define __sigmask(sig) \
  (((unsigned long int) 1) << (((sig) - 1) % (8 * sizeof (unsigned long int))))

/* Return the word index for SIG.  */
# define __sigword(sig)	(((sig) - 1) / (8 * sizeof (unsigned long int)))

# if defined __GNUC__ && __GNUC__ >= 2
#  define __sigemptyset(set) \
  (__extension__ ({ int __cnt = _SIGSET_NWORDS;				      \
		    sigset_t *__set = (set);				      \
		    while (--__cnt >= 0) __set->__val[__cnt] = 0;	      \
		    0; }))
#  define __sigfillset(set) \
  (__extension__ ({ int __cnt = _SIGSET_NWORDS;				      \
		    sigset_t *__set = (set);				      \
		    while (--__cnt >= 0) __set->__val[__cnt] = ~0UL;	      \
		    0; }))

#  ifdef __USE_GNU
/* The POSIX does not specify for handling the whole signal set in one
   command.  This is often wanted and so we define three more functions
   here.  */
#   define __sigisemptyset(set) \
  (__extension__ ({ int __cnt = _SIGSET_NWORDS;				      \
		    const sigset_t *__set = (set);			      \
		    int __ret = __set->__val[--__cnt];			      \
		    while (!__ret && --__cnt >= 0)			      \
			__ret = __set->__val[__cnt];			      \
		    __ret == 0; }))
#   define __sigandset(dest, left, right) \
  (__extension__ ({ int __cnt = _SIGSET_NWORDS;				      \
		    sigset_t *__dest = (dest);				      \
		    const sigset_t *__left = (left);			      \
		    const sigset_t *__right = (right);			      \
		    while (--__cnt >= 0)				      \
		      __dest->__val[__cnt] = (__left->__val[__cnt]	      \
					      & __right->__val[__cnt]);	      \
		    0; }))
#   define __sigorset(dest, left, right) \
  (__extension__ ({ int __cnt = _SIGSET_NWORDS;				      \
		    sigset_t *__dest = (dest);				      \
		    const sigset_t *__left = (left);			      \
		    const sigset_t *__right = (right);			      \
		    while (--__cnt >= 0)				      \
		      __dest->__val[__cnt] = (__left->__val[__cnt]	      \
					      | __right->__val[__cnt]);	      \
		    0; }))
#  endif
# 97 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
# endif
# 98 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4

/* These functions needn't check for a bogus signal number -- error
   checking is done in the non __ versions.  */

extern int __sigismember (const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);

# ifdef __USE_EXTERN_INLINES
#  define __SIGSETFN(NAME, BODY, CONST)					      \
  _EXTERN_INLINE int							      \
  NAME (CONST __sigset_t *__set, int __sig)				      \
  {									      \
    unsigned long int __mask = __sigmask (__sig);			      \
    unsigned long int __word = __sigword (__sig);			      \
    return BODY;							      \
  }

__SIGSETFN (__sigismember, (__set->__val[__word] & __mask) ? 1 : 0, const)
__SIGSETFN (__sigaddset, ((__set->__val[__word] |= __mask), 0), )
__SIGSETFN (__sigdelset, ((__set->__val[__word] &= ~__mask), 0), )

#  undef __SIGSETFN
# endif
# 122 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4


#endif /* ! _SIGSET_H_fns.  */
# 125 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

#ifndef __sigset_t_defined
# define __sigset_t_defined
typedef __sigset_t sigset_t;
#endif
# 39 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

/* Get definition of timer specification structures.  */
#define __need_time_t
#define __need_timespec
#if 0 /* expanded by -frewrite-includes */
#include <time.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/time.h" 1 3 4
/* Copyright (C) 1991-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.23 Date and time	<time.h>
 */

#ifndef	_TIME_H

#if (! defined __need_time_t && !defined __need_clock_t && \
     ! defined __need_timespec)
# define _TIME_H	1
#if 0 /* expanded by -frewrite-includes */
# include <features.h>
#endif /* expanded by -frewrite-includes */
# 28 "/usr/include/time.h" 3 4

__BEGIN_DECLS

#endif
# 32 "/usr/include/time.h" 3 4

#ifdef	_TIME_H
/* Get size_t and NULL from <stddef.h>.  */
# define __need_size_t
# define __need_NULL
#if 0 /* expanded by -frewrite-includes */
# include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 38 "/usr/include/time.h" 3 4

/* This defines CLOCKS_PER_SEC, which is the number of processor clock
   ticks per second.  */
#if 0 /* expanded by -frewrite-includes */
# include <bits/time.h>
#endif /* expanded by -frewrite-includes */
# 42 "/usr/include/time.h" 3 4

/* This is the obsolete POSIX.1-1988 name for the same constant.  */
# if !defined __STRICT_ANSI__ && !defined __USE_XOPEN2K
#  ifndef CLK_TCK
#   define CLK_TCK	CLOCKS_PER_SEC
#  endif
# 48 "/usr/include/time.h" 3 4
# endif
# 49 "/usr/include/time.h" 3 4

#endif /* <time.h> included.  */
# 51 "/usr/include/time.h" 3 4

#if !defined __clock_t_defined && (defined _TIME_H || defined __need_clock_t)
# define __clock_t_defined	1

#if 0 /* expanded by -frewrite-includes */
# include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 56 "/usr/include/time.h" 3 4

__BEGIN_NAMESPACE_STD
/* Returned by `clock'.  */
typedef __clock_t clock_t;
__END_NAMESPACE_STD
#if defined __USE_XOPEN || defined __USE_POSIX || defined __USE_MISC
__USING_NAMESPACE_STD(clock_t)
#endif
# 64 "/usr/include/time.h" 3 4

#endif /* clock_t not defined and <time.h> or need clock_t.  */
# 66 "/usr/include/time.h" 3 4
#undef	__need_clock_t

#if !defined __time_t_defined && (defined _TIME_H || defined __need_time_t)
# define __time_t_defined	1

#if 0 /* expanded by -frewrite-includes */
# include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 72 "/usr/include/time.h" 3 4

__BEGIN_NAMESPACE_STD
/* Returned by `time'.  */
typedef __time_t time_t;
__END_NAMESPACE_STD
#if defined __USE_POSIX || defined __USE_MISC || defined __USE_SVID
__USING_NAMESPACE_STD(time_t)
#endif
# 80 "/usr/include/time.h" 3 4

#endif /* time_t not defined and <time.h> or need time_t.  */
# 82 "/usr/include/time.h" 3 4
#undef	__need_time_t

#if !defined __clockid_t_defined && \
   ((defined _TIME_H && defined __USE_POSIX199309) || defined __need_clockid_t)
# define __clockid_t_defined	1

#if 0 /* expanded by -frewrite-includes */
# include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 89 "/usr/include/time.h" 3 4

/* Clock ID used in clock and timer functions.  */
typedef __clockid_t clockid_t;

#endif /* clockid_t not defined and <time.h> or need clockid_t.  */
# 94 "/usr/include/time.h" 3 4
#undef	__clockid_time_t

#if !defined __timer_t_defined && \
    ((defined _TIME_H && defined __USE_POSIX199309) || defined __need_timer_t)
# define __timer_t_defined	1

#if 0 /* expanded by -frewrite-includes */
# include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 101 "/usr/include/time.h" 3 4

/* Timer ID returned by `timer_create'.  */
typedef __timer_t timer_t;

#endif /* timer_t not defined and <time.h> or need timer_t.  */
# 106 "/usr/include/time.h" 3 4
#undef	__need_timer_t


#if (!defined __timespec_defined					\
     && ((defined _TIME_H						\
	  && (defined __USE_POSIX199309 || defined __USE_MISC		\
	      || defined __USE_ISOC11))					\
	 || defined __need_timespec))
# define __timespec_defined	1

#if 0 /* expanded by -frewrite-includes */
# include <bits/types.h>	/* This defines __time_t for us.  */
#endif /* expanded by -frewrite-includes */
# 117 "/usr/include/time.h" 3 4

/* POSIX.1b structure for a time value.  This is like a `struct timeval' but
   has nanoseconds instead of microseconds.  */
struct timespec
  {
    __time_t tv_sec;		/* Seconds.  */
    __syscall_slong_t tv_nsec;	/* Nanoseconds.  */
  };

#endif /* timespec not defined and <time.h> or need timespec.  */
# 127 "/usr/include/time.h" 3 4
#undef	__need_timespec


#ifdef	_TIME_H
__BEGIN_NAMESPACE_STD
/* Used by other time functions.  */
struct tm
{
  int tm_sec;			/* Seconds.	[0-60] (1 leap second) */
  int tm_min;			/* Minutes.	[0-59] */
  int tm_hour;			/* Hours.	[0-23] */
  int tm_mday;			/* Day.		[1-31] */
  int tm_mon;			/* Month.	[0-11] */
  int tm_year;			/* Year	- 1900.  */
  int tm_wday;			/* Day of week.	[0-6] */
  int tm_yday;			/* Days in year.[0-365]	*/
  int tm_isdst;			/* DST.		[-1/0/1]*/

# ifdef	__USE_BSD
  long int tm_gmtoff;		/* Seconds east of UTC.  */
  const char *tm_zone;		/* Timezone abbreviation.  */
# else
# 149 "/usr/include/time.h" 3 4
  long int __tm_gmtoff;		/* Seconds east of UTC.  */
  const char *__tm_zone;	/* Timezone abbreviation.  */
# endif
# 152 "/usr/include/time.h" 3 4
};
__END_NAMESPACE_STD
#if defined __USE_XOPEN || defined __USE_POSIX || defined __USE_MISC
__USING_NAMESPACE_STD(tm)
#endif
# 157 "/usr/include/time.h" 3 4


# ifdef __USE_POSIX199309
/* POSIX.1b structure for timer start values and intervals.  */
struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };

/* We can use a simple forward declaration.  */
struct sigevent;

# endif	/* POSIX.1b */
# 171 "/usr/include/time.h" 3 4

# ifdef __USE_XOPEN2K
#  ifndef __pid_t_defined
typedef __pid_t pid_t;
#   define __pid_t_defined
#  endif
# 177 "/usr/include/time.h" 3 4
# endif
# 178 "/usr/include/time.h" 3 4


# ifdef __USE_ISOC11
/* Time base values for timespec_get.  */
# define TIME_UTC 1
# endif
# 184 "/usr/include/time.h" 3 4


__BEGIN_NAMESPACE_STD
/* Time used by the program so far (user time + system time).
   The result / CLOCKS_PER_SECOND is program time in seconds.  */
extern clock_t clock (void) __THROW;

/* Return the current time and put it in *TIMER if TIMER is not NULL.  */
extern time_t time (time_t *__timer) __THROW;

/* Return the difference between TIME1 and TIME0.  */
extern double difftime (time_t __time1, time_t __time0)
     __THROW __attribute__ ((__const__));

/* Return the `time_t' representation of TP and normalize TP.  */
extern time_t mktime (struct tm *__tp) __THROW;


/* Format TP into S according to FORMAT.
   Write no more than MAXSIZE characters and return the number
   of characters written, or 0 if it would exceed MAXSIZE.  */
extern size_t strftime (char *__restrict __s, size_t __maxsize,
			const char *__restrict __format,
			const struct tm *__restrict __tp) __THROW;
__END_NAMESPACE_STD

# ifdef __USE_XOPEN
/* Parse S according to FORMAT and store binary time information in TP.
   The return value is a pointer to the first unparsed character in S.  */
extern char *strptime (const char *__restrict __s,
		       const char *__restrict __fmt, struct tm *__tp)
     __THROW;
# endif
# 217 "/usr/include/time.h" 3 4

# ifdef __USE_XOPEN2K8
/* Similar to the two functions above but take the information from
   the provided locale and not the global locale.  */
#if 0 /* expanded by -frewrite-includes */
# include <xlocale.h>
#endif /* expanded by -frewrite-includes */
# 222 "/usr/include/time.h" 3 4

extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
			  const char *__restrict __format,
			  const struct tm *__restrict __tp,
			  __locale_t __loc) __THROW;
# endif
# 228 "/usr/include/time.h" 3 4

# ifdef __USE_GNU
extern char *strptime_l (const char *__restrict __s,
			 const char *__restrict __fmt, struct tm *__tp,
			 __locale_t __loc) __THROW;
# endif
# 234 "/usr/include/time.h" 3 4


__BEGIN_NAMESPACE_STD
/* Return the `struct tm' representation of *TIMER
   in Universal Coordinated Time (aka Greenwich Mean Time).  */
extern struct tm *gmtime (const time_t *__timer) __THROW;

/* Return the `struct tm' representation
   of *TIMER in the local timezone.  */
extern struct tm *localtime (const time_t *__timer) __THROW;
__END_NAMESPACE_STD

# if defined __USE_POSIX || defined __USE_MISC
/* Return the `struct tm' representation of *TIMER in UTC,
   using *TP to store the result.  */
extern struct tm *gmtime_r (const time_t *__restrict __timer,
			    struct tm *__restrict __tp) __THROW;

/* Return the `struct tm' representation of *TIMER in local time,
   using *TP to store the result.  */
extern struct tm *localtime_r (const time_t *__restrict __timer,
			       struct tm *__restrict __tp) __THROW;
# endif	/* POSIX or misc */
# 257 "/usr/include/time.h" 3 4

__BEGIN_NAMESPACE_STD
/* Return a string of the form "Day Mon dd hh:mm:ss yyyy\n"
   that is the representation of TP in this format.  */
extern char *asctime (const struct tm *__tp) __THROW;

/* Equivalent to `asctime (localtime (timer))'.  */
extern char *ctime (const time_t *__timer) __THROW;
__END_NAMESPACE_STD

# if defined __USE_POSIX || defined __USE_MISC
/* Reentrant versions of the above functions.  */

/* Return in BUF a string of the form "Day Mon dd hh:mm:ss yyyy\n"
   that is the representation of TP in this format.  */
extern char *asctime_r (const struct tm *__restrict __tp,
			char *__restrict __buf) __THROW;

/* Equivalent to `asctime_r (localtime_r (timer, *TMP*), buf)'.  */
extern char *ctime_r (const time_t *__restrict __timer,
		      char *__restrict __buf) __THROW;
# endif	/* POSIX or misc */
# 279 "/usr/include/time.h" 3 4


/* Defined in localtime.c.  */
extern char *__tzname[2];	/* Current timezone names.  */
extern int __daylight;		/* If daylight-saving time is ever in use.  */
extern long int __timezone;	/* Seconds west of UTC.  */


# ifdef	__USE_POSIX
/* Same as above.  */
extern char *tzname[2];

/* Set time conversion information from the TZ environment variable.
   If TZ is not defined, a locale-dependent default is used.  */
extern void tzset (void) __THROW;
# endif
# 295 "/usr/include/time.h" 3 4

# if defined __USE_SVID || defined __USE_XOPEN
extern int daylight;
extern long int timezone;
# endif
# 300 "/usr/include/time.h" 3 4

# ifdef __USE_SVID
/* Set the system time to *WHEN.
   This call is restricted to the superuser.  */
extern int stime (const time_t *__when) __THROW;
# endif
# 306 "/usr/include/time.h" 3 4


/* Nonzero if YEAR is a leap year (every 4 years,
   except every 100th isn't, and every 400th is).  */
# define __isleap(year)	\
  ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))


# ifdef __USE_MISC
/* Miscellaneous functions many Unices inherited from the public domain
   localtime package.  These are included only for compatibility.  */

/* Like `mktime', but for TP represents Universal Time, not local time.  */
extern time_t timegm (struct tm *__tp) __THROW;

/* Another name for `mktime'.  */
extern time_t timelocal (struct tm *__tp) __THROW;

/* Return the number of days in YEAR.  */
extern int dysize (int __year) __THROW  __attribute__ ((__const__));
# endif
# 327 "/usr/include/time.h" 3 4


# ifdef __USE_POSIX199309
/* Pause execution for a number of nanoseconds.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int nanosleep (const struct timespec *__requested_time,
		      struct timespec *__remaining);


/* Get resolution of clock CLOCK_ID.  */
extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __THROW;

/* Get current value of clock CLOCK_ID and store it in TP.  */
extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __THROW;

/* Set clock CLOCK_ID to value TP.  */
extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __THROW;

#  ifdef __USE_XOPEN2K
/* High-resolution sleep with the specified clock.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int clock_nanosleep (clockid_t __clock_id, int __flags,
			    const struct timespec *__req,
			    struct timespec *__rem);

/* Return clock ID for CPU-time clock.  */
extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __THROW;
#  endif
# 360 "/usr/include/time.h" 3 4


/* Create new per-process timer using CLOCK_ID.  */
extern int timer_create (clockid_t __clock_id,
			 struct sigevent *__restrict __evp,
			 timer_t *__restrict __timerid) __THROW;

/* Delete timer TIMERID.  */
extern int timer_delete (timer_t __timerid) __THROW;

/* Set timer TIMERID to VALUE, returning old value in OVALUE.  */
extern int timer_settime (timer_t __timerid, int __flags,
			  const struct itimerspec *__restrict __value,
			  struct itimerspec *__restrict __ovalue) __THROW;

/* Get current value of timer TIMERID and store it in VALUE.  */
extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __THROW;

/* Get expiration overrun for timer TIMERID.  */
extern int timer_getoverrun (timer_t __timerid) __THROW;
# endif
# 382 "/usr/include/time.h" 3 4


# ifdef __USE_ISOC11
/* Set TS to calendar time based in time base BASE.  */
extern int timespec_get (struct timespec *__ts, int __base)
     __THROW __nonnull ((1));
# endif
# 389 "/usr/include/time.h" 3 4


# ifdef __USE_XOPEN_EXTENDED
/* Set to one of the following values to indicate an error.
     1  the DATEMSK environment variable is null or undefined,
     2  the template file cannot be opened for reading,
     3  failed to get file status information,
     4  the template file is not a regular file,
     5  an error is encountered while reading the template file,
     6  memory allication failed (not enough memory available),
     7  there is no line in the template that matches the input,
     8  invalid input specification Example: February 31 or a time is
	specified that can not be represented in a time_t (representing
	the time in seconds since 00:00:00 UTC, January 1, 1970) */
extern int getdate_err;

/* Parse the given string as a date specification and return a value
   representing the value.  The templates from the file identified by
   the environment variable DATEMSK are used.  In case of an error
   `getdate_err' is set.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern struct tm *getdate (const char *__string);
# endif
# 414 "/usr/include/time.h" 3 4

# ifdef __USE_GNU
/* Since `getdate' is not reentrant because of the use of `getdate_err'
   and the static buffer to return the result in, we provide a thread-safe
   variant.  The functionality is the same.  The result is returned in
   the buffer pointed to by RESBUFP and in case of an error the return
   value is != 0 with the same values as given above for `getdate_err'.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int getdate_r (const char *__restrict __string,
		      struct tm *__restrict __resbufp);
# endif
# 429 "/usr/include/time.h" 3 4

__END_DECLS

#endif /* <time.h> included.  */
# 433 "/usr/include/time.h" 3 4

#endif /* <time.h> not already included.  */
# 435 "/usr/include/time.h" 3 4
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
#define __need_timeval
#if 0 /* expanded by -frewrite-includes */
#include <bits/time.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
/* System-dependent timing definitions.  Linux version.
   Copyright (C) 1996-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <time.h> instead.
 */

#if defined __need_timeval || defined __USE_GNU
# ifndef _STRUCT_TIMEVAL
#  define _STRUCT_TIMEVAL	1
#if 0 /* expanded by -frewrite-includes */
#  include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 27 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4

/* A time value that is accurate to the nearest
   microsecond but also has a range of years.  */
struct timeval
  {
    __time_t tv_sec;		/* Seconds.  */
    __suseconds_t tv_usec;	/* Microseconds.  */
  };
# endif	/* struct timeval */
# 36 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
#endif
# 37 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4

#ifndef __need_timeval
# ifndef _BITS_TIME_H
#  define _BITS_TIME_H	1

/* ISO/IEC 9899:1990 7.12.1: <time.h>
   The macro `CLOCKS_PER_SEC' is the number per second of the value
   returned by the `clock' function. */
/* CAE XSH, Issue 4, Version 2: <time.h>
   The value of CLOCKS_PER_SEC is required to be 1 million on all
   XSI-conformant systems. */
#  define CLOCKS_PER_SEC  1000000l

#  if (!defined __STRICT_ANSI__ || defined __USE_POSIX) \
   && !defined __USE_XOPEN2K
/* Even though CLOCKS_PER_SEC has such a strange value CLK_TCK
   presents the real value for clock ticks per second for the system.  */
#if 0 /* expanded by -frewrite-includes */
#   include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 55 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
extern long int __sysconf (int);
#   define CLK_TCK ((__clock_t) __sysconf (2))	/* 2 is _SC_CLK_TCK */
#  endif
# 58 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4

#  ifdef __USE_POSIX199309
/* Identifier for system-wide realtime clock.  */
#   define CLOCK_REALTIME		0
/* Monotonic system-wide clock.  */
#   define CLOCK_MONOTONIC		1
/* High-resolution timer from the CPU.  */
#   define CLOCK_PROCESS_CPUTIME_ID	2
/* Thread-specific CPU-time clock.  */
#   define CLOCK_THREAD_CPUTIME_ID	3
/* Monotonic system-wide clock, not adjusted for frequency scaling.  */
#   define CLOCK_MONOTONIC_RAW		4
/* Identifier for system-wide realtime clock, updated only on ticks.  */
#   define CLOCK_REALTIME_COARSE	5
/* Monotonic system-wide clock, updated only on ticks.  */
#   define CLOCK_MONOTONIC_COARSE	6
/* Monotonic system-wide clock that includes time spent in suspension.  */
#   define CLOCK_BOOTTIME		7
/* Like CLOCK_REALTIME but also wakes suspended system.  */
#   define CLOCK_REALTIME_ALARM		8
/* Like CLOCK_BOOTTIME but also wakes suspended system.  */
#   define CLOCK_BOOTTIME_ALARM		9

/* Flag to indicate time is absolute.  */
#   define TIMER_ABSTIME		1
#  endif
# 84 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4

#  ifdef __USE_GNU
#if 0 /* expanded by -frewrite-includes */
#   include <bits/timex.h>
#endif /* expanded by -frewrite-includes */
# 87 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4

__BEGIN_DECLS

/* Tune a POSIX clock.  */
extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) __THROW;

__END_DECLS
#  endif /* use GNU */
# 95 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4

# endif	/* bits/time.h */
# 97 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
#endif
# 98 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4

#undef __need_timeval
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

#ifndef __suseconds_t_defined
typedef __suseconds_t suseconds_t;
# define __suseconds_t_defined
#endif
# 51 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4


/* The fd_set member is required to be an array of longs.  */
typedef long int __fd_mask;

/* Some versions of <linux/posix_types.h> define this macros.  */
#undef	__NFDBITS
/* It's easier to assume 8-bit bytes than to get CHAR_BIT.  */
#define __NFDBITS	(8 * (int) sizeof (__fd_mask))
#define	__FD_ELT(d)	((d) / __NFDBITS)
#define	__FD_MASK(d)	((__fd_mask) 1 << ((d) % __NFDBITS))

/* fd_set for select and pselect.  */
typedef struct
  {
    /* XPG4.2 requires this member name.  Otherwise avoid the name
       from the global namespace.  */
#ifdef __USE_XOPEN
    __fd_mask fds_bits[__FD_SETSIZE / __NFDBITS];
# define __FDS_BITS(set) ((set)->fds_bits)
#else
# 72 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
    __fd_mask __fds_bits[__FD_SETSIZE / __NFDBITS];
# define __FDS_BITS(set) ((set)->__fds_bits)
#endif
# 75 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
  } fd_set;

/* Maximum number of file descriptors in `fd_set'.  */
#define	FD_SETSIZE		__FD_SETSIZE

#ifdef __USE_MISC
/* Sometimes the fd_set member is assumed to have this type.  */
typedef __fd_mask fd_mask;

/* Number of bits per word of `fd_set' (some code assumes this is 32).  */
# define NFDBITS		__NFDBITS
#endif
# 87 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4


/* Access macros for `fd_set'.  */
#define	FD_SET(fd, fdsetp)	__FD_SET (fd, fdsetp)
#define	FD_CLR(fd, fdsetp)	__FD_CLR (fd, fdsetp)
#define	FD_ISSET(fd, fdsetp)	__FD_ISSET (fd, fdsetp)
#define	FD_ZERO(fdsetp)		__FD_ZERO (fdsetp)


__BEGIN_DECLS

/* Check the first NFDS descriptors each in READFDS (if not NULL) for read
   readiness, in WRITEFDS (if not NULL) for write readiness, and in EXCEPTFDS
   (if not NULL) for exceptional conditions.  If TIMEOUT is not NULL, time out
   after waiting the interval specified therein.  Returns the number of ready
   descriptors, or -1 for errors.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int select (int __nfds, fd_set *__restrict __readfds,
		   fd_set *__restrict __writefds,
		   fd_set *__restrict __exceptfds,
		   struct timeval *__restrict __timeout);

#ifdef __USE_XOPEN2K
/* Same as above only that the TIMEOUT value is given with higher
   resolution and a sigmask which is been set temporarily.  This version
   should be used.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int pselect (int __nfds, fd_set *__restrict __readfds,
		    fd_set *__restrict __writefds,
		    fd_set *__restrict __exceptfds,
		    const struct timespec *__restrict __timeout,
		    const __sigset_t *__restrict __sigmask);
#endif
# 124 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4


/* Define some inlines helping to catch common problems.  */
#if __USE_FORTIFY_LEVEL > 0 && defined __GNUC__
#if 0 /* expanded by -frewrite-includes */
# include <bits/select2.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/select2.h" 1 3 4
/* Checking macros for select functions.
   Copyright (C) 2011-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _SYS_SELECT_H
# error "Never include <bits/select2.h> directly; use <sys/select.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/select2.h" 3 4

/* Helper functions to issue warnings and errors when needed.  */
extern long int __fdelt_chk (long int __d);
extern long int __fdelt_warn (long int __d)
  __warnattr ("bit outside of fd_set selected");
#undef __FD_ELT
#define	__FD_ELT(d) \
  __extension__								    \
  ({ long int __d = (d);						    \
     (__builtin_constant_p (__d)					    \
      ? (0 <= __d && __d < __FD_SETSIZE					    \
	 ? (__d / __NFDBITS)						    \
	 : __fdelt_warn (__d))						    \
      : __fdelt_chk (__d)); })
# 129 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
#endif
# 130 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

__END_DECLS

#endif /* sys/select.h */
# 134 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

/* BSD defines these symbols, so we follow.  */
#if 0 /* expanded by -frewrite-includes */
# include <sys/sysmacros.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
/* Definitions of macros to access `dev_t' values.
   Copyright (C) 1996-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _SYS_SYSMACROS_H
#define _SYS_SYSMACROS_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 23 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

__BEGIN_DECLS

__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __THROW __attribute_const__;
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __THROW __attribute_const__;
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
					       unsigned int __minor)
     __THROW __attribute_const__;

#ifdef __USE_EXTERN_INLINES
__extension__ __extern_inline __attribute_const__ unsigned int
__NTH (gnu_dev_major (unsigned long long int __dev))
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ __extern_inline __attribute_const__ unsigned int
__NTH (gnu_dev_minor (unsigned long long int __dev))
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ __extern_inline __attribute_const__ unsigned long long int
__NTH (gnu_dev_makedev (unsigned int __major, unsigned int __minor))
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
	  | (((unsigned long long int) (__minor & ~0xff)) << 12)
	  | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
#endif
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
__END_DECLS

/* Access the functions with their traditional names.  */
#define major(dev) gnu_dev_major (dev)
#define minor(dev) gnu_dev_minor (dev)
#define makedev(maj, min) gnu_dev_makedev (maj, min)

#endif /* sys/sysmacros.h */
# 66 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
#endif /* Use BSD.  */
# 224 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4


#if (defined __USE_UNIX98 || defined __USE_XOPEN2K8) \
    && !defined __blksize_t_defined
typedef __blksize_t blksize_t;
# define __blksize_t_defined
#endif
# 231 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

/* Types from the Large File Support interface.  */
#ifndef __USE_FILE_OFFSET64
# ifndef __blkcnt_t_defined
typedef __blkcnt_t blkcnt_t;	 /* Type to count number of disk blocks.  */
#  define __blkcnt_t_defined
# endif
# 238 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# ifndef __fsblkcnt_t_defined
typedef __fsblkcnt_t fsblkcnt_t; /* Type to count file system blocks.  */
#  define __fsblkcnt_t_defined
# endif
# 242 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# ifndef __fsfilcnt_t_defined
typedef __fsfilcnt_t fsfilcnt_t; /* Type to count file system inodes.  */
#  define __fsfilcnt_t_defined
# endif
# 246 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#else
# 247 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# ifndef __blkcnt_t_defined
typedef __blkcnt64_t blkcnt_t;	   /* Type to count number of disk blocks.  */
#  define __blkcnt_t_defined
# endif
# 251 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# ifndef __fsblkcnt_t_defined
typedef __fsblkcnt64_t fsblkcnt_t; /* Type to count file system blocks.  */
#  define __fsblkcnt_t_defined
# endif
# 255 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# ifndef __fsfilcnt_t_defined
typedef __fsfilcnt64_t fsfilcnt_t; /* Type to count file system inodes.  */
#  define __fsfilcnt_t_defined
# endif
# 259 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#endif
# 260 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifdef __USE_LARGEFILE64
typedef __blkcnt64_t blkcnt64_t;     /* Type to count number of disk blocks. */
typedef __fsblkcnt64_t fsblkcnt64_t; /* Type to count file system blocks.  */
typedef __fsfilcnt64_t fsfilcnt64_t; /* Type to count file system inodes.  */
#endif
# 266 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4


/* Now add the thread types.  */
#if defined __USE_POSIX199506 || defined __USE_UNIX98
#if 0 /* expanded by -frewrite-includes */
# include <bits/pthreadtypes.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
/* Copyright (C) 2002-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _BITS_PTHREADTYPES_H
#define _BITS_PTHREADTYPES_H	1

#if 0 /* expanded by -frewrite-includes */
#include <bits/wordsize.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */

#if defined __x86_64__ && !defined __ILP32__
# define __WORDSIZE	64
#else
# 6 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE	32
#endif
# 8 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4

#ifdef __x86_64__
# define __WORDSIZE_TIME64_COMPAT32	1
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# define __SYSCALL_WORDSIZE		64
#endif
# 14 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4

#ifdef __x86_64__
# if __WORDSIZE == 64
#  define __SIZEOF_PTHREAD_ATTR_T 56
#  define __SIZEOF_PTHREAD_MUTEX_T 40
#  define __SIZEOF_PTHREAD_MUTEXATTR_T 4
#  define __SIZEOF_PTHREAD_COND_T 48
#  define __SIZEOF_PTHREAD_CONDATTR_T 4
#  define __SIZEOF_PTHREAD_RWLOCK_T 56
#  define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#  define __SIZEOF_PTHREAD_BARRIER_T 32
#  define __SIZEOF_PTHREAD_BARRIERATTR_T 4
# else
# 35 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
#  define __SIZEOF_PTHREAD_ATTR_T 32
#  define __SIZEOF_PTHREAD_MUTEX_T 32
#  define __SIZEOF_PTHREAD_MUTEXATTR_T 4
#  define __SIZEOF_PTHREAD_COND_T 48
#  define __SIZEOF_PTHREAD_CONDATTR_T 4
#  define __SIZEOF_PTHREAD_RWLOCK_T 44
#  define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#  define __SIZEOF_PTHREAD_BARRIER_T 20
#  define __SIZEOF_PTHREAD_BARRIERATTR_T 4
# endif
# 45 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
#else
# 46 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# define __SIZEOF_PTHREAD_ATTR_T 36
# define __SIZEOF_PTHREAD_MUTEX_T 24
# define __SIZEOF_PTHREAD_MUTEXATTR_T 4
# define __SIZEOF_PTHREAD_COND_T 48
# define __SIZEOF_PTHREAD_CONDATTR_T 4
# define __SIZEOF_PTHREAD_RWLOCK_T 32
# define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
# define __SIZEOF_PTHREAD_BARRIER_T 20
# define __SIZEOF_PTHREAD_BARRIERATTR_T 4
#endif
# 56 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4


/* Thread identifiers.  The structure of the attribute type is not
   exposed on purpose.  */
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[__SIZEOF_PTHREAD_ATTR_T];
  long int __align;
};
#ifndef __have_pthread_attr_t
typedef union pthread_attr_t pthread_attr_t;
# define __have_pthread_attr_t	1
#endif
# 72 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4


#ifdef __x86_64__
typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
#else
# 81 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
#endif
# 86 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4


/* Data structures for mutex handling.  The structure of the attribute
   type is not exposed on purpose.  */
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;
#ifdef __x86_64__
    unsigned int __nusers;
#endif
# 100 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
    /* KIND must stay at this position in the structure to maintain
       binary compatibility.  */
    int __kind;
#ifdef __x86_64__
    short __spins;
    short __elision;
    __pthread_list_t __list;
# define __PTHREAD_MUTEX_HAVE_PREV	1
# define __PTHREAD_MUTEX_HAVE_ELISION   1
#else
# 110 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
    unsigned int __nusers;
    __extension__ union
    {
      struct
      {
	short __espins;
	short __elision;
# define __spins d.__espins
# define __elision d.__elision
# define __PTHREAD_MUTEX_HAVE_ELISION   2
      } d;
      __pthread_slist_t __list;
    };
#endif
# 124 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[__SIZEOF_PTHREAD_MUTEX_T];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[__SIZEOF_PTHREAD_MUTEXATTR_T];
  int __align;
} pthread_mutexattr_t;


/* Data structure for conditional variable handling.  The structure of
   the attribute type is not exposed on purpose.  */
typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[__SIZEOF_PTHREAD_COND_T];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[__SIZEOF_PTHREAD_CONDATTR_T];
  int __align;
} pthread_condattr_t;


/* Keys for thread-specific data */
typedef unsigned int pthread_key_t;


/* Once-only execution */
typedef int pthread_once_t;


#if defined __USE_UNIX98 || defined __USE_XOPEN2K
/* Data structure for read-write lock variable handling.  The
   structure of the attribute type is not exposed on purpose.  */
typedef union
{
# ifdef __x86_64__
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;
    /* FLAGS must stay at this position in the structure to maintain
       binary compatibility.  */
    unsigned int __flags;
# define __PTHREAD_RWLOCK_INT_FLAGS_SHARED	1
  } __data;
# else
# 194 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    /* FLAGS must stay at this position in the structure to maintain
       binary compatibility.  */
    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;
# endif
# 211 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[__SIZEOF_PTHREAD_RWLOCK_T];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[__SIZEOF_PTHREAD_RWLOCKATTR_T];
  long int __align;
} pthread_rwlockattr_t;
#endif
# 221 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4


#ifdef __USE_XOPEN2K
/* POSIX spinlock data type.  */
typedef volatile int pthread_spinlock_t;


/* POSIX barriers data type.  The structure of the type is
   deliberately not exposed.  */
typedef union
{
  char __size[__SIZEOF_PTHREAD_BARRIER_T];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[__SIZEOF_PTHREAD_BARRIERATTR_T];
  int __align;
} pthread_barrierattr_t;
#endif
# 242 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4


#ifndef __x86_64__
/* Extra attributes for the cleanup functions.  */
# define __cleanup_fct_attribute __attribute__ ((__regparm__ (1)))
#endif
# 248 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4

#endif	/* bits/pthreadtypes.h */
# 250 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
#endif
# 272 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

__END_DECLS

#endif /* sys/types.h */
# 276 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 315 "/usr/include/stdlib.h" 2 3 4

/* These are the functions that actually do things.  The `random', `srandom',
   `initstate' and `setstate' functions are those from BSD Unices.
   The `rand' and `srand' functions are required by the ANSI standard.
   We provide both interfaces to the same random number generator.  */
/* Return a random long integer between 0 and RAND_MAX inclusive.  */
extern long int random (void) __THROW;

/* Seed the random number generator with the given number.  */
extern void srandom (unsigned int __seed) __THROW;

/* Initialize the random number generator to use state buffer STATEBUF,
   of length STATELEN, and seed it with SEED.  Optimal lengths are 8, 16,
   32, 64, 128 and 256, the bigger the better; values less than 8 will
   cause an error and values greater than 256 will be rounded down.  */
extern char *initstate (unsigned int __seed, char *__statebuf,
			size_t __statelen) __THROW __nonnull ((2));

/* Switch the random number generator to state buffer STATEBUF,
   which should have been previously initialized by `initstate'.  */
extern char *setstate (char *__statebuf) __THROW __nonnull ((1));


# ifdef __USE_MISC
/* Reentrant versions of the `random' family of functions.
   These functions all use the following data structure to contain
   state, rather than global state variables.  */

struct random_data
  {
    int32_t *fptr;		/* Front pointer.  */
    int32_t *rptr;		/* Rear pointer.  */
    int32_t *state;		/* Array of state values.  */
    int rand_type;		/* Type of random number generator.  */
    int rand_deg;		/* Degree of random number generator.  */
    int rand_sep;		/* Distance between front and rear.  */
    int32_t *end_ptr;		/* Pointer behind state table.  */
  };

extern int random_r (struct random_data *__restrict __buf,
		     int32_t *__restrict __result) __THROW __nonnull ((1, 2));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __THROW __nonnull ((2));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
			size_t __statelen,
			struct random_data *__restrict __buf)
     __THROW __nonnull ((2, 4));

extern int setstate_r (char *__restrict __statebuf,
		       struct random_data *__restrict __buf)
     __THROW __nonnull ((1, 2));
# endif	/* Use misc.  */
# 369 "/usr/include/stdlib.h" 3 4
#endif	/* Use SVID || extended X/Open || BSD. */
# 370 "/usr/include/stdlib.h" 3 4


__BEGIN_NAMESPACE_STD
/* Return a random integer between 0 and RAND_MAX inclusive.  */
extern int rand (void) __THROW;
/* Seed the random number generator with the given number.  */
extern void srand (unsigned int __seed) __THROW;
__END_NAMESPACE_STD

#ifdef __USE_POSIX
/* Reentrant interface according to POSIX.1.  */
extern int rand_r (unsigned int *__seed) __THROW;
#endif
# 383 "/usr/include/stdlib.h" 3 4


#if defined __USE_SVID || defined __USE_XOPEN
/* System V style 48-bit random number generator functions.  */

/* Return non-negative, double-precision floating-point value in [0.0,1.0).  */
extern double drand48 (void) __THROW;
extern double erand48 (unsigned short int __xsubi[3]) __THROW __nonnull ((1));

/* Return non-negative, long integer in [0,2^31).  */
extern long int lrand48 (void) __THROW;
extern long int nrand48 (unsigned short int __xsubi[3])
     __THROW __nonnull ((1));

/* Return signed, long integers in [-2^31,2^31).  */
extern long int mrand48 (void) __THROW;
extern long int jrand48 (unsigned short int __xsubi[3])
     __THROW __nonnull ((1));

/* Seed random number generator.  */
extern void srand48 (long int __seedval) __THROW;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __THROW __nonnull ((1));
extern void lcong48 (unsigned short int __param[7]) __THROW __nonnull ((1));

# ifdef __USE_MISC
/* Data structure for communication with thread safe versions.  This
   type is to be regarded as opaque.  It's only exported because users
   have to allocate objects of this type.  */
struct drand48_data
  {
    unsigned short int __x[3];	/* Current state.  */
    unsigned short int __old_x[3]; /* Old state.  */
    unsigned short int __c;	/* Additive const. in congruential formula.  */
    unsigned short int __init;	/* Flag for initializing.  */
    __extension__ unsigned long long int __a;	/* Factor in congruential
						   formula.  */
  };

/* Return non-negative, double-precision floating-point value in [0.0,1.0).  */
extern int drand48_r (struct drand48_data *__restrict __buffer,
		      double *__restrict __result) __THROW __nonnull ((1, 2));
extern int erand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      double *__restrict __result) __THROW __nonnull ((1, 2));

/* Return non-negative, long integer in [0,2^31).  */
extern int lrand48_r (struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     __THROW __nonnull ((1, 2));
extern int nrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     __THROW __nonnull ((1, 2));

/* Return signed, long integers in [-2^31,2^31).  */
extern int mrand48_r (struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     __THROW __nonnull ((1, 2));
extern int jrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     __THROW __nonnull ((1, 2));

/* Seed random number generator.  */
extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __THROW __nonnull ((2));

extern int seed48_r (unsigned short int __seed16v[3],
		     struct drand48_data *__buffer) __THROW __nonnull ((1, 2));

extern int lcong48_r (unsigned short int __param[7],
		      struct drand48_data *__buffer)
     __THROW __nonnull ((1, 2));
# endif	/* Use misc.  */
# 458 "/usr/include/stdlib.h" 3 4
#endif	/* Use SVID or X/Open.  */
# 459 "/usr/include/stdlib.h" 3 4

#endif /* don't just need malloc and calloc */
# 461 "/usr/include/stdlib.h" 3 4

#ifndef __malloc_and_calloc_defined
# define __malloc_and_calloc_defined
__BEGIN_NAMESPACE_STD
/* Allocate SIZE bytes of memory.  */
extern void *malloc (size_t __size) __THROW __attribute_malloc__ __wur;
/* Allocate NMEMB elements of SIZE bytes each, all initialized to 0.  */
extern void *calloc (size_t __nmemb, size_t __size)
     __THROW __attribute_malloc__ __wur;
__END_NAMESPACE_STD
#endif
# 472 "/usr/include/stdlib.h" 3 4

#ifndef __need_malloc_and_calloc
__BEGIN_NAMESPACE_STD
/* Re-allocate the previously allocated block
   in PTR, making the new block SIZE bytes long.  */
/* __attribute_malloc__ is not used, because if realloc returns
   the same pointer that was passed to it, aliasing needs to be allowed
   between objects pointed by the old and new pointers.  */
extern void *realloc (void *__ptr, size_t __size)
     __THROW __attribute_warn_unused_result__;
/* Free a block allocated by `malloc', `realloc' or `calloc'.  */
extern void free (void *__ptr) __THROW;
__END_NAMESPACE_STD

#ifdef	__USE_MISC
/* Free a block.  An alias for `free'.	(Sun Unices).  */
extern void cfree (void *__ptr) __THROW;
#endif /* Use misc.  */
# 490 "/usr/include/stdlib.h" 3 4

#if defined __USE_GNU || defined __USE_BSD || defined __USE_MISC
#if 0 /* expanded by -frewrite-includes */
# include <alloca.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/alloca.h" 1 3 4
/* Copyright (C) 1992-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef	_ALLOCA_H
#define	_ALLOCA_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 22 "/usr/include/alloca.h" 3 4

#define	__need_size_t
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/bin/../lib/clang/3.4/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __STDDEF_H
#define __STDDEF_H

#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 34 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 36 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 42 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 44 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 53 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 55 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 64 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#endif
# 65 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 67 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#endif
# 68 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 74 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 76 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#else
# 77 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 79 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 85 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#endif
# 86 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

#define offsetof(t, d) __builtin_offsetof(t, d)

#endif /* __STDDEF_H */
# 90 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 99 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 101 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 103 "/usr/bin/../lib/clang/3.4/include/stddef.h" 3 4
# 25 "/usr/include/alloca.h" 2 3 4

__BEGIN_DECLS

/* Remove any previous definitions.  */
#undef	alloca

/* Allocate a block that will be freed when the calling function exits.  */
extern void *alloca (size_t __size) __THROW;

#ifdef	__GNUC__
# define alloca(size)	__builtin_alloca (size)
#endif /* GCC.  */
# 37 "/usr/include/alloca.h" 3 4

__END_DECLS

#endif /* alloca.h */
# 41 "/usr/include/alloca.h" 3 4
# 493 "/usr/include/stdlib.h" 2 3 4
#endif /* Use GNU, BSD, or misc.  */
# 494 "/usr/include/stdlib.h" 3 4

#if (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K) \
    || defined __USE_BSD
/* Allocate SIZE bytes on a page boundary.  The storage cannot be freed.  */
extern void *valloc (size_t __size) __THROW __attribute_malloc__ __wur;
#endif
# 500 "/usr/include/stdlib.h" 3 4

#ifdef __USE_XOPEN2K
/* Allocate memory of SIZE bytes with an alignment of ALIGNMENT.  */
extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __THROW __nonnull ((1)) __wur;
#endif
# 506 "/usr/include/stdlib.h" 3 4

#ifdef __USE_ISOC11
/* ISO C variant of aligned allocation.  */
extern void *aligned_alloc (size_t __alignment, size_t __size)
     __THROW __attribute_malloc__ __attribute_alloc_size__ ((2)) __wur;
#endif
# 512 "/usr/include/stdlib.h" 3 4

__BEGIN_NAMESPACE_STD
/* Abort execution and generate a core-dump.  */
extern void abort (void) __THROW __attribute__ ((__noreturn__));


/* Register a function to be called when `exit' is called.  */
extern int atexit (void (*__func) (void)) __THROW __nonnull ((1));

#if defined __USE_ISOC11 || defined __USE_ISOCXX11
/* Register a function to be called when `quick_exit' is called.  */
# ifdef __cplusplus
extern "C++" int at_quick_exit (void (*__func) (void))
     __THROW __asm ("at_quick_exit") __nonnull ((1));
# else
# 527 "/usr/include/stdlib.h" 3 4
extern int at_quick_exit (void (*__func) (void)) __THROW __nonnull ((1));
# endif
# 529 "/usr/include/stdlib.h" 3 4
#endif
# 530 "/usr/include/stdlib.h" 3 4
__END_NAMESPACE_STD

#ifdef	__USE_MISC
/* Register a function to be called with the status
   given to `exit' and the given argument.  */
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __THROW __nonnull ((1));
#endif
# 538 "/usr/include/stdlib.h" 3 4

__BEGIN_NAMESPACE_STD
/* Call all functions registered with `atexit' and `on_exit',
   in the reverse of the order in which they were registered,
   perform stdio cleanup, and terminate program execution with STATUS.  */
extern void exit (int __status) __THROW __attribute__ ((__noreturn__));

#if defined __USE_ISOC11 || defined __USE_ISOCXX11
/* Call all functions registered with `at_quick_exit' in the reverse
   of the order in which they were registered and terminate program
   execution with STATUS.  */
extern void quick_exit (int __status) __THROW __attribute__ ((__noreturn__));
#endif
# 551 "/usr/include/stdlib.h" 3 4
__END_NAMESPACE_STD

#ifdef __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Terminate the program with STATUS without calling any of the
   functions registered with `atexit' or `on_exit'.  */
extern void _Exit (int __status) __THROW __attribute__ ((__noreturn__));
__END_NAMESPACE_C99
#endif
# 560 "/usr/include/stdlib.h" 3 4


__BEGIN_NAMESPACE_STD
/* Return the value of envariable NAME, or NULL if it doesn't exist.  */
extern char *getenv (const char *__name) __THROW __nonnull ((1)) __wur;
__END_NAMESPACE_STD

#ifdef __USE_GNU
/* This function is similar to the above but returns NULL if the
   programs is running with SUID or SGID enabled.  */
extern char *secure_getenv (const char *__name)
     __THROW __nonnull ((1)) __wur;
#endif
# 573 "/usr/include/stdlib.h" 3 4

#if defined __USE_SVID || defined __USE_XOPEN
/* The SVID says this is in <stdio.h>, but this seems a better place.	*/
/* Put STRING, which is of the form "NAME=VALUE", in the environment.
   If there is no `=', remove NAME from the environment.  */
extern int putenv (char *__string) __THROW __nonnull ((1));
#endif
# 580 "/usr/include/stdlib.h" 3 4

#if defined __USE_BSD || defined __USE_XOPEN2K
/* Set NAME to VALUE in the environment.
   If REPLACE is nonzero, overwrite an existing value.  */
extern int setenv (const char *__name, const char *__value, int __replace)
     __THROW __nonnull ((2));

/* Remove the variable NAME from the environment.  */
extern int unsetenv (const char *__name) __THROW __nonnull ((1));
#endif
# 590 "/usr/include/stdlib.h" 3 4

#ifdef	__USE_MISC
/* The `clearenv' was planned to be added to POSIX.1 but probably
   never made it.  Nevertheless the POSIX.9 standard (POSIX bindings
   for Fortran 77) requires this function.  */
extern int clearenv (void) __THROW;
#endif
# 597 "/usr/include/stdlib.h" 3 4


#if defined __USE_MISC \
    || (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K8)
/* Generate a unique temporary file name from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the file name unique.
   Always returns TEMPLATE, it's either a temporary file name or a null
   string if it cannot get a unique file name.  */
extern char *mktemp (char *__template) __THROW __nonnull ((1));
#endif
# 608 "/usr/include/stdlib.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED \
    || defined __USE_XOPEN2K8
/* Generate a unique temporary file name from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the filename unique.
   Returns a file descriptor open on the file for reading and writing,
   or -1 if it cannot create a uniquely-named file.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
# ifndef __USE_FILE_OFFSET64
extern int mkstemp (char *__template) __nonnull ((1)) __wur;
# else
# 622 "/usr/include/stdlib.h" 3 4
#  ifdef __REDIRECT
extern int __REDIRECT (mkstemp, (char *__template), mkstemp64)
     __nonnull ((1)) __wur;
#  else
# 626 "/usr/include/stdlib.h" 3 4
#   define mkstemp mkstemp64
#  endif
# 628 "/usr/include/stdlib.h" 3 4
# endif
# 629 "/usr/include/stdlib.h" 3 4
# ifdef __USE_LARGEFILE64
extern int mkstemp64 (char *__template) __nonnull ((1)) __wur;
# endif
# 632 "/usr/include/stdlib.h" 3 4
#endif
# 633 "/usr/include/stdlib.h" 3 4

#ifdef __USE_MISC
/* Similar to mkstemp, but the template can have a suffix after the
   XXXXXX.  The length of the suffix is specified in the second
   parameter.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
# ifndef __USE_FILE_OFFSET64
extern int mkstemps (char *__template, int __suffixlen) __nonnull ((1)) __wur;
# else
# 644 "/usr/include/stdlib.h" 3 4
#  ifdef __REDIRECT
extern int __REDIRECT (mkstemps, (char *__template, int __suffixlen),
		       mkstemps64) __nonnull ((1)) __wur;
#  else
# 648 "/usr/include/stdlib.h" 3 4
#   define mkstemps mkstemps64
#  endif
# 650 "/usr/include/stdlib.h" 3 4
# endif
# 651 "/usr/include/stdlib.h" 3 4
# ifdef __USE_LARGEFILE64
extern int mkstemps64 (char *__template, int __suffixlen)
     __nonnull ((1)) __wur;
# endif
# 655 "/usr/include/stdlib.h" 3 4
#endif
# 656 "/usr/include/stdlib.h" 3 4

#if defined __USE_BSD || defined __USE_XOPEN2K8
/* Create a unique temporary directory from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the directory name unique.
   Returns TEMPLATE, or a null pointer if it cannot get a unique name.
   The directory is created mode 700.  */
extern char *mkdtemp (char *__template) __THROW __nonnull ((1)) __wur;
#endif
# 665 "/usr/include/stdlib.h" 3 4

#ifdef __USE_GNU
/* Generate a unique temporary file name from TEMPLATE similar to
   mkstemp.  But allow the caller to pass additional flags which are
   used in the open call to create the file..

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
# ifndef __USE_FILE_OFFSET64
extern int mkostemp (char *__template, int __flags) __nonnull ((1)) __wur;
# else
# 676 "/usr/include/stdlib.h" 3 4
#  ifdef __REDIRECT
extern int __REDIRECT (mkostemp, (char *__template, int __flags), mkostemp64)
     __nonnull ((1)) __wur;
#  else
# 680 "/usr/include/stdlib.h" 3 4
#   define mkostemp mkostemp64
#  endif
# 682 "/usr/include/stdlib.h" 3 4
# endif
# 683 "/usr/include/stdlib.h" 3 4
# ifdef __USE_LARGEFILE64
extern int mkostemp64 (char *__template, int __flags) __nonnull ((1)) __wur;
# endif
# 686 "/usr/include/stdlib.h" 3 4

/* Similar to mkostemp, but the template can have a suffix after the
   XXXXXX.  The length of the suffix is specified in the second
   parameter.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
# ifndef __USE_FILE_OFFSET64
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __nonnull ((1)) __wur;
# else
# 697 "/usr/include/stdlib.h" 3 4
#  ifdef __REDIRECT
extern int __REDIRECT (mkostemps, (char *__template, int __suffixlen,
				   int __flags), mkostemps64)
     __nonnull ((1)) __wur;
#  else
# 702 "/usr/include/stdlib.h" 3 4
#   define mkostemps mkostemps64
#  endif
# 704 "/usr/include/stdlib.h" 3 4
# endif
# 705 "/usr/include/stdlib.h" 3 4
# ifdef __USE_LARGEFILE64
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __nonnull ((1)) __wur;
# endif
# 709 "/usr/include/stdlib.h" 3 4
#endif
# 710 "/usr/include/stdlib.h" 3 4


__BEGIN_NAMESPACE_STD
/* Execute the given line as a shell command.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int system (const char *__command) __wur;
__END_NAMESPACE_STD


#ifdef	__USE_GNU
/* Return a malloc'd string containing the canonical absolute name of the
   existing named file.  */
extern char *canonicalize_file_name (const char *__name)
     __THROW __nonnull ((1)) __wur;
#endif
# 727 "/usr/include/stdlib.h" 3 4

#if defined __USE_BSD || defined __USE_XOPEN_EXTENDED
/* Return the canonical absolute name of file NAME.  If RESOLVED is
   null, the result is malloc'd; otherwise, if the canonical name is
   PATH_MAX chars or more, returns null with `errno' set to
   ENAMETOOLONG; if the name fits in fewer than PATH_MAX chars,
   returns the name in RESOLVED.  */
extern char *realpath (const char *__restrict __name,
		       char *__restrict __resolved) __THROW __wur;
#endif
# 737 "/usr/include/stdlib.h" 3 4


/* Shorthand for type of comparison functions.  */
#ifndef __COMPAR_FN_T
# define __COMPAR_FN_T
typedef int (*__compar_fn_t) (const void *, const void *);

# ifdef	__USE_GNU
typedef __compar_fn_t comparison_fn_t;
# endif
# 747 "/usr/include/stdlib.h" 3 4
#endif
# 748 "/usr/include/stdlib.h" 3 4
#ifdef __USE_GNU
typedef int (*__compar_d_fn_t) (const void *, const void *, void *);
#endif
# 751 "/usr/include/stdlib.h" 3 4

__BEGIN_NAMESPACE_STD
/* Do a binary search for KEY in BASE, which consists of NMEMB elements
   of SIZE bytes each, using COMPAR to perform the comparisons.  */
extern void *bsearch (const void *__key, const void *__base,
		      size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __nonnull ((1, 2, 5)) __wur;

#ifdef __USE_EXTERN_INLINES
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdlib-bsearch.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 1 3 4
/* Perform binary search - inline version.
   Copyright (C) 1991-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

__extern_inline void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
	 __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
	__u = __idx;
      else if (__comparison > 0)
	__l = __idx + 1;
      else
	return (void *) __p;
    }

  return NULL;
}
# 761 "/usr/include/stdlib.h" 2 3 4
#endif
# 762 "/usr/include/stdlib.h" 3 4

/* Sort NMEMB elements of BASE, of SIZE bytes each,
   using COMPAR to perform the comparisons.  */
extern void qsort (void *__base, size_t __nmemb, size_t __size,
		   __compar_fn_t __compar) __nonnull ((1, 4));
#ifdef __USE_GNU
extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
		     __compar_d_fn_t __compar, void *__arg)
  __nonnull ((1, 4));
#endif
# 772 "/usr/include/stdlib.h" 3 4


/* Return the absolute value of X.  */
extern int abs (int __x) __THROW __attribute__ ((__const__)) __wur;
extern long int labs (long int __x) __THROW __attribute__ ((__const__)) __wur;
__END_NAMESPACE_STD

#ifdef __USE_ISOC99
__extension__ extern long long int llabs (long long int __x)
     __THROW __attribute__ ((__const__)) __wur;
#endif
# 783 "/usr/include/stdlib.h" 3 4


__BEGIN_NAMESPACE_STD
/* Return the `div_t', `ldiv_t' or `lldiv_t' representation
   of the value of NUMER over DENOM. */
/* GCC may have built-ins for these someday.  */
extern div_t div (int __numer, int __denom)
     __THROW __attribute__ ((__const__)) __wur;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __THROW __attribute__ ((__const__)) __wur;
__END_NAMESPACE_STD

#ifdef __USE_ISOC99
__BEGIN_NAMESPACE_C99
__extension__ extern lldiv_t lldiv (long long int __numer,
				    long long int __denom)
     __THROW __attribute__ ((__const__)) __wur;
__END_NAMESPACE_C99
#endif
# 802 "/usr/include/stdlib.h" 3 4


#if (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K8) \
    || defined __USE_SVID
/* Convert floating point numbers to strings.  The returned values are
   valid only until another call to the same function.  */

/* Convert VALUE to a string with NDIGIT digits and return a pointer to
   this.  Set *DECPT with the position of the decimal character and *SIGN
   with the sign of the number.  */
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign) __THROW __nonnull ((3, 4)) __wur;

/* Convert VALUE to a string rounded to NDIGIT decimal digits.  Set *DECPT
   with the position of the decimal character and *SIGN with the sign of
   the number.  */
extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign) __THROW __nonnull ((3, 4)) __wur;

/* If possible convert VALUE to a string with NDIGIT significant digits.
   Otherwise use exponential representation.  The resulting string will
   be written to BUF.  */
extern char *gcvt (double __value, int __ndigit, char *__buf)
     __THROW __nonnull ((3)) __wur;
#endif
# 827 "/usr/include/stdlib.h" 3 4

#ifdef __USE_MISC
/* Long double versions of above functions.  */
extern char *qecvt (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign)
     __THROW __nonnull ((3, 4)) __wur;
extern char *qfcvt (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign)
     __THROW __nonnull ((3, 4)) __wur;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __THROW __nonnull ((3)) __wur;


/* Reentrant version of the functions above which provide their own
   buffers.  */
extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign, char *__restrict __buf,
		   size_t __len) __THROW __nonnull ((3, 4, 5));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign, char *__restrict __buf,
		   size_t __len) __THROW __nonnull ((3, 4, 5));

extern int qecvt_r (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign,
		    char *__restrict __buf, size_t __len)
     __THROW __nonnull ((3, 4, 5));
extern int qfcvt_r (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign,
		    char *__restrict __buf, size_t __len)
     __THROW __nonnull ((3, 4, 5));
#endif	/* misc */
# 858 "/usr/include/stdlib.h" 3 4


__BEGIN_NAMESPACE_STD
/* Return the length of the multibyte character
   in S, which is no longer than N.  */
extern int mblen (const char *__s, size_t __n) __THROW;
/* Return the length of the given multibyte character,
   putting its `wchar_t' representation in *PWC.  */
extern int mbtowc (wchar_t *__restrict __pwc,
		   const char *__restrict __s, size_t __n) __THROW;
/* Put the multibyte character represented
   by WCHAR in S, returning its length.  */
extern int wctomb (char *__s, wchar_t __wchar) __THROW;


/* Convert a multibyte string to a wide char string.  */
extern size_t mbstowcs (wchar_t *__restrict  __pwcs,
			const char *__restrict __s, size_t __n) __THROW;
/* Convert a wide char string to multibyte string.  */
extern size_t wcstombs (char *__restrict __s,
			const wchar_t *__restrict __pwcs, size_t __n)
     __THROW;
__END_NAMESPACE_STD


#ifdef __USE_SVID
/* Determine whether the string value of RESPONSE matches the affirmation
   or negative response expression as specified by the LC_MESSAGES category
   in the program's current locale.  Returns 1 if affirmative, 0 if
   negative, and -1 if not matching.  */
extern int rpmatch (const char *__response) __THROW __nonnull ((1)) __wur;
#endif
# 890 "/usr/include/stdlib.h" 3 4


#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
/* Parse comma separated suboption from *OPTIONP and match against
   strings in TOKENS.  If found return index and set *VALUEP to
   optional value introduced by an equal sign.  If the suboption is
   not part of TOKENS return in *VALUEP beginning of unknown
   suboption.  On exit *OPTIONP is set to the beginning of the next
   token or at the terminating NUL character.  */
extern int getsubopt (char **__restrict __optionp,
		      char *const *__restrict __tokens,
		      char **__restrict __valuep)
     __THROW __nonnull ((1, 2, 3)) __wur;
#endif
# 904 "/usr/include/stdlib.h" 3 4


#ifdef __USE_XOPEN
/* Setup DES tables according KEY.  */
extern void setkey (const char *__key) __THROW __nonnull ((1));
#endif
# 910 "/usr/include/stdlib.h" 3 4


/* X/Open pseudo terminal handling.  */

#ifdef __USE_XOPEN2KXSI
/* Return a master pseudo-terminal handle.  */
extern int posix_openpt (int __oflag) __wur;
#endif
# 918 "/usr/include/stdlib.h" 3 4

#ifdef __USE_XOPEN
/* The next four functions all take a master pseudo-tty fd and
   perform an operation on the associated slave:  */

/* Chown the slave to the calling user.  */
extern int grantpt (int __fd) __THROW;

/* Release an internal lock so the slave can be opened.
   Call after grantpt().  */
extern int unlockpt (int __fd) __THROW;

/* Return the pathname of the pseudo terminal slave assoicated with
   the master FD is open on, or NULL on errors.
   The returned storage is good until the next call to this function.  */
extern char *ptsname (int __fd) __THROW __wur;
#endif
# 935 "/usr/include/stdlib.h" 3 4

#ifdef __USE_GNU
/* Store at most BUFLEN characters of the pathname of the slave pseudo
   terminal associated with the master FD is open on in BUF.
   Return 0 on success, otherwise an error number.  */
extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __THROW __nonnull ((2));

/* Open a master pseudo terminal and return its file descriptor.  */
extern int getpt (void);
#endif
# 946 "/usr/include/stdlib.h" 3 4

#ifdef __USE_BSD
/* Put the 1 minute, 5 minute and 15 minute load averages into the first
   NELEM elements of LOADAVG.  Return the number written (never more than
   three, but may be less than NELEM), or -1 if an error occurred.  */
extern int getloadavg (double __loadavg[], int __nelem)
     __THROW __nonnull ((1));
#endif
# 954 "/usr/include/stdlib.h" 3 4

#if 0 /* expanded by -frewrite-includes */
#include <bits/stdlib-float.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
/* Floating-point inline functions for stdlib.h.
   Copyright (C) 2012-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _STDLIB_H
# error "Never use <bits/stdlib-float.h> directly; include <stdlib.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3 4

#ifdef __USE_EXTERN_INLINES
__BEGIN_NAMESPACE_STD
__extern_inline double
__NTH (atof (const char *__nptr))
{
  return strtod (__nptr, (char **) NULL);
}
__END_NAMESPACE_STD
#endif /* Optimizing and Inlining.  */
# 32 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3 4
# 956 "/usr/include/stdlib.h" 2 3 4

/* Define some macros helping to catch buffer overflows.  */
#if __USE_FORTIFY_LEVEL > 0 && defined __fortify_function
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdlib.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 1 3 4
/* Checking macros for stdlib functions.
   Copyright (C) 2005-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _STDLIB_H
# error "Never include <bits/stdlib.h> directly; use <stdlib.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3 4

extern char *__realpath_chk (const char *__restrict __name,
			     char *__restrict __resolved,
			     size_t __resolvedlen) __THROW __wur;
extern char *__REDIRECT_NTH (__realpath_alias,
			     (const char *__restrict __name,
			      char *__restrict __resolved), realpath) __wur;
extern char *__REDIRECT_NTH (__realpath_chk_warn,
			     (const char *__restrict __name,
			      char *__restrict __resolved,
			      size_t __resolvedlen), __realpath_chk) __wur
     __warnattr ("second argument of realpath must be either NULL or at "
		 "least PATH_MAX bytes long buffer");

__fortify_function __wur char *
__NTH (realpath (const char *__restrict __name, char *__restrict __resolved))
{
  if (__bos (__resolved) != (size_t) -1)
    {
#if defined _LIBC_LIMITS_H_ && defined PATH_MAX
      if (__bos (__resolved) < PATH_MAX)
	return __realpath_chk_warn (__name, __resolved, __bos (__resolved));
#endif
# 45 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3 4
      return __realpath_chk (__name, __resolved, __bos (__resolved));
    }

  return __realpath_alias (__name, __resolved);
}


extern int __ptsname_r_chk (int __fd, char *__buf, size_t __buflen,
			    size_t __nreal) __THROW __nonnull ((2));
extern int __REDIRECT_NTH (__ptsname_r_alias, (int __fd, char *__buf,
					       size_t __buflen), ptsname_r)
     __nonnull ((2));
extern int __REDIRECT_NTH (__ptsname_r_chk_warn,
			   (int __fd, char *__buf, size_t __buflen,
			    size_t __nreal), __ptsname_r_chk)
     __nonnull ((2)) __warnattr ("ptsname_r called with buflen bigger than "
				 "size of buf");

__fortify_function int
__NTH (ptsname_r (int __fd, char *__buf, size_t __buflen))
{
  if (__bos (__buf) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
	return __ptsname_r_chk (__fd, __buf, __buflen, __bos (__buf));
      if (__buflen > __bos (__buf))
	return __ptsname_r_chk_warn (__fd, __buf, __buflen, __bos (__buf));
    }
  return __ptsname_r_alias (__fd, __buf, __buflen);
}


extern int __wctomb_chk (char *__s, wchar_t __wchar, size_t __buflen)
  __THROW __wur;
extern int __REDIRECT_NTH (__wctomb_alias, (char *__s, wchar_t __wchar),
			   wctomb) __wur;

__fortify_function __wur int
__NTH (wctomb (char *__s, wchar_t __wchar))
{
  /* We would have to include <limits.h> to get a definition of MB_LEN_MAX.
     But this would only disturb the namespace.  So we define our own
     version here.  */
#define __STDLIB_MB_LEN_MAX	16
#if defined MB_LEN_MAX && MB_LEN_MAX != __STDLIB_MB_LEN_MAX
# error "Assumed value of MB_LEN_MAX wrong"
#endif
# 92 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3 4
  if (__bos (__s) != (size_t) -1 && __STDLIB_MB_LEN_MAX > __bos (__s))
    return __wctomb_chk (__s, __wchar, __bos (__s));
  return __wctomb_alias (__s, __wchar);
}


extern size_t __mbstowcs_chk (wchar_t *__restrict __dst,
			      const char *__restrict __src,
			      size_t __len, size_t __dstlen) __THROW;
extern size_t __REDIRECT_NTH (__mbstowcs_alias,
			      (wchar_t *__restrict __dst,
			       const char *__restrict __src,
			       size_t __len), mbstowcs);
extern size_t __REDIRECT_NTH (__mbstowcs_chk_warn,
			      (wchar_t *__restrict __dst,
			       const char *__restrict __src,
			       size_t __len, size_t __dstlen), __mbstowcs_chk)
     __warnattr ("mbstowcs called with dst buffer smaller than len "
		 "* sizeof (wchar_t)");

__fortify_function size_t
__NTH (mbstowcs (wchar_t *__restrict __dst, const char *__restrict __src,
		 size_t __len))
{
  if (__bos (__dst) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
	return __mbstowcs_chk (__dst, __src, __len,
			       __bos (__dst) / sizeof (wchar_t));

      if (__len > __bos (__dst) / sizeof (wchar_t))
	return __mbstowcs_chk_warn (__dst, __src, __len,
				     __bos (__dst) / sizeof (wchar_t));
    }
  return __mbstowcs_alias (__dst, __src, __len);
}


extern size_t __wcstombs_chk (char *__restrict __dst,
			      const wchar_t *__restrict __src,
			      size_t __len, size_t __dstlen) __THROW;
extern size_t __REDIRECT_NTH (__wcstombs_alias,
			      (char *__restrict __dst,
			       const wchar_t *__restrict __src,
			       size_t __len), wcstombs);
extern size_t __REDIRECT_NTH (__wcstombs_chk_warn,
			      (char *__restrict __dst,
			       const wchar_t *__restrict __src,
			       size_t __len, size_t __dstlen), __wcstombs_chk)
     __warnattr ("wcstombs called with dst buffer smaller than len");

__fortify_function size_t
__NTH (wcstombs (char *__restrict __dst, const wchar_t *__restrict __src,
		 size_t __len))
{
  if (__bos (__dst) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
	return __wcstombs_chk (__dst, __src, __len, __bos (__dst));
      if (__len > __bos (__dst))
	return __wcstombs_chk_warn (__dst, __src, __len, __bos (__dst));
    }
  return __wcstombs_alias (__dst, __src, __len);
}
# 960 "/usr/include/stdlib.h" 2 3 4
#endif
# 961 "/usr/include/stdlib.h" 3 4
#ifdef __LDBL_COMPAT
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdlib-ldbl.h>
#endif /* expanded by -frewrite-includes */
# 963 "/usr/include/stdlib.h" 3 4
#endif
# 964 "/usr/include/stdlib.h" 3 4

#endif /* don't just need malloc and calloc */
# 966 "/usr/include/stdlib.h" 3 4
#undef __need_malloc_and_calloc

__END_DECLS

#endif /* stdlib.h  */
# 971 "/usr/include/stdlib.h" 3 4
# 75 "expy.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <math.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/math.h" 1 3 4
/* Declarations for math functions.
   Copyright (C) 1991-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.12 Mathematics	<math.h>
 */

#ifndef	_MATH_H
#define	_MATH_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 27 "/usr/include/math.h" 3 4

__BEGIN_DECLS

/* Get machine-dependent HUGE_VAL value (returned on overflow).
   On all IEEE754 machines, this is +Infinity.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/huge_val.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
/* `HUGE_VAL' constant for IEEE 754 machines (where it is infinity).
   Used by <stdlib.h> and <math.h> functions for overflow.
   Copyright (C) 1992-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _MATH_H
# error "Never use <bits/huge_val.h> directly; include <math.h> instead."
#endif
# 23 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 3 4

/* IEEE positive infinity (-HUGE_VAL is negative infinity).  */

#if __GNUC_PREREQ(3,3)
# define HUGE_VAL	(__builtin_huge_val())
#elif __GNUC_PREREQ(2,96)
# 29 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 3 4
# define HUGE_VAL	(__extension__ 0x1.0p2047)
#elif defined __GNUC__
# 31 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 3 4

# define HUGE_VAL \
  (__extension__							      \
   ((union { unsigned __l __attribute__((__mode__(__DI__))); double __d; })   \
    { __l: 0x7ff0000000000000ULL }).__d)

#else /* not GCC */
# 38 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 3 4

#if 0 /* expanded by -frewrite-includes */
# include <endian.h>
#endif /* expanded by -frewrite-includes */
# 40 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 3 4

typedef union { unsigned char __c[8]; double __d; } __huge_val_t;

# if __BYTE_ORDER == __BIG_ENDIAN
#  define __HUGE_VAL_bytes	{ 0x7f, 0xf0, 0, 0, 0, 0, 0, 0 }
# endif
# 46 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 3 4
# if __BYTE_ORDER == __LITTLE_ENDIAN
#  define __HUGE_VAL_bytes	{ 0, 0, 0, 0, 0, 0, 0xf0, 0x7f }
# endif
# 49 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 3 4

static __huge_val_t __huge_val = { __HUGE_VAL_bytes };
# define HUGE_VAL	(__huge_val.__d)

#endif	/* GCC.  */
# 54 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 3 4
# 33 "/usr/include/math.h" 2 3 4
#ifdef __USE_ISOC99
#if 0 /* expanded by -frewrite-includes */
# include <bits/huge_valf.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
/* `HUGE_VALF' constant for IEEE 754 machines (where it is infinity).
   Used by <stdlib.h> and <math.h> functions for overflow.
   Copyright (C) 1992-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _MATH_H
# error "Never use <bits/huge_valf.h> directly; include <math.h> instead."
#endif
# 23 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 3 4

/* IEEE positive infinity (-HUGE_VAL is negative infinity).  */

#if __GNUC_PREREQ(3,3)
# define HUGE_VALF	(__builtin_huge_valf())
#elif __GNUC_PREREQ(2,96)
# 29 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 3 4
# define HUGE_VALF	(__extension__ 0x1.0p255f)
#elif defined __GNUC__
# 31 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 3 4

#   define HUGE_VALF \
  (__extension__							      \
   ((union { unsigned __l __attribute__((__mode__(__SI__))); float __d; })    \
    { __l: 0x7f800000UL }).__d)

#else /* not GCC */
# 38 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 3 4

typedef union { unsigned char __c[4]; float __f; } __huge_valf_t;

# if __BYTE_ORDER == __BIG_ENDIAN
#  define __HUGE_VALF_bytes	{ 0x7f, 0x80, 0, 0 }
# endif
# 44 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 3 4
# if __BYTE_ORDER == __LITTLE_ENDIAN
#  define __HUGE_VALF_bytes	{ 0, 0, 0x80, 0x7f }
# endif
# 47 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 3 4

static __huge_valf_t __huge_valf = { __HUGE_VALF_bytes };
# define HUGE_VALF	(__huge_valf.__f)

#endif	/* GCC.  */
# 52 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 3 4
# 35 "/usr/include/math.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
# include <bits/huge_vall.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
/* `HUGE_VALL' constant for ix86 (where it is infinity).
   Used by <stdlib.h> and <math.h> functions for overflow.
   Copyright (C) 1992-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _MATH_H
# error "Never use <bits/huge_vall.h> directly; include <math.h> instead."
#endif
# 23 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 3 4

#if __GNUC_PREREQ(3,3)
# define HUGE_VALL	(__builtin_huge_vall())
#elif __GNUC_PREREQ(2,96)
# 27 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 3 4
# define HUGE_VALL	(__extension__ 0x1.0p32767L)
#else
# 29 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 3 4

# define __HUGE_VALL_bytes	{ 0, 0, 0, 0, 0, 0, 0, 0x80, 0xff, 0x7f, 0, 0 }

# define __huge_vall_t	union { unsigned char __c[12]; long double __ld; }
# ifdef __GNUC__
#  define HUGE_VALL	(__extension__ \
			 ((__huge_vall_t) { __c: __HUGE_VALL_bytes }).__ld)
# else	/* Not GCC.  */
# 37 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 3 4
static __huge_vall_t __huge_vall = { __HUGE_VALL_bytes };
#  define HUGE_VALL	(__huge_vall.__ld)
#  endif /* GCC.  */
# 40 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 3 4

#endif /* GCC 2.95 */
# 42 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 3 4
# 36 "/usr/include/math.h" 2 3 4

/* Get machine-dependent INFINITY value.  */
#if 0 /* expanded by -frewrite-includes */
# include <bits/inf.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
/* `INFINITY' constant for IEEE 754 machines.
   Copyright (C) 2004-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _MATH_H
# error "Never use <bits/inf.h> directly; include <math.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/inf.h" 3 4

/* IEEE positive infinity.  */

#if __GNUC_PREREQ(3,3)
# define INFINITY	(__builtin_inff())
#else
# 28 "/usr/include/x86_64-linux-gnu/bits/inf.h" 3 4
# define INFINITY	HUGE_VALF
#endif
# 30 "/usr/include/x86_64-linux-gnu/bits/inf.h" 3 4
# 39 "/usr/include/math.h" 2 3 4

/* Get machine-dependent NAN value (returned for some domain errors).  */
#if 0 /* expanded by -frewrite-includes */
# include <bits/nan.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
/* `NAN' constant for IEEE 754 machines.
   Copyright (C) 1992-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _MATH_H
# error "Never use <bits/nan.h> directly; include <math.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/nan.h" 3 4


/* IEEE Not A Number.  */

#if __GNUC_PREREQ(3,3)

# define NAN	(__builtin_nanf (""))

#elif defined __GNUC__
# 31 "/usr/include/x86_64-linux-gnu/bits/nan.h" 3 4

# define NAN \
  (__extension__							      \
   ((union { unsigned __l __attribute__ ((__mode__ (__SI__))); float __d; })  \
    { __l: 0x7fc00000UL }).__d)

#else
# 38 "/usr/include/x86_64-linux-gnu/bits/nan.h" 3 4

#if 0 /* expanded by -frewrite-includes */
# include <endian.h>
#endif /* expanded by -frewrite-includes */
# 40 "/usr/include/x86_64-linux-gnu/bits/nan.h" 3 4

# if __BYTE_ORDER == __BIG_ENDIAN
#  define __qnan_bytes		{ 0x7f, 0xc0, 0, 0 }
# endif
# 44 "/usr/include/x86_64-linux-gnu/bits/nan.h" 3 4
# if __BYTE_ORDER == __LITTLE_ENDIAN
#  define __qnan_bytes		{ 0, 0, 0xc0, 0x7f }
# endif
# 47 "/usr/include/x86_64-linux-gnu/bits/nan.h" 3 4

static union { unsigned char __c[4]; float __d; } __qnan_union
  __attribute__ ((__unused__)) = { __qnan_bytes };
# define NAN	(__qnan_union.__d)

#endif	/* GCC.  */
# 53 "/usr/include/x86_64-linux-gnu/bits/nan.h" 3 4
# 42 "/usr/include/math.h" 2 3 4
#endif /* __USE_ISOC99 */
# 43 "/usr/include/math.h" 3 4

/* Get general and ISO C99 specific information.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/mathdef.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
/* Copyright (C) 2001-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#if !defined _MATH_H && !defined _COMPLEX_H
# error "Never use <bits/mathdef.h> directly; include <math.h> instead"
#endif
# 21 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4

#if defined __USE_ISOC99 && defined _MATH_H && !defined _MATH_H_MATHDEF
# define _MATH_H_MATHDEF	1

# if defined __x86_64__ || (defined __FLT_EVAL_METHOD__ && __FLT_EVAL_METHOD__ == 0)
/* The x86-64 architecture computes values with the precission of the
   used type.  Similarly for -m32 -mfpmath=sse.  */
typedef float float_t;		/* `float' expressions are evaluated as `float'.  */
typedef double double_t;	/* `double' expressions are evaluated
				   as `double'.  */
# else
# 32 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
/* The ix87 FPUs evaluate all values in the 80 bit floating-point format
   which is also available for the user as `long double'.  Therefore we
   define:  */
typedef long double float_t;	/* `float' expressions are evaluated as
				   `long double'.  */
typedef long double double_t;	/* `double' expressions are evaluated as
				   `long double'.  */
# endif
# 40 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4

/* The values returned by `ilogb' for 0 and NaN respectively.  */
# define FP_ILOGB0	(-2147483647 - 1)
# define FP_ILOGBNAN	(-2147483647 - 1)

/* The GCC 4.6 compiler will define __FP_FAST_FMA{,F,L} if the fma{,f,l}
   builtins are supported.  */
# if __FP_FAST_FMA
#  define FP_FAST_FMA 1
# endif
# 50 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4

# if __FP_FAST_FMAF
#  define FP_FAST_FMAF 1
# endif
# 54 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4

# if __FP_FAST_FMAL
#  define FP_FAST_FMAL 1
# endif
# 58 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4

#endif	/* ISO C99 */
# 60 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
# 46 "/usr/include/math.h" 2 3 4

/* The file <bits/mathcalls.h> contains the prototypes for all the
   actual math functions.  These macros are used for those prototypes,
   so we can easily declare each function as both `name' and `__name',
   and can declare the float versions `namef' and `__namef'.  */

#define __MATHCALL(function,suffix, args)	\
  __MATHDECL (_Mdouble_,function,suffix, args)
#define __MATHDECL(type, function,suffix, args) \
  __MATHDECL_1(type, function,suffix, args); \
  __MATHDECL_1(type, __CONCAT(__,function),suffix, args)
#define __MATHCALLX(function,suffix, args, attrib)	\
  __MATHDECLX (_Mdouble_,function,suffix, args, attrib)
#define __MATHDECLX(type, function,suffix, args, attrib) \
  __MATHDECL_1(type, function,suffix, args) __attribute__ (attrib); \
  __MATHDECL_1(type, __CONCAT(__,function),suffix, args) __attribute__ (attrib)
#define __MATHDECL_1(type, function,suffix, args) \
  extern type __MATH_PRECNAME(function,suffix) args __THROW

#define _Mdouble_		double
#define __MATH_PRECNAME(name,r)	__CONCAT(name,r)
#define _Mdouble_BEGIN_NAMESPACE __BEGIN_NAMESPACE_STD
#define _Mdouble_END_NAMESPACE   __END_NAMESPACE_STD
#if 0 /* expanded by -frewrite-includes */
#include <bits/mathcalls.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME,[_r], (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME,[_r], (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.

   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */

#ifndef _MATH_H
# error "Never include <bits/mathcalls.h> directly; include <math.h> instead."
#endif
# 48 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Trigonometric functions.  */

_Mdouble_BEGIN_NAMESPACE
/* Arc cosine of X.  */
__MATHCALL (acos,, (_Mdouble_ __x));
/* Arc sine of X.  */
__MATHCALL (asin,, (_Mdouble_ __x));
/* Arc tangent of X.  */
__MATHCALL (atan,, (_Mdouble_ __x));
/* Arc tangent of Y/X.  */
__MATHCALL (atan2,, (_Mdouble_ __y, _Mdouble_ __x));

/* Cosine of X.  */
__MATHCALL (cos,, (_Mdouble_ __x));
/* Sine of X.  */
__MATHCALL (sin,, (_Mdouble_ __x));
/* Tangent of X.  */
__MATHCALL (tan,, (_Mdouble_ __x));

/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
__MATHCALL (cosh,, (_Mdouble_ __x));
/* Hyperbolic sine of X.  */
__MATHCALL (sinh,, (_Mdouble_ __x));
/* Hyperbolic tangent of X.  */
__MATHCALL (tanh,, (_Mdouble_ __x));
_Mdouble_END_NAMESPACE

#ifdef __USE_GNU
/* Cosine and sine of X.  */
__MATHDECL (void,sincos,,
	    (_Mdouble_ __x, _Mdouble_ *__sinx, _Mdouble_ *__cosx));
#endif
# 84 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Hyperbolic arc cosine of X.  */
__MATHCALL (acosh,, (_Mdouble_ __x));
/* Hyperbolic arc sine of X.  */
__MATHCALL (asinh,, (_Mdouble_ __x));
/* Hyperbolic arc tangent of X.  */
__MATHCALL (atanh,, (_Mdouble_ __x));
__END_NAMESPACE_C99
#endif
# 95 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Exponential and logarithmic functions.  */

_Mdouble_BEGIN_NAMESPACE
/* Exponential function of X.  */
__MATHCALL (exp,, (_Mdouble_ __x));

/* Break VALUE into a normalized fraction and an integral power of 2.  */
__MATHCALL (frexp,, (_Mdouble_ __x, int *__exponent));

/* X times (two to the EXP power).  */
__MATHCALL (ldexp,, (_Mdouble_ __x, int __exponent));

/* Natural logarithm of X.  */
__MATHCALL (log,, (_Mdouble_ __x));

/* Base-ten logarithm of X.  */
__MATHCALL (log10,, (_Mdouble_ __x));

/* Break VALUE into integral and fractional parts.  */
__MATHCALL (modf,, (_Mdouble_ __x, _Mdouble_ *__iptr)) __nonnull ((2));
_Mdouble_END_NAMESPACE

#ifdef __USE_GNU
/* A function missing in all standards: compute exponent to base ten.  */
__MATHCALL (exp10,, (_Mdouble_ __x));
/* Another name occasionally used.  */
__MATHCALL (pow10,, (_Mdouble_ __x));
#endif
# 124 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return exp(X) - 1.  */
__MATHCALL (expm1,, (_Mdouble_ __x));

/* Return log(1 + X).  */
__MATHCALL (log1p,, (_Mdouble_ __x));

/* Return the base 2 signed integral exponent of X.  */
__MATHCALL (logb,, (_Mdouble_ __x));
__END_NAMESPACE_C99
#endif
# 137 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Compute base-2 exponential of X.  */
__MATHCALL (exp2,, (_Mdouble_ __x));

/* Compute base-2 logarithm of X.  */
__MATHCALL (log2,, (_Mdouble_ __x));
__END_NAMESPACE_C99
#endif
# 147 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Power functions.  */

_Mdouble_BEGIN_NAMESPACE
/* Return X to the Y power.  */
__MATHCALL (pow,, (_Mdouble_ __x, _Mdouble_ __y));

/* Return the square root of X.  */
__MATHCALL (sqrt,, (_Mdouble_ __x));
_Mdouble_END_NAMESPACE

#if defined __USE_MISC || defined __USE_XOPEN || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return `sqrt(X*X + Y*Y)'.  */
__MATHCALL (hypot,, (_Mdouble_ __x, _Mdouble_ __y));
__END_NAMESPACE_C99
#endif
# 165 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return the cube root of X.  */
__MATHCALL (cbrt,, (_Mdouble_ __x));
__END_NAMESPACE_C99
#endif
# 172 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Nearest integer, absolute value, and remainder functions.  */

_Mdouble_BEGIN_NAMESPACE
/* Smallest integral value not less than X.  */
__MATHCALLX (ceil,, (_Mdouble_ __x), (__const__));

/* Absolute value of X.  */
__MATHCALLX (fabs,, (_Mdouble_ __x), (__const__));

/* Largest integer not greater than X.  */
__MATHCALLX (floor,, (_Mdouble_ __x), (__const__));

/* Floating-point modulo remainder of X/Y.  */
__MATHCALL (fmod,, (_Mdouble_ __x, _Mdouble_ __y));


/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
__MATHDECL_1 (int,__isinf,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
__MATHDECL_1 (int,__finite,, (_Mdouble_ __value)) __attribute__ ((__const__));
_Mdouble_END_NAMESPACE

#ifdef __USE_MISC
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
__MATHDECL_1 (int,isinf,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
__MATHDECL_1 (int,finite,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return the remainder of X/Y.  */
__MATHCALL (drem,, (_Mdouble_ __x, _Mdouble_ __y));


/* Return the fractional part of X after dividing out `ilogb (X)'.  */
__MATHCALL (significand,, (_Mdouble_ __x));
#endif /* Use misc.  */
# 213 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return X with its signed changed to Y's.  */
__MATHCALLX (copysign,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));
__END_NAMESPACE_C99
#endif
# 220 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return representation of qNaN for double type.  */
__MATHCALLX (nan,, (const char *__tagb), (__const__));
__END_NAMESPACE_C99
#endif
# 227 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Return nonzero if VALUE is not a number.  */
__MATHDECL_1 (int,__isnan,, (_Mdouble_ __value)) __attribute__ ((__const__));

#if defined __USE_MISC || defined __USE_XOPEN
/* Return nonzero if VALUE is not a number.  */
__MATHDECL_1 (int,isnan,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Bessel functions.  */
__MATHCALL (j0,, (_Mdouble_));
__MATHCALL (j1,, (_Mdouble_));
__MATHCALL (jn,, (int, _Mdouble_));
__MATHCALL (y0,, (_Mdouble_));
__MATHCALL (y1,, (_Mdouble_));
__MATHCALL (yn,, (int, _Mdouble_));
#endif
# 244 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


#if defined __USE_MISC || defined __USE_XOPEN || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Error and gamma functions.  */
__MATHCALL (erf,, (_Mdouble_));
__MATHCALL (erfc,, (_Mdouble_));
__MATHCALL (lgamma,, (_Mdouble_));
__END_NAMESPACE_C99
#endif
# 254 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* True gamma function.  */
__MATHCALL (tgamma,, (_Mdouble_));
__END_NAMESPACE_C99
#endif
# 261 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN
/* Obsolete alias for `lgamma'.  */
__MATHCALL (gamma,, (_Mdouble_));
#endif
# 266 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_MISC
/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
__MATHCALL (lgamma,_r, (_Mdouble_, int *__signgamp));
#endif
# 273 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
__MATHCALL (rint,, (_Mdouble_ __x));

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
__MATHCALLX (nextafter,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));
# if defined __USE_ISOC99 && !defined __LDBL_COMPAT
__MATHCALLX (nexttoward,, (_Mdouble_ __x, long double __y), (__const__));
# endif
# 286 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Return the remainder of integer divison X / Y with infinite precision.  */
__MATHCALL (remainder,, (_Mdouble_ __x, _Mdouble_ __y));

# if defined __USE_MISC || defined __USE_ISOC99
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalbn,, (_Mdouble_ __x, int __n));
# endif
# 294 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Return the binary exponent of X, which must be nonzero.  */
__MATHDECL (int,ilogb,, (_Mdouble_ __x));
#endif
# 298 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalbln,, (_Mdouble_ __x, long int __n));

/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
__MATHCALL (nearbyint,, (_Mdouble_ __x));

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
__MATHCALLX (round,, (_Mdouble_ __x), (__const__));

/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
__MATHCALLX (trunc,, (_Mdouble_ __x), (__const__));

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
__MATHCALL (remquo,, (_Mdouble_ __x, _Mdouble_ __y, int *__quo));


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
   direction.  */
__MATHDECL (long int,lrint,, (_Mdouble_ __x));
__extension__
__MATHDECL (long long int,llrint,, (_Mdouble_ __x));

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
__MATHDECL (long int,lround,, (_Mdouble_ __x));
__extension__
__MATHDECL (long long int,llround,, (_Mdouble_ __x));


/* Return positive difference between X and Y.  */
__MATHCALL (fdim,, (_Mdouble_ __x, _Mdouble_ __y));

/* Return maximum numeric value from X and Y.  */
__MATHCALLX (fmax,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));

/* Return minimum numeric value from X and Y.  */
__MATHCALLX (fmin,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));


/* Classify given number.  */
__MATHDECL_1 (int, __fpclassify,, (_Mdouble_ __value))
     __attribute__ ((__const__));

/* Test for negative number.  */
__MATHDECL_1 (int, __signbit,, (_Mdouble_ __value))
     __attribute__ ((__const__));


/* Multiply-add function computed as a ternary operation.  */
__MATHCALL (fma,, (_Mdouble_ __x, _Mdouble_ __y, _Mdouble_ __z));
#endif /* Use ISO C99.  */
# 358 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
__END_NAMESPACE_C99
#endif
# 362 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_GNU
/* Test for signaling NaN.  */
__MATHDECL_1 (int, __issignaling,, (_Mdouble_ __value))
     __attribute__ ((__const__));
#endif
# 368 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalb,, (_Mdouble_ __x, _Mdouble_ __n));
#endif
# 373 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 70 "/usr/include/math.h" 2 3 4
#undef	_Mdouble_
#undef _Mdouble_BEGIN_NAMESPACE
#undef _Mdouble_END_NAMESPACE
#undef	__MATH_PRECNAME

#if defined __USE_MISC || defined __USE_ISOC99


/* Include the file of declarations again, this time using `float'
   instead of `double' and appending f to each function name.  */

# ifndef _Mfloat_
#  define _Mfloat_		float
# endif
# 84 "/usr/include/math.h" 3 4
# define _Mdouble_		_Mfloat_
# define __MATH_PRECNAME(name,r) name##f##r
# define _Mdouble_BEGIN_NAMESPACE __BEGIN_NAMESPACE_C99
# define _Mdouble_END_NAMESPACE   __END_NAMESPACE_C99
#if 0 /* expanded by -frewrite-includes */
# include <bits/mathcalls.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME,[_r], (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME,[_r], (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.

   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */

#ifndef _MATH_H
# error "Never include <bits/mathcalls.h> directly; include <math.h> instead."
#endif
# 48 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Trigonometric functions.  */

_Mdouble_BEGIN_NAMESPACE
/* Arc cosine of X.  */
__MATHCALL (acos,, (_Mdouble_ __x));
/* Arc sine of X.  */
__MATHCALL (asin,, (_Mdouble_ __x));
/* Arc tangent of X.  */
__MATHCALL (atan,, (_Mdouble_ __x));
/* Arc tangent of Y/X.  */
__MATHCALL (atan2,, (_Mdouble_ __y, _Mdouble_ __x));

/* Cosine of X.  */
__MATHCALL (cos,, (_Mdouble_ __x));
/* Sine of X.  */
__MATHCALL (sin,, (_Mdouble_ __x));
/* Tangent of X.  */
__MATHCALL (tan,, (_Mdouble_ __x));

/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
__MATHCALL (cosh,, (_Mdouble_ __x));
/* Hyperbolic sine of X.  */
__MATHCALL (sinh,, (_Mdouble_ __x));
/* Hyperbolic tangent of X.  */
__MATHCALL (tanh,, (_Mdouble_ __x));
_Mdouble_END_NAMESPACE

#ifdef __USE_GNU
/* Cosine and sine of X.  */
__MATHDECL (void,sincos,,
	    (_Mdouble_ __x, _Mdouble_ *__sinx, _Mdouble_ *__cosx));
#endif
# 84 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Hyperbolic arc cosine of X.  */
__MATHCALL (acosh,, (_Mdouble_ __x));
/* Hyperbolic arc sine of X.  */
__MATHCALL (asinh,, (_Mdouble_ __x));
/* Hyperbolic arc tangent of X.  */
__MATHCALL (atanh,, (_Mdouble_ __x));
__END_NAMESPACE_C99
#endif
# 95 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Exponential and logarithmic functions.  */

_Mdouble_BEGIN_NAMESPACE
/* Exponential function of X.  */
__MATHCALL (exp,, (_Mdouble_ __x));

/* Break VALUE into a normalized fraction and an integral power of 2.  */
__MATHCALL (frexp,, (_Mdouble_ __x, int *__exponent));

/* X times (two to the EXP power).  */
__MATHCALL (ldexp,, (_Mdouble_ __x, int __exponent));

/* Natural logarithm of X.  */
__MATHCALL (log,, (_Mdouble_ __x));

/* Base-ten logarithm of X.  */
__MATHCALL (log10,, (_Mdouble_ __x));

/* Break VALUE into integral and fractional parts.  */
__MATHCALL (modf,, (_Mdouble_ __x, _Mdouble_ *__iptr)) __nonnull ((2));
_Mdouble_END_NAMESPACE

#ifdef __USE_GNU
/* A function missing in all standards: compute exponent to base ten.  */
__MATHCALL (exp10,, (_Mdouble_ __x));
/* Another name occasionally used.  */
__MATHCALL (pow10,, (_Mdouble_ __x));
#endif
# 124 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return exp(X) - 1.  */
__MATHCALL (expm1,, (_Mdouble_ __x));

/* Return log(1 + X).  */
__MATHCALL (log1p,, (_Mdouble_ __x));

/* Return the base 2 signed integral exponent of X.  */
__MATHCALL (logb,, (_Mdouble_ __x));
__END_NAMESPACE_C99
#endif
# 137 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Compute base-2 exponential of X.  */
__MATHCALL (exp2,, (_Mdouble_ __x));

/* Compute base-2 logarithm of X.  */
__MATHCALL (log2,, (_Mdouble_ __x));
__END_NAMESPACE_C99
#endif
# 147 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Power functions.  */

_Mdouble_BEGIN_NAMESPACE
/* Return X to the Y power.  */
__MATHCALL (pow,, (_Mdouble_ __x, _Mdouble_ __y));

/* Return the square root of X.  */
__MATHCALL (sqrt,, (_Mdouble_ __x));
_Mdouble_END_NAMESPACE

#if defined __USE_MISC || defined __USE_XOPEN || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return `sqrt(X*X + Y*Y)'.  */
__MATHCALL (hypot,, (_Mdouble_ __x, _Mdouble_ __y));
__END_NAMESPACE_C99
#endif
# 165 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return the cube root of X.  */
__MATHCALL (cbrt,, (_Mdouble_ __x));
__END_NAMESPACE_C99
#endif
# 172 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Nearest integer, absolute value, and remainder functions.  */

_Mdouble_BEGIN_NAMESPACE
/* Smallest integral value not less than X.  */
__MATHCALLX (ceil,, (_Mdouble_ __x), (__const__));

/* Absolute value of X.  */
__MATHCALLX (fabs,, (_Mdouble_ __x), (__const__));

/* Largest integer not greater than X.  */
__MATHCALLX (floor,, (_Mdouble_ __x), (__const__));

/* Floating-point modulo remainder of X/Y.  */
__MATHCALL (fmod,, (_Mdouble_ __x, _Mdouble_ __y));


/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
__MATHDECL_1 (int,__isinf,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
__MATHDECL_1 (int,__finite,, (_Mdouble_ __value)) __attribute__ ((__const__));
_Mdouble_END_NAMESPACE

#ifdef __USE_MISC
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
__MATHDECL_1 (int,isinf,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
__MATHDECL_1 (int,finite,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return the remainder of X/Y.  */
__MATHCALL (drem,, (_Mdouble_ __x, _Mdouble_ __y));


/* Return the fractional part of X after dividing out `ilogb (X)'.  */
__MATHCALL (significand,, (_Mdouble_ __x));
#endif /* Use misc.  */
# 213 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return X with its signed changed to Y's.  */
__MATHCALLX (copysign,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));
__END_NAMESPACE_C99
#endif
# 220 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return representation of qNaN for double type.  */
__MATHCALLX (nan,, (const char *__tagb), (__const__));
__END_NAMESPACE_C99
#endif
# 227 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Return nonzero if VALUE is not a number.  */
__MATHDECL_1 (int,__isnan,, (_Mdouble_ __value)) __attribute__ ((__const__));

#if defined __USE_MISC || defined __USE_XOPEN
/* Return nonzero if VALUE is not a number.  */
__MATHDECL_1 (int,isnan,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Bessel functions.  */
__MATHCALL (j0,, (_Mdouble_));
__MATHCALL (j1,, (_Mdouble_));
__MATHCALL (jn,, (int, _Mdouble_));
__MATHCALL (y0,, (_Mdouble_));
__MATHCALL (y1,, (_Mdouble_));
__MATHCALL (yn,, (int, _Mdouble_));
#endif
# 244 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


#if defined __USE_MISC || defined __USE_XOPEN || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Error and gamma functions.  */
__MATHCALL (erf,, (_Mdouble_));
__MATHCALL (erfc,, (_Mdouble_));
__MATHCALL (lgamma,, (_Mdouble_));
__END_NAMESPACE_C99
#endif
# 254 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* True gamma function.  */
__MATHCALL (tgamma,, (_Mdouble_));
__END_NAMESPACE_C99
#endif
# 261 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN
/* Obsolete alias for `lgamma'.  */
__MATHCALL (gamma,, (_Mdouble_));
#endif
# 266 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_MISC
/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
__MATHCALL (lgamma,_r, (_Mdouble_, int *__signgamp));
#endif
# 273 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
__MATHCALL (rint,, (_Mdouble_ __x));

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
__MATHCALLX (nextafter,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));
# if defined __USE_ISOC99 && !defined __LDBL_COMPAT
__MATHCALLX (nexttoward,, (_Mdouble_ __x, long double __y), (__const__));
# endif
# 286 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Return the remainder of integer divison X / Y with infinite precision.  */
__MATHCALL (remainder,, (_Mdouble_ __x, _Mdouble_ __y));

# if defined __USE_MISC || defined __USE_ISOC99
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalbn,, (_Mdouble_ __x, int __n));
# endif
# 294 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Return the binary exponent of X, which must be nonzero.  */
__MATHDECL (int,ilogb,, (_Mdouble_ __x));
#endif
# 298 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalbln,, (_Mdouble_ __x, long int __n));

/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
__MATHCALL (nearbyint,, (_Mdouble_ __x));

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
__MATHCALLX (round,, (_Mdouble_ __x), (__const__));

/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
__MATHCALLX (trunc,, (_Mdouble_ __x), (__const__));

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
__MATHCALL (remquo,, (_Mdouble_ __x, _Mdouble_ __y, int *__quo));


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
   direction.  */
__MATHDECL (long int,lrint,, (_Mdouble_ __x));
__extension__
__MATHDECL (long long int,llrint,, (_Mdouble_ __x));

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
__MATHDECL (long int,lround,, (_Mdouble_ __x));
__extension__
__MATHDECL (long long int,llround,, (_Mdouble_ __x));


/* Return positive difference between X and Y.  */
__MATHCALL (fdim,, (_Mdouble_ __x, _Mdouble_ __y));

/* Return maximum numeric value from X and Y.  */
__MATHCALLX (fmax,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));

/* Return minimum numeric value from X and Y.  */
__MATHCALLX (fmin,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));


/* Classify given number.  */
__MATHDECL_1 (int, __fpclassify,, (_Mdouble_ __value))
     __attribute__ ((__const__));

/* Test for negative number.  */
__MATHDECL_1 (int, __signbit,, (_Mdouble_ __value))
     __attribute__ ((__const__));


/* Multiply-add function computed as a ternary operation.  */
__MATHCALL (fma,, (_Mdouble_ __x, _Mdouble_ __y, _Mdouble_ __z));
#endif /* Use ISO C99.  */
# 358 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
__END_NAMESPACE_C99
#endif
# 362 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_GNU
/* Test for signaling NaN.  */
__MATHDECL_1 (int, __issignaling,, (_Mdouble_ __value))
     __attribute__ ((__const__));
#endif
# 368 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalb,, (_Mdouble_ __x, _Mdouble_ __n));
#endif
# 373 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 89 "/usr/include/math.h" 2 3 4
# undef	_Mdouble_
# undef _Mdouble_BEGIN_NAMESPACE
# undef _Mdouble_END_NAMESPACE
# undef	__MATH_PRECNAME

# if !(defined __NO_LONG_DOUBLE_MATH && defined _LIBC) \
     || defined __LDBL_COMPAT
#  ifdef __LDBL_COMPAT

#   ifdef __USE_ISOC99
extern float __nldbl_nexttowardf (float __x, long double __y)
				  __THROW __attribute__ ((__const__));
#    ifdef __REDIRECT_NTH
extern float __REDIRECT_NTH (nexttowardf, (float __x, long double __y),
			     __nldbl_nexttowardf)
     __attribute__ ((__const__));
extern double __REDIRECT_NTH (nexttoward, (double __x, long double __y),
			      nextafter) __attribute__ ((__const__));
extern long double __REDIRECT_NTH (nexttowardl,
				   (long double __x, long double __y),
				   nextafter) __attribute__ ((__const__));
#    endif
# 111 "/usr/include/math.h" 3 4
#   endif
# 112 "/usr/include/math.h" 3 4

#   undef __MATHDECL_1
#   define __MATHDECL_2(type, function,suffix, args, alias) \
  extern type __REDIRECT_NTH(__MATH_PRECNAME(function,suffix), \
			     args, alias)
#   define __MATHDECL_1(type, function,suffix, args) \
  __MATHDECL_2(type, function,suffix, args, __CONCAT(function,suffix))
#  endif
# 120 "/usr/include/math.h" 3 4

/* Include the file of declarations again, this time using `long double'
   instead of `double' and appending l to each function name.  */

#  ifndef _Mlong_double_
#   define _Mlong_double_	long double
#  endif
# 127 "/usr/include/math.h" 3 4
#  define _Mdouble_		_Mlong_double_
#  define __MATH_PRECNAME(name,r) name##l##r
#  define _Mdouble_BEGIN_NAMESPACE __BEGIN_NAMESPACE_C99
#  define _Mdouble_END_NAMESPACE   __END_NAMESPACE_C99
#  define __MATH_DECLARE_LDOUBLE   1
#if 0 /* expanded by -frewrite-includes */
#  include <bits/mathcalls.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME,[_r], (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME,[_r], (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.

   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */

#ifndef _MATH_H
# error "Never include <bits/mathcalls.h> directly; include <math.h> instead."
#endif
# 48 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Trigonometric functions.  */

_Mdouble_BEGIN_NAMESPACE
/* Arc cosine of X.  */
__MATHCALL (acos,, (_Mdouble_ __x));
/* Arc sine of X.  */
__MATHCALL (asin,, (_Mdouble_ __x));
/* Arc tangent of X.  */
__MATHCALL (atan,, (_Mdouble_ __x));
/* Arc tangent of Y/X.  */
__MATHCALL (atan2,, (_Mdouble_ __y, _Mdouble_ __x));

/* Cosine of X.  */
__MATHCALL (cos,, (_Mdouble_ __x));
/* Sine of X.  */
__MATHCALL (sin,, (_Mdouble_ __x));
/* Tangent of X.  */
__MATHCALL (tan,, (_Mdouble_ __x));

/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
__MATHCALL (cosh,, (_Mdouble_ __x));
/* Hyperbolic sine of X.  */
__MATHCALL (sinh,, (_Mdouble_ __x));
/* Hyperbolic tangent of X.  */
__MATHCALL (tanh,, (_Mdouble_ __x));
_Mdouble_END_NAMESPACE

#ifdef __USE_GNU
/* Cosine and sine of X.  */
__MATHDECL (void,sincos,,
	    (_Mdouble_ __x, _Mdouble_ *__sinx, _Mdouble_ *__cosx));
#endif
# 84 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Hyperbolic arc cosine of X.  */
__MATHCALL (acosh,, (_Mdouble_ __x));
/* Hyperbolic arc sine of X.  */
__MATHCALL (asinh,, (_Mdouble_ __x));
/* Hyperbolic arc tangent of X.  */
__MATHCALL (atanh,, (_Mdouble_ __x));
__END_NAMESPACE_C99
#endif
# 95 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Exponential and logarithmic functions.  */

_Mdouble_BEGIN_NAMESPACE
/* Exponential function of X.  */
__MATHCALL (exp,, (_Mdouble_ __x));

/* Break VALUE into a normalized fraction and an integral power of 2.  */
__MATHCALL (frexp,, (_Mdouble_ __x, int *__exponent));

/* X times (two to the EXP power).  */
__MATHCALL (ldexp,, (_Mdouble_ __x, int __exponent));

/* Natural logarithm of X.  */
__MATHCALL (log,, (_Mdouble_ __x));

/* Base-ten logarithm of X.  */
__MATHCALL (log10,, (_Mdouble_ __x));

/* Break VALUE into integral and fractional parts.  */
__MATHCALL (modf,, (_Mdouble_ __x, _Mdouble_ *__iptr)) __nonnull ((2));
_Mdouble_END_NAMESPACE

#ifdef __USE_GNU
/* A function missing in all standards: compute exponent to base ten.  */
__MATHCALL (exp10,, (_Mdouble_ __x));
/* Another name occasionally used.  */
__MATHCALL (pow10,, (_Mdouble_ __x));
#endif
# 124 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return exp(X) - 1.  */
__MATHCALL (expm1,, (_Mdouble_ __x));

/* Return log(1 + X).  */
__MATHCALL (log1p,, (_Mdouble_ __x));

/* Return the base 2 signed integral exponent of X.  */
__MATHCALL (logb,, (_Mdouble_ __x));
__END_NAMESPACE_C99
#endif
# 137 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Compute base-2 exponential of X.  */
__MATHCALL (exp2,, (_Mdouble_ __x));

/* Compute base-2 logarithm of X.  */
__MATHCALL (log2,, (_Mdouble_ __x));
__END_NAMESPACE_C99
#endif
# 147 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Power functions.  */

_Mdouble_BEGIN_NAMESPACE
/* Return X to the Y power.  */
__MATHCALL (pow,, (_Mdouble_ __x, _Mdouble_ __y));

/* Return the square root of X.  */
__MATHCALL (sqrt,, (_Mdouble_ __x));
_Mdouble_END_NAMESPACE

#if defined __USE_MISC || defined __USE_XOPEN || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return `sqrt(X*X + Y*Y)'.  */
__MATHCALL (hypot,, (_Mdouble_ __x, _Mdouble_ __y));
__END_NAMESPACE_C99
#endif
# 165 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return the cube root of X.  */
__MATHCALL (cbrt,, (_Mdouble_ __x));
__END_NAMESPACE_C99
#endif
# 172 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Nearest integer, absolute value, and remainder functions.  */

_Mdouble_BEGIN_NAMESPACE
/* Smallest integral value not less than X.  */
__MATHCALLX (ceil,, (_Mdouble_ __x), (__const__));

/* Absolute value of X.  */
__MATHCALLX (fabs,, (_Mdouble_ __x), (__const__));

/* Largest integer not greater than X.  */
__MATHCALLX (floor,, (_Mdouble_ __x), (__const__));

/* Floating-point modulo remainder of X/Y.  */
__MATHCALL (fmod,, (_Mdouble_ __x, _Mdouble_ __y));


/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
__MATHDECL_1 (int,__isinf,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
__MATHDECL_1 (int,__finite,, (_Mdouble_ __value)) __attribute__ ((__const__));
_Mdouble_END_NAMESPACE

#ifdef __USE_MISC
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
__MATHDECL_1 (int,isinf,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
__MATHDECL_1 (int,finite,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return the remainder of X/Y.  */
__MATHCALL (drem,, (_Mdouble_ __x, _Mdouble_ __y));


/* Return the fractional part of X after dividing out `ilogb (X)'.  */
__MATHCALL (significand,, (_Mdouble_ __x));
#endif /* Use misc.  */
# 213 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return X with its signed changed to Y's.  */
__MATHCALLX (copysign,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));
__END_NAMESPACE_C99
#endif
# 220 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return representation of qNaN for double type.  */
__MATHCALLX (nan,, (const char *__tagb), (__const__));
__END_NAMESPACE_C99
#endif
# 227 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Return nonzero if VALUE is not a number.  */
__MATHDECL_1 (int,__isnan,, (_Mdouble_ __value)) __attribute__ ((__const__));

#if defined __USE_MISC || defined __USE_XOPEN
/* Return nonzero if VALUE is not a number.  */
__MATHDECL_1 (int,isnan,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Bessel functions.  */
__MATHCALL (j0,, (_Mdouble_));
__MATHCALL (j1,, (_Mdouble_));
__MATHCALL (jn,, (int, _Mdouble_));
__MATHCALL (y0,, (_Mdouble_));
__MATHCALL (y1,, (_Mdouble_));
__MATHCALL (yn,, (int, _Mdouble_));
#endif
# 244 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


#if defined __USE_MISC || defined __USE_XOPEN || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Error and gamma functions.  */
__MATHCALL (erf,, (_Mdouble_));
__MATHCALL (erfc,, (_Mdouble_));
__MATHCALL (lgamma,, (_Mdouble_));
__END_NAMESPACE_C99
#endif
# 254 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* True gamma function.  */
__MATHCALL (tgamma,, (_Mdouble_));
__END_NAMESPACE_C99
#endif
# 261 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN
/* Obsolete alias for `lgamma'.  */
__MATHCALL (gamma,, (_Mdouble_));
#endif
# 266 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_MISC
/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
__MATHCALL (lgamma,_r, (_Mdouble_, int *__signgamp));
#endif
# 273 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
__MATHCALL (rint,, (_Mdouble_ __x));

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
__MATHCALLX (nextafter,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));
# if defined __USE_ISOC99 && !defined __LDBL_COMPAT
__MATHCALLX (nexttoward,, (_Mdouble_ __x, long double __y), (__const__));
# endif
# 286 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Return the remainder of integer divison X / Y with infinite precision.  */
__MATHCALL (remainder,, (_Mdouble_ __x, _Mdouble_ __y));

# if defined __USE_MISC || defined __USE_ISOC99
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalbn,, (_Mdouble_ __x, int __n));
# endif
# 294 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Return the binary exponent of X, which must be nonzero.  */
__MATHDECL (int,ilogb,, (_Mdouble_ __x));
#endif
# 298 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalbln,, (_Mdouble_ __x, long int __n));

/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
__MATHCALL (nearbyint,, (_Mdouble_ __x));

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
__MATHCALLX (round,, (_Mdouble_ __x), (__const__));

/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
__MATHCALLX (trunc,, (_Mdouble_ __x), (__const__));

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
__MATHCALL (remquo,, (_Mdouble_ __x, _Mdouble_ __y, int *__quo));


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
   direction.  */
__MATHDECL (long int,lrint,, (_Mdouble_ __x));
__extension__
__MATHDECL (long long int,llrint,, (_Mdouble_ __x));

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
__MATHDECL (long int,lround,, (_Mdouble_ __x));
__extension__
__MATHDECL (long long int,llround,, (_Mdouble_ __x));


/* Return positive difference between X and Y.  */
__MATHCALL (fdim,, (_Mdouble_ __x, _Mdouble_ __y));

/* Return maximum numeric value from X and Y.  */
__MATHCALLX (fmax,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));

/* Return minimum numeric value from X and Y.  */
__MATHCALLX (fmin,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));


/* Classify given number.  */
__MATHDECL_1 (int, __fpclassify,, (_Mdouble_ __value))
     __attribute__ ((__const__));

/* Test for negative number.  */
__MATHDECL_1 (int, __signbit,, (_Mdouble_ __value))
     __attribute__ ((__const__));


/* Multiply-add function computed as a ternary operation.  */
__MATHCALL (fma,, (_Mdouble_ __x, _Mdouble_ __y, _Mdouble_ __z));
#endif /* Use ISO C99.  */
# 358 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
__END_NAMESPACE_C99
#endif
# 362 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_GNU
/* Test for signaling NaN.  */
__MATHDECL_1 (int, __issignaling,, (_Mdouble_ __value))
     __attribute__ ((__const__));
#endif
# 368 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalb,, (_Mdouble_ __x, _Mdouble_ __n));
#endif
# 373 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 133 "/usr/include/math.h" 2 3 4
#  undef _Mdouble_
#  undef _Mdouble_BEGIN_NAMESPACE
#  undef _Mdouble_END_NAMESPACE
#  undef __MATH_PRECNAME

# endif /* !(__NO_LONG_DOUBLE_MATH && _LIBC) || __LDBL_COMPAT */
# 139 "/usr/include/math.h" 3 4

#endif	/* Use misc or ISO C99.  */
# 141 "/usr/include/math.h" 3 4
#undef	__MATHDECL_1
#undef	__MATHDECL
#undef	__MATHCALL


#if defined __USE_MISC || defined __USE_XOPEN
/* This variable is used by `gamma' and `lgamma'.  */
extern int signgam;
#endif
# 150 "/usr/include/math.h" 3 4


/* ISO C99 defines some generic macros which work on any data type.  */
#ifdef __USE_ISOC99

/* Get the architecture specific values describing the floating-point
   evaluation.  The following symbols will get defined:

    float_t	floating-point type at least as wide as `float' used
		to evaluate `float' expressions
    double_t	floating-point type at least as wide as `double' used
		to evaluate `double' expressions

    FLT_EVAL_METHOD
		Defined to
		  0	if `float_t' is `float' and `double_t' is `double'
		  1	if `float_t' and `double_t' are `double'
		  2	if `float_t' and `double_t' are `long double'
		  else	`float_t' and `double_t' are unspecified

    INFINITY	representation of the infinity value of type `float'

    FP_FAST_FMA
    FP_FAST_FMAF
    FP_FAST_FMAL
		If defined it indicates that the `fma' function
		generally executes about as fast as a multiply and an add.
		This macro is defined only iff the `fma' function is
		implemented directly with a hardware multiply-add instructions.

    FP_ILOGB0	Expands to a value returned by `ilogb (0.0)'.
    FP_ILOGBNAN	Expands to a value returned by `ilogb (NAN)'.

    DECIMAL_DIG	Number of decimal digits supported by conversion between
		decimal and all internal floating-point formats.

*/

/* All floating-point numbers can be put in one of these categories.  */
enum
  {
    FP_NAN =
# define FP_NAN 0
      FP_NAN,
    FP_INFINITE =
# define FP_INFINITE 1
      FP_INFINITE,
    FP_ZERO =
# define FP_ZERO 2
      FP_ZERO,
    FP_SUBNORMAL =
# define FP_SUBNORMAL 3
      FP_SUBNORMAL,
    FP_NORMAL =
# define FP_NORMAL 4
      FP_NORMAL
  };

/* Return number of classification appropriate for X.  */
# ifdef __NO_LONG_DOUBLE_MATH
#  define fpclassify(x) \
     (sizeof (x) == sizeof (float) ? __fpclassifyf (x) : __fpclassify (x))
# else
# 213 "/usr/include/math.h" 3 4
#  define fpclassify(x) \
     (sizeof (x) == sizeof (float)					      \
      ? __fpclassifyf (x)						      \
      : sizeof (x) == sizeof (double)					      \
      ? __fpclassify (x) : __fpclassifyl (x))
# endif
# 219 "/usr/include/math.h" 3 4

/* Return nonzero value if sign of X is negative.  */
# ifdef __NO_LONG_DOUBLE_MATH
#  define signbit(x) \
     (sizeof (x) == sizeof (float) ? __signbitf (x) : __signbit (x))
# else
# 225 "/usr/include/math.h" 3 4
#  define signbit(x) \
     (sizeof (x) == sizeof (float)					      \
      ? __signbitf (x)							      \
      : sizeof (x) == sizeof (double)					      \
      ? __signbit (x) : __signbitl (x))
# endif
# 231 "/usr/include/math.h" 3 4

/* Return nonzero value if X is not +-Inf or NaN.  */
# ifdef __NO_LONG_DOUBLE_MATH
#  define isfinite(x) \
     (sizeof (x) == sizeof (float) ? __finitef (x) : __finite (x))
# else
# 237 "/usr/include/math.h" 3 4
#  define isfinite(x) \
     (sizeof (x) == sizeof (float)					      \
      ? __finitef (x)							      \
      : sizeof (x) == sizeof (double)					      \
      ? __finite (x) : __finitel (x))
# endif
# 243 "/usr/include/math.h" 3 4

/* Return nonzero value if X is neither zero, subnormal, Inf, nor NaN.  */
# define isnormal(x) (fpclassify (x) == FP_NORMAL)

/* Return nonzero value if X is a NaN.  We could use `fpclassify' but
   we already have this functions `__isnan' and it is faster.  */
# ifdef __NO_LONG_DOUBLE_MATH
#  define isnan(x) \
     (sizeof (x) == sizeof (float) ? __isnanf (x) : __isnan (x))
# else
# 253 "/usr/include/math.h" 3 4
#  define isnan(x) \
     (sizeof (x) == sizeof (float)					      \
      ? __isnanf (x)							      \
      : sizeof (x) == sizeof (double)					      \
      ? __isnan (x) : __isnanl (x))
# endif
# 259 "/usr/include/math.h" 3 4

/* Return nonzero value if X is positive or negative infinity.  */
# ifdef __NO_LONG_DOUBLE_MATH
#  define isinf(x) \
     (sizeof (x) == sizeof (float) ? __isinff (x) : __isinf (x))
# else
# 265 "/usr/include/math.h" 3 4
#  define isinf(x) \
     (sizeof (x) == sizeof (float)					      \
      ? __isinff (x)							      \
      : sizeof (x) == sizeof (double)					      \
      ? __isinf (x) : __isinfl (x))
# endif
# 271 "/usr/include/math.h" 3 4

/* Bitmasks for the math_errhandling macro.  */
# define MATH_ERRNO	1	/* errno set by math functions.  */
# define MATH_ERREXCEPT	2	/* Exceptions raised by math functions.  */

/* By default all functions support both errno and exception handling.
   In gcc's fast math mode and if inline functions are defined this
   might not be true.  */
# ifndef __FAST_MATH__
#  define math_errhandling	(MATH_ERRNO | MATH_ERREXCEPT)
# endif
# 282 "/usr/include/math.h" 3 4

#endif /* Use ISO C99.  */
# 284 "/usr/include/math.h" 3 4

#ifdef __USE_GNU
/* Return nonzero value if X is a signaling NaN.  */
# ifdef __NO_LONG_DOUBLE_MATH
#  define issignaling(x) \
     (sizeof (x) == sizeof (float) ? __issignalingf (x) : __issignaling (x))
# else
# 291 "/usr/include/math.h" 3 4
#  define issignaling(x) \
     (sizeof (x) == sizeof (float)					      \
      ? __issignalingf (x)						      \
      : sizeof (x) == sizeof (double)					      \
      ? __issignaling (x) : __issignalingl (x))
# endif
# 297 "/usr/include/math.h" 3 4
#endif /* Use GNU.  */
# 298 "/usr/include/math.h" 3 4

#ifdef	__USE_MISC
/* Support for various different standard error handling behaviors.  */
typedef enum
{
  _IEEE_ = -1,	/* According to IEEE 754/IEEE 854.  */
  _SVID_,	/* According to System V, release 4.  */
  _XOPEN_,	/* Nowadays also Unix98.  */
  _POSIX_,
  _ISOC_	/* Actually this is ISO C99.  */
} _LIB_VERSION_TYPE;

/* This variable can be changed at run-time to any of the values above to
   affect floating point error handling behavior (it may also be necessary
   to change the hardware FPU exception settings).  */
extern _LIB_VERSION_TYPE _LIB_VERSION;
#endif
# 315 "/usr/include/math.h" 3 4


#ifdef __USE_SVID
/* In SVID error handling, `matherr' is called with this description
   of the exceptional condition.

   We have a problem when using C++ since `exception' is a reserved
   name in C++.  */
# ifdef __cplusplus
struct __exception
# else
# 326 "/usr/include/math.h" 3 4
struct exception
# endif
# 328 "/usr/include/math.h" 3 4
  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };

# ifdef __cplusplus
extern int matherr (struct __exception *__exc) throw ();
# else
# 339 "/usr/include/math.h" 3 4
extern int matherr (struct exception *__exc);
# endif
# 341 "/usr/include/math.h" 3 4

# define X_TLOSS	1.41484755040568800000e+16

/* Types of exceptions in the `type' field.  */
# define DOMAIN		1
# define SING		2
# define OVERFLOW	3
# define UNDERFLOW	4
# define TLOSS		5
# define PLOSS		6

/* SVID mode specifies returning this large value instead of infinity.  */
# define HUGE		3.40282347e+38F

#else	/* !SVID */
# 356 "/usr/include/math.h" 3 4

# ifdef __USE_XOPEN
/* X/Open wants another strange constant.  */
#  define MAXFLOAT	3.40282347e+38F
# endif
# 361 "/usr/include/math.h" 3 4

#endif	/* SVID */
# 363 "/usr/include/math.h" 3 4


/* Some useful constants.  */
#if defined __USE_BSD || defined __USE_XOPEN
# define M_E		2.7182818284590452354	/* e */
# define M_LOG2E	1.4426950408889634074	/* log_2 e */
# define M_LOG10E	0.43429448190325182765	/* log_10 e */
# define M_LN2		0.69314718055994530942	/* log_e 2 */
# define M_LN10		2.30258509299404568402	/* log_e 10 */
# define M_PI		3.14159265358979323846	/* pi */
# define M_PI_2		1.57079632679489661923	/* pi/2 */
# define M_PI_4		0.78539816339744830962	/* pi/4 */
# define M_1_PI		0.31830988618379067154	/* 1/pi */
# define M_2_PI		0.63661977236758134308	/* 2/pi */
# define M_2_SQRTPI	1.12837916709551257390	/* 2/sqrt(pi) */
# define M_SQRT2	1.41421356237309504880	/* sqrt(2) */
# define M_SQRT1_2	0.70710678118654752440	/* 1/sqrt(2) */
#endif
# 381 "/usr/include/math.h" 3 4

/* The above constants are not adequate for computation using `long double's.
   Therefore we provide as an extension constants with similar names as a
   GNU extension.  Provide enough digits for the 128-bit IEEE quad.  */
#ifdef __USE_GNU
# define M_El		2.718281828459045235360287471352662498L /* e */
# define M_LOG2El	1.442695040888963407359924681001892137L /* log_2 e */
# define M_LOG10El	0.434294481903251827651128918916605082L /* log_10 e */
# define M_LN2l		0.693147180559945309417232121458176568L /* log_e 2 */
# define M_LN10l	2.302585092994045684017991454684364208L /* log_e 10 */
# define M_PIl		3.141592653589793238462643383279502884L /* pi */
# define M_PI_2l	1.570796326794896619231321691639751442L /* pi/2 */
# define M_PI_4l	0.785398163397448309615660845819875721L /* pi/4 */
# define M_1_PIl	0.318309886183790671537767526745028724L /* 1/pi */
# define M_2_PIl	0.636619772367581343075535053490057448L /* 2/pi */
# define M_2_SQRTPIl	1.128379167095512573896158903121545172L /* 2/sqrt(pi) */
# define M_SQRT2l	1.414213562373095048801688724209698079L /* sqrt(2) */
# define M_SQRT1_2l	0.707106781186547524400844362104849039L /* 1/sqrt(2) */
#endif
# 400 "/usr/include/math.h" 3 4


/* When compiling in strict ISO C compatible mode we must not use the
   inline functions since they, among other things, do not set the
   `errno' variable correctly.  */
#if defined __STRICT_ANSI__ && !defined __NO_MATH_INLINES
# define __NO_MATH_INLINES	1
#endif
# 408 "/usr/include/math.h" 3 4

#if defined __USE_ISOC99 && __GNUC_PREREQ(2,97)
/* ISO C99 defines some macros to compare number while taking care for
   unordered numbers.  Many FPUs provide special instructions to support
   these operations.  Generic support in GCC for these as builtins went
   in before 3.0.0, but not all cpus added their patterns.  We define
   versions that use the builtins here, and <bits/mathinline.h> will
   undef/redefine as appropriate for the specific GCC version in use.  */
# define isgreater(x, y)	__builtin_isgreater(x, y)
# define isgreaterequal(x, y)	__builtin_isgreaterequal(x, y)
# define isless(x, y)		__builtin_isless(x, y)
# define islessequal(x, y)	__builtin_islessequal(x, y)
# define islessgreater(x, y)	__builtin_islessgreater(x, y)
# define isunordered(u, v)	__builtin_isunordered(u, v)
#endif
# 423 "/usr/include/math.h" 3 4

/* Get machine-dependent inline versions (if there are any).  */
#ifdef __USE_EXTERN_INLINES
#if 0 /* expanded by -frewrite-includes */
# include <bits/mathinline.h>
#endif /* expanded by -frewrite-includes */
# 1 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 1 3 4
/* Inline math functions for i387 and SSE.
   Copyright (C) 1995-2013 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _MATH_H
# error "Never use <bits/mathinline.h> directly; include <math.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

#ifndef __extern_always_inline
# define __MATH_INLINE __inline
#else
# 26 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
# define __MATH_INLINE __extern_always_inline
#endif
# 28 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4


#if defined __USE_ISOC99 && defined __GNUC__ && __GNUC__ >= 2
/* GCC 2.97 and up have builtins that actually can be used.  */
# if !__GNUC_PREREQ (2,97)
/* ISO C99 defines some macros to perform unordered comparisons.  The
   ix87 FPU supports this with special opcodes and we should use them.
   These must not be inline functions since we have to be able to handle
   all floating-point types.  */
#  undef isgreater
#  undef isgreaterequal
#  undef isless
#  undef islessequal
#  undef islessgreater
#  undef isunordered
#  ifdef __i686__
/* For the PentiumPro and more recent processors we can provide
   better code.  */
#   define isgreater(x, y) \
     ({ register char __result;						      \
	__asm__ ("fucomip %%st(1), %%st; seta %%al"			      \
		 : "=a" (__result) : "u" (y), "t" (x) : "cc", "st");	      \
	__result; })
#   define isgreaterequal(x, y) \
     ({ register char __result;						      \
	__asm__ ("fucomip %%st(1), %%st; setae %%al"			      \
		 : "=a" (__result) : "u" (y), "t" (x) : "cc", "st");	      \
	__result; })

#   define isless(x, y) \
     ({ register char __result;						      \
	__asm__ ("fucomip %%st(1), %%st; seta %%al"			      \
		 : "=a" (__result) : "u" (x), "t" (y) : "cc", "st");	      \
	__result; })

#   define islessequal(x, y) \
     ({ register char __result;						      \
	__asm__ ("fucomip %%st(1), %%st; setae %%al"			      \
		 : "=a" (__result) : "u" (x), "t" (y) : "cc", "st");	      \
	__result; })

#   define islessgreater(x, y) \
     ({ register char __result;						      \
	__asm__ ("fucomip %%st(1), %%st; setne %%al"			      \
		 : "=a" (__result) : "u" (y), "t" (x) : "cc", "st");	      \
	__result; })

#   define isunordered(x, y) \
     ({ register char __result;						      \
	__asm__ ("fucomip %%st(1), %%st; setp %%al"			      \
		 : "=a" (__result) : "u" (y), "t" (x) : "cc", "st");	      \
	__result; })
#  else
# 81 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
/* This is the dumb, portable code for i386 and above.  */
#   define isgreater(x, y) \
     ({ register char __result;						      \
	__asm__ ("fucompp; fnstsw; testb $0x45, %%ah; setz %%al"	      \
		 : "=a" (__result) : "u" (y), "t" (x) : "cc", "st", "st(1)"); \
	__result; })

#   define isgreaterequal(x, y) \
     ({ register char __result;						      \
	__asm__ ("fucompp; fnstsw; testb $0x05, %%ah; setz %%al"	      \
		 : "=a" (__result) : "u" (y), "t" (x) : "cc", "st", "st(1)"); \
	__result; })

#   define isless(x, y) \
     ({ register char __result;						      \
	__asm__ ("fucompp; fnstsw; testb $0x45, %%ah; setz %%al"	      \
		 : "=a" (__result) : "u" (x), "t" (y) : "cc", "st", "st(1)"); \
	__result; })

#   define islessequal(x, y) \
     ({ register char __result;						      \
	__asm__ ("fucompp; fnstsw; testb $0x05, %%ah; setz %%al"	      \
		 : "=a" (__result) : "u" (x), "t" (y) : "cc", "st", "st(1)"); \
	__result; })

#   define islessgreater(x, y) \
     ({ register char __result;						      \
	__asm__ ("fucompp; fnstsw; testb $0x44, %%ah; setz %%al"	      \
		 : "=a" (__result) : "u" (y), "t" (x) : "cc", "st", "st(1)"); \
	__result; })

#   define isunordered(x, y) \
     ({ register char __result;						      \
	__asm__ ("fucompp; fnstsw; sahf; setp %%al"			      \
		 : "=a" (__result) : "u" (y), "t" (x) : "cc", "st", "st(1)"); \
	__result; })
#  endif /* __i686__ */
# 118 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
# endif	/* GCC 2.97 */
# 119 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

/* The gcc, version 2.7 or below, has problems with all this inlining
   code.  So disable it for this version of the compiler.  */
# if __GNUC_PREREQ (2, 8)
__BEGIN_NAMESPACE_C99

/* Test for negative number.  Used in the signbit() macro.  */
__MATH_INLINE int
__NTH (__signbitf (float __x))
{
#  ifdef __SSE2_MATH__
  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return (__m & 0x8) != 0;
#  else
# 134 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
  __extension__ union { float __f; int __i; } __u = { __f: __x };
  return __u.__i < 0;
#  endif
# 137 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
}
__MATH_INLINE int
__NTH (__signbit (double __x))
{
#  ifdef __SSE2_MATH__
  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return (__m & 0x80) != 0;
#  else
# 146 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
  __extension__ union { double __d; int __i[2]; } __u = { __d: __x };
  return __u.__i[1] < 0;
#  endif
# 149 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
}
__MATH_INLINE int
__NTH (__signbitl (long double __x))
{
  __extension__ union { long double __l; int __i[3]; } __u = { __l: __x };
  return (__u.__i[2] & 0x8000) != 0;
}

__END_NAMESPACE_C99
# endif
# 159 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
#endif
# 160 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4


/* The gcc, version 2.7 or below, has problems with all this inlining
   code.  So disable it for this version of the compiler.  */
#if __GNUC_PREREQ (2, 8)
# if !__GNUC_PREREQ (3, 4) && !defined __NO_MATH_INLINES \
     && defined __OPTIMIZE__
/* GCC 3.4 introduced builtins for all functions below, so
   there's no need to define any of these inline functions.  */

#  ifdef __USE_ISOC99
__BEGIN_NAMESPACE_C99

/* Round to nearest integer.  */
#   ifdef __SSE_MATH__
__MATH_INLINE long int
__NTH (lrintf (float __x))
{
  long int __res;
  /* Mark as volatile since the result is dependent on the state of
     the SSE control register (the rounding mode).  Otherwise GCC might
     remove these assembler instructions since it does not know about
     the rounding mode change and cannot currently be told.  */
  __asm __volatile__ ("cvtss2si %1, %0" : "=r" (__res) : "xm" (__x));
  return __res;
}
#   endif
# 187 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
#   ifdef __SSE2_MATH__
__MATH_INLINE long int
__NTH (lrint (double __x))
{
  long int __res;
  /* Mark as volatile since the result is dependent on the state of
     the SSE control register (the rounding mode).  Otherwise GCC might
     remove these assembler instructions since it does not know about
     the rounding mode change and cannot currently be told.  */
  __asm __volatile__ ("cvtsd2si %1, %0" : "=r" (__res) : "xm" (__x));
  return __res;
}
#   endif
# 200 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
#   ifdef __x86_64__
__extension__
__MATH_INLINE long long int
__NTH (llrintf (float __x))
{
  long long int __res;
  /* Mark as volatile since the result is dependent on the state of
     the SSE control register (the rounding mode).  Otherwise GCC might
     remove these assembler instructions since it does not know about
     the rounding mode change and cannot currently be told.  */
  __asm __volatile__ ("cvtss2si %1, %0" : "=r" (__res) : "xm" (__x));
  return __res;
}
__extension__
__MATH_INLINE long long int
__NTH (llrint (double __x))
{
  long long int __res;
  /* Mark as volatile since the result is dependent on the state of
     the SSE control register (the rounding mode).  Otherwise GCC might
     remove these assembler instructions since it does not know about
     the rounding mode change and cannot currently be told.  */
  __asm __volatile__ ("cvtsd2si %1, %0" : "=r" (__res) : "xm" (__x));
  return __res;
}
#   endif
# 226 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

#   if defined __FINITE_MATH_ONLY__ && __FINITE_MATH_ONLY__ > 0 \
       && defined __SSE2_MATH__
/* Determine maximum of two values.  */
__MATH_INLINE float
__NTH (fmaxf (float __x, float __y))
{
#    ifdef __AVX__
  float __res;
  __asm ("vmaxss %2, %1, %0" : "=x" (__res) : "x" (x), "xm" (__y));
  return __res;
#    else
# 238 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
  __asm ("maxss %1, %0" : "+x" (__x) : "xm" (__y));
  return __x;
#    endif
# 241 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
}
__MATH_INLINE double
__NTH (fmax (double __x, double __y))
{
#    ifdef __AVX__
  float __res;
  __asm ("vmaxsd %2, %1, %0" : "=x" (__res) : "x" (x), "xm" (__y));
  return __res;
#    else
# 250 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
  __asm ("maxsd %1, %0" : "+x" (__x) : "xm" (__y));
  return __x;
#    endif
# 253 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
}

/* Determine minimum of two values.  */
__MATH_INLINE float
__NTH (fminf (float __x, float __y))
{
#    ifdef __AVX__
  float __res;
  __asm ("vminss %2, %1, %0" : "=x" (__res) : "x" (x), "xm" (__y));
  return __res;
#    else
# 264 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
  __asm ("minss %1, %0" : "+x" (__x) : "xm" (__y));
  return __x;
#    endif
# 267 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
}
__MATH_INLINE double
__NTH (fmin (double __x, double __y))
{
#    ifdef __AVX__
  float __res;
  __asm ("vminsd %2, %1, %0" : "=x" (__res) : "x" (x), "xm" (__y));
  return __res;
#    else
# 276 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
  __asm ("minsd %1, %0" : "+x" (__x) : "xm" (__y));
  return __x;
#    endif
# 279 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
}
#   endif
# 281 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

__END_NAMESPACE_C99
#  endif
# 284 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

#  if defined __SSE4_1__ && defined __SSE2_MATH__
#   if defined __USE_MISC || defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
__BEGIN_NAMESPACE_C99

/* Round to nearest integer.  */
__MATH_INLINE double
__NTH (rint (double __x))
{
  double __res;
  /* Mark as volatile since the result is dependent on the state of
     the SSE control register (the rounding mode).  Otherwise GCC might
     remove these assembler instructions since it does not know about
     the rounding mode change and cannot currently be told.  */
  __asm __volatile__ ("roundsd $4, %1, %0" : "=x" (__res) : "xm" (__x));
  return __res;
}
__MATH_INLINE float
__NTH (rintf (float __x))
{
  float __res;
  /* Mark as volatile since the result is dependent on the state of
     the SSE control register (the rounding mode).  Otherwise GCC might
     remove these assembler instructions since it does not know about
     the rounding mode change and cannot currently be told.  */
  __asm __volatile__ ("roundss $4, %1, %0" : "=x" (__res) : "xm" (__x));
  return __res;
}

#    ifdef __USE_ISOC99
/* Round to nearest integer without raising inexact exception.  */
__MATH_INLINE double
__NTH (nearbyint (double __x))
{
  double __res;
  /* Mark as volatile since the result is dependent on the state of
     the SSE control register (the rounding mode).  Otherwise GCC might
     remove these assembler instructions since it does not know about
     the rounding mode change and cannot currently be told.  */
  __asm __volatile__ ("roundsd $0xc, %1, %0" : "=x" (__res) : "xm" (__x));
  return __res;
}
__MATH_INLINE float
__NTH (nearbyintf (float __x))
{
  float __res;
  /* Mark as volatile since the result is dependent on the state of
     the SSE control register (the rounding mode).  Otherwise GCC might
     remove these assembler instructions since it does not know about
     the rounding mode change and cannot currently be told.  */
  __asm __volatile__ ("roundss $0xc, %1, %0" : "=x" (__res) : "xm" (__x));
  return __res;
}
#    endif
# 338 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

__END_NAMESPACE_C99
#   endif
# 341 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

__BEGIN_NAMESPACE_STD
/* Smallest integral value not less than X.  */
__MATH_INLINE double
__NTH (ceil (double __x))
{
  double __res;
  __asm ("roundsd $2, %1, %0" : "=x" (__res) : "xm" (__x));
  return __res;
}
__END_NAMESPACE_STD

__BEGIN_NAMESPACE_C99
__MATH_INLINE float
__NTH (ceilf (float __x))
{
  float __res;
  __asm ("roundss $2, %1, %0" : "=x" (__res) : "xm" (__x));
  return __res;
}
__END_NAMESPACE_C99

__BEGIN_NAMESPACE_STD
/* Largest integer not greater than X.  */
__MATH_INLINE double
__NTH (floor (double __x))
{
  double __res;
  __asm ("roundsd $1, %1, %0" : "=x" (__res) : "xm" (__x));
  return __res;
}
__END_NAMESPACE_STD

__BEGIN_NAMESPACE_C99
__MATH_INLINE float
__NTH (floorf (float __x))
{
  float __res;
  __asm ("roundss $1, %1, %0" : "=x" (__res) : "xm" (__x));
  return __res;
}
__END_NAMESPACE_C99
#  endif
# 384 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
# endif
# 385 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
#endif
# 386 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

#ifndef __x86_64__
# if ((!defined __NO_MATH_INLINES || defined __LIBC_INTERNAL_MATH_INLINES) \
     && defined __OPTIMIZE__)

/* The inline functions do not set errno or raise necessarily the
   correct exceptions.  */
#  undef math_errhandling

/* A macro to define float, double, and long double versions of various
   math functions for the ix87 FPU.  FUNC is the function name (which will
   be suffixed with f and l for the float and long double version,
   respectively).  OP is the name of the FPU operation.
   We define two sets of macros.  The set with the additional NP
   doesn't add a prototype declaration.  */

#  if defined __USE_MISC || defined __USE_ISOC99
#   define __inline_mathop(func, op) \
  __inline_mathop_ (double, func, op)					      \
  __inline_mathop_ (float, __CONCAT(func,f), op)			      \
  __inline_mathop_ (long double, __CONCAT(func,l), op)
#   define __inline_mathopNP(func, op) \
  __inline_mathopNP_ (double, func, op)					      \
  __inline_mathopNP_ (float, __CONCAT(func,f), op)			      \
  __inline_mathopNP_ (long double, __CONCAT(func,l), op)
#  else
# 412 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
#   define __inline_mathop(func, op) \
  __inline_mathop_ (double, func, op)
#   define __inline_mathopNP(func, op) \
  __inline_mathopNP_ (double, func, op)
#  endif
# 417 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

#  define __inline_mathop_(float_type, func, op) \
  __inline_mathop_decl_ (float_type, func, op, "0" (__x))
#  define __inline_mathopNP_(float_type, func, op) \
  __inline_mathop_declNP_ (float_type, func, op, "0" (__x))


#  if defined __USE_MISC || defined __USE_ISOC99
#   define __inline_mathop_decl(func, op, params...) \
  __inline_mathop_decl_ (double, func, op, params)			      \
  __inline_mathop_decl_ (float, __CONCAT(func,f), op, params)		      \
  __inline_mathop_decl_ (long double, __CONCAT(func,l), op, params)
#   define __inline_mathop_declNP(func, op, params...) \
  __inline_mathop_declNP_ (double, func, op, params)			      \
  __inline_mathop_declNP_ (float, __CONCAT(func,f), op, params)		      \
  __inline_mathop_declNP_ (long double, __CONCAT(func,l), op, params)
#  else
# 434 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
#   define __inline_mathop_decl(func, op, params...) \
  __inline_mathop_decl_ (double, func, op, params)
#   define __inline_mathop_declNP(func, op, params...) \
  __inline_mathop_declNP_ (double, func, op, params)
#  endif
# 439 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

#  define __inline_mathop_decl_(float_type, func, op, params...) \
  __MATH_INLINE float_type func (float_type) __THROW;			      \
  __inline_mathop_declNP_ (float_type, func, op, params)

#  define __inline_mathop_declNP_(float_type, func, op, params...) \
  __MATH_INLINE float_type __NTH (func (float_type __x))		      \
  {									      \
    register float_type __result;					      \
    __asm __volatile__ (op : "=t" (__result) : params);			      \
    return __result;							      \
  }


#  if defined __USE_MISC || defined __USE_ISOC99
#   define __inline_mathcode(func, arg, code) \
  __inline_mathcode_ (double, func, arg, code)				      \
  __inline_mathcode_ (float, __CONCAT(func,f), arg, code)		      \
  __inline_mathcode_ (long double, __CONCAT(func,l), arg, code)
#   define __inline_mathcodeNP(func, arg, code) \
  __inline_mathcodeNP_ (double, func, arg, code)			      \
  __inline_mathcodeNP_ (float, __CONCAT(func,f), arg, code)		      \
  __inline_mathcodeNP_ (long double, __CONCAT(func,l), arg, code)
#   define __inline_mathcode2(func, arg1, arg2, code) \
  __inline_mathcode2_ (double, func, arg1, arg2, code)			      \
  __inline_mathcode2_ (float, __CONCAT(func,f), arg1, arg2, code)	      \
  __inline_mathcode2_ (long double, __CONCAT(func,l), arg1, arg2, code)
#   define __inline_mathcodeNP2(func, arg1, arg2, code) \
  __inline_mathcodeNP2_ (double, func, arg1, arg2, code)		      \
  __inline_mathcodeNP2_ (float, __CONCAT(func,f), arg1, arg2, code)	      \
  __inline_mathcodeNP2_ (long double, __CONCAT(func,l), arg1, arg2, code)
#   define __inline_mathcode3(func, arg1, arg2, arg3, code) \
  __inline_mathcode3_ (double, func, arg1, arg2, arg3, code)		      \
  __inline_mathcode3_ (float, __CONCAT(func,f), arg1, arg2, arg3, code)	      \
  __inline_mathcode3_ (long double, __CONCAT(func,l), arg1, arg2, arg3, code)
#   define __inline_mathcodeNP3(func, arg1, arg2, arg3, code) \
  __inline_mathcodeNP3_ (double, func, arg1, arg2, arg3, code)		      \
  __inline_mathcodeNP3_ (float, __CONCAT(func,f), arg1, arg2, arg3, code)     \
  __inline_mathcodeNP3_ (long double, __CONCAT(func,l), arg1, arg2, arg3, code)
#  else
# 479 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
#   define __inline_mathcode(func, arg, code) \
  __inline_mathcode_ (double, func, (arg), code)
#   define __inline_mathcodeNP(func, arg, code) \
  __inline_mathcodeNP_ (double, func, (arg), code)
#   define __inline_mathcode2(func, arg1, arg2, code) \
  __inline_mathcode2_ (double, func, arg1, arg2, code)
#   define __inline_mathcodeNP2(func, arg1, arg2, code) \
  __inline_mathcodeNP2_ (double, func, arg1, arg2, code)
#   define __inline_mathcode3(func, arg1, arg2, arg3, code) \
  __inline_mathcode3_ (double, func, arg1, arg2, arg3, code)
#   define __inline_mathcodeNP3(func, arg1, arg2, arg3, code) \
  __inline_mathcodeNP3_ (double, func, arg1, arg2, arg3, code)
#  endif
# 492 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

#  define __inline_mathcode_(float_type, func, arg, code) \
  __MATH_INLINE float_type func (float_type) __THROW;			      \
  __inline_mathcodeNP_(float_type, func, arg, code)

#  define __inline_mathcodeNP_(float_type, func, arg, code) \
  __MATH_INLINE float_type __NTH (func (float_type arg))		      \
  {									      \
    code;								      \
  }


#  define __inline_mathcode2_(float_type, func, arg1, arg2, code) \
  __MATH_INLINE float_type func (float_type, float_type) __THROW;	      \
  __inline_mathcodeNP2_ (float_type, func, arg1, arg2, code)

#  define __inline_mathcodeNP2_(float_type, func, arg1, arg2, code) \
  __MATH_INLINE float_type __NTH (func (float_type arg1, float_type arg2))    \
  {									      \
    code;								      \
  }

#  define __inline_mathcode3_(float_type, func, arg1, arg2, arg3, code) \
  __MATH_INLINE float_type func (float_type, float_type, float_type) __THROW; \
  __inline_mathcodeNP3_(float_type, func, arg1, arg2, arg3, code)

#  define __inline_mathcodeNP3_(float_type, func, arg1, arg2, arg3, code) \
  __MATH_INLINE float_type __NTH (func (float_type arg1, float_type arg2,     \
					float_type arg3))		      \
  {									      \
    code;								      \
  }
# endif
# 525 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4


# if !defined __NO_MATH_INLINES && defined __OPTIMIZE__
/* Miscellaneous functions  */

/* __FAST_MATH__ is defined by gcc -ffast-math.  */
#  ifdef __FAST_MATH__
#   ifdef __USE_GNU
#    define __sincos_code \
  register long double __cosr;						      \
  register long double __sinr;						      \
  register unsigned int __swtmp;					      \
  __asm __volatile__							      \
    ("fsincos\n\t"							      \
     "fnstsw	%w2\n\t"						      \
     "testl	$0x400, %2\n\t"						      \
     "jz	1f\n\t"							      \
     "fldpi\n\t"							      \
     "fadd	%%st(0)\n\t"						      \
     "fxch	%%st(1)\n\t"						      \
     "2: fprem1\n\t"							      \
     "fnstsw	%w2\n\t"						      \
     "testl	$0x400, %2\n\t"						      \
     "jnz	2b\n\t"							      \
     "fstp	%%st(1)\n\t"						      \
     "fsincos\n\t"							      \
     "1:"								      \
     : "=t" (__cosr), "=u" (__sinr), "=a" (__swtmp) : "0" (__x));	      \
  *__sinx = __sinr;							      \
  *__cosx = __cosr

__MATH_INLINE void
__NTH (__sincos (double __x, double *__sinx, double *__cosx))
{
  __sincos_code;
}

__MATH_INLINE void
__NTH (__sincosf (float __x, float *__sinx, float *__cosx))
{
  __sincos_code;
}

__MATH_INLINE void
__NTH (__sincosl (long double __x, long double *__sinx, long double *__cosx))
{
  __sincos_code;
}
#   endif
# 574 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4


/* Optimized inline implementation, sometimes with reduced precision
   and/or argument range.  */

#   if __GNUC_PREREQ (3, 5)
#    define __expm1_code \
  register long double __temp;						      \
  __temp = __builtin_expm1l (__x);					      \
  return __temp ? __temp : __x
#   else
# 585 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
#    define __expm1_code \
  register long double __value;						      \
  register long double __exponent;					      \
  register long double __temp;						      \
  __asm __volatile__							      \
    ("fldl2e			# e^x - 1 = 2^(x * log2(e)) - 1\n\t"	      \
     "fmul	%%st(1)		# x * log2(e)\n\t"			      \
     "fst	%%st(1)\n\t"						      \
     "frndint			# int(x * log2(e))\n\t"			      \
     "fxch\n\t"								      \
     "fsub	%%st(1)		# fract(x * log2(e))\n\t"		      \
     "f2xm1			# 2^(fract(x * log2(e))) - 1\n\t"	      \
     "fscale			# 2^(x * log2(e)) - 2^(int(x * log2(e)))\n\t" \
     : "=t" (__value), "=u" (__exponent) : "0" (__x));			      \
  __asm __volatile__							      \
    ("fscale			# 2^int(x * log2(e))\n\t"		      \
     : "=t" (__temp) : "0" (1.0), "u" (__exponent));			      \
  __temp -= 1.0;							      \
  __temp += __value;							      \
  return __temp ? __temp : __x
#   endif
# 606 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
__inline_mathcodeNP_ (long double, __expm1l, __x, __expm1_code)

#   if __GNUC_PREREQ (3, 4)
__inline_mathcodeNP_ (long double, __expl, __x, return __builtin_expl (__x))
#   else
# 611 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
#    define __exp_code \
  register long double __value;						      \
  register long double __exponent;					      \
  __asm __volatile__							      \
    ("fldl2e			# e^x = 2^(x * log2(e))\n\t"		      \
     "fmul	%%st(1)		# x * log2(e)\n\t"			      \
     "fst	%%st(1)\n\t"						      \
     "frndint			# int(x * log2(e))\n\t"			      \
     "fxch\n\t"								      \
     "fsub	%%st(1)		# fract(x * log2(e))\n\t"		      \
     "f2xm1			# 2^(fract(x * log2(e))) - 1\n\t"	      \
     : "=t" (__value), "=u" (__exponent) : "0" (__x));			      \
  __value += 1.0;							      \
  __asm __volatile__							      \
    ("fscale"								      \
     : "=t" (__value) : "0" (__value), "u" (__exponent));		      \
  return __value
__inline_mathcodeNP (exp, __x, __exp_code)
__inline_mathcodeNP_ (long double, __expl, __x, __exp_code)
#   endif
# 631 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4


#   if !__GNUC_PREREQ (3, 5)
__inline_mathcodeNP (tan, __x, \
  register long double __value;						      \
  register long double __value2 __attribute__ ((__unused__));		      \
  __asm __volatile__							      \
    ("fptan"								      \
     : "=t" (__value2), "=u" (__value) : "0" (__x));			      \
  return __value)
#   endif
# 642 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
#  endif /* __FAST_MATH__ */
# 643 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4


#  if __GNUC_PREREQ (3, 4)
__inline_mathcodeNP2_ (long double, __atan2l, __y, __x,
		       return __builtin_atan2l (__y, __x))
#  else
# 649 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
#   define __atan2_code \
  register long double __value;						      \
  __asm __volatile__							      \
    ("fpatan"								      \
     : "=t" (__value) : "0" (__x), "u" (__y) : "st(1)");		      \
  return __value
#   ifdef __FAST_MATH__
__inline_mathcodeNP2 (atan2, __y, __x, __atan2_code)
#   endif
# 658 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
__inline_mathcodeNP2_ (long double, __atan2l, __y, __x, __atan2_code)
#  endif
# 660 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4


#  if defined __FAST_MATH__ && !__GNUC_PREREQ (3, 5)
__inline_mathcodeNP2 (fmod, __x, __y, \
  register long double __value;						      \
  __asm __volatile__							      \
    ("1:	fprem\n\t"						      \
     "fnstsw	%%ax\n\t"						      \
     "sahf\n\t"								      \
     "jp	1b"							      \
     : "=t" (__value) : "0" (__x), "u" (__y) : "ax", "cc");		      \
  return __value)
#  endif
# 673 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4


#  ifdef __FAST_MATH__
#   if !__GNUC_PREREQ (3,3)
__inline_mathopNP (sqrt, "fsqrt")
__inline_mathopNP_ (long double, __sqrtl, "fsqrt")
#    define __libc_sqrtl(n) __sqrtl (n)
#   else
# 681 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
#    define __libc_sqrtl(n) __builtin_sqrtl (n)
#   endif
# 683 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
#  endif
# 684 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

#  if __GNUC_PREREQ (2, 8)
__inline_mathcodeNP_ (double, fabs, __x, return __builtin_fabs (__x))
#   if defined __USE_MISC || defined __USE_ISOC99
__inline_mathcodeNP_ (float, fabsf, __x, return __builtin_fabsf (__x))
__inline_mathcodeNP_ (long double, fabsl, __x, return __builtin_fabsl (__x))
#   endif
# 691 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
__inline_mathcodeNP_ (long double, __fabsl, __x, return __builtin_fabsl (__x))
#  else
# 693 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
__inline_mathop (fabs, "fabs")
__inline_mathop_ (long double, __fabsl, "fabs")
# endif
# 696 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

#  ifdef __FAST_MATH__
#   if !__GNUC_PREREQ (3, 4)
/* The argument range of this inline version is reduced.  */
__inline_mathopNP (sin, "fsin")
/* The argument range of this inline version is reduced.  */
__inline_mathopNP (cos, "fcos")

__inline_mathop_declNP (log, "fldln2; fxch; fyl2x", "0" (__x) : "st(1)")
#   endif
# 706 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

#   if !__GNUC_PREREQ (3, 5)
__inline_mathop_declNP (log10, "fldlg2; fxch; fyl2x", "0" (__x) : "st(1)")

__inline_mathcodeNP (asin, __x, return __atan2l (__x, __libc_sqrtl (1.0 - __x * __x)))
__inline_mathcodeNP (acos, __x, return __atan2l (__libc_sqrtl (1.0 - __x * __x), __x))
#   endif
# 713 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

#   if !__GNUC_PREREQ (3, 4)
__inline_mathop_declNP (atan, "fld1; fpatan", "0" (__x) : "st(1)")
#   endif
# 717 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
#  endif /* __FAST_MATH__ */
# 718 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

__inline_mathcode_ (long double, __sgn1l, __x, \
  __extension__ union { long double __xld; unsigned int __xi[3]; } __n =      \
    { __xld: __x };							      \
  __n.__xi[2] = (__n.__xi[2] & 0x8000) | 0x3fff;			      \
  __n.__xi[1] = 0x80000000;						      \
  __n.__xi[0] = 0;							      \
  return __n.__xld)


#  ifdef __FAST_MATH__
/* The argument range of the inline version of sinhl is slightly reduced.  */
__inline_mathcodeNP (sinh, __x, \
  register long double __exm1 = __expm1l (__fabsl (__x));		      \
  return 0.5 * (__exm1 / (__exm1 + 1.0) + __exm1) * __sgn1l (__x))

__inline_mathcodeNP (cosh, __x, \
  register long double __ex = __expl (__x);				      \
  return 0.5 * (__ex + 1.0 / __ex))

__inline_mathcodeNP (tanh, __x, \
  register long double __exm1 = __expm1l (-__fabsl (__x + __x));	      \
  return __exm1 / (__exm1 + 2.0) * __sgn1l (-__x))
#  endif
# 742 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

__inline_mathcodeNP (floor, __x, \
  register long double __value;						      \
  register int __ignore;						      \
  unsigned short int __cw;						      \
  unsigned short int __cwtmp;						      \
  __asm __volatile ("fnstcw %3\n\t"					      \
		    "movzwl %3, %1\n\t"					      \
		    "andl $0xf3ff, %1\n\t"				      \
		    "orl $0x0400, %1\n\t"	/* rounding down */	      \
		    "movw %w1, %2\n\t"					      \
		    "fldcw %2\n\t"					      \
		    "frndint\n\t"					      \
		    "fldcw %3"						      \
		    : "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp),	      \
		      "=m" (__cw)					      \
		    : "0" (__x));					      \
  return __value)

__inline_mathcodeNP (ceil, __x, \
  register long double __value;						      \
  register int __ignore;						      \
  unsigned short int __cw;						      \
  unsigned short int __cwtmp;						      \
  __asm __volatile ("fnstcw %3\n\t"					      \
		    "movzwl %3, %1\n\t"					      \
		    "andl $0xf3ff, %1\n\t"				      \
		    "orl $0x0800, %1\n\t"	/* rounding up */	      \
		    "movw %w1, %2\n\t"					      \
		    "fldcw %2\n\t"					      \
		    "frndint\n\t"					      \
		    "fldcw %3"						      \
		    : "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp),	      \
		      "=m" (__cw)					      \
		    : "0" (__x));					      \
  return __value)

#  ifdef __FAST_MATH__
#   define __ldexp_code \
  register long double __value;						      \
  __asm __volatile__							      \
    ("fscale"								      \
     : "=t" (__value) : "0" (__x), "u" ((long double) __y));		      \
  return __value

__MATH_INLINE double
__NTH (ldexp (double __x, int __y))
{
  __ldexp_code;
}
#  endif
# 793 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4


/* Optimized versions for some non-standardized functions.  */
#  if defined __USE_ISOC99 || defined __USE_MISC

#   ifdef __FAST_MATH__
__inline_mathcodeNP (expm1, __x, __expm1_code)

/* We cannot rely on M_SQRT being defined.  So we do it for ourself
   here.  */
#    define __M_SQRT2	1.41421356237309504880L	/* sqrt(2) */

#    if !__GNUC_PREREQ (3, 5)
__inline_mathcodeNP (log1p, __x, \
  register long double __value;						      \
  if (__fabsl (__x) >= 1.0 - 0.5 * __M_SQRT2)				      \
    __value = logl (1.0 + __x);						      \
  else									      \
    __asm __volatile__							      \
      ("fldln2\n\t"							      \
       "fxch\n\t"							      \
       "fyl2xp1"							      \
       : "=t" (__value) : "0" (__x) : "st(1)");				      \
  return __value)
#    endif
# 818 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4


/* The argument range of the inline version of asinhl is slightly reduced.  */
__inline_mathcodeNP (asinh, __x, \
  register long double  __y = __fabsl (__x);				      \
  return (log1pl (__y * __y / (__libc_sqrtl (__y * __y + 1.0) + 1.0) + __y)   \
	  * __sgn1l (__x)))

__inline_mathcodeNP (acosh, __x, \
  return logl (__x + __libc_sqrtl (__x - 1.0) * __libc_sqrtl (__x + 1.0)))

__inline_mathcodeNP (atanh, __x, \
  register long double __y = __fabsl (__x);				      \
  return -0.5 * log1pl (-(__y + __y) / (1.0 + __y)) * __sgn1l (__x))

/* The argument range of the inline version of hypotl is slightly reduced.  */
__inline_mathcodeNP2 (hypot, __x, __y,
		      return __libc_sqrtl (__x * __x + __y * __y))

#    if !__GNUC_PREREQ (3, 5)
__inline_mathcodeNP(logb, __x, \
  register long double __value;						      \
  register long double __junk;						      \
  __asm __volatile__							      \
    ("fxtract\n\t"							      \
     : "=t" (__junk), "=u" (__value) : "0" (__x));			      \
  return __value)
#    endif
# 846 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

#   endif
# 848 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
#  endif
# 849 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

#  ifdef __USE_ISOC99
#   ifdef __FAST_MATH__

#    if !__GNUC_PREREQ (3, 5)
__inline_mathop_declNP (log2, "fld1; fxch; fyl2x", "0" (__x) : "st(1)")
#    endif
# 856 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

__MATH_INLINE float
__NTH (ldexpf (float __x, int __y))
{
  __ldexp_code;
}

__MATH_INLINE long double
__NTH (ldexpl (long double __x, int __y))
{
  __ldexp_code;
}

__inline_mathopNP (rint, "frndint")
#   endif /* __FAST_MATH__ */
# 871 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

#   define __lrint_code \
  long int __lrintres;							      \
  __asm__ __volatile__							      \
    ("fistpl %0"							      \
     : "=m" (__lrintres) : "t" (__x) : "st");				      \
  return __lrintres
__MATH_INLINE long int
__NTH (lrintf (float __x))
{
  __lrint_code;
}
__MATH_INLINE long int
__NTH (lrint (double __x))
{
  __lrint_code;
}
__MATH_INLINE long int
__NTH (lrintl (long double __x))
{
  __lrint_code;
}
#   undef __lrint_code

#   define __llrint_code \
  long long int __llrintres;						      \
  __asm__ __volatile__							      \
    ("fistpll %0"							      \
     : "=m" (__llrintres) : "t" (__x) : "st");				      \
  return __llrintres
__extension__
__MATH_INLINE long long int
__NTH (llrintf (float __x))
{
  __llrint_code;
}
__extension__
__MATH_INLINE long long int
__NTH (llrint (double __x))
{
  __llrint_code;
}
__extension__
__MATH_INLINE long long int
__NTH (llrintl (long double __x))
{
  __llrint_code;
}
#   undef __llrint_code

# endif
# 922 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4


#  ifdef __USE_MISC

#   if defined __FAST_MATH__ && !__GNUC_PREREQ (3, 5)
__inline_mathcodeNP2 (drem, __x, __y, \
  register double __value;						      \
  register int __clobbered;						      \
  __asm __volatile__							      \
    ("1:	fprem1\n\t"						      \
     "fstsw	%%ax\n\t"						      \
     "sahf\n\t"								      \
     "jp	1b"							      \
     : "=t" (__value), "=&a" (__clobbered) : "0" (__x), "u" (__y) : "cc");    \
  return __value)
#  endif
# 938 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4


/* This function is used in the `isfinite' macro.  */
__MATH_INLINE int
__NTH (__finite (double __x))
{
  return (__extension__
	  (((((union { double __d; int __i[2]; }) {__d: __x}).__i[1]
	     | 0x800fffffu) + 1) >> 31));
}

#  endif /* __USE_MISC  */
# 950 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

/* Undefine some of the large macros which are not used anymore.  */
#  undef __atan2_code
#  ifdef __FAST_MATH__
#   undef __expm1_code
#   undef __exp_code
#   undef __sincos_code
#  endif /* __FAST_MATH__ */
# 958 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

# endif /* __NO_MATH_INLINES  */
# 960 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4


/* This code is used internally in the GNU libc.  */
# ifdef __LIBC_INTERNAL_MATH_INLINES
__inline_mathop (__ieee754_sqrt, "fsqrt")
__inline_mathcode2 (__ieee754_atan2, __y, __x,
		    register long double __value;
		    __asm __volatile__ ("fpatan\n\t"
					: "=t" (__value)
					: "0" (__x), "u" (__y) : "st(1)");
		    return __value;)
# endif
# 972 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4

#endif /* !__x86_64__ */
# 974 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
# 427 "/usr/include/math.h" 2 3 4
#endif
# 428 "/usr/include/math.h" 3 4

/* Define special entry points to use when the compiler got told to
   only expect finite results.  */
#if defined __FINITE_MATH_ONLY__ && __FINITE_MATH_ONLY__ > 0
#if 0 /* expanded by -frewrite-includes */
# include <bits/math-finite.h>
#endif /* expanded by -frewrite-includes */
# 433 "/usr/include/math.h" 3 4
#endif
# 434 "/usr/include/math.h" 3 4

#ifdef __USE_ISOC99
/* If we've still got undefined comparison macros, provide defaults.  */

/* Return nonzero value if X is greater than Y.  */
# ifndef isgreater
#  define isgreater(x, y) \
  (__extension__							      \
   ({ __typeof__(x) __x = (x); __typeof__(y) __y = (y);			      \
      !isunordered (__x, __y) && __x > __y; }))
# endif
# 445 "/usr/include/math.h" 3 4

/* Return nonzero value if X is greater than or equal to Y.  */
# ifndef isgreaterequal
#  define isgreaterequal(x, y) \
  (__extension__							      \
   ({ __typeof__(x) __x = (x); __typeof__(y) __y = (y);			      \
      !isunordered (__x, __y) && __x >= __y; }))
# endif
# 453 "/usr/include/math.h" 3 4

/* Return nonzero value if X is less than Y.  */
# ifndef isless
#  define isless(x, y) \
  (__extension__							      \
   ({ __typeof__(x) __x = (x); __typeof__(y) __y = (y);			      \
      !isunordered (__x, __y) && __x < __y; }))
# endif
# 461 "/usr/include/math.h" 3 4

/* Return nonzero value if X is less than or equal to Y.  */
# ifndef islessequal
#  define islessequal(x, y) \
  (__extension__							      \
   ({ __typeof__(x) __x = (x); __typeof__(y) __y = (y);			      \
      !isunordered (__x, __y) && __x <= __y; }))
# endif
# 469 "/usr/include/math.h" 3 4

/* Return nonzero value if either X is less than Y or Y is less than X.  */
# ifndef islessgreater
#  define islessgreater(x, y) \
  (__extension__							      \
   ({ __typeof__(x) __x = (x); __typeof__(y) __y = (y);			      \
      !isunordered (__x, __y) && (__x < __y || __y < __x); }))
# endif
# 477 "/usr/include/math.h" 3 4

/* Return nonzero value if arguments are unordered.  */
# ifndef isunordered
#  define isunordered(u, v) \
  (__extension__							      \
   ({ __typeof__(u) __u = (u); __typeof__(v) __v = (v);			      \
      fpclassify (__u) == FP_NAN || fpclassify (__v) == FP_NAN; }))
# endif
# 485 "/usr/include/math.h" 3 4

#endif
# 487 "/usr/include/math.h" 3 4

__END_DECLS


#endif /* math.h  */
# 492 "/usr/include/math.h" 3 4
# 76 "expy.c" 2
#if 0 /* expanded by -frewrite-includes */
#include "exp.h"
#endif /* expanded by -frewrite-includes */
# 1 "./exp.h" 1
#ifndef _RDS_H_
#define _RDS_H_

#if 0 /* expanded by -frewrite-includes */
#include "ht.h"
#endif /* expanded by -frewrite-includes */
# 1 "./ht.h" 1
#ifndef _HT_H_
#define _HT_H_

/* declaration de types : 
** 1) union de types pour la valeur d'une entree dans le dicionnaire
** 2) type d'une entree
** 3) type du dictionnaire
** -----------------------------------------------------------------
*/
typedef union
{
  struct htelt_st  *e;
  double f;
  long   i;
  char   *s;
}
elt_t;

typedef struct htelt_st
{
  struct htelt_st * NEXT;
  char *KEY;
  long TYPE;
  long USED;
  long FLINE;
  char * FNAME;
  elt_t VAL;
}
htelt_t;

typedef htelt_t * ht_t;

enum htelt_e {HT_EMPTY, HT_INT, HT_STRING, HT_FLOAT};


/* ajoute une entree (initialisé à 0) en tete de liste
** --------------------------------------------------- 
*/
extern htelt_t *eltadd (htelt_t * list, char *key);

/* replace une entree dans la liste des entrees libres
** rend le pointeur NEXT de l'entree effacée
** ---------------------------------------------------
*/
extern htelt_t *eltdel (htelt_t * list);

/* efface une liste d'elements
** ---------------------------
*/
extern void eltremove (htelt_t * list);

/* donne des info sur l'usage du dico
** ----------------------------------
*/
extern void htremove (ht_t * ht);

/* efface le dictionnaire complet
** ------------------------------
*/
extern void htremove (ht_t * ht);

/* creation du dictionnaire
** ------------------------
*/
extern ht_t *htinit (long size);

/* recherche d'une entree dans la table
** rend un pointeur sur l'element
** htget()->KEY pointe sur la cle key
** htget()->VAL.i contient la valeur int
** htget()->VAL.f contient la valeur double
** htget()->VAL.s contient la valeur char *
** ----------------------------------------
*/
extern htelt_t *htget (ht_t * ht, char *key);

/* ajout d'une nouvelle entree dans la table
** NE VERIFIE PAS SI L'ELEMENT N'EST PAS DEJA PRESENT
** --------------------------------------------------
*/
extern htelt_t *htadd (ht_t * ht, char *key);

/* recherche d'une entree dans la table et ajout si absente
** --------------------------------------------------------
*/
htelt_t *htset (ht_t * ht, char *key);

/* recherche d'une regexp dans la table et ajout si absente
** rend un pointeur sur la liste CIRCULAIRE d'elements trouves
** NULL sinon
** --------------------------------------------------------
*/
htelt_t *htsetre (ht_t * ht, char *key);

#endif
# 96 "./ht.h"
# 5 "./exp.h" 2

extern int yydebug;
extern int yyparse(void);
extern FILE *yyin;
extern FILE *yyout;
extern ht_t * dico;
extern int verbose;
extern char * expfname ;

#endif
# 15 "./exp.h"
# 77 "expy.c" 2
#if 0 /* expanded by -frewrite-includes */
#include "ht.h"
#endif /* expanded by -frewrite-includes */
# 78 "expy.c"
#if 0 /* expanded by -frewrite-includes */
#include "expy.h"
#endif /* expanded by -frewrite-includes */
# 1 "./expy.h" 1

/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     PP = 259,
     MM = 260,
     MAX = 261,
     MIN = 262,
     SUP = 263,
     INF = 264,
     SORT = 265,
     RSORT = 266,
     MESS = 267,
     DEF = 268,
     NDEF = 269,
     NUMBER = 270,
     IDENT = 271,
     REGEX = 272
   };
#endif
# 59 "./expy.h"
/* Tokens.  */
#define IF 258
#define PP 259
#define MM 260
#define MAX 261
#define MIN 262
#define SUP 263
#define INF 264
#define SORT 265
#define RSORT 266
#define MESS 267
#define DEF 268
#define NDEF 269
#define NUMBER 270
#define IDENT 271
#define REGEX 272




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 96 "expy.y"

  htelt_t * e;
  double    f;



/* Line 1676 of yacc.c  */
#line 93 "expy.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif
# 98 "./expy.h"

extern YYSTYPE yylval;


# 79 "expy.c" 2

#define VERBOSE        (int)((htget(dico, "verbose")->VAL.f+EPSILON))
#define EPSILON        0.00001
#define anint(x)       floor((x) + 0.5) 
#define test_init(i)   if (((i)->TYPE==0) && ((pcond==0) || (cond[pcond]>0.))) {\
                         printf(" %-3d %s : <%s> undefined\n", lineno, expfname, (i)->KEY);\
                         exit (1);}\
                       (i)->USED = 1
#define pa(v,e) if (VERBOSE>2) printf("%7.3f -> %s\n",e,v->KEY)
#define pi(e)   if (VERBOSE>2) printf("%7.3f <- %s\n",e->VAL.f,e->KEY)
#define pe(s,n) if (VERBOSE>2) printf("%7.3f %s\n",n,s)
#define PCONDMAX 16 /* profondeur de la pile de conditions */

int lineno=1;
char * expfname;
ht_t * dico;

static int pcond=0;
static double cond[PCONDMAX]; /* pile de conditions : +1:vrai, -1:faux */
static char * string_fmt = "%-65s";
static char * float_fmt = "%7.3f";
static char * integer_fmt = "%4d";
static htelt_t * ele;

double limit (int fun, htelt_t * args)
{
  htelt_t *ele;
  double res;
  for (ele = args; ele && ele->TYPE == 0; ele = ele->NEXT);
  if (ele == NULL)
  {  
    printf(" %-3d %s : none variable defined\n", lineno, expfname);\
    exit (1);
  }
  res = ele->VAL.f;
  for (; ele; ele = ele->NEXT)
    if ((ele->TYPE != 0) && (((fun == MAX) && (res < ele->VAL.f)) || ((fun == MIN) && (res > ele->VAL.f))))
      res = ele->VAL.f;
  eltremove (args);
  return res;
}

htelt_t *bsort (int sens, htelt_t * args)
{
  htelt_t *ele;
  int bubble = 1;
  if (args->NEXT) /* au moins de 2 elements dans la liste */
    while (bubble)
    {
      bubble = 0;
      for (ele = args; ele->NEXT; ele = ele->NEXT)
        if (((sens == SORT) && (((ele->VAL.e)->VAL.f) > (((ele->NEXT)->VAL.e)->VAL.f)))
        || ((sens == RSORT) && (((ele->VAL.e)->VAL.f) < (((ele->NEXT)->VAL.e)->VAL.f)))
        || ((sens == MESS) && (strcmp((ele->VAL.e)->KEY,((ele->NEXT)->VAL.e)->KEY)>0)))
        {
          htelt_t *tmp = ele->VAL.e;
          ele->VAL.e = (ele->NEXT)->VAL.e;
          (ele->NEXT)->VAL.e = tmp;
          bubble = 1;
        }
    }    
  return args;
}

htelt_t *mess (int type, char *fmt, htelt_t * args)
{
  htelt_t *ele;
  if (VERBOSE)
  {
    for (ele = args; ele; ele = ele->NEXT)
    {
      if ((type == MESS) || ((ele->VAL.e)->TYPE == HT_FLOAT))
      {
        printf (string_fmt, (ele->VAL.e)->KEY);
        if ((ele->VAL.e)->TYPE == HT_FLOAT)
        {
          printf (" = ");
          printf (fmt, (ele->VAL.e)->VAL.f);
        }
        printf ("\n");
      }
    }
  }
  eltremove (args);
}



/* Line 189 of yacc.c  */
#line 169 "expy.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
# 174 "expy.c"

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# 180 "expy.c"
# define YYERROR_VERBOSE 0
#endif
# 182 "expy.c"

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif
# 187 "expy.c"


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     PP = 259,
     MM = 260,
     MAX = 261,
     MIN = 262,
     SUP = 263,
     INF = 264,
     SORT = 265,
     RSORT = 266,
     MESS = 267,
     DEF = 268,
     NDEF = 269,
     NUMBER = 270,
     IDENT = 271,
     REGEX = 272
   };
#endif
# 212 "expy.c"
/* Tokens.  */
#define IF 258
#define PP 259
#define MM 260
#define MAX 261
#define MIN 262
#define SUP 263
#define INF 264
#define SORT 265
#define RSORT 266
#define MESS 267
#define DEF 268
#define NDEF 269
#define NUMBER 270
#define IDENT 271
#define REGEX 272




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 96 "expy.y"

  htelt_t * e;
  double    f;



/* Line 214 of yacc.c  */
#line 246 "expy.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif
# 251 "expy.c"


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 258 "expy.c"

#ifdef short
# undef short
#endif
# 262 "expy.c"

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
# 266 "expy.c"
typedef unsigned char yytype_uint8;
#endif
# 268 "expy.c"

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
# 273 "expy.c"
typedef signed char yytype_int8;
#else
# 275 "expy.c"
typedef short int yytype_int8;
#endif
# 277 "expy.c"

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
# 281 "expy.c"
typedef unsigned short int yytype_uint16;
#endif
# 283 "expy.c"

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
# 287 "expy.c"
typedef short int yytype_int16;
#endif
# 289 "expy.c"

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
# 294 "expy.c"
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
# 297 "expy.c"
#if 0 /* expanded by -frewrite-includes */
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#endif /* expanded by -frewrite-includes */
# 298 "expy.c"
#  define YYSIZE_T size_t
# else
# 300 "expy.c"
#  define YYSIZE_T unsigned int
# endif
# 302 "expy.c"
#endif
# 303 "expy.c"

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#if 0 /* expanded by -frewrite-includes */
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#endif /* expanded by -frewrite-includes */
# 310 "expy.c"
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# 312 "expy.c"
# endif
# 313 "expy.c"
# ifndef YY_
#  define YY_(msgid) msgid
# endif
# 316 "expy.c"
#endif
# 317 "expy.c"

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# 322 "expy.c"
# define YYUSE(e) /* empty */
#endif
# 324 "expy.c"

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
# 329 "expy.c"
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
# 334 "expy.c"
static int
YYID (yyi)
    int yyi;
#endif
# 338 "expy.c"
{
  return yyi;
}
#endif
# 342 "expy.c"

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
# 352 "expy.c"
#if 0 /* expanded by -frewrite-includes */
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#endif /* expanded by -frewrite-includes */
# 353 "expy.c"
#   elif defined _AIX
# 354 "expy.c"
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
# 356 "expy.c"
#if 0 /* expanded by -frewrite-includes */
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#endif /* expanded by -frewrite-includes */
# 357 "expy.c"
#    define alloca _alloca
#   else
# 359 "expy.c"
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#if 0 /* expanded by -frewrite-includes */
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#endif /* expanded by -frewrite-includes */
# 363 "expy.c"
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
# 366 "expy.c"
#    endif
# 367 "expy.c"
#   endif
# 368 "expy.c"
#  endif
# 369 "expy.c"
# endif
# 370 "expy.c"

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# 381 "expy.c"
# else
# 382 "expy.c"
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
# 387 "expy.c"
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#if 0 /* expanded by -frewrite-includes */
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#endif /* expanded by -frewrite-includes */
# 391 "expy.c"
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
# 394 "expy.c"
#  endif
# 395 "expy.c"
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
# 401 "expy.c"
#  endif
# 402 "expy.c"
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
# 408 "expy.c"
#  endif
# 409 "expy.c"
# endif
# 410 "expy.c"
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */
# 411 "expy.c"


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
# 440 "expy.c"
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# 449 "expy.c"
# endif
# 450 "expy.c"

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif
# 468 "expy.c"

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  26
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   254

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  8
/* YYNRULES -- Number of rules.  */
#define YYNRULES  46
/* YYNRULES -- Number of states.  */
#define YYNSTATES  121

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   272

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,    23,    21,    32,    22,     2,    24,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    31,
      19,    18,    20,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    25,     2,    26,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,    28,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,    12,    17,    21,    25,    32,
      39,    46,    53,    60,    67,    71,    75,    78,    82,    86,
      88,    90,    93,    96,   100,   104,   108,   112,   116,   120,
     124,   127,   134,   141,   148,   153,   158,   163,   168,   170,
     172,   176,   178,   182,   184,   188,   190
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      34,     0,    -1,    -1,    35,    34,    -1,    25,    36,    37,
      26,    -1,    27,    36,    37,    28,    -1,    25,    37,    26,
      -1,    27,    37,    28,    -1,    25,    10,    29,    39,    30,
      26,    -1,    27,    10,    29,    39,    30,    28,    -1,    25,
      11,    29,    39,    30,    26,    -1,    27,    11,    29,    39,
      30,    28,    -1,    25,    12,    29,    39,    30,    26,    -1,
      27,    12,    29,    39,    30,    28,    -1,    25,    36,    26,
      -1,    27,    36,    28,    -1,    37,    31,    -1,    36,    37,
      31,    -1,    16,    18,    37,    -1,    15,    -1,    16,    -1,
      16,     4,    -1,    16,     5,    -1,    37,    19,    37,    -1,
      37,    20,    37,    -1,    37,    21,    37,    -1,    37,    22,
      37,    -1,    37,    23,    37,    -1,    37,    24,    37,    -1,
      29,    37,    30,    -1,    22,    37,    -1,     3,    29,    38,
      32,    40,    30,    -1,     8,    29,    37,    32,    37,    30,
      -1,     9,    29,    37,    32,    37,    30,    -1,     6,    29,
      40,    30,    -1,     7,    29,    40,    30,    -1,    13,    29,
      16,    30,    -1,    14,    29,    16,    30,    -1,    37,    -1,
      16,    -1,    16,    32,    39,    -1,    17,    -1,    17,    32,
      39,    -1,    37,    -1,    37,    32,    40,    -1,    17,    -1,
      17,    32,    40,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   110,   110,   111,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   126,   127,   129,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   151,   152,   153,   154,   155,   156,   158,   164,
     165,   166,   167,   169,   170,   171,   179
};
#endif
# 570 "expy.c"

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "PP", "MM", "MAX", "MIN", "SUP",
  "INF", "SORT", "RSORT", "MESS", "DEF", "NDEF", "NUMBER", "IDENT",
  "REGEX", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'['", "']'",
  "'{'", "'}'", "'('", "')'", "';'", "','", "$accept", "blocs", "bloc",
  "exps", "exp", "cond", "idents", "args", 0
};
#endif
# 583 "expy.c"

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    61,    60,
      62,    43,    45,    42,    47,    91,    93,   123,   125,    40,
      41,    59,    44
};
# endif
# 595 "expy.c"

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    34,    35,    35,    35,    35,    35,    35,
      35,    35,    35,    35,    35,    35,    36,    36,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    38,    39,
      39,    39,    39,    40,    40,    40,    40
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     4,     4,     3,     3,     6,     6,
       6,     6,     6,     6,     3,     3,     2,     3,     3,     1,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       2,     6,     6,     6,     4,     4,     4,     4,     1,     1,
       3,     1,     3,     1,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    22,
       0,    30,     0,    14,     0,     0,     0,     0,     0,     0,
       0,     6,    16,     0,     0,     0,    15,     0,     7,    38,
       0,    45,    43,     0,     0,     0,     0,    39,    41,     0,
       0,     0,     0,     0,    18,    29,     4,    17,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     5,     0,     0,
       0,    34,    35,     0,     0,     0,     0,     0,     0,     0,
      36,    37,     0,     0,     0,     0,    46,    44,     0,     0,
      40,    42,     8,    10,    12,     9,    11,    13,    31,    32,
      33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,    19,    62,    60,    69,    63
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -30
static const yytype_int16 yypact[] =
{
     -17,    62,    91,     7,   -17,   -18,     0,     9,    11,    12,
      13,    14,    22,    29,    34,   -30,    32,   142,   142,     6,
      33,    50,    51,    52,   108,   167,   -30,   -30,   142,   125,
     125,   142,   142,   -13,   -13,   -13,    67,    79,   -30,   -30,
     142,    10,    66,   -30,   180,   142,   142,   142,   142,   142,
     142,   -30,   -30,   -13,   -13,   -13,   -30,   193,   -30,   230,
      76,    77,   146,    80,    82,   153,   160,    86,    87,    95,
      96,    97,    99,   105,   230,   -30,   -30,   -30,   230,   230,
      10,    10,   -30,   -30,   113,   114,   116,   -30,   125,   125,
     125,   -30,   -30,   142,   142,   -13,   -13,    56,   126,   127,
     -30,   -30,   131,   132,   133,   163,   -30,   -30,   206,   218,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -30,   158,   -30,   161,    -1,   -30,   -29,   -28
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      20,    25,    64,    67,    68,    70,    71,    26,     1,     5,
       2,    28,     6,     7,     8,     9,    41,    42,    44,    13,
      14,    15,    16,    57,    84,    85,    86,    59,    17,    29,
      65,    66,    43,    49,    50,    18,    38,    39,    30,    74,
      31,    32,    33,    34,    78,    79,    80,    81,    82,    83,
      40,    35,    45,    46,    47,    48,    49,    50,    36,    51,
     105,   106,   107,    37,    52,     5,   110,   111,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    53,
      54,    55,   112,    72,    17,    45,    46,    47,    48,    49,
      50,    18,   108,   109,     5,    73,    75,     6,     7,     8,
       9,    21,    22,    23,    13,    14,    15,    16,    88,    89,
      91,     5,    92,    17,     6,     7,     8,     9,    95,    96,
      18,    13,    14,    15,    16,    97,    98,    99,     5,   100,
      17,     6,     7,     8,     9,   101,    56,    18,    13,    14,
      15,    16,    61,   102,   103,     5,   104,    17,     6,     7,
       8,     9,   113,   114,    18,    13,    14,    15,    16,   115,
     116,   117,    27,    24,    17,    45,    46,    47,    48,    49,
      50,    18,    45,    46,    47,    48,    49,    50,    90,    45,
      46,    47,    48,    49,    50,    93,    45,    46,    47,    48,
      49,    50,    94,   118,     0,    58,     0,     0,    52,    45,
      46,    47,    48,    49,    50,     0,    76,     0,     0,     0,
       0,    77,    45,    46,    47,    48,    49,    50,     0,     0,
       0,    87,     0,     0,    77,    45,    46,    47,    48,    49,
      50,     0,     0,     0,     0,     0,   119,    45,    46,    47,
      48,    49,    50,     0,     0,     0,     0,     0,   120,    45,
      46,    47,    48,    49,    50
};

static const yytype_int8 yycheck[] =
{
       1,     2,    30,    16,    17,    34,    35,     0,    25,     3,
      27,    29,     6,     7,     8,     9,    17,    18,    19,    13,
      14,    15,    16,    24,    53,    54,    55,    28,    22,    29,
      31,    32,    26,    23,    24,    29,     4,     5,    29,    40,
      29,    29,    29,    29,    45,    46,    47,    48,    49,    50,
      18,    29,    19,    20,    21,    22,    23,    24,    29,    26,
      88,    89,    90,    29,    31,     3,    95,    96,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    29,
      29,    29,    26,    16,    22,    19,    20,    21,    22,    23,
      24,    29,    93,    94,     3,    16,    30,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    32,    32,
      30,     3,    30,    22,     6,     7,     8,     9,    32,    32,
      29,    13,    14,    15,    16,    30,    30,    30,     3,    30,
      22,     6,     7,     8,     9,    30,    28,    29,    13,    14,
      15,    16,    17,    30,    30,     3,    30,    22,     6,     7,
       8,     9,    26,    26,    29,    13,    14,    15,    16,    28,
      28,    28,     4,     2,    22,    19,    20,    21,    22,    23,
      24,    29,    19,    20,    21,    22,    23,    24,    32,    19,
      20,    21,    22,    23,    24,    32,    19,    20,    21,    22,
      23,    24,    32,    30,    -1,    28,    -1,    -1,    31,    19,
      20,    21,    22,    23,    24,    -1,    26,    -1,    -1,    -1,
      -1,    31,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    28,    -1,    -1,    31,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    19,
      20,    21,    22,    23,    24
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    27,    34,    35,     3,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    22,    29,    36,
      37,    10,    11,    12,    36,    37,     0,    34,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,     4,     5,
      18,    37,    37,    26,    37,    19,    20,    21,    22,    23,
      24,    26,    31,    29,    29,    29,    28,    37,    28,    37,
      38,    17,    37,    40,    40,    37,    37,    16,    17,    39,
      39,    39,    16,    16,    37,    30,    26,    31,    37,    37,
      37,    37,    37,    37,    39,    39,    39,    28,    32,    32,
      32,    30,    30,    32,    32,    32,    32,    30,    30,    30,
      30,    30,    30,    30,    30,    40,    40,    40,    37,    37,
      39,    39,    26,    26,    26,    28,    28,    28,    30,    30,
      30
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif
# 816 "expy.c"


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
# 829 "expy.c"
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
# 831 "expy.c"
#endif
# 832 "expy.c"


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# 839 "expy.c"
# define YYLEX yylex ()
#endif
# 841 "expy.c"

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#if 0 /* expanded by -frewrite-includes */
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#endif /* expanded by -frewrite-includes */
# 847 "expy.c"
#  define YYFPRINTF fprintf
# endif
# 849 "expy.c"

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
# 878 "expy.c"
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
# 884 "expy.c"
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
# 891 "expy.c"
  YYUSE (yyoutput);
# endif
# 893 "expy.c"
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
# 910 "expy.c"
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
# 916 "expy.c"
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
# 936 "expy.c"
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
# 941 "expy.c"
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
# 967 "expy.c"
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
# 972 "expy.c"
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# 999 "expy.c"
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */
# 1004 "expy.c"


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif
# 1010 "expy.c"

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif
# 1021 "expy.c"



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
# 1030 "expy.c"
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
# 1036 "expy.c"
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
# 1040 "expy.c"
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# 1047 "expy.c"
# endif
# 1048 "expy.c"

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
# 1053 "expy.c"
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
# 1060 "expy.c"
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
# 1065 "expy.c"
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# 1075 "expy.c"
# endif
# 1076 "expy.c"

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif
# 1124 "expy.c"

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
# 1159 "expy.c"
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */
# 1233 "expy.c"


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
# 1245 "expy.c"
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
# 1251 "expy.c"
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
# 1271 "expy.c"
int yyparse ();
#endif
# 1273 "expy.c"
#else /* ! YYPARSE_PARAM */
# 1274 "expy.c"
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
# 1277 "expy.c"
int yyparse ();
#endif
# 1279 "expy.c"
#endif /* ! YYPARSE_PARAM */
# 1280 "expy.c"


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
# 1303 "expy.c"
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
# 1307 "expy.c"
#else /* ! YYPARSE_PARAM */
# 1308 "expy.c"
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
# 1313 "expy.c"
int
yyparse ()

#endif
# 1317 "expy.c"
#endif
# 1318 "expy.c"
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif
# 1358 "expy.c"

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# 1423 "expy.c"
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
# 1426 "expy.c"
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
# 1446 "expy.c"
#endif /* no yyoverflow */
# 1447 "expy.c"

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 110 "expy.y"
    { if (VERBOSE>1) htstat(dico); return 1;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 113 "expy.y"
    { fprintf (yyout, float_fmt, (yyvsp[(3) - (4)].f));}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 114 "expy.y"
    { fprintf (yyout, integer_fmt, (int)(yyvsp[(3) - (4)].f));}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 115 "expy.y"
    { fprintf (yyout, float_fmt, (yyvsp[(2) - (3)].f));}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 116 "expy.y"
    { fprintf (yyout, integer_fmt, (int)(yyvsp[(2) - (3)].f));}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 117 "expy.y"
    { mess(SORT,float_fmt, bsort (SORT, (yyvsp[(4) - (6)].e)));}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 118 "expy.y"
    { mess(SORT,integer_fmt, bsort (SORT, (yyvsp[(4) - (6)].e)));}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 119 "expy.y"
    { mess(SORT,float_fmt, bsort (RSORT, (yyvsp[(4) - (6)].e)));}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 120 "expy.y"
    { mess(SORT,integer_fmt, bsort (RSORT, (yyvsp[(4) - (6)].e)));}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 121 "expy.y"
    { mess(MESS,float_fmt, bsort (MESS, (yyvsp[(4) - (6)].e)));}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 122 "expy.y"
    { mess(MESS,integer_fmt, bsort (MESS, (yyvsp[(4) - (6)].e)));}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 123 "expy.y"
    { }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 124 "expy.y"
    { }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 126 "expy.y"
    { }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 127 "expy.y"
    { }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 129 "expy.y"
    { if ((pcond==0) || (cond[pcond]>0.)) {
                                          (yyvsp[(1) - (3)].e)->VAL.f=(yyvsp[(3) - (3)].f); (yyvsp[(1) - (3)].e)->TYPE=HT_FLOAT; 
                                          (yyvsp[(1) - (3)].e)->FNAME=expfname; (yyvsp[(1) - (3)].e)->FLINE=lineno; 
                                          (yyval.f)=(yyvsp[(3) - (3)].f); pa((yyvsp[(1) - (3)].e),(yyval.f));
                                        }
                                      }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 135 "expy.y"
    { (yyval.f) = (yyvsp[(1) - (1)].f);  pe(" ",(yyval.f));}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 136 "expy.y"
    { test_init((yyvsp[(1) - (1)].e)); (yyval.f) = (yyvsp[(1) - (1)].e)->VAL.f; pi((yyvsp[(1) - (1)].e));}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 137 "expy.y"
    { test_init((yyvsp[(1) - (2)].e)); (yyval.f) = (yyvsp[(1) - (2)].e)->VAL.f; (yyvsp[(1) - (2)].e)->VAL.f += 1.0;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 138 "expy.y"
    { test_init((yyvsp[(1) - (2)].e)); (yyval.f) = (yyvsp[(1) - (2)].e)->VAL.f; (yyvsp[(1) - (2)].e)->VAL.f -= 1.0;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 139 "expy.y"
    { (yyval.f) = ((yyvsp[(1) - (3)].f) < (yyvsp[(3) - (3)].f)) ? 1. : -1.; pe(" < ",(yyval.f));}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 140 "expy.y"
    { (yyval.f) = ((yyvsp[(1) - (3)].f) > (yyvsp[(3) - (3)].f)) ? 1. : -1.; pe(" > ",(yyval.f));}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 141 "expy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) + (yyvsp[(3) - (3)].f); pe(" + ",(yyval.f));}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 142 "expy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) - (yyvsp[(3) - (3)].f); pe(" - ",(yyval.f));}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 143 "expy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) * (yyvsp[(3) - (3)].f); pe(" * ",(yyval.f));}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 144 "expy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) / (yyvsp[(3) - (3)].f); pe(" / ",(yyval.f));}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 145 "expy.y"
    { (yyval.f) = (yyvsp[(2) - (3)].f);}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 146 "expy.y"
    { (yyval.f) = -(yyvsp[(2) - (2)].f); pe(" - ",(yyval.f));}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 147 "expy.y"
    { for (ele = (yyvsp[(5) - (6)].e); ele->NEXT; ele = ele->NEXT);
                                        (yyval.f) = ele->VAL.f;
                                        pcond--; eltremove ((yyvsp[(5) - (6)].e)); 
                                      }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 151 "expy.y"
    { (yyval.f) = anint(((yyvsp[(5) - (6)].f)+((yyvsp[(3) - (6)].f)/2)-EPSILON)/(yyvsp[(3) - (6)].f))*(yyvsp[(3) - (6)].f); pe(" sup ",(yyval.f));}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 152 "expy.y"
    { (yyval.f) = ((int)(floor(((yyvsp[(5) - (6)].f)+EPSILON)/(yyvsp[(3) - (6)].f))))*(yyvsp[(3) - (6)].f); pe(" inf ",(yyval.f));}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 153 "expy.y"
    { (yyval.f) = limit (MAX, (yyvsp[(3) - (4)].e)); pe(" max ",(yyval.f));}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 154 "expy.y"
    { (yyval.f) = limit (MIN, (yyvsp[(3) - (4)].e)); pe(" min ",(yyval.f));}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 155 "expy.y"
    { (yyval.f) = ((yyvsp[(3) - (4)].e)->TYPE==0) ? -1. : +1.; pe((yyvsp[(3) - (4)].e),(yyval.f));}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 156 "expy.y"
    { (yyval.f) = ((yyvsp[(3) - (4)].e)->TYPE==0) ? +1. : -1.; pe((yyvsp[(3) - (4)].e),(yyval.f));}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 158 "expy.y"
    { if (pcond < PCONDMAX) 
                                          cond[++pcond] = (yyvsp[(1) - (1)].f); 
                                        else
                                          yyerror ("too much conditions");
                                      }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 164 "expy.y"
    { (yyval.e) = eltadd (NULL,NULL); (yyval.e)->VAL.e=(yyvsp[(1) - (1)].e);}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 165 "expy.y"
    { (yyval.e) = eltadd ((yyvsp[(3) - (3)].e),NULL); (yyval.e)->VAL.e=(yyvsp[(1) - (3)].e);}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 166 "expy.y"
    { (yyval.e) = (yyvsp[(1) - (1)].e)->NEXT; (yyvsp[(1) - (1)].e)->NEXT=NULL;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 167 "expy.y"
    { (yyval.e) = (yyvsp[(1) - (3)].e)->NEXT; (yyvsp[(1) - (3)].e)->NEXT=(yyvsp[(3) - (3)].e);}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 169 "expy.y"
    { (yyval.e) = eltadd (NULL,NULL); (yyval.e)->VAL.f=(yyvsp[(1) - (1)].f); (yyval.e)->TYPE=HT_FLOAT;pe(" , ",(yyvsp[(1) - (1)].f));}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 170 "expy.y"
    { (yyval.e) = eltadd ((yyvsp[(3) - (3)].e),NULL); (yyval.e)->VAL.f=(yyvsp[(1) - (3)].f); (yyval.e)->TYPE=HT_FLOAT;pe(" , ",(yyvsp[(3) - (3)].e));}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 171 "expy.y"
    { (yyval.e) = (yyvsp[(1) - (1)].e)->NEXT; (yyvsp[(1) - (1)].e)->NEXT=NULL; 
                                        for (ele = (yyval.e); ele; ele = ele->NEXT)
                                        {  
                                          ele->VAL.e->USED = 1;
                                          ele->TYPE = (ele->VAL.e)->TYPE;
                                          ele->VAL.f = (ele->VAL.e)->VAL.f;
                                        }  
                                      }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 179 "expy.y"
    { (yyval.e) = (yyvsp[(1) - (3)].e)->NEXT; (yyvsp[(1) - (3)].e)->NEXT=(yyvsp[(3) - (3)].e);   
                                        for (ele = (yyvsp[(1) - (3)].e); ele; ele = ele->NEXT)
                                        {
                                          ele->VAL.e->USED = 1;
                                          ele->TYPE = (ele->VAL.e)->TYPE;
                                          ele->VAL.f = ele->VAL.e->VAL.f;
                                        }  
                                      }
    break;



/* Line 1455 of yacc.c  */
#line 1898 "expy.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# 1934 "expy.c"
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
# 1966 "expy.c"
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif
# 2079 "expy.c"

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
# 2098 "expy.c"
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
# 2102 "expy.c"
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 188 "expy.y"

int yyerror(char *s)
{
  printf(" %-3d %s : %s\n", lineno, expfname, s);
  exit (1);
}

