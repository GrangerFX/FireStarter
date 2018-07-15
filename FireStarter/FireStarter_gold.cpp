#include "FireStarter_gold.h"
#include "FireStarter.h"

extern "C" void RunRaytraceGold(unsigned char *pixels, const unsigned int width, const unsigned int height)
{
    unsigned int pixel = 0;
    for (unsigned int y = 0; y < height; y++) {
        for (unsigned int x = 0; x < width; x++) {
            pixels[pixel + 0] = x & 255;
            pixels[pixel + 1] = y & 255;
            pixels[pixel + 2] = (x / 256) * (y / 256);
            pixels[pixel + 3] = 255;
            pixel += 4;
        }
    }
} // RunRaytraceGold
