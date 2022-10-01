#include "FireStarterCompiler.h"
#include "CUDACompile.h"

#define COMPILE_EXECUTE "CompileExecute"
#define COMPILE_FINISH  "CompileFinish"

#if FIRESTARTERCOMPILER_LOGGING
#define LOG printf
#else
#define LOG( ... ) {}
#endif

void FireStarterJobQueue::Add(FireStarterCompilerJob* job)
{
    if (WillTerminate())
        return;
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
    if (!IsRunning() || WillTerminate())
        return nullptr;

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
} // FireStarterJobQueue

FireStarterJobQueue::~FireStarterJobQueue(void)
{
    Cancel();
} // ~FireStarterJobQueue

void FireStarterCompilerManager::AddFree(void)
{
    m_freeQueue.Add(new FireStarterCompilerJob());
} // AddFree

void FireStarterCompilerManager::AddFree(FireStarterCompilerJob* job)
{
    *job = FireStarterCompilerJob();
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
            if (job->m_program.empty()) {
#if FIRESTARTERCOMPILER_LOGGING
                LOG("Server %llu: Finished job.\n", m_process->ProcessIndex());
#endif
                m_process->SendCommand(COMPILE_FINISH);
                m_process->ReceiveCommand(COMPILE_FINISH);
                m_process->Terminate();
                return;
            }

#if FIRESTARTERCOMPILER_LOGGING
            LOG("Server %llu: Code:%d\n", m_process->ProcessIndex(), job->m_state.m_generation);
#endif
            FireStarterPacket sendPacket(COMPILE_EXECUTE);
            bool result = true;
            result = result && sendPacket.Packetize(job->m_state.m_generation);
            result = result && sendPacket.Packetize(job->m_program);
            result = result && sendPacket.Packetize(job->m_programName);
            result = result && sendPacket.Packetize(job->m_options);
            result = result && m_process->SendPacket(sendPacket);
            if (result) {
                FireStarterPacket receivePacket;
                result = m_process->ReceivePacket(receivePacket);
                if (result) {
                    const std::string& command = receivePacket.Command();
                    if (result && (command == COMPILE_EXECUTE)) {
                        result = result && receivePacket.Packetize(job->m_ptx);
                        result = result && receivePacket.Packetize(job->m_log);
                        if (result) {
#if FIRESTARTERCOMPILER_LOGGING
                            LOG("Server %llu: Compile:%d\n", m_process->ProcessIndex(), job->m_state.m_generation);
#endif
                            m_compilerManager->AddCompile(job);
                        } else {
                            LOG("Server %llu: Unable to receive data!\n", m_process->ProcessIndex());
                        }
                    } else {
                        LOG("Server %llu: Unknown command:%s\n", m_process->ProcessIndex(), command.c_str());
                    }
                } else {
                    LOG("Server %llu: Unable to send data!\n", m_process->ProcessIndex());
                }
            } else {
                LOG("Server %llu: Client terminated!\n", m_process->ProcessIndex());
            }
            if (!result) {
                LOG("Server %llu: Terminate!\n", m_process->ProcessIndex());
                m_process->Terminate();
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
        if (result) {
            const std::string& command = receivePacket.Command();
            if (command == COMPILE_EXECUTE) {
                unsigned int generation;
                result = result && receivePacket.Packetize(generation);
                std::string program;
                result = result && receivePacket.Packetize(program);
                std::string programName;
                result = result && receivePacket.Packetize(programName);
                std::vector<std::string> options;
                result = result && receivePacket.Packetize(options);

                if (result) {
#if FIRESTARTERCOMPILER_LOGGING
                    LOG("Client %llu: Compile:%d\n", m_process->ProcessIndex(), generation);
#endif

                    std::string ptx, log;
                    bool result = CUDACompile::Compile(ptx, log, program, programName, options);
                    if (log.size())
                        LOG("Client %llu: Log:%s\n\n", m_process->ProcessIndex(), log.c_str());

                    FireStarterPacket sendPacket(COMPILE_EXECUTE);
                    result = result && sendPacket.Packetize(ptx);
                    result = result && sendPacket.Packetize(log);
                    result = result && m_process->SendPacket(sendPacket);
                } else {
                    LOG("Client %llu: Bad compile command data!\n", m_process->ProcessIndex());
                }
            } else if (command == COMPILE_FINISH) {
                FireStarterPacket sendPacket(COMPILE_FINISH);
                m_process->Terminate();
#if FIRESTARTERCOMPILER_LOGGING
                LOG("Client %llu: Finish command received.\n", m_process->ProcessIndex());
#endif
            } else {
                // Error: Unknown command!
                result = false;
                LOG("Client %llu: Unknown command:%s\n", m_process->ProcessIndex(), command.c_str());
            }

            // Error: Terminate the process on failure.
            if (!result) {
                LOG("Client %llu: Terminate!\n", m_process->ProcessIndex());
                m_process->Terminate();
            }
        } else {
#if FIRESTARTERCOMPILER_LOGGING
            LOG("Client %llu: Terminate received!\n", m_process->ProcessIndex());
#endif
        }
        if (!m_process->ShouldTerminate())
            DispatchAsync([this] { CompilerClient(); });
    };
} // CompilerClient

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
