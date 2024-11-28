#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

GPU_GLOBAL void Evaluate(float* target, float* results, size_t size, float thetaStart, float thetaEnd, FireStarterData* data, FireStarterCode* code, unsigned int variation)
{
    // Determine the member to be optimized.
    unsigned int index = blockIdx.x * blockDim.x + threadIdx.x;
    if (index >= size)
        return;

    // Generate the target data.
    float theta = thetaStart + index * (thetaEnd - thetaStart) / size;
    if (target)
        target[index] = Target(theta, variation);

    // Generate the test data.
    if (results && data && code) {
        GPU_SHARED FireStarterSharedData sharedData;
        sharedData = data;
        FireStarterCode localCode(code);
        results[index] = localCode.Evaluate(sharedData, theta);
    }
} // Evaluate
