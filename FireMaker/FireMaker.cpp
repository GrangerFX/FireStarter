#include "FireMaker.h"
#include "CUDACompile.h"

void FireMaker::Terminate(void)
{
	DispatchAsync([this] {
		m_terminate = true;
	});
} // Terminate

bool FireMaker::ShouldTerminate(void)
{
	return m_terminate;
} // ShouldTerminate

FireMaker::FireMaker(const std::string& pipeName)
{
	DispatchAsync([this, pipeName] {
		FireStarterProcess process(pipeName, &m_terminate);
		process.Start();
		FireStarterUnit unit(&process);
		unit.Client();
	});
} // FireMaker

FireMaker::~FireMaker(void)
{
} // ~FireMaker
