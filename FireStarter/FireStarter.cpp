#include "FireStarter.h"
#include "FireStarter_LoadState.h"
#include "FireStarterUnit.h"
#include "FireStarterEvolve.h"
#include "FireStarterExecute.h"
#include "FireStarterComplete.h"
#include "CUDAContext.h"
#include "CUDACompile.h"

void FireStarter::ControlUnits(const FireStarterState* evolveState)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireStarterSettings settings;
    m_buildSettings.FireSettings(settings, FIRESTARTER_MODE);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(nullptr, settings, m_window, m_width, m_height);

    // Initialize the best state.
    FireStarterState bestState;
    if (evolveState) {
        FireStarterSettings optimizeSettings;
        m_buildSettings.FireSettings(optimizeSettings, FIRESTARTER_OPTIMIZE);
        settings.CopyModeSettings(optimizeSettings);
        bestState = *evolveState;
    } else if (settings.m_mode == FIRESTARTER_OPTIMIZE)
        // Load the best state from the previous Code or Unit run.
        LoadState(bestState);
    else
        bestState.InitState(settings);
    bestState.Settings().CopyModeSettings(settings);
    bestState.m_generation = 0;
    bestState.m_index = 0;
    bestState.InitResult();

    // Create the states and units.
    std::vector<FireStarterUnit*> units;
    std::vector<FireStarterState> allStates;
    bool result = true;
    for (unsigned int i = 0; i < settings.m_units; i++) {
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
                if (!state.m_generation || (state.MaxResult() < oldState.MaxResult()))
                    oldState = state;

                // Is there more work to do?
                if (state.m_generation - bestState.m_generation < settings.m_attempts)
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
    if (!WillTerminate() && (settings.m_mode != FIRESTARTER_OPTIMIZE) && FIRESTARTER_SECOND_PASS)
        ControlUnits(&bestState);
} // ControlUnits

void FireStarter::ControlTest(void)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireStarterSettings settings;
    m_buildSettings.FireSettings(settings, FIRESTARTER_TEST);

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager();

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager);

    // Create the execution unit.
    FireStarterExecute* execute = new FireStarterExecute(manager);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, settings, m_window, m_width, m_height);

    // Setup the intial state
    std::vector<FireStarterState> allStates;
    FireStarterState bestState(settings);
    allStates.push_back(bestState);

    // Loop until the the completion condition or the host program is quit.
    size_t generation = 0;
    while (!WillTerminate()) {
        // Evolve a new generation for the state.
        evolve->EvolveStates(bestState, allStates, generation);

        // Execute the state.
        execute->ExecuteEvolve();

        // Complete the state and display the results.
        if (!complete->CompleteStates(bestState, allStates, generation))
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
        ControlOptimize(&bestState);
} // ControlTest

void FireStarter::ControlRandom(void)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireStarterSettings settings;
    m_buildSettings.FireSettings(settings, FIRESTARTER_RANDOM);

    // if the evolve proceesses is set to zero, use the number of concurrent hardware threads.
#if FIRESTARTER_AUTO_PROCESS
    if (settings.m_processes == 0)
        settings.m_processes = std::thread::hardware_concurrency(); // Note: Returns logical core count not physical core count.
#endif

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager(max(settings.m_units, settings.m_processes));

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager, settings.m_processes);

    // Setup the intial best state 
    FireStarterState bestState(settings);
    bestState.RandomProgram();

    // Start generating random code generations.
    evolve->EvolveGenerations(&bestState, settings.m_attempts);

    // Create and run the execution units.
    FireStarterExecuteRandom* executeRandom = new FireStarterExecuteRandom(manager, settings.m_units);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, settings, m_window, m_width, m_height);

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
    FireStarterSettings settings;
    m_buildSettings.FireSettings(settings, FIRESTARTER_EVOLVE);

    // if the evolve proceesses is set to zero, use the number of concurrent hardware threads.
#if FIRESTARTER_AUTO_PROCESS
    if (settings.m_processes == 0)
        settings.m_processes = std::thread::hardware_concurrency(); // Note: Returns logical core count not physical core count.
#endif

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager(max(settings.m_units, settings.m_processes));

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager, settings.m_processes);

    // Create the states and units.
    std::vector<FireStarterEvolve*> evolveUnits;
    std::vector<FireStarterExecute*> executionUnits;
    for (unsigned int i = 0; i < settings.m_units; i++) {
        // Create an evolve unit.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager, i);
        evolveUnits.push_back(evolve);

        // Create an evolution generator unit.
        FireStarterExecute* execute = new FireStarterExecute(manager, i);
        executionUnits.push_back(execute);
    }

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, settings, m_window, m_width, m_height);

    for (unsigned int test = FIRESTARTER_TEST_START; (test < FIRESTARTER_TEST_START + FIRESTARTER_TEST_SEEDS) && !WillTerminate(); test++) {
        std::vector<FireStarterState> allStates;
        for (unsigned int i = 0; i < settings.m_units; i++) {
            // Randomize the entire program for the first generation
            FireStarterState state(settings, settings.m_units * test + i, test);
            allStates.push_back(state);
        }

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
} // ControlEvolve

void FireStarter::ControlOptimize(const FireStarterState* evolveState)
{

    // Convert the most recently evolved state into an optimize mode state.
    FireStarterState startState;
    FireStarterSettings& settings = startState.Settings();
    if (evolveState) {
        // Use the evolveState's settings as much as possible to maintain the random seed.
        startState = *evolveState; // Copy the best evolved state.
        settings.m_mode = FIRESTARTER_OPTIMIZE;
        settings.m_units = 1;
        settings.m_processes = 0;
    } else {
        // Load the settings from the compiled CUDA code.
        // This allows the settings to be modified without recompiling the main program.
        FireStarterSettings optimizeSettings;
        m_buildSettings.FireSettings(optimizeSettings, FIRESTARTER_OPTIMIZE);
        LoadState(startState);     // Load the best state from the previous Test, Random or Evolve run.
        startState.m_generation = 0;
        settings.CopyModeSettings(optimizeSettings);
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
    FireStarterComplete* complete = new FireStarterComplete(manager, settings, m_window, m_width, m_height);

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
        size_t index = startState.m_index + test;
        bestState.m_index = index;
        bestState.m_test = test;
        std::vector<FireStarterState> allStates;
        allStates.push_back(bestState);
        
        // Loop until the the completion condition or the host program is quit.
        size_t generation = startState.m_generation;
        bool init = true;
        while (!WillTerminate()) {
            // Optimize the current generation.
            execute->ExecuteOptimize(generation, index, test, init);

            // Update the results in the UI.
            if (!complete->CompleteStates(bestState, allStates, generation))
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

void FireStarter::ControlSolution(void)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireStarterSettings settings;
    m_buildSettings.FireSettings(settings, FIRESTARTER_OPTIMIZE);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(nullptr, settings, m_window, m_width, m_height);

    // Draw the solution in the window.
    complete->CompleteSolution();

    // Delete the completion unit.
    delete complete;
} // ControlSolution

void FireStarter::ControlThread(void)
{
    DispatchAsync([this] {
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

FireStarter::FireStarter(void* window, unsigned int width, unsigned int height)
{
    m_window = window;
    m_width = width;
    m_height = height;
    ControlThread();
} // FireStarter

FireStarter::~FireStarter(void)
{
    TerminateThread();
} // ~FireStarter