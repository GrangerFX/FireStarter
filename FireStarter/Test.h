#pragma once
#include "Defines.h"

GPU_FUNCTION void TestFunction(uchar4 *pixels, unsigned int width, unsigned int height, unsigned int index)
{
    unsigned int y = index / width;
    if (y < height) {
        unsigned int x = index % width;
        uchar4 &pixel = pixels[index];
        pixel.x = x & 255;
        pixel.y = y & 255;
        pixel.z = (x ^ y) & 255;
        pixel.w = 255;
    }
} // TestFunction

#ifndef __CUDACC__
extern "C" void RunTest(uchar4 *pixels, const unsigned int width, const unsigned int height);
#endif