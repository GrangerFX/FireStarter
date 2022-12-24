#pragma once
#include <queue>
#include <chrono>
#include <mutex>
#include <thread>
#include <functional>
#include <condition_variable>

// SerialThread by Mark Granger.
// Contact: grangerfx@gmail.com
// This code may be used, modified, copied and distributed freely by anyone and without attribution.
// 
// SerialThread is a simplified implementation of the thread model from Apple's Grand Central Dispatch implemented in portable C++20 code.
// Example:
// 
// Declare a thread.
// SerialThread m_thread;
//
// You can also create a polling version of SerialThread for the main event loop.
// SerialThread m_mainThread(true);
//
// Call this from the main thread.
// SerialThread::SetMainThread(&mainThread);
// This will allow you to call functions on the main thread from other threads.
// 
// Do some work on the thread asyncronously.
// The work will be performed in the order it was received.
// m_thread.DispatchAsync([this]{
//     Do work here.
// });
//
// Do some work on the thread syncronously blocking the current thread.
// All pending asyncronous work will be completed before the syncrhonous work is done.
// m_thread.DispatchSync([this]{
//     Do work here.
// });
//
// Do some work after a period of time in seconds (C++20 required).
// m_thread.DispatchAfter(1.0, [this]{
//     Do work here.
// });
// Pending delayed work will get canceled if the thread is deleted.
//
// Nesting of thread calls works fine.
// m_thread.DispatchAsync([this]{
//     Do work here.
//     m_anotherThread.DispatchAsync([this]{
//         Do more work here.
//     });
// });

#define HAS_DISPATCH_AFTER _HAS_CXX20

// A semaphore is needed when syncronizing work on a serialized thread.
// Reference: https://stackoverflow.com/questions/4792449/c0x-has-no-semaphores-how-to-synchronize-threads
class SerialThreadSemaphore {
private:
    std::mutex m_mtx;
    std::condition_variable m_cv;
    int m_count = 0;
    int m_waiting = 0;
    bool m_active = true;
public:
    SerialThreadSemaphore(int start_count = 0) : m_count(start_count) {}

    inline void notify()
    {
        std::unique_lock<std::mutex> lock(m_mtx);
        m_active = true;
        m_count++;
        m_cv.notify_one();
    } // notify

    inline void notify_all()
    {
        std::unique_lock<std::mutex> lock(m_mtx);
        if (!m_active)
            return;
        m_count += m_waiting;
        m_cv.notify_all();
    } // notify_all

    inline bool wait()
    {
        std::unique_lock<std::mutex> lock(m_mtx);
        if (m_active || m_count) {
            m_waiting++;
            while (m_count == 0)
                m_cv.wait(lock);
            m_waiting--;
            m_count--;
            return true;
        }
        return false;
    } // wait

    inline bool trywait()
    {
        std::unique_lock<std::mutex> lock(m_mtx);
        if (m_active && m_count) {
            --m_count;
            return true;
        }
        return false;
    } // trywait

    inline bool restart()
    {
        std::unique_lock<std::mutex> lock(m_mtx);
        if (m_active)
            return false;
        m_active = true;
        return true;
    } // restart

    inline bool terminate()
    {
        std::unique_lock<std::mutex> lock(m_mtx);
        if (!m_active)
            return false;
        m_active = false;
        m_count += m_waiting;
        m_cv.notify_all();
        return true;
    } // terminate
}; // class SerialThreadSemaphore

class SerialThread {
private:
    // Currently the work function has no parameters and no return value.
    typedef std::function<void(void)> SerialThreadWork;

