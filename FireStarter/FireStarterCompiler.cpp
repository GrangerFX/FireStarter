#include "FireStarterCompiler.h"
#include "CUDACompile.h"

#define COMPILE_INIT    "CompileInit"
#define COMPILE_EXECUTE "CompileExecute"

void FireStarterCompilerManager::AddCompile(FireStarterCompilerJob* job)
{
    DispatchAsync([this, job] {
        job->m_next = nullptr;
        if (m_lastCompile) {
            m_lastCompile->m_next = job;
            m_lastCompile = job;
        }
        else {
            m_firstCompile = job;
            m_lastCompile = job;
        }
        });
} // AddCompile

FireStarterCompilerJob* FireStarterCompilerManager::GetCompile(void)
{
    FireStarterCompilerJob* job = nullptr;
    DispatchSync([this, &job] {
        if (m_firstCompile) {
            job = m_firstCompile;
            m_firstCompile = m_firstCompile->m_next;
            if (!m_firstCompile)
                m_lastCompile = nullptr;
            job->m_next = nullptr;
        }
    });
    return job;
} // GetCompile

void FireStarterCompilerManager::AddCode(FireStarterCompilerJob* job)
{
    DispatchAsync([this, job] {
        job->m_next = nullptr;
        if (m_lastCode) {
            m_lastCode->m_next = job;
            m_lastCode = job;
        } else {
            m_firstCode = job;
            m_lastCode = job;
        }
    });
} // AddCode

FireStarterCompilerJob* FireStarterCompilerManager::GetCode(void)
{
    FireStarterCompilerJob* job = nullptr;
    DispatchSync([this, &job] {
        if (m_firstCode) {
            job = m_firstCode;
            m_firstCompile = m_firstCode->m_next;
            if (!m_firstCode)
                m_lastCode = nullptr;
            job->m_next = nullptr;
        }
    });
    return job;
} // GetCode

FireStarterCompilerManager::FireStarterCompilerManager(void)
{
} // FireStarterCompilerManager

FireStarterCompilerManager::~FireStarterCompilerManager(void)
{
    DispatchSync([this] {
        while (m_firstCompile) {
            FireStarterCompilerJob* job = m_firstCompile;
            m_firstCompile = m_firstCompile->m_next;
            delete job;
        }
        while (m_firstCode) {
            FireStarterCompilerJob* job = m_firstCode;
            m_firstCode = m_firstCode->m_next;
            delete job;
        }
    });
} // ~FireStarterCompilerManager

void FireStarterCompiler::CompilerServer(void)
{
    if (!m_process->ShouldTerminate()) {
        FireStarterCompilerJob* job = m_compilerManager->GetCode();
        if (job) {
            FireStarterPacket sendPacket(COMPILE_EXECUTE);
            bool result = true;
            result = result && sendPacket.Packetize(job->m_program);
            result = result && sendPacket.Packetize(job->m_programName);
            result = result && sendPacket.Packetize(job->m_options);
            result = result && m_process->SendPacket(sendPacket);
            if (result) {
                FireStarterPacket receivePacket;
                result = result && m_process->ReceivePacket(receivePacket);
                const std::string& command = receivePacket.Command();
                if (result && (command == COMPILE_EXECUTE)) {
                    result = result && receivePacket.Packetize(job->m_ptx);
                    result = result && receivePacket.Packetize(job->m_log);
                    m_compilerManager->AddCompile(job);
                }
            }
        } else
            SleepFor(0.1);  // Note: TODO: Make the thread wait for the next available job.
        if (!m_process->ShouldTerminate())
            DispatchAsync([this] { CompilerServer(); });
    };
} // Server

void FireStarterCompiler::CompilerClient(void)
{
    if (!m_process->ShouldTerminate()) {
        FireStarterPacket receivePacket;
        bool result = m_process->ReceivePacket(receivePacket);
        const std::string& command = receivePacket.Command();
        if (result) {
            if (result && (command == COMPILE_EXECUTE)) {
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
                    result = result && sendPacket.Packetize(ptx);
                    result = result && sendPacket.Packetize(log);
                    result = result && m_process->SendPacket(sendPacket);
                }
           } else
                // Error: Unknown command!
                result = false;

            // Error: Terminate the process on failure.
            if (!result)
                m_process->Terminate();
        }
        if (!m_process->ShouldTerminate())
            DispatchAsync([this] { CompilerClient(); });
    };
} // Client

FireStarterCompiler::FireStarterCompiler(FireStarterProcess* process, FireStarterCompilerManager* manager)
{
    m_process = process;
    m_compilerManager = manager;
    m_server = m_process && !m_process->IsClient();
    DispatchAsync([this] {
        if (m_process->Start()) {
            if (m_server)
                CompilerServer();
            else
                CompilerClient();
        }
    });
} // FireStarterCompiler

FireStarterCompiler::~FireStarterCompiler(void)
{
    if (m_process)
        DispatchSync([this] { m_process->Stop(); });
} // ~FireStarterCompiler
