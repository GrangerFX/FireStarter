#include "FireStarter.h"
#include "FireStarter_LoadState.h"
#include "FireStarterUnit.h"
#include "FireStarterEvolve.h"
#include "FireStarterExecute.h"
#include "FireStarterComplete.h"
#include "FireStarterStream.h"
#include "CUDAContext.h"
#include "CUDACompile.h"

void FireStarter::ControlUnits(const FireStarterState* evolveState, bool optimizePass)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireStarterSettings unitSettings, optimizeSettings;
    m_buildSettings.FireSettings(unitSettings, FIRESTARTER_MODE);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(nullptr, m_window);

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
    bestState.m_optimizePass = optimizePass;
    bestState.m_generation = 0;
    bestState.m_index = 0;
    bestState.InitGenerationSeed();
    bestState.InitResults();

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
                complete->CompleteUnit(bestState, state);

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
} // ControlUnits

void FireStarter::ControlTest(void)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireStarterSettings testSettings;
    m_buildSettings.FireSettings(testSettings, FIRESTARTER_TEST);

    // Evolve a single state.
    FireStarterState evolveState(testSettings);
    FireStarterStream::Randomize(m_window, testSettings);
} // ControlTest

void FireStarter::ControlRandom(void)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireStarterSettings randomSettings;
    m_buildSettings.FireSettings(randomSettings, FIRESTARTER_RANDOM);
    FireStarterStreams streams(m_window, m_server, randomSettings);
    streams.RandomStreams();
} // ControlRandom

void FireStarter::ControlEvolve(void)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireStarterSettings evolveSettings;
    m_buildSettings.FireSettings(evolveSettings, FIRESTARTER_EVOLVE);
    FireStarterStreams streams(m_window, m_server, evolveSettings);
    streams.EvolveStreams();
} // ControlEvolve

void FireStarter::ControlSolution(void)
{
    // The solution settings are all zeros. Only the mode is used.
    FireStarterSettings settings(FIRESTARTER_SOLUTION);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(nullptr, m_window);

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
        FireStarterSettings controlSettings;
        m_buildSettings.FireSettings(controlSettings, FIRESTARTER_AUTO);
        switch (controlSettings.m_mode) {
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
                // Evolve generations.
                ControlEvolve();
                break;
            case FIRESTARTER_OPTIMIZE:
                {
                    // Optimization evolution pass.
                    FireStarterState evolveState;
                    LoadState(evolveState);
                    evolveState.Settings().CopyModeSettings(controlSettings);
                    evolveState.m_program.m_settings.m_mode = FIRESTARTER_OPTIMIZE; // This allows optimize tests to be run.
                    evolveState.m_optimizePass = true;
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

static void TestRandom(void)
{
    for (unsigned long long settingsSeed = 0; settingsSeed < 100; settingsSeed++) {
        unsigned long long settingsGeneration = 0;
        unsigned long long settingsTest = 0;
        unsigned long long randomBucket[32] = {};
        unsigned long long total = 0;
        while (settingsGeneration < 100) {
            unsigned long long seed = RANDOM(RANDOM(RANDOM(settingsSeed) + settingsGeneration) + settingsTest);
            for (unsigned long long iteration = 0; iteration < 100000; iteration++) {
                unsigned int i = RANDOMMOD(seed, 32);
                randomBucket[i]++;
                total++;
            }
            settingsGeneration++;
        }
        double maxq = 0.0f;
        for (int i = 0; i < 32; i++) {
            double q = fabs(1.0 - (double)randomBucket[i] * (32.0 / (double)total));
            maxq = max(maxq, q);
        }
        printf("seed: %llu  maxq = %f\n", settingsSeed, maxq);
    }
} // TestRandom

FireStarter::FireStarter(const FireStarterWindow& window) : SerialThread("FireStarter"), m_window(window)
{
    m_server = new FireStarterServer();
#if 0
    TestRandom();
#else
    ControlThread();
#endif
} // FireStarter

FireStarter::~FireStarter(void)
{
    QuitThreads();
    Synchronize();
    delete m_server;
} // ~FireStarter