#pragma once
#include <stdarg.h>
#include <stdio.h>
#include <windows.h>
#include <string>

#define printf printf2

inline int printf2(const char *format, ...)
{
	char str[1024];

	va_list argptr;
	va_start(argptr, format);
	int ret = vsnprintf(str, sizeof(str), format, argptr);
	va_end(argptr);

	OutputDebugStringA(str);

	fprintf(stdout, str);

	return ret;
} // printf2

inline int printf2(const std::string str)
{
	return printf2("%s", str.c_str());
} // printf2(std::string)
