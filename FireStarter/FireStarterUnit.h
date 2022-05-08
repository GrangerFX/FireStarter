#pragma once
#include "FireStarterState.h"
#include "FireStarterProcess.h"
#include "CUDAContext.h"
#include "SerialThread.h"

#define UNIT_INIT "UnitInit"
#define UNIT_EXECUTE "UnitExecute"
#define UNIT_UPDATE "UnitUpdate"
#define UNIT_STATES "UnitStates"

class FireStarterUnit : public SerialThread {
private:
    SimpleTimer m_timer;
    char* m_deviceResults = nullptr;
    FireStarterResults* m_hostResults = nullptr;
    FireStarterResults* m_deviceResults0 = nullptr;
    FireStarterResults* m_deviceResults1 = nullptr;
    FireStarterProcess* m_process = nullptr;
    FireStarterState m_allStates[PROGRAM_STATES * PROGRAM_UNITS];
    FireStarterState m_states[PROGRAM_STATES];
    FireStarterState m_bestState;
    CUDAContext* m_unitContext = nullptr;
    CUmodule m_evolveModule = nullptr;
    CUmodule m_unitsModule = nullptr;
    CUmodule m_optimizeModule = nullptr;
    CUfunction m_evolveFunction = nullptr;
    CUfunction m_optimizeFunction[PROGRAM_STATES] = {};
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
    void OptimizeGenerations(unsigned int index, unsigned int population, unsigned int iterations, unsigned int generations, unsigned int seed, unsigned int init);
    void EvolveExecute(void);
    void UnitExecute(void);
    void OptimizeExecute(void);
    bool LoadCode(void);
    void Deallocate(void);
    bool Allocate(void);

public:
    unsigned int Index(void);
    void Packetize(FireStarterPacket& packet);
    void PacketizeAllStates(FireStarterPacket& packet);
    void InitUnit(unsigned int evolveMode, unsigned int unitIndex = 0, FireStarterState* state = nullptr); // May be reinitialized with a different evolveMode in the future.
    void Execute(void);
    bool Update(FireStarterState* states, FireStarterState& bestState, float& bestResult);
    void States(FireStarterState* states);
    void ClientCommand(void);
    FireStarterUnit(FireStarterProcess* process = nullptr);
    ~FireStarterUnit(void);
}; // class FireStarterUnit