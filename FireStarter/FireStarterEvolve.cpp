#include "FireStarterEvolve.h"
#include "FireStarterCode.h"
#include "CUDACompile.h"

void FireStarterEvolve::GenerateCode(FireStarterJob* job)
{
    // Generate the evaluate code
    std::string evaluateCode;
    m_evolveGenerate->GenerateEvaluate(job->m_state, evaluateCode);

    // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
    CUDACompile::CompileOptions(job->m_options);
    job->m_programName = "FireOptimizer.cu";
    job->m_programFunction = "Optimizer";
    job->m_program = m_evolveOptimizeCode;
    FireStarterCode::UpdateProgram(job->m_program, evaluateCode, EVALUATE_CODE);
    m_evolveManager->AddCode(job);
} // GenearateCode

bool FireStarterEvolve::RandomState(const FireStarterState& state, const FireStarterState& bestState, bool sync)
{
    Dispatch([this, state, bestState] {
        FireStarterState evolveState(state);
        evolveState.InitGenerationSeed();
        const FireStarterSettings& settings = evolveState.Settings();
        unsigned int numInstructions = settings.m_instructions;
        float bestResult = evolveState.m_maxResult;
        FireStarterJob* job = m_evolveManager->GetFree();
        if (job) {
            job->m_state = evolveState;
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

            // Optimize the program registers.
            job->m_state.m_program.OptimizeRegisters();

            // Generate the evaluate code
            GenerateCode(job);
        } else
            // Pass along the null job to cause the next stage to exit.
            m_evolveManager->AddCode();
    }, sync);
    return true;
} // RandomState

bool FireStarterEvolve::RandomStates(unsigned long long test, const FireStarterSettings& evolveSettings, TestedInstructions& testedInstructions, unsigned long long& evolveID, unsigned long long generation)
{
    DispatchSync([this, test, &evolveSettings, &testedInstructions, &evolveID] {
        unsigned long long numStates = evolveSettings.m_states;
        for (unsigned long long index = 0; index < numStates; index++) {
            FireStarterJob* job = m_evolveManager->GetFree();
            if (job) {
                // Clone or randomize instructions in the later generations.
                FireStarterState& curState = job->m_state;
                curState.InitState(evolveSettings, index, evolveID++, test);

                // Randomize each generation and index.
                curState.InitGenerationSeed();

                // Keep randomizing instructions until a unique set of instructions is found.
                do {
                    // Randomize the program.
                    curState.RandomProgram();

                    // Optimize the program registers.
                    curState.m_program.OptimizeRegisters();
                } while (testedInstructions.count(curState.m_program.OptimizedInstructionsData()));

                // Add the instructions to the set of unique instructions.
                testedInstructions.insert(curState.m_program.OptimizedInstructionsData());

                // Generate the evaluate code
                GenerateCode(job);
            } else
                // Pass along the null job to cause the next stage to exit.
                m_evolveManager->AddCode();
        }
    });
    return true;
} // RandomStates