    std::thread m_thread;
    std::mutex m_mutex;
    std::condition_variable m_cv;
    std::queue<SerialThreadWork> m_workQueue;
    bool m_pollThread = false;
    bool m_willTerminate = false;
    volatile bool m_terminate = false;

#if HAS_DISPATCH_AFTER
    // This gets around a missing feature of std::list: The trivial deletion of a single element by reference.
    // Reference: https://www.modernescpp.com/index.php/cooperative-interruption-of-a-thread-in-c-20
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
            thread->DispatchAsync([this, thread, duration, work] {
                SerialThreadTimer* timer = new SerialThreadTimer(&m_timers, duration, work);
                timer->m_thread = std::jthread([this, thread, timer](std::stop_token stopToken) {
                    std::stop_token interruptDisabled;
                    std::this_thread::sleep_for(std::chrono::duration<double>(timer->m_duration));
                    std::swap(stopToken, interruptDisabled);
                    if (!thread->m_terminate)
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

    SerialThreadTimers m_timers;
#endif

    static SerialThread*& MainThread()
    {
        static SerialThread* g_mainThread = nullptr;
        return g_mainThread;
    } // MainThread

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
    } // Thread

    inline void Terminate(void)
    {
#if HAS_DISPATCH_AFTER
        m_timers.StopTimers();
#endif
        m_terminate = true;
    } // Terminate

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

    inline bool WillTerminate(void)
    {
        return m_willTerminate;
    } // WillTerminate

    inline bool IsRunning(void)
    {
        return m_pollThread || m_thread.joinable();
    } // IsRunning

    inline void SleepFor(double duration)
    {
        // Note: The calling thread will sleep.
        std::this_thread::sleep_for(std::chrono::duration<double>(duration));
    } // SleepFor

#if HAS_DISPATCH_AFTER
    inline bool DispatchAfter(double duration, const SerialThreadWork& work)
    {
        return DispatchAsync([this, duration, work] {
            m_timers.AddTimer(this, duration, work);
            });
    } // DispatchAfter

    inline bool DispatchMainAfter(double duration, const SerialThreadWork& work)
    {
        SerialThread* mainThread = MainThread();
        if (mainThread)
            return mainThread->DispatchAfter(duration, work);
        return false;
    } // DispatchMainAfter
#endif

    inline bool DispatchAsync(const SerialThreadWork& work)
    {
        std::unique_lock<std::mutex> lock(m_mutex);
        if (!m_terminate) {
            m_workQueue.push(work);
            m_cv.notify_one();
            return true;
        }
        return false;
    } // DispatchAsync

    inline bool DispatchMainAsync(const SerialThreadWork& work)
    {
        SerialThread* mainThread = MainThread();
        if (mainThread)
            return mainThread->DispatchAsync(work);
        return false;
    } // DispatchMainAsync

    inline bool DispatchSync(const SerialThreadWork& work)
    {
        if (!m_terminate) {
            SerialThreadSemaphore syncSemaphore;
            if (DispatchAsync([this, &syncSemaphore, work] {
                if (work)
                    work();
                syncSemaphore.notify();
            })) {
                if (m_pollThread)
                    PollThread();

                // Wait for the contditional variable to be notified.
                syncSemaphore.wait();
                return true;
            }
        }
        return false;
    } // DispatchSync

    inline bool DispatchMainSync(const SerialThreadWork& work)
    {
        SerialThread* mainThread = MainThread();
        if (mainThread)
            return mainThread->DispatchSync(work);
        return false;
    } // DispatchMainSync

    inline bool Synchronize(void)
    {
        return DispatchSync({});
    } // Synchronize

    inline bool MainSynchronize(void)
    {
        return DispatchMainSync({});
    } // MainSynchronize

    static inline SerialThread* GetMainThread(void)
    {
        return MainThread();
    } // GetMainThread

    static inline void SetMainThread(SerialThread* mainThread = nullptr)
    {
        MainThread() = mainThread;
    } // SetMainThread

    inline virtual bool TerminateThread(void)
    {
        if (!m_willTerminate) {
            m_willTerminate = true;
            if (m_pollThread) {
                PollThread();
                std::unique_lock<std::mutex> lock(m_mutex);
                Terminate();
            } else {
                DispatchSync([this] { Terminate(); });
                std::unique_lock<std::mutex> lock(m_mutex);
                m_thread.join();
            }
            std::queue<SerialThreadWork> empty;
            std::swap(m_workQueue, empty);  // Clear the work queue.
            return true;
        }
        return false;
    } // TerminateThread

    inline SerialThread(bool pollThread = false)
    {
        m_pollThread = pollThread;
        if (!m_pollThread)
            m_thread = std::thread([this] { Thread(); });
    } // SerialThread

    inline ~SerialThread(void)
    {
        TerminateThread();
    } // ~SerialThread
}; // class SerialThread