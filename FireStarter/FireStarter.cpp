#include "FireStarter.h"
#include "FireStarterCode.h"
#include "FireStarterUtil.h"
#include "FireStarter_LoadState.h"
#include "FireStarter_Solution.h"
#include "FireStarterRandom.h"
#include "CUDAContext.h"
#include "CUDACompile.h"

bool FireStarter::LoadTargetCode(void)
{
    if (!FireStarterCode::LoadCode("FireStarterTarget.h", m_solutionTargetCode))
        return false;
    FireStarterCode::ReplaceCode(m_solutionTargetCode, "Target", "SolutionTarget");
    FireStarterCode::ReplaceCode(m_solutionTargetCode, "TARGET_", "SOLUTION_");
    return true;
} // LoadTargetCode

bool FireStarter::LoadFireShowCode(void)
{
    if (!FireStarterCode::LoadCode("FireShow.cu", m_fireShowCode))
        return false;
    return true;
} // LoadFireShowCode

bool FireStarter::LoadFireSettingsCode(void)
{
    if (!FireStarterCode::LoadCode("FireSettings.cu", m_fireSettingsCode))
        return false;
    return true;
} // LoadFireSettingsCode

void FireStarter::SaveBestState(void)
{
    std::string bestStateCode;
    m_bestState.SaveState(bestStateCode);
    FireStarterCode::SaveCode("FireStarter_LoadState.h", bestStateCode);
} // SaveBestState

void FireStarter::SaveBestCode(void)
{
    static std::string optimizeCode;
    if (optimizeCode.empty())
        FireStarterCode::LoadCode("Optimize.cu", optimizeCode);
    if (!optimizeCode.empty()) {
        // Generate the evaluate function
        std::string evaluateCode;
        for (unsigned int i = 0; i < m_bestState.Settings().m_variations; i++)
            m_bestState.SaveVariation(i, evaluateCode);
        m_fireStarterGenerate->GenerateEvaluate(m_bestState, evaluateCode);

        // Create the units code by replacing the evaluate and optimize sections of the optimize code.
        std::string bestCode = optimizeCode;
        FireStarterCode::UpdateProgram(bestCode, evaluateCode, EVALUATE_CODE);
        FireStarterCode::SaveCode("FireStarter_BestCode.cu", bestCode);
    }
} // SaveBestCode

void FireStarter::SaveSolution(unsigned int generation, double generationTime)
{
    std::string solutionCode;
    m_fireStarterGenerate->GenerateSolution(m_bestState, solutionCode, m_solutionTargetCode, generationTime, generation);
    FireStarterCode::SaveCode("FireStarter_Solution.h", solutionCode);
} // SaveSolution

void FireStarter::FireSettings(void)
{
    // Launch the load settings kernel
    dim3 cudaBlockSize(BLOCK_THREADS, 1, 1);
    dim3 cudaGridSize(1, 1, 1);

    void* arr[] = { reinterpret_cast<void*>(&m_fireSettings),
                    reinterpret_cast<void*>(&m_fireStarterMode) };

    checkCUDAErrors(cuLaunchKernel(m_fireSettingsFunction,
        cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
        cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
        0, m_CUDAContext->Stream(),                  // shared mem, stream */
        &arr[0],                                            // arguments */
        0));
    checkCUDAErrors(cudaMemcpyAsync(&m_settings, m_fireSettings, sizeof(FireStarterSettings), cudaMemcpyDeviceToHost, m_CUDAContext->Stream()));
    checkCUDAErrors(cudaStreamSynchronize(m_CUDAContext->Stream()));
} // FireSettings

void FireStarter::FireShow(void)
{
    FireStarterSettings settings = m_bestState.Settings();
    size_t resultSize = FireStarterResult::ResultSize(settings.m_registers, settings.m_variations);
    checkCUDAErrors(cudaMemcpyAsync(m_fireShowResult, m_bestState.Result(), resultSize, cudaMemcpyHostToDevice, m_CUDAContext->Stream()));
    size_t instructionsSize = FireStarterInstructions::InstructionsSize(settings.m_instructions);
    checkCUDAErrors(cudaMemcpyAsync(m_fireShowInstructions, m_bestState.m_program.Instructions(), instructionsSize, cudaMemcpyHostToDevice, m_CUDAContext->Stream()));

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
    checkCUDAErrors(cudaStreamSynchronize(m_CUDAContext->Stream()));
} // FireShow

