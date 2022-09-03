#pragma once
#include <stdarg.h>
//#include <stdio.h>
#include <iostream>

inline std::string Format(const char* format, ...)
{
#if 1
    // initialize use of the variable argument array
    va_list vaArgs;
    va_start(vaArgs, format);

    // reliably acquire the size from a copy of
    // the variable argument array
    // and a functionally reliable call
    // to mock the formatting
    va_list vaCopy;
    va_copy(vaCopy, vaArgs);
    const int iLen = std::vsnprintf(NULL, 0, format, vaCopy);
    va_end(vaCopy);

    // return a formatted string without
    // risking memory mismanagement
    // and without assuming any compiler
    // or platform specific behavior
    std::vector<char> zc(iLen + 1);
    std::vsnprintf(zc.data(), zc.size(), format, vaArgs);
    va_end(vaArgs);
    return zc.data();
#else
    char str[1024];
    va_list argptr;
    va_start(argptr, format);
    int ret = vsnprintf(str, sizeof(str), format, argptr);
    va_end(argptr);
    return std::string(str);
#endif
} // Format

inline std::string Format(const std::string formatString, ...)
{
    return Format(formatString.c_str());
} // Format
