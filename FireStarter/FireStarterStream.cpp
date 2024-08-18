#include "FireStarterStream.h"
#include "FireStarterEvolve.h"
#include "FireStarterCompile.h"
#include "FireStarterExecute.h"
#include "FireStarterComplete.h"
#include "FireStarterSource.h"
#include "FireStarter_LoadState.h"

#define FIRESTARTER_STREAM_EVOLUTIONS 100

void FireStarterStream::OptimizeState(const FireStarterState& evolveState)
{
    // Convert the most recently evolved state into an optimize mode state.
    FireStarterState startState(evolveState);
    FireStarterSettings& settings = startState.Settings();
    settings.m_units = 1;
    if (settings.m_mode != FIRESTARTER_OPTIMIZE) {
        startState.m_optimize_pass = 1;
        settings.m_tests = 0;
    } else
        startState.m_optimize_pass = 0;

    // Switch the settings to optimize mode
    startState.InitResults();

    // Setup the best state
    FireStarterState bestState(startState);
    bestState.m_maxResult = settings.m_startResult; // Force the initial results to display.

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager();

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager);
    compile->AddCompiler();

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the execution unit.
    FireStarterExecute* execute = new FireStarterExecute(manager);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow);

    // Generate the optimize code.
    if (evolve->GenerateOptimize(startState)) {
        // Compile the optimize code.
        compile->CompileJob(true);

        // Compile the optimize module.
        execute->ExecuteCompile();

        // Initialize the population data
        execute->ExecuteInitPopulation();

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
            optimizeState.m_optimize_pass = 0;
            while (!WillTerminate()) {
                // Optimize the current generation.
               execute->ExecuteOptimize(optimizeState, false);

                // Update the results in the UI.
                if (complete->CompleteState(bestState, optimizeState))
                    break;

                // Increment the pass.
                optimizeState.m_optimize_pass++;
            }
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

void FireStarterStream::Optimize(const FireStarterWindow& window, const FireStarterState& evolveState, const FireStarterSettings& streamSettings)
{
    FireStarterState bestState(evolveState);
    FireStarterStream stream(0, window, bestState, streamSettings); // Provides serial thread WillTerminate() method.
    stream.OptimizeState(evolveState);
} // Optimize

void FireStarterStream::RandomStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        FireStarterSettings randomSettings(m_streamSettings);
        
        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the evolution code generator.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager);

        // Create the multi-process compiler.
        FireStarterCompile* compile = new FireStarterCompile(manager, server);
        compile->AddCompiler();

        // Create the execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow);

        // Loop until the the completion condition or the host program is quit.
        unsigned int tests = MAX(randomSettings.m_tests, 1);
        unsigned int randomTests = randomSettings.m_states * tests;
        for (unsigned int test = testCount++; (test < randomTests) && !WillTerminate(); test = testCount++) {
            // Setup the intial state
            FireStarterSettings evolveSettings(randomSettings);
            evolveSettings.m_evolveSeed = randomSettings.m_evolveSeed + test / tests;
            FireStarterState evolveState(evolveSettings, m_streamIndex, test % tests);

            // Evolve the first generation for the state.
            evolve->RandomState(evolveState, true);

            // Compile the evolved program.
            // Note: This does nothing when using a multiprocess server.
            compile->CompileJob(true);

            // Execute the state.
            execute->ExecuteEvolveCPU(true);

            // Complete the state and display the results.
            complete->CompleteState(m_streamBestState, evolveState);

            // Output the evolve results.
            std::string resultText;
            if (evolveState.Settings().m_states > 1)
                resultText += Format("Seed=%u  ", evolveState.Settings().m_evolveSeed);
            if (evolveState.Settings().m_tests > 1)
                resultText += Format("Test=%u  ", evolveState.m_test);
            resultText += Format("Random Result=%.8f\n", evolveState.m_maxResult);
            if (!m_streamDate.empty())
                FireStarterSource::AppendSource(resultText, Format("Logs\\%s_RandomResults.txt", m_streamDate.c_str()));
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

void FireStarterStream::EvolveCPUStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        // Evolve a number of states equal to the evolveSettings.m_seeds.
        FireStarterSettings evolveSettings(m_streamSettings);
        unsigned int numStates = evolveSettings.m_states;
        evolveSettings.m_units = MIN(evolveSettings.m_units, numStates);
        SimpleTimer streamTimer;
        std::string streamDate = m_streamDate;

        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager(numStates);

        // Create a multi-process compiler for each unit.
        FireStarterCompile* compile = new FireStarterCompile(manager, server);
        for (unsigned int i = 0; i < evolveSettings.m_units; i++)
            compile->AddCompiler();

        // Create the evolution code generator.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager);

        // Create the execution units.
        std::vector<FireStarterExecute*> executionUnits;
        for (unsigned int i = 0; i < evolveSettings.m_units; i++) {
            FireStarterExecute* execute = new FireStarterExecute(manager, i);
            executionUnits.push_back(execute);
        }

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow);

        // Loop until the the evolve completion condition or the host program is quit.
        unsigned long long evolveTests = MAX(evolveSettings.m_tests, 1);
        for (unsigned long long t = testCount++; (t < evolveTests) && !WillTerminate(); t = testCount++) {
            // Reset the timer if there is only one stream.
            if (evolveSettings.m_streams == 1)
                streamTimer.Start();

            // Initialize the states.
            FireStarterStates allStates;
            unsigned long long test = FIRESTARTER_START_TEST + t;
            FireStarterState bestState = FireStarterState(evolveSettings, 0, 0, 0, test);

            // Keep track of the tested instructions so they don't get generated again.
            TestedInstructions testedInstructions;

            // Evolve the current test.
            unsigned long long generation = 0;
            while (!WillTerminate()) {
                // Evolve a new generation.
                evolve->EvolveStates(test, evolveSettings, allStates, testedInstructions, generation);

                // Execute each state using one of the execution units.
                std::atomic<unsigned int> evolveCount = numStates;
                for (FireStarterExecute* execute : executionUnits)
                    execute->ExecuteEvolveCPU(evolveCount);

                // Gather and sort the results, update the UI and check for the completion condition.
                if (complete->CompleteStates(m_streamBestState, bestState, allStates, numStates, generation))
                    break;

                // Age the best state.
                bestState.m_age++;

                // Increment the generation.
                generation++;
                if (generation == evolveSettings.m_generations)
                    break;
            }

            // Optimize the best state.
            if (!WillTerminate() && !allStates.empty()) {
                // Output the evolve results.
                std::string resultText = Format("Duration: %.1f  Seed=%u  Test=%u  Generation=%u  Best Generations=%u  Evolutions=%u  Evolve Result=%.8f", streamTimer.Duration(), bestState.Settings().m_evolveSeed, test, generation, bestState.m_generation, bestState.m_evolution, bestState.m_maxResult);

                // Optimize the evolved state.
                if (evolveSettings.m_optimize) {
                    FireStarterState optimizeState(bestState);
                    optimizeState.Settings().m_mode = FIRESTARTER_OPTIMIZE;
                    FireStarterState optimizeBestState(optimizeState);

                    // Generate the optimize code.
                    if (evolve->GenerateOptimize(optimizeState)) {
                        // Compile the optimize module.
                        FireStarterExecute* executeOptimize = executionUnits[0];
                        executeOptimize->ExecuteCompile();

                        // Initialize the population data
                        executeOptimize->ExecuteInitPopulation();

                        // Loop until the the optimize completion condition or the host program is quit.
                        optimizeState.m_optimize_pass = 0;
                        while (!WillTerminate()) {
                            // Optimize the current generation.
                            executeOptimize->ExecuteOptimize(optimizeState, false);

                            // Update the results in the UI and check for completion.
                            if (complete->CompleteState(optimizeBestState, optimizeState))
                                break;

                            // Increment the generation.
                            optimizeState.m_optimize_pass++;
                        }

                        // Output the optimize results.
                        if (!WillTerminate()) {
                            resultText += Format("  Optimize Result=%.8f", optimizeState.m_maxResult);
                            if ((bestState.m_maxResult > evolveSettings.m_evolveTarget) && (optimizeState.m_maxResult <= evolveSettings.m_evolveTarget))
                                resultText += " *";
                        }
                    }
                }

                if (bestState.m_maxResult <= evolveSettings.m_evolveTarget)
                    resultText += " *******";
                resultText += "\n";
                FireStarterSource::AppendSource(resultText, Format("Logs\\%s_EvolveResults.txt", streamDate.c_str()));
            }

#if FIRESTARTER_EVOLVE_DEBUG
            for (FireStarterState& curState : allStates)
                resultText += Format("%2llu: copy_index=%2llu  id:%2llu  evolution: %2llu  age: %3llu  maxResult: %.8f\n", curState.m_index, curState.m_copy_index, curState.m_id, curState.m_evolution, generation - curState.m_generation, curState.m_maxResult);
            resultText += "\n";
            FireStarterSource::AppendSource(resultText, Format("Logs\\%s_EvolveDebug.txt", streamDate.c_str()));
#endif
        }

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        delete complete;

        // Finish processing and terminate each unit.
        for (FireStarterExecute* execute : executionUnits)
            delete execute;

        // Delete the multi-process compiler.
        delete compile;

        // Delete the evolution code generator.
        delete evolve;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // EvolveCPUStream

