#include "FireStarterEvolve.h"
#include "FireStarterSource.h"
#include "FireStarterState.h"
#include "CUDACompile.h"

void FireStarterEvolve::GenerateCode(FireStarterJob* job)
{
    // Generate the evaluate code
    std::string evaluateCode;
    m_evolveGenerate->GenerateEvaluate(job->m_state, evaluateCode);
    job->m_state.m_evaluateCode = evaluateCode;

    // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
    CUDACompile::CompileOptions(job->m_options);
    job->m_programName = FireStarterSettings::ProgramName(FIRESTARTER_OPTIMIZE);
    job->m_program = m_executeCode;
    FireStarterSource::UpdateProgram(job->m_program, evaluateCode, EVALUATE_CODE);
    m_evolveManager->AddCode(job);
} // GenearateCode

bool FireStarterEvolve::RandomState(const FireStarterState& state)
{
    DispatchSync([this, state] {
        FireStarterState evolveState(state);
        evolveState.InitGenerationSeed();
        const FireStarterSettings& settings = evolveState.Settings();
        unsigned int numInstructions = settings.m_instructions;
        float bestResult = evolveState.MaxResults();
        FireStarterJob* job = m_evolveManager->GetFree();
        if (job) {
            // Randomize the program.
            job->m_state = evolveState;
            job->m_state.RandomCode();

            // Optimize the program registers.
            job->m_state.OptimizeCode();

            // Generate the evaluate code
            GenerateCode(job);
        } else
            // Pass along the null job to cause the next stage to exit.
            m_evolveManager->AddCode();
    });
    return true;
} // RandomState

bool FireStarterEvolve::SelectStates(FireStarterExecute* execute, unsigned long long test, const FireStarterSettings& selectSettings, const FireStarterSettings& optimizeSettings, FireStarterStates& allStates, TestedCodes& testedCodes, unsigned long long generation)
{
    DispatchSync([this, execute, test, &selectSettings, &optimizeSettings, &allStates, &testedCodes, generation] {
        unsigned long long numStates = selectSettings.m_states;
        unsigned long long randomStates = generation == 0 ? numStates : FIRESTARTER_EVOLVE_RANDOM;
        unsigned long long totalStates = allStates.size();

        for (unsigned long long index = 0; index < numStates; index++) {
            FireStarterJob* job = m_evolveManager->GetFree();
            if (job) {
                FireStarterState& curState = job->m_state;

                // Evolved states are generated first so they cannot used the random states created in this generation.
                if (index < randomStates) {
                    // Randomize the instructions.
                    curState.InitState(optimizeSettings, 0, index, allStates.size(), test);

                    // Keep randomizing the code until a unique set of instructions is found.
                    const FireStarterCode* bestCode = nullptr;
                    do {
                        // Randomize the program.
                        curState.RandomCode();

                        // Optimize the program registers.
                        curState.OptimizeCode();

                        // Select the best candidate evolution variation.
                        execute->ExecuteSelect(curState, selectSettings);
                    } while (testedCodes.count(curState.CodeVector()));

                    // Add the instructions to the set of unique instructions.
                    testedCodes.insert(curState.CodeVector());

                    // Set the state mode to optimize.
                    curState.m_settings.SetMode(FIRESTARTER_OPTIMIZE);

                    // Add the state to the list of active states.
                    allStates.push_back(curState);
                } else {
                    // Find the best state to evolve based on a weighting algorithm.
                    float evolveWeight = 0.0f;
                    size_t evolveIndex = 0;
                    for (size_t curIndex = 0; curIndex < totalStates; curIndex++) {
                        FireStarterState& curState = allStates[curIndex];
                        float curWeight = curState.SelectWeight();
                        if (!curIndex || (curWeight < evolveWeight)) {
                            evolveWeight = curWeight;
                            evolveIndex = curIndex;
                        }
                    }

                    // Loop until a unique new state is found.
                    FireStarterState& oldState = allStates[evolveIndex];

                    // Keep varying the code until a unique set of instructions is found.
                    const FireStarterCode* bestCode = nullptr;
                    do {
                        // Copy and setup the new candidate state.
                        // Note: The bestCodes are initialized instead of copied.
                        curState = oldState;

                        // Copy the program and result from the random index.
                        curState.CopyCode(allStates[evolveIndex]);

                        // Note: The age and generation will increment even if the current instructions are not unique by design.
                        curState.m_age = ++oldState.m_age;
                        curState.m_generation = ++oldState.m_generation;
                        curState.m_evolution++;
                        curState.m_index = index;
                        curState.m_evolveIndex = evolveIndex;
                        curState.m_oldResult = oldState.MaxResults();
                        curState.m_evolveWeight = evolveWeight;
                        curState.InitGenerationSeed();
                        curState.m_timer.Start();

                        // Select the best candidate evolution variation.
                        execute->ExecuteSelect(curState, selectSettings);
                    } while (testedCodes.count(curState.CodeVector()));

                    // Add the instructions to the set of unique instructions.
                    testedCodes.insert(curState.CodeVector());

                    // The optimize pass should be compared with the best result of the last generation and not from the select code evolution.
                    curState.m_bestResult = oldState.m_bestResult;
                }

                // Generate the evaluate code
                GenerateCode(job);
            } else
                // Pass along the null job to cause the next stage to exit.
                m_evolveManager->AddCode();
        }
    });
    return true;
} // SelectStates

