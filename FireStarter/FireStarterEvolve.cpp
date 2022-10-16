#include "FireStarterEvolve.h"
#include "FireStarterGenerate.h"
#include "FireStarterCode.h"
#include "CUDACompile.h"

void FireStarterEvolve::EvolveGenerate(void)
{
    DispatchAsync([this] {
        // Generate code using the GPU.
        CUDAContext m_CUDAContext(0);
        FireStarterGenerate generate(&m_CUDAContext);
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
            job->m_programName = "FireOptimizer.cu";
            job->m_programFunction = "Optimizer";
            job->m_program = m_optimizeCode;
            FireStarterCode::UpdateProgram(job->m_program, evaluateCode, EVALUATE_CODE);
            m_manager->AddCode(job);
        }

        // Let all the processes know that the job is complete. This will terminate the processes
        // once the last job in their queues is finished.
        m_manager->Complete();
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
    m_manager = new FireStarterCompilerManager(m_settings.m_units, m_settings.m_processes);
    if (FireStarterCode::LoadCode("FireOptimizer.cu", m_optimizeCode))
        EvolveGenerate();
} // FireStarterEvolve

FireStarterEvolve::~FireStarterEvolve(void)
{
    delete m_manager;
} // ~FireStarterEvolve