void FireStarterStream::EvolveGPUStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        // Evolve a number of states equal to the evolveSettings.m_seeds.
        FireStarterSettings evolveSettings(m_streamSettings);
        evolveSettings.m_units = 1;
        SimpleTimer streamTimer;
        std::string streamDate = m_streamDate;

        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the evolve execution unit.
        FireStarterExecute* evolveExecute = new FireStarterExecute(manager);

        // Create the evolve execution unit.
        FireStarterExecute* evolveOptimize = new FireStarterExecute(manager);

        // Compile the evolve module.
        evolveExecute->ExecuteCompileEvolver();

        // Compile the optimize module.
        evolveOptimize->ExecuteCompileOptimizer();

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow);

        // Loop until the the evolve completion condition or the host program is quit.
        unsigned int evolveTests = MAX(evolveSettings.m_tests, 1);
        for (unsigned int t = testCount++; (t < evolveTests) && !WillTerminate(); t = testCount++) {
            // Reset the timer if there is only one stream.
            if (evolveSettings.m_streams == 1)
                streamTimer.Start();

            // Initialize the states.
            unsigned long long test = FIRESTARTER_START_TEST + t;
            FireStarterState evolveState = FireStarterState(evolveSettings, 0, 0, 0, test);
            FireStarterState bestState = evolveState;
 
            // Keep track of the tested instructions so they don't get generated again.
            TestedInstructions testedInstructions;

            // Evolve the current test.
            while (!WillTerminate()) {
                // Execute the GPU evolve using a single execution unit.
                evolveExecute->ExecuteEvolveGPU(evolveState, true);

                // Gather and sort the results, update the UI and check for the completion condition.
                if (complete->CompleteEvolveGPU(bestState, evolveState, true))
                    break;
 
                // Age the best state.
                bestState.m_age++;
                m_streamBestState = bestState;

                // Increment the generation.
                evolveState.m_generation++;

                if (!evolveSettings.m_generations) {
                    if (evolveState.m_generation % 10 == 0) {
                        FireStarterState optimizeState = evolveState;
                        optimizeState.m_generation = 0;

                        // Execute the GPU optimize using a single execution unit.
                        for (int i = 0; i < 4; i++)
                            evolveOptimize->ExecuteOptimizeGPU(optimizeState);

                        // Gather and sort the results, update the UI and check for the completion condition.
                        if (complete->CompleteEvolveGPU(bestState, optimizeState, true))
                            break;
                    }
                } else if (evolveState.m_generation == evolveSettings.m_generations)
                    break; // Exit after a set number of generations.
            }

            // Optimize the best state.
            if (!WillTerminate()) {
                // Output the evolve results.
                std::string resultText = Format("Duration: %.1f  Seed=%u  Test=%u  Generation=%u  Best Generations=%u  Evolutions=%u  Evolve Result=%.8f", streamTimer.Duration(), bestState.Settings().m_evolveSeed, test, evolveState.m_generation, bestState.m_generation, bestState.m_evolution, bestState.m_maxResult);
                if (bestState.m_maxResult <= evolveSettings.m_evolveTarget)
                    resultText += " *******";
                resultText += "\n";
                FireStarterSource::AppendSource(resultText, Format("Logs\\%s_EvolveResults.txt", streamDate.c_str()));
            }
        }

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        delete complete;

        // Finish processing and terminate each unit.
        delete evolveExecute;

        // Finish processing and terminate each unit.
        delete evolveOptimize;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // EvolveGPUStream

