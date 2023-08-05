#include "FireStarterComplete.h"
#include "FireStarterState.h"
#include "FireStarterCode.h"

void FireStarterComplete::SaveBestState(const FireStarterState& bestState)
{
    std::string bestStateCode;
    bestState.SaveState(bestStateCode);
    FireStarterCode::SaveCode("FireStarter_LoadState.h", bestStateCode);
} // SaveBestState

void FireStarterComplete::SaveBestCode(const FireStarterState& bestState)
{
    static std::string optimizeCode;
    if (optimizeCode.empty())
        FireStarterCode::LoadCode("FireOptimizer.cu", optimizeCode);
    if (!optimizeCode.empty()) {
        // Generate the evaluate function
        std::string evaluateCode;
        bestState.SaveStats(evaluateCode);
        unsigned int variations = bestState.Settings().m_variations;
        for (unsigned int i = 0; i < variations; i++)
            bestState.SaveVariation(i, evaluateCode);
        m_generate->GenerateEvaluate(bestState, evaluateCode);

        // Create the units code by replacing the evaluate and optimize sections of the optimize code.
        std::string bestCode = optimizeCode;
        FireStarterCode::UpdateProgram(bestCode, evaluateCode, EVALUATE_CODE);
        FireStarterCode::SaveCode("FireStarter_BestCode.cu", bestCode);
    }
} // SaveBestCode

void FireStarterComplete::SaveSolution(const FireStarterState& bestState)
{
    std::string solutionCode;
    m_generate->GenerateSolution(bestState, solutionCode, m_solutionTargetCode);
    FireStarterCode::SaveCode("FireStarter_Solution.h", solutionCode);
} // SaveSolution

void FireStarterComplete::SaveBest(const FireStarterState& evolveState)
{
    // Save the best state among multiple parallel streams.
    static std::mutex bestStateMutex;
    static FireStarterState bestState;
    if ((bestState.m_maxResult < 0.0f) || (evolveState.m_maxResult < bestState.m_maxResult)) {
        bestStateMutex.lock();
        if ((bestState.m_maxResult < 0.0f) || (evolveState.m_maxResult < bestState.m_maxResult)) {
            // Update the best state.
            bestState = evolveState;
            DispatchSync([this] {
                SaveBestState(bestState);

                // Update the best code on disk.
                SaveBestCode(bestState);

                // Update the solution code on disk.
                SaveSolution(bestState);
            });
        }
        bestStateMutex.unlock();
    }
} // SaveBest

bool FireStarterComplete::LoadSolutionTargetCode(void)
{
    if (!FireStarterCode::LoadCode("FireStarterTarget.h", m_solutionTargetCode))
        return false;
    FireStarterCode::ReplaceCode(m_solutionTargetCode, "Target", "SolutionTarget");
    FireStarterCode::ReplaceCode(m_solutionTargetCode, "TARGET_", "SOLUTION_");
    return true;
} // LoadSolutionTargetCode

bool FireStarterComplete::CompleteResults(FireStarterState& bestState, const FireStarterState& state, float oldResult)
{
    // Get the result.
    static std::mutex bestStateMutex; // Shared among all FireStarterComplete objects.
    bestStateMutex.lock();
    bool update = state.m_maxResult < bestState.m_maxResult;
    if (update)
        // Update the best state.
        bestState = state;

    // Update the display state.
    FireStarterState displayState = bestState;
    bestStateMutex.unlock();

    // If the best state was updated, save the stat and draw the results.
    if (update) {
        // Test the current state.
        m_testError = displayState.TestResult();

        // Save the new best state.
        if (m_saveBestState) {
            // Update the best state.
            if (!displayState.m_optimizePass)
                SaveBestState(displayState);

            // Update the best code on disk.
            SaveBestCode(displayState);

            // Update the solution code on disk.
            SaveSolution(displayState);
        }

        // Draw the graphs for both variations.
        m_fireShow.FireShow(displayState);
    }

    const FireStarterSettings& settings = state.Settings();
    float result = state.m_maxResult;
    double duration = state.m_timer.Duration();

    // Calculate the average time per generation.
    if (settings.m_mode == FIRESTARTER_RANDOM) {
        if (m_resultsCount == 0)
            m_generationTime = duration;
        else if (m_resultsCount == 1)
            m_generationTime = duration - m_resultsTime;
        else
            m_generationTime = (m_generationTime * m_resultsCount + (duration - m_resultsTime)) / (m_resultsCount + 1);
        m_resultsTime = duration;
    } else {
#if 1
        if (m_resultsTime == 0.0) {
            m_resultsCount = 0;
            m_totalResult = 0.0;
            m_resultsGeneration = 0;
            m_generationTime = 0.0;
            m_resultsTime = duration;
        } else {
            m_resultsGeneration = state.m_generation;
            m_generationTime = (duration - m_resultsTime) / settings.m_units;
            m_resultsTime = duration;
        }
#else
        if (!state.m_generation) {
            m_resultsCount = 0;
            m_totalResult = 0.0;
            m_resultsGeneration = 0;
            m_generationTime = 0.0;
            m_resultsTime = duration;
        } else if (state.m_generation != m_resultsGeneration) {
            m_resultsGeneration = state.m_generation;
            m_generationTime = (duration - m_resultsTime) / settings.m_units;
            m_resultsTime = duration;
        }
#endif
    }

    // Update the render status after every pass.
    m_totalResult += result;
    double average = m_totalResult / ++m_resultsCount;
    m_fireShow.RenderStatus(displayState, state, duration, m_generationTime, oldResult, average, m_testError);

    // Has the completion condition been met?
    return state.m_generation - displayState.m_generation < settings.m_attempts;
} // CompleteResults

