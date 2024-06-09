#pragma once
#include <stdarg.h>
#include <windows.h>
#include <iostream>

#define printf printf2

inline int printf2(const char *format, ...)
{
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
    int ret = std::vsnprintf(zc.data(), zc.size(), format, vaArgs);
    va_end(vaArgs);

    OutputDebugStringA(zc.data());
    std::cerr << zc.data();
    return ret;
} // printf2

// Test the input but don't output anything.
inline int noprintf(const char* format, ...)
{
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
    int ret = std::vsnprintf(zc.data(), zc.size(), format, vaArgs);
    va_end(vaArgs);
    return ret;
} // noprintf
