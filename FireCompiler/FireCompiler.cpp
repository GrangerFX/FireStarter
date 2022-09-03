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

void FireCompiler::Client(void)
{
    if (!m_process.ShouldTerminate())
        DispatchAsync([this] {
            if (ShouldTerminate())
                m_process.Terminate();
            else {
                FireStarterPacket receivePacket;
                m_process.ReceivePacket(receivePacket);
                const std::string& command = receivePacket.Command();
                if (command == COMPILE_EXECUTE) {
                    bool result = true;
                    std::string program;
                    result = result && receivePacket.Packetize(program);
                    std::string programName;
                    result = result && receivePacket.Packetize(programName);
                    std::vector<std::string> options;
                    result = result && receivePacket.Packetize(options);

                    if (result) {
                        std::string ptx;
                        std::string log;
                        CUDACompile::Compile(ptx, log, program, programName, options);
                        FireStarterPacket sendPacket(COMPILE_EXECUTE);
                        sendPacket.Packetize(ptx);
                        sendPacket.Packetize(log);
                        m_process.SendPacket(sendPacket);
                    } else
                        // Error: Failed to read the command!
                        m_process.Terminate();
                } else
                    // Error: Unknown command!
                    m_process.Terminate();
                DispatchAsync([this] { Client(); });
            }
        });
} // FireCompiler

FireCompiler::FireCompiler(const std::string& pipeName) : m_process(pipeName, &m_terminate)
{
	DispatchAsync([this] { m_process.Start(); });
} // FireCompiler

FireCompiler::~FireCompiler(void)
{
} // ~FireCompiler
