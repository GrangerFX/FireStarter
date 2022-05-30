#include "FireStarter.h"
#include "FireStarterCode.h"
#include "FireStarterUtil.h"
#include "FireStarter_LoadState.h"
#include "CUDAContext.h"
#include "CUDACompile.h"

bool FireStarter::LoadTargetCode(void)
{
    if (!FireStarterCode::LoadCode("FireStarterTarget.h", m_solutionTargetCode))
        return false;
    FireStarterCode::ReplaceCode(m_solutionTargetCode, "Target", "SolutionTarget");
    return true;
} // LoadTargetCode

bool FireStarter::LoadFireShowCode(void)
{
    if (!FireStarterCode::LoadCode("FireShow.cu", m_fireShowCode))
        return false;
    return true;
} // LoadFireShowCode

void FireStarter::SaveBestState(void)
{
    std::string bestStateCode;
    m_bestState.SaveState(bestStateCode);
    FireStarterCode::SaveCode("Results/FireStarter_LoadState.h", bestStateCode);
} // SaveBestState

void FireStarter::SaveBestCode(void)
{
    static std::string optimizeCode;
    if (optimizeCode.empty())
        FireStarterCode::LoadCode("Optimize.cu", optimizeCode);
    if (!optimizeCode.empty()) {
        std::string definesCode;
        m_bestState.SaveDefines(definesCode);

        // Generate the evaluate function
        std::string evaluateCode;
        m_bestState.EvaluateCode(evaluateCode);

        // Create the units code by replacing the evaluate and optimize sections of the optimize code.
        std::string bestCode = optimizeCode;
        FireStarterCode::UpdateProgram(bestCode, evaluateCode, EVALUATE_CODE);
        FireStarterCode::SaveCode("Results/FireStarter_BestCode.cu", bestCode);
    }
} // SaveBestCode

void FireStarter::SaveSolution(void)
{
    std::string solutionCode;
    m_bestState.SaveSolution(solutionCode, m_solutionTargetCode, m_controlTime, m_generation);
    FireStarterCode::SaveCode("Results/FireStarter_Solution.h", solutionCode);
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
        0, m_fireShowContext->Stream(),                     // shared mem, stream */
        &arr[0],                                            // arguments */
        0));
    checkCUDAErrors(cudaMemcpyAsync(&m_settings, m_fireSettings, sizeof(FireStarterSettings), cudaMemcpyDeviceToHost, m_fireShowContext->Stream()));
    checkCUDAErrors(cudaStreamSynchronize(m_fireShowContext->Stream()));
} // FireSettings

void FireStarter::FireShow(void)
{
    size_t resultSize = FireStarterResult::ResultSize(m_settings.m_instructions, m_settings.m_variations);
    checkCUDAErrors(cudaMemcpyAsync(m_fireShowResult, m_bestState.Result(), resultSize, cudaMemcpyHostToDevice, m_fireShowContext->Stream()));
    size_t instructionsSize = FireStarterInstructions::InstructionsSize(m_settings.m_instructions);
    checkCUDAErrors(cudaMemcpyAsync(m_fireShowInstructions, m_bestState.m_program.Instructions(), instructionsSize, cudaMemcpyHostToDevice, m_fireShowContext->Stream()));
    for (unsigned int variation = 0; variation < m_settings.m_variations; variation++) {
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
                        reinterpret_cast<void*>(&variation) };

        checkCUDAErrors(cuLaunchKernel(m_fireShowFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, m_fireShowContext->Stream(),                     // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
    }
    checkCUDAErrors(cudaStreamSynchronize(m_fireShowContext->Stream()));
} // FireShow

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

void FireStarter::RenderStatus(void)
{
    // Update the status.
    std::string mode;
    switch (m_settings.m_evolveMode) {
        case FIRESTARTER_EVOLVE:
            mode = "FireStarter_Evolve";
            break;
        case FIRESTARTER_UNIT:
            mode = "FireStarter_Unit";
            break;
        case FIRESTARTER_PROCESS:
            mode = "FireStarter_Process";
            break;
        case FIRESTARTER_OPTIMIZE:
            mode = "FireStarter_Optimize";
            break;
        case FIRESTARTER_SOLUTION:
            mode = "FireStarter_Solution";
            break;
    }
    sprintf_s(m_statusString, "%s: Generation=%u  Age=%u  Best=%f  Time=%.4f Seconds  Run Time=%.4f Seconds", mode.c_str(), m_generation, m_generation - m_bestGeneration, m_bestResult, m_controlTime, m_runTimer.Duration());
} // RenderStatus

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
    if (m_fireShowModule) {
        checkCUDAErrors(cuModuleUnload(m_fireShowModule));
        m_fireShowModule = nullptr;
    }
} // ControlDeallocate

void FireStarter::ControlAllocate(void)
{
    if (!m_fireShowContext)
        m_fireShowContext = new CUDAContext(0);
    ControlDeallocate();
    checkCUDAErrors(cudaMalloc(&m_fireSettings, sizeof(FireStarterSettings)));
    checkCUDAErrors(cudaMalloc(&m_fireShowResult, FireStarterResult::ResultSize(m_settings.m_instructions, m_settings.m_variations)));
    checkCUDAErrors(cudaMalloc(&m_fireShowInstructions, FireStarterInstructions::InstructionsSize(m_settings.m_instructions)));

    // Compile fireShow.
    if (CUDACompile::CompileProgram(m_fireShowModule, m_fireShowCode, "FireShow")) {
        m_fireSettingsFunction = CUDACompile::GetFunction(m_fireShowModule, "FireSettings");
        m_fireShowFunction = CUDACompile::GetFunction(m_fireShowModule, "FireShow");
    }
} // ControlAllocate

