#include "FireStarterCompiler.h"
#include "CUDACompile.h"

#define COMPILE_INIT    "CompileInit"
#define COMPILE_EXECUTE "CompileExecute"

FireStarterCompilerJob* FireStarterCompiler::GetCompileJob(void)
{
    FireStarterCompilerJob* job = nullptr;
    m_jobThread.DispatchSync([this, &job] {
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

void FireStarterCompiler::CompleteCompileJob(FireStarterCompilerJob* job)
{
    m_jobThread.DispatchAsync([this, job] {
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

void FireStarterCompiler::AddCompile(FireStarterCompilerJob* job)
{
    m_jobThread.DispatchAsync([this, job] {
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

FireStarterCompilerJob* FireStarterCompiler::GetCompile(void)
{
    FireStarterCompilerJob* job = nullptr;
    m_jobThread.DispatchSync([this, &job] {
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

void FireStarterCompiler::Server(void)
{
    DispatchAsync([this] {
        FireStarterCompilerJob* job = GetCompileJob();
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
                    CompleteCompileJob(job);
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

FireStarterCompiler::FireStarterCompiler(unsigned int gpus) // Server
{
    m_gpus = gpus;
} // FireStarterCompiler

FireStarterCompiler::FireStarterCompiler(FireStarterProcess* process)   // Client
{
    m_gpus = 1;
    m_process = process;
    m_server = m_process && !m_process->IsClient();
} // FireStarterCompiler

FireStarterCompiler::~FireStarterCompiler(void)
{
    DispatchSync([this] {
        if (m_process)
            m_process->Stop();
    });
} // ~FireStarterCompiler
