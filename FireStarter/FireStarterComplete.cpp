#include "FireStarterComplete.h"
#include "FireStarterState.h"
#include "FireStarterSource.h"

void FireStarterComplete::SaveBestState(const FireStarterState& bestState)
{
    std::string bestStateCode;
    bestState.SaveState(bestStateCode);
    std::string saveFile = "FireStarter_LoadState.h";
    FireStarterSource::SaveSource(bestStateCode, saveFile);
    std::string savePath = Format("Logs\\%s_%s", FileNameDate(SimpleTimer::RunSecond()).c_str(), saveFile.c_str());
    FireStarterSource::SaveSource(bestStateCode, savePath);
} // SaveBestState

void FireStarterComplete::SaveBestCode(const FireStarterState& bestState)
{
    static std::string executeCode;
    if (executeCode.empty()) {
        std::string programName = bestState.Settings().ProgramName();
        FireStarterSource::LoadSource(executeCode, programName);
    }
    if (!executeCode.empty()) {
        // Generate the evaluate function
        std::string variationsCode;
        bestState.SaveStats(variationsCode);
        unsigned int variations = bestState.Settings().m_variations;
        for (unsigned int i = 0; i < variations; i++)
            bestState.SaveVariation(i, variationsCode);

        // Create the units code by replacing the evaluate and optimize sections of the optimize code.
        std::string bestCode = executeCode;
        FireStarterSource::UpdateProgram(bestCode, bestState.m_evaluateCode, EVALUATE_CODE);
        std::string saveFile = "FireStarter_BestCode.cu";
        FireStarterSource::SaveSource(bestCode, saveFile);
        std::string savePath = Format("Logs\\%s_%s", FileNameDate(SimpleTimer::RunSecond()).c_str(), saveFile.c_str());
        FireStarterSource::SaveSource(bestCode, savePath);
    }
} // SaveBestCode

void FireStarterComplete::SaveSolution(const FireStarterState& bestState)
{
    std::string solutionCode;
    m_generate->GenerateSolution(bestState, solutionCode, m_solutionTargetCode);
    std::string saveFile = "FireStarter_Solution.h";
    FireStarterSource::SaveSource(solutionCode, saveFile);
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

bool FireStarterComplete::UpdateBestState(FireStarterState& bestState, const FireStarterState& state)
{
    // Get the result.
    if (state.m_optimizeValid) {
        static std::mutex bestStateMutex; // Shared among all FireStarterComplete objects.
        bestStateMutex.lock();
        bool update = state.m_optimizeValid && ((state.m_maxResult < bestState.m_maxResult) || !bestState.m_optimizeValid);
        if (update) {
            // Update the best state.
            bestState = state;
            bestState.m_age = 0;
        } else
            bestState.m_age++;
        bestStateMutex.unlock();
        return update;
    }
    return false;
} // UpdateBestState

void FireStarterComplete::SaveResults(const FireStarterState& bestState)
{
    // Update the best state.
    SaveBestState(bestState);

    // Update the best code on disk.
    SaveBestCode(bestState);

    // Update the solution code on disk.
    SaveSolution(bestState);
} // SaveResults

void FireStarterComplete::DisplayResults(const FireStarterState& bestState)
{
    // Test the current state.
    m_bestError = bestState.TestResult(bestState.Settings().m_samples);

    // Save the new best state.
    if (m_saveBestState)
        SaveResults(bestState);

    // Draw the graphs for both variations.
    m_fireShow.FireShow(bestState);
} // DisplayResults

void FireStarterComplete::CompleteStatus(const FireStarterState& bestState, const FireStarterState& state, unsigned long long generation)
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

bool FireStarterComplete::CompleteState(FireStarterState& bestState, const FireStarterState& state)
{
    DispatchSync([this, &bestState, &state] {
        // Skip if the best state was already completed.
        if (!bestState.m_evolveComplete) {
            // Update the best state and display the results.
            if (UpdateBestState(bestState, state))
                DisplayResults(bestState);

            // Update the render status after every pass.
            CompleteStatus(bestState, state, state.m_generation);

            // Has the completion condition been met?
            if (bestState.m_maxResult < bestState.Settings().m_target)
                bestState.m_evolveComplete = true;
            else if (bestState.Settings().m_attempts) {
                unsigned long long bestAge = state.m_generation - bestState.m_generation;
                if (bestAge >= bestState.Settings().m_attempts)
                    bestState.m_evolveComplete = true;
            }
        }
    });
    return bestState.m_evolveComplete;
} // CompleteState

bool FireStarterComplete::CompleteRandom(FireStarterState& bestState, FireStarterState& state)
{
    DispatchSync([this, &bestState, &state] {
        // Get the next job in the order they are completed.
        FireStarterJob* job = m_manager->GetComplete();
        if (!job)
            bestState.m_evolveComplete = true;
        else {
            FireStarterState newState = job->m_state;
            m_manager->AddFree(job);

            // Keep the valid results.
            if (newState.m_optimizeValid)
                state = newState;

            // Update the best state and display the results.
            if (UpdateBestState(bestState, newState))
                DisplayResults(bestState);

            // Update the render status after every pass.
            CompleteStatus(state, newState);
            state.m_timer.Start();

            // Has the completion condition been met?
            if (bestState.m_maxResult < bestState.Settings().m_target)
                bestState.m_evolveComplete = true;
            else if (bestState.Settings().m_attempts) {
                unsigned long long bestAge = newState.m_generation - state.m_generation;
                if (bestAge >= bestState.Settings().m_attempts)
                    bestState.m_evolveComplete = true;
            }
        }
    });
    return bestState.m_evolveComplete;
} // CompleteRandom

// Replace old states with new ones when better and resort the list.
bool FireStarterComplete::CompleteStates(FireStarterState& displayState, FireStarterState& bestState, FireStarterStates& allStates, size_t numStates, unsigned long long generation)
{
    DispatchSync([this, &displayState, &bestState, &allStates, numStates, generation] {
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
            if (!newStates[index].Initialized())
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
                    bool isBestState = UpdateBestState(bestState, newState);

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
                    if (isBestState)
                        DisplayResults(bestState);
                } else
                    // Update the render status after every pass.
                    CompleteStatus(bestState, newState, generation);
            }


            // Has the evolve target or the maximum number of attempts been reached?
            if (bestState.m_maxResult < bestState.Settings().m_target)
                bestState.m_evolveComplete = true;
            else if (bestState.Settings().m_attempts) {
                unsigned long long bestAge = newStates[0].m_generation - bestState.m_generation;
                if (bestAge >= bestState.Settings().m_attempts)
                    bestState.m_evolveComplete = true;
            }

            // When the quickest solution is desired, stop as soon as the best state among all the streams has reached the evolve target.
#if !FIRESTARTER_EVOLVE_TEST
            if (displayState.m_maxResult <= displayState.Settings().m_target)
                bestState.m_evolveComplete = true;
#endif
        }
    });
    return bestState.m_evolveComplete;
} // CompleteStates

void FireStarterComplete::CompleteBestState(const FireStarterState& bestState)
{
    DispatchAsync([this, bestState] {
        SaveResults(bestState);
    });
} // CompleteBestState

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