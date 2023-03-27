#include "FireStarterStream.h"
#include "FireStarterEvolve.h"
#include "FireStarterCompile.h"
#include "FireStarterExecute.h"
#include "FireStarterComplete.h"
#include "FireStarterCode.h"
#include "FireStarter_LoadState.h"

#define FIRESTARTER_STREAM_EVOLUTIONS 100

void FireStarterStream::OptimizeState(const FireStarterState& evolveState)
{
    // Convert the most recently evolved state into an optimize mode state.
    FireStarterState startState(evolveState);
    FireStarterSettings& settings = startState.Settings();
    settings.m_units = 1;
    settings.m_processes = 0;
    if (settings.m_mode != FIRESTARTER_OPTIMIZE) {
        settings.m_mode = FIRESTARTER_OPTIMIZE;
        settings.m_tests = 0;
    }

    // Switch the settings to optimize mode
    startState.InitResult();

    // Setup the best state
    FireStarterState bestState(startState);

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager();

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile();

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the execution unit.
    FireStarterExecute* execute = new FireStarterExecute(manager);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, m_window);

    // Generate the optimize code.
    evolve->GenerateOptimize(startState);

    // Compile the optimize code.
    compile->CompileJob(manager, true);

    // Compile the optimize code.
    execute->ExecuteCompileModule();

    // Test one more more random seeds.
    size_t firstTest = 0;
    size_t lastTest = 0;
    if (startState.m_test)
        firstTest = lastTest = startState.m_test;
    else if (settings.m_tests) {
        firstTest = 1;
        lastTest = settings.m_tests;
    }
    for (size_t test = firstTest; (test <= lastTest) && !WillTerminate(); test++) {
        // Create the state and execution unit.
        FireStarterState optimizeState(startState);
        optimizeState.m_test = test;

        // Loop until the the completion condition or the host program is quit.
        bool init = true;
        while (!WillTerminate()) {
            // Optimize the current generation.
            execute->ExecuteOptimize(optimizeState, init);

            // Update the results in the UI.
            if (!complete->CompleteState(bestState, optimizeState))
                break;
            optimizeState.m_generation++;
            init = false;
        }
    }

    // Cancel any waiting jobs
    manager->Cancel();

    // Delete the completion unit.
    delete complete;

    // Finish processing and terminate each unit.
    delete execute;

    // Delete the evolution code generator.
    delete evolve;

    // Delete the multi-process compiler.
    delete compile;

    // Delete the compilier manager and cancel any waiting jobs.
    delete manager;
} // OptimizeState

void FireStarterStream::RandomState(FireStarterState& evolveState)
{
    FireStarterState bestState(evolveState);    // The best state generation is used for the status display and termination condition.

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager();

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile();

    // Create the execution unit.
    FireStarterExecute* execute = new FireStarterExecute(manager);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, m_window);

    // Evolve a new generation for the state.
    evolve->EvolveState(evolveState, bestState, true);

    // Compile the evolved program.
    compile->CompileJob(manager, true);

    // Execute the state.
    execute->ExecuteEvolve(true);

    // Complete the state and display the results.
    complete->CompleteState(bestState, evolveState);

    // Cancel any waiting jobs
    manager->Cancel();

    // Delete the completion unit.
    delete complete;

    // Finish processing and terminate each unit.
    delete execute;

    // Delete the multi-process compiler.
    delete compile;

    // Delete the evolution code generator.
    delete evolve;

    // Delete the compilier manager and cancel any waiting jobs.
    delete manager;
} // RandomState

