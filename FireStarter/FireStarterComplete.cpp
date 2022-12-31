#include "FireStarterComplete.h"
#include "FireStarterCode.h"
#include "FireStarterState.h"
#include "FireStarter_Solution.h"
#include "CUDACompile.h"

bool FireStarterComplete::LoadSolutionTargetCode(void)
{
    if (!FireStarterCode::LoadCode("FireStarterTarget.h", m_solutionTargetCode))
        return false;
    FireStarterCode::ReplaceCode(m_solutionTargetCode, "Target", "SolutionTarget");
    FireStarterCode::ReplaceCode(m_solutionTargetCode, "TARGET_", "SOLUTION_");
    return true;
} // LoadSolutionTargetCode

bool FireStarterComplete::LoadFireShowCode(void)
{
    if (!FireStarterCode::LoadCode("FireShow.cu", m_fireShowCode))
        return false;
    return true;
} // LoadFireShowCode

void FireStarterComplete::DisplayImage(const unsigned char* pixels)
{
    DispatchMainSync([this, pixels] {
        unsigned char buffer[4096];
        BITMAPINFO* bm = (BITMAPINFO*)buffer;
        bm->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
        bm->bmiHeader.biHeight = -(int)m_height;
        bm->bmiHeader.biPlanes = 1;
        bm->bmiHeader.biCompression = BI_RGB;
        bm->bmiHeader.biSizeImage = 0;
        bm->bmiHeader.biXPelsPerMeter = 0;
        bm->bmiHeader.biYPelsPerMeter = 0;
        bm->bmiHeader.biClrUsed = 0;
        bm->bmiHeader.biClrImportant = 0;
        bm->bmiHeader.biWidth = m_width;
        bm->bmiHeader.biBitCount = 32;

        HDC hdc = GetDC((HWND)m_window);
        if (hdc) {
            SetDIBitsToDevice(hdc, 0, 0, m_width, m_height, 0, 0, 0, m_height, pixels, bm, DIB_RGB_COLORS);
            GdiFlush();
        }
    });
} // DisplayImage

