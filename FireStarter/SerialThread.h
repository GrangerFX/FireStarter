#pragma once
#include <queue>
#include <chrono>
#include <mutex>
#include <thread>
#include <functional>
#include <condition_variable>

class SerialThread {
private:
    // Currently the work function has no parameters and no return value.
    typedef std::function<void(void)> SerialThreadWork;

    // This gets around a missing feature of std::list: The trivial deletion of a single element by reference.
    class SerialThreadTimers {
    private:
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

        SerialThreadTimer m_timers;

    public:
        void AddTimer(SerialThread* thread, double duration, const SerialThreadWork& work)
        {
            // Reference: https://www.modernescpp.com/index.php/cooperative-interruption-of-a-thread-in-c-20
            thread->DispatchAsync([this, thread, duration, work] {
                SerialThreadTimer* timer = new SerialThreadTimer(&m_timers, duration, work);
                timer->m_thread = std::jthread([this, thread, timer](std::stop_token stopToken) {
                    std::stop_token interruptDisabled;
                    std::this_thread::sleep_for(std::chrono::duration<double>(timer->m_duration));
                    std::swap(stopToken, interruptDisabled);
                    thread->DispatchAsync([timer] {
                        timer->m_work();
                        delete timer;
                    });
                });
                timer->m_thread.detach();
            });
        } // AddTimer

        void StopTimers(void)
        {
            while (m_timers.m_next) {
                m_timers.m_next->m_thread.request_stop();
                delete m_timers.m_next;
            }
        } // StopTimers
    }; // class SerialThreadTimers

    std::thread m_thread;
    std::mutex m_mutex;
    std::condition_variable m_cv;
    std::queue<SerialThreadWork> m_workQueue;
    SerialThreadTimers m_timers;
    inline static SerialThread* g_mainThread = nullptr;
    bool m_pollThread;
    volatile bool m_terminate;

    // Reference: https://stackoverflow.com/questions/4792449/c0x-has-no-semaphores-how-to-synchronize-threads
    inline void Push(const SerialThreadWork& work)
    {
        std::unique_lock<std::mutex> lock(m_mutex);
        if (!m_terminate) {
            m_workQueue.push(work);
            m_cv.notify_one();
        }
    } // Push

    inline void Wait(SerialThreadWork& work)
    {
        std::unique_lock<std::mutex> lock(m_mutex);
        while (m_workQueue.empty())
            m_cv.wait(lock);
        work = m_workQueue.front();
        m_workQueue.pop();
    } // Wait

    inline bool TryWait(SerialThreadWork& work)
    {
        std::unique_lock<std::mutex> lock(m_mutex);
        if (!m_workQueue.empty()) {
            work = m_workQueue.front();
            m_workQueue.pop();
            return true;
        }
        return false;
    } // TryWait

    inline void Thread(void)
    {
        SerialThreadWork work;
        m_terminate = false;
        while (!m_terminate) {
            Wait(work);
            work();
        }
        while (TryWait(work))
            work();
    } // Thread

    inline void TerminateThread(void)
    {
        m_timers.StopTimers();
        m_terminate = true;
    } // TerminateThread

public:
    inline bool PollThread(void)
    {
        bool result = false;
        SerialThreadWork work;
        while (TryWait(work)) {
            work();
            result = true;
        }
        return result;
    } // PollThread

    inline void DispatchAsync(const SerialThreadWork& work)
    {
        Push(work);
    } // DispatchAsync

    inline void DispatchSync(const SerialThreadWork& work)
    {
        std::condition_variable cv;
        DispatchAsync([this, &cv, work] {
            work();
            cv.notify_one();
        });
        if (m_pollThread)
            PollThread();

        // Wait for the contditional variable to be notified.
        std::mutex mutex;
        std::unique_lock<std::mutex> lock(mutex);
        cv.wait(lock);
    } // DispatchSync

    inline void DispatchAfter(double duration, const SerialThreadWork& work)
    {
        DispatchAsync([this, duration, work] {
            m_timers.AddTimer(this, duration, work);
         });
    } // DispatchAfter

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
            m_thread = std::thread([this]{ Thread(); });
    } // SerialThread

    inline ~SerialThread(void)
    {
        if (m_pollThread) {
            PollThread();
            TerminateThread();
        } else {
            DispatchSync([this] { TerminateThread(); });
            m_thread.join();
        }
    } // ~SerialThread
}; // class SerialThread