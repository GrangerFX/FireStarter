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
        for (size_t seed = 0; seed < settings.m_seeds; seed++) {
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
        FireStarterState evolveState(state);
        evolveState.InitGenerationSeed();
        const FireStarterSettings& settings = evolveState.Settings();
        unsigned int numInstructions = settings.m_instructions;
        float bestResult = evolveState.m_maxResult;
        FireStarterJob* job = m_manager->GetFree();
        if (job) {
            // Clone or randomize instructions in the later generations.
            job->m_state = evolveState;
#if 1
            // Random evolution 1.
            if (!evolveState.m_generation) {
                // Randomize the program.
                job->m_state.RandomProgram();
                job->m_state.RandomResults();
            } else {
                // 1 or 2 random instructions based on the age of the generation.
                unsigned long long age = evolveState.m_generation - bestState.m_generation;
                unsigned long long randomNum = (age >= numInstructions) + 1;
                while (randomNum--) {
                    job->m_state.RandomInstruction();
                    m_evolveCount++;
                }
            }
#endif
#if 0
            // Random evolution 2.
            if (evolveState.m_generation) {
                // Between 1 and 4 random instructions per generation.
                unsigned int randomNum = job->m_state.RandomMod(min(numInstructions, 4)) + 1;
                while (randomNum--) {
                    job->m_state.RandomInstruction();
                    m_evolveCount++;
                }
            } else
                // Randomize the program.
                job->m_state.RandomProgram();
#endif
#if 0
            // Code copy evolution.
            if (!evolveState.m_generation) {
                // Randomize the program.
                job->m_state.RandomProgram();
            } else {
                // Up to 8 sequential instructions are copied from the best state to evolution state per generation.
                unsigned int copyNum = job->m_state.RandomMod(min(numInstructions, 8)) + 1;
                unsigned int copySrc = job->m_state.RandomMod(numInstructions);
                unsigned int copyDst = job->m_state.RandomMod(numInstructions);
                while (copyNum--) {
                    job->m_state.m_program.EvolvedInstruction(copyDst++) = evolveState.m_program.EvolvedInstruction(copySrc++);
                    copySrc %= numInstructions;
                    copyDst %= numInstructions;
                }
                job->m_state.RandomInstruction();
            }
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

bool FireStarterEvolve::EvolveStates(const std::vector<FireStarterState>& allStates, std::atomic<unsigned long long>& stateIndex, unsigned long long generation, bool sync)
{
    if (m_optimizeCode.empty())
        return false;
    
    Dispatch([this, &allStates, &stateIndex, generation] {
        FireStarterState bestState = allStates[0];
        unsigned int numInstructions = bestState.Settings().m_instructions;
        float bestResult = bestState.m_maxResult;
        for (unsigned long long index = stateIndex++; (index < allStates.size()) && !WillTerminate(); index = stateIndex++) {
            FireStarterJob* job = m_manager->GetFree();
            if (job) {
                // Clone or randomize instructions in the later generations.
                FireStarterState& curState = job->m_state;
                curState = allStates[index];
                size_t age = generation - curState.m_generation;
                curState.m_generation = generation;
                unsigned long long seed = curState.InitGenerationSeed();
                if (!generation)
                    curState.RandomProgram(seed);
                else {
                    // Copy or randomize instructions based on the quality of the previous result.
                    float oldResult = curState.m_maxResult;
                    size_t numStates = allStates.size();
#if 1
                    // Best 10% crossover evolution.
                    size_t bestStates = (numStates + 9) / 10;
                    if ((index > bestStates) && !RANDOMMOD(seed, 5)) {
                        const FireStarterState& randomState = allStates[RANDOMMOD(seed, bestStates)];
                        unsigned int copySrc = RANDOMMOD(seed, numInstructions);
                        for (unsigned int index = copySrc; index < numInstructions; index++)
                            curState.m_program.EvolvedInstruction(index) = randomState.m_program.EvolvedInstruction(index);
                    } else
                        curState.RandomInstruction(seed);
#endif
#if 0
                    // Random crossover evolution.
                    const FireStarterState& randomState = allStates[RANDOMMOD(seed, numStates)];
                    if (randomState.m_maxResult < oldResult) {
                        unsigned int copySrc = RANDOMMOD(seed, numInstructions);
                        for (unsigned int index = copySrc; index < numInstructions; index++)
                            curState.m_program.EvolvedInstruction(index) = randomState.m_program.EvolvedInstruction(index);
                    } else
                        curState.RandomInstruction(seed);
#endif
#if 0
                    // Random evolution.
                    if (numStates == 1) {
                        // Randomize a random set of instuctions.
                        unsigned int randomNum = 4; // RANDOMMOD(seed, min(numInstructions, age / 4 + 1));
                        while (randomNum--)
                            curState.RandomInstruction(seed);
                    } else {
                        if (oldResult > bestResult * 4.0f) {
                            // Copy the best state and randomize one instruction.
                            curState.m_program = bestState.m_program;
                            curState.RandomInstruction(seed);
                        } else if (oldResult > bestResult * 2.0f) {
                            // Copy a range of instuctions from the best state.
                            unsigned int copyNum = RANDOMMOD(seed, min(numInstructions, 8));
                            unsigned int copySrc = RANDOMMOD(seed, numInstructions);
                            unsigned int copyDst = RANDOMMOD(seed, numInstructions);
                            while (copyNum--) {
                                curState.m_program.EvolvedInstruction(copyDst++) = bestState.m_program.EvolvedInstruction(copySrc++);
                                copySrc %= numInstructions;
                                copyDst %= numInstructions;
                            }
                            curState.RandomInstruction(seed);
                        } else {
                            // Randomize a range of instuctions.
                            unsigned int randomNum = RANDOMMOD(seed, min(numInstructions, age / 4 + 1));
                            unsigned int randomDst = RANDOMMOD(seed, numInstructions);
                            while (randomNum--) {
                                curState.RandomInstruction(seed, randomDst++);
                                randomDst %= numInstructions;
                            }
                        }
                    }
#endif
                }

                // Optimize the program registers.
                curState.m_program.OptimizeRegisters();

                // Generate the evaluate code
                std::string evaluateCode;
                m_generate->GenerateEvaluate(curState, evaluateCode);

                // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
                job->m_options.clear();
                CUDACompile::CompileOptions(job->m_options);
                job->m_programName = "FireOptimizer.cu";
                job->m_programFunction = "Optimizer";
                job->m_program = m_optimizeCode;
                FireStarterCode::UpdateProgram(job->m_program, evaluateCode, EVALUATE_CODE);
            }
            m_manager->AddCode(job);
        }
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
            job->m_state.m_optimizePass = true;

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
