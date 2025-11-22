#include "FireStarterComplete.h"
#include "FireStarterState.h"
#include "FireStarterSource.h"
#include "FireStarterUtil.h"

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
    if (!bestState.m_evaluateCode.empty()) {
        static std::string evolveProgramName;
        static std::string evolveProgram;
        if (evolveProgramName.empty())
            evolveProgramName = m_settings.EvolveProgramName();
        if (evolveProgram.empty() && !evolveProgramName.empty())
            FireStarterSource::LoadSource(evolveProgram, evolveProgramName);

        static std::string optimizeProgramName;
        static std::string optimizeProgram;
        if (optimizeProgramName.empty())
            optimizeProgramName = bestState.Settings().OptimizeProgramName();
        if (optimizeProgram.empty() && !optimizeProgramName.empty() && (optimizeProgramName != evolveProgramName))
            FireStarterSource::LoadSource(optimizeProgram, optimizeProgramName);

        // Save the best evolve program.
        if (!evolveProgram.empty()) {
            std::string bestCode = evolveProgram;
            FireStarterSource::UpdateProgram(bestCode, bestState.m_evaluateCode, EVALUATE_CODE);
            std::string savePath = Format("Logs\\%s_%s", FileNameDate(SimpleTimer::RunSecond()).c_str(), evolveProgramName.c_str());
            FireStarterSource::SaveSource(bestCode, savePath);
        }

        // Save the best optimize program.
        if (!optimizeProgram.empty()) {
            std::string bestCode = optimizeProgram;
            FireStarterSource::UpdateProgram(bestCode, bestState.m_evaluateCode, EVALUATE_CODE);
            std::string savePath = Format("Logs\\%s_%s", FileNameDate(SimpleTimer::RunSecond()).c_str(), optimizeProgramName.c_str());
            FireStarterSource::SaveSource(bestCode, savePath);

#if FIRESTARTER_SAVE_BESTCODE
            // Update the original optimize program with the best evolved code.
            FireStarterSource::SaveSource(bestCode, optimizeProgramName);
#endif
        }
    }
} // SaveBestCode

