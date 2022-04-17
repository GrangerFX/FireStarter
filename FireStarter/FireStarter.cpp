#include "FireStarter.h"
#include "FireStarterCode.h"
#include "FireStarterUtil.h"
#include "CUDACompile.h"

void FireStarter::BuildData(std::string& code)
{
    std::string replacementData;
    code += "inline void InitData(const unsigned int variation, FireStarterData &data)\r\n";
    code += "{\r\n";
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        code += Format("    if (variation == %d) {\r\n", v);
        for (unsigned int i = 0; i < m_bestEvaluateState.m_program.m_dataSize; i++)
            code += Format("        data.d[%d] = %ff;\r\n", i, m_bestEvaluateState.m_result.data[v].d[i]);
        for (unsigned int i = m_bestEvaluateState.m_program.m_dataSize; i < PROGRAM_INSTRUCTIONS; i++)
            code += Format("        data.d[%d] = 0.0f;\r\n", i);
        code += "    }\r\n";
    }
    code += "} // InitData\r\n";
} // BuildData

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
    m_bestEvaluateState.SaveState(bestStateCode);
    FireStarterCode::SaveCode("FireStarter_LoadState.h", bestStateCode);
} // SaveBestState

void FireStarter::SaveBestCode(void)
{
    FireStarterCode::SaveCode("FireStarter_BestCode.h", m_bestCode);
} // SaveBestCode

void FireStarter::SaveSolution(void)
{
    std::string solutionCode;
    m_bestEvaluateState.SaveSolution(solutionCode, m_solutionTargetCode, m_controlTime, m_generation, (unsigned int)m_units.size());
    FireStarterCode::SaveCode("FireStarter_Solution.h", solutionCode);
} // SaveSolution

