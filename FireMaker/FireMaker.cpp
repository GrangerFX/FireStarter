#include "FireMaker.h"
#include "CUDACompile.h"

void FireMaker::Terminate(void)
{
	m_process.Terminate();
} // Terminate

bool FireMaker::ShouldTerminate(void)
{
	return m_process.ShouldTerminate();
} // ShouldTerminate

void FireMaker::WaitForCommand(void)
{
	if (m_process.WaitForData())
		DispatchAsync([this] {
			if (!m_process.ShouldTerminate())
				m_unit.ProcessCommand(); 
		});
} // WaitForCommand

FireMaker::FireMaker(const std::string& pipeName) : m_process(pipeName, &m_terminate), m_unit(&m_process)
{
	m_terminate = false;
} // FireMaker

FireMaker::~FireMaker(void)
{
	m_terminate = true;
} // ~FireMaker