bool FireStarterEvolve::EvolveStates(unsigned long long test, const FireStarterSettings& evolveSettings, FireStarterStates& allStates, TestedCodes& testedCodes, unsigned long long generation)
{
    DispatchSync([this, test, &evolveSettings, &allStates, &testedCodes, generation] {
        unsigned long long numStates = evolveSettings.m_states;
        unsigned long long randomStates = generation == 0 ? numStates : FIRESTARTER_EVOLVE_RANDOM;
        unsigned long long totalStates = allStates.size();

        for (unsigned long long index = 0; index < numStates; index++) {
            FireStarterJob* job = m_evolveManager->GetFree();
            if (job) {
                // Evolved states are generated first so they cannot used the random states created in this generation.
                if (index < randomStates) {
                    // Randomize the instructions.
                    FireStarterState& curState = job->m_state;
                    curState.InitState(evolveSettings, 0, index, allStates.size(), test);

                    // Keep randomizing instructions until a unique set of instructions is found.
                    do {
                        // Randomize the program.
                        curState.RandomCode();

                        // Optimize the program registers.
                        curState.OptimizeCode();
                    } while (testedCodes.count(curState.CodeVector()));

                    // Add the instructions to the set of unique instructions.
                    testedCodes.insert(curState.CodeVector());

                    // Add the state to the list of active states.
                    allStates.push_back(curState);
                } else {
                    // Find the best state to evolve based on a weighting algorithm.
                    float evolveWeight = 0.0f;
                    size_t evolveIndex = 0;
                    for (size_t curIndex = 0; curIndex < totalStates; curIndex++) {
                        FireStarterState& curState = allStates[curIndex];
                        float curWeight = curState.EvolveWeight();
                        if (!curIndex || (curWeight < evolveWeight)) {
                            evolveWeight = curWeight;
                            evolveIndex = curIndex;
                        }
                    }

                    // Loop until a unique new state is found.
                    for (;;) {
                        // Copy and setup the new candidate state.
                        FireStarterState& oldState = allStates[evolveIndex];
                        FireStarterState& curState = job->m_state;
                        curState = oldState;

                        // Note: The age and generation will increment even if the current instructions are not unique by design.
                        curState.m_age = ++oldState.m_age;
                        curState.m_generation = ++oldState.m_generation;
                        curState.m_evolution++;
                        curState.m_index = index;
                        curState.m_evolveIndex = evolveIndex;
                        curState.m_oldResult = curState.MaxResults();
                        curState.m_evolveWeight = evolveWeight;
                        curState.InitGenerationSeed();
                        curState.m_timer.Start();

                        // Copy the program and result from the random index.
                        curState.CopyCode(allStates[evolveIndex]);

                        // Randomize 2 and 3 instructions alternately.
                        curState.RandomInstruction();
                        curState.RandomInstruction();
                        if (generation & 1)
                            curState.RandomInstruction();

                        // Optimize the program registers.
                        curState.OptimizeCode();

                        // Check if the optimized instructions are unique.
                        if (!testedCodes.count(curState.CodeVector())) {
                            // Add the instructions to the set of unique instructions.
                            testedCodes.insert(curState.CodeVector());
                            break;
                        }
                    }
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
    std::string programName = FireStarterSettings::ProgramName(FIRESTARTER_OPTIMIZE);
    if (!FireStarterSource::LoadSource(m_executeCode, programName)) {
        printf("%s could not be loaded!\n", programName.c_str());
        std::terminate();
    }
    m_evolveManager = manager;
    m_evolveIndex = index;
    m_evolveGenerate = new FireStarterGenerate(Context());
} // FireStarterEvolve

FireStarterEvolve::~FireStarterEvolve(void)
{
    Synchronize();
    delete m_evolveGenerate;
} // ~FireStarterEvolve
