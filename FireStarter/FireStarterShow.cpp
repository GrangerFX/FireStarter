#include "FireStarterShow.h"
#include "FireStarterSource.h"
#include "FireStarter_Solution.h"
#include "FireStarterUtil.h"
#include "FireMoneyMaker.h"
#include "CUDACompile.h"

void FireStarterShow::DeallocateEvaluateData(void)
{
    if (m_evaluateSize) {
        m_targetData.clear();
        m_evaluateData.clear();
        m_evaluateSize = 0;
    }
} // DeallocateEvaluateData

void FireStarterShow::AllocateEvaluateData(size_t evaluateSize)
{
    if (evaluateSize != m_evaluateSize) {
        if (evaluateSize != m_evaluateSize) {
            DeallocateEvaluateData();
            m_evaluateSize = evaluateSize;
            m_targetData.resize(evaluateSize, 0.0f);
            m_evaluateData.resize(evaluateSize, 0.0f);
        }
        Context()->Synchronize();
    }
} // AllocateEvaluateData

void FireStarterShow::EvaluateEvolve(const FireStarterState& state, unsigned int evaluateWidth, float thetaStart, float thetaEnd, unsigned int variation)
{
    // The show data is generated on the CPU which prevents it from interrupting the GPU.
    // Note: TODO: Use multiple CPU threads to speed this up.
    const FireStarterSettings& settings = state.Settings();
    FireStarterDataVector dataVector;
    const FireStarterCode* code = state.Code();
    float thetaStep = (thetaEnd - thetaStart) / evaluateWidth;
    for (unsigned int i = 0; i < evaluateWidth; i++) {
        state.DataVector(dataVector, variation);
        float theta = thetaStart + i * thetaStep;
        m_targetData[i] = Target(theta, variation + FIRESTARTER_VARIATION);
        m_evaluateData[i] = code->Evaluate(dataVector.Data(), theta, settings.m_instructions);
    }
} // EvaluateEvolve

void FireStarterShow::EvaluateSinSim(const FireStarterState& state, unsigned int evaluateWidth)
{
    // The show data is generated on the CPU which prevents it from interrupting the GPU.
    // Note: The SinSim data must be evaluated on a single thread.
    const FireStarterSettings& settings = state.Settings();
    SinSimNetwork network = *state.Network();
    for (unsigned int i = 0; i < evaluateWidth; i++) {
        float input = SinSimNetwork::SinSimInputSample(i);
        m_targetData[i] = SinSimNetwork::SinSimTargetSample(i);
        m_evaluateData[i] = network.SinSimTestNetwork(input);
    }
} // EvaluateSinSim

