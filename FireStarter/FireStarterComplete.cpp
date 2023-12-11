#include "FireStarterComplete.h"
#include "FireStarterState.h"
#include "FireStarterCode.h"

void FireStarterComplete::SaveBestState(const FireStarterState& bestState)
{
    std::string bestStateCode;
    bestState.SaveState(bestStateCode);
    std::string saveFile = "FireStarter_LoadState.h";
    std::string savePath = bestState.Settings().m_tests ? Format("Logs\\%s_%s", FileNameDate(SimpleTimer::RunSecond()).c_str(), saveFile.c_str()) : saveFile;
    FireStarterCode::SaveCode(savePath, bestStateCode);
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
        std::string saveFile = "FireStarter_BestCode.h";
        std::string savePath = bestState.Settings().m_tests ? Format("Logs\\%s_%s", FileNameDate(SimpleTimer::RunSecond()).c_str(), saveFile.c_str()) : saveFile;
        FireStarterCode::SaveCode(savePath, bestCode);
    }
} // SaveBestCode

void FireStarterComplete::SaveSolution(const FireStarterState& bestState)
{
    std::string solutionCode;
    m_generate->GenerateSolution(bestState, solutionCode, m_solutionTargetCode);
    std::string saveFile = "FireStarter_Solution.h";
    std::string savePath = bestState.Settings().m_tests ? Format("Logs\\%s_%s", FileNameDate(SimpleTimer::RunSecond()).c_str(), saveFile.c_str()) : saveFile;
    FireStarterCode::SaveCode(savePath, solutionCode);
} // SaveSolution

bool FireStarterComplete::LoadSolutionTargetCode(void)
{
    if (!FireStarterCode::LoadCode("FireStarterTarget.h", m_solutionTargetCode))
        return false;
    FireStarterCode::ReplaceCode(m_solutionTargetCode, "Target", "SolutionTarget");
    FireStarterCode::ReplaceCode(m_solutionTargetCode, "TARGET_", "SOLUTION_");
    return true;
} // LoadSolutionTargetCode

bool FireStarterComplete::CompleteResults(FireStarterState& bestState, const FireStarterState& state)
{
    // Get the result.
    static std::mutex bestStateMutex; // Shared among all FireStarterComplete objects.
    bestStateMutex.lock();
    bool update = state.m_optimizeValid && (state.m_maxResult < bestState.m_maxResult);
    if (update)
        // Update the best state.
        bestState = state;

    // Update the display state.
    FireStarterState displayState = bestState;
    bestStateMutex.unlock();

    // If the best state was updated, save the stat and draw the results.
    if (update) {
        // Test the current state.
        m_bestError = displayState.TestResult();

        // Save the new best state.
        if (m_saveBestState) {
            // Update the best state.
            SaveBestState(displayState);

            // Update the best code on disk.
            SaveBestCode(displayState);

            // Update the solution code on disk.
            SaveSolution(displayState);
        }

        // Draw the graphs for both variations.
        m_fireShow.FireShow(displayState);
    }

     return update;
} // CompleteResults

void FireStarterComplete::CompleteStatus(const FireStarterState& bestState, const FireStarterState& state, unsigned long long generation, float oldResult, float newResult)
{
    const FireStarterSettings& settings = state.Settings();
    double duration = SimpleTimer::RunDuration();

    // Calculate the average time per generation.
    if (settings.m_mode == FIRESTARTER_RANDOM) {
        if (m_resultsCount == 0)
            m_generationTime = duration;
        else if (m_resultsCount == 1)
            m_generationTime = duration - m_resultsTime;
        else
            m_generationTime = (m_generationTime * m_resultsCount + (duration - m_resultsTime)) / (m_resultsCount + 1);
    } else
        m_generationTime = state.m_timer.Duration();
    m_resultsTime = duration;
    m_resultsCount++;

    // Update the status text.
    m_fireShow.ShowStatus(bestState, state, generation, duration, m_generationTime, oldResult, newResult, m_bestError);
} // CompleteStatus

bool FireStarterComplete::CompleteRandom(FireStarterState& bestState, bool sync)
{
    bool result = false;
    Dispatch([this, &bestState, &result] {
        // Get the completed job.
        // Note: The jobs may be received out of order.
        FireStarterJob* job = m_manager->GetComplete();
        if (job) {
            FireStarterState newState = job->m_state;
            m_manager->AddFree(job);

            // Update the best state and display the results.
            CompleteResults(bestState, newState);

            // Update the render status after every pass.
            CompleteStatus(bestState, newState, newState.m_generation, newState.m_maxResult, newState.m_maxResult);
            result = true;
        }
    }, sync);
    return result;
} // CompleteRandom

