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

bool FireStarterEvolve::EvolveStates(const std::vector<FireStarterState>& allStates, std::atomic<unsigned long long>& stateIndex, TestedInstructions* testedInstructions, unsigned long long generation, bool sync)
{
    if (m_optimizeCode.empty())
        return false;

    static std::mutex testMutex;
    Dispatch([this, &allStates, &stateIndex, testedInstructions, generation] {
        FireStarterState bestState = allStates[0];
        size_t numStates = allStates.size();
        unsigned int numInstructions = bestState.Settings().m_instructions;
        float bestResult = bestState.m_maxResult;
        for (unsigned long long index = stateIndex++; (index < allStates.size()); index = stateIndex++) {
            FireStarterJob* job = m_manager->GetFree();
            if (job) {
                // Clone or randomize instructions in the later generations.
                FireStarterState& curState = job->m_state;
                curState = allStates[index];
                curState.m_generation = generation;

                // Randomize each generation and index.
                unsigned long long seed = curState.InitGenerationSeed();
                size_t bestStates = 12;
                bool found = false;
                if (!generation) {
                    // Randomize the program for the first generation.
                    curState.RandomProgram(seed);
                    curState.m_generation = generation;

                    // Optimize the program registers.
                    curState.m_program.OptimizeRegisters();

                    // Add the instructions to the set of unique instructions.
                    testedInstructions->insert(curState.m_program.OptimizedInstructionsData());
                } else {
                    // Copy or randomize instructions based on the quality of the previous result.
                    size_t randomCount = 0;
                    size_t copyIndex = index;
                    if ((index > bestStates) && (RANDOMMOD(seed, numStates - bestStates) < index)) {
                        copyIndex = RANDOMMOD(seed, bestStates) + 1;
                        if (FIRESTARTER_EVOLVE_RANGE)
                            copyIndex = index - copyIndex;
                    }

                    // Keep copying and randomizing instructions until a unique set of instructions is found.
                    do {
                        // Best n evolution.
                        curState.EvolveInstructions(allStates[copyIndex], FIRESTARTER_EVOLVE_MODE, seed);
 
                        // Optimize the program registers.
                        curState.m_program.OptimizeRegisters();

                        // Make sure the instructions are unique.
#if FIRESTARTER_EVOLVE_UNIQUE
                        if (randomCount > 2)
                            curState.RandomInstruction(seed);
                        testMutex.lock();
                        if (!testedInstructions->count(curState.m_program.OptimizedInstructionsData())) {
                            // Add the instructions to the set of unique instructions.
                            testedInstructions->insert(curState.m_program.OptimizedInstructionsData());
                            found = true;
                        }
                        testMutex.unlock();
#else
                        found = true;
#endif

                        // randomCount makes sure this is not an endless loop.
                        randomCount++;
                    } while (!found && (randomCount < 10));
                    if (randomCount > 1)
                        printf("generation:%d  index:%d  randomCount=%d\n", generation, index, randomCount);
                }

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
