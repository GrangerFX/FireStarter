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

void FireStarterComplete::SaveSolution(const FireStarterState& bestState, size_t generation, double generationTime)
{
    std::string solutionCode;
    m_generate->GenerateSolution(bestState, solutionCode, m_solutionTargetCode, generationTime, generation);
    FireStarterCode::SaveCode("FireStarter_Solution.h", solutionCode);
} // SaveSolution

bool FireStarterComplete::LoadSolutionTargetCode(void)
{
    if (!FireStarterCode::LoadCode("FireStarterTarget.h", m_solutionTargetCode))
        return false;
    FireStarterCode::ReplaceCode(m_solutionTargetCode, "Target", "SolutionTarget");
    FireStarterCode::ReplaceCode(m_solutionTargetCode, "TARGET_", "SOLUTION_");
    return true;
} // LoadSolutionTargetCode

void FireStarterComplete::CompleteResults(FireStarterState& bestState, const FireStarterState& state, float oldResult)
{
    // Get the result.
    bool update = false;
    if (state.m_maxResult < bestState.m_maxResult) {
        // Update the best state.
        bestState = state;
        update = true;
    }

    // Do all the time consuming work asynchronously.
    DispatchAsync([this, bestState, state, oldResult, update] {
        double duration = m_timer.Duration();
        const FireStarterSettings& settings = state.Settings();
        float result = state.m_maxResult;
        if (!state.m_generation) {
            m_resultsCount = 0;
            m_resultsTime = duration;
            m_totalResult = 0.0;
        }
        m_totalResult += result;

        // Calculate the average time per generation.
        if (state.m_generation != m_resultsGeneration) {
            m_resultsGeneration = state.m_generation;
            if (settings.m_mode == FIRESTARTER_RANDOM) {
                if (m_resultsCount == 0)
                    m_generationTime = duration;
                else if (m_resultsCount == 1)
                    m_generationTime = duration - m_resultsTime;
                else
                    m_generationTime = (m_generationTime * m_resultsCount + (duration - m_resultsTime)) / (m_resultsCount + 1);
            } else
                m_generationTime = (duration - m_resultsTime) / settings.m_units;
            m_resultsTime = duration;
        }

        // Test the current state.
        if (update)
            m_testError = bestState.TestResult();

        // Update the render status after every pass.
        double average = m_totalResult / ++m_resultsCount;
        m_fireShow.RenderStatus(bestState, state, duration, m_generationTime, oldResult, average, m_testError);

        // If the best state was updated, save the stat and draw the results.
        if (update) {
            // Update the best state.
            if (bestState.Settings().m_mode != FIRESTARTER_OPTIMIZE)
                SaveBestState(bestState);

            // Update the best code on disk.
            SaveBestCode(bestState);
            SaveSolution(bestState, bestState.m_generation, m_resultsTime);

            // Draw the graphs for both variations.
            m_fireShow.FireShow(bestState);
        }
    });
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
            //  m_output.Output(Format("Free: %llu %f  Code: %llu %f  Compile: %llu %f  Complete: %llu %f\n", manager->SizeFree(), manager->TimeFree(), manager->SizeCode(), manager->TimeCode(), manager->SizeCompile(), manager->TimeCompile(), manager->SizeComplete(), manager->TimeComplete()));

            // Update the best state and display the results.
            CompleteResults(bestState, job->m_state);
            m_manager->AddFree(job);
            result = true;
        }
    }, sync);
    return result;
} // CompleteRandom

bool FireStarterComplete::CompleteState(FireStarterState& state, bool sync)
{
    bool result = true;
    DispatchSync([this, &result] {
        // Sort the states as they are received.
        std::vector<FireStarterState> newStates = m_allStates;
        size_t numStates = newStates.size();

        // Get the next job in the order they are completed.
        FireStarterJob* job = m_manager->GetComplete();
        if (!job)
            result = false;
        else {

            // Output job queue status.
            //  m_output.Output(Format("Free: %llu %f  Code: %llu %f  Compile: %llu %f  Complete: %llu %f\n", manager->SizeFree(), manager->TimeFree(), manager->SizeCode(), manager->TimeCode(), manager->SizeCompile(), manager->TimeCompile(), manager->SizeComplete(), manager->TimeComplete()));

            size_t index = job->m_state.m_index % numStates;
            FireStarterState newState = job->m_state;
            size_t generation = newState.m_generation;
            m_manager->AddFree(job);

            FireStarterState& oldState = m_allStates[index];
            CompleteResults(m_bestState, newState, oldState.m_maxResult);
            if (!newState.m_generation || (newState.m_maxResult < oldState.m_maxResult))
                oldState = newState;
            else
                oldState.m_generation = newState.m_generation;

            // Has the completion condition been met?
            result = generation - m_bestState.m_generation < m_settings.m_attempts;
        }
    });
    state = m_bestState;
    return result;
} // CompleteState

bool FireStarterComplete::CompleteStates(FireStarterState& bestState, std::vector<FireStarterState>& allStates, size_t generation, bool sync)
{
    bool result = true;
    DispatchSync([this, &bestState, &allStates, generation, &result] {
        // Sort the states as they are received.
        std::vector<FireStarterState> newStates = m_allStates;
        size_t numStates = newStates.size();
        for (size_t i = 0; i < numStates; i++) {
            // Get the next job in the order they are completed.
            FireStarterJob* job = m_manager->GetComplete();
            if (!job) {
                result = false;
                break;
            }

            // Output job queue status.
            //  m_output.Output(Format("Free: %llu %f  Code: %llu %f  Compile: %llu %f  Complete: %llu %f\n", manager->SizeFree(), manager->TimeFree(), manager->SizeCode(), manager->TimeCode(), manager->SizeCompile(), manager->TimeCompile(), manager->SizeComplete(), manager->TimeComplete()));

            // Sort the completed jobs.
            newStates[job->m_state.m_index % numStates] = job->m_state;
            m_manager->AddFree(job);
        }

        // Update the best state and display the results.
        for (size_t i = 0; i < numStates; i++) {
            FireStarterState& newState = newStates[i];
            FireStarterState& oldState = m_allStates[i];
            CompleteResults(m_bestState, newState, oldState.m_maxResult);
            if (!newState.m_generation || (newState.m_maxResult < oldState.m_maxResult))
                oldState = newState;
            else
                oldState.m_generation = newState.m_generation;
        }

        // Copy the best set of states.
        allStates = m_allStates;
        bestState = m_bestState;

        // Has the completion condition been met?
        result = result && (generation - bestState.m_generation < m_settings.m_attempts);
    });
    return result;
} // CompleteStates

void FireStarterComplete::CompleteSolution(bool sync)
{
    Dispatch([this] {
        m_fireShow.FireSolution();
    }, sync);
} // CompleteSolution

FireStarterComplete::FireStarterComplete(FireStarterManager* manager, FireStarterWindow* window, const FireStarterSettings& settings) : m_window(window), m_settings(settings), m_bestState(settings), m_fireShow(window, settings)
{
    m_manager = manager;
    m_settings = settings;
    m_allStates.resize(settings.m_units, m_bestState);

    if ((m_settings.m_mode != FIRESTARTER_SOLUTION))
        DispatchSync([this] {
            if (LoadSolutionTargetCode())
                // Create the code generator.
                m_generate = new FireStarterGenerate(Context());
        });
} // FireStarterComplete

FireStarterComplete::~FireStarterComplete(void)
{
} // ~FireStarterComplete