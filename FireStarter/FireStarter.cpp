#include "FireStarter.h"
#include "FireStarter_LoadState.h"
#include "FireStarterUnit.h"
#include "FireStarterEvolve.h"
#include "FireStarterExecute.h"
#include "FireStarterComplete.h"
#include "FireStarterStream.h"
#include "CUDAContext.h"
#include "CUDACompile.h"

void FireStarter::ControlUnits(const FireStarterState* evolveState)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireStarterSettings unitSettings, optimizeSettings;
    m_buildSettings.FireSettings(unitSettings, FIRESTARTER_MODE);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(nullptr, &m_window, unitSettings);

    // Initialize the best state.
    FireStarterState bestState;
    if (evolveState) {
        FireStarterSettings optimizeSettings;
        m_buildSettings.FireSettings(optimizeSettings, FIRESTARTER_OPTIMIZE);
        unitSettings.CopyModeSettings(optimizeSettings);
        bestState = *evolveState;
    } else if (unitSettings.m_mode == FIRESTARTER_OPTIMIZE)
        // Load the best state from the previous Code or Unit run.
        LoadState(bestState);
    else
        bestState.InitState(unitSettings);
    bestState.Settings().CopyModeSettings(unitSettings);
    bestState.m_generation = 0;
    bestState.m_index = 0;
    bestState.InitResult();

    // Create the states and units.
    std::vector<FireStarterUnit*> units;
    std::vector<FireStarterState> allStates;
    bool result = true;
    for (unsigned int i = 0; i < unitSettings.m_units; i++) {
        FireStarterUnit* unit = new FireStarterUnit(i, CUDAContext::CUDADevices());
        if (unit->InitUnit(bestState)) {
            allStates.push_back(bestState);
            units.push_back(unit);
        } else {
            delete unit;
            result = false;
            break;
        }
    }

    if (result) {
        // Loop until the the completion condition or the host program is quit.
        while (!WillTerminate()) {
            // Execute a generation for all the units.
            for (FireStarterUnit* unit : units)
                unit->Execute();

            // Update the states for all the units.
            bool allFinished = true;
            for (FireStarterUnit* unit : units) {
                // Update the best state and display the results.
                FireStarterState state;
                unit->GetState(state);
                complete->CompleteResults(bestState, state);

                // Save the state in the array of all states.
                FireStarterState& oldState = allStates[state.m_index];
                if (!state.m_generation || (state.m_maxResult < oldState.m_maxResult))
                    oldState = state;

                // Is there more work to do?
                if (state.m_generation - bestState.m_generation < unitSettings.m_attempts)
                    allFinished = false;
            }

            // Send all the states back to all the units.
            for (FireStarterUnit* unit : units)
                unit->Sync(allStates.data());

            // Has the completion condition been met?
            if (allFinished)
                break;
        }
    }

    // Finish processing and terminate each unit.
    for (FireStarterUnit* unit : units)
        delete unit;
    units.clear();

    // Delete the completion unit.
    delete complete;

    // Clear the states.
    allStates.clear();

    // Optimization evolution pass.
    if (!WillTerminate() && (unitSettings.m_mode != FIRESTARTER_OPTIMIZE) && FIRESTARTER_SECOND_PASS)
        ControlUnits(&bestState);
} // ControlUnits

