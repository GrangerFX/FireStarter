#include "FireStarterStream.h"
#include "FireStarterEvolve.h"
#include "FireStarterCompile.h"
#include "FireStarterExecute.h"
#include "FireStarterComplete.h"
#include "FireStarterSource.h"
#include "FireStarter_LoadState.h"

#define FIRESTARTER_STREAM_EVOLUTIONS 100

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
            evolve->RandomState(evolveState);

            // Compile the evolved program.
            // Note: This does nothing when using a multiprocess server.
            compile->CompileJob(true);

            // Execute the state.
            execute->ExecuteRandom();

            // Complete the state and display the results.
            complete->CompleteRandom(m_streamBestState, evolveState);

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

        // Create the evolution execution units.
        std::vector<FireStarterExecute*> evolutionUnits;
        for (unsigned int i = 0; i < evolveSettings.m_units; i++) {
            FireStarterExecute* evolutionUnit = new FireStarterExecute(manager, i);
            evolutionUnits.push_back(evolutionUnit);
        }

        // Create the optimization execution unit.
        FireStarterExecute* execute = nullptr;
        if (evolveSettings.m_optimize)
            execute = new FireStarterExecute(manager, evolveSettings.m_units);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow, FIRESTARTER_SAVE_LOADSTATE);

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

                // Execute each state using one of the evolution execution units.
                // Note: ExecuteEvolveCPU must be async because the compiles come back out of order.
                std::atomic<unsigned int> evolveCount = numStates;
                for (FireStarterExecute* evolutionUnit : evolutionUnits)
                    evolutionUnit->ExecuteOptimizeCount(evolveCount);

                // Gather and sort the results, update the UI and check for the completion condition.
                // Note: This syncronizes the execution units.
                if (complete->CompleteStates(m_streamBestState, bestState, allStates, numStates, generation))
                    break;

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
                    unsigned int optimizePasses = bestState.Settings().m_optimize;
                    optimizeState.Settings().SetMode(FIRESTARTER_OPTIMIZE_CPU);
                    optimizeState.Settings().m_optimize = optimizePasses;
                    FireStarterState optimizeBestState(optimizeState);

                    // Generate the optimize code.
                    if (execute->ExecuteGenerateOptimize(optimizeState)) {
                        // Loop until the the optimize completion condition or the host program is quit.
                        while (!WillTerminate() && (optimizeState.m_optimize_pass < optimizeState.Settings().m_optimize)) {
                            // Optimize the current generation.
                            execute->ExecuteOptimize(optimizeState);

                            // Update the results in the UI and check for completion.
                            if (complete->CompleteState(optimizeBestState, optimizeState))
                                break;

                            // Increment the generation.
                            optimizeState.m_optimize_pass++;
                        }

                        // Output the optimize results.
                        if (!WillTerminate()) {
                            resultText += Format("  Optimize Result=%.8f", optimizeState.m_maxResult);
                            if ((bestState.m_maxResult > evolveSettings.m_target) && (optimizeState.m_maxResult <= evolveSettings.m_target))
                                resultText += " *";
                        }
                    }
                }

                if (bestState.m_maxResult <= evolveSettings.m_target)
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

        // Delete the optimizate execution unit.
        delete execute;

        // Finish processing and terminate each evolution execution unit.
        for (FireStarterExecute* evolutionUnit : evolutionUnits)
            delete evolutionUnit;

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
        SimpleTimer streamTimer;
        std::string streamDate = m_streamDate;
        double totalDuration = 0.0;

        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // A serial thread for compiling the optimize pass.
        SerialThread compiler;

        // Create the evolution completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow, FIRESTARTER_SAVE_LOADSTATE);

        // Create the execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager, 1, 1);

        // Create the execution unit used to generate the optimize code.
        FireStarterExecute* executeOptimize = new FireStarterExecute(manager, 0, 0);

        // Loop until the the evolve completion condition or the host program is quit.
        FireStarterState bestState; // Used asynchronously by ExecuteOptimizeComplete()
        unsigned int evolveTests = MAX(evolveSettings.m_tests, 1);
        for (unsigned int t = testCount++; (t < evolveTests) && !WillTerminate(); t = testCount++) {
            // Reset the timer if there is only one stream.
            if (evolveSettings.m_streams == 1)
                streamTimer.Start();

            // Initialize the states.
            unsigned long long test = FIRESTARTER_START_TEST + t;
            FireStarterState evolveState = FireStarterState(evolveSettings, 0, 0, 0, test);
            bestState = evolveState;

            // Keep track of the tested instructions so they don't get generated again.
            TestedInstructions testedInstructions;

            // Evolve the current test.
            while (!WillTerminate() && !bestState.m_evolveComplete) {
                // Execute the GPU evolve using a single execution unit.
                execute->ExecuteEvolve(evolveState);

                // Gather the results, update the UI and check for the completion condition.
                complete->CompleteState(bestState, evolveState);

                // Only optimize unique states.
                if (!bestState.m_evolveComplete && !testedInstructions.count(evolveState.m_program.OptimizedInstructionsData())) {
                    // Add the instructions to the set of unique instructions.
                    testedInstructions.insert(evolveState.m_program.OptimizedInstructionsData());
                    
                    // Optimize the evolved state.
                    FireStarterState optimizeState = evolveState;
                    unsigned int optimizePasses = evolveState.Settings().m_optimize;

#if 0
                    optimizeState.Settings().SetMode(FIRESTARTER_OPTIMIZE_CPU);
                    optimizeState.Settings().m_optimize = optimizePasses;
                    if (executeOptimize->ExecuteGenerateOptimize(optimizeState))
                        while (!WillTerminate() && (optimizeState.m_optimize_pass < optimizeState.Settings().m_optimize)) {
                            executeOptimize->ExecuteEvolveOptimizeCPU(optimizeState);

                            // Update the results in the UI and check for completion.
                            if (complete->CompleteState(bestState, optimizeState))
                                break;

                            // Increment the generation.
                            optimizeState.m_optimize_pass++;
                        }
#else
                    optimizeState.Settings().SetMode(FIRESTARTER_OPTIMIZE_GPU);
                    optimizeState.Settings().m_optimize = optimizePasses;
                    while (!WillTerminate() && (optimizeState.m_optimize_pass < optimizeState.Settings().m_optimize)) {
                        executeOptimize->ExecuteEvolveOptimizeGPU(optimizeState);

                        // Update the results in the UI and check for completion.
                        if (complete->CompleteState(bestState, optimizeState))
                            break;

                        // Increment the generation.
                        optimizeState.m_optimize_pass++;
                    }
#endif
                }

                // Exit after a set number of generations.
                if (++evolveState.m_generation == evolveSettings.m_generations)
                    break;
            }

            // Wait for all the optimizations to complete.
            execute->Synchronize();

            // Output the test results.
            if (!WillTerminate()) {
                // Output the evolve results.
                FireStarterResult* bestResult = bestState.Result(0);
                double duration = streamTimer.Duration();
                totalDuration += duration;

                std::string resultText = Format("Test: %u  Generation=%u  Evolve Result=%.8f  Optimize Result=%.8f  Duration: %.1f  Total: %.1f  Average: %.1f", test, evolveState.m_generation, evolveState.m_maxResult, bestState.m_maxResult, duration, totalDuration, totalDuration / testCount);
                if (bestState.m_maxResult <= evolveSettings.m_target)
                    resultText += " *******";
                resultText += "\n";
                FireStarterSource::AppendSource(resultText, Format("Logs\\%s_EvolveResults.txt", streamDate.c_str()));
            }
        }

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        delete complete;

        // Finish processing and terminate the evolution execution unit.
        delete execute;

        // Finish processing and terminate the optimization execution unit.
        delete executeOptimize;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // EvolveGPUStream

