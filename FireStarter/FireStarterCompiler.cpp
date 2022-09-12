#include "FireStarterCompiler.h"
#include "CUDACompile.h"

#define COMPILE_INIT    "CompileInit"
#define COMPILE_EXECUTE "CompileExecute"

void FireStarterJobQueue::Add(FireStarterCompilerJob* job)
{
    DispatchAsync([this, job] {
        job->m_next = nullptr;
        if (m_lastJob)
            m_lastJob->m_next = job;
        else
            m_firstJob = job;
        m_lastJob = job;
        m_semaphore.notify();
    });
} // Add

FireStarterCompilerJob* FireStarterJobQueue::Get(void)
{
    FireStarterCompilerJob* job = nullptr;
    m_semaphore.wait();
    DispatchSync([this, &job] {
        if (m_firstJob) {
            job = m_firstJob;
            m_firstJob = m_firstJob->m_next;
            if (!m_firstJob)
                m_lastJob = nullptr;
            job->m_next = nullptr;
        }
    });
    return job;
} // Get

void FireStarterJobQueue::Cancel(void)
{
    // Terminate the thread.
    if (IsRunning())
        TerminateThread();

    // Delete all the jobs in the queue.
    while (m_firstJob) {
        FireStarterCompilerJob* job = m_firstJob;
        m_firstJob = m_firstJob->m_next;
        delete job;
    }
    m_lastJob = nullptr;

    // Release any waiting threads.
    m_semaphore.terminate();
} // Cancel

FireStarterJobQueue::FireStarterJobQueue(void)
{
}
FireStarterJobQueue::~FireStarterJobQueue(void)
{
    Cancel();
} // ~FireStarterJobQueue

void FireStarterCompilerManager::AddFree(FireStarterCompilerJob* job)
{
    if (job)
        *job = FireStarterCompilerJob();
    else
        job = new FireStarterCompilerJob();
    m_freeQueue.Add(job);
} // AddFree

FireStarterCompilerJob* FireStarterCompilerManager::GetFree(void)
{
    return m_freeQueue.Get();
} // GetFree

void FireStarterCompilerManager::AddCode(FireStarterCompilerJob* job)
{
    m_codeQueue.Add(job);
} // AddCode

FireStarterCompilerJob* FireStarterCompilerManager::GetCode(void)
{
    return m_codeQueue.Get();
} // GetCode

void FireStarterCompilerManager::AddCompile(FireStarterCompilerJob* job)
{
    m_compileQueue.Add(job);
} // AddCompile

FireStarterCompilerJob* FireStarterCompilerManager::GetCompile(void)
{
    return m_compileQueue.Get();
} // GetCompile

void FireStarterCompilerManager::AddComplete(FireStarterCompilerJob* job)
{
    m_completeQueue.Add(job);
} // AddComplete

FireStarterCompilerJob* FireStarterCompilerManager::GetComplete(void)
{
    return m_completeQueue.Get();
} // GetComplete

void FireStarterCompilerManager::Cancel(void)
{
    m_freeQueue.Cancel();
    m_codeQueue.Cancel();
    m_compileQueue.Cancel();
    m_completeQueue.Cancel();
} // ClearJobs

FireStarterCompilerManager::FireStarterCompilerManager(size_t maxJobs)
{
    m_maxJobs = maxJobs;
    for (size_t i = 0; i < m_maxJobs; i++)
        AddFree();
} // FireStarterCompilerManager

FireStarterCompilerManager::~FireStarterCompilerManager(void)
{
    Cancel();
} // ~FireStarterCompilerManager

void FireStarterCompiler::CompilerServer(void)
{
    if (!m_process->ShouldTerminate()) {
        FireStarterCompilerJob* job = m_compilerManager->GetCode();
        if (job) {
            printf("Server Code:%d\n", job->m_state.m_generation);
            FireStarterPacket sendPacket(COMPILE_EXECUTE);
            bool result = true;
            result = result && sendPacket.Packetize(job->m_state.m_generation);
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
            if (!m_process->ShouldTerminate())
                DispatchAsync([this] { CompilerServer(); });
        }
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
                unsigned int generation;
                result = result && receivePacket.Packetize(generation);
                std::string program;
                result = result && receivePacket.Packetize(program);
                std::string programName;
                result = result && receivePacket.Packetize(programName);
                std::vector<std::string> options;
                result = result && receivePacket.Packetize(options);

                if (result) {
                    printf("Client %llu: Compile:%d\n", m_process->ProcessIndex(), generation);

                    std::string ptx, log;
                    bool result = CUDACompile::Compile(ptx, log, program, programName, options);
                    if (log.size())
                        printf("Client %llu: Log:%s\n\n", m_process->ProcessIndex(), log.c_str());

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
