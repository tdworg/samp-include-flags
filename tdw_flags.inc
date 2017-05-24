/** ======================================================================== **\
	Flags

| Description:

| Version:
	1.0.0

| Dependencies:
	- n\a

| Compatible with the JIT plugin:
	Yes

| License:
	Copyright (c) 2017 Double V

	This software is provided 'as-is', without any express or implied
	warranty. In no event will the authors be held liable for any damages
	arising from the use of this software.

	Permission is granted to anyone to use this software for any purpose,
	including commercial applications, and to alter it and redistribute it
	freely, subject to the following restrictions:

	1.	The origin of this software must not be misrepresented; you must not
		claim that you wrote the original software. If you use this software
		in a product, an acknowledgement in the product documentation would be
		appreciated but is not required.
	2.	Altered source versions must be plainly marked as such, and must not be
		misrepresented as being the original software.
	3.	This notice may not be removed or altered from any source distribution.
\** ======================================================================== **/

#if !defined SHOW_WARNING
	#define SHOW_WARNING(%1) static stock const %1=0;u(%1[])
#endif

#if defined GET_FIRST_BAD_ENUM
	#undef GET_FIRST_BAD_ENUM
#endif
#if defined ENUM_NO_ITEMS
	SHOW_WARNING(WARN_ENUM_HAS_NO_ITEMS);
	#define GET_FIRST_BAD_ENUM() (ENUM_NO_ITEMS)
#else
	#define GET_FIRST_BAD_ENUM() (-1)
#endif

#if defined _inc_tdw_flags
	#undef _inc_tdw_flags
#endif

#if defined _TDW_FLAGS
	#endinput
#endif

#define _TDW_FLAGS

#define u@$ 0]);
#define __:%0$ u@(u[_:%0 u@$

#define DECLARE_FLAGS<%1>(%2) __:ENUM_CHECKER_1:ENUM_CHECKER_2:$enum ENUM_MOVER:%1(<<=1){%2,@END}{}

#define @END
#define ni@%0\32; ni@%0

#define ENUM_MOVER:%1{%2,%8}{} ENUM_MOVER_@:%1{ENUM_MM:%2=1}{%8}
#define ENUM_MOVER_@:%1{%0}{%2,%8} ENUM_MOVER_@:%1{%0,%2}{%8}

#define ENUM_MM:%2=%0}{%9} %2=%0}

#define ENUM_CHECKER_1:%8$enum%1(<<=1){,@END}{} %8$enum%1(<<=1){ENUM_DOES_NOT_ITEMS,@END}{}const ENUM_NO_ITEMS=__line
#define ENUM_CHECKER_2:%8$enum%9:%1(<<=1){%2,%3}{%0} %8$enum ENUM_DIFFER:ni@%1{%2,%3}{};enum%9:%1(<<=1){%2,%3}{%0}

#define ENUM_DIFFER:%1{%2,%3}{}; ENUM_DIFFER_@:%1{ENUM_DIFFER_END:ni@%2}{%3}(%1)
#define ENUM_DIFFER_@:%1{%0}{%2,%8} ENUM_DIFFER_@:%1{%0,ni@%2}{%8}
#define ENUM_DIFFER_END:%2}{%3}(%1) %2,ni@%1};

// Functions
#define GET_NUM_ITEMS(%1) (_:(ni@%1:ni@%1)-1)
#define IS_VALID_ENUM_FLAG(%1) (GET_NUM_ITEMS(%1)<cellbits)
