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
    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(nullptr, m_settings, m_window, m_width, m_height);

    // Initialize the best state.
    FireStarterState bestState;
    if (evolveState) {
        FireStarterSettings optimizeSettings;
        m_buildSettings.FireSettings(optimizeSettings, FIRESTARTER_OPTIMIZE);
        m_settings.CopyModeSettings(optimizeSettings);
        bestState = *evolveState;
    } else if (m_settings.m_mode == FIRESTARTER_OPTIMIZE)
        // Load the best state from the previous Code or Unit run.
        LoadState(bestState);
    else
        bestState.InitState(m_settings);
    bestState.Settings().CopyModeSettings(m_settings);
    bestState.m_generation = 0;
    bestState.m_index = 0;
    bestState.InitResult();

    // Create the states and units.
    std::vector<FireStarterUnit*> units;
    std::vector<FireStarterState> allStates;
    bool result = true;
    for (unsigned int i = 0; i < m_settings.m_units; i++) {
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
        while (!m_quitControlThread) {
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
                if (state.m_generation - bestState.m_generation < m_settings.m_attempts)
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
    if (!m_quitControlThread && (m_settings.m_mode != FIRESTARTER_OPTIMIZE) && FIRESTARTER_SECOND_PASS)
        ControlUnits(&bestState);
} // ControlUnits

void FireStarter::ControlTest(void)
{
    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager(max(m_settings.m_units, m_settings.m_processes));

    // Setup the intial state
    std::vector<FireStarterState> allStates;
    FireStarterState bestState(m_settings);
    allStates.push_back(bestState);

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager, m_settings.m_processes);

    // Create the execution unit.
    FireStarterExecute* execute = new FireStarterExecute(manager, 0);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, m_settings, m_window, m_width, m_height);

    // Loop until the the completion condition or the host program is quit.
    unsigned int generation = 0;
    while (!m_quitControlThread) {
        evolve->EvolveStates(bestState, allStates, generation);
        execute->ExecuteEvolve();
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
} // ControlTest

void FireStarter::ControlRandom(void)
{
    // if the evolve proceesses is set to zero, use the number of concurrent hardware threads.
#if FIRESTARTER_AUTO_PROCESS
    if (m_settings.m_processes == 0)
        m_settings.m_processes = std::thread::hardware_concurrency(); // Note: Returns logical core count not physical core count.
#endif

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager(max(m_settings.m_units, m_settings.m_processes));

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager, m_settings.m_processes);

    // Setup the intial best state 
    FireStarterState bestState(m_settings);
    bestState.RandomProgram();

    // Start generating random code generations.
    evolve->EvolveGenerations(&bestState, m_settings.m_attempts);

    // Create and run the execution units.
    FireStarterExecuteRandom* executeRandom = new FireStarterExecuteRandom(manager, m_settings.m_units);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, m_settings, m_window, m_width, m_height);

    // Loop until the the completion condition or the host program is quit.
    while (!m_quitControlThread) {
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
} // ControlRandom

