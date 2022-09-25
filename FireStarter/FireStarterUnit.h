#pragma once
#include "FireStarterGenerate.h"
#include "FireStarterProcess.h"
#include "FireStarterCompiler.h"
#include "CUDAContext.h"
#include "CUDACompile.h"
#include "SerialThread.h"

#define UNIT_INIT    "UnitInit"
#define UNIT_EXECUTE "UnitExecute"
#define UNIT_UPDATE  "UnitUpdate"
#define UNIT_SYNC    "UnitSync"

#define OPTIMIZE_LOAD_DATA 0

class FireStarterUnit : public SerialThread {
private:

    class FireStarterContext {
    public:
        FireStarterGenerate* m_generate = nullptr;
        char* m_deviceResults = nullptr;
        char* m_deviceEvolutions = nullptr;
        FireStarterResults* m_deviceResults0 = nullptr;
        FireStarterResults* m_deviceResults1 = nullptr;
        FireStarterEvolutions* m_deviceEvolutions0 = nullptr;
        FireStarterEvolutions* m_deviceEvolutions1 = nullptr;
        CUmodule m_generateModule = nullptr;
        CUmodule m_evolveModule = nullptr;
        CUmodule m_optimizeModule = nullptr;
        CUfunction m_evolveFunction = nullptr;
        CUfunction m_optimizeFunction = nullptr;
        CUDAContext* m_CUDAContext = nullptr;
        size_t m_resultsSize = 0;
        size_t m_evolutionsSize = 0;
        unsigned int m_device = 0;
        unsigned int m_firstMember = 0;
        unsigned int m_lastMember = 0;

        inline void SetContext(void) const
        {
            m_CUDAContext->SetContext();
        } // SetContext

        inline void Syncronize(void) const
        {
            SetContext();
            checkCUDAErrors(cudaStreamSynchronize(m_CUDAContext->Stream()));
        } // Syncronize

        inline void EvolveCompile(const std::string& evolveCode)
        {
            if (!m_evolveFunction) {
                m_CUDAContext->SetContext();
                if (CUDACompile::CompileProgram(m_evolveModule, evolveCode, "Evolve"))
                    m_evolveFunction = CUDACompile::GetFunction(m_evolveModule, "Evolve");
            }
        } // EvolveCompile

        inline void OptimizeCompile(const std::string& optimizeCode)
        {
            m_CUDAContext->SetContext();
            if (CUDACompile::CompileProgram(m_optimizeModule, optimizeCode, "Optimize"))
                m_optimizeFunction = CUDACompile::GetFunction(m_optimizeModule, "Optimize");
        } // OptimizeCompile

        inline bool InitContext(unsigned int device, unsigned int firstMember, unsigned int lastMember, FireStarterResults* hostResults, FireStarterEvolutions* hostEvolutions, const FireStarterSettings& settings)
        {
            m_device = device;
            m_firstMember = firstMember;
            m_lastMember = lastMember;
            if (m_CUDAContext)
                m_CUDAContext->SetContext();
            else
                m_CUDAContext = new CUDAContext(m_device);
            if (!m_generate)
                m_generate = new FireStarterGenerate(m_CUDAContext);

            CUstream stream = m_CUDAContext->Stream();
            size_t resultsSize = FireStarterResults::ResultsSize(settings.m_population, settings.m_registers, settings.m_variations);
            if (m_resultsSize != resultsSize) {
                m_resultsSize = resultsSize;
                if (m_deviceResults) {
                    checkCUDAErrors(cudaFreeAsync(m_deviceResults, stream));
                    m_deviceResults = nullptr;
                    m_deviceResults0 = nullptr;
                    m_deviceResults1 = nullptr;
                }
                if (m_resultsSize) {
                    checkCUDAErrors(cudaMallocAsync(&m_deviceResults, m_resultsSize * 2, stream));
                    m_deviceResults0 = (FireStarterResults*)(m_deviceResults);
                    m_deviceResults1 = (FireStarterResults*)(m_deviceResults + m_resultsSize);
                    checkCUDAErrors(cudaMemcpy(m_deviceResults0, hostResults, m_resultsSize, cudaMemcpyHostToDevice));
                    checkCUDAErrors(cudaMemcpy(m_deviceResults1, hostResults, m_resultsSize, cudaMemcpyHostToDevice));
                }
            }

            size_t evolutionsSize = (settings.m_mode == FIRESTARTER_CODE) ? FireStarterEvolutions::EvolutionsSize(settings.m_population, settings.m_instructions) : 0;
            if (m_evolutionsSize != evolutionsSize) {
                m_evolutionsSize = evolutionsSize;
                if (m_deviceEvolutions) {
                    checkCUDAErrors(cudaFreeAsync(m_deviceEvolutions, stream));
                    m_deviceEvolutions = nullptr;
                    m_deviceEvolutions0 = nullptr;
                    m_deviceEvolutions1 = nullptr;
                }
                if (m_evolutionsSize) {
                    checkCUDAErrors(cudaMallocAsync(&m_deviceEvolutions, m_evolutionsSize * 2, stream));
                    m_deviceEvolutions0 = (FireStarterEvolutions*)(m_deviceEvolutions);
                    m_deviceEvolutions1 = (FireStarterEvolutions*)(m_deviceEvolutions + m_evolutionsSize);
                    checkCUDAErrors(cudaMemcpy(m_deviceEvolutions0, hostEvolutions, m_evolutionsSize, cudaMemcpyHostToDevice));
                    checkCUDAErrors(cudaMemcpy(m_deviceEvolutions1, hostEvolutions, m_evolutionsSize, cudaMemcpyHostToDevice));
                }
            }
            return true;
        } // InitContext

