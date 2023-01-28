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

void FireStarterStream::EvolveState(const FireStarterWindow& window, const FireStarterSettings& evolveSettings, size_t index)
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
    FireStarterComplete* complete = new FireStarterComplete(manager, window, evolveSettings);

    // Setup the intial state
    FireStarterState evolveState(evolveSettings);
    evolveState.m_index = index;
    FireStarterState bestState(evolveState);

    // Loop until the the completion condition or the host program is quit.
    size_t generation = 0;
    while (!WillTerminate()) {
        // Evolve a new generation for the state.
        evolve->EvolveState(bestState, evolveState, generation, true);

        // Compile the evolved program.
        compile->CompileJob(manager, true);

        // Execute the state.
        execute->ExecuteEvolve(true);

        // Complete the state and display the results.
        if (!complete->CompleteState(bestState, evolveState))
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

    // Optimization evolution pass.
    if (!WillTerminate() && FIRESTARTER_SECOND_PASS)
        Optimize(window, evolveState);
} // EvolveState

void FireStarterStream::OptimizeStream(const FireStarterWindow& window, const FireStarterState& evolveState, bool sync)
{
    Dispatch([this, window, evolveState] {
        OptimizeState(window, evolveState);
    }, sync);
} // OptimizeStream

void FireStarterStream::EvolveStream(const FireStarterWindow& window, const FireStarterSettings& evolveSettings, size_t index, bool sync)
{
    Dispatch([this, window, evolveSettings, index] {
        EvolveState(window, evolveSettings, index);
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
    FireStarterStream stream(bestState); // Provides serial thread Terminate() method.
    stream.EvolveStream(window, evolveSettings, index, true);
} // Evolve

FireStarterStream::FireStarterStream(FireStarterState& bestState) : m_bestState(bestState)
{
} // FireStarterStream

FireStarterStream::~FireStarterStream(void)
{
} // ~FireStarterStream
