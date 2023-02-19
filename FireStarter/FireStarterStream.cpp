#include "FireStarterStream.h"
#include "FireStarterEvolve.h"
#include "FireStarterCompile.h"
#include "FireStarterExecute.h"
#include "FireStarterComplete.h"
#include "FireStarter_LoadState.h"

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

void FireStarterStream::RandomState(FireStarterState& evolveState)
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
    FireStarterComplete* complete = new FireStarterComplete(manager, m_window, evolveState.Settings());

    // Evolve a new generation for the state.
    evolve->EvolveState(evolveState, 0, true);

    // Compile the evolved program.
    compile->CompileJob(manager, true);

    // Execute the state.
    execute->ExecuteEvolve(true);

    // Complete the state and display the results.
    complete->CompleteState(m_bestState, evolveState);

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
    FireStarterComplete* complete = new FireStarterComplete(manager, m_window, evolveState.Settings());

    // Setup the intial state
    FireStarterState bestState(evolveState);    // The best state generation is used for the status display and termination condition.
    bestState.m_generation = 0;
    size_t generation = 0;
    while (!WillTerminate()) {
        // Evolve a new generation for the state.
        evolve->EvolveState(evolveState, generation, true);

        // Compile the evolved program.
        compile->CompileJob(manager, true);

        // Execute the state.
        execute->ExecuteEvolve(true);

        // Complete the state and display the results.
        if (!complete->CompleteState(bestState, evolveState))
            break;
        generation++;
    }
    if (bestState.m_maxResult < m_bestState.m_maxResult)
        m_bestState = bestState;

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

void FireStarterStream::RandomStream(std::vector<FireStarterState>& states, std::atomic<unsigned long long>& testIndex, bool sync)
{
    Dispatch([this, &states, &testIndex] {
        // Loop until the the completion condition or the host program is quit.
        for (unsigned long long test = testIndex++; (test < states.size()) && !WillTerminate(); test = testIndex++) {
            FireStarterState& evolveState = states[test];
            RandomState(evolveState);
        }
    }, sync);
} // RandomStream

void FireStarterStream::EvolveStream(std::vector<FireStarterState>& states, std::atomic<unsigned long long>& testIndex, bool sync)
{
    Dispatch([this, &states, &testIndex] {
        // Loop until the the completion condition or the host program is quit.
        for (unsigned long long test = testIndex++; (test < states.size()) && !WillTerminate(); test = testIndex++) {
            FireStarterState& evolveState = states[test];
            EvolveState(evolveState);
        }
    }, sync);
} // EvolveStream

FireStarterStream::FireStarterStream(const FireStarterWindow& window, FireStarterState& bestState, size_t index) : SerialThread(Format("FireStarterStream%zu", index)), m_window(window), m_bestState(bestState)
{
    m_index = index;
} // FireStarterStream

FireStarterStream::~FireStarterStream(void)
{
} // ~FireStarterStream

bool FireStarterStreams::Synchronize(void)
{
    bool result = true;
    for (FireStarterStream* stream : m_streams)
        result &= stream->Synchronize();
    return result;
} // Synchronize

FireStarterStreams::FireStarterStreams(const FireStarterWindow& window, const FireStarterSettings& settings) : m_window(window), m_settings(settings), m_bestState(settings)
{
    // Initialize the states and streams.
    size_t tests = MAX(m_settings.m_tests, 1);
    m_states.resize(tests);
    for (size_t i = 0; i < tests; i++) {
        FireStarterSettings randomSettings(m_settings);
        randomSettings.m_seed = settings.m_seed + i;
        m_states[i].InitState(randomSettings);
    }

    m_streams.resize(m_settings.m_units, nullptr);
    for (size_t i = 0; i < m_settings.m_units; i++)
        m_streams[i] = new FireStarterStream(window, m_bestState, i);

    // Generate random programs and test each of them.
    for (size_t i = 0; i < m_settings.m_units; i++)
        m_streams[i]->RandomStream(m_states, m_testCount);

    // Wait for all the streams to finish the random pass.
    Synchronize();

    // Find the best random state.
    float minResult = m_states[0].m_maxResult;
    size_t minIndex = 0;
    for (FireStarterState& state : m_states) {
        if (state.m_maxResult < minResult) {
            minResult = state.m_maxResult;
            minIndex = state.m_index;
        }
    }
    m_bestState = m_states[minIndex];

    // Evolve the best streams.
    std::vector<FireStarterState> bestStates;
    bestStates.push_back(m_bestState);
    m_testCount = 0;
    for (size_t i = 0; i < m_settings.m_units; i++)
        m_streams[i]->EvolveStream(bestStates, m_testCount);

    // Wait for all the streams to finish the random pass.
    Synchronize();

    // Find the best evolved state.
    minResult = m_states[0].m_maxResult;
    minIndex = 0;
    for (FireStarterState& state : m_states) {
        if (state.m_maxResult < minResult) {
            minResult = state.m_maxResult;
            minIndex = state.m_index;
        }
    }
    m_bestState = m_states[minIndex];

    // Optimize the best state.
    FireStarterStream::Optimize(m_window, m_bestState);
} // FireStarterStreams

FireStarterStreams::~FireStarterStreams(void)
{
    // Terminate and delete each stream unit.
    for (FireStarterStream*& stream : m_streams) {
        delete stream;
        stream = nullptr;
    }
} // ~FireStarterStream