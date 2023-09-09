#include "FireStarter.h"
#include "FireStarter_LoadState.h"
#include "FireStarterEvolve.h"
#include "FireStarterExecute.h"
#include "FireStarterComplete.h"
#include "FireStarterStream.h"
#include "CUDAContext.h"
#include "CUDACompile.h"

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