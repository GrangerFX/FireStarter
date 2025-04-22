#include "FireStarter.h"
#include "FireStarterShow.h"
#include "FireStarterStream.h"

#if 0
// Reference for PI at various precisions.
namespace Constants {
    constexpr long double PIld = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899L; // 80 digits of precision but long double is only 80 bits.
    constexpr double PId = 3.1415926535897932;
    constexpr float PIf = 3.14159265f;
} // Constants
#endif

void FireStarter::ControlSolution(void)
{
    // Draw the solution in the window.
    FireStarterShow::FireSolution(m_window);
} // ControlSolution

void FireStarter::ControlStreams(void)
{
    FireStarterStreams streams(m_window);
    streams.ExecuteStreams();
} // ControlStreams

void FireStarter::ControlThread(void)
{
    DispatchAsync([this] {
        if (FIRESTARTER_MODE == FIRESTARTER_SOLUTION)
            // Run the most recent solution on the CPU.
            ControlSolution();
        else
            // Evolve and optimize a new solution.
            ControlStreams();
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
            maxq = MAX(maxq, q);
        }
        printf("seed: %llu  maxq = %f\n", settingsSeed, maxq);
    }
} // TestRandom

static void TestParallelFor(void)
{
    SimpleTimer timer;
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

static void TestCUDABug(void)
{
    /*
    Member:  436  Register:  0  Age: 2  Value: -1.610842
    Member:  436  Register:  1  Age: 2  Value: -0.940965
    Member:  436  Register:  2  Age: 2  Value: 0.974175
    Member:  436  Register:  3  Age: 2  Value: -0.369377
    Member:  436  Register:  4  Age: 2  Value: 1.223096
    Member:  436  Register:  5  Age: 2  Value: -0.096494
    Member:  436  Register:  6  Age: 2  Value: 1.500119
    Member:  436  Register:  7  Age: 2  Value: 0.939494
    Member:  436  Register:  8  Age: 2  Value: -0.881798
    Member:  436  Register:  9  Age: 2  Value: -1.923255
    Member:  436  Register: 10  Age: 2  Value: 0.258291
    Member:  436  Register: 11  Age: 2  Value: -0.332316
    Member:  436  Register: 12  Age: 2  Value: -1.563396
    Member:  436  Register: 13  Age: 2  Value: -1.381907
    Member:  436  Register: 14  Age: 2  Value: -0.499686
    Member:  436  Register: 15  Age: 2  Value: 0.930477
    Member:  436  Register: 16  Age: 2  Value: 1.965427
    Member:  436  Register: 17  Age: 2  Value: 0.928942
    Member:  436  Register: 18  Age: 2  Value: -0.300439
    Member:  436  Register: 19  Age: 2  Value: -1.297753
    */

    float data[30] = {
        -1.610842f,
         -0.940965f,
         0.974175f,
         -0.369377f,
         1.223096f,
         -0.096494f,
         1.500119f,
         0.939494f,
         -0.881798f,
         -1.923255f,
         0.258291f,
         -0.332316f,
         -1.563396f,
         -1.381907f,
         -0.499686f,
         0.930477f,
         1.965427f,
         0.928942f,
         -0.300439f,
         -1.297753f,
         0.0f,
         0.0f,
         0.0f,
         0.0f,
         0.0f,
         0.0f,
         0.0f,
         0.0f,
         0.0f,
         0.0f,
    };

    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, 0);
    }
    float result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float n = theta[i];
        n = data[0] += n;
        n *= data[1];
        n *= data[2];
        n = data[3] *= n;
        n = data[4] *= n;
        n += data[5];
        n = data[6] *= n;
        n += data[6];
        n = data[7] *= n;
        n = data[7] *= n;
        n = data[8] *= n;
        n *= data[7];
        n += data[9];
        n *= data[10];
        n *= data[11];
        n = data[3] *= n;
        n *= data[12];
        n *= data[8];
        n = data[13] += n;
        n = data[14] += n;
        n *= data[0];
        n = data[14] *= n;
        n += data[15];
        n *= data[16];
        n += data[14];
        n = data[3] *= n;
        n *= data[17];
        n *= data[3];
        n *= data[18];
        n *= data[4];
        n *= data[19];
        n *= data[13];

        n = std::isfinite(n) ? n : 0.0f;
        printf("theta = %f  target= %f  n = %f\n", theta[i], target[i], n);
        result = fmaxf(fabsf(n - target[i]), result);
    }

    printf("result = %f\n", result);
} // TestCUDABug

bool FireStarter::ShouldQuit(void)
{
#if FIRESTARTER_AUTO_QUIT && (FIRESTARTER_MODE != FIRESTARTER_SOLUTION)
    return IsFinished();
#else
    return false;
#endif
} // ShouldQuit

FireStarter::FireStarter(const FireStarterWindow& window) : SerialThread("FireStarter"), m_window(window)
{
#if 0
    TestRandom();
#endif

#if 0
    TestParallelFor();
#endif

#if 0
    TestCUDABug();
#endif

#if 1
    ControlThread();
#endif
} // FireStarter

FireStarter::~FireStarter(void)
{
    QuitThreads();
    Synchronize();
} // ~FireStarter