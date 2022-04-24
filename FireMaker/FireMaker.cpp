#include "FireMaker.h"
#include "CUDACompile.h"

bool FireMaker::Init()
{
	DispatchAsync([this] { m_unit.InitUnit(FIRESTARTER_EVOLVE); });   // Initialize CUDA for the compile thread.
	return true;
} // Init

void FireMaker::Quit(void)
{
	DispatchSync([this] { m_unit.FinishUnit(); });    // This will wait for CompileQuit() to finish.
} // Quit

FireMaker::FireMaker(const std::string& pipeName, bool* terminate) : m_process(pipeName, terminate)
{
} // FireMaker

FireMaker::~FireMaker(void)
{
} // ~FireMaker