void FireStarter::ControlOptimize(const FireStarterState* evolveState)
{
    // Convert the most recently evolved state into an optimize mode state.
    FireStarterState startState;
    FireStarterSettings& settings = startState.Settings();
    if (evolveState)
        // Use the evolveState's settings as much as possible to maintain the random seed.
        startState = *evolveState;
    else
        // Load the best state from the previous Test, Random or Evolve run.
        LoadState(startState);     
    settings.m_mode = m_optimizeSettings.m_mode;
    settings.m_units = m_optimizeSettings.m_units;
    settings.m_processes = m_optimizeSettings.m_processes;
    settings.m_attempts = m_optimizeSettings.m_attempts;

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
    FireStarterComplete* complete = new FireStarterComplete(manager, &m_window, settings);

    // Generate the optimize code.
    evolve->GenerateOptimize(startState);

    // Compile the optimize code.
    execute->ExecuteCompile();

    // Test one more more random seeds.
    size_t firstTest = evolveState ? startState.m_test : FIRESTARTER_TEST_START;
    size_t lastTest = evolveState ? startState.m_test : FIRESTARTER_TEST_START + FIRESTARTER_TEST_SEEDS - 1;
    for (size_t test = firstTest; (test <= lastTest) && !WillTerminate(); test++) {
        // Create the state and execution unit.
        FireStarterState optimizeState(startState);
        optimizeState.m_index = evolveState ? startState.m_index : startState.m_index + test;
        optimizeState.m_test = test;
        
        // Loop until the the completion condition or the host program is quit.
        size_t generation = startState.m_generation;
        bool init = true;
        while (!WillTerminate()) {
            // Optimize the current generation.
            execute->ExecuteOptimize(generation, optimizeState.m_index, test, init);

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
} // ControlOptimize

void FireStarter::ControlTest(void)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireStarterSettings testSettings;
    m_buildSettings.FireSettings(testSettings, FIRESTARTER_TEST);

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager();

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile();

    // Create the execution unit.
    FireStarterExecute* execute = new FireStarterExecute(manager);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, &m_window, testSettings);

    // Setup the intial state
    FireStarterState testState(testSettings);

    // Loop until the the completion condition or the host program is quit.
    size_t generation = 0;
    while (!WillTerminate()) {
        // Evolve a new generation for the state.
        evolve->EvolveState(testState, generation, true);

        // Compile the evolved program.
        compile->CompileJob(manager, true);

        // Execute the state.
        execute->ExecuteEvolve(true);

        // Complete the state and display the results.
        if (!complete->CompleteState(testState, generation))
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
        ControlOptimize(&testState); 
} // ControlTest

void FireStarter::ControlRandom(void)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireStarterSettings randomSettings;
    m_buildSettings.FireSettings(randomSettings, FIRESTARTER_RANDOM);

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager(max(randomSettings.m_units, randomSettings.m_processes));

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager, randomSettings.m_processes);

    // Setup the intial best state 
    FireStarterState bestState(randomSettings);
    bestState.RandomProgram();

    // Start generating random code generations.
    evolve->EvolveGenerations(&bestState, randomSettings.m_attempts);

    // Create and run the execution units.
    FireStarterExecuteRandom* executeRandom = new FireStarterExecuteRandom(manager, randomSettings.m_units);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, &m_window, randomSettings);

    // Loop until the the completion condition or the host program is quit.
    while (!WillTerminate()) {
        if (!complete->CompleteRandom(bestState))
            break;
    }

    // Cancel any waiting jobs
    manager->Cancel();

    // Delete the completion unit.
    delete complete;

    // Finish processing and terminate each unit.
    delete executeRandom;

    // Delete the evolution code generator.
    delete evolve;

    // Delete the multi-process compiler.
    delete compile;

    // Delete the compilier manager and cancel any waiting jobs.
    delete manager;

    // Optimization evolution pass.
    if (!WillTerminate() && FIRESTARTER_SECOND_PASS)
        ControlOptimize(&bestState);
} // ControlRandom

void FireStarter::ControlEvolve(void)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireStarterSettings evolveSettings;
    m_buildSettings.FireSettings(evolveSettings, FIRESTARTER_EVOLVE);

#if 1
    // Allocate and start each stream unit.
    std::vector<FireStarterStream*> streamUnits;
    for (size_t i = 0; i < evolveSettings.m_units; i++) {
        FireStarterStream* streamUnit = new FireStarterStream(&m_window, evolveSettings, m_optimizeSettings, i);
        streamUnits.push_back(streamUnit);
    }

    // Loop until the the completion condition or the host program is quit.
    while (!WillTerminate()) {
        bool finished = true;
        for (FireStarterStream* streamUnit : streamUnits)
            if (!streamUnit->Finished()) {
                finished = false;
                break;
            }
        if (finished)
            break;
        SleepFor(0.1);
    }

    // Terminate and delete each stream unit.
    for (FireStarterStream* streamUnit : streamUnits)
        delete streamUnit;
