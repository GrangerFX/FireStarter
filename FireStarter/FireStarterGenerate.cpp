#include "FireStarterGenerate.h"
#include "FireStarterSource.h"
#include "FireStarterCodeGenerate.h"
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
        if (m_deviceCode) {
            checkCUDAErrors(cudaFreeAsync(m_deviceCode, stream));
            m_deviceCode = nullptr;
        }
        checkCUDAErrors(cudaMallocAsync(&m_deviceCode, FireStarterCode::CodeSize(m_numInstructions), stream));
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
        checkCUDAErrors(cudaMallocAsync(&m_deviceRegisters, FireStarterRegisterUsage::RegistersSize(m_numRegisters), stream));
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

void FireStarterGenerate::GenerateEvaluate(const FireStarterState& state, std::string& text)
{
    // Allocate the device memory needed to generate the solution code.
    bool generateGPU = InitGenerateGPU(state.Settings());

    // Generate the evaluate function.
    unsigned int numInstructions = state.m_settings.m_instructions;
    const FireStarterCodeGenerate* code = state.Code();
    std::vector<FireStarterRegisterInfo> registers;
    unsigned int numRegisters = state.GenerateRegisters(registers);
    FireStarterRegisterUsage* registersUsage = (FireStarterRegisterUsage*)registers.data();
    std::string generateText;
    unsigned int tabs = 1;

    // Allocate the device memory needed to generate the evaluate code.
    if (generateGPU) {
        // Generate the evaluate function via the GPU (dynamic code generation).
        // First pass: Determine the length of the code string.
        dim3 cudaBlockSize(FIRESTARTER_WARP_THREADS, 1, 1);
        dim3 cudaGridSize(1, 1, 1);
        CUstream stream = m_CUDAContext->Stream();
        checkCUDAErrors(cudaMemcpyAsync(m_deviceCode, code, FireStarterCode::CodeSize(numInstructions), cudaMemcpyHostToDevice, stream));
        checkCUDAErrors(cudaMemcpyAsync(m_deviceRegisters, registersUsage, FireStarterRegisterUsage::RegistersSize(numRegisters), cudaMemcpyHostToDevice, stream));

        size_t stringSize = 0;
        void* arr[] = { reinterpret_cast<void*>(&m_deviceString),
                        reinterpret_cast<void*>(&stringSize),
                        reinterpret_cast<void*>(&tabs),
                        reinterpret_cast<void*>(&m_deviceCode),
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
        generateText.resize(stringSize, 0);
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
        checkCUDAErrors(cudaMemcpyAsync(generateText.data(), m_deviceString, stringSize, cudaMemcpyDeviceToHost, stream));
        m_CUDAContext->Synchronize();
    } else {
        // Fallback to CPU (static code generation)
        size_t textLength = 0;
        code->GenerateEvaluate(nullptr, 0, textLength, tabs, numInstructions, registersUsage, numRegisters);
        generateText.resize(textLength, 0);
        textLength = 0;
        code->GenerateEvaluate(generateText.data(), generateText.max_size(), textLength, tabs, numInstructions, registersUsage, numRegisters);
    }

    text += generateText;
} // GenerateEvaluate

void FireStarterGenerate::GenerateSolution(const FireStarterState& state, std::string& text, const std::string& targetCode)
{
    // Allocate the device memory needed to generate the solution code.
    bool generateGPU = InitGenerateGPU(state.Settings());

    // Generate the solution function.
    unsigned int numInstructions = state.m_settings.m_instructions;
    const FireStarterCodeGenerate* code = state.Code();
    std::vector<FireStarterRegisterInfo> registers;
    unsigned int numRegisters = state.GenerateRegisters(registers);
    FireStarterRegisterUsage* registersUsage = (FireStarterRegisterUsage*)registers.data();
    std::string generateText;

    const FireStarterSettings& settings = state.Settings();
    unsigned int tabs = 1;
    std::string solutionCode;
    solutionCode += "#pragma once\r\n";
    if (state.m_settings.m_mode == FIRESTARTER_MONEYMAKER)
        solutionCode += "#include \"MoneyMakerStocks.h\"\r\n";
    else
        solutionCode += "#include <math.h>\r\n";
    solutionCode += "\r\n";
    state.SaveStats(text);

    if (state.m_settings.m_mode != FIRESTARTER_MONEYMAKER) {
        text += Format("#define SOLUTION_VARIATIONS %d\r\n", settings.m_variations);
        text += Format("#define SOLUTION_VARIATION %d\r\n", FIRESTARTER_VARIATION);
        text += "\r\n";
        text += targetCode;
    }

    for (unsigned int v = 0; v < settings.m_variations; v++) {
        const FireStarterResult* result = state.Result(v);
        const FireStarterData* data = result->Data();

        text += "\r\n";
        if (state.m_settings.m_mode == FIRESTARTER_MONEYMAKER) {
            text += "inline float MoneyMakerSolution(MoneyMakerStock& stock)\r\n";
            text += "{\r\n";
            text += "    float n = 0.0f;\r\n";
        } else {
            if (settings.m_variations > 1)
                text += Format("inline float Solution%d(float n)\r\n", v);
            else
                text += "inline float Solution(float n)\r\n";
            text += "{\r\n";
        }

        if (generateGPU) {
            // First pass: Determine the length of the text string.
            dim3 cudaBlockSize(FIRESTARTER_WARP_THREADS, 1, 1);
            dim3 cudaGridSize(1, 1, 1);
            CUstream stream = m_CUDAContext->Stream();
            checkCUDAErrors(cudaMemcpyAsync(m_deviceCode, code, FireStarterCode::CodeSize(numInstructions), cudaMemcpyHostToDevice, stream));
            checkCUDAErrors(cudaMemcpyAsync(m_deviceRegisters, registersUsage, FireStarterRegisterUsage::RegistersSize(numRegisters), cudaMemcpyHostToDevice, stream));
            checkCUDAErrors(cudaMemcpyAsync(m_deviceData, data, FireStarterData::DataSize(numRegisters), cudaMemcpyHostToDevice, stream));

            size_t stringSize = 0;
            void* arr[] = { reinterpret_cast<void*>(&m_deviceString),
                            reinterpret_cast<void*>(&stringSize),
                            reinterpret_cast<void*>(&tabs),
                            reinterpret_cast<void*>(&m_deviceCode),
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

            // Second pass: Generate the text string.
            generateText.resize(stringSize, 0);
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
            checkCUDAErrors(cudaMemcpyAsync(generateText.data(), m_deviceString, stringSize, cudaMemcpyDeviceToHost, stream));
            m_CUDAContext->Synchronize();
        } else {
            size_t textLength = 0;
            code->GenerateSolution(nullptr, 0, textLength, tabs, numInstructions, registersUsage, numRegisters, data);
            generateText.resize(textLength, 0);
            textLength = 0;
            code->GenerateSolution(generateText.data(), generateText.max_size(), textLength, tabs, numInstructions, registersUsage, numRegisters, data);
        }
        text += generateText;

        text += "    return n;\r\n";
        if (state.m_settings.m_mode == FIRESTARTER_MONEYMAKER) {
            text += "} // MoneyMakerSolution\r\n";
        } else {
            if (settings.m_variations > 1)
                text += Format("} // Solution%d\r\n", v);
            else
                text += "} // Solution\r\n";
        }
    }

    if (settings.m_variations > 1) {
        text += "\r\n";
        text += "inline float Solution(float n, unsigned int variation)\r\n";
        text += "{\r\n";
        text += "    switch (variation) {\r\n";
        for (unsigned int v = 0; v < settings.m_variations; v++) {
            text += Format("    case %d:\r\n", v);
            text += Format("        return Solution%d(n);\r\n", v);
        }
        text += "    }\r\n";
        text += "    return 0.0f;\r\n";
        text += "} // Solution\r\n";
    }
} // GenerateSolution

FireStarterGenerate::FireStarterGenerate(CUDAContext* context)
{
    m_CUDAContext = context;
    FireStarterSource::LoadSource(m_generateCode, "FireGenerate.cu");
} // FireStarterGenerate

FireStarterGenerate::~FireStarterGenerate(void)
{
    if (m_CUDAContext) {
        CUstream stream = m_CUDAContext->Stream();
        if (m_module)
            checkCUDAErrors(cuModuleUnload(m_module));
        if (m_deviceCode)
            checkCUDAErrors(cudaFreeAsync(m_deviceCode, stream));
        if (m_deviceRegisters)
            checkCUDAErrors(cudaFreeAsync(m_deviceRegisters, stream));
        if (m_deviceData)
            checkCUDAErrors(cudaFreeAsync(m_deviceData, stream));
        if (m_deviceString)
            checkCUDAErrors(cudaFreeAsync(m_deviceString, stream));
        checkCUDAErrors(cudaStreamSynchronize(stream));
    }
} // ~FireStarterGenerate