bool FireStarterComplete::CompleteState(FireStarterState& bestState, FireStarterState& oldState, bool sync)
{
    bool result = true;
    Dispatch([this, &bestState, &oldState, &result] {
        // Get the next job in the order they are completed.
        FireStarterJob* job = m_manager->GetComplete();
        if (!job)
            result = true;
        else {
            FireStarterState newState = job->m_state;
            m_manager->AddFree(job);

            float oldResult = oldState.m_maxResult;
            float newResult = newState.m_maxResult;
            if (!newState.m_generation || (newState.m_optimizeValid && (newState.m_maxResult < oldState.m_maxResult))) {
                oldState = newState;
                oldState.m_evolution++;
            }

            // Update the best state and display the results.
            CompleteResults(bestState, oldState);

            // Update the render status after every pass.
            CompleteStatus(oldState, oldState, newState.m_generation, oldResult, newResult);
            oldState.m_timer.StartDate();

            // Has the completion condition been met?
            unsigned long long age = newState.m_generation - oldState.m_generation;
            if (newState.m_optimizePass)
                result = age >= newState.Settings().m_optimize;
            else
                result = (age >= newState.Settings().m_attempts) || (oldState.m_maxResult <= newState.Settings().m_evolveTarget);
        }
    }, sync);
    return result;
} // CompleteState

