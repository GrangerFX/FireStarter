#include "FireStarterGenerate.h"
#include "FireStarterCode.h"
#include "CUDACompile.h"

bool FireStarterGenerate::InitGenerateGPU(const FireStarterSettings& settings)
{
#if FIRESTARTER_GENERATE_GPU
    if (!m_CUDAContext || m_generateCode.empty())
        return false;

    // Compile the GPU code generator.
    CUstream stream = m_CUDAContext->Stream();
    if (!m_module && CUDACompile::CompileProgram(m_module, m_generateCode, "FireGenerate")) {
        m_evaluateFunction = CUDACompile::GetFunction(m_module, "FireGenerateEvaluate");
        m_solutionFunction = CUDACompile::GetFunction(m_module, "FireGenerateSolution");
    }

    // Allocate the instructions.
    if (m_numInstructions != settings.m_instructions) {
        m_numInstructions = settings.m_instructions;
        if (m_deviceInstructions) {
            checkCUDAErrors(cudaFreeAsync(m_deviceInstructions, stream));
            m_deviceInstructions = nullptr;
        }
        checkCUDAErrors(cudaMallocAsync(&m_deviceInstructions, FireStarterInstructions::InstructionsSize(m_numInstructions), stream));
    }

    // Allocate the registers and data.
    if (m_numRegisters != settings.m_registers) {
        m_numRegisters = settings.m_registers;
        if (m_deviceRegisters) {
            checkCUDAErrors(cudaFreeAsync(m_deviceRegisters, stream));
            m_deviceRegisters = nullptr;
        }
        if (m_deviceData) {
            checkCUDAErrors(cudaFreeAsync(m_deviceData, stream));
            m_deviceData = nullptr;
        }
        checkCUDAErrors(cudaMallocAsync(&m_deviceRegisters, FireStarterRegisters::RegistersSize(m_numRegisters), stream));
        checkCUDAErrors(cudaMallocAsync(&m_deviceData, FireStarterData::DataSize(m_numRegisters), stream));
    }

    // Allocate the string size.
    if (!m_deviceString) {
        m_stringSize = sizeof(size_t);
        checkCUDAErrors(cudaMallocAsync(&m_deviceString, m_stringSize, stream));
    }
#endif
    return m_evaluateFunction && m_solutionFunction;
} // InitGenerateGPU

void FireStarterGenerate::GenerateEvaluate(const FireStarterState& state, std::string& code)
{
    // Allocate the device memory needed to generate the solution code.
    bool generateGPU = InitGenerateGPU(state.Settings());

    // Generate the evaluate function.
    unsigned long long numInstructions = state.m_program.m_settings.m_instructions;
    const FireStarterInstructions* instructions = state.m_program.OptimizedInstructions();
    std::vector<FireStarterRegister> registers;
    unsigned long long numRegisters = state.m_program.GenerateRegisters(registers);
    FireStarterRegisters* registersData = (FireStarterRegisters*)registers.data();
    std::string generateCode;
    unsigned int tabs = 1;

#if FIRESTARTER_OPTIMIZE_LEARN
    code += "inline float Evaluate(FireStarterData& data, float n)\r\n";
#else
    code += "inline float Evaluate(FireStarterData data, float n)\r\n";
#endif
    code += "{\r\n";

    // Allocate the device memory needed to generate the evaluate code.
    if (generateGPU) {
        // Generate the evaluate function via the GPU (dynamic code generation).
        // First pass: Determine the length of the code string.
        dim3 cudaBlockSize(WARP_THREADS, 1, 1);
        dim3 cudaGridSize(1, 1, 1);
        CUstream stream = m_CUDAContext->Stream();
        checkCUDAErrors(cudaMemcpyAsync(m_deviceInstructions, instructions, FireStarterInstructions::InstructionsSize(numInstructions), cudaMemcpyHostToDevice, stream));
        checkCUDAErrors(cudaMemcpyAsync(m_deviceRegisters, registersData, FireStarterRegisters::RegistersSize(numRegisters), cudaMemcpyHostToDevice, stream));

        size_t stringSize = 0;
        void* arr[] = { reinterpret_cast<void*>(&m_deviceString),
                        reinterpret_cast<void*>(&stringSize),
                        reinterpret_cast<void*>(&tabs),
                        reinterpret_cast<void*>(&m_deviceInstructions),
                        reinterpret_cast<void*>(&numInstructions),
                        reinterpret_cast<void*>(&m_deviceRegisters),
                        reinterpret_cast<void*>(&numRegisters) };

        checkCUDAErrors(cuLaunchKernel(m_evaluateFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            stream,                                             // stream
            &arr[0],                                            // arguments
            0));
        checkCUDAErrors(cudaMemcpyAsync(&stringSize, m_deviceString, sizeof(size_t), cudaMemcpyDeviceToHost, stream));
        m_CUDAContext->Synchronize();

        // Second pass: Generate the code string.
        generateCode.resize(stringSize, 0);
        stringSize++;
        if (stringSize > m_stringSize) {
            m_stringSize = stringSize;
            checkCUDAErrors(cudaFreeAsync(m_deviceString, stream));
            checkCUDAErrors(cudaMallocAsync(&m_deviceString, m_stringSize, stream));
        }

        checkCUDAErrors(cuLaunchKernel(m_evaluateFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            stream,                                             // stream
            &arr[0],                                            // arguments
            0));
        checkCUDAErrors(cudaMemcpyAsync(generateCode.data(), m_deviceString, stringSize, cudaMemcpyDeviceToHost, stream));
        m_CUDAContext->Synchronize();
    } else {
        // Fallback to CPU (static code generation)
        size_t codeLength = 0;
        GenerateEvaluateCode(nullptr, 0, codeLength, tabs, instructions, numInstructions, registersData, numRegisters);
        generateCode.resize(codeLength, 0);
        codeLength = 0;
        GenerateEvaluateCode(generateCode.data(), generateCode.max_size(), codeLength, tabs, instructions, numInstructions, registersData, numRegisters);
    }

    code += generateCode;
    code += "    return isfinite(n) ? n : 0.0f;\r\n";
    code += "} // Evaluate\r\n";
} // GenerateEvaluate