void FireStarterComplete::SaveSolution(const FireStarterState& bestState)
{
    static float bestSolution = 1.0e+12f;
    std::string saveFile;
    if (bestState.m_settings.m_mode == FIRESTARTER_MONEYMAKER)
        saveFile = "FireStarter_MoneyMakerSolution.h";
    else
        saveFile = "FireStarter_Solution.h";
    std::string savePath = bestState.Settings().m_tests ? Format("Logs\\%s_%s_%lld", FileNameDate(SimpleTimer::RunSecond()).c_str(), saveFile.c_str(), bestState.m_test) : saveFile;
    std::string solutionCode;

    m_generate->GenerateSolution(bestState, solutionCode, m_solutionTargetCode);
    FireStarterSource::SaveSource(solutionCode, savePath);
    if (bestState.m_precision < bestSolution) {
        bestSolution = bestState.m_precision;
        FireStarterSource::SaveSource(solutionCode, saveFile);
    }
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
        bool update = (state.m_optimizeValid && ((state.MaxResults() < bestState.MaxResults())) || !bestState.m_optimizeValid);
        if (update) {
            // Update the best state.
            bestState = state;

            // Test the precision of the results.
            if (bestState.m_settings.m_mode != FIRESTARTER_MONEYMAKER)
                bestState.m_precision = bestState.TestResults();

            // Reset the best state age to zero.
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

    if (bestState.Settings().m_mode != FIRESTARTER_SINSIM) {
        // Update the best code on disk.
        SaveBestCode(bestState);

        // Update the solution code on disk.
        SaveSolution(bestState);
    }
} // SaveResults

void FireStarterComplete::DisplayResults(const FireStarterState& bestState, const MoneyMakerStocks* stocks, const MoneyMakerStocks* tradingResults)
{
    // Save the new best state.
    if (m_saveBestState)
        SaveResults(bestState);

    // Draw the graphs for both variations.
    m_fireShow.FireShow(bestState, stocks, tradingResults);
} // DisplayResults

void FireStarterComplete::CompleteStatus(const FireStarterState& bestState, const FireStarterState& state, unsigned long long generation)
{
    const FireStarterSettings& settings = state.Settings();
    double duration = settings.m_streams > 1 ? SimpleTimer::RunDuration() : bestState.m_timer.Duration();

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
    m_fireShow.ShowStatus(bestState, state, generation, m_generationTime, duration);
} // CompleteStatus

bool FireStarterComplete::CompleteState(FireStarterState& bestState, const FireStarterState& state, const MoneyMakerStocks* stocks, const MoneyMakerStocks* tradingResults)
{
    DispatchSync([this, &bestState, &state, stocks, tradingResults] {
        // Skip if the best state was already completed.
        if (!bestState.Complete()) {        // Update the best state and display the results.
            if (UpdateBestState(bestState, state))
                DisplayResults(bestState, stocks, tradingResults);
            else
                bestState.m_age++;

            // Update the render status after every pass.
            CompleteStatus(bestState, state, state.m_generation);
        }
    });
    return bestState.Complete();
} // CompleteState

bool FireStarterComplete::CompleteRandom(FireStarterState& bestState, FireStarterState& state)
{
    DispatchSync([this, &bestState, &state] {
        // Get the next job in the order they are completed.
        FireStarterJob* job = m_manager->GetComplete();
        if (job) {
            FireStarterState newState = job->m_state;
            m_manager->AddFree(job);

            // Keep the valid results.
            if (newState.m_optimizeValid)
                state = newState;

            // Update the best state and display the results.
            if (UpdateBestState(bestState, newState))
                DisplayResults(bestState);
            else
                bestState.m_age++;

            // Update the render status after every pass.
            CompleteStatus(state, newState);
            state.m_timer.Start();
        }
    });
    return bestState.Complete();
} // CompleteRandom

// Replace old states with new ones when better and resort the list.
bool FireStarterComplete::CompleteStates(FireStarterState& bestState, FireStarterStates& allStates, size_t numStates, unsigned long long generation)
{
    DispatchSync([this, &bestState, &allStates, numStates, generation] {
        // Sort the states as they are received.
        FireStarterStates newStates(numStates);
        bool abortJob = false;

        for (size_t i = 0; i < numStates; i++) {
            // Get the next job in the order they are completed.
            FireStarterJob* job = m_manager->GetComplete();
            if (!job) {
                abortJob = true;
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

        if (!abortJob) {
            bestState.m_age++;
            for (size_t i = 0; i < numStates; i++) {
                FireStarterState& newState = newStates[i];

                // Keep the valid results.
                if (newState.m_optimizeValid) {
                    // Update the current best state.
                    bool isBestState = UpdateBestState(bestState, newState);

                    // Update the render status after every pass.
                    CompleteStatus(bestState, newState, generation);

                    // Update the best state and display the results.
                    if (isBestState)
                        DisplayResults(bestState);

                    // Replace the old state with the new state if it improved.
                    FireStarterState& oldState = allStates[newState.m_id];
                    if (newState.MaxResults() < oldState.MaxResults()) {
                        newState.m_generation = oldState.m_generation + 1;
                        newState.m_age = 1;
                        oldState = newState;
                    }
                } else
                    // Update the render status after every pass.
                    CompleteStatus(bestState, newState, generation);
            }
        }
    });
    return bestState.Complete();
} // CompleteStates

// Replace old states with new ones when better and resort the list.
bool FireStarterComplete::CompleteSelect(FireStarterState& bestState, FireStarterStates& allStates, size_t numStates, unsigned long long generation)
{
    DispatchSync([this, &bestState, &allStates, numStates, generation] {
        bestState.m_age++;
        for (size_t i = 0; i < numStates; i++) {
            FireStarterState& curState = allStates[i];

            // Keep the valid results.
            if (curState.m_optimizeValid) {
                // Update the current best state.
                bool isBestState = UpdateBestState(bestState, curState);

                // Update the render status after every pass.
                CompleteStatus(bestState, curState, generation);

                // Update the best state and display the results.
                if (isBestState)
                    DisplayResults(bestState);
            } else
                // Update the render status after every pass.
                CompleteStatus(bestState, curState, generation);
        }
    });
    return bestState.Complete();
} // CompleteSelect

void FireStarterComplete::CompleteSaveResults(const FireStarterState& bestState)
{
    DispatchAsync([this, bestState] {
        SaveResults(bestState);
    });
} // CompleteSaveResults

FireStarterComplete::FireStarterComplete(FireStarterManager* manager, const FireStarterWindow& window, const FireStarterSettings& settings, bool saveBestState) : CUDAThread("FireStarterComplete"), m_manager(manager), m_window(window), m_settings(settings), m_saveBestState(saveBestState), m_fireShow(window)
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