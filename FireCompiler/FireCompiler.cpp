#include "FireCompiler.h"
#include "CUDACompile.h"

#define COMPILE_INIT    "CompileInit"
#define COMPILE_EXECUTE "CompileExecute"

void FireCompiler::Terminate(void)
{
	m_terminate = true;
} // Terminate

bool FireCompiler::ShouldTerminate(void)
{
	return m_terminate;
} // ShouldTerminate

FireCompiler::FireCompiler(const std::string& pipeName)
{
	m_process = new FireStarterProcess(pipeName, &m_terminate);
	m_compiler = new FireStarterCompiler(m_process);
} // FireCompiler

FireCompiler::~FireCompiler(void)
{
	Terminate();
	delete m_compiler;
	delete m_process;
} // ~FireCompiler
