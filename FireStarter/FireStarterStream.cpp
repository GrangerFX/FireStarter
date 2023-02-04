#include "FireStarterStream.h"
#include "FireStarterEvolve.h"
#include "FireStarterCompile.h"
#include "FireStarterExecute.h"
#include "FireStarterComplete.h"
#include "FireStarter_LoadState.h"

void FireStarterStream::OptimizeState(const FireStarterWindow& window, const FireStarterState& evolveState)
{
    // Convert the most recently evolved state into an optimize mode state.
    FireStarterState startState(evolveState);
    FireStarterSettings& settings = startState.Settings();
    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_units = 1;
    settings.m_processes = 0;

    // Switch the settings to optimize mode
    startState.InitResult();

    // Setup the best state
    FireStarterState bestState(startState);

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager();

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager);

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the execution unit.
    FireStarterExecute* execute = new FireStarterExecute(manager);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, window, settings);

    // Generate the optimize code.
    evolve->GenerateOptimize(startState);

    // Compile the optimize code.
    execute->ExecuteCompile();

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
        optimizeState.m_index = startState.m_test ? startState.m_index : startState.m_index + test;
        optimizeState.m_test = test;

        // Loop until the the completion condition or the host program is quit.
        size_t generation = startState.m_generation;
        bool init = true;
        while (!WillTerminate()) {
            // Optimize the current generation.
            execute->ExecuteOptimize(generation, optimizeState.m_index, test, init);

            // Update the results in the UI.
            if (!complete->CompleteState(bestState, optimizeState))
                break;
            generation++;
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

void FireStarterStream::EvolveState(const FireStarterWindow& window, const FireStarterSettings& settings, size_t index, size_t test)
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
    FireStarterComplete* complete = new FireStarterComplete(manager, window, settings);

    size_t generation = 0;
    while (!WillTerminate()) {
        // Setup the intial state
        FireStarterState evolveState(settings, generation, index, test);
            
        // Evolve a new generation for the state.
        evolve->EvolveState(evolveState, generation, true);

        // Compile the evolved program.
        compile->CompileJob(manager, true);

        // Execute the state.
        execute->ExecuteEvolve(true);

        // Complete the state and display the results.
        if (!complete->CompleteState(m_bestState, evolveState))
            break;
        generation++;
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

void FireStarterStream::OptimizeStream(const FireStarterWindow& window, const FireStarterState& evolveState, bool sync)
{
    m_done = false;
    Dispatch([this, window, evolveState] {
        OptimizeState(window, evolveState);
        m_done = true;
    }, sync);
} // OptimizeStream

void FireStarterStream::EvolveStream(const FireStarterWindow& window, const FireStarterSettings& settings, size_t index, bool sync)
{
    m_done = false;
    Dispatch([this, window, settings, index] {
        FireStarterSettings evolveSettings(settings);
        size_t startSeed = settings.m_seed;
        static std::atomic<unsigned long long> a_seed = 0;
        unsigned long long seed = 0;

        // Loop until the the completion condition or the host program is quit.
        while (!WillTerminate() && (seed < settings.m_tests)) {
            seed = a_seed++;
            evolveSettings.m_seed = startSeed + seed;
            EvolveState(window, settings, index, 0);
        }
        m_done = true;
    }, sync);
} // EvolveStream

void FireStarterStream::Optimize(const FireStarterWindow& window, const FireStarterState& evolveState)
{
    FireStarterState bestState(evolveState);
    FireStarterStream stream(bestState); // Provides serial thread Terminate() method.
    stream.OptimizeStream(window, evolveState, true);
} // Optimize

void FireStarterStream::Evolve(const FireStarterWindow& window, const FireStarterSettings &evolveSettings, size_t index)
{
    FireStarterState bestState(evolveSettings);
    FireStarterStream stream(bestState, index); // Provides serial thread Terminate() method.
    stream.EvolveStream(window, evolveSettings, index, true);
} // Evolve

FireStarterStream::FireStarterStream(FireStarterState& bestState, size_t index) : SerialThread(Format("FireStarterStream%zu", index)), m_bestState(bestState)
{
    m_index = index;
} // FireStarterStream

FireStarterStream::~FireStarterStream(void)
{
} // ~FireStarterStream