void FireStarter::ControlLoop(void)
{
    if (m_quitControlThread)
        return;

    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireSettings();

    // If the evolve units is set to zero, use the number of concurrent hardware threads.
    if (m_settings.m_evolveUnits == 0)
        m_settings.m_evolveUnits = std::thread::hardware_concurrency(); // Returns logical core count not physical core count.

    m_generation = 0;
    m_bestGeneration = 0;
    m_bestResult = m_settings.m_evolveStartResult;
    m_controlTime = 0.0;
    m_controlUpdate = false;
    m_bufferUpdate = false;

    // Create the states.
    m_allStates.resize(m_settings.m_evolveUnits * m_settings.m_evolveStates);

    // Create the units.
    for (unsigned int i = 0; i < m_settings.m_evolveUnits; i++) {
        FireStarterProcess* process = (m_settings.m_evolveMode == FIRESTARTER_PROCESS) ? m_server.AddProcess() : nullptr;
        FireStarterUnit* unit = new FireStarterUnit(process);
        m_units.push_back(unit);
        unit->Start();  // Start the interprocess communication.
    }

    // Load or initialize the starting state.
    if (m_settings.m_evolveMode == FIRESTARTER_OPTIMIZE) {
        LoadState(m_bestState);
        m_bestState.m_settings = m_settings;
    } else
        m_bestState.InitState(m_settings);
    for (unsigned int i = 0; i < m_units.size(); i++)
        m_units[i]->InitUnit(i, m_bestState);

    // Loop until the the completion condition or the host program is quit.
    while (!m_quitControlThread) {
        // Execute a generation for all the units.
        m_controlTimer.Start();
        for (FireStarterUnit* unit : m_units)
            unit->Execute();

        // Update the best data for all the units.
        for (FireStarterUnit* unit : m_units)
            if (unit->Update(m_allStates.data(), m_bestState, m_bestResult)) {
                m_bestGeneration = m_generation;
                m_controlUpdate = true;
            }

        // Send all the states back to all the units.
        for (FireStarterUnit* unit : m_units)
            unit->Sync(m_allStates.data());

        m_controlTime = m_controlTimer.Duration();
        m_generation++;

        // Update the best code on disk and compile a new FireShow.
        if (m_controlUpdate && !m_quitControlThread) {
            SaveBestState();
            SaveBestCode();
            SaveSolution();
        }

        // Update the render status after every pass.
        if (!m_quitControlThread) {
            RenderStatus();
            GetMainThread()->DispatchAsync([this] { SetWindowText((HWND)m_window, m_statusString); });
        }

        // Render the buffer if the best data was updated and the previous buffer was displayed.
        if (!m_bufferUpdate && !m_quitControlThread) {
            // Erase the frame buffer
            m_buffer.Erase();

            // Draw the graphs for both variations.
            FireShow();
            m_controlUpdate = false;
            const unsigned char* bufferPixels = (m_settings.m_evolveMode == FIRESTARTER_SOLUTION) ? m_buffer.GetHost() : m_buffer.GetDevice();
            GetMainThread()->DispatchSync([this, bufferPixels] {
                RenderImage(m_buffer.m_width, m_buffer.m_height, bufferPixels);
                m_bufferUpdate = false;
                });
        }

        // Has the completion condition been met?
        if (m_generation - m_bestGeneration >= m_settings.m_evolveFailures)
            break;
    }

    // Finish processing and terminate each unit.
    for (FireStarterUnit* unit : m_units)
        delete unit;
    m_units.clear();
    m_server.ClearProcesses();
} // ControlLoop

void FireStarter::ControlThread(void)
{
    m_buffer.Resize(m_width, m_height);
    m_buffer.Erase();

    // Initial evolution pass.
    ControlLoop();

    // Optimization evolution pass.
    if (m_fireStarterMode != FIRESTARTER_OPTIMIZE) {
        m_fireStarterMode = FIRESTARTER_OPTIMIZE;
        ControlLoop();
    }

    // Free the frame buffer memory.
    m_buffer.Resize(0, 0);
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
    if (m_settings.m_evolveMode == FIRESTARTER_SOLUTION) {
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
    } else if (LoadTargetCode() && LoadFireShowCode()) {
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
    m_fireStarterMode = FIRESTARTER_MODE;
    m_fireShowContext = nullptr;
    m_fireShowModule = nullptr;
    m_fireShowFunction = nullptr;
    m_fireSettings = nullptr;
    m_fireShowResult = nullptr;
    m_fireShowInstructions = nullptr;
    m_bestState.InitState(m_settings);
    m_quitControlThread = false;
    m_statusString[0] = 0;
    m_generation = 0;
    m_bestGeneration = 0;
    m_bestResult = m_settings.m_evolveStartResult;
    m_controlTime = 0.0;
    m_seed = RANDOMHASH(123);
    m_controlUpdate = false;
    m_bufferUpdate = false;
} // FireStarter

FireStarter::~FireStarter(void)
{
    DispatchSync([this] {
        ControlDeallocate();
        if (m_fireShowContext)
            delete m_fireShowContext;
    });
} // ~FireStarter