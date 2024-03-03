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

bool FireStarterComplete::DisplayResults(FireStarterState& bestState, const FireStarterState& state)
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
} // DisplayResults

void FireStarterComplete::CompleteStatus(const FireStarterState& bestState, const FireStarterState& state)
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
    m_fireShow.ShowStatus(bestState, state, duration, m_generationTime, m_bestError);
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
            DisplayResults(bestState, newState);

            // Update the render status after every pass.
            CompleteStatus(bestState, newState);
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

            // Keep the valid results.
            if (newState.m_optimizeValid)
                oldState = newState;

            // Update the best state and display the results.
            DisplayResults(bestState, oldState);

            // Update the render status after every pass.
            CompleteStatus(oldState, newState);
            oldState.m_timer.StartDate();

            // Has the completion condition been met?
            if (newState.PassMode() == FIRESTARTER_OPTIMIZE)
                result = newState.m_optimize_pass >= newState.Settings().m_optimize;
            else {
                unsigned long long age = newState.m_generation - oldState.m_generation;
                result = (age >= newState.Settings().m_attempts) || (bestState.Settings().m_attempts && (oldState.m_maxResult <= newState.Settings().m_evolveTarget));
            }
        }
    }, sync);
    return result;
} // CompleteState

// Replace old states with new ones when better and resort the list.
bool FireStarterComplete::CompleteStates(FireStarterState& displayState, FireStarterState& bestState, FireStarterStates& allStates, size_t numStates)
{
    bool result = false;
    DispatchSync([this, &displayState, &bestState, &allStates, numStates, &result] {
        // Sort the states as they are received.
        FireStarterStates newStates(numStates);
        bool abort = false;

        for (size_t i = 0; i < numStates; i++) {
            // Get the next job in the order they are completed.
            FireStarterJob* job = m_manager->GetComplete();
            if (!job) {
                abort = true;
                break;
            }

            // Sort the completed jobs by index.
            size_t index = job->m_state.m_index;
            if (!newStates[index].Results())
                newStates[index] = job->m_state;
            else {
                printf("Error: Completed state index already received: %llu\n", index);
                std::terminate();
            }
            m_manager->AddFree(job);
        }

        if (!abort) {
            for (size_t i = 0; i < numStates; i++) {
                FireStarterState& newState = newStates[i];

                // Keep the valid results.
                if (newState.m_optimizeValid) {
                    // Update the current best state.
                    bool isBestState = false;
                    if (newState.m_maxResult < bestState.m_maxResult) {
                        bestState = newState;
                        isBestState = true;
                    }

                    // Update the render status after every pass.
                    CompleteStatus(bestState, newState);

                    // Clear the children of successful states.
                    newState.m_children1 = 0;
#if FIRESTARTER_EVOLVE_NEW
                    // Replace the old state with the new state if it improved.
                    FireStarterState& oldState = allStates[newState.m_id];
                    if (newState.m_maxResult < oldState.m_maxResult)
                        oldState = newState;
#else
                    // If this is an evolved state...
                    if (newState.m_evolution) {
                        // Add the evolved state to the list of all successful states.
                        newState.m_index = allStates.size();
                        allStates.push_back(newState);
                    } else
                        // Update the new random state in the list of all successful states.
                        allStates[newState.m_id] = newState;
#endif

                    // Update the best state and display the results.
                    DisplayResults(displayState, newState);
                } else
                    // Update the render status after every pass.
                    CompleteStatus(bestState, newState);
            }

            // Has the evolve target or the maximum number of attempts been reached?
            unsigned long long age = newStates[0].m_generation - bestState.m_generation;
            if ((bestState.m_maxResult <= bestState.Settings().m_evolveTarget) || (bestState.Settings().m_attempts && (age >= bestState.Settings().m_attempts)))
                result = true;

            // When the quickest solution is desired, stop as soon as the best state among all the streams has reached the evolve target.
#if !FIRESTARTER_EVOLVE_TEST
            if (displayState.m_maxResult <= displayState.Settings().m_evolveTarget)
                result = true;
#endif
        }
    });
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