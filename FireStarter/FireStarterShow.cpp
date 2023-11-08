#include "FireStarterShow.h"
#include "FireStarterCode.h"
#include "FireStarter_Solution.h"
#include "CUDACompile.h"

bool FireStarterShow::LoadFireShowCode(void)
{
    if (!FireStarterCode::LoadCode("FireShow.cu", m_fireShowCode))
        return false;
    return true;
} // LoadFireShowCode

void FireStarterShow::FireShow(const FireStarterState& state, bool sync)
{
    Dispatch([this, state] {
        // Setup the data
        CUDAContext* context = Context();
        CUstream stream = context->Stream();
        FireStarterSettings settings = state.Settings();

        // Compile FireShow.
        if (!m_fireShowModule && LoadFireShowCode() && CUDACompile::CompileProgram(m_fireShowModule, m_fireShowCode, "FireShow"))
            m_fireShowFunction = CUDACompile::GetFunction(m_fireShowModule, "FireShow");
        if (m_fireShowFunction) {
            // Allocate the results and instructions.
            if (!m_fireShowResults) {
                checkCUDAErrors(cudaMallocAsync(&m_fireShowResults, FireStarterResults::ResultsSize(settings.m_registers, settings.m_variations), stream));
                context->Synchronize();
            }
            if (!m_fireShowInstructions) {
                checkCUDAErrors(cudaMallocAsync(&m_fireShowInstructions, FireStarterInstructions::InstructionsSize(settings.m_instructions), stream));
                context->Synchronize();
            }

            size_t resultsSize = FireStarterResults::ResultsSize(settings.m_registers, settings.m_variations);
            checkCUDAErrors(cudaMemcpyAsync(m_fireShowResults, state.Results(), resultsSize, cudaMemcpyHostToDevice, stream));
            size_t instructionsSize = FireStarterInstructions::InstructionsSize(settings.m_instructions);
            checkCUDAErrors(cudaMemcpyAsync(m_fireShowInstructions, state.m_program.OptimizedInstructions(), instructionsSize, cudaMemcpyHostToDevice, stream));

            // Erase the frame buffer
            m_window.Erase(stream);

            // Launch the display kernel
            int threadsPerBlock = WARP_THREADS;
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
        }
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
        for (unsigned int v = 0; v < SOLUTION_VARIATIONS; v++) {
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
        m_window.DisplayImage();
        m_window.DisplayText(statusString);
    }, sync);
} // FireSolution

void FireStarterShow::RenderStatus(const FireStarterState& bestState, const FireStarterState& state, unsigned long long generation, double runTime, double generationTime, double oldResult, double newResult, double average, double bestError, bool sync)
{
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

    // Copy FireStarterSettings.h
    static std::string settingsPath;
    if (settingsPath.empty()) {
        const std::string settingsFileName = "FireStarterSettings.h";
        settingsPath = Format("Logs\\%s_%s", FileNameDate().c_str(), settingsFileName.c_str());
        std::string settingsCode;
        if (FireStarterCode::LoadCode(settingsFileName, settingsCode))
            FireStarterCode::SaveCode(settingsPath, settingsCode);
    }

    // Create the log file.
    unsigned int test = (unsigned int)state.m_test;
    std::string logPath;
    if (((settings.m_mode == FIRESTARTER_RANDOM) || (settings.m_mode == FIRESTARTER_EVOLVE)) && (settings.m_tests > 0)) {
        static std::vector<std::string> logFilePaths;
        if (logFilePaths.empty())
            logFilePaths.resize(FIRESTARTER_START_TEST + settings.m_tests);
        if (logFilePaths[test].empty()) {
            logFilePaths[test] = Format("Logs\\%s_%s_%d.txt", FileNameDate().c_str(), settings.Mode(), test);
            Dispatch([test] {
                FireStarterCode::AppendCode(logFilePaths[test], cudaText);
                FireStarterCode::AppendCode(logFilePaths[test], settingsText);
            }, sync);
        }
        logPath = logFilePaths[test];
    } else {
        static std::string logFilePath;
        if (logFilePath.empty()) {
            logFilePath = Format("Logs\\%s_%s.txt", FileNameDate().c_str(), settings.Mode());
            Dispatch([] {
                FireStarterCode::AppendCode(logFilePath, cudaText);
                FireStarterCode::AppendCode(logFilePath, settingsText);
            }, sync);
        }
        logPath = logFilePath;
    }

    // Update the log file and window status text.
    std::string statusString;
    float bestResult = bestState.m_maxResult;
    float firstResult = state.m_firstResult;
    bool isBestState = (state.m_id == bestState.m_id) && (state.m_generation == bestState.m_generation);
    if (state.PassMode() == FIRESTARTER_RANDOM) {
        statusString = Format("%s: Seed=%10u  Generation=%3u  Result=%.8f  Average=%.8f  Best=%.8f  BestError=%.8f  BestSeed=%10u  Time=%.4f Seconds  Run Time=%.4f Seconds", state.Mode(), settings.m_evolveSeed + generation, generation, newResult, average, bestResult, bestError, bestState.m_program.m_settings.m_evolveSeed + bestState.m_generation, generationTime, runTime);
        for (unsigned int v = 0; v < settings.m_variations; v++)
            statusString += Format("  V:%d=%.8f", v, state.Results()->MinResult(v));
    } else {
        statusString = Format("%s: Seed=%u", state.Mode(), settings.m_evolveSeed);
        if ((settings.m_tests > 0) || test)
            statusString += Format("  Test=%2u", test);
        if (state.PassMode() == FIRESTARTER_EVOLVE)
            statusString += Format("  Index=%2llu  Id=%2llu  CopyId=%2llu", state.m_index, state.m_id, state.m_copy_id);
        else if (settings.m_units > 1)
            statusString += Format("  Unit=%u", state.m_index % settings.m_units);
        statusString += Format("  Generation=%3u  Age=%3u  Evolution=%2u", generation, generation - state.m_generation, state.m_evolution);

        if (state.PassMode() == FIRESTARTER_EVOLVE) {
            std::string spaceString;
            if (newResult < 0.0f) {
                newResult = -newResult;
                spaceString = "Failed Skip";
            } else if (newResult >= oldResult)
                spaceString = " Bad Result";
            else if ((newResult == bestResult) && isBestState)
                spaceString = "*New Result";
            else
                spaceString = ">New Result";
             statusString += Format("  Skip Result=%.8f  Old Result=%.8f %s=%.8f", firstResult, oldResult, spaceString.c_str(), newResult);
         } else {
            if ((newResult == bestResult) && isBestState)
                statusString += " *";
            else
                statusString += "  ";
            statusString += Format("Result=%.8f", newResult);
        }
        statusString += Format("  Best=%.8f  BestError=%.8f  BestAge=%u", bestResult, bestError, generation - bestState.m_generation);

        // Include the time when not doing tests as it prevents doing diffs to compare the results.
        if (!settings.m_tests)
            statusString += Format("  Time=%.4f Seconds  Run Time=%.4f Seconds", generationTime, runTime);
    }

    // Update the log file.
    Dispatch([logPath, statusString] { FireStarterCode::AppendCode(logPath, statusString + "\r\n"); }, sync);

    // Update the window status.
    m_window.DisplayText(statusString, sync);
} // RenderStatus

FireStarterShow::FireStarterShow(const FireStarterWindow& window) : CUDAThread("FireStarterShow"), m_window(window)
{
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