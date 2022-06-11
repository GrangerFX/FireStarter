#pragma once

#include "FireStarterInstructions.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

GPU_GLOBAL void FireShow(FireStarterResult* bestResult, FireStarterInstructions* bestInstructions, uchar4* bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, const unsigned int variation)
{
    int x = blockDim.x * blockIdx.x + threadIdx.x;
    int xScale = bufferHeight / 8;
    int yScale = bufferHeight / 16;
    if (x < bufferHeight) {
        int x0 = (bufferWidth / 2) - xScale;
        int x1 = (bufferWidth / 2) + xScale;
        if (x0 >= 0) {
            uchar4 &pixel(bufferPixels[x * bufferWidth + x0]);
            pixel.x = 64;
            pixel.y = 128;
            pixel.z = 64;
        };
        if (x1 < bufferWidth) {
            uchar4 &pixel(bufferPixels[x * bufferWidth + x1]);
            pixel.x = 64;
            pixel.y = 128;
            pixel.z = 64;
        };
    }
    if (x < bufferWidth) {
        float theta = (x - bufferWidth * 0.5f) * (3.14159265f / xScale) + 3.14159265f;
        float target = Target(theta, variation);
        float center = bufferHeight * 0.66f;
        int y = (int)(center + target * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = 255;
            pixel.y = 128;
        };
        FireStarterData workData(*bestResult->Data(variation));
        y = (int)(center + bestInstructions->Execute(workData, theta, FIRESTARTER_INSTRUCTIONS) * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = pixel.y = pixel.z = 255;
        };
        int i = x / 32;
        if (i < bestResult->dataSize) {
            y = (int)(center + bestResult->Data(variation)->d[i] * 10.0f);
            if ((y >= 0) && (y < bufferHeight)) {
                uchar4& pixel(bufferPixels[y * bufferWidth + x]);
                pixel.x = pixel.y = 255;
                pixel.z = 0;
            }
        }
    }
} // FireShow