#include "FireStarter.h"
#include "FireStarterCode.h"
#include "FireStarterUtil.h"
#include "FireStarter_LoadState.h"
#include "FireStarter_Solution.h"
#include "FireStarterEvolve.h"
#include "FireStarterExecute.h"
#include "CUDAContext.h"
#include "CUDACompile.h"
#include "SerialOutput.h"

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
        FireStarterCode::LoadCode("FireOptimizer.cu", optimizeCode);
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

void FireStarter::FireSettings(FireStarterSettings &settings, unsigned int firestarterMode)
{
    // Launch the load settings kernel
    dim3 cudaBlockSize(BLOCK_THREADS, 1, 1);
    dim3 cudaGridSize(1, 1, 1);

    FireStarterSettings* fireSettings = nullptr;
    checkCUDAErrors(cudaMalloc(&fireSettings, sizeof(FireStarterSettings)));

    void* arr[] = { reinterpret_cast<void*>(&fireSettings),
                    reinterpret_cast<void*>(&firestarterMode) };

    checkCUDAErrors(cuLaunchKernel(m_fireSettingsFunction,
        cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
        cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
        0, m_CUDAContext->Stream(),                  // shared mem, stream */
        &arr[0],                                            // arguments */
        0));
    checkCUDAErrors(cudaMemcpyAsync(&settings, fireSettings, sizeof(FireStarterSettings), cudaMemcpyDeviceToHost, m_CUDAContext->Stream()));
    checkCUDAErrors(cudaStreamSynchronize(m_CUDAContext->Stream()));

    // Unload the fire show code and destroy the CUDA context.
    checkCUDAErrors(cudaFree(fireSettings));
} // FireSettings

void FireStarter::FireShow(const FireStarterState& state)
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

void FireStarter::RenderStatus(const FireStarterState& state, double generationTime, double result, double average, double testError)
{
    const FireStarterSettings& settings = state.Settings();

    // Create the settings text.
    static std::string settingsText;
    if (settingsText.empty()) {
        FireStarterProgram::SettingsText(m_settings, settingsText);
        settingsText += "\r\n";
    }

    // Create the hash file.
    static std::string hashFilePath;
    if (hashFilePath.empty()) {
        hashFilePath = Format("Logs\\%s_Hash.txt", FileNameDate().c_str());
        FireStarterCode::AppendCode(hashFilePath, settingsText);
    }

    // Update the hash file.
    std::string hashString = Format("%s:%s  Generation:%4u  Best Generation:%4u", settings.Mode(), settings.Evolve(), state.m_generation, m_bestState.m_generation);
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
        statusString = Format("%s: Seed=%u  Generation=%u  Result=%.8f  Average=%.8f  Best=%.8f  BestSeed=%u  Time=%.4f Seconds  Run Time=%.4f Seconds  TestError=%.8f", settings.Mode(), settings.m_seed + state.m_generation, state.m_generation, result, average, m_bestState.MaxResult(), m_bestState.m_program.m_settings.m_seed + m_bestState.m_generation, generationTime, m_runTimer.Duration(), testError);
        for (unsigned int v = 0; v < settings.m_variations; v++)
            statusString += Format("  V:%d=%.8f", v, state.Result()->MinResult(v));
    } else
        statusString = Format("%s: Seed=%u  Generation=%u  Age=%u  Best=%.8f  BestSeed=%u  Time=%.4f Seconds  Run Time=%.4f Seconds  TestError=%.8f", settings.Mode(), state.m_generation, state.m_generation, state.m_generation - m_bestState.m_generation, m_bestState.MaxResult(), m_bestState.m_program.m_settings.m_seed + m_bestState.m_generation, generationTime, m_runTimer.Duration(), testError);

    // Update the log file.
    FireStarterCode::AppendCode(logFilePath, statusString + "\r\n");

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

void FireStarter::ControlDeallocate(void)
{
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
    checkCUDAErrors(cudaMalloc(&m_fireShowResult, FireStarterResult::ResultSize(m_settings.m_registers, m_settings.m_variations)));
    checkCUDAErrors(cudaMalloc(&m_fireShowInstructions, FireStarterInstructions::InstructionsSize(m_settings.m_instructions)));

    // Compile FireSettings
    if (CUDACompile::CompileProgram(m_fireSettingsModule, m_fireSettingsCode, "FireSettings"))
        m_fireSettingsFunction = CUDACompile::GetFunction(m_fireSettingsModule, "FireSettings");

    // Compile FireGenerate
    if (!m_fireStarterGenerate)
        m_fireStarterGenerate = new FireStarterGenerate(m_CUDAContext);
 
    // Compile FireShow.
    if (CUDACompile::CompileProgram(m_fireShowModule, m_fireShowCode, "FireShow"))
        m_fireShowFunction = CUDACompile::GetFunction(m_fireShowModule, "FireShow");
} // ControlAllocate

