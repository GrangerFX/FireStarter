#include "FireStarterGenerate.h"

void FireStarterGenerate::InitGenerate(const FireStarterState& state)
{
    const FireStarterSettings& settings = state.Settings();
    if (m_numInstructions != settings.m_instructions) {
        m_numInstructions = settings.m_instructions;
        if (m_deviceInstructions)
            checkCUDAErrors(cudaFree(m_deviceInstructions));
        checkCUDAErrors(cudaMalloc(&m_deviceInstructions, FireStarterInstructions::InstructionsSize(m_numInstructions)));
    }

    if (m_numRegisters != settings.m_registers) {
        m_numRegisters = settings.m_registers;
        if (m_deviceRegisters)
            checkCUDAErrors(cudaFree(m_deviceRegisters));
        if (m_deviceData)
            checkCUDAErrors(cudaFree(m_deviceData));
        checkCUDAErrors(cudaMalloc(&m_deviceRegisters, FireStarterRegisters::RegistersSize(m_numRegisters)));
        checkCUDAErrors(cudaMalloc(&m_deviceData, FireStarterData::DataSize(m_numRegisters)));
    }
    if (!m_deviceString) {
        m_stringSize = sizeof(size_t);
        checkCUDAErrors(cudaMalloc(&m_deviceString, m_stringSize));
    }
} // InitGenerate

