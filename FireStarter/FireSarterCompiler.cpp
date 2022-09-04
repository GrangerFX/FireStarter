#include "FireStarterCompiler.h"
#include "CUDACompile.h"

#define COMPILE_INIT    "CompileInit"
#define COMPILE_EXECUTE "CompileExecute"

void FireStarterCompiler::Client(void)
{
    if (!m_process->ShouldTerminate())
        DispatchAsync([this] {
            FireStarterPacket receivePacket;
            m_process->ReceivePacket(receivePacket);
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
                    m_process->SendPacket(sendPacket);
                } else
                    // Error: Failed to read the command!
                    m_process->Terminate();
            } else
                // Error: Unknown command!
                m_process->Terminate();
            DispatchAsync([this] { Client(); });
    });
} // Client

FireStarterCompiler::FireStarterCompiler(FireStarterProcess* process)   // Client
{
    m_gpus = 1;
    m_process = process;
    m_server = m_process && !m_process->IsClient();
} // FireStarterCompiler

FireStarterCompiler::FireStarterCompilerJob* FireStarterCompiler::GetCompileJob(void)
{
    FireStarterCompilerJob* job = nullptr;
    m_jobThread.DispatchSync([this, &job] {
        if (m_firstCompile) {
            job = m_firstCompile;
            m_firstCompile = m_firstCompile->next;
            if (!m_firstCompile)
                m_lastCompile = nullptr;
            job->next = nullptr;
        }
    });
    return job;
} // GetCompileJob

void FireStarterCompiler::CompleteCompileJob(FireStarterCompilerJob* job)
{
    m_jobThread.DispatchAsync([this, job] {
        job->next = nullptr;
        if (m_lastCompile) {
            m_lastCompile->next = job;
            m_lastCompile = job;
        } else {
            m_firstCompile = job;
            m_lastCompile = job;
        }
    });
} // CompleteCompileJob

void FireStarterCompiler::AddCompile(FireStarterCompilerJob* job)
{
    m_jobThread.DispatchAsync([this, job] {
        job->next = nullptr;
        if (m_lastJob) {
            m_lastJob->next = job;
            m_lastJob = job;
        } else {
            m_firstJob = job;
            m_lastJob = job;
        }
    });
} // AddCompile

FireStarterCompiler::FireStarterCompilerJob* FireStarterCompiler::GetCompile(void)
{
    FireStarterCompilerJob* job = nullptr;
    m_jobThread.DispatchSync([this, &job] {
        if (m_firstCompile) {
            job = m_firstCompile;
            m_firstCompile = m_firstCompile->next;
            if (!m_firstCompile)
                m_lastCompile = nullptr;
            job->next = nullptr;
        }
    });
    return job;
} // GetCompile

FireStarterCompiler::FireStarterCompiler(unsigned int gpus) // Server
{
    m_gpus = gpus;
} // FireStarterCompiler

FireStarterCompiler::~FireStarterCompiler(void)
{
    DispatchSync([this] {
        if (m_process)
            m_process->Stop();
    });
} // ~FireStarterCompiler
