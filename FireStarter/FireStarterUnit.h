#pragma once
#include "FireStarterState.h"
#include "FireStarterProcess.h"
#include "CUDAContext.h"
#include "SerialThread.h"

#define UNIT_INIT "UnitInit"
#define UNIT_EXECUTE "UnitExecute"
#define UNIT_UPDATE "UnitUpdate"
#define UNIT_SYNC "UnitSync"

class FireStarterUnit : public SerialThread {
private:
    SimpleTimer m_timer;
    char* m_deviceResults = nullptr;
    FireStarterResults* m_hostResults = nullptr;
    FireStarterResults* m_deviceResults0 = nullptr;
    FireStarterResults* m_deviceResults1 = nullptr;
    FireStarterProcess* m_process = nullptr;
    FireStarterState m_bestState;
    std::vector<FireStarterState> m_allStates;
    std::vector<FireStarterState> m_states;
    CUDAContext* m_unitContext = nullptr;
    CUmodule m_evolveModule = nullptr;
    CUmodule m_unitsModule = nullptr;
    CUmodule m_optimizeModule = nullptr;
    CUfunction m_evolveFunction = nullptr;
    std::vector<CUfunction> m_optimizeFunction;
    std::string m_evolveCode;
    std::string m_optimizeCode;
    FireStarterSettings m_settings;
    size_t m_resultsSize = 0;
    unsigned int m_unitIndex = 0;
    unsigned int m_evolveGeneration = 0;
    unsigned int m_seed = 0;
    bool m_client = false;
    bool m_codeLoaded = false;

    void ClearResults(void);
    void EvolveGenerate(void);
    void UnitCode(std::string &code);
    void UnitGenerate(void);
    void OptimizeGenerate(bool compile = true);
    void EvolveGenerations(unsigned int seed, unsigned int init);
    void OptimizeGenerations(unsigned int index, unsigned int seed, unsigned int init);
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
    void InitUnit(unsigned int index, const FireStarterState& state);
    void Execute(void);
    bool Update(FireStarterState* states, FireStarterState& bestState, float& bestResult);
    void Sync(FireStarterState* states);
    void Client(void);
    FireStarterUnit(FireStarterProcess* process = nullptr);
    ~FireStarterUnit(void);
}; // class FireStarterUnit