FireStarterStream::FireStarterStream(size_t index, const FireStarterWindow& window, FireStarterState& bestState, const FireStarterSettings& streamSettings) : SerialThread(Format("FireStarterStream%zu", index)),
    m_streamIndex(index),
    m_streamWindow(window),
    m_streamBestState(bestState),
    m_streamSettings(streamSettings)
{
    static std::string fileDate;
    if (fileDate.empty())
        fileDate = FileNameDate(SimpleTimer::RunSecond()).c_str();
    m_streamDate = fileDate;
} // FireStarterStream

FireStarterStream::~FireStarterStream(void)
{
    SerialThread::Synchronize();
} // ~FireStarterStream

bool FireStarterStreams::SynchronizeStreams(std::vector<FireStarterStream*>& streams)
{
    bool result = true;
    for (FireStarterStream* stream : streams)
        result &= stream->Synchronize();
    return result;
} // SynchronizeStreams

void FireStarterStreams::RandomStreams(void)
{
    // Note: TODO: SerialThread should terminate if its parent SerialThread should terminate.
    // Initialize the streams.
    DispatchSync([this] {
        // Generate sequential random programs and test each of them.
        size_t randomTests = m_streamSettings.m_states * MAX(m_streamSettings.m_tests, 1);
        size_t numStreams = MAX(MIN(m_streamSettings.m_streams, randomTests), 1);
        FireStarterState bestState(m_streamSettings);

        // Create the streams.
        std::vector<FireStarterStream*> streams(numStreams, nullptr);
        for (size_t stream = 0; stream < numStreams; stream++)
            streams[stream] = new FireStarterStream(stream, m_window, bestState, m_streamSettings);

        // Randomize and test the streams.
        m_testCount = 0;
        for (FireStarterStream* stream : streams)
            stream->RandomStream(m_server, m_testCount);

        // Wait for all the streams to finish the random pass.
        SynchronizeStreams(streams);

        // Terminate and delete each stream unit.
        for (FireStarterStream* stream : streams)
            delete stream;
    });
} // RandomStreams