void FireStarterGenerate::GenerateEvaluate(const FireStarterState& state, CUfunction function, CUstream stream, std::string& code)
{
    // Allocate the device memory needed to generate the evaluate code.
    InitGenerate(state);

    // Generate the evaluate function.
    size_t numInstructions = 0;
    const FireStarterInstructions* instructions = state.m_program.Instructions(&numInstructions);
    size_t numRegisters = 0;
    const FireStarterRegisters* registers = state.m_program.Registers(&numRegisters);
    std::string generateCode;
    unsigned int tabs = 1;

    code += "inline float Evaluate(FireStarterData data, float n)\r\n";
    code += "{\r\n";

    if (function && stream) {
        // First pass: Determine the length of the code string.
        dim3 cudaBlockSize(BLOCK_THREADS, 1, 1);
        dim3 cudaGridSize(1, 1, 1);
        checkCUDAErrors(cudaMemcpyAsync(m_deviceInstructions, instructions, FireStarterInstructions::InstructionsSize(numInstructions), cudaMemcpyHostToDevice, stream));
        checkCUDAErrors(cudaMemcpyAsync(m_deviceRegisters, registers, FireStarterRegisters::RegistersSize(numRegisters), cudaMemcpyHostToDevice, stream));

        size_t stringSize = 0;
        void* arr[] = { reinterpret_cast<void*>(&m_deviceString),
                        reinterpret_cast<void*>(&stringSize),
                        reinterpret_cast<void*>(&tabs),
                        reinterpret_cast<void*>(&m_deviceInstructions),
                        reinterpret_cast<void*>(&numInstructions),
                        reinterpret_cast<void*>(&m_deviceRegisters),
                        reinterpret_cast<void*>(&numRegisters) };

        checkCUDAErrors(cuLaunchKernel(function,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, stream,                                          // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
        checkCUDAErrors(cudaMemcpyAsync(&stringSize, m_deviceString, sizeof(size_t), cudaMemcpyDeviceToHost, stream));
        checkCUDAErrors(cudaStreamSynchronize(stream));

        // Second pass: Generate the code string.
        generateCode.resize(stringSize, 0);
        stringSize++;
        if (stringSize > m_stringSize) {
            m_stringSize = stringSize;
            checkCUDAErrors(cudaFree(m_deviceString));
            checkCUDAErrors(cudaMalloc(&m_deviceString, m_stringSize));
        }

        checkCUDAErrors(cuLaunchKernel(function,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, stream,                                          // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
        checkCUDAErrors(cudaMemcpyAsync(generateCode.data(), m_deviceString, stringSize, cudaMemcpyDeviceToHost, stream));
        checkCUDAErrors(cudaStreamSynchronize(stream));
    }
    else {
        size_t codeLength = 0;
        GenerateEvaluateCode(nullptr, 0, codeLength, tabs, instructions, numInstructions, registers, numRegisters);
        generateCode.resize(codeLength, 0);
        codeLength = 0;
        GenerateEvaluateCode(generateCode.data(), generateCode.max_size(), codeLength, tabs, instructions, numInstructions, registers, numRegisters);
    }
    code += generateCode;
    code += "    return isfinite(n) ? n : 0.0f;\r\n";
    code += "} // Evaluate\r\n";
} // GenerateEvaluate

void FireStarterGenerate::GenerateSolution(const FireStarterState& state, CUfunction function, CUstream stream, std::string& code, const std::string& targetCode, double duration, unsigned int generation)
{
    // Allocate the device memory needed to generate the solution code.
    InitGenerate(state);

    // Generate the solution function.
    size_t numInstructions = 0;
    const FireStarterInstructions* instructions = state.m_program.Instructions(&numInstructions);
    size_t numRegisters = 0;
    const FireStarterRegisters* registers = state.m_program.Registers(&numRegisters);
    std::string generateCode;

    const FireStarterSettings& settings = state.Settings();
    const FireStarterResult* result = state.Result();
    unsigned int tabs = 1;
    std::string solutionCode;
    solutionCode += "#pragma once\r\n";
    solutionCode += "#include <math.h>\r\n";
    solutionCode += "\r\n";
    code += Format("// Run date: %s\r\n", CurrentDate().c_str());
    code += Format("// Run duration = %f seconds\r\n", duration);
    code += Format("// Run count = %d\r\n", generation);
    FireStarterProgram::SettingsText(settings, code, "// Run ");
    code += Format("// Solution Generation = %d\r\n", state.m_generation);
    code += "\r\n";
    code += targetCode;
    code += "\r\n";
    code += Format("#define SOLUTION_MIN %f\r\n", settings.m_sampleMin);
    code += Format("#define SOLUTION_MAX %f\r\n", settings.m_sampleMax);
    code += "\r\n";
    code += Format("#define SOLUTION_VARIATIONS %d\r\n", settings.m_variations);
    code += "\r\n";
    code += Format("// Precision = %.8f\r\n", result->maxResult);

    for (unsigned int v = 0; v < settings.m_variations; v++) {
        const FireStarterData* data = result->ConstData(v);

        code += "\r\n";
        if (settings.m_variations > 1) {
            code += Format("// Solution%d precision = %.8f\r\n", v, *result->ConstMinResult(v));
            code += Format("inline float Solution%d(float n)\r\n", v);
        } else {
            code += Format("// Solution precision = %.8f\r\n", *result->ConstMinResult(0));
            code += "inline float Solution(float n)\r\n";
        }
        code += "{\r\n";

        if (function && stream) {
            // First pass: Determine the length of the code string.
            dim3 cudaBlockSize(BLOCK_THREADS, 1, 1);
            dim3 cudaGridSize(1, 1, 1);
            checkCUDAErrors(cudaMemcpyAsync(m_deviceInstructions, instructions, FireStarterInstructions::InstructionsSize(numInstructions), cudaMemcpyHostToDevice, stream));
            checkCUDAErrors(cudaMemcpyAsync(m_deviceRegisters, registers, FireStarterRegisters::RegistersSize(numRegisters), cudaMemcpyHostToDevice, stream));
            checkCUDAErrors(cudaMemcpyAsync(m_deviceData, data, FireStarterData::DataSize(numRegisters), cudaMemcpyHostToDevice, stream));

            size_t stringSize = 0;
            void* arr[] = { reinterpret_cast<void*>(&m_deviceString),
                            reinterpret_cast<void*>(&stringSize),
                            reinterpret_cast<void*>(&tabs),
                            reinterpret_cast<void*>(&m_deviceInstructions),
                            reinterpret_cast<void*>(&numInstructions),
                            reinterpret_cast<void*>(&m_deviceRegisters),
                            reinterpret_cast<void*>(&numRegisters),
                            reinterpret_cast<void*>(&m_deviceData) };

            checkCUDAErrors(cuLaunchKernel(function,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
                0, stream,                                          // shared mem, stream */
                &arr[0],                                            // arguments */
                0));
            checkCUDAErrors(cudaMemcpyAsync(&stringSize, m_deviceString, sizeof(size_t), cudaMemcpyDeviceToHost, stream));
            checkCUDAErrors(cudaStreamSynchronize(stream));

            // Second pass: Generate the code string.
            generateCode.resize(stringSize, 0);
            stringSize++;
            if (stringSize > m_stringSize) {
                m_stringSize = stringSize;
                checkCUDAErrors(cudaFree(m_deviceString));
                checkCUDAErrors(cudaMalloc(&m_deviceString, m_stringSize));
            }

            checkCUDAErrors(cuLaunchKernel(function,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
                0, stream,                                          // shared mem, stream */
                &arr[0],                                            // arguments */
                0));
            checkCUDAErrors(cudaMemcpyAsync(generateCode.data(), m_deviceString, stringSize, cudaMemcpyDeviceToHost, stream));
            checkCUDAErrors(cudaStreamSynchronize(stream));
        } else {
            size_t codeLength = 0;
            GenerateSolutionCode(nullptr, 0, codeLength, tabs, instructions, numInstructions, registers, numRegisters, data);
            generateCode.resize(codeLength, 0);
            codeLength = 0;
            GenerateSolutionCode(generateCode.data(), generateCode.max_size(), codeLength, tabs, instructions, numInstructions, registers, numRegisters, data);
        }
        code += generateCode;

        code += "    return n;\r\n";
        if (settings.m_variations > 1)
            code += Format("} // Solution%d\r\n", v);
        else
            code += "} // Solution\r\n";
    }

    if (settings.m_variations > 1) {
        code += "\r\n";
        code += "inline float Solution(float n, unsigned int variation)\r\n";
        code += "{\r\n";
        code += "    switch (variation) {\r\n";
        for (unsigned int v = 0; v < settings.m_variations; v++) {
            code += Format("    case %d:\r\n", v);
            code += Format("        return Solution%d(n);\r\n", v);
        }
        code += "    }\r\n";
        code += "    return 0.0f;\r\n";
        code += "} // Solution\r\n";
    }
} // SaveSolution

FireStarterGenerate::FireStarterGenerate(void)
{
} // FireStarterGenerate

FireStarterGenerate::~FireStarterGenerate(void)
{
    if (m_deviceInstructions)
        checkCUDAErrors(cudaFree(m_deviceInstructions));
    if (m_deviceRegisters)
        checkCUDAErrors(cudaFree(m_deviceRegisters));
    if (m_deviceData)
        checkCUDAErrors(cudaFree(m_deviceData));
    if (m_deviceString)
        checkCUDAErrors(cudaFree(m_deviceString));
} // ~FireStarterGenerate