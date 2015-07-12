/* 
Copyright (c) 2015, by Wenfeng Liu, wenfengenator@gmail.com

Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */

#pragma once

#define EM_VERSION_MAJOR	"0"
#define EM_VERSION_MINOR	"1"
#define EM_VERSION_NUM		021
#define EM_VERSION_RELEASE	"2"

#define EM_VERSION	"Em " EM_VERSION_MAJOR "." EM_VERSION_MINOR
#define EM_RELEASE	EM_VERSION "." EM_VERSION_RELEASE
#define EM_COPYRIGHT	EM_RELEASE "  Copyright (C) 2015, by Wenfeng Liu"
#define EM_AUTHORS	"Wenfeng Liu"

#ifndef NULL
	#define NULL 0
#endif
 
#define PI 3.14159265
#define RADIANS	57.2957795

#define TODEGREES 57.2957795
#define TORADIANS 0.0174532925


#ifndef WIN32
#define DLL_API
#else
#ifdef STATIC_LINKED_LIBRARY
#	define DLL_API
#else
#	ifdef WIN32
#		ifdef DYNAMIC_LINKED_LIBRARY
#			define DLL_API __declspec(dllexport)
#		else
#			define DLL_API  __declspec(dllimport)
#		endif
#	endif
#endif
#endif



#ifndef MIN
	#define MIN(a, b)  (((a) < (b)) ? (a) : (b))
#endif
#ifndef MAX
	#define MAX(a, b)  (((a) > (b)) ? (a) : (b))
#endif


class EmBase {};