void FireStarterStreams::EvolveStreams(void)
{
    // Note: TODO: SerialThread should terminate if its parent SerialThread should terminate.
    // Initialize the streams.
    DispatchSync([this] {
        size_t numStreams = MAX(MIN(m_streamSettings.m_streams, m_streamSettings.m_tests), 1);
        FireStarterState bestState(m_streamSettings);

        // Create the streams.
        std::vector<FireStarterStream*> streams(numStreams, nullptr);
        for (size_t stream = 0; stream < numStreams; stream++)
            streams[stream] = new FireStarterStream(stream, m_window, bestState, m_streamSettings);

        // Evolve the streams.
        m_testCount = 0;
        FireStarterServer* server = MAX(numStreams, m_streamSettings.m_units) > 1 ? m_server : nullptr;
        for (size_t stream = 0; stream < numStreams; stream++)
            if (m_streamSettings.m_mode == FIRESTARTER_EVOLVE_CPU)
                streams[stream]->EvolveCPUStream(server, m_testCount);
            else
                streams[stream]->EvolveGPUStream(server, m_testCount);

        // Wait for all the streams to complete.
        bool streamsComplete;
        do {
            streamsComplete = true;
            for (FireStarterStream* stream : streams)
                if (stream->IsRunning()) {
                    streamsComplete = false;
                    break;
                }
            SleepFor(0.1);
        } while (!(WillTerminate() || streamsComplete));

        // Terminate and delete each stream unit.
        for (FireStarterStream* stream : streams)
            delete stream;
    });
} // EvolveStreams

FireStarterStreams::FireStarterStreams(const FireStarterWindow& window, FireStarterServer* server, const FireStarterSettings& streamSettings) : m_window(window), m_server(server), m_streamSettings(streamSettings), m_testCount(0)
{
} // FireStarterStreams

FireStarterStreams::~FireStarterStreams(void)
{
} // ~FireStarterStream