#pragma once
#include <chrono>
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
            --count;
            return true;
        }
        return false;
    } // trywait
}; // class Semaphore

class SerialThread {
private:
    typedef std::function<void(void)> SerialThreadWork;
    class SerialThreadTimer {
    public:
        SerialThreadTimer* m_prev;
        SerialThreadTimer* m_next;
        std::jthread m_thread;
        SerialThreadWork m_work;
        double m_duration;

        inline SerialThreadTimer(SerialThreadTimer* timers, double duration, const SerialThreadWork& work) : m_prev(timers), m_next(timers->m_next), m_duration(duration), m_work(work)
        {
            if (timers->m_next)
                timers->m_next->m_prev = this;
            timers->m_next = this;
        } // SerialThreadTimer

        inline SerialThreadTimer(void) : m_prev(nullptr), m_next(nullptr), m_duration(0.0), m_work() {}
 
        inline ~SerialThreadTimer(void)
        {
            if (m_prev)
                m_prev->m_next = m_next;
            if (m_next)
                m_next->m_prev = m_prev;
        } // ~SerialThreadTimer
    }; // SerialThreadTimer;

    Semaphore m_semaphore;
    std::thread m_thread;
    std::mutex m_mutex;
    std::queue<SerialThreadWork> m_workQueue;
    SerialThreadTimer m_timers;
    inline static SerialThread* g_mainThread = nullptr;
    bool m_pollThread;
    volatile bool m_terminate;
 
    inline void DoWork(void)
    {
        while (!m_workQueue.empty()) {
            m_mutex.lock();
            SerialThreadWork work(m_workQueue.front());
            m_workQueue.pop();
            m_mutex.unlock();
            work();
        }
    } // DoWork

    inline void Thread(void)
    {
        for (;;) {
            m_semaphore.wait();
            if (m_terminate)
                return;
            DoWork();
        }
    } // Thread

public:
    inline bool PollThread(void)
    {
        if (m_pollThread && m_semaphore.trywait()) {
            if (m_terminate)
                return false;
            DoWork();
            return true;
        }
        return false;
    } // PollThread

    inline void DispatchAsync(const SerialThreadWork& work)
    {
        m_mutex.lock();
        m_workQueue.push(work);
        m_mutex.unlock();
        m_semaphore.notify();
    } // DispatchAsync

    inline void DispatchSync(const SerialThreadWork& work)
    {
        Semaphore sync;
        m_mutex.lock();
        m_workQueue.push([this, &sync, work] {
            work();
            sync.notify();
        });
        m_mutex.unlock();
        m_semaphore.notify();
        if (m_pollThread)
            PollThread();
        sync.wait();
    } // DispatchSync

    inline void DispatchAfter(double duration, const SerialThreadWork& work)
    {
        DispatchAsync([this, duration, work] {
            SerialThreadTimer* timer = new SerialThreadTimer(&m_timers, duration, work);
            timer->m_thread = std::jthread([this, timer](std::stop_token stopToken) {
                std::stop_token interruptDisabled;
//              std::stop_callback callBack(stopToken, []{});
                std::this_thread::sleep_for(std::chrono::duration<double>(timer->m_duration));
                std::swap(stopToken, interruptDisabled);
                DispatchAsync([timer] {
                    timer->m_work();
                    delete timer;
                });
            });
            timer->m_thread.detach();
         });
    } // DispatchAfter

    inline void Terminate(void)
    {
        if (!m_terminate) {
            DispatchSync([this] {
                while (m_timers.m_next) {
                    m_timers.m_next->m_thread.request_stop();
                    delete m_timers.m_next;
                }
            });
            m_terminate = true;
            m_semaphore.notify();
            if (m_pollThread)
                PollThread();
            else
                m_thread.join();
        }
    } // Terminate

    static inline SerialThread* GetMainThread(void)
    {
        return g_mainThread;
    } // GetMainThread

    static inline void SetMainThread(SerialThread *mainThread)
    {
        g_mainThread = mainThread;
    } // SetMainThread

    inline SerialThread(bool pollThread = false)
    {
        m_terminate = false;
        m_pollThread = pollThread;
        if (!m_pollThread)
            m_thread = std::thread([this] { Thread(); });
    } // SerialThread

    inline ~SerialThread(void)
    {
        Terminate();
    } // ~SerialThread
}; // class SerialThread