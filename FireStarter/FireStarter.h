#pragma once
#include "Defines.h"
#include <time.h>
#include <windows.h>

class SimpleTimer {
public:
    time_t m_second;
    long m_nanosecond;
    
    inline void Start(void)
    {
        timespec time;
        timespec_get(&time, TIME_UTC);
        m_second = time.tv_sec;
        m_nanosecond = time.tv_nsec;
    } // Start
    
    inline double Duration(void)
    {
        timespec time;
        timespec_get(&time, TIME_UTC);
        return (double)(time.tv_sec - m_second) + (double)(time.tv_nsec - m_nanosecond) * 0.000000001;
    } // Duration
    
    inline SimpleTimer(void)
    {
        Start();
    } // Start
}; // SimpleTimer
    
typedef struct FrameBuffer {
	unsigned char *base;			// Pointer to the alligned native pixel format buffer
	long rowbytes;					// Number of bytes per row
	unsigned long width;			// Number of columns
	unsigned long height;			// Number of rows
} FrameBuffer;

class FireStarter {
public:
    SimpleTimer timer;
    FrameBuffer theBuffer;

    bool haveDoubles;
    int numSMs;                     // number of multiprocessors

    char statusString[1024];

    void InitFrameBuffer(FrameBuffer &buffer, unsigned long width, unsigned long height);
    void FreeFrameBuffer(FrameBuffer &buffer);
    void CompileAndRun(const char *source, unsigned char *buffer, unsigned int width, unsigned int height);
    void RenderImage(void);
    void Draw(HWND hwnd);
    void InitData(int argc, char **argv);
    FireStarter(void);
}; // class FireStarter