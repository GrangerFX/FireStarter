#pragma once

#include <time.h>
#include <string>
#include <cstdarg>
#include <sstream>
#include <iomanip>
#include "CUDAErrors.h"

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

inline std::string CurrentDate(void)
{
    time_t currentTime = time(nullptr);
    tm localTime;
    std::stringstream sstream;
    localtime_s(&localTime, &currentTime);
    sstream << std::put_time(&localTime, "%c %Z");
    return sstream.str();
} // CurrentDate

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

    inline double Duration(void) const
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

class FrameBuffer {
public:
    unsigned char* m_hostBase;		// Pointer to the alligned native pixel format buffer in host memory
    unsigned char* m_deviceBase;	// Pointer to the alligned native pixel format buffer in device memory
    unsigned long m_width;			// Number of columns
    unsigned long m_height;			// Number of rows
    long m_rowbytes;			    // Number of bytes per row
    size_t m_size;                  // The total size of the buffer in bytes

    inline void Erase(void)
    {
        if (m_size)
            cudaMemset(m_deviceBase, 0, m_width * m_height * sizeof(uchar4));
    } // EraseFrameBuffer

    inline const unsigned char* GetDevice(void)
    {
        if (m_size)
            checkCUDAErrors(cudaMemcpy(m_hostBase, m_deviceBase, m_size, cudaMemcpyDeviceToHost));
        return m_hostBase;
    } // GetFrameBuffer

    inline const unsigned char* GetHost(void)
    {
         return m_hostBase;
    } // GetFrameBuffer

    inline void Resize(unsigned long width, unsigned long height)
    {
        if ((m_width != width) || (m_height != height)) {
            if (m_hostBase) {
                checkCUDAErrors(cudaFreeHost(m_hostBase));
                m_hostBase = nullptr;
            }
            if (m_deviceBase) {
                checkCUDAErrors(cudaFree(m_deviceBase));
                m_deviceBase = nullptr;
            }
            m_width = width;
            m_height = height;
            m_rowbytes = width * sizeof(uchar4);
            m_size = m_width * m_height * sizeof(uchar4);

            if (m_size) {
                checkCUDAErrors(cudaMalloc(&m_deviceBase, m_size));
                checkCUDAErrors(cudaMallocHost(&m_hostBase, m_size));
                memset(m_hostBase, 0, m_width * m_height * sizeof(uchar4));
            }
        }
    } // Resize

    inline FrameBuffer(void)
    {
        m_hostBase = nullptr;
        m_deviceBase = nullptr;
        m_width = 0;
        m_height = 0;
        m_rowbytes = 0;
        m_size = 0;
    } // FrameBuffer

    inline ~FrameBuffer(void)
    {
        Resize(0, 0);
    } // ~FrameBuffer
}; // class FrameBuffer