void FireStarterStream::OptimizeCPUStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        // Evolve a number of states equal to the evolveSettings.m_seeds.
        FireStarterSettings optimizeSettings(m_streamSettings);
        SimpleTimer streamTimer;
        std::string streamDate = m_streamDate;
        FireStarterState evolveState;
        LoadState(evolveState);

        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the optimization execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow);

        // Generate the optimize code.
        if (execute->ExecuteGenerateOptimize(evolveState)) {
            // Loop until the the evolve completion condition or the host program is quit.
            unsigned long long evolveTests = MAX(optimizeSettings.m_tests, 1);
            for (unsigned long long t = testCount++; (t < evolveTests) && !WillTerminate(); t = testCount++) {
                // Reset the timer if there is only one stream.
                if (optimizeSettings.m_streams == 1)
                    streamTimer.Start();

                // Initialize the states.
                FireStarterStates allStates;
                unsigned long long test = FIRESTARTER_START_TEST + t;

                // Optimize the evolved state.
                FireStarterState optimizeState(optimizeSettings);
                optimizeState.CopyInstructions(evolveState);
                optimizeState.LoadCodeFromProgram();
                optimizeState.m_test = test;
                FireStarterState bestState(optimizeState);

                // Loop until the the optimize completion condition or the host program is quit.
                while (!WillTerminate() && (optimizeState.m_optimize_pass < optimizeState.Settings().m_optimize)) {
                    // Optimize the current generation.
                    execute->ExecuteOptimize(optimizeState);

                    // Update the results in the UI and check for completion.
                    if (complete->CompleteState(bestState, optimizeState))
                        break;

                    // Increment the generation.
                    optimizeState.m_optimize_pass++;
                }

                // Output the test results.
                if (!WillTerminate()) {
                    // Output the evolve results.
                    FireStarterResult* bestResult = bestState.Result(0);
                    std::string resultText = Format("Test: %llu  Pass=%llu  Evolve Result=%.8f  Optimize Result=%.8f  Duration: %.1f", test, optimizeState.m_optimize_pass, evolveState.m_maxResult, optimizeState.m_maxResult, streamTimer.Duration());
                    if (bestState.m_maxResult <= optimizeSettings.m_target)
                        resultText += " *******";
                    resultText += "\n";
                    FireStarterSource::AppendSource(resultText, Format("Logs\\%s_OptimizeResults.txt", streamDate.c_str()));
                }
            }
        }

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        delete complete;

        // Delete the optimizate execution unit.
        delete execute;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // OptimizeCPUStream

