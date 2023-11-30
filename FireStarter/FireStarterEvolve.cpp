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
    if (m_evolveOptimizeCode.empty())
        return false;
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

bool FireStarterEvolve::EvolveStates(const std::vector<FireStarterState>& allStates, TestedInstructions* testedInstructions, unsigned long long generation, bool sync)
{
    if (m_evolveOptimizeCode.empty())
        return false;

    Dispatch([this, &allStates, testedInstructions, generation] {
        FireStarterState bestState = allStates[0];
        size_t numStates = allStates.size();
        unsigned int numInstructions = bestState.Settings().m_instructions;
        float bestResult = bestState.m_maxResult;
        for (unsigned long long index = 0; index < allStates.size(); index++) {
            FireStarterJob* job = m_evolveManager->GetFree();
            if (job) {
                // Clone or randomize instructions in the later generations.
                FireStarterState& curState = job->m_state;
                curState = allStates[index];
                curState.m_generation = generation;

                // Randomize each generation and index.
                unsigned long long seed = curState.InitGenerationSeed();
                if (!generation) {
                    // Randomize the program for the first generation.
                    curState.RandomProgram(seed);

                    // Optimize the program registers.
                    curState.m_program.OptimizeRegisters();

                    // Add the instructions to the set of unique instructions.
                    testedInstructions->insert(curState.m_program.OptimizedInstructionsData());
                } else {
#if 1
                    // Select a random index in the best 25%.
                    size_t copyIndex = RANDOMMOD(seed, (numStates / 4) + 1);
#endif
#if 0
                    // Select a random index in the best 50%.
                    size_t copyIndex = RANDOMMOD(seed, (numStates + 1) / 2);
#endif
#if 0
                    // Select a random index lower but close to the current index.
                    size_t randomIndex = RANDOMMOD(seed, numStates / 2);
                    size_t copyIndex = index > randomIndex ? index - randomIndex : index;
#endif
#if 0               
                    // Randomly select an index to copy that is the same or better (lower) than the current index.
                    size_t copyIndex = index ? RANDOMMOD(seed, index) : 0;
#endif
                    // Save the copy index in the state.
                    curState.m_copy_index = copyIndex;
                    curState.m_copy_id = allStates[copyIndex].m_copy_id;
                    curState.m_maxResult = MAX(curState.m_maxResult, allStates[copyIndex].m_maxResult);

                    // Keep copying and randomizing instructions until a unique set of instructions is found.
                    unsigned int count = 0;
                    do {
                        // Copy the program from the random index.
                        curState.m_program = allStates[copyIndex].m_program;

                        // Randomize one instruction per 10 attempts.
                        unsigned int randomCount = (count / 10) + 1;
                        while (randomCount--)
                            curState.RandomInstruction(seed);

                        // Optimize the program registers.
                        curState.m_program.OptimizeRegisters();
                        count++;
                    } while (testedInstructions->count(curState.m_program.OptimizedInstructionsData()));

                    // Keep track of the tested instructions.
                    testedInstructions->insert(curState.m_program.OptimizedInstructionsData());
                }

                // Generate the evaluate code
                GenerateCode(job);
            } else
                // Pass along the null job to cause the next stage to exit.
                m_evolveManager->AddCode();
        }
    }, sync);
    return true;
} // EvolveStates

bool FireStarterEvolve::GenerateOptimize(const FireStarterState& initState)
{
    bool result = false;
    if (!m_evolveOptimizeCode.empty()) {
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
    }
    return result;
} // GenerateOptimize

FireStarterEvolve::FireStarterEvolve(FireStarterManager* manager, size_t index) : CUDAThread(Format("FireStarterEvolve%zu", index))
{
    m_evolveManager = manager;
    m_evolveIndex = index;
    FireStarterCode::LoadCode("FireOptimizer.cu", m_evolveOptimizeCode);
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
