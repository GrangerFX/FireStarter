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

bool FireStarterEvolve::RandomState(const FireStarterState& state, bool sync)
{
    Dispatch([this, state] {
        FireStarterState evolveState(state);
        evolveState.InitGenerationSeed();
        const FireStarterSettings& settings = evolveState.Settings();
        unsigned int numInstructions = settings.m_instructions;
        float bestResult = evolveState.m_maxResult;
        FireStarterJob* job = m_evolveManager->GetFree();
        if (job) {
            // Randomize the program.
            job->m_state = evolveState;
            job->m_state.RandomProgram();

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

bool FireStarterEvolve::EvolveStates(unsigned long long test, const FireStarterSettings& evolveSettings, FireStarterStates& allStates, TestedInstructions& testedInstructions, unsigned long long generation)
{
    DispatchSync([this, test, &evolveSettings, &allStates, &testedInstructions, generation] {
        unsigned long long numStates = evolveSettings.m_states;
        unsigned long long randomStates = generation ? FIRESTARTER_EVOLVE_RANDOM : numStates;

        for (unsigned long long index = 0; index < numStates; index++) {
            FireStarterJob* job = m_evolveManager->GetFree();
            if (job) {
                // Evolved states are generated first so they cannot used the random states created in this generation.
                if (index < randomStates) {
                    // Randomize the instructions.
                    FireStarterState& curState = job->m_state;
#if FIRESTARTER_EVOLVE_NEW
                    curState.InitState(evolveSettings, 0, index, allStates.size(), test);
#else
                    curState.InitState(evolveSettings, generation, index, allStates.size(), test);
#endif
                    // Keep randomizing instructions until a unique set of instructions is found.
                    do {
                        // Randomize the program.
                        curState.RandomProgram();

                        // Optimize the program registers.
                        curState.m_program.OptimizeRegisters();
                    } while (testedInstructions.count(curState.m_program.OptimizedInstructionsData()));

                    // Add the instructions to the set of unique instructions.
                    testedInstructions.insert(curState.m_program.OptimizedInstructionsData());

                    // Add the state to the list of active states.
                    allStates.push_back(curState);

                    // Generate the evaluate code
                    GenerateCode(job);
                } else {
                    bool found = false;

                    do {
                        // Find the best state to evolve based on a weighting algorithm.
                        float evolveWeight = 0.0f;
                        size_t evolveIndex = 0;
                        for (size_t curIndex = 0; curIndex < allStates.size(); curIndex++) {
                            FireStarterState& curState = allStates[curIndex];
                            float curWeight = curState.EvolveWeight();
                            if (!curIndex || (curWeight < evolveWeight)) {
                                evolveWeight = curWeight;
                                evolveIndex = curIndex;
                            }
                        }

                        // Copy and setup the new candidate state.
                        FireStarterState& oldState = allStates[evolveIndex];
                        FireStarterState& curState = job->m_state;
                        curState = oldState;
#if FIRESTARTER_EVOLVE_NEW
                        // Note: The age and generation will increment even if the current instructions are not unique by design.
                        curState.m_age = ++oldState.m_age;
                        curState.m_generation = ++oldState.m_generation;
#else
                        curState.m_children0 = ++allStates[curState.m_id].m_children0;
                        curState.m_children1 = ++oldState.m_children1;
                        curState.m_age = generation - curState.m_generation;
                        curState.m_generation = generation;
#endif
                        curState.m_evolution++;
                        curState.m_index = index;
                        curState.m_copy_index = evolveIndex;
                        curState.m_oldResult = curState.m_maxResult;
                        curState.m_evolveWeight = evolveWeight;
                        curState.InitGenerationSeed();
                        curState.m_timer.StartDate();

                        // Keep copying and randomizing instructions until a unique set of instructions is found.
                        unsigned int count = 0;
                        do {
                            // Copy the program and result from the random index.
                            curState.m_program = allStates[evolveIndex].m_program;

                            // Randomize two instructions.
                            curState.RandomInstruction();
                            if (generation & 1)
                                curState.RandomInstruction();

                            // Optimize the program registers.
                            curState.m_program.OptimizeRegisters();

                            // Check if the optimized instructions are unique.
                            if (!testedInstructions.count(curState.m_program.OptimizedInstructionsData())) {
                                // Add the instructions to the set of unique instructions.
                                testedInstructions.insert(curState.m_program.OptimizedInstructionsData());

                                // Generate the evaluate code
                                GenerateCode(job);

                                // Done evolving the state.
                                found = true;
                                break;
                            }

                            // Try again a number of times.
                            count++;
                        } while (count < evolveSettings.m_instructions);
                    } while (!found);
                }
            } else
                // Pass along the null job to cause the next stage to exit.
                m_evolveManager->AddCode();
        }
    });
    return true;
} // EvolveStates

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
