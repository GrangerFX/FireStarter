#include "FireStarterCompiler.h"
#include "CUDACompile.h"

#define COMPILER_JOB_MULTIPLIER 10
#define COMPILE_EXECUTE "CompileExecute"

#if FIRESTARTERCOMPILER_LOGGING
#define LOG printf
#else
#define LOG( ... ) {}
#endif

void FireStarterJobQueue::Add(FireStarterJob* job)
{
    if (WillTerminate())
        return;
    DispatchAsync([this, job] {
        if (job) {
            job->m_next = nullptr;
            if (m_lastJob)
                m_lastJob->m_next = job;
            else
                m_firstJob = job;
            m_lastJob = job;
            m_sizeJobs++;
        }
        m_semaphore.notify();
    });
} // Add

FireStarterJob* FireStarterJobQueue::Get(void)
{
    if (!IsRunning() || WillTerminate())
        return nullptr;

    // Wait for a job to be added to the queue.
    FireStarterJob* job = nullptr;
    double waitTime = m_timer.Duration();
    m_semaphore.wait();
    m_totalJobs++;
    m_waitTime += m_timer.Duration() - waitTime;

    // Remove the job from the queue.
    DispatchSync([this, &job] {
        if (m_firstJob) {
            job = m_firstJob;
            m_firstJob = m_firstJob->m_next;
            if (!m_firstJob)
                m_lastJob = nullptr;
            job->m_next = nullptr;
            m_sizeJobs--;
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
        FireStarterJob* job = m_firstJob;
        m_firstJob = m_firstJob->m_next;
        delete job;
        m_sizeJobs--;
    }
    m_lastJob = nullptr;

    // Release any waiting threads.
    m_semaphore.terminate();
} // Cancel

double FireStarterJobQueue::WaitTime(void)
{
    return m_waitTime / m_totalJobs;
} // Time

size_t FireStarterJobQueue::Size(void)
{
    return m_sizeJobs;
} // Size

FireStarterJobQueue::FireStarterJobQueue(void)
{
} // FireStarterJobQueue

FireStarterJobQueue::~FireStarterJobQueue(void)
{
    Cancel();
} // ~FireStarterJobQueue

bool FireStarterCompiler::CompileJob(FireStarterCompilerManager* manager)
{
    bool result = false;
    FireStarterJob* job = manager->GetCode();
    if (job) {
        result = CUDACompile::Compile(job->m_ptx, job->m_log, job->m_program, job->m_programName, job->m_options);
        if (job->m_log.size())
            LOG("Compile log:%s\n\n", job->m_log.c_str());
        if (!result) {
            delete job;
            job = nullptr;
        }
    }
    manager->AddCompile(job);
    return result;
} // CompileJob

void FireStarterCompiler::CompilerServer(void)
{
    if (!m_process->ShouldTerminate()) {
        FireStarterJob* job = m_manager->GetCode();
        if (!job) {
#if FIRESTARTERCOMPILER_LOGGING
            LOG("%s: Last job received. Terminating process.\n", m_process->ProcessPrefix().c_str());
#endif
            m_process->Stop();
            m_manager->AddCompile(nullptr);
            return;
        }

#if FIRESTARTERCOMPILER_LOGGING
        LOG("%s: Code:%d\n", m_process->ProcessPrefix().c_str(), job->m_state.m_generation);
#endif
        FireStarterPacket sendPacket(COMPILE_EXECUTE);
        bool result = true;
        job->Packetize(sendPacket);
        result = result && m_process->SendPacket(sendPacket);
        if (result) {
            FireStarterPacket receivePacket;
            result = m_process->ReceivePacket(receivePacket);
            if (result) {
                const std::string& command = receivePacket.Command();
                if (result && (command == COMPILE_EXECUTE)) {
                    job->Packetize(receivePacket);
                    if (result) {
#if FIRESTARTERCOMPILER_LOGGING
                        LOG("%s: Compile:%d\n", m_process->ProcessPrefix().c_str(), job->m_state.m_generation);
#endif
                        m_manager->AddCompile(job);
                    }
                    else {
                        LOG("%s: Unable to receive data!\n", m_process->ProcessPrefix().c_str());
                    }
                }
                else {
                    LOG("%s: Unknown command:%s\n", m_process->ProcessPrefix().c_str(), command.c_str());
                }
            }
            else {
                LOG("%s: Unable to send data!\n", m_process->ProcessPrefix().c_str());
            }
        }
        else {
            LOG("%s: Client terminated!\n", m_process->ProcessPrefix().c_str());
        }
        if (!result) {
            LOG("%s: Terminate!\n", m_process->ProcessPrefix().c_str());
            m_process->Terminate();
        }
        if (!m_process->ShouldTerminate())
            DispatchAsync([this] { CompilerServer(); });
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
                FireStarterJob job(receivePacket);

                if (result) {
#if FIRESTARTERCOMPILER_LOGGING
                    LOG("%s: Compile:%d\n", m_process->ProcessPrefix().c_str(), job.m_state.m_generation);
#endif

                    bool result = CUDACompile::Compile(job.m_ptx, job.m_log, job.m_program, job.m_programName, job.m_options);
                    if (job.m_log.size())
                        LOG("%s: Compile log:%s\n\n", m_process->ProcessPrefix().c_str(), job.m_log.c_str());

                    FireStarterPacket sendPacket(COMPILE_EXECUTE);
                    job.Packetize(sendPacket);
                    result = result && m_process->SendPacket(sendPacket);
                } else {
                    LOG("%s: Bad compile command data!\n", m_process->ProcessPrefix().c_str());
                }
            }
            else {
                // Error: Unknown command!
                result = false;
                LOG("%s: Unknown command:%s\n", m_process->ProcessPrefix(), command.c_str());
            }

            // Error: Terminate the process on failure.
            if (!result) {
                LOG("%s: Terminate!\n", m_process->ProcessPrefix().c_str());
                m_process->Terminate();
            }
        }
        else {
#if FIRESTARTERCOMPILER_LOGGING
            LOG("%s: Terminate received!\n", m_process->ProcessPrefix().c_str());
#endif
        }
        if (!m_process->ShouldTerminate())
            DispatchAsync([this] { CompilerClient(); });
    };
} // CompilerClient

