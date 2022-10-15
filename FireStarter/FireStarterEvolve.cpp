#include "FireStarterEvolve.h"
#include "FireStarterGenerate.h"
#include "FireStarterCode.h"
#include "CUDACompile.h"

void FireStarterEvolve::EvolveGenerate(void)
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
        for (unsigned int generation = 0; generation < m_settings.m_attempts; generation++) {
            FireStarterCompilerJob* job = m_manager->GetFree();
            if (!job)
                break;

            // Randomize one instruction per state except for the first generation.
            job->m_state = m_state;
            job->m_state.m_generation = m_state.m_generation + generation;
            if (generation) {
                if (m_settings.m_mode == FIRESTARTER_RANDOM)
                    job->m_state.m_program.RandomProgram(job->m_state.StateSeed());
                else
                    job->m_state.m_program.RandomInstruction(job->m_state.StateSeed());
            }
            job->m_state.m_program.OptimizeRegisters();

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
} // EvolveGenerate

void FireStarterEvolve::Cancel(void)
{
    // Cancel any waiting jobs
    m_manager->Cancel();
} // Cancel

FireStarterEvolve::FireStarterEvolve(FireStarterState& state)
{
    m_state = state;
    m_settings = m_state.Settings();
    m_server = new FireStarterServer();
    m_manager = new FireStarterCompilerManager(m_settings.m_units, m_settings.m_processes);
    if (FireStarterCode::LoadCode("FireOptimizer.cu", m_optimizeCode)) {
        for (unsigned int i = 0; i < m_settings.m_processes; i++) {
            FireStarterCompiler* compiler = new FireStarterCompiler(m_server, m_manager);
            m_compilers.push_back(compiler);
        }
        EvolveGenerate();
    }
} // FireStarterEvolve

FireStarterEvolve::~FireStarterEvolve(void)
{
    for (FireStarterCompiler* compiler : m_compilers)
        delete compiler;
    delete m_manager;
    delete m_server;
} // ~FireStarterEvolve
