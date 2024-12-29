#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

GPU_GLOBAL void Evaluate(float* target, float* results, unsigned int width, float thetaStart, float thetaEnd, FireStarterCode* code, FireStarterData* data, unsigned int variation)
{
    // Determine the member to be optimized.
    unsigned int index = blockIdx.x * blockDim.x + threadIdx.x;
    if (index >= width)
        return;

    // Generate the target data.
    float theta = thetaStart + index * (thetaEnd - thetaStart) / width;
    if (target)
        target[index] = Target(theta, variation);

    // Generate the test data.
    if (results && data && code) {
        FireStarterCode localCode(code);
        FireStarterData localData(data);
        results[index] = localCode.Evaluate(localData, theta);
    }
} // Evaluate
