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

void FireStarterComplete::FireShow(const FireStarterState& state)
{
    // Erase the frame buffer
    m_buffer.Erase();

    // Setup the data
    FireStarterSettings settings = state.Settings();
    size_t resultSize = FireStarterResult::ResultSize(settings.m_registers, settings.m_variations);
    checkCUDAErrors(cudaMemcpyAsync(m_fireShowResult, state.Result(), resultSize, cudaMemcpyHostToDevice, m_CUDAContext->Stream()));
    size_t instructionsSize = FireStarterInstructions::InstructionsSize(settings.m_instructions);
    checkCUDAErrors(cudaMemcpyAsync(m_fireShowInstructions, state.m_program.OptimizedInstructions(), instructionsSize, cudaMemcpyHostToDevice, m_CUDAContext->Stream()));

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
        0, m_CUDAContext->Stream(),                         // shared mem, stream */
        &arr[0],                                            // arguments */
        0));

    // Syncronize the stream to complete the work
    checkCUDAErrors(cudaStreamSynchronize(m_CUDAContext->Stream()));
} // FireShow

float FireStarterComplete::DrawSolution(uchar4* bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, unsigned int variation)
{
    float maxError = 0.0f;
    int xScale = bufferHeight / 8;
    int yScale = bufferHeight / 16;
    for (unsigned int y = 0; y < bufferHeight; y++) {
        int x0 = (bufferWidth / 2) - xScale;
        int x1 = (bufferWidth / 2) + xScale;
        if (x0 >= 0) {
            uchar4& pixel(bufferPixels[y * bufferWidth + x0]);
            pixel.x = 64;
            pixel.y = 128;
            pixel.z = 64;
        };
        if (x1 < (int)bufferWidth) {
            uchar4& pixel(bufferPixels[y * bufferWidth + x1]);
            pixel.x = 64;
            pixel.y = 128;
            pixel.z = 64;
        };
    }
    for (unsigned int x = 0; x < bufferWidth; x++) {
        float theta = TARGET_PI * ((x - bufferWidth * 0.5f) / xScale + 1.0f);
        float center = bufferHeight * 0.66f;
        float target = SolutionTarget(theta, variation);
#if SOLUTION_VARIATIONS == 1
        float solution = Solution(theta);
#else
        float solution = Solution(theta, variation);
#endif
        if ((theta >= SOLUTION_MIN) && (theta <= SOLUTION_MAX)) {
            float error = fabsf(solution - target);
            maxError = max(maxError, error);
        }
        int y = (int)(center + target * yScale);
        if ((y >= 0) && (y < (int)bufferHeight)) {
            uchar4& pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = 255;
            pixel.y = 128;
        };
        y = (int)(center + solution * yScale);
        if ((y >= 0) && (y < (int)bufferHeight)) {
            uchar4& pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = pixel.y = pixel.z = 255;
        };
    }
    return maxError;
} // DrawSolution

void FireStarterComplete::RenderStatus(const FireStarterState& bestState, const FireStarterState& state, double runTime, double generationTime, double result, double average, double testError)
{
    const FireStarterSettings& settings = state.Settings();

    // Create the settings text.
    static std::string settingsText;
    if (settingsText.empty()) {
        FireStarterProgram::SettingsText(settings, settingsText);
        settingsText += "\r\n";
    }

    // Create the hash file.
    static std::string hashFilePath;
    if (hashFilePath.empty()) {
        hashFilePath = Format("Logs\\%s_Hash.txt", FileNameDate().c_str());
        FireStarterCode::AppendCode(hashFilePath, settingsText);
    }

    // Update the hash file.
    std::string hashString = Format("%s:%s  Generation:%4u  Best Generation:%4u", settings.Mode(), settings.Evolve(), state.m_generation, bestState.m_generation);
    const FireStarterResult* stateResult = state.Result();
    uint64_t resultHash = MurmurHash64(stateResult, state.ResultSize());
    uint64_t programHash = MurmurHash64(state.m_program.OptimizedInstructions(), state.m_program.InstructionsSize());
    float bestResult = state.MaxResult();
    hashString += Format("  Result=%.8f  Seed=%8u  ResultHash=%04X  ProgramHash=%04X\r\n", state.MaxResult(), settings.m_seed + state.m_generation, (unsigned short)resultHash, (unsigned short)programHash);
    FireStarterCode::AppendCode(hashFilePath, hashString);
    //  m_output.Output(hashString);

        // Create the log file.
    static std::string logFilePath;
    if (logFilePath.empty()) {
        logFilePath = Format("Logs\\%s_%s.txt", FileNameDate().c_str(), settings.Mode());
        FireStarterCode::AppendCode(logFilePath, settingsText);
    }

    // Update the log file and window status text.
    std::string statusString;
    if ((settings.m_mode == FIRESTARTER_TEST) || (settings.m_mode == FIRESTARTER_RANDOM)) {
        statusString = Format("%s: Seed=%u  Generation=%u  Result=%.8f  Average=%.8f  Best=%.8f  BestSeed=%u  Time=%.4f Seconds  Run Time=%.4f Seconds  TestError=%.8f", settings.Mode(), settings.m_seed + state.m_generation, state.m_generation, result, average, bestState.MaxResult(), bestState.m_program.m_settings.m_seed + bestState.m_generation, generationTime, runTime, testError);
        for (unsigned int v = 0; v < settings.m_variations; v++)
            statusString += Format("  V:%d=%.8f", v, state.Result()->MinResult(v));
    }
    else
        statusString = Format("%s: Seed=%u  Generation=%u  Age=%u  Best=%.8f  BestSeed=%u  Time=%.4f Seconds  Run Time=%.4f Seconds  TestError=%.8f", settings.Mode(), state.m_generation, state.m_generation, state.m_generation - bestState.m_generation, bestState.MaxResult(), bestState.m_program.m_settings.m_seed + bestState.m_generation, generationTime, runTime, testError);

    // Update the log file.
    FireStarterCode::AppendCode(logFilePath, statusString + "\r\n");

    // Update the window status.
    DispatchMainAsync([this, statusString] {
        if (m_window)
            SetWindowText((HWND)m_window, statusString.c_str());
    });
} // RenderStatus

