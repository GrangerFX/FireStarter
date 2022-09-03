#include "CUDACompile.h"
#include "CUDAErrors.h"
#include "FireStarterUtil.h"
#include <vector>

#define COMPILE_TIME 0

void CUDACompile::StandardOptions(std::vector<std::string>& options)
{
    options.push_back(Format("-arch=compute_75"));
    options.push_back("-default-device");   // Allows use of inline functions without specifying them as __device__
//  options.push_back("-G");                // Generate debug info
//  options.push_back("-lineinfo");         // Generate line information
} // StandardOptions

bool CUDACompile::Compile(std::string& ptx, std::string& log, const std::string& program, const std::string& programName, const std::vector<std::string>& options)
{
    // Compile CUDA program (from compileFileToPTX() in nvrtc_helper.h)
    nvrtcProgram prog;
    const char* code = program.c_str();
    if (!logNVRTCErrors(log, nvrtcCreateProgram(&prog, code, programName.c_str(), 0, nullptr, nullptr)))
        return false;

    std::vector<const char*> compileOptions;
    for (const std::string& string : options)
        compileOptions.push_back(string.c_str());

    nvrtcResult result = nvrtcCompileProgram(prog, (int)compileOptions.size(), compileOptions.data());
    if (result) {
        logNVRTCErrors(log, result);

        // Output the compile log.
        size_t compileLogSize;
        logNVRTCErrors(log, nvrtcGetProgramLogSize(prog, &compileLogSize));
        if (compileLogSize) {
            std::string compileLog;
            compileLog.resize(compileLogSize);
            logNVRTCErrors(log, nvrtcGetProgramLog(prog, compileLog.data()));
            log += compileLog;
        }
        return false;
    }

    // Fetch PTX
    size_t ptxSize;
    checkNVRTCErrors(nvrtcGetPTXSize(prog, &ptxSize));
    ptx.resize(ptxSize);
    checkNVRTCErrors(nvrtcGetPTX(prog, ptx.data()));
    checkNVRTCErrors(nvrtcDestroyProgram(&prog));
    return ptxSize > 0;
} // Compile

bool CUDACompile::CompileProgram(CUmodule& cuda_module, const std::string& program, const std::string& programName)
{
#if COMPILE_TIME
    SimpleTimer compileTimer;
#endif

    std::vector<std::string> options;
    CUdevice device = 0;
    checkCUDAErrors(cuCtxGetDevice(&device));

    // Use the current device's compute architecture
    int computeCapabilityMajor = 0;
    int computeCapabilityMinor = 0;
    checkCUDAErrors(cuDeviceGetAttribute(&computeCapabilityMajor, CU_DEVICE_ATTRIBUTE_COMPUTE_CAPABILITY_MAJOR, device));
    checkCUDAErrors(cuDeviceGetAttribute(&computeCapabilityMinor, CU_DEVICE_ATTRIBUTE_COMPUTE_CAPABILITY_MINOR, device));
    options.push_back(Format("-arch=compute_%d%d", computeCapabilityMajor, computeCapabilityMinor));
    options.push_back("-default-device");   // Allows use of inline functions without specifying them as __device__
//  options.push_back("-G");                // Generate debug info
//  options.push_back("-lineinfo");         // Generate line information

    std::string ptx, log;
    if (!Compile(ptx, log, program, programName, options)) {
        printf("compilation log ---\n%s\nend log---\n", log);
        std::terminate();
        return false;
    }

    // Create the code module.
    if (cuda_module) {
        checkCUDAErrors(cuModuleUnload(cuda_module));
        cuda_module = nullptr;
    }
    checkCUDAErrors(cuModuleLoadDataEx(&cuda_module, ptx.c_str(), 0, 0, 0));

    // Optionaly output the compile time.
#if COMPILE_TIME
    printf("%s compile time = %f\n", programName.c_str(), compileTimer.Duration());
#endif

    // Note: Currently the program is forced to terminate if there were any compile errors.
    return true; 
} // CompileProgram

CUfunction CUDACompile::GetFunction(CUmodule& cuda_module, const std::string& functionName)
{
    CUfunction function = nullptr;
    checkCUDAErrors(cuModuleGetFunction(&function, cuda_module, functionName.c_str()));
    return function;
} // GetFunction

