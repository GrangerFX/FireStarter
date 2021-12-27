#pragma once

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