FireStarterCompiler::FireStarterCompiler(FireStarterProcess* process)
{
    m_server = nullptr;
    m_manager = nullptr;
    m_process = process;
    m_isClient = true;
    DispatchAsync([this] {
        if (m_process->Start())
            CompilerClient();
        });
} // FireStarterCompiler

FireStarterCompiler::FireStarterCompiler(FireStarterServer* server, FireStarterCompilerManager* manager)
{
    m_server = server;
    m_manager = manager;
    m_process = m_server->AddProcess(FIRECOMPILER);
    m_isClient = false;
    DispatchAsync([this] {
        if (m_process->Start())
            CompilerServer();
        });
} // FireStarterCompiler

FireStarterCompiler::~FireStarterCompiler(void)
{
    if (m_process)
        DispatchSync([this] { m_process->Stop(); });
} // ~FireStarterCompiler

void FireStarterCompilerManager::AddFree(void)
{
    m_freeQueue.Add(new FireStarterJob());
} // AddFree

void FireStarterCompilerManager::AddFree(FireStarterJob* job)
{
    *job = FireStarterJob();
    m_freeQueue.Add(job);
} // AddFree

FireStarterJob* FireStarterCompilerManager::GetFree(void)
{
    return m_freeQueue.Get();
} // GetFree

double FireStarterCompilerManager::TimeFree(void)
{
    return m_freeQueue.WaitTime();
} // TimeFree

size_t FireStarterCompilerManager::SizeFree(void)
{
    return m_freeQueue.Size();
} // SizeFree

void FireStarterCompilerManager::AddCode(FireStarterJob* job)
{
    m_codeQueue.Add(job);
} // AddCode

FireStarterJob* FireStarterCompilerManager::GetCode(void)
{
    return m_codeQueue.Get();
} // GetCode

double FireStarterCompilerManager::TimeCode(void)
{
    return m_codeQueue.WaitTime();
} // TimeCode

size_t FireStarterCompilerManager::SizeCode(void)
{
    return m_codeQueue.Size();
} // SizeCode

void FireStarterCompilerManager::AddCompile(FireStarterJob* job)
{
    m_compileQueue.Add(job);
} // AddCompile

FireStarterJob* FireStarterCompilerManager::GetCompile(void)
{
    return m_compileQueue.Get();
} // GetCompile

double FireStarterCompilerManager::TimeCompile(void)
{
    return m_compileQueue.WaitTime();
} // TimeCompile

size_t FireStarterCompilerManager::SizeCompile(void)
{
    return m_compileQueue.Size();
} // SizeCompile

void FireStarterCompilerManager::AddComplete(FireStarterJob* job)
{
    m_completeQueue.Add(job);
} // AddComplete

FireStarterJob* FireStarterCompilerManager::GetComplete(void)
{
    return m_completeQueue.Get();
} // GetComplete

double FireStarterCompilerManager::TimeComplete(void)
{
    return m_completeQueue.WaitTime();
} // TimeComplete

size_t FireStarterCompilerManager::SizeComplete(void)
{
    return m_completeQueue.Size();
} // SizeComplete

void FireStarterCompilerManager::Complete(void)
{
    // Send a null job to each client to let it know the work is complete.
    for (unsigned int i = 0; i < m_numProcesses; i++)
        AddCode(nullptr);
} // Complete

void FireStarterCompilerManager::Cancel(void)
{
    // Note: Safe to call more than once.
    m_freeQueue.Cancel();
    m_codeQueue.Cancel();
    m_compileQueue.Cancel();
    m_completeQueue.Cancel();
} // ClearJobs

FireStarterCompilerManager::FireStarterCompilerManager(unsigned int numUnits, unsigned int numProcesses)
{
    m_numUnits = numUnits;
    m_numProcesses = numProcesses;
    m_maxJobs = max(m_numUnits, m_numProcesses) * COMPILER_JOB_MULTIPLIER;
    for (size_t i = 0; i < m_maxJobs; i++)
        AddFree();
    m_server = new FireStarterServer();
    for (unsigned int i = 0; i < numProcesses; i++) {
        FireStarterCompiler* compiler = new FireStarterCompiler(m_server, this);
        m_compilers.push_back(compiler);
    }
} // FireStarterCompilerManager

FireStarterCompilerManager::~FireStarterCompilerManager(void)
{
    Cancel();
    for (FireStarterCompiler* compiler : m_compilers)
        delete compiler;
    delete m_server;
} // ~FireStarterCompilerManager
