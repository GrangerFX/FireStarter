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
            unsigned long long seed = SEED1(settingsSeed) + SEED2(settingsGeneration) + SEED3(settingsTest);
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

static void TestParallelFor(void)
{
    SimpleTimer timer(true);
    const size_t memorySize = 4llu * 1024llu * 1024llu * 1024llu; // 4 GB
    unsigned char* memory1 = (unsigned char*)calloc(1, memorySize);
    unsigned char* memory2 = (unsigned char*)calloc(1, memorySize);
    printf("Calloc: %lf\n", timer.Start()); // 0.815099

    memcpy(memory2, memory1, memorySize);
    printf("memcpy 0: %lf\n", timer.Start()); // 0.135675

    parallel_for(0, memorySize, [memory1, memory2](size_t start, size_t end) {
        memcpy(memory2 + start, memory1 + start, end - start);
    }, false);
    printf("memcpy 1: %lf\n", timer.Start()); // 0.140983

    parallel_for(0, memorySize, [memory1, memory2](size_t start, size_t end) {
        memcpy(memory1 + start, memory2 + start, end - start);
    }, true);
    printf("memcpy 2: %lf\n", timer.Start()); // 0.149266

    free(memory1);
    free(memory2);
} // TestParalleFor

FireStarter::FireStarter(const FireStarterWindow& window) : SerialThread("FireStarter"), m_window(window)
{
#if 0
    TestRandom();
#endif

#if 0
    TestParallelFor();
#endif

#if 1
#if FIRESTARTER_MULTIPROCESS
    m_server = new FireStarterServer();
#endif
    ControlThread();
#endif
} // FireStarter

FireStarter::~FireStarter(void)
{
    QuitThreads();
    Synchronize();
    delete m_server;
} // ~FireStarter