void FireStarter::ControlResults(const FireStarterState& state, FireStarterState& oldState)
{
    // Get the result.
    float result = state.MaxResult();
    m_totalResult = m_resultsCount++ ? m_totalResult + result : result;

    // Calculate the average time per generation.
    double duration = m_controlTimer.Duration();
    double weight = max(1.0 / m_resultsCount, 0.02);
    m_smoothTime = m_smoothTime * (1.0 - weight) + (duration - m_resultsTime) * weight;
    m_resultsTime = duration;
    if (result < m_bestState.MaxResult()) {
        // Update the best state.
        m_bestState = state;
        if (state.Settings().m_mode != FIRESTARTER_OPTIMIZE)
            SaveBestState();

        // Update the best code on disk.
        SaveBestCode();
        SaveSolution(state.m_generation, duration);

        // Draw the graphs for both variations.
        FireShow(state);
        GetMainThread()->DispatchSync([this] {
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
    RenderStatus(state, m_smoothTime, result, average, testError);
} // ControlResults

void FireStarter::ControlUnits(void)
{
    // Create the states and units.
    std::vector<FireStarterUnit*> units;
    std::vector<FireStarterState> allStates;
    bool result = true;
    for (unsigned int i = 0; i < m_settings.m_units; i++) {
        FireStarterUnit* unit = new FireStarterUnit(i, CUDAContext::CUDADevices());
        if (unit->InitUnit(m_bestState)) {
            allStates.push_back(m_bestState);
            units.push_back(unit);
        }
        else {
            delete unit;
            result = false;
            break;
        }
    }

    if (result) {
        // Loop until the the completion condition or the host program is quit.
        m_controlTimer.Start();
        while (!m_quitControlThread) {
            // Execute a generation for all the units.
            for (FireStarterUnit* unit : units)
                unit->Execute();

            // Update the states for all the units.
            bool allFinished = true;
            for (FireStarterUnit* unit : units) {
                FireStarterState state;
                unit->GetState(state);

                // Update the best state and display the results.
                FireStarterState& oldState = allStates[state.m_index];
                ControlResults(state, oldState);

                // Is there more work to do?
                if (state.m_generation - m_bestState.m_generation < m_settings.m_attempts)
                    allFinished = false;
            }

            // Send all the states back to all the units.
            for (FireStarterUnit* unit : units)
                unit->Sync(allStates.data());

            // Has the completion condition been met?
            if (allFinished)
                break;
        }
    }

    // Finish processing and terminate each unit.
    for (FireStarterUnit* unit : units)
        delete unit;
} // ControlUnits

bool FireStarter::CompleteJob(FireStarterManager* manager, std::vector<FireStarterState>& allStates)
{
    for (FireStarterState& oldState : allStates) {
        // Get the completed job.
        // Note: The jobs may be received out of order.
        FireStarterJob* job = manager->GetComplete();
        if (!job)
            return false;

        // Output job queue status.
        //  m_output.Output(Format("Free: %llu %f  Code: %llu %f  Compile: %llu %f  Complete: %llu %f\n", manager->SizeFree(), manager->TimeFree(), manager->SizeCode(), manager->TimeCode(), manager->SizeCompile(), manager->TimeCompile(), manager->SizeComplete(), manager->TimeComplete()));

        // Update the best state and display the results.
        ControlResults(job->m_state, oldState);
        manager->AddFree(job);
    }
    return true;
} // CompleteJob

void FireStarter::ControlTest(void)
{
    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager(max(m_settings.m_units, m_settings.m_processes));

    // Setup the intial state
    std::vector<FireStarterState> allStates;
    FireStarterState testState(m_settings);
    allStates.push_back(testState);
    m_bestState = testState;

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager, m_settings.m_processes);

    // Create the execution unit.
    FireStarterExecute* execute = new FireStarterExecute(manager, 0);

    // Loop until the the completion condition or the host program is quit.
    m_controlTimer.Start();
    unsigned int generation = 0;
    while (!m_quitControlThread) {
        evolve->EvolveStates(&m_bestState, allStates, generation);
        execute->ExecuteEvolve();
        if (!CompleteJob(manager, allStates))
            break;

        // Has the completion condition been met?
        if (generation++ == m_settings.m_attempts)
            break;
    }

    // Cancel any waiting jobs
    manager->Cancel();

    // Finish processing and terminate each unit.
    delete execute;

    // Delete the multi-process compiler.
    delete compile;

    // Delete the evolution code generator.
    delete evolve;

    // Delete the compilier manager and cancel any waiting jobs.
    delete manager;
} // ControlTest

void FireStarter::ControlRandom(void)
{
    // if the evolve proceesses is set to zero, use the number of concurrent hardware threads.
#if FIRESTARTER_AUTO_PROCESS
    if (m_settings.m_processes == 0)
        m_settings.m_processes = std::thread::hardware_concurrency(); // Note: Returns logical core count not physical core count.
#endif

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager(max(m_settings.m_units, m_settings.m_processes));

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager, m_settings.m_processes);

    // Setup the intial best state 
    m_bestState.InitState(m_settings);
    m_bestState.m_program.RandomProgram(m_bestState.StateSeed());

    // Setup the intial state
    std::vector<FireStarterState> allStates;
    allStates.push_back(m_bestState);

    // Start generating random code generations.
    evolve->EvolveGenerations(&m_bestState, m_settings.m_attempts);

    // Create the execution units.
    std::vector<FireStarterExecute*> executionUnits;
    for (unsigned int i = 0; i < m_settings.m_units; i++) {
        // Create an execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager, i);
        executionUnits.push_back(execute);

        // Run a random execution thread for each unit.
        execute->ExecuteRandom();
    }

    // Loop until the the completion condition or the host program is quit.
    m_controlTimer.Start();
    while (!m_quitControlThread) {
        if (!CompleteJob(manager, allStates))
            break;
    }

    // Cancel any waiting jobs
    manager->Cancel();

    // Finish processing and terminate each unit.
    for (FireStarterExecute* execute : executionUnits)
        delete execute;

    // Delete the evolution code generator.
    delete evolve;

    // Delete the multi-process compiler.
    delete compile;

    // Delete the compilier manager and cancel any waiting jobs.
    delete manager;
} // ControlRandom

void FireStarter::ControlEvolve(void)
{
    // if the evolve proceesses is set to zero, use the number of concurrent hardware threads.
#if FIRESTARTER_AUTO_PROCESS
    if (m_settings.m_processes == 0)
        m_settings.m_processes = std::thread::hardware_concurrency(); // Note: Returns logical core count not physical core count.
#endif

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager(max(m_settings.m_units, m_settings.m_processes));

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager, m_settings.m_processes);

    // Create the evolution generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Setup the intial best state 
    m_bestState.InitState(m_settings);
    m_bestState.m_program.RandomProgram(m_bestState.StateSeed());

    // Create the states and units.
    std::vector<FireStarterExecute*> executionUnits;
    std::vector<FireStarterState> allStates;
    bool result = true;
    for (unsigned int i = 0; i < m_settings.m_units; i++) {
        // Randomize the entire program for the first generation
        FireStarterState state(m_settings, i);
        state.m_program.RandomProgram(state.StateSeed());
        allStates.push_back(state);

        // Create an execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager, i);
        executionUnits.push_back(execute);
    }
    if (result) {
        unsigned int generation = 0;

        // Loop until the the completion condition or the host program is quit.
        m_controlTimer.Start();
        while (!m_quitControlThread) {
            evolve->EvolveStates(&m_bestState, allStates, generation);
            for (FireStarterExecute* execute : executionUnits)
                execute->ExecuteEvolve();

            if (!CompleteJob(manager, allStates))
                break;

            // Has the completion condition been met?
            if (generation++ - m_bestState.m_generation > m_settings.m_attempts)
                break;
        }
    }

    // Cancel any waiting jobs
    manager->Cancel();

    // Finish processing and terminate each unit.
    for (FireStarterExecute* execute : executionUnits)
        delete execute;

    // Delete the evolution code generator.
    delete evolve;

    // Delete the multi-process compiler.
    delete compile;

    // Delete the compilier manager and cancel any waiting jobs.
    delete manager;
} // ControlEvolve

