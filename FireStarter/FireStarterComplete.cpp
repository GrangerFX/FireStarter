#include "FireStarterComplete.h"
#include "FireStarterState.h"
#include "FireStarterSource.h"

void FireStarterComplete::SaveBestState(const FireStarterState& bestState)
{
    std::string bestStateCode;
    bestState.SaveState(bestStateCode);
    std::string saveFile = "FireStarter_LoadState.h";
    FireStarterSource::SaveSource(bestStateCode, saveFile);
    if (bestState.Settings().m_tests) {
        std::string savePath = Format("Logs\\%s_%s", FileNameDate(SimpleTimer::RunSecond()).c_str(), saveFile.c_str());
        FireStarterSource::SaveSource(bestStateCode, savePath);
    }
} // SaveBestState

void FireStarterComplete::SaveBestCode(const FireStarterState& bestState)
{
    static std::string executeCode;
    if (executeCode.empty())
        FireStarterSource::LoadSource(executeCode, bestState.Settings().m_mode == FIRESTARTER_EVOLVE_GPU ? EVOLVE_PROGRAM_NAME : OPTIMIZE_PROGRAM_NAME);
    if (!executeCode.empty()) {
        // Generate the evaluate function
        std::string variationsCode;
        bestState.SaveStats(variationsCode);
        unsigned int variations = bestState.Settings().m_variations;
        for (unsigned int i = 0; i < variations; i++)
            bestState.SaveVariation(i, variationsCode);

        // Create the units code by replacing the evaluate and optimize sections of the optimize code.
        std::string bestCode = executeCode;
        FireStarterSource::UpdateProgram(bestCode, variationsCode, VARIATIONS_CODE);
        FireStarterSource::UpdateProgram(bestCode, bestState.m_evaluateCode, EVALUATE_CODE);
        std::string saveFile = "FireStarter_BestCode.cu";
        FireStarterSource::SaveSource(bestCode, saveFile);
        if (bestState.Settings().m_tests) {
            std::string savePath = Format("Logs\\%s_%s", FileNameDate(SimpleTimer::RunSecond()).c_str(), saveFile.c_str());
            FireStarterSource::SaveSource(bestCode, savePath);
        }
    }
} // SaveBestCode

void FireStarterComplete::SaveSolution(const FireStarterState& bestState)
{
    std::string solutionCode;
    m_generate->GenerateSolution(bestState, solutionCode, m_solutionTargetCode);
    std::string saveFile = "FireStarter_Solution.h";
    std::string savePath = bestState.Settings().m_tests ? Format("Logs\\%s_%s", FileNameDate(SimpleTimer::RunSecond()).c_str(), saveFile.c_str()) : saveFile;
    FireStarterSource::SaveSource(solutionCode, savePath);
} // SaveSolution

bool FireStarterComplete::LoadSolutionTargetCode(void)
{
    if (!FireStarterSource::LoadSource(m_solutionTargetCode, "FireStarterTarget.h"))
        return false;
    FireStarterSource::ReplaceSource(m_solutionTargetCode, "Target", "SolutionTarget");
    FireStarterSource::ReplaceSource(m_solutionTargetCode, "TARGET_", "SOLUTION_");
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

void FireStarterComplete::CompleteStatus(const FireStarterState& bestState, FireStarterState& state, unsigned long long generation)
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
    m_fireShow.ShowStatus(bestState, state, generation, m_generationTime, duration, m_bestError);
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
            CompleteStatus(bestState, newState, newState.m_generation);
            result = true;
        }
    }, sync);
    return result;
} // CompleteRandom

bool FireStarterComplete::CompleteEvolveGPU(FireStarterState& bestState, FireStarterState& state, bool sync)
{
    bool result = false;
    Dispatch([this, &bestState, &state, &result] {
        // Update the best state and display the results.
        DisplayResults(bestState, state);

        // Update the render status after every pass.
        CompleteStatus(bestState, state, state.m_generation);

        // Has the completion condition been met?
        if (state.PassMode() == FIRESTARTER_OPTIMIZE)
            result = state.m_optimize_pass >= state.Settings().m_optimize;
        else {
            unsigned long long age = state.m_generation - bestState.m_generation;
            if ((bestState.m_maxResult <= bestState.Settings().m_evolveTarget) || (bestState.Settings().m_attempts && (age >= bestState.Settings().m_attempts)))
                result = true;
        }
    }, sync);
    return result;
} // CompleteEvolveGPU

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
            oldState.m_timer.Start();

            // Has the completion condition been met?
            if (newState.PassMode() == FIRESTARTER_OPTIMIZE)
                result = newState.m_optimize_pass >= newState.Settings().m_optimize;
            else {
                unsigned long long age = newState.m_generation - oldState.m_generation;
                if ((bestState.m_maxResult <= bestState.Settings().m_evolveTarget) || (bestState.Settings().m_attempts && (age >= bestState.Settings().m_attempts)))
                    result = true;
            }
        }
    }, sync);
    return result;
} // CompleteState

// Replace old states with new ones when better and resort the list.
bool FireStarterComplete::CompleteStates(FireStarterState& displayState, FireStarterState& bestState, FireStarterStates& allStates, size_t numStates, unsigned long long generation)
{
    bool result = false;
    DispatchSync([this, &displayState, &bestState, &allStates, numStates, generation, &result] {
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
                        bestState.m_age = 1;
                        isBestState = true;
                    }

                    // Update the render status after every pass.
                    CompleteStatus(bestState, newState, generation);

                    // Replace the old state with the new state if it improved.
                    FireStarterState& oldState = allStates[newState.m_id];
                    if (newState.m_maxResult < oldState.m_maxResult) {
                        newState.m_generation = oldState.m_generation + 1;
                        newState.m_age = 1;
                        oldState = newState;
                    }

                    // Update the best state and display the results.
                    DisplayResults(displayState, newState);
                } else
                    // Update the render status after every pass.
                    CompleteStatus(bestState, newState, generation);
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