#include "FireStarterEvolve.h"
#include "FireStarterGenerate.h"
#include "FireStarterCode.h"
#include "CUDACompile.h"

void FireStarterEvolve::EvolveGenerate(void)
{
    DispatchAsync([this] {
#if 0
        CUDAContext m_CUDAContext(0);
        FireStarterGenerate generate(&m_CUDAContext);
#else
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
            job->m_programName = "Optimize";
            job->m_program = m_optimizeCode;
            FireStarterCode::UpdateProgram(job->m_program, evaluateCode, EVALUATE_CODE);
            m_manager->AddCode(job);
        }
    });
} // EvolveGenerate

FireStarterEvolve::FireStarterEvolve(FireStarterSettings& settings, FireStarterCompilerManager* manager)
{
    m_settings = settings;
    m_manager = manager;
    if (FireStarterCode::LoadCode("Optimize.cu", m_optimizeCode)) {
        for (unsigned int i = 0; i < m_settings.m_processes; i++) {
            FireStarterProcess* process = m_server.AddProcess(FIRECOMPILER);
            FireStarterCompiler* compiler = new FireStarterCompiler(process, m_manager);
            m_compilers.push_back(compiler);
        }
        EvolveGenerate();
    }
} // FireStarterEvolve

FireStarterEvolve::~FireStarterEvolve(void)
{
    for (FireStarterCompiler* compiler : m_compilers)
        delete compiler;
} // ~FireStarterEvolve
