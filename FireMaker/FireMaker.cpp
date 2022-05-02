#include "FireMaker.h"
#include "CUDACompile.h"

void FireMaker::Terminate(void)
{
	DispatchAsync([this] {
		if (m_process)
			m_process->Terminate();
		else
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
		m_process = new FireStarterProcess(pipeName, &m_terminate);
		m_process->Start();
		m_unit = new FireStarterUnit(m_process);
		while (!m_terminate)
			m_unit->ClientCommand();
		delete m_unit;
		delete m_process;
		m_unit = nullptr;
		m_process = nullptr;
	});
} // FireMaker

FireMaker::~FireMaker(void)
{
} // ~FireMaker