void FireStarterComplete::FireShow(const FireStarterState& state)
{
    // Erase the frame buffer
    m_buffer.Erase();

    // Setup the data
    CUDAContext* context = Context();
    CUstream stream = context->Stream();
    FireStarterSettings settings = state.Settings();
    size_t resultSize = FireStarterResult::ResultSize(settings.m_registers, settings.m_variations);
    checkCUDAErrors(cudaMemcpyAsync(m_fireShowResult, state.Result(), resultSize, cudaMemcpyHostToDevice, stream));
    size_t instructionsSize = FireStarterInstructions::InstructionsSize(settings.m_instructions);
    checkCUDAErrors(cudaMemcpyAsync(m_fireShowInstructions, state.m_program.OptimizedInstructions(), instructionsSize, cudaMemcpyHostToDevice, stream));

    // Launch the display kernel
    int threadsPerBlock = BLOCK_THREADS;
    int blocksPerGrid = (m_buffer.m_width + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    void* arr[] = { reinterpret_cast<void*>(&m_fireShowResult),
                    reinterpret_cast<void*>(&m_fireShowInstructions),
                    reinterpret_cast<void*>(&m_buffer.m_deviceBase),
                    reinterpret_cast<void*>(&m_buffer.m_width),
                    reinterpret_cast<void*>(&m_buffer.m_height),
                    reinterpret_cast<void*>(&settings.m_variations) };

    checkCUDAErrors(cuLaunchKernel(m_fireShowFunction,
        cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
        cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
        0, context->Stream(),                         // shared mem, stream */
        &arr[0],                                            // arguments */
        0));

    // Syncronize the stream to complete the work
    context->Synchronize();

    // Display the buffer in the window.
    DisplayImage(m_buffer.GetPixels());
} // FireShow

void FireStarterComplete::RenderStatus(const FireStarterState& bestState, const FireStarterState& state, double runTime, double generationTime, double oldResult, double average, double testError)
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

    // Create the hash file.
    static std::string hashFilePath;
    if (hashFilePath.empty()) {
        hashFilePath = Format("Logs\\%s_Hash.txt", FileNameDate().c_str());
        FireStarterCode::AppendCode(hashFilePath, cudaText);
        FireStarterCode::AppendCode(hashFilePath, settingsText);
    }

    // Update the hash file.
    std::string hashString = Format("%s: Generation:%4u  Best Generation:%4u", settings.Mode(), state.m_generation, bestState.m_generation);
    const FireStarterResult* stateResult = state.Result();
    uint64_t resultHash = MurmurHash64(stateResult, state.ResultSize());
    uint64_t programHash = MurmurHash64(state.m_program.OptimizedInstructions(), state.m_program.InstructionsSize());
    hashString += Format("  Result=%.8f  Seed=%8u  ResultHash=%04X  ProgramHash=%04X\r\n", state.MaxResult(), settings.m_seed + state.m_generation, (unsigned short)resultHash, (unsigned short)programHash);
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
    float newResult = state.MaxResult();
    float bestResult = bestState.MaxResult();
    bool isBestState = (state.m_index == bestState.m_index) && (state.m_generation == bestState.m_generation);
    if (settings.m_mode == FIRESTARTER_RANDOM) {
        statusString = Format("%s: Seed=%u  Generation=%u  Result=%.8f  Average=%.8f  Best=%.8f  BestSeed=%u  Time=%.4f Seconds  Run Time=%.4f Seconds  TestError=%.8f", settings.Mode(), settings.m_seed + state.m_generation, state.m_generation, newResult, average, bestResult, bestState.m_program.m_settings.m_seed + bestState.m_generation, generationTime, runTime, testError);
        for (unsigned int v = 0; v < settings.m_variations; v++)
            statusString += Format("  V:%d=%.8f", v, state.Result()->MinResult(v));
    } else {
        statusString = Format("%s: Seed=%u", settings.Mode(), settings.m_seed);
#if FIRESTARTER_TEST_SEEDS
        statusString += Format("  Test=%u", test);
#endif
        if (settings.m_units > 1)
            statusString += Format("  Unit=%u", unit);

        statusString += Format("  Generation=%u  Age=%u", state.m_generation, state.m_generation - bestState.m_generation);

        if (settings.m_mode == FIRESTARTER_EVOLVE) {
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
            statusString += Format("Result=%.8f", state.MaxResult());
        }

        statusString += Format("  Best=%.8f  BestGen=%u  Time=%.4f Seconds  Run Time=%.4f Seconds  TestError=%.8f", bestResult, bestState.m_generation, generationTime, runTime, testError);
    }

    // Update the log file.
    FireStarterCode::AppendCode(logFilePath, statusString + "\r\n");
    if ((unit == settings.m_units - 1) && (settings.m_units > 1))
        FireStarterCode::AppendCode(logFilePath, "\r\n");

    // Update the window status.
    HWND window = (HWND)m_window;
    DispatchMainAsync([window, statusString] {
        SetWindowText(window, statusString.c_str());
    });
} // RenderStatus

void FireStarterComplete::SaveBestState(const FireStarterState& bestState)
{
    std::string bestStateCode;
    bestState.SaveState(bestStateCode);
    FireStarterCode::SaveCode("FireStarter_LoadState.h", bestStateCode);
} // SaveBestState

void FireStarterComplete::SaveBestCode(const FireStarterState& bestState)
{
    static std::string optimizeCode;
    if (optimizeCode.empty())
        FireStarterCode::LoadCode("FireOptimizer.cu", optimizeCode);
    if (!optimizeCode.empty()) {
        // Generate the evaluate function
        std::string evaluateCode;
        unsigned int variations = bestState.Settings().m_variations;
        for (unsigned int i = 0; i < variations; i++)
            bestState.SaveVariation(i, evaluateCode);
        m_generate->GenerateEvaluate(bestState, evaluateCode);

        // Create the units code by replacing the evaluate and optimize sections of the optimize code.
        std::string bestCode = optimizeCode;
        FireStarterCode::UpdateProgram(bestCode, evaluateCode, EVALUATE_CODE);
        FireStarterCode::SaveCode("FireStarter_BestCode.cu", bestCode);
    }
} // SaveBestCode