void FireStarterComplete::RenderImage(unsigned int width, unsigned int height, const unsigned char* pixels)
{
    if (m_window) {
        unsigned char buffer[4096];
        BITMAPINFO* bm = (BITMAPINFO*)buffer;
        bm->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
        bm->bmiHeader.biHeight = -(int)height;
        bm->bmiHeader.biPlanes = 1;
        bm->bmiHeader.biCompression = BI_RGB;
        bm->bmiHeader.biSizeImage = 0;
        bm->bmiHeader.biXPelsPerMeter = 0;
        bm->bmiHeader.biYPelsPerMeter = 0;
        bm->bmiHeader.biClrUsed = 0;
        bm->bmiHeader.biClrImportant = 0;
        bm->bmiHeader.biWidth = width;
        bm->bmiHeader.biBitCount = 32;

        HDC hdc = GetDC((HWND)m_window);
        if (hdc) {
            SetDIBitsToDevice(hdc, 0, 0, width, height, 0, 0, 0, height, pixels, bm, DIB_RGB_COLORS);
            GdiFlush();
        }
    }
} // RenderImage

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

void FireStarterComplete::SaveSolution(const FireStarterState& bestState, unsigned int generation, double generationTime)
{
    std::string solutionCode;
    m_generate->GenerateSolution(bestState, solutionCode, m_solutionTargetCode, generationTime, generation);
    FireStarterCode::SaveCode("FireStarter_Solution.h", solutionCode);
} // SaveSolution

void FireStarterComplete::CompleteResults(FireStarterState& bestState, const FireStarterState& state, FireStarterState& oldState)
{
    if (!state.m_generation) {
        m_resultsCount = 0;
        m_resultsTime = 0.0;
    }

    // Get the result.
    float result = state.MaxResult();
    m_totalResult = m_resultsCount++ ? m_totalResult + result : result;
    double duration = m_timer.Duration();

    // Calculate the average time per generation.
    const FireStarterSettings& settings = state.Settings();
    if (state.m_generation != m_resultsGeneration) {
        double time = duration - m_resultsTime;
        m_resultsTime = duration;
        m_resultsGeneration = state.m_generation;
        if (settings.m_mode == FIRESTARTER_RANDOM)
            m_smoothTime = duration / max(state.m_generation, 1.0);
        else
            m_smoothTime = time / settings.m_units;
    }
    if (result < bestState.MaxResult()) {
        // Update the best state.
        bestState = state;
        if (settings.m_mode != FIRESTARTER_OPTIMIZE)
            SaveBestState(bestState);

        // Update the best code on disk.
        SaveBestCode(bestState);
        SaveSolution(bestState, state.m_generation, m_resultsTime);

        // Draw the graphs for both variations.
        FireShow(state);
        DispatchMainSync([this] {
            RenderImage(m_buffer.m_width, m_buffer.m_height, m_buffer.GetDevice());
        });
    }

    // Save the state in the array of all states.
    if (!state.m_generation || (result < oldState.MaxResult()))
        oldState = state;

    // Test the current state.
    float testError = state.TestResult();

    // Update the render status after every pass.
    double average = m_totalResult / m_resultsCount;
    RenderStatus(bestState, state, duration, m_smoothTime, result, average, testError);
} // CompleteResults

