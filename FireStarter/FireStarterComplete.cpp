#include "FireStarterComplete.h"
#include "FireStarterState.h"
#include "FireStarterSource.h"
#include "FireStarterGenerate.h"
#include "FireStarterUtil.h"

void FireStarterComplete::SaveBestState(const FireStarterState& bestState)
{
    std::string bestStateCode;
    std::string saveFile = "FireStarter_LoadState.h";
    std::string savePath = Format("Logs\\%s_%s", FileNameDate().c_str(), saveFile.c_str());

    bestState.SaveState(bestStateCode);
    FireStarterSource::SaveSource(bestStateCode, savePath);
    if (m_saveBestState)
        FireStarterSource::SaveSource(bestStateCode, saveFile);
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
            std::string savePath = Format("Logs\\%s_%s", FileNameDate().c_str(), evolveProgramName.c_str());
            FireStarterSource::SaveSource(bestCode, savePath);
        }

        // Save the best optimize program.
        if (!optimizeProgram.empty()) {
            std::string bestCode = optimizeProgram;
            FireStarterSource::UpdateProgram(bestCode, bestState.m_evaluateCode, EVALUATE_CODE);
            std::string savePath = Format("Logs\\%s_%s", FileNameDate().c_str(), optimizeProgramName.c_str());
            FireStarterSource::SaveSource(bestCode, savePath);

#if FIRESTARTER_SAVE_BESTCODE
            // Update the original optimize program with the best evolved code.
            FireStarterSource::SaveSource(bestCode, optimizeProgramName);
#endif
        }
    }
} // SaveBestCode

bool FireStarterComplete::LoadSolutionTargetCode(void)
{
    if (!m_solutionTargetCode.empty())
        return true;
    if (!FireStarterSource::LoadSource(m_solutionTargetCode, "FireStarterTarget.h"))
        return false;
    FireStarterSource::ReplaceSource(m_solutionTargetCode, "Target", "SolutionTarget");
    FireStarterSource::ReplaceSource(m_solutionTargetCode, "TARGET_", "SOLUTION_");
    return true;
} // LoadSolutionTargetCode

void FireStarterComplete::SaveSolution(const FireStarterState& bestState)
{
    if (LoadSolutionTargetCode()) {
        static float bestSolution = 1.0e+12f;

        std::string saveFile;
        if ((bestState.PassMode() == FIRESTARTER_MONEYMAKER) || (bestState.PassMode() == FIRESTARTER_MONEYOPTIMIZE))
            saveFile = "FireStarter_MoneyMakerSolution.h";
        else
            saveFile = "FireStarter_Solution.h";
        std::string savePath = bestState.Settings().m_tests ? Format("Logs\\%s_%s_%lld", FileNameDate().c_str(), saveFile.c_str(), bestState.m_test) : saveFile;
        std::string solutionCode;

        FireStarterGenerate generate;   // Note: CPU only generation in Complete to avoid stalling the GPU.
        generate.GenerateSolution(bestState, solutionCode, m_solutionTargetCode);
        FireStarterSource::SaveSource(solutionCode, savePath);
        if (bestState.m_precision < bestSolution) {
            bestSolution = bestState.m_precision;
            FireStarterSource::SaveSource(solutionCode, saveFile);
        }
    }
} // SaveSolution

bool FireStarterComplete::UpdateBestState(FireStarterState& bestState, FireStarterState& state)
{
    // Get the result.
    if (state.m_optimizeValid) {
        static std::mutex bestStateMutex; // Shared among all FireStarterComplete objects.
        std::lock_guard<std::mutex> lock(bestStateMutex);
        return bestState.UpdateBest(state);
    }
    return false;
} // UpdateBestState

void FireStarterComplete::SaveResults(const FireStarterState& bestState)
{
    // Update the best state.
    SaveBestState(bestState);

    if (bestState.Settings().m_mode != FIRESTARTER_SINSIM) {
        // Update the best code on disk.
#if FIRESTARTER_SAVE_BESTCODE
        SaveBestCode(bestState);
#endif

        // Update the solution code on disk.
#if FIRESTARTER_SAVE_SOLUTION
        SaveSolution(bestState);
#endif
    }
} // SaveResults

void FireStarterComplete::DisplayResults(const FireStarterState& bestState, const MoneyMakerStocks* stocks, const MoneyMakerStocks* tradingResults)
{
    // Save the new best state.
    SaveResults(bestState);

    // Draw the graphs for both variations.
    m_fireShow.FireShow(bestState, stocks, tradingResults);
} // DisplayResults

void FireStarterComplete::CompleteStatus(const FireStarterState& bestState, const FireStarterState& state, unsigned long long generation)
{
    const FireStarterSettings& settings = state.Settings();
    double duration = bestState.m_timer.Duration();

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

    // Keep every pass and its timing while parallel units finish their work.
    if (m_statusBatch)
        m_statusResults.push_back({ state, generation, m_generationTime, duration });
    else
        m_fireShow.ShowStatus(bestState, state, generation, m_generationTime, duration);
} // CompleteStatus

void FireStarterComplete::BeginStatusBatch(void)
{
    DispatchSync([this] {
        m_statusResults.clear();
        m_statusBatch = true;
    });
} // BeginStatusBatch

void FireStarterComplete::EndStatusBatch(const FireStarterState& bestState)
{
    DispatchSync([this, &bestState] {
        m_statusBatch = false;
        std::stable_sort(m_statusResults.begin(), m_statusResults.end(), [](const StatusResult& left, const StatusResult& right) {
            return std::make_tuple(left.m_state.m_index, left.m_state.m_optimize_pass) <
                std::make_tuple(right.m_state.m_index, right.m_state.m_optimize_pass);
        });

        // The Best columns describe the completed batch, independent of arrival order.
        for (const StatusResult& result : m_statusResults)
            m_fireShow.ShowStatus(bestState, result.m_state, result.m_generation, result.m_generationTime, result.m_runTime);
        m_statusResults.clear();
    });
} // EndStatusBatch

bool FireStarterComplete::CompleteState(FireStarterState& bestState, FireStarterState& state, const MoneyMakerStocks* stocks, const MoneyMakerStocks* tradingResults)
{
    DispatchSync([this, &bestState, &state, stocks, tradingResults] {
        if (UpdateBestState(bestState, state))
            DisplayResults(bestState, stocks, tradingResults);

        // Update the render status after every pass.
        CompleteStatus(bestState, state, state.m_generation);
    });
    return bestState.Complete();
} // CompleteState

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

void FireStarterComplete::InitComplete(void)
{
} // InitComplete

FireStarterComplete::FireStarterComplete(FireStarterWindow& window, const FireStarterSettings& settings, bool saveBestState) : SerialThread("FireStarterComplete"), m_window(window), m_settings(settings), m_saveBestState(saveBestState), m_fireShow(window)
{
    InitComplete();
} // FireStarterComplete

FireStarterComplete::~FireStarterComplete(void)
{
} // ~FireStarterComplete