// Replace old states with new ones when better and resort the list.
bool FireStarterComplete::CompleteStates(FireStarterState& bestState, std::vector<FireStarterState>& allStates, bool sync)
{
    bool result = false;
    Dispatch([this, &bestState, &allStates, &result] {
        // Sort the states as they are received.
        size_t numStates = allStates.size();
        std::vector<FireStarterState> newStates(numStates);
        bool abort = false;

        for (size_t i = 0; i < numStates; i++) {
            // Get the next job in the order they are completed.
            FireStarterJob* job = m_manager->GetComplete();
            if (!job) {
                abort = true;
                break;
            }

            // Sort the completed jobs by index.
            // Note: Must be by index and not id since allStates and newStates must be in the same order for the code below.
            size_t index = job->m_state.m_index;
            if (!newStates[index].Results())
                newStates[index] = job->m_state;
            else
                printf("Error: Completed state index already received: %llu\n", index);
            m_manager->AddFree(job);
        }

        if (!abort) {
            FireStarterState* firstState = &allStates[0];
            unsigned long long generation = newStates[0].m_generation;

            // New sorting algorithm.
#if 1
            if (!generation) {
                // First generation: All the states are updated and sorted.
                for (size_t i = 0; i < numStates; i++) {
                    FireStarterState& newState = newStates[i];
                    FireStarterState& oldState = allStates[i];
                    float oldResult = oldState.m_maxResult;
                    float newResult = newState.m_maxResult;
                    oldState = newState;

                    // Update the current best state.
                    if (newState.m_maxResult < firstState->m_maxResult)
                        firstState = &newState;

                    // Update the best state and display the results.
                    CompleteResults(bestState, oldState);

                    // Update the render status after every pass.
                    CompleteStatus(*firstState, oldState, newState.m_generation, oldResult, newResult);
                    oldState.m_timer.StartDate();
                }

                // Sort the states, least maximum result first.
                for (size_t i = 0; i < numStates; i++) {
                    size_t min = i;
                    float minResult = allStates[i].m_maxResult;
                    for (size_t j = i + 1; j < numStates; j++) {
                        float currentResult = allStates[j].m_maxResult;
                        if (currentResult < minResult) {
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
            } else {
                // Later generations: The worst states in the list are replaced by the successful evolution states.
                std::vector<FireStarterState> addedStates;
                float worstResult = allStates[numStates - 1].m_maxResult;
                for (size_t i = 0; i < numStates; i++) {
                    FireStarterState& newState = newStates[i];
                    FireStarterState& oldState = allStates[i];
                    float oldResult = oldState.m_maxResult;
                    float newResult = newState.m_maxResult;
                    if (newState.m_optimizeValid) {
                        addedStates.push_back(newState);

                        // Update the current best state.
                        if (newState.m_maxResult < firstState->m_maxResult)
                            firstState = &newState;

                        // Update the best state and display the results.
                        CompleteResults(bestState, newState);

                        // Update the render status after every pass.
                        CompleteStatus(*firstState, newState, newState.m_generation, worstResult, newResult);
                    } else {
                        // Update the best state and display the results.
                        CompleteResults(bestState, oldState);

                        // Update the render status after every pass.
                        CompleteStatus(*firstState, oldState, newState.m_generation, worstResult, newResult);
                    }
                    oldState.m_timer.StartDate();
                }

                // Sort the states by maxResult, least first.
                for (size_t i = 0; i < addedStates.size(); i++) {
                    FireStarterState state = addedStates[i];
                    float minResult = state.m_maxResult;
                    for (size_t j = 0; j < numStates; j++) {
                        float currentResult = allStates[j].m_maxResult;
                        if (currentResult >= minResult) {
                            FireStarterState temp = allStates[j];
                            allStates[j] = state;
                            allStates[j].m_index = j;
                            state = temp;
                            minResult = currentResult;
                        }
                    }
                }
            }
#endif

            // Modified sorting algorithm to replace the worse of the two states.
#if 0
            bool found = false;
            for (size_t i = 0; i < numStates; i++) {
                FireStarterState& newState = newStates[i];
                FireStarterState& oldState = allStates[MAX(i, newState.m_copy_index)];
                float oldResult = oldState.m_maxResult;
                float newResult = newState.m_maxResult;

                if (newState.m_optimizeValid && (newResult < oldResult)) {
                    oldState = newState;
                    found = true;
                }

                // Update the current best state.
                if (newResult < firstState->m_maxResult)
                    firstState = &newState;

                // Update the best state and display the results.
                CompleteResults(bestState, oldState);

                // Update the render status after every pass.
                CompleteStatus(*firstState, oldState, newState.m_generation, oldResult, newResult);
                oldState.m_timer.StartDate();
            }

            // Sort the states, least maximum result first.
            if (found) {
                for (size_t i = 0; i < numStates; i++) {
                    size_t min = i;
                    float minResult = allStates[i].m_maxResult;
                    for (size_t j = i + 1; j < numStates; j++) {
                        float currentResult = allStates[j].m_maxResult;
                        if (currentResult < minResult) {
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
#endif

            // Original sorting algorithm.
#if 0
            bool found = false;
            for (size_t i = 0; i < numStates; i++) {
                FireStarterState& newState = newStates[i];
                FireStarterState& oldState = allStates[i];
                float oldResult = oldState.m_maxResult;
                float newResult = newState.m_maxResult;

                if (!newState.m_generation) {
                    oldState = newState;
                    found = true;
                } else if (newState.m_optimizeValid) {
                    if (newResult < oldResult) {
                        oldState = newState;
                        oldState.m_evolution++;
                        found = true;
                    } else {
                        // Update the copy state if the new state was better.
                        FireStarterState& copyState = allStates[newState.m_copy_index];
                        float copyResult = copyState.m_maxResult;
                        if (newResult < copyResult) {
                            copyState = newState;
                            copyState.m_evolution++;
                            found = true;
                        }
                    }
                }

                // Update the current best state.
                if (newResult < firstState->m_maxResult)
                    firstState = &newState;

                // Update the best state and display the results.
                CompleteResults(bestState, oldState);

                // Update the render status after every pass.
                CompleteStatus(*firstState, oldState, newState.m_generation, oldResult, newResult);
                oldState.m_timer.StartDate();
            }

            // Sort the states, least maximum result first.
            if (found) {
                for (size_t i = 0; i < numStates; i++) {
                    size_t min = i;
                    float minResult = allStates[i].m_maxResult;
                    for (size_t j = i + 1; j < numStates; j++) {
                        float currentResult = allStates[j].m_maxResult;
                        if (currentResult < minResult) {
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
#endif

            // Has the evolve target or the maximum number of attempts been reached?
            unsigned long long age = generation - allStates[0].m_generation;
            if (newStates[0].m_optimizePass)
                result = age >= allStates[0].Settings().m_optimize;
            else
                result = (allStates[0].m_maxResult <= newStates[0].Settings().m_evolveTarget) || (age >= newStates[0].Settings().m_attempts);
        }
    }, sync);
    return result;
} // CompleteStates

FireStarterComplete::FireStarterComplete(FireStarterManager* manager, const FireStarterWindow& window, bool saveBestState) : CUDAThread("FireStarterComplete"), m_manager(manager), m_window(window), m_saveBestState(saveBestState), m_fireShow(window)
{
    DispatchSync([this] {
        if (LoadSolutionTargetCode())
            // Create the code generator.
            m_generate = new FireStarterGenerate(Context());
    });
} // FireStarterComplete

FireStarterComplete::~FireStarterComplete(void)
{
} // ~FireStarterComplete