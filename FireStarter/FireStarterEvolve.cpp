#include "FireStarterEvolve.h"
#include "FireStarterCode.h"
#include "CUDACompile.h"

bool FireStarterEvolve::EvolveSeeds(const FireStarterSettings& settings, bool sync)
{
    if (m_optimizeCode.empty())
        return false;
    Dispatch([this, settings] {
        // Generate code using the GPU.
        FireStarterSettings evolveSettings(settings);
        size_t startSeed = settings.m_seed;
        for (size_t seed = 0; seed < settings.m_tests; seed++) {
            FireStarterJob* job = m_manager->GetFree();
            if (!job)
                break;

            // Randomize the program for the current seed.
            job->m_state.InitState(evolveSettings);
            job->m_state.RootSeed(startSeed + seed);
            job->m_state.RandomProgram();

            // Optimize the program registers.
            job->m_state.m_program.OptimizeRegisters();

            // Generate the evaluate code
            std::string evaluateCode;
            m_generate->GenerateEvaluate(job->m_state, evaluateCode);

            // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
            job->m_options.clear();
            CUDACompile::CompileOptions(job->m_options);
            job->m_programName = "FireOptimizer.cu";
            job->m_programFunction = "Optimizer";
            job->m_program = m_optimizeCode;
            FireStarterCode::UpdateProgram(job->m_program, evaluateCode, EVALUATE_CODE);
            m_manager->AddCode(job);
        }

        // Let all the processes know that the job is complete. This will terminate the processes
        // once the last job in their queues is finished.
        m_manager->AddCode();
    }, sync);
    return true;
} // EvolveSeeds

bool FireStarterEvolve::EvolveState(const FireStarterState& state, const FireStarterState& bestState, bool sync)
{
    if (m_optimizeCode.empty())
        return false;
    Dispatch([this, state, bestState] {
        const FireStarterSettings& settings = state.Settings();
        unsigned int numInstructions = settings.m_instructions;
        float bestResult = state.m_maxResult;
        FireStarterJob* job = m_manager->GetFree();
        if (job) {
            // Clone or randomize instructions in the later generations.
            job->m_state = state;
#if 0
            unsigned long long seed = job->m_state.InitGenerationSeed();
            if (state.m_generation) {
                // Copy or randomize instructions based on the quality of the previous result.
                float oldResult = job->m_state.m_maxResult;

                // Randomize a random set of instuctions.
                unsigned long long age = state.m_generation - bestState.m_generation;
                unsigned long long randomNum = age >= numInstructions ? 2 : 1;
                while (randomNum--) {
                    job->m_state.RandomInstruction(seed);
                    m_evolveCount++;
                }
            } else
                job->m_state.RandomProgram(seed);
#endif
#if 1
            unsigned long long seed = job->m_state.OldEvolveSeed(state.m_generation);
            if (state.m_generation) {
                // Copy or randomize instructions based on the quality of the previous result.
                float oldResult = job->m_state.m_maxResult;

                // Randomize a random set of instuctions.
                unsigned long long age = state.m_generation - bestState.m_generation;
                unsigned long long randomNum = age >= numInstructions ? 2 : 1;
                while (randomNum--) {
                    job->m_state.RandomInstruction(seed);
                    m_evolveCount++;
                }
            }
            else
                job->m_state.RandomProgram(seed);
#endif
#if 0
            unsigned long long seed = job->m_state.OldEvolveSeed();
            if (state.m_generation) {
                // Randomize a random range of instuctions.
                unsigned int randomNum = RANDOMMOD(seed, min(numInstructions, 4));
                unsigned int randomDst = RANDOMMOD(seed, numInstructions);
                while (randomNum--) {
                    unsigned long long instructionSeed = seed++;
                    job->m_state.m_program.RandomInstruction(instructionSeed, randomDst++);
                    randomDst %= numInstructions;
                }
            } else
                job->m_state.RandomProgram(seed);
#endif

            // Optimize the program registers.
            job->m_state.m_program.OptimizeRegisters();

            // Generate the evaluate code
            std::string evaluateCode;
            m_generate->GenerateEvaluate(job->m_state, evaluateCode);

            // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
            job->m_options.clear();
            CUDACompile::CompileOptions(job->m_options);
            job->m_programName = "FireOptimizer.cu";
            job->m_programFunction = "Optimizer";
            job->m_program = m_optimizeCode;
            FireStarterCode::UpdateProgram(job->m_program, evaluateCode, EVALUATE_CODE);
        }
        m_manager->AddCode(job);
    }, sync);
    return true;
} // EvolveState

