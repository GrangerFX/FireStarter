#pragma once
#include "FireStarterState.h"
#include "SerialThread.h"

class FireStarterUnit : public SerialThread {
public:
    SimpleTimer m_timer;
    char* m_deviceResults;
    char* m_hostResults;
    FireStarterResults* m_deviceResults0;
    FireStarterResults* m_deviceResults1;
    FireStarterResults* m_hostResults0;
    FireStarterResults* m_hostResults1;
    FireStarterState m_states[PROGRAM_STATES];
    FireStarterState m_bestState;
    CUdevice m_unitDevice;
    CUcontext m_unitContext;
    CUstream m_unitStream;
    CUmodule m_evolveModule;
    CUmodule m_unitsModule;
    CUmodule m_optimizeModule;
    CUfunction m_evolveFunction;
    CUfunction m_unitFunction[PROGRAM_STATES];
    CUfunction m_optimizeFunction;
    std::string m_evolveCode;
    std::string m_unitsCode;
    std::string m_unitCode;
    std::string m_optimizeCode;
    size_t m_resultsSize;
    unsigned int m_evolveMode;
    unsigned int m_evolveGeneration;
    unsigned int m_unitIndex;
    unsigned int m_seed;
    volatile bool m_quit;

    void GenerateEvolve(void);
    void GenerateUnits(void);
    void GenerateOptimize(void);
    void EvolveGenerations(unsigned int population, unsigned int iterations, unsigned int generations, unsigned int generation);
    void UnitsGenerations(unsigned int version, unsigned int population, unsigned int iterations, unsigned int generations, unsigned int generation);
    void OptimizeGenerations(unsigned int population, unsigned int iterations, unsigned int generations, unsigned int generation);
    void ExecuteEvolve(void);
    void ExecuteUnits(void);
    void ExecuteOptimize(void);
    void Execute(void);
    void UpdateProgram(FireStarterState*& bestState, unsigned int*& generation);
    void UpdateCode(std::string& code);
    void InitUnit(unsigned int programMode);
    void FinishUnit(void);
    FireStarterUnit(unsigned int unitIndex, CUdevice device, const std::string& evolveCode, const std::string& optimizeCode);
    ~FireStarterUnit(void);
}; // class FireStarterUnit