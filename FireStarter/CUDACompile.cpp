#include "CUDACompile.h"
#include "CUDAErrors.h"
#include "FireStarterUtil.h"
#include <vector>

#define COMPILE_TIME 0

bool CUDACompile::CompileProgram(CUmodule& cuda_module, const std::string& program, const std::string& programName)
{
#if COMPILE_TIME
    SimpleTimer compileTimer;
#endif
     // Compile CUDA program (from compileFileToPTX() in nvrtc_helper.h)
    nvrtcProgram prog;
    const char* code = program.c_str();
    checkNVRTCErrors(nvrtcCreateProgram(&prog, code, programName.c_str(), 0, nullptr, nullptr));

    std::vector<const char*> options;
    options.push_back("-default-device");   // Allows use of inline functions without specifying them as __device__
 //   options.push_back("-G");              // Generate debug info
 //   options.push_back("-lineinfo");       // Generate line information

    static std::string computeDevice;
    if (!computeDevice.length()) {
        int computeCapabilityMajor = 0;
        int computeCapabilityMinor = 0;
        CUdevice device = 0;
        checkCUDAErrors(cuDeviceGet(&device, 0)); // Use the first CUDA device for now.
        checkCUDAErrors(cuDeviceGetAttribute(&computeCapabilityMajor, CU_DEVICE_ATTRIBUTE_COMPUTE_CAPABILITY_MAJOR, device));
        checkCUDAErrors(cuDeviceGetAttribute(&computeCapabilityMinor, CU_DEVICE_ATTRIBUTE_COMPUTE_CAPABILITY_MINOR, device));
        computeDevice = Format("-arch=compute_%d%d", computeCapabilityMajor, computeCapabilityMinor);
    }
    options.push_back(computeDevice.c_str());

    nvrtcResult res = nvrtcCompileProgram(prog, (int)options.size(), options.data());
    if (res != 0) {
        // Output the compile log.
        size_t logSize;
        checkNVRTCErrors(nvrtcGetProgramLogSize(prog, &logSize));
        if (logSize) {
            char* log = reinterpret_cast<char*>(malloc(logSize + 1));
            checkNVRTCErrors(nvrtcGetProgramLog(prog, log));
            log[logSize] = '\x0';
            printf("compilation log ---\n%s\nend log---\n", log);
            free(log);
        }
        checkNVRTCErrors(res);
    }

    // Fetch PTX
    std::string ptx;
    size_t ptxSize;
    checkNVRTCErrors(nvrtcGetPTXSize(prog, &ptxSize));
    ptx.resize(ptxSize);
    checkNVRTCErrors(nvrtcGetPTX(prog, ptx.data()));
    checkNVRTCErrors(nvrtcDestroyProgram(&prog));

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