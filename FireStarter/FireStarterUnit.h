#pragma once
#include "FireStarterGenerate.h"
#include "FireStarterProcess.h"
#include "CUDAContext.h"
#include "SerialThread.h"

#define UNIT_INIT    "UnitInit"
#define UNIT_EXECUTE "UnitExecute"
#define UNIT_UPDATE  "UnitUpdate"
#define UNIT_SYNC    "UnitSync"

#define OPTIMIZE_LOAD_DATA 0

class FireStarterUnit : public SerialThread {
private:
    class FireStarterEvolveState {
    public:
        char* m_deviceResults = nullptr;
        char* m_deviceEvolutions = nullptr;
        FireStarterResults* m_hostResults = nullptr;
        FireStarterResults* m_deviceResults0 = nullptr;
        FireStarterResults* m_deviceResults1 = nullptr;
        FireStarterEvolutions* m_hostEvolutions = nullptr;
        FireStarterEvolutions* m_deviceEvolutions0 = nullptr;
        FireStarterEvolutions* m_deviceEvolutions1 = nullptr;
        CUfunction m_optimizeFunction = nullptr;
        FireStarterState m_state;
        unsigned int m_stateID = 0;
        unsigned int m_stateSeed = 0;
    }; // class FireStarterEvolveState

    SimpleTimer m_timer;
    FireStarterProcess* m_process = nullptr;
    FireStarterGenerate* m_unitGenerate = nullptr;
    std::vector<FireStarterEvolveState> m_evolveStates;
    std::vector<FireStarterState> m_allStates;
    CUDAContext* m_unitContext = nullptr;
    CUmodule m_generateModule = nullptr;
    CUmodule m_evolveModule = nullptr;
    CUmodule m_optimizeModule = nullptr;
    CUfunction m_fireGenerateEvaluateFunction = nullptr;
    CUfunction m_evolveFunction = nullptr;
    std::string m_fireGenerateCode;
    std::string m_evolveCode;
    std::string m_optimizeCode;
    FireStarterSettings m_settings;
    size_t m_resultsSize = 0;
    size_t m_evolutionsSize = 0;
    unsigned int m_unitIndex = 0;
    unsigned int m_evolveGeneration = 0;
    unsigned int m_bestStateIndex = 0;
    bool m_server = false;
    bool m_codeLoaded = false;
    bool m_bestStateDirty = false;

    const FireStarterState& BestState(void) const;
    void InitEvolveStates(const FireStarterState& state);
    void DeallocateEvolveStates(void);
    bool AllocateEvolveStates(void);
    void UpdateEvolveStates(void);
    void CompileGenerate(void);
    void EvolveGenerate(void);
    void OptimizeGenerate(void);
    void UnitGenerate(void);
    void EvolveGenerations(unsigned int init);
    void OptimizeGenerations(unsigned int init);
    void EvolveExecute(void);
    void OptimizeExecute(void);
    void UnitExecute(void);
    bool LoadCode(void);
    void Deallocate(void);
    void Allocate(const FireStarterState& state);

public:
    unsigned int Index(void);
    void Packetize(FireStarterPacket& packet);
    void PacketizeAllStates(FireStarterPacket& packet);
    void GetState(FireStarterState* state, size_t index);
    void InitUnit(unsigned int index, const FireStarterState& initState);
    void Execute(void);
    void Update(FireStarterState* states);
    void Sync(FireStarterState* states);
    void Start(void);
    void Stop(void);
    void Client(void);
    FireStarterUnit(FireStarterProcess* process = nullptr);
    ~FireStarterUnit(void);
}; // class FireStarterUnit