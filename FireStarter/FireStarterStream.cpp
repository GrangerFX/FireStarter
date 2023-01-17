#include "FireStarterStream.h"
#include "FireStarterEvolve.h"
#include "FireStarterCompile.h"
#include "FireStarterExecute.h"
#include "FireStarterComplete.h"
#include "FireStarter_LoadState.h"

void FireStarterStream::Optimize(const FireStarterState* evolveState)
{
    // Convert the most recently evolved state into an optimize mode state.
    FireStarterState startState;
    FireStarterSettings& settings = startState.Settings();
    if (evolveState) {
        // Use the evolveState's settings as much as possible to maintain the random seed.
        startState = *evolveState;
        settings.m_mode = m_optimizeSettings.m_mode;
        settings.m_units = m_optimizeSettings.m_units;
        settings.m_processes = m_optimizeSettings.m_processes;
        settings.m_attempts = m_optimizeSettings.m_attempts;
    } else {
        // Load the best state from the previous Test, Random or Evolve run.
        LoadState(startState);
        startState.m_generation = 0;
        settings.CopyModeSettings(m_optimizeSettings);
    }

    // Switch the settings to optimize mode
    startState.InitResult();

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager();

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager);

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the execution unit.
    FireStarterExecute* execute = new FireStarterExecute(manager);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, m_window, settings);

    // Generate the optimize code.
    evolve->GenerateOptimize(startState);

    // Compile the optimize code.
    execute->ExecuteCompile();

    // Test one more more random seeds.
    size_t firstTest = evolveState ? startState.m_test : FIRESTARTER_TEST_START;
    size_t lastTest = evolveState ? startState.m_test : FIRESTARTER_TEST_START + FIRESTARTER_TEST_SEEDS - 1;
    for (size_t test = firstTest; (test <= lastTest) && !WillTerminate(); test++) {
        // Create the state and execution unit.
        FireStarterState bestState(startState);
        bestState.m_index = evolveState ? startState.m_index : startState.m_index + test;
        bestState.m_test = test;
        FireStarterState optimizeState(bestState);

        // Loop until the the completion condition or the host program is quit.
        size_t generation = startState.m_generation;
        bool init = true;
        while (!WillTerminate()) {
            // Optimize the current generation.
            execute->ExecuteOptimize(generation, bestState.m_index, test, init);

            // Update the results in the UI.
            if (!complete->CompleteState(optimizeState))
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
} // Optimize

void FireStarterStream::Evolve(void)
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
    FireStarterComplete* complete = new FireStarterComplete(manager, m_window, m_evolveSettings);

    // Setup the intial state
    FireStarterState evolveState(m_evolveSettings);
    evolveState.m_index = m_index;

    // Loop until the the completion condition or the host program is quit.
    size_t generation = 0;
    while (!WillTerminate()) {
        // Evolve a new generation for the state.
        evolve->EvolveState(evolveState, generation, true);

        // Compile the evolved program.
        compile->CompileJob(manager, true);

        // Execute the state.
        execute->ExecuteEvolve(true);

        // Complete the state and display the results.
        if (!complete->CompleteState(evolveState, generation))
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
        Optimize(&evolveState);

    // This stream is now finished.
    m_finished = true;
} // Evolve

bool FireStarterStream::Finished(void)
{
    return m_finished;
} // Finished

FireStarterStream::FireStarterStream(FireStarterWindow* window, const FireStarterSettings& evolveSettings, const FireStarterSettings& optimizeSettings, size_t index) : m_window(window), m_evolveSettings(evolveSettings), m_optimizeSettings(optimizeSettings), m_index(index)
{
    DispatchAsync([this] {
        Evolve();
    });
} // FireStarterStream

FireStarterStream::~FireStarterStream(void)
{
} // ~FireStarterStream
