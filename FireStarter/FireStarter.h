#pragma once
#include "Defines.h"
#include <time.h>
#include <windows.h>
#include <string>

#define PROGRAM_DATA 8
#define PROGRAM_INSTRUCTIONS 16
#define PROGRAM_ITERATIONS 16

typedef enum {
    Instruction_noop = 0,
    Instruction_add,        // dst = srcA + srcB;
    Instruction_subtract,   // dst = srcA - srcB;
    Instruction_multiply,   // dst = srcA * srcB;
    Instruction_divide,     // dst = srcA / srcB;
    Instruction_max,        // dst = srcA >= srcB ? srcA : srcB;
    Instruction_min,        // dst = srcA <= srcB ? srcA : srcB;
    NumInstructions
} Instruction;

typedef struct {
    Instruction instruction;
    int srcA;
    int srcB;
    int dst;
} ProgramInstruction;

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
	uchar4 *base;			        // Pointer to the alligned native pixel format buffer
	long rowbytes;					// Number of bytes per row
	unsigned long width;			// Number of columns
	unsigned long height;			// Number of rows
} FrameBuffer;

class FireStarter {
public:
    SimpleTimer timer;
    FrameBuffer theBuffer;
    std::string program;
    ProgramInstruction instructions[PROGRAM_INSTRUCTIONS];
    float data[PROGRAM_DATA];
    long long generation;

    bool haveDoubles;
    int numSMs;                     // number of multiprocessors

    char statusString[1024];

    void InitFrameBuffer(FrameBuffer &buffer, unsigned long width, unsigned long height);
    void FreeFrameBuffer(FrameBuffer &buffer);
    void CompileAndRun(const char *source, uchar4 *buffer, unsigned int width, unsigned int height);
    void RandomProgram(void);
    void MakeProgram(void);
    void RenderImage(void);
    void Draw(HWND hwnd);
    void Init(void);
    FireStarter(void);
}; // class FireStarter