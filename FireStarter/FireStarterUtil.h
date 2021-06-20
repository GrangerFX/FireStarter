#pragma once

#include <time.h>
#include <string>
#include <windows.h>

// 32 bit cryptographic hash function.
// From Thomas Wang's paper:
// http://www.concentric.net/~Ttwang/tech/inthash.htm
inline unsigned int Hash(unsigned int hash)
{
    hash = (hash ^ 61) ^ (hash >> 16);
    hash += hash << 3;
    hash ^= hash >> 4;
    hash *= 0x27d4eb2d; // a prime or an odd constant
    hash ^= hash >> 15;
    return hash;
} // Hash

#define RANDOMHASH(seed) Hash(seed)
#define RANDOMSEED(seed) RANDOMHASH(seed++)
#define RANDOMBITS(seed, bits) (RANDOMSEED(seed) >> (32 - (bits)))          // create a random number with a specific number of bits
#define RANDOMNUM(seed) (RANDOMSEED(seed) * 2.328306436E-10f)               // yields a number between 0 and <1
#define RANDOMFACTOR(seed) ((int)(RANDOMSEED(seed)) * 4.656612873E-10f)     // yields a number between -1 and 1
#define RANDOMFACTOR2(seed) ((int)(RANDOMSEED(seed)) * 2.328306436E-10f)    // yields a number between -0.5 and 0.5

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
    unsigned char* base;			// Pointer to the alligned native pixel format buffer
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

