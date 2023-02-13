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
    FireStarterComplete* complete = new FireStarterComplete(nullptr, m_window, unitSettings);

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
    bestState.InitStateSeed();
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

void FireStarter::ControlTest(void)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireStarterSettings testSettings;
    m_buildSettings.FireSettings(testSettings, FIRESTARTER_TEST);

    // Evolve a single state.
    FireStarterStream::Evolve(m_window, testSettings);
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
    evolve->EvolveSeeds(randomSettings);

    // Create and run the execution units.
    FireStarterExecuteRandom* executeRandom = new FireStarterExecuteRandom(manager, randomSettings.m_units);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(manager, m_window, randomSettings);

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
        FireStarterStream::Optimize(m_window, bestState);
} // ControlRandom

void FireStarter::ControlRevolve(void)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireStarterSettings evolveSettings;
    m_buildSettings.FireSettings(evolveSettings, FIRESTARTER_REVOLVE);
    FireStarterState bestState(evolveSettings);

    // Allocate and start each stream unit.
    std::vector<FireStarterStream*> streamUnits;
    for (size_t i = 0; i < evolveSettings.m_units; i++) {
        FireStarterStream* streamUnit = new FireStarterStream(bestState);
        streamUnit->EvolveStream(m_window, evolveSettings, i);
        streamUnits.push_back(streamUnit);
    }

    // Loop until the the completion condition or the host program is quit.
    while (!WillTerminate()) {
        bool finished = true;
        for (FireStarterStream* streamUnit : streamUnits)
            if (!streamUnit->Done()) {
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

    // Optimization evolution pass.
    if (!WillTerminate() && (evolveSettings.m_units > 1) && FIRESTARTER_SECOND_PASS)
        FireStarterStream::Optimize(m_window, bestState);
} // ControlRevolve

void FireStarter::ControlEvolve(void)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireStarterSettings evolveSettings;
    m_buildSettings.FireSettings(evolveSettings, FIRESTARTER_EVOLVE);
    FireStarterState bestState(evolveSettings);

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
    FireStarterComplete* complete = new FireStarterComplete(manager, m_window, evolveSettings);

    size_t firstTest = 0;
    size_t lastTest = 0;
    if (evolveSettings.m_tests) {
        firstTest = 1;
        lastTest = evolveSettings.m_tests;
    }
    for (size_t test = firstTest; (test <= lastTest) && !WillTerminate(); test++) {
        // Randomize the entire program of each state for the first generation
        for (unsigned int i = 0; i < evolveSettings.m_units; i++)
            allStates[i].InitState(evolveSettings, 0, i, test);

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
            FireStarterStream::Optimize(m_window, bestState);
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

void FireStarter::ControlSolution(void)
{
    // The solution settings are all zeros. Only the mode is used.
    FireStarterSettings settings(FIRESTARTER_SOLUTION);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(nullptr, m_window, settings);

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
            case FIRESTARTER_REVOLVE:
                // Evolved generations.
                ControlRevolve();
                break;
            case FIRESTARTER_EVOLVE:
                // Evolved generations.
                ControlEvolve();
                break;
            case FIRESTARTER_OPTIMIZE:
                {
                    // Optimization evolution pass.
                    FireStarterState evolveState;
                    LoadState(evolveState);
                    evolveState.Settings().CopyModeSettings(m_optimizeSettings);
                    FireStarterStream::Optimize(m_window, evolveState);
                }
                break;
            case FIRESTARTER_SOLUTION:
                // Run the most recent solution.
                ControlSolution();
                break;
        }
    });
} // ControlThread

FireStarter::FireStarter(const FireStarterWindow& window) : SerialThread("FireStarter"), m_window(window)
{
    ControlThread();
} // FireStarter

FireStarter::~FireStarter(void)
{
    QuitThreads();
} // ~FireStarter