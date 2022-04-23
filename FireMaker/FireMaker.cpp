#include "FireMaker.h"
#include "CUDACompile.h"

void FireMaker::CompileInit(void)
{
    m_context = new CUDAContext();
} // CompileInit

void FireMaker::CompileQuit(void)
{
    delete m_context;
} // CompileQuit

void FireMaker::CompileCode(const std::string &code, std::string &ptx)
{
    // Compile fireShow.
    CUDACompile::CompilePTX(ptx, code);
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

FireMaker::FireMaker(const std::string& pipeName, bool* terminate) : m_process(pipeName, terminate)
{
} // FireMaker

FireMaker::~FireMaker(void)
{
} // ~FireMaker
