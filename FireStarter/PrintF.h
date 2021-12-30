#pragma once
#include <stdarg.h>
#include <stdio.h>
#include <windows.h>
#include <iostream>

#define printf printf2

inline int printf2(const char *format, ...)
{
    char str[65536];

    va_list argptr;
    va_start(argptr, format);
    int ret = vsnprintf(str, sizeof(str), format, argptr);
    va_end(argptr);

    OutputDebugStringA(str);
    std::cerr << str;
    return ret;
} // printf2