void FireStarter::ControlOptimize(void)
{
    if (m_quitControlThread)
        return;

    // Load the best state.
    FireStarterSettings optimizeSettings;
    FireSettings(optimizeSettings, FIRESTARTER_OPTIMIZE);
    m_settings.CopyModeSettings(optimizeSettings);
    m_bestState.Settings() = m_settings;
    m_bestState.m_generation = 0;
    m_bestState.m_index = 0;
    m_resultsCount = 0;
    m_resultsTime = 0.0;

    // Optimization evolution pass.
#if 1
    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager(1);

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager, m_settings.m_processes);

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the execution unit.
    FireStarterExecute* execute = new FireStarterExecute(manager, 0);

    // Create the state and execution unit.
    std::vector<FireStarterState> allStates;
    allStates.push_back(m_bestState);

    // Generate the optimize code.
    evolve->GenerateOptimize(&m_bestState);

    // Compile the optimize code.
    execute->ExecuteCompile();

    // Loop until the the completion condition or the host program is quit.
    m_controlTimer.Start();
    unsigned int generation = 0;
    while (!m_quitControlThread) {
        // Optimize the current generation.
        execute->ExecuteOptimize(generation);

        // Update the results in the UI.
        if (!CompleteJob(manager, allStates))
            break;

        // Has the completion condition been met?
        if (generation++ - m_bestState.m_generation > m_settings.m_attempts)
            break;
    }

    // Cancel any waiting jobs
    manager->Cancel();

    // Finish processing and terminate each unit.
    delete execute;

    // Delete the evolution code generator.
    delete evolve;

    // Delete the multi-process compiler.
    delete compile;

    // Delete the compilier manager and cancel any waiting jobs.
    delete manager;