void FireStarterComplete::SaveSolution(const FireStarterState& bestState, size_t generation, double generationTime)
{
    std::string solutionCode;
    m_generate->GenerateSolution(bestState, solutionCode, m_solutionTargetCode, generationTime, generation);
    FireStarterCode::SaveCode("FireStarter_Solution.h", solutionCode);
} // SaveSolution

void FireStarterComplete::CompleteResults(FireStarterState& bestState, const FireStarterState& state, float oldResult)
{
    if (!state.m_generation) {
        m_resultsCount = 0;
        m_resultsTime = 0.0;
    }

    // Get the result.
    bool update = false;
    float result = state.MaxResult();
    m_totalResult = m_resultsCount++ ? m_totalResult + result : result;
    if (result < bestState.MaxResult()) {
        // Update the best state.
        bestState = state;
        update = true;
    }

    // Do all the time consuming work asynchronously.
    DispatchAsync([this, bestState, state, oldResult, update] {
        double duration = m_timer.Duration();

        // Calculate the average time per generation.
        const FireStarterSettings& settings = state.Settings();
        if (state.m_generation != m_resultsGeneration) {
            m_resultsGeneration = state.m_generation;
            if (settings.m_mode == FIRESTARTER_RANDOM)
                m_smoothTime = duration / (m_resultsGeneration + 1.0);
            else
                m_smoothTime = (duration - m_resultsTime) / settings.m_units;
            m_resultsTime = duration;
        }

        // Test the current state.
        float testError = state.TestResult();

        // Update the render status after every pass.
        double average = m_totalResult / m_resultsCount;
        RenderStatus(bestState, state, duration, m_smoothTime, oldResult, average, testError);

        // If the best state was updated, save the stat and draw the results.
        if (update) {
            // Update the best state.
            if (bestState.Settings().m_mode != FIRESTARTER_OPTIMIZE)
                SaveBestState(bestState);

            // Update the best code on disk.
            SaveBestCode(bestState);
            SaveSolution(bestState, bestState.m_generation, m_resultsTime);

            // Draw the graphs for both variations.
            FireShow(bestState);
        }
    });
} // CompleteResults

bool FireStarterComplete::CompleteRandom(FireStarterState& bestState)
{
    bool result = false;
    DispatchSync([this, &bestState, &result] {
        // Get the completed job.
        // Note: The jobs may be received out of order.
        FireStarterJob* job = m_manager->GetComplete();
        if (job) {
            // Output job queue status.
            //  m_output.Output(Format("Free: %llu %f  Code: %llu %f  Compile: %llu %f  Complete: %llu %f\n", manager->SizeFree(), manager->TimeFree(), manager->SizeCode(), manager->TimeCode(), manager->SizeCompile(), manager->TimeCompile(), manager->SizeComplete(), manager->TimeComplete()));

            // Update the best state and display the results.
            CompleteResults(bestState, job->m_state);
            m_manager->AddFree(job);
            result = true;
        }
    });
    return result;
} // CompleteRandom

bool FireStarterComplete::CompleteStates(FireStarterState& bestState, std::vector<FireStarterState>& oldStates, size_t generation)
{
    bool result = true;
    DispatchSync([this, &bestState, &oldStates, &result] {
        // Sort the states as they are received.
        size_t numStates = m_settings.m_units;
        std::vector<FireStarterState> newStates = oldStates;
        for (size_t i = 0; i < numStates; i++) {
            // Get the next job in the order they are completed.
            FireStarterJob* job = m_manager->GetComplete();
            if (!job) {
                result = false;
                break;
            }

            // Output job queue status.
            //  m_output.Output(Format("Free: %llu %f  Code: %llu %f  Compile: %llu %f  Complete: %llu %f\n", manager->SizeFree(), manager->TimeFree(), manager->SizeCode(), manager->TimeCode(), manager->SizeCompile(), manager->TimeCompile(), manager->SizeComplete(), manager->TimeComplete()));

            // Sort the completed jobs.
            newStates[job->m_state.m_index % numStates] = job->m_state;
            m_manager->AddFree(job);
        }
        if (result) {
            // Update the best state and display the results.
            for (size_t i = 0; i < numStates; i++) {
                FireStarterState& newState = newStates[i];
                FireStarterState& oldState = oldStates[i];
                CompleteResults(bestState, newState, oldState.MaxResult());
                if (!newState.m_generation || (newState.MaxResult() < oldState.MaxResult()))
                    oldState = newState;
                else
                    oldState.m_generation = newState.m_generation;
            }
        }
    });

    // Has the completion condition been met?
    return result && (generation - bestState.m_generation < m_settings.m_attempts);
} // CompleteStates

