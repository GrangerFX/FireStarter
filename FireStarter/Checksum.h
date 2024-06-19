#pragma once

// Reference: https://sites.google.com/site/murmurhash/
//-----------------------------------------------------------------------------
// MurmurHash2, 64-bit versions, by Austin Appleby

// The same caveats as 32-bit MurmurHash2 apply here - beware of alignment
// and endian-ness issues if used across multiple platforms.

// 64-bit hash for 64-bit platforms

#define HASH_SEED 4204351830271096883

inline uint64_t MurmurHash64(const void* key, uint64_t len, uint64_t seed = HASH_SEED)
{
    const uint64_t m = 0xc6a4a7935bd1e995;
    const int r = 47;

    uint64_t h = seed ^ (len * m);

    const uint64_t* data = (const uint64_t*)key;
    const uint64_t* end = data + (len / 8);

    while (data != end) {
        uint64_t k = *data++;

        k *= m;
        k ^= k >> r;
        k *= m;

        h ^= k;
        h *= m;
    }

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

    h ^= h >> r;
    h *= m;
    h ^= h >> r;

    return h;
} // MurmurHash64

inline uint64_t MurmurHash64Start(uint64_t totalLen, uint64_t seed = HASH_SEED)
{
    const uint64_t m = 0xc6a4a7935bd1e995;
    return seed ^ (totalLen * m);
} // MurmurHash64Start

inline uint64_t MurmurHash64Add(const void* key, uint64_t len, uint64_t h)
{
    const uint64_t m = 0xc6a4a7935bd1e995;
    const int r = 47;

    const uint64_t* data = (const uint64_t*)key;
    const uint64_t* end = data + (len / 8);

    while (data != end) {
        uint64_t k = *data++;

        k *= m;
        k ^= k >> r;
        k *= m;

        h ^= k;
        h *= m;
    }

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

    return h;
} // MurmurHash64Add

inline uint64_t MurmurHash64Finish(uint64_t h)
{
    const uint64_t m = 0xc6a4a7935bd1e995;
    const int r = 47;

    h ^= h >> r;
    h *= m;
    h ^= h >> r;

    return h;
} // MurmurHash64Finish

inline uint64_t Checksum(void* data, uint64_t size)
{
    return MurmurHash64(data, size);
} // Checksum
