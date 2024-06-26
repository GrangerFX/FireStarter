#pragma once

#include "FireStarterSettings.h"
#include "CUDADefines.h"

// Initialize the settings based on an external definition header file.
GPU_GLOBAL void FireSettings(FireStarterSettings* settings)
{
    const unsigned int thread = threadIdx.x;
    if (thread == 0)
        *settings = FireStarterSettings();
} // FireSettings
