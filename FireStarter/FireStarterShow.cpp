#include "FireStarterShow.h"
#include "FireStarterSource.h"
#include "FireStarter_Solution.h"
#include "CUDACompile.h"

void FireStarterShow::LoadFireEvaluator(void)
{
    if (FireStarterSource::LoadSource(m_fireEvaluateCode, "FireEvaluate.cu"))
        DispatchSync([this] {
            if (CUDACompile::CompileProgram(m_fireEvaluateModule, m_fireEvaluateCode, EVOLVE_PROGRAM_NAME)) {
                m_fireEvaluateFunction = CUDACompile::GetFunction(m_fireEvaluateModule, "Evaluate");
                if (!m_fireEvaluateFunction)
                    CUDACompile::ReleaseModule(m_fireEvaluateModule);
            } else {
                m_fireEvaluateModule = nullptr;
                m_fireEvaluateFunction = nullptr;
            }
        });
} // LoadFireEvaluator

void FireStarterShow::DeallocateEvaluateData(void)
{
    if (m_evaluateSize) {
        checkCUDAErrors(cudaFreeHost(m_hostTargetData));
        m_hostTargetData = nullptr;
        checkCUDAErrors(cudaFreeAsync(m_deviceTargetData, Stream()));
        m_deviceTargetData = nullptr;
        checkCUDAErrors(cudaFreeHost(m_hostEvaluateData));
        m_hostEvaluateData = nullptr;
        checkCUDAErrors(cudaFreeAsync(m_deviceEvaluateData, Stream()));
        m_deviceEvaluateData = nullptr;
        m_evaluateSize = 0;
    }
} // DeallocateEvaluateData

void FireStarterShow::DeallocateCodeData(void)
{
    if (m_codeSize) {
        checkCUDAErrors(cudaFreeAsync(m_deviceCode, Stream()));
        m_deviceCode = nullptr;
        m_codeSize = 0;
    }
    if (m_dataSize) {
        checkCUDAErrors(cudaFreeAsync(m_deviceData, Stream()));
        m_deviceData = nullptr;
        m_dataSize = 0;
    }
} // DeallocateCodeData(void);

void FireStarterShow::AllocateEvaluateData(size_t evaluateSize, size_t codeSize, size_t dataSize)
{
    if ((evaluateSize != m_evaluateSize) || (codeSize != m_codeSize) || (dataSize != m_dataSize)) {
        if (evaluateSize != m_evaluateSize) {
            DeallocateEvaluateData();
            m_evaluateSize = evaluateSize;
            checkCUDAErrors(cudaMallocHost(&m_hostTargetData, m_evaluateSize));
            checkCUDAErrors(cudaMallocAsync(&m_deviceTargetData, m_evaluateSize, Stream()));
            checkCUDAErrors(cudaMallocHost(&m_hostEvaluateData, m_evaluateSize));
            checkCUDAErrors(cudaMallocAsync(&m_deviceEvaluateData, m_evaluateSize, Stream()));
        }
        if ((codeSize != m_codeSize) || (dataSize != m_dataSize)) {
            DeallocateCodeData();
            m_codeSize = codeSize;
            m_dataSize = dataSize;
            checkCUDAErrors(cudaMallocAsync(&m_deviceCode, m_codeSize, Stream()));
            checkCUDAErrors(cudaMallocAsync(&m_deviceData, m_dataSize, Stream()));
        }
        Context()->Synchronize();
    }
} // AllocateEvaluateData

