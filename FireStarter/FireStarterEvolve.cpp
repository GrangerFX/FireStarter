#include "FireStarterEvolve.h"
#include "FireStarterGenerate.h"
#include "FireStarterCode.h"
#include "CUDACompile.h"

bool FireStarterEvolve::EvolveGenerations(const FireStarterState* state, unsigned int generations)
{
    if (m_optimizeCode.empty())
        return false;
    DispatchAsync([this, state, generations] {
        // Generate code using the GPU.
        CUDAContext m_CUDAContext(0);
        FireStarterGenerate generate(&m_CUDAContext);
        for (unsigned int generation = 0; generation < generations; generation++) {
            FireStarterCompilerJob* job = m_manager->GetFree();
            if (!job)
                break;

            // Randomize one instruction per state except for the first generation.
            job->m_state = *state;
            job->m_state.m_generation += generation;
            if ((!job->m_state.m_generation) || (job->m_state.Settings().m_mode == FIRESTARTER_RANDOM))
                job->m_state.m_program.RandomProgram(job->m_state.StateSeed());
            else
                job->m_state.m_program.RandomInstruction(job->m_state.StateSeed());
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
    });
    return true;
} // EvolveGenerations

void FireStarterEvolve::EvolveComplete(void)
{
    DispatchAsync([this] {
        m_manager->Complete();
    });
} // EvolveComplee

FireStarterEvolve::FireStarterEvolve(FireStarterCompilerManager* manager)
{
    m_manager = manager;
    FireStarterCode::LoadCode("FireOptimizer.cu", m_optimizeCode);
} // FireStarterEvolve

FireStarterEvolve::~FireStarterEvolve(void)
{
} // ~FireStarterEvolve