void FireStarter::RenderStatus(const FireStarterState& state, double generationTime, float testError)
{
    // Create the settings text.
    static std::string settingsText;
    if (settingsText.empty()) {
        FireStarterProgram::SettingsText(m_settings, settingsText);
        settingsText += "\r\n";
    }

    // Create the hash file.
    if (m_hashFilePath.empty()) {
        m_hashFilePath = Format("Logs\\%s_Hash.txt", FileNameDate().c_str());
        FireStarterCode::AppendCode(m_logFilePath, settingsText);
    }

    // Update the hash file.
    std::string hashString = Format("%s:%s  Generation:%4u  Best Generation:%4u", m_settings.Mode(), m_settings.Evolve(), state.m_generation, m_bestState.m_generation);
    const FireStarterResult* result = state.Result();
    uint64_t resultHash = MurmurHash64(result, state.ResultSize());
    uint64_t programHash = MurmurHash64(state.m_program.Instructions(), state.m_program.InstructionsSize());
    float bestResult = state.MaxResult();
    hashString += Format("  Result=%.8f  Seed=%8u  BestIndex=%6d  ResultHash=%04X  ProgramHash=%04X\r\n", state.MaxResult(), state.m_program.m_settings.m_seed + state.m_generation, state.m_bestIndex, (unsigned short)resultHash, (unsigned short)programHash);
    FireStarterCode::AppendCode(m_hashFilePath, hashString);
    printf(hashString.c_str());

    // Create the log file.
    std::string statusString;
    if (m_logFilePath.empty()) {
        m_logFilePath = Format("Logs\\%s_%s.txt", FileNameDate().c_str(), m_settings.Mode());
        FireStarterCode::AppendCode(m_logFilePath, settingsText);
    }

    // Update the log file and window status text.
    if ((m_settings.m_mode == FIRESTARTER_TEST) || (m_settings.m_mode == FIRESTARTER_RANDOM)) {
        statusString = Format("%s: Seed=%u  Generation=%u  Result=%.8f  Average=%.8f  Best=%.8f  BestSeed=%u  Time=%.4f Seconds  Run Time=%.4f Seconds  TestError=%.8f", m_settings.Mode(), m_settings.m_seed + state.m_generation, state.m_generation, m_result, m_averageResult, m_bestResult, m_bestState.m_program.m_settings.m_seed + m_bestState.m_generation, generationTime, m_runTimer.Duration(), testError);
        for (unsigned int v = 0; v < m_settings.m_variations; v++)
            statusString += Format("  V:%d=%.8f", v, state.Result()->MinResult(v));
    } else
        statusString = Format("%s: Seed=%u  Generation=%u  Age=%u  Best=%.8f  BestSeed=%u  Time=%.4f Seconds  Run Time=%.4f Seconds  TestError=%.8f", m_settings.Mode(), m_settings.m_seed + state.m_generation, state.m_generation, state.m_generation - m_bestState.m_generation, m_bestResult, m_bestState.m_program.m_settings.m_seed + m_bestState.m_generation, generationTime, m_runTimer.Duration(), testError);

    // Update the log file.
    FireStarterCode::AppendCode(m_logFilePath, statusString + "\r\n");

    // Update the window status.
    GetMainThread()->DispatchAsync([this, statusString] { SetWindowText((HWND)m_window, statusString.c_str()); });
} // RenderStatus

void FireStarter::RenderImage(unsigned int width, unsigned int height, const unsigned char* pixels)
{
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
} // RenderImage

void FireStarter::ClearUnits(void)
{
    for (FireStarterUnit*& unit : m_units) {
        delete unit;
        unit = nullptr;
    }
    m_units.clear();
    m_server.ClearProcesses();
} // ClearUnits