bool FireStarterComplete::CompleteRandom(FireStarterState& bestState, bool sync)
{
    bool result = false;
    Dispatch([this, &bestState, &result] {
        // Get the completed job.
        // Note: The jobs may be received out of order.
        FireStarterJob* job = m_manager->GetComplete();
        if (job) {
            // Output job queue status.
            //  m_output.Output(Format("Free: %zu %f  Code: zu %f  Compile: %zu %f  Complete: %zu %f\n", manager->SizeFree(), manager->TimeFree(), manager->SizeCode(), manager->TimeCode(), manager->SizeCompile(), manager->TimeCompile(), manager->SizeComplete(), manager->TimeComplete()));

            // Update the best state and display the results.
            CompleteResults(bestState, job->m_state);
            m_manager->AddFree(job);
            result = true;
        }
    }, sync);
    return result;
} // CompleteRandom

bool FireStarterComplete::CompleteState(FireStarterState& bestState, FireStarterState& oldState, bool sync)
{
    bool result = false;
    Dispatch([this, &bestState, &oldState, &result] {
        // Get the next job in the order they are completed.
        FireStarterJob* job = m_manager->GetComplete();
        if (!job)
            result = false;
        else {
            FireStarterState newState = job->m_state;
            m_manager->AddFree(job);

            result = CompleteResults(bestState, newState, oldState.m_maxResult);
            if ((!newState.m_generation) || (newState.m_maxResult < oldState.m_maxResult)) {
                oldState = newState;
                oldState.m_evolution++;
            }
        }
    }, sync);
    return result;
} // CompleteState

bool FireStarterComplete::CompleteStates(std::vector<FireStarterState>& allStates, size_t generation, bool sync)
{
    bool result = false;
    Dispatch([this, &allStates, generation, &result] {
        // Sort the states as they are received.
        size_t numStates = allStates.size();
        FireStarterState bestState = allStates[0];
        std::vector<FireStarterState> newStates(numStates);
        bool abort = false;
        for (size_t i = 0; i < numStates; i++) {
            // Get the next job in the order they are completed.
            FireStarterJob* job = m_manager->GetComplete();
            if (!job) {
                abort = true;
                break;
            }

            // Output job queue status.
            //  m_output.Output(Format("Free: %zu %f  Code: %zu %f  Compile: %zu %f  Complete: %uz %f\n", manager->SizeFree(), manager->TimeFree(), manager->SizeCode(), manager->TimeCode(), manager->SizeCompile(), manager->TimeCompile(), manager->SizeComplete(), manager->TimeComplete()));

            // Sort the completed jobs.
            newStates[job->m_state.m_index] = job->m_state;
            m_manager->AddFree(job);
        }

        if (!abort) {
            // Update the best state and display the results.
            for (size_t i = 0; i < numStates; i++) {
                FireStarterState& oldState = allStates[i];
                FireStarterState& newState = newStates[oldState.m_index];
                result |= CompleteResults(bestState, newState, oldState.m_maxResult);
                if ((!newState.m_generation) || (newState.m_maxResult < oldState.m_maxResult)) {
                    oldState = newState;
                    oldState.m_evolution++;
                }
            }

            // Sort the states, best first.
            for (size_t i = 0; i < numStates; i++) {
                size_t min = i;
                unsigned long long minIndex = allStates[i].m_index;
                float minResult = allStates[i].m_maxResult;
                for (size_t j = i + 1; j < numStates; j++) {
                    unsigned long long currentIndex = allStates[j].m_index;
                    float currentResult = allStates[j].m_maxResult;
                    if ((currentResult < minResult) || ((currentResult == minResult) && (currentIndex < minIndex))) {
                        minIndex = currentIndex;
                        minResult = currentResult;
                        min = j;
                    }
                }
                if (min != i) {
                    FireStarterState temp = allStates[i];
                    allStates[i] = allStates[min];
                    allStates[min] = temp;
                }
                allStates[i].m_index = i;
            }
        }
    }, sync);
    return result;
} // CompleteStates

void FireStarterComplete::CompleteSolution(bool sync)
{
    Dispatch([this] {
        m_fireShow.FireSolution();
    }, sync);
} // CompleteSolution

FireStarterComplete::FireStarterComplete(FireStarterManager* manager, const FireStarterWindow& window, bool saveBestState) : CUDAThread("FireStarterComplete"), m_window(window), m_fireShow(window)
{
    m_manager = manager;
    m_saveBestState = saveBestState;
    DispatchSync([this] {
        if (LoadSolutionTargetCode())
            // Create the code generator.
            m_generate = new FireStarterGenerate(Context());
    });
} // FireStarterComplete

FireStarterComplete::~FireStarterComplete(void)
{
} // ~FireStarterComplete