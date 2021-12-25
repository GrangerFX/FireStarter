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
    std::thread m_thread;
    std::mutex m_mutex;
    std::queue<std::function<void(void)>> m_workQueue;
    volatile bool m_terminate;
    Semaphore m_semaphore;

    void Thread(void);
public:
    void Dispatch(std::function<void(void)> work);
    void Terminate(void);
    SerialThread(void);
    ~SerialThread(void);
}; // class SerialThread