bool FireStarterEvolve::EvolveStates(const FireStarterState& bestState, const std::vector<FireStarterState>& allStates, unsigned long long generation, bool sync)
{
    if (m_optimizeCode.empty())
        return false;
    FireStarterState state(bestState);
    Dispatch([this, state, allStates, generation] {
        unsigned int numInstructions = state.Settings().m_instructions;
        float bestResult = state.m_maxResult;
        FireStarterJob* job = m_manager->GetFree();
        if (job) {
            // Clone or randomize instructions in the later generations.
            job->m_state = allStates[m_index];
            job->m_state.m_generation = generation;
            unsigned long long seed = job->m_state.InitStateSeed();
            if (generation) {
                // Copy or randomize instructions based on the quality of the previous result.
                float oldResult = job->m_state.m_maxResult;
                if (allStates.size() == 1) {
#if 1
                    // Randomize a random range of instuctions.
                    unsigned int randomNum = RANDOMMOD(seed, min(numInstructions, 4));
                    unsigned int randomDst = RANDOMMOD(seed, numInstructions);
                    while (randomNum--) {
                        job->m_state.RandomInstruction(seed, randomDst++);
                        randomDst %= numInstructions;
                    }
#else
                    // Randomize a random set of instuctions.
                    size_t age = generation - state.m_generation;
                    unsigned int randomNum = 4; // RANDOMMOD(seed, min(numInstructions, age / 4 + 1));
                    while (randomNum--)
                        job->m_state.RandomInstruction(seed);
#endif
                } else {
#if 0
                    // Randomize a range of instuctions.
                    size_t age = generation - state.m_generation;
                    unsigned int randomNum = RANDOMMOD(seed, min(numInstructions, age / 4 + 1));
                    unsigned int randomDst = RANDOMMOD(seed, numInstructions);
                    while (randomNum--) {
                        job->m_state.RandomInstruction(seed, randomDst++);
                        randomDst %= numInstructions;
                    }
#else
                    if (oldResult > bestResult * 4.0f) {
                        // Copy the best state and randomize one instruction.
                        job->m_state.m_program = state.m_program;
                        job->m_state.RandomInstruction(seed);
                    } else if (oldResult > bestResult * 2.0f) {
                        // Copy a range of instuctions from the best state.
                        unsigned int copyNum = RANDOMMOD(seed, min(numInstructions, 8));
                        unsigned int copySrc = RANDOMMOD(seed, numInstructions);
                        unsigned int copyDst = RANDOMMOD(seed, numInstructions);
                        while (copyNum--) {
                            job->m_state.m_program.EvolvedInstruction(copyDst++) = state.m_program.EvolvedInstruction(copySrc++);
                            copySrc %= numInstructions;
                            copyDst %= numInstructions;
                        }
                        job->m_state.RandomInstruction(seed);
                    } else {
                        // Randomize a range of instuctions.
                        size_t age = generation - state.m_generation;
                        unsigned int randomNum = RANDOMMOD(seed, min(numInstructions, age / 4 + 1));
                        unsigned int randomDst = RANDOMMOD(seed, numInstructions);
                        while (randomNum--) {
                            job->m_state.RandomInstruction(seed, randomDst++);
                            randomDst %= numInstructions;
                        }
                    }
#endif
                }
             } else
                job->m_state.RandomProgram(seed);

            // Optimize the program registers.
            job->m_state.m_program.OptimizeRegisters();

            // Generate the evaluate code
            std::string evaluateCode;
            m_generate->GenerateEvaluate(job->m_state, evaluateCode);

            // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
            job->m_options.clear();
            CUDACompile::CompileOptions(job->m_options);
            job->m_programName = "FireOptimizer.cu";
            job->m_programFunction = "Optimizer";
            job->m_program = m_optimizeCode;
            FireStarterCode::UpdateProgram(job->m_program, evaluateCode, EVALUATE_CODE);
        }
        m_manager->AddCode(job);
    }, sync);
    return true;
} // EvolveStates

bool FireStarterEvolve::GenerateOptimize(const FireStarterState& initState, bool sync)
{
    if (m_optimizeCode.empty())
        return false;

    // Must copy the intitState pointer in case it becomes invalid when the code below is called.
    FireStarterState state(initState); 
    DispatchAsync([this, state] {
        FireStarterJob* job = m_manager->GetFree();
        if (job) {
            // The state already contains the evolved and optimized code.
            job->m_state = state;
            job->m_state.m_program.m_settings.m_mode = FIRESTARTER_OPTIMIZE;

            // Generate the evaluate code
            std::string evaluateCode;
            m_generate->GenerateEvaluate(job->m_state, evaluateCode);

            // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
            job->m_options.clear();
            CUDACompile::CompileOptions(job->m_options);
            job->m_programName = "FireOptimizer.cu";
            job->m_programFunction = "Optimizer";
            job->m_program = m_optimizeCode;
            FireStarterCode::UpdateProgram(job->m_program, evaluateCode, EVALUATE_CODE);
            m_manager->AddCode(job);
        }
    });
    return true;
} // GenerateOptimize

FireStarterEvolve::FireStarterEvolve(FireStarterManager* manager, size_t index) : CUDAThread(Format("FireStarterEvolve%zu", index))
{
    m_manager = manager;
    m_index = index;
    FireStarterCode::LoadCode("FireOptimizer.cu", m_optimizeCode);
    DispatchAsync([this] {
        m_generate = new FireStarterGenerate(Context());
    });
} // FireStarterEvolve

FireStarterEvolve::~FireStarterEvolve(void)
{
    DispatchSync([this] {
        delete m_generate;
    });
} // ~FireStarterEvolve