void FireStarter::ControlDeallocate(void)
{
    // Unload the fire show code and destroy the CUDA context.
    if (m_fireSettings) {
        checkCUDAErrors(cudaFree(m_fireSettings));
        m_fireSettings = nullptr;
    }
    if (m_fireShowResult) {
        checkCUDAErrors(cudaFree(m_fireShowResult));
        m_fireShowResult = nullptr;
    }
    if (m_fireShowInstructions) {
        checkCUDAErrors(cudaFree(m_fireShowInstructions));
        m_fireShowInstructions = nullptr;
    }
    if (m_fireSettingsModule) {
        checkCUDAErrors(cuModuleUnload(m_fireSettingsModule));
        m_fireSettingsModule = nullptr;
    }
    if (m_fireShowModule) {
        checkCUDAErrors(cuModuleUnload(m_fireShowModule));
        m_fireShowModule = nullptr;
    }
} // ControlDeallocate

void FireStarter::ControlAllocate(void)
{
    if (!m_CUDAContext)
        m_CUDAContext = new CUDAContext(0);
    ControlDeallocate();
    checkCUDAErrors(cudaMalloc(&m_fireSettings, sizeof(FireStarterSettings)));
    checkCUDAErrors(cudaMalloc(&m_fireShowResult, FireStarterResult::ResultSize(m_settings.m_registers, m_settings.m_variations)));
    checkCUDAErrors(cudaMalloc(&m_fireShowInstructions, FireStarterInstructions::InstructionsSize(m_settings.m_instructions)));

    // Compile FireSettings
    if (CUDACompile::CompileProgram(m_fireSettingsModule, m_fireSettingsCode, "FireSettings"))
        m_fireSettingsFunction = CUDACompile::GetFunction(m_fireSettingsModule, "FireSettings");

    // Compile FireGenerate
    if (!m_fireStarterGenerate)
        m_fireStarterGenerate = new FireStarterGenerate(m_CUDAContext);
    m_fireStarterGenerate->InitGenerate(m_settings);

    // Compile FireShow.
    if (CUDACompile::CompileProgram(m_fireShowModule, m_fireShowCode, "FireShow"))
        m_fireShowFunction = CUDACompile::GetFunction(m_fireShowModule, "FireShow");
} // ControlAllocate

void FireStarter::ControlTest(void)
{
    static std::atomic<float> atomicResult = FIRESTARTER_RANDOM_START_RESULT;

    // Setup the intial state
    FireStarterState controlState(m_settings);
    m_bestState = controlState;

    m_result = 0.0f;
    m_bestResult = m_settings.m_startResult;
 
    // Create the code generator.
    FireStarterGenerate generate;

    // Create the unit.
    FireStarterUnit* unit = new FireStarterUnit(0);
    unit->InitUnit(controlState);
    unit->Synchronize();
    std::string optimizeCode = unit->GetOptimizeCode();
    m_units.push_back(unit);

    // Create the job.
    FireStarterCompilerJob* job = new FireStarterCompilerJob();

    // Loop until the the completion condition or the host program is quit.
    m_controlTimer.Start();
    unsigned int generation = 0;
    while (!m_quitControlThread && (generation < m_settings.m_attempts)) {
        // Initialize the job
        *job = FireStarterCompilerJob();

        // Generate the job code.
        job->m_state.InitState(m_settings);
        job->m_state.m_generation = generation++;
        unsigned int stateSeed = job->m_state.StateSeed();
        printf("Generation=%d  Seed=%d  stateSeed=%d\n", job->m_state.m_generation, job->m_state.m_program.m_settings.m_seed + job->m_state.m_generation, stateSeed);
        job->m_state.m_program.RandomProgram(stateSeed);
        job->m_state.m_program.OptimizeRegisters(true);

        // Generate the optimize code
        std::string evaluateCode;
        generate.GenerateEvaluate(job->m_state, evaluateCode);

        // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
        job->m_options.clear();
        CUDACompile::StandardOptions(job->m_options);
        job->m_programName = "Optimize";
        job->m_program = optimizeCode;
        FireStarterCode::UpdateProgram(job->m_program, evaluateCode, EVALUATE_CODE);

        // Compile the job.
        bool compileResult = false;
        unit->DispatchSync([unit, job, &compileResult] { compileResult = unit->JobCompile(job); });
        if (!compileResult)
            break;
        if (job->m_log.size())
            printf("compilation log ---\n%s\nend log---\n", job->m_log.c_str());
        if (!job->m_ptx.size())
            break;

        // Execute the variations one at a time.
        bool executeResult1 = false;
        atomicResult = m_settings.m_startResult;
        unit->DispatchSync([unit, job, &executeResult1] { executeResult1 = unit->JobExecute(job, atomicResult, false); });
        if (!executeResult1)
            break;

        // Update the current state.
        controlState = job->m_state;
        m_result = controlState.MaxResult();
        m_totalResult += m_result;

        // Test the current state.
        float testError = controlState.TestResult();

        // Increment the generation and calculate the average time per generation.
        m_averageResult = m_totalResult / generation;
        double generationTime = m_controlTimer.Duration() / generation;

        // Update the best state.
        if (m_result < m_bestResult) {
            m_bestState = controlState;
            m_bestResult = m_result;

            // Update the best code on disk.
            SaveBestState();
            SaveBestCode();
            SaveSolution(generation, generationTime);

            // Erase the frame buffer
            m_buffer.Erase();

            // Draw the graphs for both variations.
            FireShow();
            GetMainThread()->DispatchSync([this] {
                RenderImage(m_buffer.m_width, m_buffer.m_height, m_buffer.GetDevice());
            });
        }

        // Update the render status after every pass.
        RenderStatus(controlState, generationTime, testError);
    }

    // Finish processing and terminate each unit.
    ClearUnits();

    // Delete the compilier manager and cancel any waiting jobs.
    delete job;
} // ControlTest

