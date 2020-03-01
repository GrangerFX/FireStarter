#pragma once
#include "Defines.h"

GPU_FUNCTION void TestFunction(unsigned char *pixels, unsigned int width, unsigned int height, unsigned int pixel)
{
    unsigned int y = pixel / width;
    if (y < height) {
        unsigned int x = pixel % width;
        pixel *= 4;
        pixels[pixel + 0] = x & 255;
        pixels[pixel + 1] = y & 255;
        pixels[pixel + 2] = (x ^ y) & 255;
        pixels[pixel + 3] = 255;
    }
} // TestFunction

#ifndef __CUDACC__
extern "C" void RunTest(unsigned char *pixels, const unsigned int width, const unsigned int height);
#endif