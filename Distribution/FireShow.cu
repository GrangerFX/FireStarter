#pragma once

#include "FireStarterInstructions.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

GPU_GLOBAL void FireShow(FireStarterResults* bestResults, FireStarterInstructions* bestInstructions, uchar4* bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, const unsigned int variations)
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
        for (unsigned int v = 0; v < variations; v++) {
            float theta = (x - bufferWidth * 0.5f) * (3.14159265f / xScale) + 3.14159265f;
            float target = Target(theta, v);
            float center = bufferHeight * 0.66f;
            int y = (int)(center + target * yScale);
            if ((y >= 0) && (y < bufferHeight)) {
                uchar4& pixel(bufferPixels[y * bufferWidth + x]);
                pixel.x = 255;
                pixel.y = 128;
            };
            FireStarterData workData(*bestResults->Data(v));
            y = (int)(center + bestInstructions->Execute(workData, theta) * yScale);
            if ((y >= 0) && (y < bufferHeight)) {
                uchar4& pixel(bufferPixels[y * bufferWidth + x]);
                pixel.x = pixel.y = pixel.z = 255;
            };
            int i = x / 32;
            FireStarterResult* result = bestResults->Result(v);
            if (i < result->dataSize) {
                FireStarterData* data = result->Data();
                y = (int)(center + data->d[i] * 10.0f);
                if ((y >= 0) && (y < bufferHeight)) {
                    uchar4& pixel(bufferPixels[y * bufferWidth + x]);
                    pixel.x = pixel.y = 255;
                    pixel.z = 0;
                }
            }
        }
    }
} // FireShow