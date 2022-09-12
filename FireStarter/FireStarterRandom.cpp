#include "FireStarterRandom.h"
#include "FireStarterGenerate.h"
#include "FireStarterCode.h"
#include "CUDACompile.h"

void FireStarterRandom::RandomGenerate(void)
{
    DispatchAsync([this] {
        CUDAContext m_CUDAContext(0);
        FireStarterGenerate generate(&m_CUDAContext);
        unsigned int generation = 0;
        while ((generation < m_settings.m_attempts) && !WillTerminate()) {
            FireStarterCompilerJob* job = m_manager->GetFree();
            job->m_state.InitState(m_settings);
            job->m_state.Settings().m_seed = job->m_state.m_seed = m_settings.m_seed + generation;
            job->m_state.m_generation = generation++;
            job->m_state.m_program.RandomProgram();
            job->m_state.m_program.OptimizeRegisters(true);

            // Generate the optimize code
            std::string evaluateCode;
            generate.GenerateEvaluate(job->m_state, evaluateCode);

            // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
            CUDACompile::StandardOptions(job->m_options);
            job->m_programName = "Optimize";
            job->m_program = m_optimizeCode;
            FireStarterCode::UpdateProgram(job->m_program, evaluateCode, EVALUATE_CODE);
            m_manager->AddCode(job);
        }
    });
} // RandomGenerate

FireStarterRandom::FireStarterRandom(FireStarterSettings& settings, FireStarterCompilerManager* manager)
{
    m_settings = settings;
    m_manager = manager;
    if (FireStarterCode::LoadCode("Optimize.cu", m_optimizeCode)) {
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
