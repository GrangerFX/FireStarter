#include "FireMaker.h"
#include "CUDACompile.h"
#include "CudaErrors.h"

void FireMaker::CompileInit(void)
{
    checkCUDAErrors(cuInit(0));
    checkCUDAErrors(cuDeviceGet(&m_device, 0)); // Use the first CUDA device for now.
    checkCUDAErrors(cuCtxCreate(&m_compileContext, CU_CTX_SCHED_AUTO, m_device));
    checkCUDAErrors(cudaStreamCreate(&m_compileStream));
} // CompileInit

void FireMaker::CompileQuit(void)
{
    checkCUDAErrors(cudaStreamDestroy(m_compileStream));
    checkCUDAErrors(cuCtxDestroy(m_compileContext));
} // CompileQuit

void FireMaker::CompileCode(const std::string &code, std::string &ptx)
{
    // Compile fireShow.
    CUDACompile::CompilePTX(code, ptx);
} // CompileThread

bool FireMaker::Init()
{
	DispatchAsync([this] { CompileInit(); });   // Initialize CUDA for the compile thread.
	return true;
} // Init

void FireMaker::Quit(void)
{
    DispatchSync([this] { CompileQuit(); });    // This will wait for CompileQuit() to finish.
} // Quit

FireMaker::FireMaker(const std::string& pipeName)
{
    m_pipeName = pipeName;
} // FireMaker

FireMaker::~FireMaker(void)
{

} // ~FireMaker