void FireStarter::ControlRandom(void)
{
    // Setup the intial state
    FireStarterState controlState(m_settings);
    m_bestState = controlState;

    m_result = 0.0f;
    m_bestResult = m_settings.m_startResult;

    // Create the shared compiler
    FireStarterCompilerManager *compilerManager = new FireStarterCompilerManager(max(m_settings.m_units, m_settings.m_processes) * 10);
    FireStarterRandom* randomGenerator = new FireStarterRandom(m_settings, compilerManager);

    // Create the units.
    for (unsigned int i = 0; i < m_settings.m_units; i++) {
        FireStarterUnit* unit = new FireStarterUnit(i);
        unit->StartRandom(controlState, compilerManager);
        m_units.push_back(unit);
    }

    // Loop until the the completion condition or the host program is quit.
    m_controlTimer.Start();
    unsigned int generation = 0;
    while (!m_quitControlThread && (generation < m_settings.m_attempts)) {
        // Note: The jobs may be received out of order.
        FireStarterCompilerJob* job = compilerManager->GetComplete();
        if (!job)
            break;

        controlState = job->m_state;
        m_result = controlState.MaxResult();
        m_totalResult += m_result;
        generation = controlState.m_generation;

        // Test the current state.
        float testError = controlState.TestResult();

        // Increment the generation and calculate the average time per generation.
        m_averageResult = m_totalResult / (generation + 1);
        double generationTime = m_controlTimer.Duration() / (generation + 1);
        if (m_result < m_bestResult) {
            m_bestState = controlState;
            m_bestResult = m_result;
 
            // Update the best code on disk.
            SaveBestState();
            SaveBestCode();
            SaveSolution(generation, generationTime);

            // Erase the frame buffer
            m_buffer.Erase();

            // Draw the graphs for both variations.
            FireShow();
            GetMainThread()->DispatchSync([this] {
                const unsigned char* bufferPixels = (m_settings.m_mode == FIRESTARTER_SOLUTION) ? m_buffer.GetHost() : m_buffer.GetDevice();
                RenderImage(m_buffer.m_width, m_buffer.m_height, bufferPixels);
            });
        }

        // Update the render status after every pass.
        RenderStatus(controlState, generationTime, testError);

        // Add the job to the free list.
        compilerManager->AddFree(job);
    }

    // Cancel any waiting jobs
    compilerManager->Cancel();

    // Delete the random code generator.
    delete randomGenerator;

    // Finish processing and terminate each unit.
    ClearUnits();

    // Delete the compilier manager and cancel any waiting jobs.
    delete compilerManager;
} // ControlRandom

