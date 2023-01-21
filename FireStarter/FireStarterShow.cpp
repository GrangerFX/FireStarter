#include "FireStarterShow.h"
#include "FireStarterCode.h"
#include "FireStarter_Solution.h"
#include "CUDACompile.h"

void FireStarterShow::FireShow(const FireStarterState& state, bool sync)
{
    Dispatch([this, state] {
        // Setup the data
        CUDAContext* context = Context();
        CUstream stream = context->Stream();
        FireStarterSettings settings = state.Settings();
        size_t resultsSize = FireStarterResults::ResultsSize(settings.m_registers, settings.m_variations);
        checkCUDAErrors(cudaMemcpyAsync(m_fireShowResults, state.Results(), resultsSize, cudaMemcpyHostToDevice, stream));
        size_t instructionsSize = FireStarterInstructions::InstructionsSize(settings.m_instructions);
        checkCUDAErrors(cudaMemcpyAsync(m_fireShowInstructions, state.m_program.OptimizedInstructions(), instructionsSize, cudaMemcpyHostToDevice, stream));

        // Erase the frame buffer
        m_window.Erase(stream);

        // Launch the display kernel
        int threadsPerBlock = BLOCK_THREADS;
        int blocksPerGrid = (m_window.m_width + threadsPerBlock - 1) / threadsPerBlock;
        dim3 cudaBlockSize(threadsPerBlock, 1, 1);
        dim3 cudaGridSize(blocksPerGrid, 1, 1);

        void* arr[] = { reinterpret_cast<void*>(&m_fireShowResults),
                        reinterpret_cast<void*>(&m_fireShowInstructions),
                        reinterpret_cast<void*>(&m_window.m_deviceBase),
                        reinterpret_cast<void*>(&m_window.m_width),
                        reinterpret_cast<void*>(&m_window.m_height),
                        reinterpret_cast<void*>(&settings.m_variations) };

        checkCUDAErrors(cuLaunchKernel(m_fireShowFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            stream,                                             // stream
            &arr[0],                                            // arguments
            0));

        // Display the buffer in the window and synchronize the stream.
        m_window.DisplayImage(stream);
    }, sync);
} // FireShow

void FireStarterShow::FireSolution(bool sync)
{
    Dispatch([this] {
        m_window.Erase();
        std::string statusString = "FireStarter:";
        uchar4* pixels = (uchar4*)m_window.GetPixels();
        unsigned int width = m_window.m_width;
        unsigned int height = m_window.m_height;
        float maxError = 0.0f;
        for (unsigned int v = 0; v < m_settings.m_variations; v++) {
            int xScale = height / 8;
            int yScale = height / 16;
            for (unsigned int y = 0; y < height; y++) {
                int x0 = (width / 2) - xScale;
                int x1 = (width / 2) + xScale;
                if (x0 >= 0) {
                    uchar4& pixel(pixels[y * width + x0]);
                    pixel.x = 64;
                    pixel.y = 128;
                    pixel.z = 64;
                };
                if (x1 < (int)width) {
                    uchar4& pixel(pixels[y * width + x1]);
                    pixel.x = 64;
                    pixel.y = 128;
                    pixel.z = 64;
                };
            }
            for (unsigned int x = 0; x < width; x++) {
                float theta = TARGET_PI * ((x - width * 0.5f) / xScale + 1.0f);
                float center = height * 0.66f;
                float target = SolutionTarget(theta, v);
#if SOLUTION_VARIATIONS == 1
                float solution = Solution(theta);
#else
                float solution = Solution(theta, v);
#endif
                if ((theta >= SOLUTION_MIN) && (theta <= SOLUTION_MAX)) {
                    float error = fabsf(solution - target);
                    maxError = max(maxError, error);
                }
                int y = (int)(center + target * yScale);
                if ((y >= 0) && (y < (int)height)) {
                    uchar4& pixel(pixels[y * width + x]);
                    pixel.x = 255;
                    pixel.y = 128;
                };
                y = (int)(center + solution * yScale);
                if ((y >= 0) && (y < (int)height)) {
                    uchar4& pixel(pixels[y * width + x]);
                    pixel.x = pixel.y = pixel.z = 255;
                };
            }
            statusString += Format(" Solution %d = %f", v, maxError);
        }
        m_window.DisplayImage(false);
        m_window.DisplayText(statusString);
    }, sync);
} // FireSolution

