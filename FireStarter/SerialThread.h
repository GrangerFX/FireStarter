#pragma once
#include <queue>
#include <chrono>
#include <mutex>
#include <atomic>
#include <thread>
#include <functional>
#include <condition_variable>
#include <algorithm>
#ifdef WIN32
#include <Windows.h>
#endif

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

#define USE_GEMINI_IMPL 1

#if __cplusplus >= 202002L || (defined(_MSVC_LANG) && _MSVC_LANG >= 202002L)
#define HAS_DISPATCH_AFTER 1
#else
#define HAS_DISPATCH_AFTER 0
#endif

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
        if (m_active) {
            m_waiting++;
            while (m_count == 0)
                m_cv.wait(lock);
            m_waiting--;
            m_count--;
            return true;
        } else if (m_count) {
            m_count--;
            return true;
        }
        return false;
    } // wait

    inline bool trywait()
    {
        std::unique_lock<std::mutex> lock(m_mtx);
        if (m_count) {
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

// Currently the work function has no parameters and no return value.
typedef std::function<void(void)> SerialThreadWork;

class SerialThread {
private:
    std::thread m_thread;
    std::thread::id m_threadId;
    std::mutex m_mutex;
    std::condition_variable m_cv;
    std::queue<SerialThreadWork> m_workQueue;
    const std::string m_threadName; // Used to identify threads in the debugger.
    const bool m_pollThread = false;
    std::atomic<bool> m_willTerminate{ false };
    std::atomic<bool> m_waiting{ false };
    std::atomic<bool> m_working{ false };
    std::atomic<bool> m_terminate{ false };

    struct ParallelTask {
        size_t start, end;
        std::function<void(size_t, size_t)> functor;
        std::atomic<int>* remaining_chunks; // To track completion
        SerialThreadSemaphore* barrier;     // To wake up the caller
    };

    // --- Static Shared Pool Members ---
    inline static std::vector<std::thread> s_parallelThreads;
    inline static std::queue<ParallelTask> s_parallelQueue;
    inline static std::mutex s_parallelMutex;
    inline static std::condition_variable s_parallelCV;
    inline static std::once_flag s_poolInitFlag;

    static void StaticParallelWorker()
    {
        // Use WillQuit() since this pool is global
        while (!WillQuit()) {
            ParallelTask task;
            {
                std::unique_lock<std::mutex> lock(s_parallelMutex);
                s_parallelCV.wait(lock, [] {
                    return !s_parallelQueue.empty() || WillQuit();
                    });
                if (WillQuit() && s_parallelQueue.empty()) return;

                task = std::move(s_parallelQueue.front());
                s_parallelQueue.pop();
            }
            task.functor(task.start, task.end);
            if (task.remaining_chunks->fetch_sub(1) == 1) task.barrier->notify();
        }
    } // StaticParallelWorker

    static void EnsurePool()
    {
        std::call_once(s_poolInitFlag, [] {
            size_t poolSize = std::thread::hardware_concurrency();
            for (size_t i = 0; i < poolSize; ++i) {
                s_parallelThreads.emplace_back(&SerialThread::StaticParallelWorker);
            }
            });
    } // EnsurePool

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

    inline bool Wait(SerialThreadWork& work)
    {
        m_waiting = true;
        std::unique_lock<std::mutex> lock(m_mutex);
        while (m_workQueue.empty())
            m_cv.wait(lock);
        if (!m_workQueue.empty()) {
            work = m_workQueue.front();
            m_workQueue.pop();
            m_working = true;
            m_waiting = false;
            return true;
        }
        return false;
    } // Wait

    inline bool TryWait(SerialThreadWork& work)
    {
        m_waiting = true;
        std::unique_lock<std::mutex> lock(m_mutex);
        if (!m_workQueue.empty()) {
            work = m_workQueue.front();
            m_workQueue.pop();
            m_working = true;
            m_waiting = false;
            return true;
        }
        return false;
    } // TryWait

    inline void Thread(void)
    {
#ifdef WIN32
        SetThreadDescription(GetCurrentThread(), std::wstring(m_threadName.begin(), m_threadName.end()).data());
#endif
        SerialThreadWork work;
        m_terminate = false;
        while (!m_terminate) {
            if (Wait(work)) {
                work();
                m_working = false;
            } else
                m_terminate = true;
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
            m_working = false;
            result = true;
        }
        return result;
    } // PollThread

#if USE_GEMINI_IMPL
    // Implementation suggested by Gemini.
    static inline std::atomic<bool>& WillQuit() {
        // C++11/14 guarantees that static local initialization is thread-safe.
        static std::atomic<bool> m_willQuit{ false };
        return m_willQuit;
    } // WillQuit
#else
    // My original implementation.
    static inline volatile bool& WillQuit(void)
    {
        static volatile bool m_willQuit = false;
        return m_willQuit;
    } // WillQuit
#endif

    inline bool WillTerminate(void)
    {
        return m_willTerminate || WillQuit();
    } // WillTerminate

    inline bool IsRunning(void)
    {
        return m_pollThread || m_thread.joinable();
    } // IsRunning

    inline bool IsFinished(void)
    {
        std::unique_lock<std::mutex> lock(m_mutex);
        if (m_waiting && !m_working && m_workQueue.empty())
            return true;
        return false;
    } // IsFinished

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

#if USE_GEMINI_IMPL
    // Version recommended by Gemini. This version allows move semantics to be used when dispatching work, which can be more efficient for large work objects.
    inline bool DispatchAsync(SerialThreadWork work) // Pass by value
    {
        std::unique_lock<std::mutex> lock(m_mutex);
        if (!m_terminate) {
            m_workQueue.push(std::move(work)); // Move into the queue
            m_cv.notify_one();
            return true;
        }
        return false;
    } // DispatchAsync
#else
    // Original version.
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
#endif

    static inline bool DispatchMainAsync(const SerialThreadWork& work)
    {
        SerialThread* mainThread = MainThread();
        if (mainThread)
            return mainThread->DispatchAsync(work);
        return false;
    } // DispatchMainAsync

#if USE_GEMINI_IMPL
    // Version recommended by Gemini. This version allows DispatchSync to be called from the worker thread itself without deadlocking.
    inline bool DispatchSync(const SerialThreadWork& work)
    {
        if (m_terminate)
            return false;

        // PROTECTION: If we are calling DispatchSync from the worker thread itself,
        // execute the work immediately. Otherwise, we will wait forever (deadlock).
        if (std::this_thread::get_id() == m_threadId) {
            if (work)
                work();
            return true;
        }

        // NORMAL PATH: Enqueue and wait
        SerialThreadSemaphore syncSemaphore;
        if (DispatchAsync([&syncSemaphore, work] {
            if (work)
                work();
            syncSemaphore.notify();
            })) {
            // If this is a main-thread polling instance, we may need to 
            // pump the queue ourselves to avoid blocking the very thread 
            // that's supposed to do the work.
            if (m_pollThread)
                PollThread();

            // Wait for the contditional variable to be notified.
            syncSemaphore.wait();
            return true;
        }
        return false;
    } // DispatchSync
#else
    // Original version.
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
#endif

    static inline bool DispatchMainSync(const SerialThreadWork& work)
    {
        SerialThread* mainThread = MainThread();
        if (mainThread)
            return mainThread->DispatchSync(work);
        return false;
    } // DispatchMainSync

    inline bool Dispatch(const SerialThreadWork& work, bool sync)
    {
        return sync ? DispatchSync(work) : DispatchAsync(work);
    } // Dispatch

    static inline bool DispatchMain(const SerialThreadWork& work, bool sync)
    {
        return sync ? DispatchMainSync(work) : DispatchMainAsync(work);
    } // DispatchMain

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

#if !USE_GEMINI_IMPL
    inline virtual bool TerminateThread(void)
    {
        if (m_willTerminate.exchange(true)) return false; // Atomic 'check and set'
        Cleanup();
        return true;
    } // TerminateThread
#else
    inline virtual bool TerminateThread(void)
    {
        if (!m_willTerminate) {
            m_willTerminate = true;
            if (m_pollThread) {
                PollThread();
                std::unique_lock<std::mutex> lock(m_mutex);
                Terminate();
                std::queue<SerialThreadWork> empty;
                std::swap(m_workQueue, empty);  // Clear the work queue.
            } else {
                DispatchSync([this] { Terminate(); });
                std::unique_lock<std::mutex> lock(m_mutex);
                m_thread.join();
                std::queue<SerialThreadWork> empty;
                std::swap(m_workQueue, empty);  // Clear the work queue.
            }
            return true;
        }
        return false;
    } // TerminateThread
#endif

    inline static void QuitThreads(void)
    {
        WillQuit() = true;
    } // QuitThreads

#if !USE_GEMINI_IMPL
    // Original code. Not needed if the new ~SerialThread() is used.
    inline void FinishParallelThreads(void)
    {
        DispatchSync([this] {
            // Wait for the threads to finish their tasks
            if (!m_parallelThreads.empty())
                std::for_each(m_parallelThreads.begin(), m_parallelThreads.end(), std::mem_fn(&std::thread::join));
            });
    } // FinishParallelThreads
#endif

    inline void ParallelFor(size_t for_start, size_t for_end, std::function<void(size_t, size_t)> functor)
    {
        EnsurePool();

        size_t total = for_end - for_start;
        size_t num_chunks = s_parallelThreads.size();
        std::atomic<int> remaining_chunks{ static_cast<int>(num_chunks) };
        SerialThreadSemaphore barrier(0);

        {
            std::unique_lock<std::mutex> lock(s_parallelMutex);
            for (size_t i = 0; i < num_chunks; ++i) {
                size_t start = for_start + (i * total) / num_chunks;
                size_t end = for_start + ((i + 1) * total) / num_chunks;
                s_parallelQueue.push({ start, end, functor, &remaining_chunks, &barrier });
            }
        }
        s_parallelCV.notify_all();
        barrier.wait();
    } // ParallelFor

    // Note: int is used instead of bool for correct type matching.
    inline SerialThread(const std::string& threadName = "SerialThread", bool pollThread = false) : m_threadName(threadName), m_pollThread(pollThread)
    {
        if (m_pollThread)
            m_threadId = std::this_thread::get_id();
        else {
            m_thread = std::thread([this] { Thread(); });
            m_threadId = m_thread.get_id();
        }
    } // SerialThread

#if USE_GEMINI_IMPL
    inline ~SerialThread(void)
    {
        // Destructor ensures the flag is set and cleanup happens
        m_willTerminate = true;
        Cleanup();
    } //  ~SerialThread

private:
    inline void Cleanup()
    {
        // The static parallel threads are shut down once by ther destructor.

        // 1. Kill Serial Worker
        if (m_pollThread)
            Terminate(); // Inner flag m_terminate = true
        else {
            DispatchSync([this] { Terminate(); });
            if (m_thread.joinable())
                m_thread.join();
        }

        // 2. Wipe Queue
        std::unique_lock<std::mutex> lock(m_mutex);
        std::queue<SerialThreadWork> empty;
        std::swap(m_workQueue, empty);
    } // Cleanup()
#else
    inline ~SerialThread(void)
    {
        m_parallelCV.notify_all(); // Wake up parallel workers to exit
        for (auto& t : m_parallelThreads)
            if (t.joinable())
                t.join();

        FinishParallelThreads();
        TerminateThread();
    } // ~SerialThread
#endif
}; // class SerialThread
