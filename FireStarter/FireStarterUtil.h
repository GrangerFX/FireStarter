#pragma once

#include <time.h>
#include <string>
#include <cstdarg>

class SimpleTimer {
public:
    time_t m_second;
    long m_nanosecond;

    inline void Start(void)
    {
        timespec time;
        timespec_get(&time, TIME_UTC);
        m_second = time.tv_sec;
        m_nanosecond = time.tv_nsec;
    } // Start

    inline double Duration(void)
    {
        timespec time;
        timespec_get(&time, TIME_UTC);
        return (double)(time.tv_sec - m_second) + (double)(time.tv_nsec - m_nanosecond) * 0.000000001;
    } // Duration

    inline SimpleTimer(void)
    {
        Start();
    } // Start
}; // SimpleTimer

typedef struct FrameBuffer {
    unsigned char* hostBase;		// Pointer to the alligned native pixel format buffer in host memory
    unsigned char* deviceBase;	    // Pointer to the alligned native pixel format buffer in device memory
    long rowbytes;					// Number of bytes per row
    unsigned long width;			// Number of columns
    unsigned long height;			// Number of rows
} FrameBuffer;

inline std::string Format(const char* format, ...)
{
    char str[1024];
    va_list argptr;
    va_start(argptr, format);
    int ret = vsnprintf(str, sizeof(str), format, argptr);
    va_end(argptr);
    return std::string(str);
} // Format

inline std::string Format(const std::string formatString, ...)
{
    return Format(formatString.c_str());
} // Format

