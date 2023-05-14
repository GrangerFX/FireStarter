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
    startState.m_optimizePass = true;
    if (settings.m_mode != FIRESTARTER_OPTIMIZE)
        settings.m_tests = 0;

    // Switch the settings to optimize mode
    startState.InitResults();

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

    // Compile the optimize module.
    execute->ExecuteCompile();

    // Initialize the population data
    execute->ExecuteInitPopulation(true);

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
        evolveState.NextGeneration();
    }

    // Optimize the evolved state.
    // Generate the optimize code.
    evolveState = bestState;
    evolve->GenerateOptimize(evolveState, true);

    // Compile the optimize code.
    compile->CompileJob(manager, true);

    // Compile the optimize module.
    execute->ExecuteCompile();

    // Initialize the population data
    execute->ExecuteInitPopulation(true);

    // Loop until the the optimize completion condition or the host program is quit.
    bool init = true;
    while (!WillTerminate()) {
        // Optimize the current generation.
        execute->ExecuteOptimize(evolveState, init);

        // Update the results in the UI.
        if (!complete->CompleteState(bestState, evolveState))
            break;
        evolveState.NextGeneration();
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

void FireStarterStream::RandomStream(const FireStarterSettings& settings, std::atomic<unsigned long long>& testCount, bool sync)
{
    Dispatch([this, &settings, &testCount] {
        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the evolution code generator.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager);

        // Create the multi-process compiler.
        FireStarterCompile* compile = new FireStarterCompile();

        // Create the execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_window, false);

        // Loop until the the completion condition or the host program is quit.
        for (unsigned long long test = testCount++; (test < settings.m_seeds * settings.m_tests) && !WillTerminate(); test = testCount++) {
            // Setup the intial state
            FireStarterSettings evolveSettings(settings);
            evolveSettings.m_seed = settings.m_seed + test / settings.m_tests;
            FireStarterState evolveState(evolveSettings, 0, m_index, test % settings.m_tests);

            // The best state is used for the status display and termination condition.
            FireStarterState bestEvolveState(evolveState);

            // Evolve the first generation for the state.
            evolve->EvolveState(evolveState, bestEvolveState, true);

            // Compile the evolved program.
            compile->CompileJob(manager, true);

            // Execute the state.
            execute->ExecuteEvolve(true);

            // Complete the state and display the results.
            complete->CompleteState(bestEvolveState, evolveState);

            // Save the best random state for all streams.
            complete->SaveBest(bestEvolveState);

            // Output the evolve results.
            std::string resultText;
            if (evolveState.Settings().m_seeds > 1)
                resultText += Format("Seed=%u  ", evolveState.Settings().m_seed);
            if (evolveState.Settings().m_tests > 1)
                resultText += Format("Test=%u  ", evolveState.m_test);
            resultText += Format("Random Result=%.8f\n", evolveState.m_maxResult);
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

void FireStarterStream::RandomStream(const FireStarterSettings& settings, std::vector<float>& seedResults, std::atomic<unsigned long long>& seedCount, bool sync)
{
    Dispatch([this, settings, &seedResults, &seedCount] {
        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the evolution code generator.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager);

        // Create the multi-process compiler.
        FireStarterCompile* compile = new FireStarterCompile();

        // Create the execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_window, false);

        // The best state is used for the status display and termination condition.
        FireStarterState bestState(settings);

        // Loop until the the completion condition or the host program is quit.
        for (unsigned long long seedIndex = seedCount++; (seedIndex < seedResults.size()) && !WillTerminate(); seedIndex = seedCount++) {
            FireStarterSettings randomSettings(settings);
            randomSettings.m_seed = settings.m_seed + seedIndex;
            randomSettings.m_generations *= 4;
            randomSettings.m_iterations *= 4;
            FireStarterState evolveState(randomSettings, 0, m_index);

            // Evolve the first generation for the state.
            evolve->EvolveState(evolveState, bestState, true);

            // Compile the evolved program.
            compile->CompileJob(manager, true);

            // Execute the state.
            execute->ExecuteEvolve(true);

            // Complete the state and display the results.
            complete->CompleteState(bestState, evolveState);
            seedResults[seedIndex] = evolveState.m_maxResult;

            // Save the best random state for all streams.
            complete->SaveBest(bestState);

            // Output the evolve results.
            std::string resultText;
            if (evolveState.Settings().m_seeds > 1)
                resultText += Format("Seed=%u  ", evolveState.Settings().m_seed);
            if (evolveState.Settings().m_tests > 1)
                resultText += Format("Test=%u  ", evolveState.m_test);
            resultText += Format("Random Result=%.8f\n", evolveState.m_maxResult);
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
        FireStarterComplete* complete = new FireStarterComplete(manager, m_window, false);

        // Loop until the the evolve completion condition or the host program is quit.
        float resultSum = 0.0f;
        unsigned long long resultCount = 0;
        for (unsigned long long test = testCount++; (test < settings.m_seeds * settings.m_tests) && !WillTerminate(); test = testCount++) {
            // Setup the intial state
            FireStarterSettings evolveSettings(settings);
            unsigned int evolution = test % settings.m_tests;
            evolveSettings.m_seed = settings.m_seed + test / settings.m_tests;
            FireStarterState evolveState(evolveSettings, 0, m_index, 0);

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

                // Save the best evolved state for all streams.
                complete->SaveBest(bestEvolveState);

                // First generation is standard evolution. Later generations evolve differently by changing the seed.
                evolveState.m_generation++;
                evolveState.m_test = evolution;
            }

            // Output the evolve results.
            resultSum += evolveState.m_maxResult;
            resultCount++;

            std::string resultText;
            if (evolveState.Settings().m_seeds > 1)
                resultText += Format("Seed=%u  ", evolveState.Settings().m_seed);
            if (evolveState.Settings().m_tests > 1)
                resultText += Format("Test=%u  ", evolveState.m_test);
            resultText += Format("Generation=%u  Evolve Result=%.8f  Average Result=%.8f", evolveState.m_generation, evolveState.m_maxResult, resultSum / resultCount);

#if FIRESTARTER_SECOND_PASS
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
                execute->ExecuteCompile();

                // Initialize the population data
                execute->ExecuteInitPopulation(true);

                // Loop until the the optimize completion condition or the host program is quit.
                bool init = true;
                while (!WillTerminate()) {
                    // Optimize the current generation.
                    execute->ExecuteOptimize(evolveState, init);

                    // Update the results in the UI.
                    if (!complete->CompleteState(bestOptimizeState, evolveState))
                        break;

                    // Save the best optimized state for all streams.
                    complete->SaveBest(bestOptimizeState);

                    // Next generation.
                    evolveState.m_generation++;
                    init = false;
                }

                // Output the optimize results.
                resultText += Format("  Optimize Generations=%u  Optimize Result=%.8f", evolveState.m_generation, evolveState.m_maxResult);
                if (evolveState.m_maxResult < 0.000001f)
                    resultText += " *******";
            }
#endif
            // Output all the results at once for a single seed.
            resultText += "\n";
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

void FireStarterStream::EvolveStream(std::vector<FireStarterState>& states, std::atomic<unsigned long long>& stateCount, bool sync)
{
    Dispatch([this, &states, &stateCount] {
        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the evolution code generator.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager);

        // Create the multi-process compiler.
        FireStarterCompile* compile = new FireStarterCompile();

        // Create the execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_window, false);

        // Loop until the the evolve completion condition or the host program is quit.
        for (unsigned long long stateIndex = stateCount++; (stateIndex < states.size()) && !WillTerminate(); stateIndex = stateCount++) {
            // Setup the intial state
            FireStarterState& evolveState = states[stateIndex];
            evolveState.m_index = m_index;
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

                // Save the best evolved state for all streams.
                complete->SaveBest(bestEvolveState);

                // Next generation.
                evolveState.m_generation++;
            }

            // Output the evolve results.
            std::string resultText;
            if (evolveState.Settings().m_seeds > 1)
                resultText += Format("Seed=%u  ", evolveState.Settings().m_seed);
            if (evolveState.Settings().m_tests > 1)
                resultText += Format("Test=%u  ", evolveState.m_test);
            resultText += Format("Generation=%u  Evolve Result=%.8f", evolveState.m_generation, evolveState.m_maxResult);

#if FIRESTARTER_SECOND_PASS
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
                execute->ExecuteCompile();

                // Initialize the population data
                execute->ExecuteInitPopulation(true);

                // Loop until the the optimize completion condition or the host program is quit.
                bool init = true;
                while (!WillTerminate()) {
                    // Optimize the current generation.
                    execute->ExecuteOptimize(evolveState, init);

                    // Update the results in the UI.
                    if (!complete->CompleteState(bestOptimizeState, evolveState))
                        break;

                    // Save the best optimized state for all streams.
                    complete->SaveBest(bestOptimizeState);

                    // Next generation.
                    evolveState.m_generation++;
                    init = false;
                }

                // Output the optimize results.
                resultText += Format("  Optimize Generation=%u  Optimize Result=%.8f", evolveState.m_generation, evolveState.m_maxResult);
                if (evolveState.m_maxResult < 0.000001f)
                    resultText += " *******";
            }
#endif
            resultText += "\n";
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
    FireStarterState bestState(m_settings);
    for (size_t unit = 0; unit < m_settings.m_units; unit++) {
        streams[unit] = new FireStarterStream(m_window, bestState, unit);
#if 0
        streams[unit]->RandomStream(m_settings, m_testCount);
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

    // Generate sequential random programs and test each of them.
    std::vector<FireStarterStream*> streams;
    std::vector<float> seedResults(seeds);
    streams.resize(m_settings.m_units, nullptr);
    for (size_t unit = 0; unit < m_settings.m_units; unit++) {
        streams[unit] = new FireStarterStream(m_window, bestState, unit);
        streams[unit]->RandomStream(m_settings, seedResults, m_testCount);
    }

    // Wait for all the streams to finish the random pass.
    SynchronizeStreams(streams);

    // Create a sorted list of best states, one per state.
    std::vector<size_t> stateSeeds(seeds);
    for (size_t i = 0; i < seeds; i++)
        stateSeeds[i] = i;
    for (size_t i = 0; i < seeds - 1; i++) {
        size_t minIndex = i;
        float minResult = seedResults[stateSeeds[i]];
        for (size_t j = i + 1; j < seeds; j++) {
            size_t testSeed = stateSeeds[j];
            if (seedResults[testSeed] < minResult) {
                minResult = seedResults[testSeed];
                minIndex = j;
            }
        }
        if (minIndex != i) {
            size_t tempSeed = stateSeeds[i];
            stateSeeds[i] = stateSeeds[minIndex];
            stateSeeds[minIndex] = tempSeed;
        }
    }

    // Create the evolution states.
    std::vector<FireStarterState> evolveStates(seeds);
    for (size_t i = 0; i < seeds; i++) {
        FireStarterSettings randomSettings(m_settings);
        randomSettings.m_seed = m_settings.m_seed + stateSeeds[i];
        evolveStates[i].InitState(randomSettings, 0, 0, 0);
    }


    // Evolve the best streams.
    m_testCount = 0;
    for (size_t unit = 0; unit < m_settings.m_units; unit++)
        streams[unit]->EvolveStream(evolveStates, m_testCount);

    // Wait for all the streams to finish the random pass.
    SynchronizeStreams(streams);

    // Find the best evolved state.
    float bestResult = evolveStates[0].m_maxResult;
    size_t bestIndex = 0;
    for (size_t i = 1; i < evolveStates.size(); i++) {
        FireStarterState& state = evolveStates[i];
        if (state.m_maxResult < bestResult) {
            bestResult = state.m_maxResult;
            bestIndex = i;
        }
    }
    bestState = evolveStates[bestIndex];

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