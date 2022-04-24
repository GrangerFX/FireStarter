#pragma once
#include "FireStarterState.h"
#include "CUDAContext.h"
#include "SerialThread.h"

class FireStarterUnit : public SerialThread {
public:
    SimpleTimer m_timer;
    char* m_deviceResults = nullptr;
    char* m_hostResults = nullptr;
    FireStarterResults* m_deviceResults0 = nullptr;
    FireStarterResults* m_deviceResults1 = nullptr;
    FireStarterResults* m_hostResults0 = nullptr;
    FireStarterResults* m_hostResults1 = nullptr;
    FireStarterState m_states[PROGRAM_STATES];
    FireStarterState m_bestState;
    CUDAContext* m_unitContext = nullptr;
    CUmodule m_evolveModule = nullptr;
    CUmodule m_unitsModule = nullptr;
    CUmodule m_optimizeModule = nullptr;
    CUfunction m_evolveFunction = nullptr;
    CUfunction m_unitFunction[PROGRAM_STATES] = {};
    CUfunction m_optimizeFunction = nullptr;
    std::string m_evolveCode;
    std::string m_optimizeCode;
    size_t m_resultsSize = 0;
    unsigned int m_evolveMode = 0;
    unsigned int m_evolveGeneration = 0;
    unsigned int m_unitIndex = 0;
    unsigned int m_seed = 0;
    bool m_codeLoaded = false;
    volatile bool m_quit = false;

    void GenerateEvolve(void);
    void GenerateUnits(void);
    void GenerateOptimize(void);
    void EvolveGenerations(unsigned int population, unsigned int iterations, unsigned int generations, unsigned int generation);
    void UnitsGenerations(unsigned int index, unsigned int population, unsigned int iterations, unsigned int generations, unsigned int generation);
    void OptimizeGenerations(unsigned int population, unsigned int iterations, unsigned int generations, unsigned int generation);
    void ExecuteEvolve(void);
    void ExecuteUnits(void);
    void ExecuteOptimize(void);
    void Execute(void);
    void UpdateCode(std::string& code);
    bool LoadCode(void);
    void InitUnit(unsigned int programMode, int device = 0);
    void FinishUnit(void);
    FireStarterUnit(unsigned int unitIndex = 0);
    ~FireStarterUnit(void);
}; // class FireStarterUnit