void FireStarterStream::OptimizeGPUStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        // Evolve a number of states equal to the evolveSettings.m_seeds.
        FireStarterSettings optimizeSettings(m_streamSettings);
        SimpleTimer streamTimer;
        std::string streamDate = m_streamDate;
        FireStarterState evolveState;
        LoadState(evolveState);

        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the optimization execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow);

        // Compile the evolve module.
        if (execute->ExecuteGenerateEvolver()) {
            // Loop until the the evolve completion condition or the host program is quit.
            unsigned long long evolveTests = MAX(optimizeSettings.m_tests, 1);
            for (unsigned long long t = testCount++; (t < evolveTests) && !WillTerminate(); t = testCount++) {
                // Reset the timer if there is only one stream.
                if (optimizeSettings.m_streams == 1)
                    streamTimer.Start();

                // Initialize the states.
                FireStarterStates allStates;
                unsigned long long test = FIRESTARTER_START_TEST + t;

                // Optimize the evolved state.
                FireStarterState optimizeState(optimizeSettings);
                optimizeState.CopyInstructions(evolveState);
                optimizeState.LoadCodeFromProgram();
                optimizeState.m_test = test;
                FireStarterState bestState(optimizeState);

                // Loop until the the optimize completion condition or the host program is quit.
                while (!WillTerminate() && (optimizeState.m_optimize_pass < optimizeState.Settings().m_optimize)) {
                    // Optimize the current generation.
                    execute->ExecuteEvolve(optimizeState);

                    // Update the results in the UI and check for completion.
                    if (complete->CompleteState(bestState, optimizeState))
                        break;

                    // Increment the generation.
                    optimizeState.m_optimize_pass++;
                }

                // Output the test results.
                if (!WillTerminate()) {
                    // Output the evolve results.
                    FireStarterResult* bestResult = bestState.Result(0);
                    std::string resultText = Format("Test: %llu  Pass=%llu  Evolve Result=%.8f  Optimize Result=%.8f  Duration: %.1f", test, optimizeState.m_optimize_pass, evolveState.m_maxResult, optimizeState.m_maxResult, streamTimer.Duration());
                    if (bestState.m_maxResult <= optimizeSettings.m_target)
                        resultText += " *******";
                    resultText += "\n";
                    FireStarterSource::AppendSource(resultText, Format("Logs\\%s_OptimizeResults.txt", streamDate.c_str()));
                }
            }
        }

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        delete complete;

        // Delete the optimizate execution unit.
        delete execute;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // OptimizeGPUStream

