#include "FireStarter.h"
#include "FireStarterUtil.h"
#include "FireStarter_LoadState.h"
#include "CUDACompile.h"
#include <iomanip>
#include <fstream>
#include <sstream>

bool FireStarter::LoadCode(const std::string& filePath, std::string& code)
{
    std::ifstream file(filePath.c_str(), std::ios::ate | std::ios::binary);
    if (file.is_open()) {
        // Found usable source file
        file.seekg(0, std::ios::end);
        code.reserve(code.length() + file.tellg());
        file.seekg(0, std::ios::beg);
        code.append((std::istreambuf_iterator< char >(file)), std::istreambuf_iterator< char >());
        file.close();
        return true;
    }
    return false;
} // LoadCode

void FireStarter::SaveCode(const std::string& filePath, const std::string& code)
{
    std::ofstream file(filePath.c_str(), std::ios::out | std::ios::binary);
    if (file.is_open()) {
        file << code;
        file.close();
    }
} // SaveCode

void FireStarter::ReplaceCode(std::string& code, const std::string& search, const std::string& replace)
{
    // Get the first occurrence
    size_t pos = code.find(search);

    // Repeat till end is reached
    while (pos != std::string::npos) {
        // Replace this occurrence of Sub String
        code.replace(pos, search.length(), replace);
        // Get the next occurrence from the current position
        pos = code.find(search, pos + replace.length());
    }
} // ReplaceCode

bool FireStarter::FindCode(const std::string& code, const std::string startString, size_t &start, size_t &length)
{
    size_t startPos = code.find(startString);
    if (startPos == std::string::npos)
        return false;
    size_t startStringLength = startString.length();
    if (code[startPos + startStringLength] == '\r')
        startStringLength++;
    if (code[startPos + startStringLength] == '\n')
        startStringLength++;
    size_t endPos = code.find(END_CODE, startPos);
    if (endPos != std::string::npos)
        startPos += startStringLength;
    else
        endPos = startPos + startStringLength;
    start = startPos;
    length = endPos - startPos;
    return true;
} // FindCode

void FireStarter::ExtractProgram(const std::string& code, std::string& extractCode, const std::string &startString)
{
    size_t startPos = code.find(startString);
    if (startPos != std::string::npos) {
        size_t startStringLength = startString.length();
        if (code[startPos + startStringLength] == '\r')
            startStringLength++;
        if (code[startPos + startStringLength] == '\n')
            startStringLength++;
        size_t endPos = code.find(END_CODE, startPos);
        if (endPos != std::string::npos)
            startPos += startStringLength;
        else
            endPos = startPos + startStringLength;
        extractCode = code.substr(startPos, endPos - startPos);
    }
} // ExtractProgram

void FireStarter::UpdateProgram(std::string& code, const std::string& replacementCode, const std::string &startString)
{
    size_t startPos = code.find(startString);
    if (startPos != std::string::npos) {
        size_t startStringLength = startString.length();
        if (code[startPos + startStringLength] == '\r')
            startStringLength++;
        if (code[startPos + startStringLength] == '\n')
            startStringLength++;
        size_t endPos = code.find(END_CODE, startPos);
        if (endPos != std::string::npos)
            startPos += startStringLength;
        else
            endPos = startPos + startStringLength;
        code.replace(startPos, endPos - startPos, replacementCode);
    }
} // UpdateProgram

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
    if (!FireStarter::LoadCode("FireStarterTarget.h", m_solutionTargetCode))
        return false;
    ReplaceCode(m_solutionTargetCode, "Target", "SolutionTarget");
    return true;
} // LoadTargetCode

bool FireStarter::LoadFireStarterCode(void)
{
    if (!FireStarter::LoadCode("Evolve.cu", m_evolveCode))
        return false;
    if (!FireStarter::LoadCode("Optimize.cu", m_optimizeCode))
        return false;
    return true;
} // LoadFireStarterCode

bool FireStarter::LoadFireShowCode(void)
{
    if (!LoadCode("FireShow.cu", m_fireShowCode))
        return false;
    return true;
} // LoadFireShowCode

void FireStarter::SaveBestState(void)
{
    std::string bestStateCode;
    m_bestEvaluateState.SaveState(bestStateCode);
    FireStarter::SaveCode("FireStarter_LoadState.h", bestStateCode);
} // SaveBestState

void FireStarter::SaveBestCode(void)
{
    FireStarter::SaveCode("FireStarter_BestCode.h", m_bestCode);
} // SaveBestCode

void FireStarter::SaveSolution(void)
{
    time_t currentTime = time(nullptr);
    tm localTime;
    std::stringstream sstream;
    localtime_s(&localTime, &currentTime);
    sstream << std::put_time(&localTime, "%c %Z");

    std::string solutionCode;
    solutionCode += "#pragma once\r\n";
    solutionCode += "#include <math.h>\r\n";
    solutionCode += "\r\n";
    solutionCode += Format("// Run date: %s\r\n", sstream.str().c_str());
    solutionCode += Format("// Run duration = %f seconds\r\n", m_controlTime);
    solutionCode += Format("// Run count = %d\r\n", m_generation);
    solutionCode += Format("// Run units = %d\r\n", (unsigned int)m_units.size());
    solutionCode += Format("// Run population = %d\r\n", PROGRAM_POPULATION);
    solutionCode += Format("// Run iterations = %d\r\n", PROGRAM_ITERATIONS);
    solutionCode += Format("// Run generations = %d\r\n", PROGRAM_GENERATIONS);
    solutionCode += Format("// Run samples = %d\r\n", SAMPLE_ITERATIONS);
    solutionCode += "\r\n";
    solutionCode += Format("#define SOLUTION_MIN %f\r\n", SAMPLE_MIN);
    solutionCode += Format("#define SOLUTION_MAX %f\r\n", SAMPLE_MAX);
    solutionCode += "\r\n";
    solutionCode += Format("#define SOLUTION_VARIATIONS %d\r\n", PROGRAM_VARIATIONS);
    solutionCode += "\r\n";
    solutionCode += m_solutionTargetCode;
    solutionCode += "\r\n";
    m_bestEvaluateState.SaveSolution(solutionCode);
    FireStarter::SaveCode("FireStarter_Solution.h", solutionCode);
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
        FireStarterUnit* unit = new FireStarterUnit(this, i, m_device);
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
    } else if (LoadTargetCode() && LoadFireStarterCode() && LoadFireShowCode()) {
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