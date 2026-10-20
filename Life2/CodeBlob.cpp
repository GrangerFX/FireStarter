#include "CodeBlob.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>
#include <vector>

// CUDA runtime
// CUDA utilities and system includes
#include <cuda.h>
#include <cuda_runtime.h>
#include <nvrtc.h>
#include <iostream>

#define NVRTC_SAFE_CALL(Name, x) __nvrtcSafeCall(Name, x, __FILE__, __LINE__)
inline void __nvrtcSafeCall(const char *Name, nvrtcResult result, const char *file, const int line)
{
	if (result != NVRTC_SUCCESS) {
		const char *errorStr = nvrtcGetErrorString(result);
		fprintf(stderr, "NVRTC_SAFE_CALL() NVRTC API error = %04d \"%s\" from file <%s>, line %i.\n", result, errorStr, file, line);
		exit(EXIT_FAILURE);
	}
}

void CodeBlob::Clear(void)
{
	m_code.clear();
	m_ptx.clear();
	if (m_module) {
		checkCudaErrors(cuModuleUnload(m_module));
		m_module = nullptr;
	}
	m_options.clear();
} // Clear

void CodeBlob::StandardOptions(void)
{
    m_options.clear();
    
    char cudaPath[256];
	GetEnvironmentVariable("CUDA_PATH", cudaPath, sizeof(cudaPath));
	strcat_s(cudaPath, "\\include");
	IncludeDir(cudaPath);

    // Use the primary GPU's compute architecture
    CUdevice device = 0;
    checkCUDAErrors(cuCtxGetDevice(&device));
    int computeCapabilityMajor = 0;
    int computeCapabilityMinor = 0;
    checkCUDAErrors(cuDeviceGetAttribute(&computeCapabilityMajor, CU_DEVICE_ATTRIBUTE_COMPUTE_CAPABILITY_MAJOR, device));
    checkCUDAErrors(cuDeviceGetAttribute(&computeCapabilityMinor, CU_DEVICE_ATTRIBUTE_COMPUTE_CAPABILITY_MINOR, device));
    m_options.push_back("-arch=compute_" + std::to_string(computeCapabilityMajor) + std::to_string(computeCapabilityMinor));
    m_options.push_back("-default-device");   // Allows use of inline functions without specifying them as __device__

    // Note: For divisions and square roots, IEEE 754 mode has a 3x to 10x performance penalty compared to fast math mode.
    // However, fast math mode can produce incorrect results for some inputs.
    // For example, 1.0f / 0.0f produces NaN in fast math mode, but produces +Inf in IEEE 754 mode.
    // Therefore, IEEE 754 mode is used by default.
    // For mathematical simulations (like this code), IEEE 754 mode is preferred for accuracy, even if it is slower.
    // Currently division and square roots are not used in the generated code. However denormalized numbers may end up
    // being used by the optimized register values and help the evolution converge.
#if 1
    // IEEE 754 mode (default)
    m_options.push_back("-ftz=false");        // Flush denormalized numbers to zero
    m_options.push_back("-prec-div=true");    // Precise floating point
    m_options.push_back("-prec-sqrt=true");   // Precise square root
#else
    // Fast floating point
    m_options.push_back("-ftz=true");         // Flush denormalized numbers to zero
    m_options.push_back("-prec-div=false");   // Precise floating point
    m_options.push_back("-prec-sqrt=false");  // Precise square root
#endif
//  m_options.push_back("-G");                // Generate debug info
//  m_options.push_back("-lineinfo");         // Generate line information
} // StandardOptions

void CodeBlob::Add(void)
{
	m_code += "\n";
} // Add

void CodeBlob::Add(CodeBlob &codeBlob)
{
	m_code += codeBlob.m_code;
} // Add

void CodeBlob::Add(const std::string format, ...)
{
	const char * const zcFormat = format.c_str();

	// initialize use of the variable argument array
	va_list vaArgs;
	va_start(vaArgs, format);

	// reliably acquire the size from a copy of
	// the variable argument array
	// and a functionally reliable call
	// to mock the formatting
	va_list vaCopy;
	va_copy(vaCopy, vaArgs);
	const int iLen = std::vsnprintf(NULL, 0, zcFormat, vaCopy);
	va_end(vaCopy);

	// return a formatted string without
	// risking memory mismanagement
	// and without assuming any compiler
	// or platform specific behavior
	std::vector<char> zc(iLen + 1);
	std::vsnprintf(zc.data(), zc.size(), zcFormat, vaArgs);
	va_end(vaArgs);
	m_code += zc.data();
	m_code += "\n";
} // Add

void CodeBlob::Include(const std::string &path)
{
	Add("#include \"" + path + "\"");
} // Include

void CodeBlob::IncludeDir(const std::string &dir)
{
	m_options.push_back(std::string("-I") + dir);
} // IncludeDir

void CodeBlob::Option(const std::string &option)
{
	m_options.push_back(option);
} // Option