#else
    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager(max(evolveSettings.m_units, evolveSettings.m_processes));

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager, evolveSettings.m_processes);

    // Create the states and units.
    std::vector<FireStarterEvolve*> evolveUnits;
    std::vector<FireStarterExecute*> executionUnits;
    std::vector<FireStarterState> allStates(evolveSettings.m_units);
    for (unsigned int i = 0; i < evolveSettings.m_units; i++) {
        // Create an evolve unit.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager, i);
        evolveUnits.push_back(evolve);

        // Create an evolution generator unit.
        FireStarterExecute* execute = new FireStarterExecute(manager, i);
        executionUnits.push_back(execute);
    }

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, &m_window, evolveSettings, allStates);

    for (unsigned int test = FIRESTARTER_TEST_START; (test < FIRESTARTER_TEST_START + FIRESTARTER_TEST_SEEDS) && !WillTerminate(); test++) {
        // Randomize the entire program of each state for the first generation
        for (unsigned int i = 0; i < evolveSettings.m_units; i++)
            allStates[i].InitState(evolveSettings, evolveSettings.m_units * test + i, test);

        // Setup the intial best state
        FireStarterState bestState(allStates[0]);

        // Loop until the the completion condition or the host program is quit.
        unsigned int generation = 0;
        while (!WillTerminate()) {
            // Evolve a new generation for each state.
            for (FireStarterEvolve* evolve : evolveUnits)
                evolve->EvolveStates(bestState, allStates, generation);

            // Execute each state.
            for (FireStarterExecute* execute : executionUnits)
                execute->ExecuteEvolve();

            // Complete each state and display the results.
            if (!complete->CompleteStates(bestState, allStates, generation))
                break;
            generation++;
        }

        // Optimization evolution pass.
        if (!WillTerminate() && FIRESTARTER_SECOND_PASS)
            ControlOptimize(&bestState);
    }

    // Cancel any waiting jobs
    manager->Cancel();

    // Delete the completion unit.
    delete complete;

    // Finish processing and terminate each unit.
    for (FireStarterExecute* execute : executionUnits)
        delete execute;

    // Delete the evolution code generator.
    for (FireStarterEvolve* evolve : evolveUnits)
        delete evolve;

    // Delete the multi-process compiler.
    delete compile;

    // Delete the compilier manager and cancel any waiting jobs.
    delete manager;
#endif
} // ControlEvolve

void FireStarter::ControlSolution(void)
{
    // The solution settings are all zeros. Only the mode is used.
    FireStarterSettings settings(FIRESTARTER_SOLUTION);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(nullptr, &m_window, settings);

    // Draw the solution in the window.
    complete->CompleteSolution();

    // Delete the completion unit.
    delete complete;
} // ControlSolution

void FireStarter::ControlThread(void)
{
    DispatchAsync([this] {
        // Load the optimize settings from the compiled CUDA code.
        // This allows the settings to be modified without recompiling the main program.
        m_buildSettings.FireSettings(m_optimizeSettings, FIRESTARTER_OPTIMIZE);
        switch (FIRESTARTER_MODE) {
            case FIRESTARTER_CODE:
            case FIRESTARTER_UNIT:
                // Program evolution pass.
                ControlUnits();
                break;
            case FIRESTARTER_TEST:
                // Test of jobs without processes.
                ControlTest();
                break;
            case FIRESTARTER_RANDOM:
                // Random generations.
                ControlRandom();
                break;
            case FIRESTARTER_EVOLVE:
                // Evolved generations.
                ControlEvolve();
                break;
            case FIRESTARTER_OPTIMIZE:
                // Optimization evolution pass.
                ControlOptimize();
                break;
            case FIRESTARTER_SOLUTION:
                // Run the most recent solution.
                ControlSolution();
                break;
        }
    });
} // ControlThread

FireStarter::FireStarter(void* window, unsigned int width, unsigned int height) : m_window(window, width, height)
{
    ControlThread();
} // FireStarter

FireStarter::~FireStarter(void)
{
    TerminateThread();
} // ~FireStarter