#else
    ControlUnits();
#endif
} // ControlOptimize

void FireStarter::ControlThread(void)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireSettings(m_settings, FIRESTARTER_MODE);

    // If the evolve units is set to zero, use the number of gpus.
    if (m_settings.m_units == 0)
        m_settings.m_units = CUDAContext::CUDADevices();

    if (!m_quitControlThread) {
        m_buffer.Resize(m_width, m_height);
        m_buffer.Erase();

        if ((m_settings.m_mode == FIRESTARTER_CODE) || (m_settings.m_mode == FIRESTARTER_UNIT)) {
            // Initialize the best state.
            m_bestState.InitState(m_settings);

            // Program evolution pass.
            ControlUnits();

            // Optimization evolution pass.
            if (!m_quitControlThread) {
                // Load the best state.
                FireStarterSettings optimizeSettings;
                FireSettings(optimizeSettings, FIRESTARTER_OPTIMIZE);
                m_settings.CopyModeSettings(optimizeSettings);
                m_bestState.Settings() = m_settings;
                m_bestState.m_generation = 0;
                m_bestState.m_index = 0;
                m_resultsCount = 0;
                m_resultsTime = 0.0;
                ControlUnits();
            }
        } else if (m_settings.m_mode == FIRESTARTER_TEST) {
            // Test of jobs without processes.
            m_settings.m_units = 1;
            m_settings.m_processes = 0;
            ControlTest();
        } else if (m_settings.m_mode == FIRESTARTER_RANDOM) {
            // Random generations.
            ControlRandom();
        } else if (m_settings.m_mode == FIRESTARTER_EVOLVE) {
            // Evolved generations.
            ControlEvolve();

            // Optimization evolution pass.
            if (FIRESTARTER_SECOND_PASS)
                ControlOptimize();
        } else if (m_settings.m_mode == FIRESTARTER_OPTIMIZE) {
            // Load the best state.
            LoadState(m_bestState);
            m_bestState.Settings().CopyModeSettings(m_settings);
            m_bestState.m_generation = 0;
            m_bestState.m_index = 0;
            m_bestState.InitResult();

            // Optimization evolution pass.
            ControlOptimize();
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
    m_fireShowResult = nullptr;
    m_fireShowInstructions = nullptr;
    m_fireStarterGenerate = nullptr;
    m_resultsCount = 0;
    m_resultsTime = 0.0;
    m_smoothTime = 0.0;
    m_quitControlThread = false;
    m_totalResult = 0;
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