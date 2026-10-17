#pragma once
#include <time.h>
#include <iomanip>
#include <sstream>
#include <mutex>

class SimpleTimer {
private:
    static timespec InitRunTime(void)
    {
        timespec runTime;
        timespec_get(&runTime, TIME_UTC);
        return runTime;
    } // InitRunTime

    inline static const timespec s_runTime = InitRunTime();
    time_t m_second = s_runTime.tv_sec;
    long m_nanosecond = s_runTime.tv_nsec;

public:
    inline double Start(void)
    {
        timespec time;
        timespec_get(&time, TIME_UTC);
        double duration = (double)(time.tv_sec - m_second) + (double)(time.tv_nsec - m_nanosecond) * 0.000000001;
        m_second = time.tv_sec;
        m_nanosecond = time.tv_nsec;
        return duration;
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
        return (double)(time.tv_sec - s_runTime.tv_sec) + (double)(time.tv_nsec - s_runTime.tv_nsec) * 0.000000001;
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
        localtime_s(&localTime, &s_runTime.tv_sec);
        sstream << std::put_time(&localTime, "%c %Z");
        return sstream.str();
    } // RunDate

    inline time_t StartSecond(void) const
    {
        return m_second;
    } // StartSecond

    inline static time_t RunSecond(void)
    {
        return s_runTime.tv_sec;
    } // RunSecond

    inline SimpleTimer(bool start = true)
    {
        // Synchronize the start times of all timers by default.
        if (start)
            Start();
    } // SimpleTimer
}; // SimpleTimer