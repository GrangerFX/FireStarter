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
        size_t generation = startState.m_generation;
        bool init = true;
        while (!WillTerminate()) {
            // Optimize the current generation.
            execute->ExecuteOptimize(optimizeState, init);

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
    FireStarterComplete* complete = new FireStarterComplete(manager, m_window);

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
    FireStarterComplete* complete = new FireStarterComplete(manager, m_window);

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

void FireStarterStream::RandomStream(std::vector<FireStarterState>& states, std::atomic<unsigned long long>& testCount, bool sync)
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

        // Loop until the the completion condition or the host program is quit.
        for (unsigned long long test = testCount++; (test < states.size()) && !WillTerminate(); test = testCount++) {
            FireStarterState& evolveState = states[test];

            // Evolve a new generation for the state.
            evolve->EvolveState(evolveState, 0, true);

            // Compile the evolved program.
            compile->CompileJob(manager, true);

            // Execute the state.
            execute->ExecuteEvolve(true);

            // Complete the state and display the results.
            complete->CompleteState(m_bestState, evolveState);
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
            FireStarterState bestState(evolveState);    // The best state generation is used for the status display and termination condition.
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
                if (!complete->CompleteState(bestState, evolveState))
                    break;
                evolveState.m_generation++;
                init = false;
            }
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

FireStarterStream::FireStarterStream(const FireStarterWindow& window, FireStarterState& bestState, size_t index) : SerialThread(Format("FireStarterStream%zu", index)), m_window(window), m_bestState(bestState)
{
    m_index = index;
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

FireStarterStreams::FireStarterStreams(const FireStarterWindow& window, const FireStarterSettings& settings)
{
    std::atomic<unsigned long long> m_testCount = 0;

    // Initialize the states and streams.
    FireStarterState bestState(settings);
    size_t tests = MAX(settings.m_tests, 1);
    std::vector<FireStarterState> states(tests);
    for (size_t test = 0; test < tests; test++) {
        FireStarterSettings randomSettings(settings);
        randomSettings.m_seed = settings.m_seed + test;
        states[test].InitState(randomSettings, 0, 0, test);
    }

    // Generate random programs and test each of them.
    std::vector<FireStarterStream*> streams;
    streams.resize(settings.m_units, nullptr);
    for (size_t unit = 0; unit < settings.m_units; unit++) {
        streams[unit] = new FireStarterStream(window, bestState, unit);
        streams[unit]->RandomStream(states, m_testCount);
    }

    // Wait for all the streams to finish the random pass.
    SynchronizeStreams(streams);

    // Find the best random states.
    std::vector<FireStarterState*> bestStates;
    float minResult = settings.m_startResult;
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
    for (size_t unit = 0; unit < settings.m_units; unit++)
        streams[unit]->EvolveStream(bestStates, m_testCount);

    // Wait for all the streams to finish the random pass.
    SynchronizeStreams(streams);

    // Find the best evolved state.
    minResult = bestStates[0]->m_maxResult;
    size_t minIndex = 0;
    for (size_t i = 0; i < bestStates.size(); i++) {
        FireStarterState* state = bestStates[i];
        if (state->m_maxResult < minResult) {
            minResult = state->m_maxResult;
            minIndex = i;
        }
    }
    bestState = *bestStates[minIndex];

    // Terminate and delete each stream unit.
    for (FireStarterStream*& stream : streams) {
        delete stream;
        stream = nullptr;
    }
} // FireStarterStreams

FireStarterStreams::~FireStarterStreams(void)
{
} // ~FireStarterStream