void FireStarterShow::RenderStatus(const FireStarterState& bestState, const FireStarterState& state, double runTime, double generationTime, double oldResult, double average, double testError, bool sync)
{
    DispatchSync([this, bestState, state, runTime, generationTime, oldResult, average, testError] {
        // Create the CUDA device text.
        static std::string cudaText;
        if (cudaText.empty()) {
            CUDAContext::CUDAText(cudaText);
            cudaText += "\r\n";
        }

        // Create the settings text.
        const FireStarterSettings& settings = state.Settings();
        static std::string settingsText;
        if (settingsText.empty()) {
            FireStarterProgram::SettingsText(settings, settingsText);
            settingsText += "\r\n";
        }

        // Create the hash file.
        static std::string hashFilePath;
        if (hashFilePath.empty()) {
            hashFilePath = Format("Logs\\%s_Hash.txt", FileNameDate().c_str());
            FireStarterCode::AppendCode(hashFilePath, cudaText);
            FireStarterCode::AppendCode(hashFilePath, settingsText);
        }

        // Update the hash file.
        std::string hashString = Format("%s: Generation:%4u  Best Generation:%4u", settings.Mode(), state.m_generation, bestState.m_generation);
        const FireStarterResults* stateResults = state.Results();
        uint64_t resultHash = MurmurHash64(stateResults, state.ResultsSize());
        uint64_t programHash = MurmurHash64(state.m_program.OptimizedInstructions(), state.m_program.InstructionsSize());
        hashString += Format("  Result=%.8f  Seed=%8u  ResultHash=%04X  ProgramHash=%04X\r\n", state.m_maxResult, settings.m_seed + state.m_generation, (unsigned short)resultHash, (unsigned short)programHash);
        FireStarterCode::AppendCode(hashFilePath, hashString);
        //  m_output.Output(hashString);

                // Create the log file.
        static std::string logFilePath;
        if (logFilePath.empty()) {
            logFilePath = Format("Logs\\%s_%s.txt", FileNameDate().c_str(), settings.Mode());
            FireStarterCode::AppendCode(logFilePath, cudaText);
            FireStarterCode::AppendCode(logFilePath, settingsText);
        }

        // Update the log file and window status text.
        std::string statusString;
        unsigned int unit = (unsigned int)(state.m_index % settings.m_units);
        unsigned int test = (unsigned int)state.m_test;
        float newResult = state.m_maxResult;
        float bestResult = bestState.m_maxResult;
        bool isBestState = (state.m_index == bestState.m_index) && (state.m_generation == bestState.m_generation);
        if (settings.m_mode == FIRESTARTER_RANDOM) {
            statusString = Format("%s: Seed=%u  Generation=%u  Result=%.8f  Average=%.8f  Best=%.8f  BestSeed=%u  Time=%.4f Seconds  Run Time=%.4f Seconds  TestError=%.8f", settings.Mode(), settings.m_seed + state.m_generation, state.m_generation, newResult, average, bestResult, bestState.m_program.m_settings.m_seed + bestState.m_generation, generationTime, runTime, testError);
            for (unsigned int v = 0; v < settings.m_variations; v++)
                statusString += Format("  V:%d=%.8f", v, state.Results()->MinResult(v));
        } else {
            statusString = Format("%s: Seed=%u", settings.Mode(), settings.m_seed);
    #if FIRESTARTER_TEST_SEEDS
            statusString += Format("  Test=%u", test);
    #endif
            if (settings.m_units > 1)
                statusString += Format("  Unit=%u", unit);

            statusString += Format("  Generation=%u  Age=%u", state.m_generation, state.m_generation - bestState.m_generation);

            if ((settings.m_mode == FIRESTARTER_EVOLVE) && (settings.m_units > 1)) {
                if ((newResult == bestResult) && isBestState)
                    statusString += " *";
                else if (newResult < oldResult)
                    statusString += " >";
                else
                    statusString += "  ";
                statusString += Format("New Result=%.8f  Old Result=%.8f", newResult, oldResult);
            } else {
                if ((newResult == bestResult) && isBestState)
                    statusString += " *";
                else
                    statusString += "  ";
                statusString += Format("Result=%.8f", state.m_maxResult);
            }

            statusString += Format("  Best=%.8f  BestGen=%u  Time=%.4f Seconds  Run Time=%.4f Seconds  TestError=%.8f", bestResult, bestState.m_generation, generationTime, runTime, testError);
        }

        // Update the log file.
        FireStarterCode::AppendCode(logFilePath, statusString + "\r\n");
        if ((unit == settings.m_units - 1) && (settings.m_units > 1))
            FireStarterCode::AppendCode(logFilePath, "\r\n");

        // Update the window status.
        m_window.DisplayText(statusString);
    });
} // RenderStatus

bool FireStarterShow::LoadFireShowCode(void)
{
    if (!FireStarterCode::LoadCode("FireShow.cu", m_fireShowCode))
        return false;
    return true;
} // LoadFireShowCode

FireStarterShow::FireStarterShow(FireStarterWindow* window, const FireStarterSettings& settings) : m_window(window), m_settings(settings)
{
    m_settings = settings;

    DispatchSync([this] {
        if ((m_settings.m_mode != FIRESTARTER_SOLUTION) && LoadFireShowCode()) {
            CUDAContext* context = Context();
            CUstream stream = context->Stream();

            // Create the code generator.
            m_generate = new FireStarterGenerate(context);

            // Allocate the results and instructions.
            checkCUDAErrors(cudaMallocAsync(&m_fireShowResults, FireStarterResults::ResultsSize(m_settings.m_registers, m_settings.m_variations), stream));
            checkCUDAErrors(cudaMallocAsync(&m_fireShowInstructions, FireStarterInstructions::InstructionsSize(m_settings.m_instructions), stream));
            context->Synchronize();

            // Compile FireShow.
            if (CUDACompile::CompileProgram(m_fireShowModule, m_fireShowCode, "FireShow"))
                m_fireShowFunction = CUDACompile::GetFunction(m_fireShowModule, "FireShow");
        }
    });
} // FireStarterShow

FireStarterShow::~FireStarterShow(void)
{
    DispatchSync([this] {
        CUDAContext* context = Context();
        CUstream stream = context->Stream();

        if (m_fireShowResults) {
            checkCUDAErrors(cudaFreeAsync(m_fireShowResults, stream));
            m_fireShowResults = nullptr;
        }
        if (m_fireShowInstructions) {
            checkCUDAErrors(cudaFreeAsync(m_fireShowInstructions, stream));
            m_fireShowInstructions = nullptr;
        }
        if (m_fireShowModule) {
            checkCUDAErrors(cuModuleUnload(m_fireShowModule));
            m_fireShowModule = nullptr;
        }
        context->Synchronize();
        MainSynchronize();
        m_window.Clear();
    });
} // ~FireStarterShow