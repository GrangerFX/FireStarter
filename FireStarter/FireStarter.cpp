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
        m_bestState.EvaluateCode(evaluateCode);

        // Create the units code by replacing the evaluate and optimize sections of the optimize code.
        std::string bestCode = optimizeCode;
        FireStarterCode::UpdateProgram(bestCode, evaluateCode, EVALUATE_CODE);
        FireStarterCode::SaveCode("FireStarter_BestCode.cu", bestCode);
    }
} // SaveBestCode

void FireStarter::SaveSolution(void)
{
    std::string solutionCode;
    m_bestState.SaveSolution(solutionCode, m_solutionTargetCode, m_controlTime, m_generation);
    FireStarterCode::SaveCode("FireStarter_Solution.h", solutionCode);
} // SaveSolution

void FireStarter::FireShow(CUDAContext* context, CUfunction fireShowFunction)
{
    for (unsigned int variation = 0; variation < PROGRAM_VARIATIONS; variation++) {
        // Launch the display kernel
        int threadsPerBlock = BLOCK_THREADS;
        int blocksPerGrid = (m_buffer.m_width + threadsPerBlock - 1) / threadsPerBlock;
        dim3 cudaBlockSize(threadsPerBlock, 1, 1);
        dim3 cudaGridSize(blocksPerGrid, 1, 1);

        void* arr[] = { reinterpret_cast<void*>(&m_bestState.m_result),
                        reinterpret_cast<void*>(&m_buffer.m_deviceBase),
                        reinterpret_cast<void*>(&m_buffer.m_width),
                        reinterpret_cast<void*>(&m_buffer.m_height),
                        reinterpret_cast<void*>(&variation) };

        checkCUDAErrors(cuLaunchKernel(fireShowFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, context->Stream(),                               // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
    }
    checkCUDAErrors(cudaStreamSynchronize(context->Stream()));
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
    sprintf_s(m_statusString, "FireStarter: Generation=%u  Age=%u  Best=%f  Time=%.4f Seconds  Run Time=%.4f Seconds", m_generation, m_generation - m_bestGeneration, m_bestResult, m_controlTime, m_runTimer.Duration());
} // RenderStatus

void FireStarter::ControlThread(void)
{
    CUDAContext fireShowContext;
    CUmodule fireShowModule = nullptr;
    CUfunction fireShowFunction = nullptr;

    m_buffer.Resize(m_width, m_height);
    m_buffer.Erase();

    // Compile fireShow.
    if (CUDACompile::CompileProgram(fireShowModule, m_fireShowCode, "FireShow"))
        fireShowFunction = CUDACompile::GetFunction(fireShowModule, "FireShow");

    // Create and initialize a unit for each processor thread.
    unsigned int unit_count = m_settings.m_evolveUnits;
#if 0
    if (!unit_count)
        unit_count = std::thread::hardware_concurrency(); // Returns logical core count not physical core count.
    if (!unit_count)   // May return zero on some systems.
        unit_count = 1;
#endif
    if (m_settings.m_evolveMode == FIRESTARTER_PROCESS) {
        for (unsigned int i = 0; i < unit_count; i++) {
            FireStarterProcess* process = m_server.AddProcess();
            FireStarterUnit* unit = new FireStarterUnit(process);
            m_units.push_back(unit);
            unit->DispatchAsync([process] {process->Start(); });
        }
    } else
        for (unsigned int i = 0; i < unit_count; i++)
            m_units.push_back(new FireStarterUnit());
    if (m_settings.m_evolveMode == FIRESTARTER_OPTIMIZE) {
        LoadState(m_bestState);
        m_bestState.m_settings = m_settings;
    }
    for (unsigned int i = 0; i < unit_count; i++)
        m_units[i]->InitUnit(i, m_bestState);

    // Loop until the the host program is quit.
    m_runTimer.Start();
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
            FireShow(&fireShowContext, fireShowFunction);
            m_controlUpdate = false;
            const unsigned char* bufferPixels = (m_settings.m_evolveMode == FIRESTARTER_SOLUTION) ? m_buffer.GetHost() : m_buffer.GetDevice();
            GetMainThread()->DispatchSync([this, bufferPixels] {
                RenderImage(m_buffer.m_width, m_buffer.m_height, bufferPixels);
                m_bufferUpdate = false;
            });
        }
    }

    // Finish processing and terminate each unit.
    for (FireStarterUnit* unit : m_units)
        delete unit;
    m_units.clear();

    // Free the frame buffer memory.
    m_buffer.Resize(0, 0);

    // Unload the fire show code and destroy the CUDA context.
    if (fireShowModule)
        checkCUDAErrors(cuModuleUnload(fireShowModule));
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
        for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
            float error = DrawSolution((uchar4*)m_buffer.m_hostBase, m_buffer.m_width, m_buffer.m_height, v);
            statusString += Format(" Solution %d = %f", v, error);
        }
        RenderImage(width, height, m_buffer.m_hostBase);
        SetWindowText((HWND)m_window, statusString.c_str());
        return true;
    } else if (LoadTargetCode() && LoadFireShowCode()) {
        DispatchAsync([this] { ControlThread(); });
        return true;
    }
    return false;
} // Init

void FireStarter::Quit(void)
{
    m_quitControlThread = true;
    DispatchSync([] {}); // This will wait for ControlThread() to exit.
} // Quit

FireStarter::FireStarter(void) : m_settings(FIRESTARTER_MODE)
{
    m_bestState.InitState(m_settings);
    m_quitControlThread = false;
    m_statusString[0] = 0;
    m_generation = 0;
    m_bestGeneration = 0;
    m_bestResult = START_RESULT;
    m_controlTime = 0.0;
    m_seed = RANDOMHASH(123);
    m_controlUpdate = false;
    m_bufferUpdate = false;
    m_allStates.resize(m_settings.m_evolveUnits * m_settings.m_evolveStates);
} // FireStarter

FireStarter::~FireStarter(void)
{
} // ~FireStarter