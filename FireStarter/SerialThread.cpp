#include "SerialThread.h"

void SerialThread::Thread(void)
{
    for (;;) {
        m_semaphore.wait();
        if (m_terminate)
            return;
        m_mutex.lock();
        std::function<void(void)> work(m_workQueue.front());
        m_workQueue.pop();
        m_mutex.unlock();
        work();
    }
} // Thread

void SerialThread::Dispatch(std::function<void(void)> work)
{
    m_mutex.lock();
    m_workQueue.push(work);
    m_mutex.unlock();
    m_semaphore.notify();
} // Dispatch

void SerialThread::Terminate(void)
{
    if (!m_terminate) {
        m_terminate = true;
        m_semaphore.notify();
        m_thread.join();
    }
} // Terminate

SerialThread::SerialThread(void)
{
    m_terminate = false;
    m_thread = std::thread([this] { Thread(); });
} // SerialThread

SerialThread::~SerialThread(void)
{
    Terminate();
} // ~SerialThread