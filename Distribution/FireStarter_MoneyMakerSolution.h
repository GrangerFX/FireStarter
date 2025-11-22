// Run date: 11/22/25 12:33:51 Pacific Standard Time
// Run duration = 888.056857 seconds
// Run test = 0
// Run generation = 5
// Run evolution = 0
// Run precision  = 0.32479215
// Run max result = 0.68131936

// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_MONEYMAKER
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 10
// Run passes = 256
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

// Run stocks = 4
// Run sessions = 16
// Run history = 257
// Run variation = 120
// Run warmup = 16
// Run trading = 120
// Run funds = 1000.000000f


inline float MoneyMakerSolution(MoneyMakerStock& stock)
{
    float n = 0.0f;
    float r0 = 0.09335206f;
    float r1 = 0.85158670f;
    float r2 = 1.98794913f;
    float r3 = -2.29524660f;
    float r4 = -0.04439448f;
    float r5 = -0.01262146f;
    float r6 = 0.96107358f;
    float r7 = 0.88585502f;
    float r8 = -2.54241276f;
    float r9 = -0.07678597f;
    float r10 = -2.17398167f;
    float r11 = -2.09786487f;
    float r12 = -0.31418175f;
    float r13 = 1.75023854f;
    float r14 = -1.01811981f;
    float r15 = -1.79651606f;
    float r16 = 1.29739571f;
    float r17 = -1.57803869f;
    float r18 = 0.48757586f;

    for (unsigned int d = 0; d < stock.numDays; d++) {
        n = stock[d];
        n *= r0;
        r1 = n;
        n += r2;
        n *= r3;
        n *= r4;
        n += r5;
        n += r3;
        r6 = n;
        n *= r1;
        n += r2;
        n *= r7;
        n += r8;
        r9 = n;
        n *= r10;
        n += r11;
        n *= r4;
        r12 = n;
        n *= r13;
        n *= r1;
        n += r14;
        n *= r15;
        r0 = n;
        r2 = n;
        n *= r9;
        n *= r1;
        n *= r16;
        n += r0;
        r10 = n;
        r17 = n;
        n *= r12;
        r3 = n;
        n *= r18;
    }
    return n;
} // MoneyMakerSolution