void FireStarterComplete::CompleteSolution(void)
{
    DispatchAsync([this] {
        std::string statusString = "FireStarter:";
        uchar4* pixels = (uchar4*)m_buffer.GetHost();
        float maxError = 0.0f;
        for (unsigned int v = 0; v < m_settings.m_variations; v++) {
            int xScale = m_height / 8;
            int yScale = m_height / 16;
            for (unsigned int y = 0; y < m_height; y++) {
                int x0 = (m_width / 2) - xScale;
                int x1 = (m_width / 2) + xScale;
                if (x0 >= 0) {
                    uchar4& pixel(pixels[y * m_width + x0]);
                    pixel.x = 64;
                    pixel.y = 128;
                    pixel.z = 64;
                };
                if (x1 < (int)m_width) {
                    uchar4& pixel(pixels[y * m_width + x1]);
                    pixel.x = 64;
                    pixel.y = 128;
                    pixel.z = 64;
                };
            }
            for (unsigned int x = 0; x < m_width; x++) {
                float theta = TARGET_PI * ((x - m_width * 0.5f) / xScale + 1.0f);
                float center = m_height * 0.66f;
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
                if ((y >= 0) && (y < (int)m_height)) {
                    uchar4& pixel(pixels[y * m_width + x]);
                    pixel.x = 255;
                    pixel.y = 128;
                };
                y = (int)(center + solution * yScale);
                if ((y >= 0) && (y < (int)m_height)) {
                    uchar4& pixel(pixels[y * m_width + x]);
                    pixel.x = pixel.y = pixel.z = 255;
                };
            }
            statusString += Format(" Solution %d = %f", v, maxError);
        }
        DisplayImage(m_buffer.GetHost());
        SetWindowText((HWND)m_window, statusString.c_str());
    });
} // CompleteSolution

FireStarterComplete::FireStarterComplete(FireStarterManager* manager, const FireStarterSettings& settings, void* window, unsigned int width, unsigned int height)
{
    m_manager = manager;
    m_settings = settings;
    m_window = window;
    m_width = width;
    m_height = height;

    DispatchSync([this] {
        m_buffer.Resize(m_width, m_height);
        m_buffer.Erase();
        if ((m_settings.m_mode != FIRESTARTER_SOLUTION) && LoadFireShowCode() && LoadSolutionTargetCode()) {
            CUDAContext* context = Context();
            CUstream stream = context->Stream();

            // Create the code generator.
            m_generate = new FireStarterGenerate(context);

            // Allocate the results and instructions.
            checkCUDAErrors(cudaMallocAsync(&m_fireShowResult, FireStarterResult::ResultSize(m_settings.m_registers, m_settings.m_variations), stream));
            checkCUDAErrors(cudaMallocAsync(&m_fireShowInstructions, FireStarterInstructions::InstructionsSize(m_settings.m_instructions), stream));
            context->Synchronize();

            // Compile FireShow.
            if (CUDACompile::CompileProgram(m_fireShowModule, m_fireShowCode, "FireShow"))
                m_fireShowFunction = CUDACompile::GetFunction(m_fireShowModule, "FireShow");
        }
    });
} // FireStarterComplete

FireStarterComplete::~FireStarterComplete(void)
{
    DispatchSync([this] {
        CUDAContext* context = Context();
        CUstream stream = context->Stream();

        m_buffer.Resize(0, 0);
        if (m_fireShowResult) {
            checkCUDAErrors(cudaFreeAsync(m_fireShowResult, stream));
            m_fireShowResult = nullptr;
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
    });
} // ~FireStarterComplete