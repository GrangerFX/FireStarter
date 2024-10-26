#pragma once
#include "FireStarterGenerate.h"
#include "FireStarterComplete.h"
#include "FireStarterManager.h"
#include "CUDAThread.h"

class FireStarterBestResults {
private:
    std::vector<FireStarterResults*> m_allResults;
    std::vector<FireStarterResults*> m_bestResults;
    FireStarterSettings m_settings;
    size_t m_resultsSize;
    size_t m_maxResults;
    size_t m_numResults;
    float m_startResult;
    float m_worstResult;

public:
    inline const FireStarterResults* GetBestResult(void)
    {
        if (!m_numResults)
            return nullptr;
        FireStarterResults* bestResults = m_bestResults[0];
        m_numResults--;
        if (m_numResults)
            for (size_t i = 0; i < m_numResults; i++)
                m_bestResults[i] = m_bestResults[i + 1];
        else
            m_worstResult = m_settings.m_startResult;
        m_bestResults[m_numResults] = bestResults;
        return bestResults;
    } // GetBestResult

    inline void AddResult(const FireStarterResults* results)
    {
        float newResult = results->MaxResult(m_settings.m_variations);
        if (!m_numResults || (newResult >= m_worstResult)) {
            if (m_numResults < m_maxResults) {
                m_bestResults[m_numResults++]->CopyResults(m_settings, results);
                m_worstResult = newResult;
            }
            return;
        }

        FireStarterResults* newResults = (m_numResults < m_maxResults) ? m_bestResults[m_numResults] : m_bestResults[--m_numResults];
        newResults->CopyResults(m_settings, results);

        for (size_t i = 0; i < m_numResults; i++) {
            FireStarterResults* curResults = m_bestResults[i];
            float curResult = curResults->MaxResult(m_settings.m_variations);
            if (curResult > newResult) {
                for (size_t j = i; j < m_numResults; j++) {
                    curResults = m_bestResults[i];
                    m_bestResults[i] = newResults;
                    newResults = curResults;
                }
                m_bestResults[m_numResults++] = newResults;
                return;
            }
        }
    } // AddResult

    inline float WorstResult(void)
    {
        return m_worstResult;
    } // WorstResult

    inline FireStarterBestResults(const FireStarterSettings& settings, size_t maxResults = FIRESTARTER_BESTRESULTS) : m_settings(settings)
    {
        m_resultsSize = FireStarterResults::ResultsSize(m_settings);
        m_maxResults = maxResults;
        m_numResults = 0;
        m_startResult = m_settings.m_startResult;
        m_worstResult = m_startResult;
        m_allResults.resize(m_maxResults);
        m_bestResults.resize(m_maxResults);
        for (size_t i = 0; i < m_maxResults; i++) {
            m_allResults[i] = (FireStarterResults*) ::operator new(m_resultsSize);
            m_allResults[i]->InitResults(m_settings);
            m_bestResults[i] = m_allResults[i];
        }
    } // FireStarterBestResults

    inline ~FireStarterBestResults(void)
    {
        for (FireStarterResults* results : m_allResults)
            delete results;
    } // ~FireStarterBestResults
}; // FireStarterBestResults

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
    void ExecuteEvolvePass(FireStarterState& state, unsigned int variation = 0);
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
    void ExecuteEvolve(FireStarterState& state);
    void ExecuteEvolveOptimize(FireStarterComplete* complete, FireStarterState& bestState);
    void ExecuteOptimize(FireStarterState& state);
    void ExecuteOptimizeCount(std::atomic<unsigned int>& evolveCount); // Must be async because the compiles come back out of order.
    void ExecuteRandom(void);
    void ExecuteFinish(void);
    FireStarterExecute(FireStarterManager* manager, size_t index = 0, int priority = 0);
    ~FireStarterExecute(void);
}; // class FireStarterExecute
