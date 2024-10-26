#pragma once
#include "FireStarterGenerate.h"
#include "FireStarterComplete.h"
#include "FireStarterManager.h"
#include "CUDAThread.h"

class FireStarterBestStates {
private:
    TestedInstructions m_testedInstructions;
    FireStarterStates m_allStates;
    std::vector<FireStarterState*> m_bestStates;
    FireStarterSettings m_settings;
    size_t m_maxStates;
    size_t m_numStates;
    float m_worstResult;

public:
    inline bool GetBestState(FireStarterState& state)
    {
        if (!m_numStates)
            return false;
        FireStarterState* bestState = m_bestStates[0];
        m_numStates--;
        if (m_numStates)
            for (size_t i = 0; i < m_numStates; i++)
                m_bestStates[i] = m_bestStates[i + 1];
        m_worstResult = m_settings.m_startResult;
        m_bestStates[m_numStates] = bestState;
        state = *bestState;
        return true;
    } // GetBestState

    inline void AddState(const FireStarterState& state)
    {
        // Skip bad results entirely.
        float newResult = state.MaxResult();
        if (newResult >= m_worstResult)
            return;

        // Only add states with a unique instruction set.
        if (m_testedInstructions.count(state.m_program.OptimizedInstructionsData()))
            return;
        m_testedInstructions.insert(state.m_program.OptimizedInstructionsData());

        FireStarterState* newState = (m_numStates < m_maxStates) ? m_bestStates[m_numStates] : m_bestStates[--m_numStates];
        *newState = state;

        for (size_t i = 0; i < m_numStates; i++) {
            FireStarterState* curState = m_bestStates[i];
            float curResult = curState->MaxResult();
            if (curResult > newResult) {
                for (size_t j = i; j < m_numStates; j++) {
                    curState = m_bestStates[j];
                    m_bestStates[j] = newState;
                    newState = curState;
                }
                break;
            }
        }
        m_bestStates[m_numStates++] = newState;
    } // AddState

    inline float WorstResult(void)
    {
        return m_worstResult;
    } // WorstResult

    inline FireStarterBestStates(const FireStarterSettings& settings, size_t maxStates = FIRESTARTER_BESTSTATES) : m_settings(settings)
    {
        m_maxStates = maxStates;
        m_numStates = 0;
        m_worstResult = m_settings.m_startResult;
        m_allStates.resize(m_maxStates);
        m_bestStates.resize(m_maxStates);
        for (size_t i = 0; i < m_maxStates; i++) {
            m_allStates[i].InitState(settings);
            m_bestStates[i] = &m_allStates[i];
        }
    } // FireStarterBestStates
}; // FireStarterBestStates

class FireStarterExecute : public CUDAThread {
private:
    FireStarterPopulation* m_hostPopulation = nullptr;
    FireStarterPopulation* m_devicePopulation = nullptr;
    FireStarterPopulation* m_devicePopulation0 = nullptr;
    FireStarterPopulation* m_devicePopulation1 = nullptr;
    FireStarterGenerate* m_executeGenerate = nullptr;
    FireStarterManager* m_executeManager = nullptr;
    FireStarterJob* m_executeJob = nullptr;
    SerialThread m_compilerThread;
    CUmodule m_optimizeModule = nullptr;
    CUmodule m_evolveModule = nullptr;
    CUmodule m_speedTestModule = nullptr;
    CUfunction m_optimizeFunction = nullptr;
    CUfunction m_evolveFunction = nullptr;
    std::string m_optimizeCode;
    std::string m_evolveCode;
    std::string m_speedTestCode;
    size_t m_populationSize = 0;
    size_t m_evolutionsSize = 0;
    size_t m_initResultsSize = 0;
    size_t m_executeIndex = 0;

    void FinishPopulation(void);
    bool InitPopulation(const FireStarterSettings& settings);
    void ExecuteEvolvePass(FireStarterState& state, FireStarterBestStates& bestStates, unsigned int variation = 0);
    void ExecuteOptimizePass(FireStarterState& state, unsigned int variation = 0);
    void ExecuteOptimizePasses(FireStarterState& state);
    void ExecuteSmartOptimizePasses(FireStarterState& state);
    bool GenerateEvolver(void);
    bool GenerateOptimize(FireStarterState& state);
    bool GenerateSpeedTest(FireStarterState& state);
    bool Compile(FireStarterJob* &job);
    bool ExecuteJob(void);

public:
    void ExecuteCompileOptimize(const FireStarterState& initState);
    bool ExecuteGenerateEvolver(void);
    bool ExecuteGenerateOptimize(const FireStarterState& initState);
    bool ExecuteGenerateSpeedTest(const FireStarterState& initState);
    void ExecuteInitPopulation(const FireStarterState& state);
    void ExecuteEvolve(FireStarterState& state, FireStarterBestStates &bestStates);
    void ExecuteEvolveOptimize(FireStarterComplete* complete, FireStarterState& bestState);
    void ExecuteOptimize(FireStarterState& state);
    void ExecuteOptimizeCount(std::atomic<unsigned int>& evolveCount); // Must be async because the compiles come back out of order.
    void ExecuteRandom(void);
    void ExecuteFinish(void);
    FireStarterExecute(FireStarterManager* manager, size_t index = 0, int priority = 0);
    ~FireStarterExecute(void);
}; // class FireStarterExecute