void FireStarterShow::FireShow(const FireStarterState& state, const MoneyMakerStocks* stocks, const MoneyMakerStocks* tradingResults)
{
    DispatchAsync([this, state, stocks, tradingResults] {
        const FireStarterSettings& settings = state.Settings();
        uchar4* pixels = (uchar4*)m_window.GetPixels();
        unsigned int width = m_window.m_width;
        unsigned int height = m_window.m_height;

        // Erase the window.
        m_window.Erase();

        if (settings.m_mode == FIRESTARTER_MONEYMAKER) {
            const MoneyMakerStock& stock = stocks->Stock(settings.m_stock);
            const MoneyMakerStock& results = tradingResults->Stock(settings.m_stock);
            float minValue = stock.minValue;
            float maxValue = stock.maxValue;
            float lastValue = stock[0];
            float yScale = 0.5f * (float)height / (maxValue - minValue);
            unsigned int numDays = MIN(stocks->numDays, tradingResults->numDays);
            float price = 0.0f;
            bool holding = false;
            bool good = true;
            for (unsigned int x = 0; x < width; x++) {
                unsigned int i = (x * numDays) / width;
                float curValue = stock[i];
                int y = (int)(height * 0.75f - (curValue - minValue) * yScale);
                if ((y >= 0) && ((unsigned int)y < height)) {
                    if (results[i] >= 0.0f) {
                        unsigned int j = i + 1;
                        if (j >= numDays)
                            j = numDays - 1;
                        good = stock[j] >= stock[i];
                        holding = true;
                    } else
                        holding = false;

                    uchar4& pixel(pixels[y * width + x]);
                    if (holding) {
                        if (good) {
                            pixel.x = 128;
                            pixel.y = 255;
                            pixel.z = 128;
                        } else {
                            pixel.x = 128;
                            pixel.y = 128;
                            pixel.z = 255;
                        }
                    } else {
                        pixel.x = 128;
                        pixel.y = 128;
                        pixel.z = 128;
                    }
                }
            }
        } else {
            int xScale = height / 8;
            int yScale = height / 16;
            float thetaStart = TARGET_PI * ((-0.5f * width) / xScale + 1.0f);
            float thetaEnd = TARGET_PI * ((0.5f * width) / xScale + 1.0f);
            float maxError = 0.0f;

            // The -PI to +PI evaluation boundaries.
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

            if (settings.m_mode == FIRESTARTER_SINSIM) {
                size_t codeSize = 0;
                size_t evaluateSize = width * sizeof(float);
                AllocateEvaluateData(evaluateSize);

                // Evaluate the SinSim FireShow data.
                EvaluateSinSim(state, width);
                for (unsigned int x = 0; x < width; x++) {
                    float theta = TARGET_PI * ((x - width * 0.5f) / xScale + 1.0f);
                    float center = height * 0.66f;
                    float target = m_targetData[x];
                    float result = m_evaluateData[x];

                    if ((theta >= settings.m_targetMin) && (theta <= settings.m_targetMax)) {
                        float error = fabsf(result - target);
                        maxError = max(maxError, error);
                    }
                    long long y = (long long)(center + target * yScale);
                    if ((y >= 0) && (y < height)) {
                        uchar4& pixel(pixels[y * width + x]);
                        pixel.x = 255;
                        pixel.y = 128;
                    }
                    y = (long long)(center + result * yScale);
                    if ((y >= 0) && (y < height)) {
                        uchar4& pixel(pixels[y * width + x]);
                        pixel.x = pixel.y = pixel.z = 255;
                    };
                }
            } else {
                size_t evaluateSize = width * sizeof(float);
                AllocateEvaluateData(evaluateSize);

                // Evaluate the evolve FireShow data.
                for (unsigned int v = 0; v < settings.m_variations; v++) {
                    EvaluateEvolve(state, width, thetaStart, thetaEnd, v);
                    for (unsigned int x = 0; x < width; x++) {
                        float theta = TARGET_PI * ((x - width * 0.5f) / xScale + 1.0f);
                        float center = height * 0.66f;
                        float target = m_targetData[x];
                        float result = m_evaluateData[x];

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
                }
            }
        }
        m_window.DisplayImage();
    });
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
            float target = SolutionTarget(theta, v + SOLUTION_VARIATION);
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
        statusString += Format(" Solution %d = %.8f", v, maxError);
    }
    window.DisplayImage();
    window.DisplayText(statusString);
} // FireSolution

