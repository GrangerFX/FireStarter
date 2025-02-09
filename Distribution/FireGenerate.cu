#include "FireStarterCodeGenerate.h"

// Generate the evaluate function code.
GPU_GLOBAL void FireGenerateEvaluate(char* buffer, size_t size, unsigned int tabs, FireStarterCodeGenerate* code, size_t numInstructions, FireStarterRegisterUsage* registers, size_t numRegisters)
{
    const unsigned int thread = threadIdx.x;
    if (thread == 0) {
        size_t length = 0;
        code->GenerateEvaluate(buffer, size, length, tabs, numInstructions, registers, numRegisters);
        if (!size)
            *(size_t*)buffer = length;
    }
} // FireGenerateEvaluate

// Generate the solution function code.
GPU_GLOBAL void FireGenerateSolution(char* buffer, size_t size, unsigned int tabs, FireStarterCodeGenerate* code, size_t numInstructions, FireStarterRegisterUsage* registers, size_t numRegisters, FireStarterData* data)
{
    const unsigned int thread = threadIdx.x;
    if (thread == 0) {
        size_t length = 0;
        code->GenerateSolution(buffer, size, length, tabs, numInstructions, registers, numRegisters, data);
        if (!size)
            *(size_t*)buffer = length;
    }
} // FireGenerateSolution