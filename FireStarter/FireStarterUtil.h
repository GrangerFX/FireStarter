#pragma once

#include <time.h>
#include <string>
#include <cstdarg>
#include <sstream>
#include <iomanip>
#include "CUDAErrors.h"
#include "SerialThread.h"
#include "SimpleTimer.h"

// Reference: https://sites.google.com/site/murmurhash/
//-----------------------------------------------------------------------------
// MurmurHash2, 64-bit versions, by Austin Appleby

// The same caveats as 32-bit MurmurHash2 apply here - beware of alignment
// and endian-ness issues if used across multiple platforms.

// 64-bit hash for 64-bit platforms
inline uint64_t MurmurHash64(const void* key, uint64_t len, uint64_t seed = 0)
{
    // Hash multiply and roll constants.
    const uint64_t m = 0xc6a4a7935bd1e995;
    const int r = 47;

    // Hash the key data 64 bits at a time.
    const uint64_t* data = (const uint64_t*)key;
    const uint64_t* end = data + (len / 8);
    uint64_t h = seed ^ (len * m);
    while (data != end) {
        uint64_t k = *data++;
        k *= m;
        k ^= k >> r;
        k *= m;

        h ^= k;
        h *= m;
    }

    // Hash the remaining 0 to 7 bytes of the key data.
    const unsigned char* data2 = (const unsigned char*)data;
    switch (len & 7) {
        case 7: h ^= uint64_t(data2[6]) << 48;
        case 6: h ^= uint64_t(data2[5]) << 40;
        case 5: h ^= uint64_t(data2[4]) << 32;
        case 4: h ^= uint64_t(data2[3]) << 24;
        case 3: h ^= uint64_t(data2[2]) << 16;
        case 2: h ^= uint64_t(data2[1]) << 8;
        case 1: h ^= uint64_t(data2[0]);
            h *= m;
    };

    // Final 64 bit hash value.
    h ^= h >> r;
    h *= m;
    h ^= h >> r;
    return h;
} // MurmurHash64

inline std::string CurrentDate(void)
{
    time_t currentTime = time(nullptr);
    tm localTime;
    std::stringstream sstream;
    localtime_s(&localTime, &currentTime);
    sstream << std::put_time(&localTime, "%c %Z");
    return sstream.str();
} // CurrentDate

inline std::string FileNameDate(time_t fileTime = 0)
{
    if (!fileTime)
        fileTime = time(nullptr);
    struct tm tm_struct;
    struct tm* tm = &tm_struct;
    errno_t err = localtime_s(tm, &fileTime);
    if (err)
        return "";
    return Format("%04d-%02d-%02d_%02d-%02d-%02d", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, tm->tm_hour, tm->tm_min, tm->tm_sec);
} // FileNameDate

