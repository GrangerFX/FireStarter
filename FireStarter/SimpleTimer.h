#pragma once
#include <time.h>

class SimpleTimer {
private:
    inline static time_t s_second = 0;
    inline static long s_nanosecond = 0;
    time_t m_second;
    long m_nanosecond;
public:

    inline void Start(void)
    {
        timespec time;
        timespec_get(&time, TIME_UTC);
        m_second = time.tv_sec;
        m_nanosecond = time.tv_nsec;
    } // Start

    inline double Duration(void) const
    {
        timespec time;
        timespec_get(&time, TIME_UTC);
        return (double)(time.tv_sec - m_second) + (double)(time.tv_nsec - m_nanosecond) * 0.000000001;
    } // Duration

    inline static double RunDuration(void)
    {
        timespec time;
        timespec_get(&time, TIME_UTC);
        return (double)(time.tv_sec - s_second) + (double)(time.tv_nsec - s_nanosecond) * 0.000000001;
    } // RunDuration

    inline std::string StartDate(void) const
    {
        std::stringstream sstream;
        tm localTime;
        localtime_s(&localTime, &m_second);
        sstream << std::put_time(&localTime, "%c %Z");
        return sstream.str();
    } // StartDate

    inline static std::string RunDate(void)
    {
        std::stringstream sstream;
        tm localTime;
        localtime_s(&localTime, &s_second);
        sstream << std::put_time(&localTime, "%c %Z");
        return sstream.str();
    } // RunDate

    inline time_t StartSecond(void) const
    {
        return m_second;
    } // StartSecond

    inline static time_t RunSecond(void)
    {
        return s_second;
    } // RunSecond

    inline SimpleTimer(void)
    {
        // Synchronize the start times of all timers by default.
        if (!s_second && !s_nanosecond) {
            static std::mutex s_mtx;
            s_mtx.lock();
            if (!s_second && !s_nanosecond) {
                timespec time;
                timespec_get(&time, TIME_UTC);
                s_nanosecond = time.tv_nsec;
                s_second = time.tv_sec;
            }
            s_mtx.unlock();
        }
        m_second = s_second;
        m_nanosecond = s_nanosecond;
    } // Start
}; // SimpleTimer