void FireStarterStream::EvolveState(FireStarterState& evolveState)
{
    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager();

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile();

    // Create the execution unit.
    FireStarterExecute* execute = new FireStarterExecute(manager);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, m_window);

    // Setup the intial state
    FireStarterState bestState(evolveState);    // The best state generation is used for the status display and termination condition.
    while (!WillTerminate()) {
        // Evolve a new generation for the state.
        evolve->EvolveState(evolveState, bestState, true);

        // Compile the evolved program.
        compile->CompileJob(manager, true);

        // Execute the state.
        execute->ExecuteEvolve(true);

        // Complete the state and display the results.
        if (!complete->CompleteState(bestState, evolveState))
            break;
        evolveState.m_generation++;
    }

    // Optimize the evolved state.
    // Generate the optimize code.
    evolveState = bestState;
    evolve->GenerateOptimize(evolveState, true);

    // Compile the optimize code.
    compile->CompileJob(manager, true);

    // Compile the optimize module.
    execute->ExecuteCompileModule();

    // Loop until the the optimize completion condition or the host program is quit.
    bool init = true;
    while (!WillTerminate()) {
        // Optimize the current generation.
        execute->ExecuteOptimize(evolveState, init);

        // Update the results in the UI.
        if (!complete->CompleteState(bestState, evolveState))
            break;
        evolveState.m_generation++;
        init = false;
    }

    // Cancel any waiting jobs
    manager->Cancel();

    // Delete the completion unit.
    delete complete;

    // Finish processing and terminate each unit.
    delete execute;

    // Delete the multi-process compiler.
    delete compile;

    // Delete the evolution code generator.
    delete evolve;

    // Delete the compilier manager and cancel any waiting jobs.
    delete manager;
} // EvolveState

void FireStarterStream::Optimize(const FireStarterWindow& window, const FireStarterState& evolveState)
{
    FireStarterState bestState(evolveState);
    FireStarterStream stream(window, bestState, 0); // Provides serial thread WillTerminate() method.
    stream.OptimizeState(evolveState);
} // Optimize

void FireStarterStream::Evolve(const FireStarterWindow& window, const FireStarterState& evolveState)
{
    FireStarterState bestState(evolveState);
    FireStarterStream stream(window, bestState, 0); // Provides serial thread WillTerminate() method.
    stream.EvolveState(bestState);
} // Evolve

void FireStarterStream::OptimizeStream(const FireStarterState& evolveState, bool sync)
{
    Dispatch([this, evolveState] {
        OptimizeState(evolveState);
    }, sync);
} // OptimizeStream

