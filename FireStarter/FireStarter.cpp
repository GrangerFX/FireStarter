#include "FireStarter.h"
#include "FireStarter_LoadState.h"
#include "FireStarterEvolve.h"
#include "FireStarterExecute.h"
#include "FireStarterComplete.h"
#include "FireStarterStream.h"
#include "CUDAContext.h"
#include "CUDACompile.h"

void FireStarter::ControlRandom(const FireStarterSettings& randomSettings)
{
    FireStarterStreams streams(m_window, m_server, randomSettings);
    streams.RandomStreams();
} // ControlRandom

void FireStarter::ControlEvolve(const FireStarterSettings& evolveSettings)
{
    FireStarterStreams streams(m_window, m_server, evolveSettings);
    streams.EvolveStreams();
} // ControlEvolve

void FireStarter::ControlOptimize(const FireStarterSettings& optimizeSettings)
{
    FireStarterState optimizeState;
    LoadState(optimizeState);
    optimizeState.Settings().CopyModeSettings(optimizeSettings);
    optimizeState.m_optimizePass = true;
    FireStarterStream::Optimize(m_window, optimizeState, optimizeSettings);
} // ControlOptimize

void FireStarter::ControlSolution(void)
{
    // Draw the solution in the window.
    FireStarterShow::FireSolution(m_window);
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
                ControlRandom(controlSettings);
                break;
            case FIRESTARTER_EVOLVE:
                // Evolve generations.
                ControlEvolve(controlSettings);
                break;
            case FIRESTARTER_OPTIMIZE:
                ControlOptimize(controlSettings);
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
#if FIRESTARTER_MULTIPROCESS
    m_server = new FireStarterServer();
#endif
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