#if FIRESTARTER_EVOLVE_NEW
bool FireStarterEvolve::EvolveStates(unsigned long long test, const FireStarterSettings& evolveSettings, FireStarterStates& allStates, TestedInstructions& testedInstructions, unsigned long long& evolveID, unsigned long long generation)
{
    DispatchSync([this, test, &evolveSettings, &allStates, &testedInstructions, &evolveID, generation] {
        unsigned long long numStates = evolveSettings.m_states;
        for (unsigned long long index = 0; index < numStates; index++) {
            FireStarterJob* job = m_evolveManager->GetFree();
            if (job) {
                // Find the best state to evolve based on a weighting algorithm.
                float copyValue = 0.0f;
                size_t copyIndex = 0;
                for (size_t curIndex = 0; curIndex < allStates.size(); curIndex++) {
                    float curValue = (allStates[curIndex].m_children + 1) * allStates[curIndex].m_maxResult;
                    if (!curIndex || (curValue < copyValue)) {
                        copyValue = curValue;
                        copyIndex = curIndex;
                    }
                }

                // Increment the copied state's children.
                allStates[copyIndex].m_children++;

                // If the age is too great, randomize the state.
                unsigned long long copyAge = (generation - allStates[copyIndex].m_generation) * numStates + index;
                unsigned long long copyChildren = allStates[copyIndex].m_children;
                if ((copyAge > FIRESTARTER_EVOLVE_AGE) && (copyChildren > FIRESTARTER_EVOLVE_CHILDREN)) {
                    // Setup the new candidate state.
                    FireStarterState& curState = job->m_state;
                    curState.InitState(evolveSettings, index, evolveID++, test);
                    curState.m_generation = generation;
                    curState.InitGenerationSeed();

                    // Keep randomizing instructions until a unique set of instructions is found.
                    do {
                        // Randomize the program.
                        curState.RandomProgram();

                        // Optimize the program registers.
                        curState.m_program.OptimizeRegisters();
                    } while (testedInstructions.count(curState.m_program.OptimizedInstructionsData()));

                    // Add the instructions to the set of unique instructions.
                    testedInstructions.insert(curState.m_program.OptimizedInstructionsData());
                } else {
                    // Copy and setup the new candidate state.
                    FireStarterState& curState = job->m_state;
                    curState = allStates[copyIndex];
                    curState.m_index = index;
                    curState.m_copy_index = copyIndex;
                    curState.m_generation = generation;
                    curState.m_evolution++;
                    curState.m_children = 0;
                    curState.m_oldResult = curState.m_maxResult;
                    curState.InitGenerationSeed();
                    curState.m_timer.StartDate();

                    // Increment the copied state's children.
                    allStates[copyIndex].m_children++;

                    // Keep copying and randomizing instructions until a unique set of instructions is found.
                    unsigned int count = 0;
                    do {
                        // Copy the program and result from the random index.
                        curState.m_program = allStates[copyIndex].m_program;

                        // Randomize one additional instruction per 16 attempts.
                        unsigned long long randomCount = (count / evolveSettings.m_instructions) + 1;
                        while (randomCount--)
                            curState.RandomInstruction();

                        // Optimize the program registers.
                        curState.m_program.OptimizeRegisters();
                        count++;
                    } while (testedInstructions.count(curState.m_program.OptimizedInstructionsData()));

                    // Add the instructions to the set of unique instructions.
                    testedInstructions.insert(curState.m_program.OptimizedInstructionsData());
                }

                // Generate the evaluate code
                GenerateCode(job);
            } else
                // Pass along the null job to cause the next stage to exit.
                m_evolveManager->AddCode();
        }
    });
    return true;
} // EvolveStates
#else
bool FireStarterEvolve::EvolveStates(unsigned long long test, const FireStarterSettings& evolveSettings, FireStarterStates& allStates, TestedInstructions& testedInstructions, unsigned long long generation)
{
    DispatchSync([this, test, &evolveSettings, &allStates, &testedInstructions, generation] {
        unsigned long long numStates = evolveSettings.m_states;
        for (unsigned long long index = 0; index < numStates; index++) {
            FireStarterJob* job = m_evolveManager->GetFree();
            if (job) {
                if ((index * 2 >= numStates) && (allStates[index].m_children > FIRESTARTER_EVOLVE_CHILDREN)) {
                    // Setup the new state.
                    FireStarterState& curState = job->m_state;
                    curState.InitState(evolveSettings, index, index, test);
                    curState.m_generation = generation;
                    curState.InitGenerationSeed();

                    // If the age is too great, randomize the state.
                    curState.m_oldResult = curState.m_maxResult = curState.Settings().m_startResult;

                    // Randomize the program for the first generation.
                    curState.RandomProgram();

                    // Optimize the program registers.
                    curState.m_program.OptimizeRegisters();

                    // Add the instructions to the set of unique instructions.
                    testedInstructions.insert(curState.m_program.OptimizedInstructionsData());
                } else {
                    // Find the best state to evolve based on a weighting algorithm.
                    float copyValue = 0.0f;
                    size_t copyIndex = 0;
                    unsigned long long copyAge = 0;
                    for (size_t curIndex = 0; curIndex < allStates.size(); curIndex++) {
                        size_t curAge = generation - allStates[curIndex].m_generation;
                        float curValue = (allStates[curIndex].m_children + 1) * allStates[curIndex].m_maxResult;
                        if (!curIndex || (curValue < copyValue)) {
                            copyValue = curValue;
                            copyIndex = curIndex;
                            copyAge = curAge;
                        }
                    }

                    // Copy and setup the new state.
                    FireStarterState& curState = job->m_state;
                    curState = allStates[copyIndex];
                    curState.m_index = index;
                    curState.m_copy_index = copyIndex;
                    curState.m_id = allStates[index].m_id;
                    curState.m_generation = generation;
                    curState.m_evolution++;
                    curState.m_children = 0;
                    curState.m_oldResult = curState.m_maxResult;
                    curState.InitGenerationSeed();

                    // Increment the copied state's children.
                    allStates[copyIndex].m_children++;

                    // Keep copying and randomizing instructions until a unique set of instructions is found.
                    unsigned int count = 0;
                    do {
                        // Copy the program and result from the random index.
                        curState.m_program = allStates[copyIndex].m_program;

                        // Randomize one additional instruction per 16 attempts.
                        unsigned long long randomCount = (count / evolveSettings.m_instructions) + 1;
                        while (randomCount--)
                            curState.RandomInstruction();

                        // Optimize the program registers.
                        curState.m_program.OptimizeRegisters();
                        count++;
                    } while (testedInstructions.count(curState.m_program.OptimizedInstructionsData()));

                    // Keep track of the tested instructions.
                    testedInstructions.insert(curState.m_program.OptimizedInstructionsData());
                }

                // Generate the evaluate code
                GenerateCode(job);
            }
            else
                // Pass along the null job to cause the next stage to exit.
                m_evolveManager->AddCode();
        }
    });
    return true;
} // EvolveStates
#endif

bool FireStarterEvolve::GenerateOptimize(const FireStarterState& initState)
{
    bool result = false;
 
    // Must copy the intitState pointer in case it becomes invalid when the code below is called.
    FireStarterState state(initState);
    DispatchSync([this, state, &result] {
        FireStarterJob* job = m_evolveManager->GetFree();
        if (job) {
            // The state already contains the evolved and optimized code.
            job->m_state = state;

            // Generate the evaluate code
            GenerateCode(job);
            result = true;
        }
    });
    return result;
} // GenerateOptimize

FireStarterEvolve::FireStarterEvolve(FireStarterManager* manager, size_t index) : CUDAThread(Format("FireStarterEvolve%zu", index))
{
    m_evolveManager = manager;
    m_evolveIndex = index;
    FireStarterCode::LoadCode("FireOptimizer.cu", m_evolveOptimizeCode);
    if (m_evolveOptimizeCode.empty()) {
        printf("FireOptimize.cu could not be loaded!\n");
        std::terminate();
    } else
        DispatchAsync([this] {
            m_evolveGenerate = new FireStarterGenerate(Context());
        });
} // FireStarterEvolve

FireStarterEvolve::~FireStarterEvolve(void)
{
    DispatchSync([this] {
        delete m_evolveGenerate;
    });
} // ~FireStarterEvolve