void FireStarterGenerate::GenerateSolution(const FireStarterState& state, std::string& code, const std::string& targetCode)
{
    // Allocate the device memory needed to generate the solution code.
    bool generateGPU = InitGenerateGPU(state.Settings());

    // Generate the solution function.
    unsigned long long numInstructions = state.m_program.m_settings.m_instructions;
    const FireStarterInstructions* instructions = state.m_program.OptimizedInstructions();
    std::vector<FireStarterRegister> registers;
    unsigned long long numRegisters = state.m_program.GenerateRegisters(registers);
    FireStarterRegisters* registersData = (FireStarterRegisters*)registers.data();
    std::string generateCode;

    const FireStarterSettings& settings = state.Settings();
    const FireStarterResults* results = state.Results();
    unsigned int tabs = 1;
    std::string solutionCode;
    solutionCode += "#pragma once\r\n";
    solutionCode += "#include <math.h>\r\n";
    solutionCode += "\r\n";
    state.SaveStats(code);
    code += Format("#define SOLUTION_VARIATIONS %d\r\n", settings.m_variations);
    code += "\r\n";
    code += targetCode;

    for (unsigned int v = 0; v < settings.m_variations; v++) {
        const FireStarterData* data = results->Data(v);

        code += "\r\n";
        if (settings.m_variations > 1) {
            code += Format("// Solution%d result = %.8f\r\n", v, results->MinResult(v));
            code += Format("inline float Solution%d(float n)\r\n", v);
        } else
            code += "inline float Solution(float n)\r\n";
        code += "{\r\n";

        if (generateGPU) {
            // First pass: Determine the length of the code string.
            dim3 cudaBlockSize(WARP_THREADS, 1, 1);
            dim3 cudaGridSize(1, 1, 1);
            CUstream stream = m_CUDAContext->Stream();
            checkCUDAErrors(cudaMemcpyAsync(m_deviceInstructions, instructions, FireStarterInstructions::InstructionsSize(numInstructions), cudaMemcpyHostToDevice, stream));
            checkCUDAErrors(cudaMemcpyAsync(m_deviceRegisters, registersData, FireStarterRegisters::RegistersSize(numRegisters), cudaMemcpyHostToDevice, stream));
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

            checkCUDAErrors(cuLaunchKernel(m_solutionFunction,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
                0,                                                  // shared mem
                stream,                                             // stream
                &arr[0],                                            // arguments 
                0));
            checkCUDAErrors(cudaMemcpyAsync(&stringSize, m_deviceString, sizeof(size_t), cudaMemcpyDeviceToHost, stream));
            m_CUDAContext->Synchronize();

            // Second pass: Generate the code string.
            generateCode.resize(stringSize, 0);
            stringSize++;
            if (stringSize > m_stringSize) {
                m_stringSize = stringSize;
                checkCUDAErrors(cudaFreeAsync(m_deviceString, stream));
                checkCUDAErrors(cudaMallocAsync(&m_deviceString, m_stringSize, stream));
            }

            checkCUDAErrors(cuLaunchKernel(m_solutionFunction,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
                0, stream,                                          // shared mem, stream */
                &arr[0],                                            // arguments */
                0));
            checkCUDAErrors(cudaMemcpyAsync(generateCode.data(), m_deviceString, stringSize, cudaMemcpyDeviceToHost, stream));
            m_CUDAContext->Synchronize();
        } else {
            size_t codeLength = 0;
            GenerateSolutionCode(nullptr, 0, codeLength, tabs, instructions, numInstructions, registersData, numRegisters, data);
            generateCode.resize(codeLength, 0);
            codeLength = 0;
            GenerateSolutionCode(generateCode.data(), generateCode.max_size(), codeLength, tabs, instructions, numInstructions, registersData, numRegisters, data);
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
} // GenerateSolution

FireStarterGenerate::FireStarterGenerate(CUDAContext* context)
{
    m_CUDAContext = context;
    FireStarterCode::LoadCode("FireGenerate.cu", m_generateCode);
} // FireStarterGenerate

FireStarterGenerate::~FireStarterGenerate(void)
{
    if (m_CUDAContext) {
        CUstream stream = m_CUDAContext->Stream();
        if (m_module)
            checkCUDAErrors(cuModuleUnload(m_module));
        if (m_deviceInstructions)
            checkCUDAErrors(cudaFreeAsync(m_deviceInstructions, stream));
        if (m_deviceRegisters)
            checkCUDAErrors(cudaFreeAsync(m_deviceRegisters, stream));
        if (m_deviceData)
            checkCUDAErrors(cudaFreeAsync(m_deviceData, stream));
        if (m_deviceString)
            checkCUDAErrors(cudaFreeAsync(m_deviceString, stream));
        checkCUDAErrors(cudaStreamSynchronize(stream));
    }
} // ~FireStarterGenerate