void FireStarter::FireShow(void)
{
    for (unsigned int variation = 0; variation < PROGRAM_VARIATIONS; variation++) {
        // Launch the display kernel
        int threadsPerBlock = BLOCK_THREADS;
        int blocksPerGrid = (m_buffer.m_width + threadsPerBlock - 1) / threadsPerBlock;
        dim3 cudaBlockSize(threadsPerBlock, 1, 1);
        dim3 cudaGridSize(blocksPerGrid, 1, 1);

        void* arr[] = { reinterpret_cast<void*>(&m_bestEvaluateState.m_result),
                        reinterpret_cast<void*>(&m_buffer.m_deviceBase),
                        reinterpret_cast<void*>(&m_buffer.m_width),
                        reinterpret_cast<void*>(&m_buffer.m_height),
                        reinterpret_cast<void*>(&variation) };

        checkCUDAErrors(cuLaunchKernel(m_fireShowFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, m_fireShowStream,                                // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
    }
    checkCUDAErrors(cudaStreamSynchronize(m_fireShowStream));
} // FireShow

void FireStarter::RenderImage(unsigned int width, unsigned int height, const unsigned char *pixels)
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
    sprintf_s(m_statusString, "FireStarter: Generation=%u  Age=%u  Best=%f  Worst=%f  Time=%.4f Seconds  Run Time=%.4f Seconds", m_generation, m_generation - m_bestGeneration, m_bestResult, m_worstResult, m_controlTime, m_runTimer.Duration());
} // RenderStatus

void FireStarter::ControlThread(void)
{
    checkCUDAErrors(cuInit(0));
    checkCUDAErrors(cuDeviceGet(&m_device, 0)); // Use the first CUDA device for now.
    checkCUDAErrors(cuCtxCreate(&m_fireShowContext, CU_CTX_SCHED_AUTO, m_device));
    checkCUDAErrors(cudaStreamCreate(&m_fireShowStream));
    m_buffer.Resize(m_width, m_height);
    m_buffer.Erase();

    // Compile fireShow.
    m_fireShowFunction = CUDACompile::CompileProgram(m_fireShowCode, m_fireShowModule, "FireShow");

    // Create and initialize a unit for each processor thread.
    unsigned int unit_count = PROGRAM_UNITS;
    if (!unit_count)
        unit_count = std::thread::hardware_concurrency(); // Returns logical core count not physical core count.
    if (!unit_count)   // May return zero on some systems.
        unit_count = 1;
    for (unsigned int i = 0; i < unit_count; i++) {
        FireStarterUnit* unit = new FireStarterUnit(i, m_device);
        m_units.push_back(unit);
    }
    for (FireStarterUnit* unit : m_units)
        unit->DispatchAsync([this, unit] {
            unit->InitUnit(m_evolveMode);
        });

    // Loop until the the host program is quit.
    m_runTimer.Start();
    while (!m_quitControlThread) {
        // Asyncronously execute a generation for all the units.
        m_controlTimer.Start();
        for (FireStarterUnit* unit : m_units)
            unit->DispatchAsync([unit] {
                unit->Execute();
            });

        // Syncronously update the best data for all the units.
        for (FireStarterUnit* unit : m_units) {
            unit->DispatchSync([this, unit] {
                FireStarterState* unitBestEvaluateState = nullptr;
                unsigned int* unitGeneration = nullptr;
                unit->UpdateProgram(unitBestEvaluateState, unitGeneration);
                float result = unitBestEvaluateState->m_result.maxResult;
                if (result < m_bestResult) {
                    unit->UpdateCode(m_bestCode);
                    m_bestResult = result;
                    m_bestEvaluateState = *unitBestEvaluateState;
                    m_bestGeneration = m_generation;
                    m_controlUpdate = true;
                }
            });
        }
        m_controlTime = m_controlTimer.Duration();
        m_generation++;

        // Update the best code on disk and compile a new FireShow.
        if (m_controlUpdate && !m_quitControlThread)
            switch (m_evolveMode) {
                case FIRESTARTER_EVOLVE:
                    SaveBestState();
                    break;
                case FIRESTARTER_UNITS:
                    SaveBestState();
                    SaveBestCode();
                    SaveSolution();
                    break;
                case FIRESTARTER_OPTIMIZE:
                    SaveBestState();
                    SaveBestCode();
                    SaveSolution();
                    break;
            }

        // Update the render status after every pass.
        if (!m_quitControlThread) {
            RenderStatus();
            GetMainThread()->DispatchAsync([this] { SetWindowText((HWND)m_window, m_statusString); });
        }

        // Render the buffer if the best data was updated and the previous buffer was displayed.
        if (m_fireShowModule && !m_bufferUpdate && !m_quitControlThread) {
            // Erase the frame buffer
            m_buffer.Erase();

            // Draw the graphs for both variations.
            FireShow();
            m_controlUpdate = false;
            const unsigned char* bufferPixels = (m_evolveMode == FIRESTARTER_SOLUTION) ? m_buffer.GetHost() : m_buffer.GetDevice();
            GetMainThread()->DispatchAsync([this, bufferPixels] {
                RenderImage(m_buffer.m_width, m_buffer.m_height, bufferPixels);
                m_bufferUpdate = false;
            });
        }
    }

    // Finish processing and terminate each unit.
    for (FireStarterUnit* unit : m_units) {
        unit->m_quit = true;    // This allows the program loop to exit faster.
        unit->DispatchAsync([unit] { unit->FinishUnit(); });
    }
    for (FireStarterUnit* unit : m_units)
        delete unit;
    m_units.clear();

    // Free the frame buffer memory.
    m_buffer.Resize(0, 0);

    // Unload the fire show code and destroy the CUDA context.
    if (m_fireShowModule) {
        checkCUDAErrors(cuModuleUnload(m_fireShowModule));
        m_fireShowModule = nullptr;
    }
    m_fireShowFunction = nullptr;
    if (m_fireShowStream) {
        checkCUDAErrors(cudaStreamDestroy(m_fireShowStream));
        m_fireShowStream = nullptr;
    }
    if (m_fireShowContext) {
        checkCUDAErrors(cuCtxDestroy(m_fireShowContext));
        m_fireShowContext = nullptr;
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
        float solution = Solution(theta, variation);
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
    if (m_evolveMode == FIRESTARTER_SOLUTION) {
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

FireStarter::FireStarter(void)
{
    m_server.AddProcess();

    m_fireShowContext = nullptr;
    m_fireShowModule = nullptr;
    m_fireShowFunction = nullptr;
    m_statusString[0] = 0;
    m_generation = 0;
    m_bestGeneration = 0;
    m_bestResult = START_RESULT;
    m_worstResult = START_RESULT;
    m_controlTime = 0.0;
    m_seed = RANDOMHASH(123);
    m_controlUpdate = false;
    m_bufferUpdate = false;
    m_evolveMode = FIRESTARTER_MODE;
    m_quitControlThread = false;
} // FireStarter

FireStarter::~FireStarter(void)
{
} // ~FireStarter