bool CodeBlob::Compile(void)
{
	if (m_module) {
		checkCudaErrors(cuModuleUnload(m_module));
		m_module = nullptr;
	}

	// Compile CUDA program (from compileFileToPTX() in nvrtc_helper.h)
	nvrtcProgram prog = nullptr;
	NVRTC_SAFE_CALL("nvrtcCreateProgram", nvrtcCreateProgram(&prog, m_code.c_str(), m_name.c_str(), 0, NULL, NULL));

	// JIT compile CU to PTX
	std::vector<const char *> options;
	for (const std::string& option : m_options)
		options.push_back(option.c_str());
	const nvrtcResult res = nvrtcCompileProgram(prog, (int)options.size(), options.data());
	if (res != 0) {
		// Output the compile log.
		size_t logSize;
		NVRTC_SAFE_CALL("nvrtcGetProgramLogSize", nvrtcGetProgramLogSize(prog, &logSize));
		char *log = reinterpret_cast<char *>(malloc(sizeof(char) * logSize + 1));
		NVRTC_SAFE_CALL("nvrtcGetProgramLog", nvrtcGetProgramLog(prog, log));
		log[logSize] = '\x0';
		if (strlen(log) >= 2) {
			std::cerr << "\n compilation log ---\n";
			std::cerr << log;
			std::cerr << "\n end log ---\n";
		}
		free(log);
		NVRTC_SAFE_CALL("nvrtcCompileProgram", res);
		return false;
	} else {
		// Fetch PTX
		if (prog) {
			size_t ptxSize;
			NVRTC_SAFE_CALL("nvrtcGetPTXSize", nvrtcGetPTXSize(prog, &ptxSize));
			if (!ptxSize)
				return false;
			m_ptx.resize(ptxSize);
			NVRTC_SAFE_CALL("nvrtcGetPTX", nvrtcGetPTX(prog, &m_ptx[0]));
			NVRTC_SAFE_CALL("nvrtcDestroyProgram", nvrtcDestroyProgram(&prog));
		} else
			return false;

		CUresult result = cuModuleLoadDataEx(&m_module, m_ptx.c_str(), 0, 0, 0);
		checkCudaErrors(result);
		return result == CUDA_SUCCESS;
	}
} // Compile

void CodeBlob::BlockSize(dim3 blockSize)
{
	m_blockSize = blockSize;
} // BlockSize

void CodeBlob::BlockSize(unsigned int x, unsigned int y, unsigned int z)
{
	m_blockSize.x = x;
	m_blockSize.y = y;
	m_blockSize.z = z;
} // BlockSize

void CodeBlob::GridSize(dim3 gridSize)
{
	m_gridSize = gridSize;
} // GridSize

void CodeBlob::GridSize(unsigned int x, unsigned int y, unsigned int z)
{
	m_gridSize.x = x;
	m_gridSize.y = y;
	m_gridSize.z = z;
} // GridSize

CUfunction CodeBlob::Function(const std::string function)
{
	CUfunction kernel_addr = nullptr;
	if (m_module)
		checkCudaErrors(cuModuleGetFunction(&kernel_addr, m_module, function.c_str()));
	return kernel_addr;
} // Function

bool CodeBlob::Launch(CUfunction function, void **arguments, bool syncronize)
{
	if (!function)
		return false;

	// Call the CUDA function.
	CUresult result = cuLaunchKernel(function,
		m_gridSize.x, m_gridSize.y, m_gridSize.z,		// grid dim */
		m_blockSize.x, m_blockSize.y, m_blockSize.z,	// block dim */
		0, 0,											// shared mem, stream */
		arguments,										// arguments */
		0);												// extra
	checkCudaErrors(result);

	// Wait for completion.
	if (syncronize && (result == CUDA_SUCCESS)) {
		result = cuCtxSynchronize();
		checkCudaErrors(result);
	}
	return result == CUDA_SUCCESS;
} // Launch(CUfunction)

bool CodeBlob::Launch(const std::string &function, void *a0, void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{
	std::vector<void*> arguments;
	arguments.push_back(a0);
	arguments.push_back(a1);
	arguments.push_back(a2);
	arguments.push_back(a3);
	arguments.push_back(a4);
	arguments.push_back(a5);
	arguments.push_back(a6);
	arguments.push_back(a7);
	arguments.push_back(a8);
	arguments.push_back(a9);
	return Launch(Function(function), arguments.data(), true);
} // Launch

bool CodeBlob::LaunchAsync(const std::string &function, void *a0, void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{
	std::vector<void*> arguments;
	arguments.push_back(a0);
	arguments.push_back(a1);
	arguments.push_back(a2);
	arguments.push_back(a3);
	arguments.push_back(a4);
	arguments.push_back(a5);
	arguments.push_back(a6);
	arguments.push_back(a7);
	arguments.push_back(a8);
	arguments.push_back(a9);
	return Launch(Function(function), arguments.data(), false);
} // LaunchAsync

bool CodeBlob::DrawFrame(GLDisplay &gl_display, unsigned int width, unsigned int height, char *status, size_t statusSize)
{
	return false;
} // DrawFrame

CodeBlob::CodeBlob(void) : m_name("Default"), m_module(nullptr)
{
} // CodeBlob

CodeBlob::~CodeBlob(void)
{
	if (m_module)
		checkCudaErrors(cuModuleUnload(m_module));
} // ~CodeBlob

