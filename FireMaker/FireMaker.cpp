#include "FireMaker.h"
#include "CUDACompile.h"

void FireMaker::Terminate(void)
{
	m_terminate = true;
} // Terminate

bool FireMaker::ShouldTerminate(void)
{
	return m_terminate;
} // ShouldTerminate

FireMaker::FireMaker(const std::string& pipeName) : m_process(pipeName, &m_terminate), m_unit(&m_process)
{
	m_unit.Start();
	m_unit.Client();
} // FireMaker

FireMaker::~FireMaker(void)
{
	m_unit.Stop();
} // ~FireMaker