void FireStarter::ControlLoop(void)
{
    // Setup the intial state 
    m_result = 0.0f;
    m_bestResult = m_settings.m_startResult;

    // Create the states.
    FireStarterSettings controlSettings(m_settings);
    m_allStates.resize(m_settings.m_units);
    for (unsigned int i = 0; i < m_settings.m_units; i++) {
        FireStarterState& state = m_allStates[i];
        controlSettings.m_seed = m_settings.m_seed + i; // Note: Different seed for each unit!
        state.InitState(controlSettings);
        if (m_settings.m_mode == FIRESTARTER_OPTIMIZE)
            LoadState(state);
    }
    m_bestState = m_allStates[0];

    // Create the units.
    if (m_settings.m_units > 1)
        for (unsigned int i = 0; i < m_settings.m_units; i++) {
            FireStarterProcess* process = m_settings.m_processes ? m_server.AddProcess() : nullptr;
            FireStarterUnit* unit = new FireStarterUnit(i, process);
            unit->Start();  // Start the interprocess communication.
            unit->InitUnit(m_allStates[i]);
            m_units.push_back(unit);
        }
    else {
        FireStarterUnit* unit = new FireStarterUnit(0, CUDAContext::CUDADevices());
        unit->InitUnit(m_allStates[0]);
        m_units.push_back(unit);
    }

    // Loop until the the completion condition or the host program is quit.
    while (!m_quitControlThread) {
        // Execute a generation for all the units.
        m_controlTimer.Start();
        for (FireStarterUnit* unit : m_units)
            unit->Execute();

        // Update the states for all the units.
        for (FireStarterUnit* unit : m_units)
            unit->Update(m_allStates.data());

        // Update the best data for all the states.
        m_result = m_settings.m_startResult;
        bool allFinished = true;
        bool controlUpdate = false;
        for (const FireStarterState& state : m_allStates) {
            float maxResult = state.MaxResult();
            m_result = fmin(m_result, maxResult);
            m_totalResult += maxResult;
            if (m_result < m_bestResult) {
                m_bestResult = m_result;
                m_bestState = state;
                controlUpdate = true;
            }

            // Update the best code on disk and compile a new FireShow.
            double generationTime = m_controlTimer.Duration();
            if (controlUpdate && !m_quitControlThread) {
                SaveBestState();
                SaveBestCode();
                SaveSolution(state.m_generation, generationTime);
            }

            // Test the best state
            float testError = m_bestState.TestResult();

            // Update the render status after every pass.
            m_averageResult = m_totalResult / (state.m_generation * m_allStates.size());
            RenderStatus(state, generationTime, testError);

            // Is there more work to do?
            if (state.m_generation - m_bestState.m_generation < m_settings.m_attempts)
                allFinished = false;
        }

        // Send all the states back to all the units.
        for (FireStarterUnit* unit : m_units)
            unit->Sync(m_allStates.data());

        // Render the buffer if the best data was updated and the previous buffer was displayed.
        if (controlUpdate && !m_quitControlThread) {
            // Erase the frame buffer
            m_buffer.Erase();

            // Draw the graphs for both variations.
            FireShow();
            controlUpdate = false;
            const unsigned char* bufferPixels = (m_settings.m_mode == FIRESTARTER_SOLUTION) ? m_buffer.GetHost() : m_buffer.GetDevice();
            GetMainThread()->DispatchSync([this, bufferPixels] {
                RenderImage(m_buffer.m_width, m_buffer.m_height, bufferPixels);
            });
        }

        // Has the completion condition been met?
        if (allFinished)
            break;
    }

    // Finish processing and terminate each unit.
    ClearUnits();
} // ControlLoop