bool FireStarterComplete::CompleteRandom(FireStarterManager* manager, FireStarterState& bestState, FireStarterState& oldState)
{
    // Get the completed job.
    // Note: The jobs may be received out of order.
    FireStarterJob* job = manager->GetComplete();
    if (!job)
        return false;

    // Output job queue status.
    //  m_output.Output(Format("Free: %llu %f  Code: %llu %f  Compile: %llu %f  Complete: %llu %f\n", manager->SizeFree(), manager->TimeFree(), manager->SizeCode(), manager->TimeCode(), manager->SizeCompile(), manager->TimeCompile(), manager->SizeComplete(), manager->TimeComplete()));

    // Update the best state and display the results.
    CompleteResults(bestState, job->m_state, oldState);
    manager->AddFree(job);
    return true;
} // CompleteRandom

bool FireStarterComplete::CompleteStates(FireStarterManager* manager, FireStarterState& bestState, std::vector<FireStarterState>& oldStates, unsigned int generation)
{
    std::vector<FireStarterState> newStates = oldStates;
    size_t numStates = oldStates.size();
    for (size_t i = 0; i < numStates; i++) {
        // Get the next job in the order they are completed.
        FireStarterJob* job = manager->GetComplete();
        if (!job || (job->m_state.m_index >= numStates))
            return false;

        // Output job queue status.
        //  m_output.Output(Format("Free: %llu %f  Code: %llu %f  Compile: %llu %f  Complete: %llu %f\n", manager->SizeFree(), manager->TimeFree(), manager->SizeCode(), manager->TimeCode(), manager->SizeCompile(), manager->TimeCompile(), manager->SizeComplete(), manager->TimeComplete()));

        // Sort the completed jobs.
        newStates[job->m_state.m_index] = job->m_state;
        manager->AddFree(job);
    }

    // Update the best state and display the results.
    for (size_t i = 0; i < numStates; i++)
        CompleteResults(bestState, newStates[i], oldStates[i]);

    // Has the completion condition been met?
    return generation - bestState.m_generation <= m_settings.m_attempts;
} // CompleteStates

void FireStarterComplete::CompleteSolution(void)
{
    if (m_window) {
        std::string statusString = "FireStarter:";
        for (unsigned int v = 0; v < m_settings.m_variations; v++) {
            float error = DrawSolution((uchar4*)m_buffer.m_hostBase, m_buffer.m_width, m_buffer.m_height, v);
            statusString += Format(" Solution %d = %f", v, error);
        }
        RenderImage(m_width, m_height, m_buffer.m_hostBase);
        SetWindowText((HWND)m_window, statusString.c_str());
    }
} // CompleteSolution

void FireStarterComplete::CompleteInit(void* window, unsigned int width, unsigned int height)
{
    m_window = window;
    m_width = width;
    m_height = height;
    m_buffer.Resize(m_width, m_height);
    m_buffer.Erase();
} // CompleteInit

FireStarterComplete::FireStarterComplete(const FireStarterSettings& settings)
{
    m_settings = settings;
    if (settings.m_mode != FIRESTARTER_SOLUTION)
        if (LoadSolutionTargetCode() && LoadFireShowCode()) {
            // Create the thread's CUDA context.
            m_CUDAContext = new CUDAContext();

            // Allocate the results and instructions.
            checkCUDAErrors(cudaMalloc(&m_fireShowResult, FireStarterResult::ResultSize(m_settings.m_registers, m_settings.m_variations)));
            checkCUDAErrors(cudaMalloc(&m_fireShowInstructions, FireStarterInstructions::InstructionsSize(m_settings.m_instructions)));

            // Compile FireGenerate
            m_generate = new FireStarterGenerate(m_CUDAContext);

            // Compile FireShow.
            if (CUDACompile::CompileProgram(m_fireShowModule, m_fireShowCode, "FireShow"))
                m_fireShowFunction = CUDACompile::GetFunction(m_fireShowModule, "FireShow");
        }
} // FireStarterComplete

FireStarterComplete::~FireStarterComplete(void)
{
    if (m_fireShowResult) {
        checkCUDAErrors(cudaFree(m_fireShowResult));
        m_fireShowResult = nullptr;
    }
    if (m_fireShowInstructions) {
        checkCUDAErrors(cudaFree(m_fireShowInstructions));
        m_fireShowInstructions = nullptr;
    }
    if (m_fireShowModule) {
        checkCUDAErrors(cuModuleUnload(m_fireShowModule));
        m_fireShowModule = nullptr;
    }
    if (m_generate) {
        delete m_generate;
        m_generate = nullptr;
    }
} // ~FireStarterComplete