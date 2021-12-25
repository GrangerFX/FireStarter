#pragma once
#include <mutex>
#include <thread>
#include <functional>
#include <queue>
#include <mutex>
#include <condition_variable>

class Semaphore {
private:
    std::mutex mtx;
    std::condition_variable cv;
    int count;

public:
    Semaphore(int start_count = 0) : count(start_count) {}

    inline void notify()
    {
        std::unique_lock<std::mutex> lock(mtx);
        count++;
        cv.notify_one();
    } // notify

    inline void wait()
    {
        std::unique_lock<std::mutex> lock(mtx);
        while (count == 0)
            cv.wait(lock);
        count--;
    } // wait

    inline bool trywait()
    {
        std::unique_lock<std::mutex> lock(mtx);
        if (count) {
            cv.wait(lock);
            --count;
            return true;
        }
        return false;
    } // trywait
}; // class Semaphore

class SerialThread {
private:
    Semaphore m_semaphore;
    std::thread m_thread;
    std::mutex m_mutex;
    std::queue<std::function<void(void)>> m_workQueue;
    volatile bool m_terminate;
 
    inline void Thread(void)
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
public:
    inline void Dispatch(std::function<void(void)> work)
    {
        m_mutex.lock();
        m_workQueue.push(work);
        m_mutex.unlock();
        m_semaphore.notify();
    } // Dispatch

    inline void Terminate(void)
    {
        if (!m_terminate) {
            m_terminate = true;
            m_semaphore.notify();
            m_thread.join();
        }
    } // Terminate

    inline SerialThread(void)
    {
        m_terminate = false;
        m_thread = std::thread([this] { Thread(); });
    } // SerialThread

    inline ~SerialThread(void)
    {
        Terminate();
    } // ~SerialThread
}; // class SerialThread