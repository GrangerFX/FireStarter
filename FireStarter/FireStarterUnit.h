#pragma once
#include "FireStarterState.h"
#include "FireStarterProcess.h"
#include "CUDAContext.h"
#include "SerialThread.h"

#define UNIT_INIT "UnitInit"
#define UNIT_EXECUTE "UnitExecute"
#define UNIT_UPDATE "UnitUpdate"

class FireStarterUnit : public SerialThread {
private:
    SimpleTimer m_timer;
    char* m_deviceResults = nullptr;
    char* m_hostResults = nullptr;
    FireStarterResults* m_deviceResults0 = nullptr;
    FireStarterResults* m_deviceResults1 = nullptr;
    FireStarterResults* m_hostResults0 = nullptr;
    FireStarterResults* m_hostResults1 = nullptr;
    FireStarterProcess* m_process = nullptr;
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
    unsigned int m_unitDevice = 0;
    unsigned int m_seed = 0;
    bool m_codeLoaded = false;

    void ClearResults(void);
    void EvolveGenerate(void);
    void UnitGenerate(void);
    void OptimizeGenerate(bool compile = true);
    void EvolveGenerations(unsigned int population, unsigned int iterations, unsigned int generations, unsigned int generation);
    void UnitGenerations(unsigned int index, unsigned int population, unsigned int iterations, unsigned int generations);
    void OptimizeGenerations(unsigned int population, unsigned int iterations, unsigned int generations, unsigned int generation);
    void EvolveExecute(void);
    void UnitExecute(void);
    void OptimizeExecute(void);
    bool LoadCode(void);
    void Deallocate(void);
    bool Allocate(void);

public:
    void Packetize(FireStarterPacket& packet);
    void InitUnit(unsigned int evolveMode, unsigned int unitIndex = 0, FireStarterState* state = nullptr); // May be reinitialized with a different evolveMode in the future.
    void Execute(void);
    bool Update(FireStarterState& bestState, std::string& bestCode, float& bestResult);
    void ProcessCommand(void);
    FireStarterUnit(FireStarterProcess* process = nullptr);
    ~FireStarterUnit(void);
}; // class FireStarterUnit