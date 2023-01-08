#pragma once
#include "FireStarterGenerate.h"
#include "FireStarterProcess.h"
#include "FireStarterCompile.h"
#include "FireStarterEvolutions.h"
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
        char* m_devicePopulation = nullptr;
        char* m_deviceEvolutions = nullptr;
        FireStarterPopulation* m_devicePopulation0 = nullptr;
        FireStarterPopulation* m_devicePopulation1 = nullptr;
        FireStarterEvolutions* m_deviceEvolutions0 = nullptr;
        FireStarterEvolutions* m_deviceEvolutions1 = nullptr;
        CUmodule m_generateModule = nullptr;
        CUmodule m_evolveModule = nullptr;
        CUmodule m_optimizeModule = nullptr;
        CUfunction m_evolveFunction = nullptr;
        CUfunction m_optimizeFunction = nullptr;
        CUDAContext* m_CUDAContext = nullptr;
        size_t m_populationSize = 0;
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
            m_CUDAContext->SetContext();
            m_CUDAContext->Synchronize();
        } // Syncronize

        inline void CodeCompile(const std::string& evolveCode)
        {
            if (!m_evolveFunction) {
                m_CUDAContext->SetContext();
                if (CUDACompile::CompileProgram(m_evolveModule, evolveCode, "FireInterpreter"))
                    m_evolveFunction = CUDACompile::GetFunction(m_evolveModule, "Interpreter");
            }
        } // CodeCompile

        inline void OptimizeCompile(const std::string& optimizeCode)
        {
            m_CUDAContext->SetContext();
            if (CUDACompile::CompileProgram(m_optimizeModule, optimizeCode, "FireOptimizer"))
                m_optimizeFunction = CUDACompile::GetFunction(m_optimizeModule, "Optimizer");
        } // OptimizeCompile

        inline bool InitContext(unsigned int device, unsigned int firstMember, unsigned int lastMember, FireStarterPopulation* hostResults, FireStarterEvolutions* hostEvolutions, const FireStarterSettings& settings)
        {
            m_device = device;
            m_firstMember = firstMember;
            m_lastMember = lastMember;
            if (!m_CUDAContext)
                m_CUDAContext = new CUDAContext(m_device);
            m_CUDAContext->SetContext();

            CUstream stream = m_CUDAContext->Stream();

            size_t evolutionsSize = 0;
            size_t populationSize = 0;
            if (settings.m_mode == FIRESTARTER_CODE)
                evolutionsSize = FireStarterEvolutions::EvolutionsSize(settings.m_population, settings.m_instructions, settings.m_registers, settings.m_variations);
            else
                populationSize = FireStarterPopulation::PopulationSize(settings.m_population, settings.m_registers, settings.m_variations);
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
                    checkCUDAErrors(cudaMemcpyAsync(m_deviceEvolutions0, hostEvolutions, m_evolutionsSize, cudaMemcpyHostToDevice, stream));
                    checkCUDAErrors(cudaMemcpyAsync(m_deviceEvolutions1, hostEvolutions, m_evolutionsSize, cudaMemcpyHostToDevice, stream));
                }
            }
            if (m_populationSize != populationSize) {
                m_populationSize = populationSize;
                if (m_devicePopulation) {
                    checkCUDAErrors(cudaFreeAsync(m_devicePopulation, stream));
                    m_devicePopulation = nullptr;
                    m_devicePopulation0 = nullptr;
                    m_devicePopulation1 = nullptr;
                }
                if (m_populationSize) {
                    checkCUDAErrors(cudaMallocAsync(&m_devicePopulation, m_populationSize * 2, stream));
                    m_devicePopulation0 = (FireStarterPopulation*)(m_devicePopulation);
                    m_devicePopulation1 = (FireStarterPopulation*)(m_devicePopulation + m_populationSize);
                    checkCUDAErrors(cudaMemcpyAsync(m_devicePopulation0, hostResults, m_populationSize, cudaMemcpyHostToDevice, stream));
                    checkCUDAErrors(cudaMemcpyAsync(m_devicePopulation1, hostResults, m_populationSize, cudaMemcpyHostToDevice, stream));
                }
            }
            m_CUDAContext->Synchronize();
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
                delete m_CUDAContext;
            }
        } // FireStarterContext
    }; // class FireStarterContext

    static std::atomic<float> g_atomicResult;
    SimpleTimer m_timer;
    std::vector<FireStarterContext> m_contexts;
    std::vector<FireStarterState> m_allStates;
    FireStarterGenerate* m_generate = nullptr;
    std::string m_evolveCode;
    std::string m_optimizeCode;
    FireStarterSettings m_settings;
    FireStarterState m_initState;
    FireStarterState m_state;
    FireStarterPopulation* m_hostPopulation = nullptr;
    FireStarterEvolutions* m_hostEvolutions = nullptr;
    size_t m_populationSize = 0;
    size_t m_evolutionsSize = 0;
    size_t m_generation = 0;
    unsigned int m_unitIndex = 0;
    unsigned int m_gpus = 0;
    unsigned int m_firstVariation = 0;
    unsigned int m_lastVariation = 0;

    void UpdateEvolveStates(void);
    void GenerateCode(void);
    void GenerateOptimize(void);
    void GenerateUnit(void);
    void SyncContexts(void);
    void CodeGenerations(unsigned int forceInit, unsigned int firstVariation, unsigned int lastVariation);
    void OptimizeGenerations(unsigned int forceInit, unsigned int variation);
    void OptimizeVariations(unsigned int forceInit);
    void ExecuteCode(void);
    void ExecuteOptimize(void);
    void ExecuteUnit(void);
    bool LoadCode(void);
    void Deallocate(void);
    void Allocate(void);

public:
    unsigned int Index(void);
    void Packetize(FireStarterPacket& packet);
    void PacketizeAllStates(FireStarterPacket& packet);
    void GetState(FireStarterState& state);
    std::string GetEvolveCode(void);
    std::string GetOptimizeCode(void);
    bool InitUnit(const FireStarterState& initState);
    void Execute(void);
    void Sync(FireStarterState* allStates);
    FireStarterUnit(unsigned int index);
    FireStarterUnit(unsigned int index, unsigned int gpus);
    ~FireStarterUnit(void);
}; // class FireStarterUnit