void FireStarterStream::SpeedTestStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        // Evolve a number of states equal to the evolveSettings.m_seeds.
        FireStarterSettings optimizeSettings(m_streamSettings);
        SimpleTimer streamTimer;
        std::string streamDate = m_streamDate;
        FireStarterState evolveState;
        LoadState(evolveState);

        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the optimization execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow);

        // Generate the optimize code.
        if (execute->ExecuteGenerateSpeedTest(evolveState)) {
            // Loop until the the evolve completion condition or the host program is quit.
            unsigned long long evolveTests = MAX(optimizeSettings.m_tests, 1);
            for (unsigned long long t = testCount++; (t < evolveTests) && !WillTerminate(); t = testCount++) {
                // Reset the timer if there is only one stream.
                if (optimizeSettings.m_streams == 1)
                    streamTimer.Start();

                // Initialize the states.
                FireStarterStates allStates;
                unsigned long long test = FIRESTARTER_START_TEST + t;

                // Optimize the evolved state.
                FireStarterState optimizeState(optimizeSettings);
                optimizeState.CopyInstructions(evolveState);
                optimizeState.LoadCodeFromProgram();
                optimizeState.m_test = test;
                FireStarterState bestState(optimizeState);

                // Loop until the the optimize completion condition or the host program is quit.
                while (!WillTerminate() && (optimizeState.m_optimize_pass < optimizeState.Settings().m_optimize)) {
                    // Optimize the current generation.
                    execute->ExecuteEvolve(optimizeState);

                    // Update the results in the UI and check for completion.
                    if (complete->CompleteState(bestState, optimizeState))
                        break;

                    // Increment the generation.
                    optimizeState.m_optimize_pass++;
                }

                // Output the test results.
                if (!WillTerminate()) {
                    // Output the evolve results.
                    FireStarterResult* bestResult = bestState.Result(0);
                    std::string resultText = Format("Test: %llu  Pass=%llu  Evolve Result=%.8f  Optimize Result=%.8f  Duration: %.1f", test, optimizeState.m_optimize_pass, evolveState.m_maxResult, optimizeState.m_maxResult, streamTimer.Duration());
                    if (bestState.m_maxResult <= optimizeSettings.m_target)
                        resultText += " *******";
                    resultText += "\n";
                    FireStarterSource::AppendSource(resultText, Format("Logs\\%s_OptimizeResults.txt", streamDate.c_str()));
                }
            }
        }

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        delete complete;

        // Delete the optimizate execution unit.
        delete execute;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // SpeedTestStream

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

void FireStarterStreams::ExecuteStreams(void)
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
            switch (m_streamSettings.m_mode) {
            case FIRESTARTER_EVOLVE_CPU:
                streams[stream]->EvolveCPUStream(server, m_testCount);
                break;
            case FIRESTARTER_EVOLVE_GPU:
                streams[stream]->EvolveGPUStream(server, m_testCount);
                break;
            case FIRESTARTER_OPTIMIZE_CPU:
                streams[stream]->OptimizeCPUStream(server, m_testCount);
                break;
            case FIRESTARTER_OPTIMIZE_GPU:
                streams[stream]->OptimizeGPUStream(server, m_testCount);
                break;
            case FIRESTARTER_SPEED_TEST:
                streams[stream]->SpeedTestStream(server, m_testCount);
                break;
            }

        // Wait for all the streams to complete.
        bool streamsComplete = false;
        do {
            streamsComplete = true;
            for (FireStarterStream* stream : streams)
                if (!stream->IsFinished()) {
                    streamsComplete = false;
                    break;
                }
            SleepFor(0.1);
        } while (!(WillTerminate() || streamsComplete));

        // Terminate and delete each stream unit.
        for (FireStarterStream* stream : streams)
            delete stream;
    });
} // ExecuteStreams

FireStarterStreams::FireStarterStreams(const FireStarterWindow& window, FireStarterServer* server, const FireStarterSettings& streamSettings) : m_window(window), m_server(server), m_streamSettings(streamSettings), m_testCount(0)
{
} // FireStarterStreams

FireStarterStreams::~FireStarterStreams(void)
{
} // ~FireStarterStream