bool FireStarterShow::EvaluateData(const FireStarterState& state, unsigned int evaluateWidth, float thetaStart, float thetaEnd, unsigned int variation)
{
    const FireStarterSettings& settings = state.Settings();
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (evaluateWidth + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    if (m_codeSize)
        checkCUDAErrors(cudaMemcpyAsync(m_deviceCode, state.Code(), m_codeSize, cudaMemcpyHostToDevice, Stream()));

    // If the FireEvaluate code was compiled, use it to generate the target and evaluate arrays.
    // Note: The purpose is generality not speed. This allows the settings and instruction set to be modified after the main code is compiled.
    if (m_fireEvaluateFunction) {
        const FireStarterResult* result = state.Result(variation);

        if (m_dataSize)
            checkCUDAErrors(cudaMemcpyAsync(m_deviceData, result->Data(), m_dataSize, cudaMemcpyHostToDevice, Stream()));

        void* arr[] = { reinterpret_cast<void*>(&m_deviceTargetData),
                        reinterpret_cast<void*>(&m_deviceEvaluateData),
                        reinterpret_cast<void*>(&evaluateWidth),
                        reinterpret_cast<void*>(&thetaStart),
                        reinterpret_cast<void*>(&thetaEnd),
                        reinterpret_cast<void*>(&m_deviceCode),
                        reinterpret_cast<void*>(&m_deviceData),
                        reinterpret_cast<void*>(&variation)
        };

        checkCUDAErrors(cuLaunchKernel(m_fireEvaluateFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            Stream(),                                           // stream
            &arr[0],                                            // arguments
            0));

        checkCUDAErrors(cudaMemcpyAsync(m_hostTargetData, m_deviceTargetData, m_evaluateSize, cudaMemcpyDeviceToHost, Stream()));
        checkCUDAErrors(cudaMemcpyAsync(m_hostEvaluateData, m_deviceEvaluateData, m_evaluateSize, cudaMemcpyDeviceToHost, Stream()));
        Context()->Synchronize();
        return true;
    }
    return false;
} // EvaluateData

void FireStarterShow::FireShow(const FireStarterState& state, bool sync)
{
    Dispatch([this, state] {
        // Setup the data
        const FireStarterSettings& settings = state.Settings();        
        m_window.Erase();
        uchar4* pixels = (uchar4*)m_window.GetPixels();
        unsigned int width = m_window.m_width;
        unsigned int height = m_window.m_height;
        int xScale = height / 8;
        int yScale = height / 16;
        float thetaStart = TARGET_PI * ((-0.5f * width) / xScale + 1.0f);
        float thetaEnd = TARGET_PI * ((0.5f * width) / xScale + 1.0f);
        float maxError = 0.0f;
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

        // Allocate the host and GPU memory.
        size_t evaluateSize = width * sizeof(float);
        size_t codeSize = FireStarterCode::CodeSize(settings);
        size_t dataSize = FireStarterData::DataSize(settings);
        AllocateEvaluateData(evaluateSize, codeSize, dataSize);

        // Evaluate the FireShow data.
        for (unsigned int v = 0; v < settings.m_variations; v++) {
            if (EvaluateData(state, width, thetaStart, thetaEnd, v)) {
                for (unsigned int x = 0; x < width; x++) {
                    float theta = TARGET_PI * ((x - width * 0.5f) / xScale + 1.0f);
                    float center = height * 0.66f;
                    float target = m_hostTargetData[x];
                    float result = m_hostEvaluateData[x];

                    if ((theta >= settings.m_targetMin) && (theta <= settings.m_targetMax)) {
                        float error = fabsf(result - target);
                        maxError = max(maxError, error);
                    }
                    long long y = (long long)(center + target * yScale);
                    if ((y >= 0) && (y < height)) {
                        uchar4& pixel(pixels[y * width + x]);
                        pixel.x = 255;
                        pixel.y = 128;
                    };
                    y = (long long)(center + result * yScale);
                    if ((y >= 0) && (y < height)) {
                        uchar4& pixel(pixels[y * width + x]);
                        pixel.x = pixel.y = pixel.z = 255;
                    };
                }
            } else {
                // As a fallback and validation test, generate the target and evaluate the code on the CPU.
                const FireStarterResult* result = state.Result(v);
                const FireStarterCode* code = state.Code();
                for (unsigned int x = 0; x < width; x++) {
                    FireStarterData data = result->Data();
                    float theta = TARGET_PI * ((x - width * 0.5f) / xScale + 1.0f);
                    float center = height * 0.66f;
                    float target = Target(theta, v);
                    float result = code->Evaluate(data, theta);

                    if ((theta >= settings.m_targetMin) && (theta <= settings.m_targetMax)) {
                        float error = fabsf(result - target);
                        maxError = max(maxError, error);
                    }
                    int y = (int)(center + target * yScale);
                    if ((y >= 0) && (y < (int)height)) {
                        uchar4& pixel(pixels[y * width + x]);
                        pixel.x = 255;
                        pixel.y = 128;
                    };
                    y = (int)(center + result * yScale);
                    if ((y >= 0) && (y < (int)height)) {
                        uchar4& pixel(pixels[y * width + x]);
                        pixel.x = pixel.y = pixel.z = 255;
                    };
                }
            }
        }
        m_window.DisplayImage();
    }, sync);
} // FireShow

void FireStarterShow::FireSolution(FireStarterWindow& window)
{
    window.Erase();
    std::string statusString = "FireStarter:";
    uchar4* pixels = (uchar4*)window.GetPixels();
    unsigned int width = window.m_width;
    unsigned int height = window.m_height;
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
    window.DisplayImage();
    window.DisplayText(statusString);
} // FireSolution

void FireStarterShow::ShowStatus(const FireStarterState& bestState, const FireStarterState& state, unsigned long long generation, double generationTime, double runTime, double bestError, bool sync)
{
    // Create the CUDA device text.
    static std::string cudaText;
    if (cudaText.empty()) {
        CUDAContext::CUDAText(cudaText);
        cudaText += "\r\n";
    }

    // Create the settings text.
    // Note: Must get the settings from bestState because state can be in optimize mode.
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
        settingsPath = Format("Logs\\%s_%s", FileNameDate(SimpleTimer::RunSecond()).c_str(), settingsFileName.c_str());
        std::string settingsCode;
        if (FireStarterSource::LoadSource(settingsCode, settingsFileName))
            FireStarterSource::SaveSource(settingsCode, settingsPath);
    }

    // Create the log file.
    unsigned int test = (unsigned int)state.m_test;
    std::string logPath;
    if (settings.m_tests > 0) {
        static std::vector<std::string> logFilePaths;
        if (logFilePaths.empty())
            logFilePaths.resize(FIRESTARTER_START_TEST + settings.m_tests);
        if (logFilePaths[test].empty()) {
            logFilePaths[test] = Format("Logs\\%s_%s_%d.txt", FileNameDate(SimpleTimer::RunSecond()).c_str(), settings.Mode(), test);
            Dispatch([test] {
                FireStarterSource::AppendSource(cudaText, logFilePaths[test]);
                FireStarterSource::AppendSource(settingsText, logFilePaths[test]);
            }, sync);
        }
        logPath = logFilePaths[test];
    } else {
        static std::string logFilePath;
        if (logFilePath.empty()) {
            logFilePath = Format("Logs\\%s_%s_%d.txt", FileNameDate(SimpleTimer::RunSecond()).c_str(), settings.Mode(), test);
            Dispatch([] {
                FireStarterSource::AppendSource(cudaText, logFilePath);
                FireStarterSource::AppendSource(settingsText, logFilePath);
            }, sync);
        }
        logPath = logFilePath;
    }

    // Update the log file and window status text.
    const std::vector<FireStarterResult*> results = state.Results();
    std::string statusString;
    float bestResult = bestState.m_maxResult;
    bool isBestState = (state.m_id == bestState.m_id) && (state.m_generation == bestState.m_generation);
    if (state.PassMode() == FIRESTARTER_RANDOM) {
        statusString = Format("%s: Seed=%10u  Generation=%3u  Result=%.8f  Best=%.8f  BestError=%.8f  BestSeed=%10u  Time=%.4f Seconds  Run Time=%.4f Seconds", state.Mode(), settings.m_evolveSeed + state.m_generation, generation, state.m_maxResult, bestResult, bestError, bestState.m_program.m_settings.m_evolveSeed + bestState.m_generation, generationTime, runTime);
        for (unsigned int v = 0; v < settings.m_variations; v++)
            statusString += Format("  V:%d=%.8f", v, results[v]->MinResult());
    } else {
        statusString = Format("%s: Seed=%u", state.Mode(), settings.m_evolveSeed);
        if ((settings.m_tests > 0) || test)
            statusString += Format("  Test=%2u", test);
        if ((state.PassMode() == FIRESTARTER_EVOLVE_CPU) || (state.PassMode() == FIRESTARTER_EVOLVE_GPU) || (state.PassMode() == FIRESTARTER_EVOLVE_NEW)) {
            if (state.PassMode() == FIRESTARTER_EVOLVE_CPU)
                statusString += Format("  Index=%4llu  Id=%4llu", state.m_index, state.m_id);
            statusString += Format("  Generation=%3u", generation);
            if (state.PassMode() == FIRESTARTER_EVOLVE_CPU)
                statusString += Format("  Age=%3u  Evolution=%2u  Weight=%.8f", state.m_age, state.m_evolution, state.m_evolveWeight);

            std::string resultString;
            if (state.m_maxResult >= state.m_oldResult)
                resultString = " Bad Result";
            else if ((state.m_maxResult == bestResult) && isBestState)
                resultString = "*New Result";
            else
                resultString = ">New Result";
            statusString += Format("  Old Result=%2.8f %s=%.8f", state.m_oldResult, resultString.c_str(), state.m_maxResult);
            if ((state.PassMode() == FIRESTARTER_EVOLVE_GPU) || (state.PassMode() == FIRESTARTER_EVOLVE_NEW))
                statusString += Format("  MinIndex=%u  EvolveAge=%u", state.m_minIndex, (unsigned int)*results[0]->EvolveAge1());
        } else if ((settings.m_mode == FIRESTARTER_RANDOM) || (settings.m_mode == FIRESTARTER_EVOLVE_CPU) || (settings.m_mode == FIRESTARTER_OPTIMIZE)) {
            statusString += Format("  Generation=%3u", generation);
            if ((state.PassMode() == FIRESTARTER_OPTIMIZE) || (state.PassMode() == FIRESTARTER_SPEED_TEST)) {
                if (settings.m_optimize > 1)
                    statusString += Format("  Optimize=%u", state.m_optimize_pass);
            } else {
                if (settings.m_units > 1)
                    statusString += Format("  Unit=%u", state.m_index % settings.m_units);
            }
            if ((state.m_maxResult == bestResult) && isBestState)
                statusString += " *";
            else
                statusString += "  ";
            statusString += Format("Result=%.8f", state.m_maxResult);
        } else if (settings.m_mode == FIRESTARTER_SINSIM)
            statusString += Format("  Generation=%3u", generation);

        statusString += Format("  Best=%.8f ", bestResult);
        if (state.PassMode() == FIRESTARTER_EVOLVE_CPU)
            statusString += Format("BestError=%.8f", bestResult, bestError);
        if (!((state.PassMode() == FIRESTARTER_OPTIMIZE) ||(state.PassMode() == FIRESTARTER_SPEED_TEST)))
            statusString += Format("  BestAge=%u", bestState.m_age);

        // Comment out this line when doing diffs to compare the results.
        statusString += Format("  Time=%.1f  Run Time=%.1f", generationTime, runTime);
    }

    // Update the log file.
    Dispatch([logPath, statusString] { FireStarterSource::AppendSource(statusString + "\r\n", logPath); }, sync);

    // Update the window status.
    m_window.DisplayText(statusString, sync);
} // ShowStatus

FireStarterShow::FireStarterShow(const FireStarterWindow& window) : CUDAThread("FireStarterShow"), m_window(window)
{
    LoadFireEvaluator();
} // FireStarterShow

FireStarterShow::~FireStarterShow(void)
{
    DispatchSync([this] {
        DeallocateEvaluateData();
        DeallocateCodeData();
        if (m_fireEvaluateModule) {
            checkCUDAErrors(cuModuleUnload(m_fireEvaluateModule));
            m_fireEvaluateModule = nullptr;
        }
        Context()->Synchronize();
        MainSynchronize();
        m_window.Clear();
    });
} // ~FireStarterShow