void FireStarter::ControlEvolve(void)
{
    // if the evolve proceesses is set to zero, use the number of concurrent hardware threads.
#if FIRESTARTER_AUTO_PROCESS
    if (m_settings.m_processes == 0)
        m_settings.m_processes = std::thread::hardware_concurrency(); // Note: Returns logical core count not physical core count.
#endif

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager(max(m_settings.m_units, m_settings.m_processes));

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager, m_settings.m_processes);

    // Setup the intial best state
    FireStarterState bestState(m_settings);
    bestState.RandomProgram();

    // Create the states and units.
    std::vector<FireStarterEvolve*> evolveUnits;
    std::vector<FireStarterExecute*> executionUnits;
    std::vector<FireStarterState> allStates;
    for (unsigned int i = 0; i < m_settings.m_units; i++) {
        // Randomize the entire program for the first generation
        FireStarterState state(m_settings, i);
        state.RandomProgram();
        allStates.push_back(state);

        // Create an evolve unit.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager, i);
        evolveUnits.push_back(evolve);

        // Create an evolution generator unit.
        FireStarterExecute* execute = new FireStarterExecute(manager, i);
        executionUnits.push_back(execute);
    }

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, m_settings, m_window, m_width, m_height);

    // Loop until the the completion condition or the host program is quit.
    unsigned int generation = 0;
    while (!m_quitControlThread) {
        // Evolve a new generation for each state.
        for (unsigned int i = 0; i < m_settings.m_units; i++)
            evolveUnits[i]->EvolveStates(bestState, allStates, generation);

        // Execute each state.
        for (FireStarterExecute* execute : executionUnits)
            execute->ExecuteEvolve();

        // Complete each state and display the results.
        if (!complete->CompleteStates(bestState, allStates, generation))
            break;
        generation++;
    }

    // Cancel any waiting jobs
    manager->Cancel();

    // Delete the completion unit.
    delete complete;

    // Finish processing and terminate each unit.
    for (FireStarterExecute* execute : executionUnits)
        delete execute;
    executionUnits.clear();

    // Delete the evolution code generator.
    for (FireStarterEvolve* evolve : evolveUnits)
        delete evolve;
    evolveUnits.clear();

    // Delete the multi-process compiler.
    delete compile;

    // Delete the compilier manager and cancel any waiting jobs.
    delete manager;

    // Clear the states.
    allStates.clear();

    // Optimization evolution pass.
    if (!m_quitControlThread && (m_settings.m_mode == FIRESTARTER_EVOLVE) && FIRESTARTER_SECOND_PASS)
        ControlOptimize(&bestState);
} // ControlEvolve

void FireStarter::ControlOptimize(const FireStarterState *evolveState)
{
    for (unsigned int test = 0; test < FIRESTARTER_TEST_SEEDS; test++) {
        // Convert the most recently evolved state into an optimize mode state.
        FireStarterState bestState;
        if (evolveState) {
            // Switch the settings to optimize mode
            FireStarterSettings optimizeSettings;
            m_buildSettings.FireSettings(optimizeSettings, FIRESTARTER_OPTIMIZE);
            m_settings.CopyModeSettings(optimizeSettings);

            // Copy the best evolved state.
            bestState = *evolveState;
        } else
            // Load the best state from the previous Test, Random or Evolve run.
            LoadState(bestState);
        bestState.Settings().CopyModeSettings(m_settings);
        bestState.m_generation = 0;
        bestState.m_index = test;
        bestState.InitResult();

        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager(1);

        // Create the multi-process compiler.
        FireStarterCompile* compile = new FireStarterCompile(manager, m_settings.m_processes);

        // Create the evolution code generator.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager);

        // Create the execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager, 0);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_settings, m_window, m_width, m_height);

        // Create the state and execution unit.
        std::vector<FireStarterState> allStates;
        allStates.push_back(bestState);

        // Generate the optimize code.
        evolve->GenerateOptimize(bestState);

        // Compile the optimize code.
        execute->ExecuteCompile();

        // Loop until the the completion condition or the host program is quit.
        unsigned int generation = 0;
        while (!m_quitControlThread) {
            // Optimize the current generation.
            execute->ExecuteOptimize(generation);

            // Update the results in the UI.
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

        // Delete the evolution code generator.
        delete evolve;

        // Delete the multi-process compiler.
        delete compile;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }
} // ControlOptimize

void FireStarter::ControlSolution(void)
{
    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(nullptr, m_settings, m_window, m_width, m_height);

    // Draw the solution in the window.
    complete->CompleteSolution();

    // Delete the completion unit.
    delete complete;
} // ControlSolution

void FireStarter::ControlThread(void)
{
    DispatchAsync([this] {
        // Load the settings from the compiled CUDA code.
        // This allows the settings to be modified without recompiling the main program.
        m_buildSettings.FireSettings(m_settings, FIRESTARTER_MODE);

        // If the evolve units is set to zero, use the number of gpus.
        if (m_settings.m_units == 0)
            m_settings.m_units = CUDAContext::CUDADevices();

        switch (m_settings.m_mode) {
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
    m_quitControlThread = true;
} // ~FireStarter