void FireStarterShow::ShowStatus(const FireStarterState& bestState, const FireStarterState& state, unsigned long long generation, double generationTime, double runTime, bool sync)
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
        FireStarterState::SettingsText(settings, settingsText);
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
    unsigned long long test = state.m_test;
    std::string logPath;
    if (settings.m_tests > 0) {
        static std::vector<std::string> logFilePaths;
        if (logFilePaths.empty())
            logFilePaths.resize(FIRESTARTER_START_TEST + settings.m_tests);
        if (logFilePaths[test].empty()) {
            logFilePaths[test] = Format("Logs\\%s_%s_%lld.txt", FileNameDate(SimpleTimer::RunSecond()).c_str(), settings.Mode(), test);
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
    std::string statusString;
    float maxResult = state.MaxResults();
    float bestResult = bestState.MaxResults();
    float bestError = bestState.m_precision;
    bool isBestState = (state.m_id == bestState.m_id) && (state.m_generation == bestState.m_generation);
    if (state.PassMode() == FIRESTARTER_RANDOM) {
        statusString = Format("%s: Seed=%10u  Generation=%3u  Result=%.8f  Best=%.8f  BestError=%.8f  BestSeed=%10u  Time=%.4f Seconds  Time=%.4f Seconds Run Time=%.4f Seconds", state.Mode(), settings.m_evolveSeed + state.m_generation, generation, maxResult, bestResult, bestError, bestState.m_settings.m_evolveSeed + bestState.m_generation, generationTime, runTime);
    } else if (state.PassMode() == FIRESTARTER_MONEYMAKER) {
#if MONEYMAKER_WINS
        float returns = 100.0f / bestResult;  // Remove inversion.
#else
        float returns = MoneyMakerReturns(1.0f - bestResult); // Remove inversion.
#endif
        statusString = Format("%s: Generation=%3u  Best=%.8f%%  Time=%.4f Seconds  Run Time=%.4f Seconds", state.Mode(), generation, returns, generationTime, runTime);
    } else {
        statusString = Format("%s: Seed=%u", state.Mode(), settings.m_evolveSeed);
        if ((settings.m_tests > 0) || test)
            statusString += Format("  Test=%2u", test);
        if ((state.PassMode() == FIRESTARTER_SELECT) || (state.PassMode() == FIRESTARTER_EVOLVE_CPU) || (state.PassMode() == FIRESTARTER_EVOLVE_GPU) || (state.PassMode() == FIRESTARTER_EVOLVE_NEW) || (state.PassMode() == FIRESTARTER_EVOLVE_SINSIM) || (state.PassMode() == FIRESTARTER_MONEYMAKER)) {
            if (state.PassMode() == FIRESTARTER_EVOLVE_CPU)
                statusString += Format("  Index=%4llu  Id=%4llu", state.m_index, state.m_id);
            statusString += Format("  Generation=%3u", generation);
            if (state.PassMode() == FIRESTARTER_EVOLVE_CPU)
                statusString += Format("  Age=%3u  Evolution=%2u  Weight=%.8f", state.m_age, state.m_evolution, state.m_evolveWeight);

            std::string resultString;
            if (maxResult >= state.m_oldResult)
                resultString = " Bad Result";
            else if ((maxResult == bestResult) && isBestState)
                resultString = "*New Result";
            else
                resultString = ">New Result";
            statusString += Format("  Old Result=%2.8f %s=%.8f", state.m_oldResult, resultString.c_str(), maxResult);
            if ((state.PassMode() == FIRESTARTER_SELECT) || (state.PassMode() == FIRESTARTER_EVOLVE_GPU) || (state.PassMode() == FIRESTARTER_EVOLVE_NEW) || (state.PassMode() == FIRESTARTER_EVOLVE_SINSIM) || (state.PassMode() == FIRESTARTER_MONEYMAKER)) {
                statusString += Format("  MinIndex=%u", state.m_minIndex);
                if (settings.m_variations == 1)
                    statusString += Format("  EvolveAge=%u", state.m_minIndex, (unsigned int)state.EvolveAge1(0));
            }
        } else if ((settings.m_mode == FIRESTARTER_RANDOM) || (settings.m_mode == FIRESTARTER_EVOLVE_CPU) || (settings.m_mode == FIRESTARTER_OPTIMIZE)) {
            statusString += Format("  Generation=%3u", generation);
            if ((state.PassMode() == FIRESTARTER_OPTIMIZE) || (state.PassMode() == FIRESTARTER_SPEED_TEST)) {
                if (settings.m_optimize > 1)
                    statusString += Format("  Optimize=%u", state.m_optimize_pass);
            } else {
                if (settings.m_units > 1)
                    statusString += Format("  Unit=%u", state.m_index % settings.m_units);
            }
            if ((maxResult == bestResult) && isBestState)
                statusString += " *";
            else
                statusString += "  ";
            statusString += Format("Result=%.8f", maxResult);
        } else if (settings.m_mode == FIRESTARTER_SINSIM)
            statusString += Format("  Generation=%3u", generation);

        statusString += Format("  Best=%.8f ", bestResult);
        if (state.PassMode() == FIRESTARTER_EVOLVE_CPU)
            statusString += Format("BestError=%.8f", bestError);
        if (!((state.PassMode() == FIRESTARTER_OPTIMIZE) ||(state.PassMode() == FIRESTARTER_SPEED_TEST)))
            statusString += Format("  BestAge=%u", bestState.m_age);

        // Comment out this line when doing diffs to compare the results.
        statusString += Format("  Time=%.3f  Run Time=%.1f", generationTime, runTime);
    }

    // Update the log file.
    Dispatch([logPath, statusString] { FireStarterSource::AppendSource(statusString + "\r\n", logPath); }, sync);

    // Update the window status.
    m_window.DisplayText(statusString, sync);
} // ShowStatus

FireStarterShow::FireStarterShow(const FireStarterWindow& window) : CUDAThread("FireStarterShow"), m_window(window)
{
} // FireStarterShow

FireStarterShow::~FireStarterShow(void)
{
    DispatchSync([this] {
        DeallocateEvaluateData();
        MainSynchronize();
        m_window.Clear();
    });
} // ~FireStarterShow