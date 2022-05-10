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
public:
    class EvolveSettings {
    public:
        unsigned int m_evolveMode;
        unsigned int m_evolveUnits;
        unsigned int m_evolveStates;
        unsigned int m_evolvePopulation;
        unsigned int m_evolveIterations;
        unsigned int m_evolveGenerations;
        unsigned int m_evolvePrecision;

        inline EvolveSettings(unsigned int evolveMode = 0)
        {
            m_evolveMode = evolveMode;
            switch (m_evolveMode) {
            case FIRESTARTER_EVOLVE:
                m_evolveUnits = EVOLVE_UNITS;
                m_evolveStates = EVOLVE_STATES;
                m_evolvePopulation = EVOLVE_POPULATION;
                m_evolveIterations = EVOLVE_ITERATIONS;
                m_evolveGenerations = EVOLVE_GENERATIONS;
                m_evolvePrecision = EVOLVE_PRECISION;
                break;
            case FIRESTARTER_OPTIMIZE:
                m_evolveUnits = OPTIMIZE_UNITS;
                m_evolveStates = OPTIMIZE_STATES;
                m_evolvePopulation = OPTIMIZE_POPULATION;
                m_evolveIterations = OPTIMIZE_ITERATIONS;
                m_evolveGenerations = OPTIMIZE_GENERATIONS;
                m_evolvePrecision = OPTIMIZE_PRECISION;
                break;
            case FIRESTARTER_UNIT:
                m_evolveUnits = UNIT_UNITS;
                m_evolveStates = UNIT_STATES;
                m_evolvePopulation = UNIT_POPULATION;
                m_evolveIterations = UNIT_ITERATIONS;
                m_evolveGenerations = UNIT_GENERATIONS;
                m_evolvePrecision = UNIT_PRECISION;
                break;
            case FIRESTARTER_PROCESS:
                m_evolveUnits = PROCESS_UNITS;
                m_evolveStates = PROCESS_STATES;
                m_evolvePopulation = PROCESS_POPULATION;
                m_evolveIterations = PROCESS_ITERATIONS;
                m_evolveGenerations = PROCESS_GENERATIONS;
                m_evolvePrecision = PROCESS_PRECISION;
                break;
            default:
                m_evolveUnits = 0;
                m_evolveStates = 0;
                m_evolvePopulation = 0;
                m_evolveIterations = 0;
                m_evolveGenerations = 0;
                m_evolvePrecision = 0;
                break;
            }
        }
    }; // class EvolveSettings

private:
    SimpleTimer m_timer;
    char* m_deviceResults = nullptr;
    FireStarterResults* m_hostResults = nullptr;
    FireStarterResults* m_deviceResults0 = nullptr;
    FireStarterResults* m_deviceResults1 = nullptr;
    FireStarterProcess* m_process = nullptr;
    std::vector<FireStarterState> m_allStates;
    std::vector<FireStarterState> m_states;
    FireStarterState m_bestState;
    CUDAContext* m_unitContext = nullptr;
    CUmodule m_evolveModule = nullptr;
    CUmodule m_unitsModule = nullptr;
    CUmodule m_optimizeModule = nullptr;
    CUfunction m_evolveFunction = nullptr;
    std::vector<CUfunction> m_optimizeFunction;
    std::string m_evolveCode;
    std::string m_optimizeCode;
    EvolveSettings m_settings;
    size_t m_resultsSize = 0;
    unsigned int m_unitIndex = 0;
    unsigned int m_evolveGeneration = 0;
    unsigned int m_seed = 0;
    bool m_codeLoaded = false;

    void ClearResults(void);
    void EvolveGenerate(void);
    void UnitGenerate(void);
    void OptimizeGenerate(bool compile = true);
    void EvolveGenerations(unsigned int generation);
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
    void InitUnit(unsigned int index, const EvolveSettings& settings, FireStarterState* state = nullptr);
    void Execute(void);
    bool Update(FireStarterState* states, FireStarterState& bestState, float& bestResult);
    void Sync(FireStarterState* states);
    void ClientCommand(void);
    FireStarterUnit(FireStarterProcess* process = nullptr);
    ~FireStarterUnit(void);
}; // class FireStarterUnit