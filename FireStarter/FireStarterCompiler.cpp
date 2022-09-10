#include "FireStarterCompiler.h"
#include "CUDACompile.h"

#define COMPILE_INIT    "CompileInit"
#define COMPILE_EXECUTE "CompileExecute"

FireStarterCompilerJob* FireStarterCompilerManager::GetCompileJob(void)
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
} // GetCompileJob

void FireStarterCompilerManager::CompleteCompileJob(FireStarterCompilerJob* job)
{
    DispatchAsync([this, job] {
        job->m_next = nullptr;
        if (m_lastCompile) {
            m_lastCompile->m_next = job;
            m_lastCompile = job;
        } else {
            m_firstCompile = job;
            m_lastCompile = job;
        }
    });
} // CompleteCompileJob

void FireStarterCompilerManager::AddCompile(FireStarterCompilerJob* job)
{
    DispatchAsync([this, job] {
        job->m_next = nullptr;
        if (m_lastJob) {
            m_lastJob->m_next = job;
            m_lastJob = job;
        } else {
            m_firstJob = job;
            m_lastJob = job;
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
        while (m_firstJob) {
            FireStarterCompilerJob* job = m_firstJob;
            m_firstJob = m_firstJob->m_next;
            delete job;
        }
    });
} // ~FireStarterCompilerManager

void FireStarterCompiler::Server(void)
{
    DispatchAsync([this] {
        FireStarterCompilerJob* job = m_compilerManager->GetCompileJob();
        if (job) {
            FireStarterPacket sendPacket;
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
                    m_compilerManager->CompleteCompileJob(job);
                }
            }
        }
        if (!m_process->ShouldTerminate())
            DispatchAsync([this] { Server(); });
    });
} // Server

void FireStarterCompiler::Client(void)
{
    if (!m_process->ShouldTerminate())
        DispatchAsync([this] {
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
            DispatchAsync([this] { Client(); });
    });
} // Client

FireStarterCompiler::FireStarterCompiler(FireStarterProcess* process, FireStarterCompilerManager* manager)
{
    m_process = process;
    m_compilerManager = manager;
    m_server = m_process && !m_process->IsClient();
    DispatchAsync([this] {
        m_process->Start();
    });
} // FireStarterCompiler

FireStarterCompiler::~FireStarterCompiler(void)
{
    if (m_process)
        DispatchSync([this] { m_process->Stop(); });
} // ~FireStarterCompiler