        inline FireStarterContext(void)
        {
        } // FireStarterContext

        inline ~FireStarterContext(void)
        {
            if (m_CUDAContext) {
                m_CUDAContext->SetContext();
                if (m_evolveModule)
                    checkCUDAErrors(cuModuleUnload(m_evolveModule));
                if (m_optimizeModule)
                    checkCUDAErrors(cuModuleUnload(m_optimizeModule));
                delete m_generate;
                delete m_CUDAContext;
            }
        } // FireStarterContext
    }; // class FireStarterContext

    SimpleTimer m_timer;
    FireStarterProcess* m_process = nullptr;
    FireStarterCompilerManager* m_compilerManager = nullptr;
    std::vector<FireStarterContext> m_contexts;
    std::vector<FireStarterState> m_allStates;
    std::string m_evolveCode;
    std::string m_optimizeCode;
    FireStarterSettings m_settings;
    FireStarterState m_initState;
    FireStarterState m_state;
    FireStarterResults* m_hostResults = nullptr;
    FireStarterEvolutions* m_hostEvolutions = nullptr;
    size_t m_resultsSize = 0;
    size_t m_evolutionsSize = 0;
    unsigned int m_unitIndex = 0;
    unsigned int m_stateID = 0;
    unsigned int m_gpus = 0;
    unsigned int m_firstVariation = 0;
    unsigned int m_lastVariation = 0;
    bool m_server = false;
    bool m_codeLoaded = false;

    void UpdateEvolveStates(void);
    void EvolveGenerate(void);
    void OptimizeGenerate(void);
    void UnitGenerate(void);
    void SyncContexts(void);
    void EvolveGenerations(unsigned int forceInit, unsigned int firstVariation, unsigned int lastVariation);
    void OptimizeGenerations(unsigned int forceInit, unsigned int firstVariation, unsigned int lastVariation);
    void OptimizeVariations(unsigned int forceInit);
    void EvolveExecute(void);
    void OptimizeExecute(void);
    void UnitExecute(void);
    void RandomExecute(void);
    bool LoadCode(void);
    void Deallocate(void);
    void Allocate(void);

public:
    unsigned int Index(void);
    void Packetize(FireStarterPacket& packet);
    void PacketizeAllStates(FireStarterPacket& packet);
    void GetState(FireStarterState& state);
    std::string& GetEvolveCode(void);
    std::string& GetOptimizeCode(void);
    bool JobCompile(FireStarterCompilerJob* job);
    bool JobExecute(FireStarterCompilerJob* job, std::atomic<float>& atomicResult, bool skipVariations = true);
    void StartRandom(unsigned int index, const FireStarterState& state, FireStarterCompilerManager *manager);
    bool FinishRandom(void);
    void InitUnit(unsigned int index, const FireStarterState& initState);
    void Execute(void);
    void Update(FireStarterState* states);
    void Sync(FireStarterState* allStates);
    void Start(void);
    void Stop(void);
    void Client(void);
    FireStarterUnit(FireStarterProcess* process = nullptr);
    FireStarterUnit(unsigned int gpus);
    ~FireStarterUnit(void);
}; // class FireStarterUnit