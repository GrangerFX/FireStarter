#pragma once

#include <time.h>
#include <string>
#include <cstdarg>
#include <sstream>
#include <iomanip>
#include "CUDAErrors.h"
#include "SerialThread.h"
#include "SimpleTimer.h"

inline std::string CurrentDate(void)
{
    time_t currentTime = time(nullptr);
    tm localTime;
    std::stringstream sstream;
    localtime_s(&localTime, &currentTime);
    sstream << std::put_time(&localTime, "%c %Z");
    return sstream.str();
} // CurrentDate

inline std::string FileNameDate(time_t fileTime)
{
    if (!fileTime)
        fileTime = SimpleTimer::RunSecond();
    struct tm tm_struct;
    struct tm* tm = &tm_struct;
    errno_t err = localtime_s(tm, &fileTime);
    if (err)
        return "";
    return Format("%04d-%02d-%02d_%02d-%02d-%02d", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, tm->tm_hour, tm->tm_min, tm->tm_sec);
} // FileNameDate

inline std::string FileNameDate(void)
{
    static std::string s_fileNameDate;
    if (s_fileNameDate.empty()) {
        static std::mutex s_mtx;
        s_mtx.lock();
        if (s_fileNameDate.empty())
            s_fileNameDate = FileNameDate(SimpleTimer::RunSecond());
        s_mtx.unlock();
    }
    return s_fileNameDate;
} // FileNameDate
