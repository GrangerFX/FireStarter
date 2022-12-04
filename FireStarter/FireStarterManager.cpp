#include "FireStarterManager.h"

#define MANAGER_JOB_MULTIPLIER 10

void FireStarterJobQueue::Add(FireStarterJob* job)
{
    if (!IsRunning() || WillTerminate())
        return;
    if (job)
        DispatchAsync([this, job] {
            job->m_next = nullptr;
            if (m_lastJob)
                m_lastJob->m_next = job;
            else
                m_firstJob = job;
            m_lastJob = job;
            m_sizeJobs++;
            m_semaphore.notify();
        });
    else
        m_semaphore.terminate();
    } // Add

FireStarterJob* FireStarterJobQueue::Get(void)
{
    if (!IsRunning() || WillTerminate())
        return nullptr;

    // Wait for a job to be added to the queue.
    FireStarterJob* job = nullptr;
    double waitTime = m_timer.Duration();
    if (m_semaphore.wait())
        DispatchSync([this, &job, waitTime] {
            // Remove the job from the queue.
            if (m_firstJob) {
                job = m_firstJob;
                m_firstJob = m_firstJob->m_next;
                if (!m_firstJob)
                    m_lastJob = nullptr;
                job->m_next = nullptr;
                m_sizeJobs--;
                m_totalJobs++;
                m_waitTime += m_timer.Duration() - waitTime;
            }
        });
    return job;
} // Get

void FireStarterJobQueue::Cancel(void)
{
    // Release any waiting threads and return null jobs to new requests.
    m_semaphore.terminate();

    // Delete all the jobs in the queue.
    DispatchSync([this] {
        while (m_firstJob) {
            FireStarterJob* job = m_firstJob;
            m_firstJob = m_firstJob->m_next;
            delete job;
            m_sizeJobs--;
        }
        m_lastJob = nullptr;
    });
} // Cancel

double FireStarterJobQueue::WaitTime(void)
{
    return m_waitTime / m_totalJobs;
} // Time

size_t FireStarterJobQueue::Size(void)
{
    return m_sizeJobs;
} // Size

FireStarterJobQueue::FireStarterJobQueue(const std::string& name) : m_name(name)
{
} // FireStarterJobQueue

FireStarterJobQueue::~FireStarterJobQueue(void)
{
    Cancel();
} // ~FireStarterJobQueue

void FireStarterManager::AddFree(FireStarterJob* job)
{
    if (job) {
        *job = FireStarterJob();
        m_freeQueue.Add(job);
    } else
        m_freeQueue.Add(new FireStarterJob());
} // AddFree

FireStarterJob* FireStarterManager::GetFree(void)
{
    return m_freeQueue.Get();
} // GetFree

double FireStarterManager::TimeFree(void)
{
    return m_freeQueue.WaitTime();
} // TimeFree

size_t FireStarterManager::SizeFree(void)
{
    return m_freeQueue.Size();
} // SizeFree

void FireStarterManager::AddCode(FireStarterJob* job)
{
#if FIRESTARTERCOMPILER_LOGGING
    if (!job) {
        LOG("Terminating Code Queue\n");
    }
#endif
    m_codeQueue.Add(job);
} // AddCode

FireStarterJob* FireStarterManager::GetCode(void)
{
    return m_codeQueue.Get();
} // GetCode

double FireStarterManager::TimeCode(void)
{
    return m_codeQueue.WaitTime();
} // TimeCode

size_t FireStarterManager::SizeCode(void)
{
    return m_codeQueue.Size();
} // SizeCode

void FireStarterManager::AddCompile(FireStarterJob* job)
{
#if FIRESTARTERCOMPILER_LOGGING
    if (!job) {
        LOG("Terminating Compile Queue\n");
    }
#endif
    m_compileQueue.Add(job);
} // AddCompile

FireStarterJob* FireStarterManager::GetCompile(void)
{
    return m_compileQueue.Get();
} // GetCompile

double FireStarterManager::TimeCompile(void)
{
    return m_compileQueue.WaitTime();
} // TimeCompile

size_t FireStarterManager::SizeCompile(void)
{
    return m_compileQueue.Size();
} // SizeCompile

void FireStarterManager::AddComplete(FireStarterJob* job)
{
#if FIRESTARTERCOMPILER_LOGGING
    if (!job) {
        LOG("Terminating Complete Queue\n");
    }
#endif
    m_completeQueue.Add(job);
} // AddComplete

FireStarterJob* FireStarterManager::GetComplete(void)
{
    return m_completeQueue.Get();
} // GetComplete

double FireStarterManager::TimeComplete(void)
{
    return m_completeQueue.WaitTime();
} // TimeComplete

size_t FireStarterManager::SizeComplete(void)
{
    return m_completeQueue.Size();
} // SizeComplete

void FireStarterManager::Cancel(void)
{
#if FIRESTARTERCOMPILER_LOGGING
    LOG("Canceling all queues\n");
#endif
    // Note: Safe to call more than once.
    m_freeQueue.Cancel();
    m_codeQueue.Cancel();
    m_compileQueue.Cancel();
    m_completeQueue.Cancel();
} // ClearJobs

FireStarterManager::FireStarterManager(unsigned int maxUnits) : m_freeQueue("Free"), m_codeQueue("Code"), m_compileQueue("Compile"), m_completeQueue("Complete")
{
    m_maxJobs = maxUnits * MANAGER_JOB_MULTIPLIER;
    for (size_t i = 0; i < m_maxJobs; i++)
        AddFree();
} // FireStarterManager

FireStarterManager::~FireStarterManager(void)
{
    Cancel();
} // ~FireStarterManager