void FireStarterStream::RandomStream(const FireStarterSettings& settings, std::atomic<unsigned long long>& testCount, float& maxResult, bool sync)
{
    Dispatch([this, &settings, &testCount, &maxResult] {
        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the evolution code generator.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager);

        // Create the multi-process compiler.
        FireStarterCompile* compile = new FireStarterCompile();

        // Create the execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_window);

        // Loop until the the completion condition or the host program is quit.
        for (unsigned long long test = testCount++; (test < settings.m_seeds * settings.m_tests) && !WillTerminate(); test = testCount++) {
            // Setup the intial state
            FireStarterSettings evolveSettings(settings);
            evolveSettings.m_seed = settings.m_seed + test / settings.m_tests;
            FireStarterState evolveState(evolveSettings, 0, 0, test % settings.m_tests);

            // The best state is used for the status display and termination condition.
            FireStarterState bestEvolveState(evolveState);

            // Evolve a new generation for the state.
            evolve->EvolveState(evolveState, bestEvolveState, true);

            // Compile the evolved program.
            compile->CompileJob(manager, true);

            // Execute the state.
            execute->ExecuteEvolve(true);

            // Complete the state and display the results.
            complete->CompleteState(bestEvolveState, evolveState);
            if (maxResult > evolveState.m_maxResult)
                maxResult = evolveState.m_maxResult;

            // Output the evolve results.
            std::string resultText = Format("Seed=%u  Test=%u  Evolve Result=%.8f\n", evolveState.Settings().m_seed, evolveState.m_test, evolveState.m_maxResult);
            FireStarterCode::AppendCode(m_resultsFilePath, resultText);
        }

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        delete complete;

        // Finish processing and terminate each unit.
        delete execute;

        // Delete the multi-process compiler.
        delete compile;

        // Delete the evolution code generator.
        delete evolve;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // RandomStream

void FireStarterStream::RandomStream(std::vector<FireStarterState>& states, std::atomic<unsigned long long>& testCount, float& maxResult, bool sync)
{
    Dispatch([this, &states, &testCount, &maxResult] {
        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the evolution code generator.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager);

        // Create the multi-process compiler.
        FireStarterCompile* compile = new FireStarterCompile();

        // Create the execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_window);

        // The best state is used for the status display and termination condition.
        FireStarterState bestState(states[0]);    

        // Loop until the the completion condition or the host program is quit.
        for (unsigned long long test = testCount++; (test < states.size()) && !WillTerminate(); test = testCount++) {
            FireStarterState& evolveState = states[test];
            if (maxResult)
                evolveState.m_maxResult = maxResult;

            // Evolve a new generation for the state.
            evolve->EvolveState(evolveState, bestState, true);

            // Compile the evolved program.
            compile->CompileJob(manager, true);

            // Execute the state.
            execute->ExecuteEvolve(true);

            // Complete the state and display the results.
            complete->CompleteState(bestState, evolveState);
            if (maxResult > evolveState.m_maxResult)
                maxResult = evolveState.m_maxResult;

            // Output the evolve results.
            std::string resultText = Format("Seed=%u  Test=%u  Evolve Result=%.8f\n", evolveState.Settings().m_seed, evolveState.m_test, evolveState.m_maxResult);

            // Only optimize the better quality results.
            if (evolveState.m_maxResult < 0.0001) {
                // The best state is used for the status display and termination condition.
                FireStarterState bestOptimizeState(evolveState);

                // Optimize the evolved state.
                // Generate the optimize code.
                evolve->GenerateOptimize(evolveState, true);

                // Compile the optimize code.
                compile->CompileJob(manager, true);

                // Compile the optimize module.
                execute->ExecuteCompileModule();

                // Loop until the the optimize completion condition or the host program is quit.
                bool init = true;
                while (!WillTerminate()) {
                    // Optimize the current generation.
                    execute->ExecuteOptimize(evolveState, init);

                    // Update the results in the UI.
                    if (!complete->CompleteState(bestOptimizeState, evolveState))
                        break;
                    evolveState.m_generation++;
                    init = false;
                }

                // Output the optimize results.
                resultText += Format("Seed=%u  Generations=%u  Optimize Result=%.8f\n", evolveState.Settings().m_seed, evolveState.m_generation, evolveState.m_maxResult);
            }
            FireStarterCode::AppendCode(m_resultsFilePath, resultText);
        }

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        delete complete;

        // Finish processing and terminate each unit.
        delete execute;

        // Delete the multi-process compiler.
        delete compile;

        // Delete the evolution code generator.
        delete evolve;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // RandomStream

void FireStarterStream::EvolveStream(const FireStarterSettings& settings, std::atomic<unsigned long long>& testCount, bool sync)
{
    Dispatch([this, settings, &testCount] {
        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the evolution code generator.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager);

        // Create the multi-process compiler.
        FireStarterCompile* compile = new FireStarterCompile();

        // Create the execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_window);

        // Loop until the the evolve completion condition or the host program is quit.
        float resultSum = 0.0f;
        unsigned long long resultCount = 0;
        for (unsigned long long test = testCount++; (test < settings.m_seeds * settings.m_tests) && !WillTerminate(); test = testCount++) {
            std::string resultText;

            // Setup the intial state
            FireStarterSettings evolveSettings(settings);
            unsigned int evolution = test % settings.m_tests;
            evolveSettings.m_seed = settings.m_seed + test / settings.m_tests;
            FireStarterState evolveState(evolveSettings, 0, 0, 0);

            // The best state is used for the status display and termination condition.
            FireStarterState bestEvolveState(evolveState);
            while (!WillTerminate()) {
                // Evolve a new generation for the state.
                evolve->EvolveState(evolveState, bestEvolveState, true);

                // Compile the evolved program.
                compile->CompileJob(manager, true);

                // Execute the state.
                execute->ExecuteEvolve(true);

                // Complete the state and display the results.
                if (!complete->CompleteState(bestEvolveState, evolveState))
                    break;

                // First generation is standard evolution. Later generations evolve differently by changing the seed.
                evolveState.m_generation++;
                evolveState.m_test = evolution;
            }

            // Output the evolve results.
            resultSum += evolveState.m_maxResult;
            resultCount++;
            resultText += Format("Seed=%u  Test=%u  Evolution=%u  Generations=%u  Evolve Result=%.8f  Average Result=%.8f", evolveState.Settings().m_seed, evolveState.m_test, evolution, evolveState.m_generation, evolveState.m_maxResult, resultSum / resultCount);

            // Only optimize the better quality results.
            if (evolveState.m_maxResult < 0.0001) {
                // The best state is used for the status display and termination condition.
                FireStarterState bestOptimizeState(evolveState);

                // Optimize the evolved state.
                // Generate the optimize code.
                evolve->GenerateOptimize(evolveState, true);

                // Compile the optimize code.
                compile->CompileJob(manager, true);

                // Compile the optimize module.
                execute->ExecuteCompileModule();

                // Loop until the the optimize completion condition or the host program is quit.
                bool init = true;
                while (!WillTerminate()) {
                    // Optimize the current generation.
                    execute->ExecuteOptimize(evolveState, init);

                    // Update the results in the UI.
                    if (!complete->CompleteState(bestOptimizeState, evolveState))
                        break;
                    evolveState.m_generation++;
                    init = false;
                }

                // Output the optimize results.
                resultText += Format("  Optimize Generations=%u  Optimize Result=%.8f", evolveState.m_generation, evolveState.m_maxResult);
                if (evolveState.m_maxResult < 0.000001f)
                    resultText += " *******";
            }
            resultText += "\n";

            // Output all the results at once for a single seed.
            FireStarterCode::AppendCode(m_resultsFilePath, resultText);
        }

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        delete complete;

        // Finish processing and terminate each unit.
        delete execute;

        // Delete the multi-process compiler.
        delete compile;

        // Delete the evolution code generator.
        delete evolve;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // EvolveStream

void FireStarterStream::EvolveStream(std::vector<FireStarterState*>& states, std::atomic<unsigned long long>& testCount, bool sync)
{
    Dispatch([this, &states, &testCount] {
        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the evolution code generator.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager);

        // Create the multi-process compiler.
        FireStarterCompile* compile = new FireStarterCompile();

        // Create the execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_window);

        // Loop until the the evolve completion condition or the host program is quit.
        for (unsigned long long test = testCount++; (test < states.size()) && !WillTerminate(); test = testCount++) {
            // Setup the intial state
            FireStarterState& evolveState = *states[test];
            evolveState.m_generation = 0;

            // The best state is used for the status display and termination condition.
            FireStarterState bestEvolveState(evolveState);   
            while (!WillTerminate()) {
                // Evolve a new generation for the state.
                evolve->EvolveState(evolveState, bestEvolveState, true);

                // Compile the evolved program.
                compile->CompileJob(manager, true);

                // Execute the state.
                execute->ExecuteEvolve(true);

                // Complete the state and display the results.
                if (!complete->CompleteState(bestEvolveState, evolveState))
                    break;
                evolveState.m_generation++;
            }

            // Output the evolve results.
            std::string resultText = Format("Seed=%u  Test=%u  Generations=%u  Evolve Result=%.8f  Average Result=%.8f\n", evolveState.Settings().m_seed, evolveState.m_test, evolveState.m_generation, evolveState.m_maxResult );

            // Only optimize the better quality results.
            if (evolveState.m_maxResult < 0.0001) {
                // The best state is used for the status display and termination condition.
                FireStarterState bestOptimizeState(evolveState);

                // Optimize the evolved state.
                // Generate the optimize code.
                evolve->GenerateOptimize(evolveState, true);

                // Compile the optimize code.
                compile->CompileJob(manager, true);

                // Compile the optimize module.
                execute->ExecuteCompileModule();

                // Loop until the the optimize completion condition or the host program is quit.
                bool init = true;
                while (!WillTerminate()) {
                    // Optimize the current generation.
                    execute->ExecuteOptimize(evolveState, init);

                    // Update the results in the UI.
                    if (!complete->CompleteState(bestOptimizeState, evolveState))
                        break;
                    evolveState.m_generation++;
                    init = false;
                }

                // Output the optimize results.
                resultText += Format("Seed=%u  Generations=%u  Optimize Result=%.8f\n", evolveState.Settings().m_seed, evolveState.m_generation, evolveState.m_maxResult);
            }
            FireStarterCode::AppendCode(m_resultsFilePath, resultText);
        }

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        delete complete;

        // Finish processing and terminate each unit.
        delete execute;

        // Delete the multi-process compiler.
        delete compile;

        // Delete the evolution code generator.
        delete evolve;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // EvolveStream

FireStarterStream::FireStarterStream(const FireStarterWindow& window, FireStarterState& bestState, size_t index) : SerialThread(Format("FireStarterStream%zu", index)), m_window(window), m_bestState(bestState), m_index(index)
{
    // Create the results file path.
    static std::string resultsFilePath;
    if (resultsFilePath.empty())
        resultsFilePath = Format("Logs\\%s_Results.txt", FileNameDate().c_str());
    m_resultsFilePath = resultsFilePath;
} // FireStarterStream

FireStarterStream::~FireStarterStream(void)
{
} // ~FireStarterStream

bool FireStarterStreams::SynchronizeStreams(std::vector<FireStarterStream*>& streams)
{
    bool result = true;
    for (FireStarterStream* stream : streams)
        result &= stream->Synchronize();
    return result;
} // SynchronizeStreams

void FireStarterStreams::TestStreams(void)
{
    // Generate sequential random programs and test each of them.
    std::vector<FireStarterStream*> streams;
    streams.resize(m_settings.m_units, nullptr);
    float maxResult = m_settings.m_startResult;
    FireStarterState bestState(m_settings);
    for (size_t unit = 0; unit < m_settings.m_units; unit++) {
        streams[unit] = new FireStarterStream(m_window, bestState, unit);
#if 0
        streams[unit]->RandomStream(m_settings, m_testCount, maxResult);
#else
        streams[unit]->EvolveStream(m_settings, m_testCount);
#endif
    }

    // Wait for all the streams to finish the random pass.
    SynchronizeStreams(streams);

    // Terminate and delete each stream unit.
    for (FireStarterStream*& stream : streams) {
        delete stream;
        stream = nullptr;
    }
} // TestStreams

void FireStarterStreams::EvolveStreams(void)
{
    // Initialize the states and streams.
    FireStarterState bestState(m_settings);
    size_t seeds = MAX(m_settings.m_seeds, 1);
    std::vector<FireStarterState> states(seeds);
    for (size_t seed = 0; seed < seeds; seed++) {
        FireStarterSettings randomSettings(m_settings);
        randomSettings.m_seed = m_settings.m_seed + seed;
        states[seed].InitState(randomSettings, 0, 0, 0);
    }

    // Generate sequential random programs and test each of them.
    std::vector<FireStarterStream*> streams;
    streams.resize(m_settings.m_units, nullptr);
    float maxResult = m_settings.m_startResult;
    for (size_t unit = 0; unit < m_settings.m_units; unit++) {
        streams[unit] = new FireStarterStream(m_window, bestState, unit);
        streams[unit]->RandomStream(states, m_testCount, maxResult);
    }

    // Wait for all the streams to finish the random pass.
    SynchronizeStreams(streams);

    // Find the best random states.
    std::vector<FireStarterState*> bestStates;
    float minResult = m_settings.m_startResult;
    for (size_t i = 0; i < states.size(); i++) {
        FireStarterState* curState = &states[i];
        if (curState->m_maxResult < minResult) {
            minResult = curState->m_maxResult;
            for (size_t j = 0; j < bestStates.size(); j++) {
                if (curState->m_maxResult < bestStates[j]->m_maxResult) {
                    FireStarterState* minState = curState;
                    curState = bestStates[j];
                    bestStates[j] = minState;
                }
            }
            bestStates.push_back(curState);
        }
    }

    // Evolve the best streams.
    m_testCount = 0;
    for (size_t unit = 0; unit < m_settings.m_units; unit++)
        streams[unit]->EvolveStream(bestStates, m_testCount);

    // Wait for all the streams to finish the random pass.
    SynchronizeStreams(streams);

    // Find the best evolved state.
    float bestResult = bestStates[0]->m_maxResult;
    size_t bestIndex = 0;
    for (size_t i = 0; i < bestStates.size(); i++) {
        FireStarterState* state = bestStates[i];
        if (state->m_maxResult < bestResult) {
            bestResult = state->m_maxResult;
            bestIndex = i;
        }
    }
    bestState = *bestStates[bestIndex];

    // Terminate and delete each stream unit.
    for (FireStarterStream*& stream : streams) {
        delete stream;
        stream = nullptr;
    }
} // EvolveStreams

FireStarterStreams::FireStarterStreams(const FireStarterWindow& window, const FireStarterSettings& settings) : m_window(window), m_settings(settings), m_testCount(0)
{
} // FireStarterStreams

FireStarterStreams::~FireStarterStreams(void)
{
} // ~FireStarterStream