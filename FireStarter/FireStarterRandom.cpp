#include "FireStarterRandom.h"
#include "FireStarterGenerate.h"
#include "FireStarterCode.h"
#include "CUDACompile.h"

void FireStarterRandom::RandomGenerate(void)
{
    DispatchAsync([this] {
#if 1
        // Generate code using the GPU.
        CUDAContext m_CUDAContext(0);
        FireStarterGenerate generate(&m_CUDAContext);
#else
        // Generate code using the CPU.
        FireStarterGenerate generate;
#endif
        unsigned int generation = 0;
        while (generation < m_settings.m_attempts) {
            FireStarterCompilerJob* job = m_manager->GetFree();
            if (!job)
                break;

            job->m_state.InitState(m_settings);
            job->m_state.m_generation = generation++;
            unsigned int stateSeed = job->m_state.StateSeed();
            job->m_state.m_program.RandomProgram(stateSeed);
            job->m_state.m_program.OptimizeRegisters(true);

            // Generate the optimize code
            std::string evaluateCode;
            generate.GenerateEvaluate(job->m_state, evaluateCode);

            // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
            job->m_options.clear();
            CUDACompile::StandardOptions(job->m_options);
            job->m_programName = "FireOptimizer";
            job->m_programFunction = "Optimizer";
            job->m_program = m_optimizeCode;
            FireStarterCode::UpdateProgram(job->m_program, evaluateCode, EVALUATE_CODE);
            m_manager->AddCode(job);
        }

        // Send a null job to each client to let it know the work is complete.
        for (unsigned int i = 0; i < m_settings.m_processes; i++)
            m_manager->AddCode(nullptr);
    });
} // RandomGenerate

FireStarterRandom::FireStarterRandom(FireStarterSettings& settings, FireStarterCompilerManager* manager)
{
    m_settings = settings;
    m_manager = manager;
    if (FireStarterCode::LoadCode("FireOptimizer.cu", m_optimizeCode)) {
        for (unsigned int i = 0; i < m_settings.m_processes; i++) {
            FireStarterProcess* process = m_server.AddProcess(FIRECOMPILER);
            FireStarterCompiler* compiler = new FireStarterCompiler(process, m_manager);
            m_compilers.push_back(compiler);
        }
        RandomGenerate();
    }
} // FireStarterRandom

FireStarterRandom::~FireStarterRandom(void)
{
    for (FireStarterCompiler* compiler : m_compilers)
        delete compiler;
} // ~FireStarterRandom
