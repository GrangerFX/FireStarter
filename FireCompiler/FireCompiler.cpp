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

FireCompiler::FireCompiler(const std::string& pipeName) : m_process(pipeName, &m_terminate), m_compiler(&m_process)
{
} // FireCompiler

FireCompiler::~FireCompiler(void)
{
} // ~FireCompiler
