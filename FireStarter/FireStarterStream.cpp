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
    bestState.m_maxResult = settings.m_startResult; // Force the initial results to display.

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager();

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile();

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the execution unit.
    FireStarterExecute* execute = new FireStarterExecute(manager);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow);

    // Generate the optimize code.
    evolve->GenerateOptimize(startState, true);

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
        while (!WillTerminate()) {
            // Optimize the current generation.
            execute->ExecuteOptimize(optimizeState, optimizeState.m_generation, false);

            // Update the results in the UI.
            if (complete->CompleteState(bestState, optimizeState))
                break;
            optimizeState.m_generation++;
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

void FireStarterStream::RandomState(FireStarterState& randomState)
{
    FireStarterState bestState(randomState);    // The best state generation is used for the status display and termination condition.

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager();

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile();

    // Create the execution unit.
    FireStarterExecute* execute = new FireStarterExecute(manager);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow);

    // Evolve a new generation for the state.
    evolve->RandomState(randomState, bestState, true);

    // Compile the evolved program.
    compile->CompileJob(manager, true);

    // Execute the state.
    execute->ExecuteEvolve(true);

    // Complete the state and display the results.
    complete->CompleteState(bestState, randomState);

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

void FireStarterStream::Optimize(const FireStarterWindow& window, const FireStarterState& evolveState)
{
    FireStarterState bestState(evolveState);
    FireStarterStream stream(window, bestState, 0); // Provides serial thread WillTerminate() method.
    stream.OptimizeState(evolveState);
} // Optimize

void FireStarterStream::Randomize(const FireStarterWindow& window, const FireStarterState& evolveState)
{
    FireStarterState bestState(evolveState);
    FireStarterStream stream(window, bestState, 0); // Provides serial thread WillTerminate() method.
    stream.RandomState(bestState);
} // Randomize

void FireStarterStream::OptimizeStream(const FireStarterState& evolveState, bool sync)
{
    Dispatch([this, evolveState] {
        OptimizeState(evolveState);
    }, sync);
} // OptimizeStream

void FireStarterStream::RandomStream(FireStarterServer* server, std::atomic<unsigned long long>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        FireStarterSettings randomSettings(m_streamSettings);
        
        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the evolution code generator.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager);

        // Create the multi-process compiler.
        FireStarterCompile* compile = new FireStarterCompile(manager, server, 1);

        // Create the execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow, false);

        // Loop until the the completion condition or the host program is quit.
        size_t tests = MAX(randomSettings.m_tests, 1);
        size_t randomTests = randomSettings.m_seeds * tests;
        for (unsigned long long test = testCount++; (test < randomTests) && !WillTerminate(); test = testCount++) {
            // Setup the intial state
            FireStarterSettings evolveSettings(randomSettings);
            evolveSettings.m_evolveSeed = randomSettings.m_evolveSeed + test / tests;
            FireStarterState evolveState(evolveSettings, m_streamIndex, test % tests);

            // Evolve the first generation for the state.
            evolve->RandomState(evolveState, m_streamBestState, true);

            // Compile the evolved program.
            compile->CompileJob(manager, true);

            // Execute the state.
            execute->ExecuteEvolve(true);

            // Complete the state and display the results.
            complete->CompleteState(m_streamBestState, evolveState);

            // Save the best random state for all streams.
            complete->SaveBest(m_streamBestState);

            // Output the evolve results.
            std::string resultText;
            if (evolveState.Settings().m_seeds > 1)
                resultText += Format("Seed=%u  ", evolveState.Settings().m_evolveSeed);
            if (evolveState.Settings().m_tests > 1)
                resultText += Format("Test=%u  ", evolveState.m_test);
            resultText += Format("Random Result=%.8f\n", evolveState.m_maxResult);
            if (!m_streamDate.empty())
                FireStarterCode::AppendCode(Format("Logs\\%s_RandomResults.txt", m_streamDate.c_str()), resultText);
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

void FireStarterStream::EvolveStream(FireStarterServer* server, std::atomic<unsigned long long>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        // Evolve a number of states equal to the evolveSettings.m_seeds.
        FireStarterSettings evolveSettings(m_streamSettings);
        unsigned int numStates = evolveSettings.m_seeds;
        evolveSettings.m_units = MIN(MAX(evolveSettings.m_units, evolveSettings.m_processes), numStates);
        evolveSettings.m_processes = MIN(evolveSettings.m_processes, numStates);
        std::vector<FireStarterState> allStates(numStates);
        TestedInstructions testedInstructions;
        SimpleTimer streamTimer;

        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager(numStates);

        // Create the multi-process compiler.
        FireStarterCompile* compile = new FireStarterCompile(manager, server, evolveSettings.m_processes);

        // Create the evolution code generator.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager);

        // Create the execution units.
        std::vector<FireStarterExecute*> executionUnits;
        for (unsigned int i = 0; i < evolveSettings.m_units; i++) {
            // Create an evolution generator unit.
            FireStarterExecute* execute = new FireStarterExecute(manager, i);
            executionUnits.push_back(execute);
        }

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow);

        // Loop until the the evolve completion condition or the host program is quit.
        unsigned long long evolveTests = MAX(evolveSettings.m_tests, 1);
        for (unsigned long long t = testCount++; (t < evolveTests) && !WillTerminate(); t = testCount++) {
            unsigned long long test = evolveSettings.m_tests == 1 ? FIRESTARTER_ONE_TEST : t;

            // Randomize the entire program of each state for the first generation
            for (unsigned long long i = 0; i < numStates; i++)
                allStates[i].InitState(evolveSettings, i, test);

            // Evolve the current test.
            unsigned int generation = 0;
            while (!WillTerminate()) {
                // Evolve a new generation for each state.
                evolve->EvolveStates(allStates, &testedInstructions, generation);

                // Execute each state.
                std::atomic<long long> evolveCount = numStates;
                for (FireStarterExecute* execute : executionUnits)
                    execute->ExecuteEvolve(evolveCount);

                // Complete each state and display and sort the results.
                // This method is synchronized by default.
                if (complete->CompleteStates(allStates, generation))
                    break;
                generation++;
            }

            // Output the evolve results.
            FireStarterState& bestEvolveState = allStates[0];
            std::string resultText = Format("Duration: %.1f  Evolve Seed=%u  Test=%u  ", streamTimer.Duration(), bestEvolveState.Settings().m_evolveSeed, test);
            resultText += Format("Generation=%u  Evolve Result=%.8f", bestEvolveState.m_generation, bestEvolveState.m_maxResult);

#if FIRESTARTER_EVOLVE_OPTIMIZE
            // The best state is used for the status display and termination condition.
            FireStarterState optimizeState(bestEvolveState);
            optimizeState.m_generation = 0;
            optimizeState.m_evolution = 0;

            // Optimize the evolved state.
            // Generate the optimize code.
            evolve->GenerateOptimize(optimizeState);

            // Compile the optimize module.
            FireStarterExecute* executeOptimize = executionUnits[0];
            executeOptimize->ExecuteCompile();

            // Initialize the population data
            executeOptimize->ExecuteInitPopulation(true);

            // Loop until the the optimize completion condition or the host program is quit.
            FireStarterState bestOptimizeState(optimizeState);
            unsigned long long pass = 0;
            while (!WillTerminate()) {
                // Optimize the current generation.
                executeOptimize->ExecuteOptimize(optimizeState, pass, false);

                // Update the results in the UI.
                if (complete->CompleteState(bestOptimizeState, optimizeState))
                    break;

                // Next generation.
                optimizeState.m_generation++;
                pass++;
            }

            // Save the best optimized state for all streams.
            complete->SaveBest(bestOptimizeState);

            // Output the optimize results.
            resultText += Format("  Optimize Generation=%u  Optimize Result=%.8f", bestOptimizeState.m_generation, bestOptimizeState.m_maxResult);
            if (bestOptimizeState.m_maxResult < 0.000001f)
                resultText += " *******";
#endif
            resultText += "\n";
            FireStarterCode::AppendCode(Format("Logs\\%s_EvolveResults.txt", m_streamDate.c_str()), resultText);

#if FIRESTARTER_EVOLVE_DEBUG
            for (FireStarterState& curState : allStates)
                resultText += Format("%llu: id:%llu  copy_id: %llu  evolution: %llu maxResult: %.8f\n", curState.m_index, curState.m_id, curState.m_copy_id, curState.m_evolution, curState.m_maxResult);
            resultText += "\n";
            FireStarterCode::AppendCode(Format("Logs\\%s_EvolveDebug.txt", m_streamDate.c_str()), resultText);
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
} // EvolveStream

FireStarterStream::FireStarterStream(const FireStarterWindow& window, FireStarterState& bestState, size_t index) : SerialThread(Format("FireStarterStream%zu", index)), m_streamWindow(window), m_streamBestState(bestState), m_streamIndex(index)
{
    // Get the stream settings.
    m_streamSettings = m_streamBestState.Settings();

    static std::string fileDate;
    if (fileDate.empty())
        fileDate = FileNameDate().c_str();
    m_streamDate = fileDate;
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

void FireStarterStreams::RandomStreams(void)
{
    // Note: TODO: SerialThread should terminate if its parent SerialThread should terminate.
    // Initialize the streams.
    DispatchSync([this] {
        // Generate sequential random programs and test each of them.
        size_t tests = MAX(m_settings.m_tests, 1);
        size_t randomTests = m_settings.m_seeds * tests;
        size_t numStreams = MIN(m_settings.m_units, randomTests);
        FireStarterState bestState(m_settings);

        // Create the streams.
        std::vector<FireStarterStream*> streams(numStreams, nullptr);
        for (size_t stream = 0; stream < numStreams; stream++)
            streams[stream] = new FireStarterStream(m_window, bestState, stream);

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
        unsigned int evolveTests = MAX(m_settings.m_tests, 1);
        size_t numStreams = MIN(m_settings.m_units, evolveTests);
        FireStarterState bestState(m_settings);

        // Create the streams.
        std::vector<FireStarterStream*> streams(numStreams, nullptr);
        for (size_t stream = 0; stream < numStreams; stream++)
            streams[stream] = new FireStarterStream(m_window, bestState, stream);

        // Evolve the streams.
        m_testCount = 0;
        for (size_t stream = 0; stream < numStreams; stream++)
            streams[stream]->EvolveStream(m_server, m_testCount);

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

FireStarterStreams::FireStarterStreams(const FireStarterWindow& window, FireStarterServer* server, const FireStarterSettings& settings) : m_window(window), m_server(server), m_settings(settings), m_testCount(0)
{
} // FireStarterStreams

FireStarterStreams::~FireStarterStreams(void)
{
} // ~FireStarterStream