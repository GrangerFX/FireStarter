#include "FireMaker.h"
#include "CUDACompile.h"

bool FireMaker::Init()
{
	DispatchAsync([this] {
		m_unit = new FireStarterUnit();
		m_unit->InitUnit(FIRESTARTER_UNITS);
	});   // Initialize CUDA for the compile thread.
	return true;
} // Init

void FireMaker::Quit(void)
{
	DispatchSync([this] {
		if (m_unit) {
			delete m_unit;
			m_unit = nullptr;
		}
	});    // This will wait for CompileQuit() to finish.
} // Quit

FireMaker::FireMaker(const std::string& pipeName, bool* terminate) : m_process(pipeName, terminate)
{
} // FireMaker

FireMaker::~FireMaker(void)
{
} // ~FireMaker