void FireStarter::ControlThread(void)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireSettings();
    m_fireStarterMode = m_settings.m_mode;
    m_bestResult = m_settings.m_startResult;

    if (!m_quitControlThread) {
        m_buffer.Resize(m_width, m_height);
        m_buffer.Erase();

        if (m_fireStarterMode == FIRESTARTER_TEST) {
            // Only one test unit and no multiprocessing.
            m_settings.m_units = 1;
            m_settings.m_processes = 0;
            ControlTest();
        } else if (m_fireStarterMode == FIRESTARTER_RANDOM) {
            // If the evolve units is set to zero, use the number of gpus.
            if (m_settings.m_units == 0)
                m_settings.m_units = CUDAContext::CUDADevices();

            // if the evolve proceesses is set to zero, use the number of concurrent hardware threads.
            if (m_settings.m_processes == 0)
                m_settings.m_processes = std::thread::hardware_concurrency(); // Note: Returns logical core count not physical core count.

            // Process compiled jobs as they are completed.
            ControlRandom();
        } else {
            // If the evolve units is set to zero, use the number of concurrent hardware threads.
            if (m_settings.m_units == 0)
                m_settings.m_units = std::thread::hardware_concurrency(); // Note: Returns logical core count not physical core count.

            // Initial evolution pass.
            ControlLoop();

            // Optimization evolution pass.
            if (FIRESTARTER_SECOND_PASS && (m_fireStarterMode != FIRESTARTER_OPTIMIZE) && !m_quitControlThread) {
                m_fireStarterMode = FIRESTARTER_OPTIMIZE;
                FireSettings();
                ControlLoop();
            }
        }
        // Free the frame buffer memory.
        m_buffer.Resize(0, 0);
    }
} // ControlThread

float FireStarter::DrawSolution(uchar4* bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, unsigned int variation)
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
        float theta = TARGET_PI * ((x - bufferWidth * 0.5f)  / xScale + 1.0f);
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

bool FireStarter::Init(void* window, unsigned int width, unsigned int height)
{
    m_window = window;
    m_width = width;
    m_height = height;
    if (m_settings.m_mode == FIRESTARTER_SOLUTION) {
        m_buffer.Resize(m_width, m_height);
        m_buffer.Erase();
        std::string statusString = "FireStarter:";
        for (unsigned int v = 0; v < m_settings.m_variations; v++) {
            float error = DrawSolution((uchar4*)m_buffer.m_hostBase, m_buffer.m_width, m_buffer.m_height, v);
            statusString += Format(" Solution %d = %f", v, error);
        }
        RenderImage(width, height, m_buffer.m_hostBase);
        SetWindowText((HWND)m_window, statusString.c_str());
        return true;
    } else if (LoadTargetCode() && LoadFireSettingsCode() && LoadFireShowCode()) {
        DispatchAsync([this] { ControlAllocate(); });
        DispatchAsync([this] { ControlThread(); });
        DispatchAsync([this] { ControlDeallocate(); });
        return true;
    }
    return false;
} // Init

void FireStarter::Quit(void)
{
    m_quitControlThread = true;
    DispatchSync([] {}); // This will wait for ControlThread() to exit.
} // Quit

FireStarter::FireStarter(void)
{
    m_CUDAContext = nullptr;
    m_fireSettingsModule = nullptr;
    m_fireShowModule = nullptr;
    m_fireSettingsFunction = nullptr;
    m_fireShowFunction = nullptr;
    m_fireSettings = nullptr;
    m_fireShowResult = nullptr;
    m_fireShowInstructions = nullptr;
    m_fireStarterGenerate = nullptr;
    m_fireStarterMode = 0;
    m_quitControlThread = false;
    m_bestResult = 0;
    m_totalResult = 0;
    m_averageResult = 0;
    m_result = 0;
} // FireStarter

FireStarter::~FireStarter(void)
{
    DispatchSync([this] {
        ControlDeallocate();
        if (m_fireStarterGenerate) {
            delete m_fireStarterGenerate;
            m_fireStarterGenerate = nullptr;
        }
        if (m_CUDAContext)
            delete m_CUDAContext;
    });
} // ~FireStarter