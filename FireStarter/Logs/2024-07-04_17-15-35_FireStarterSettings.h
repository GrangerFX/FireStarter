#pragma once
#include "FireStarterTarget.h"

#define FIRESTARTER_VARIATIONS      3
#define FIRESTARTER_SAMPLES         15
#define FIRESTARTER_INSTRUCTIONS    32
#define FIRESTARTER_REGISTERS       30
#define FIRESTARTER_GENERATE_GPU    1
#define FIRESTARTER_MULTIPROCESS    1           // Use multi-processing to compile each generation.
#define FIRESTARTER_OPTIMIZE_LIMIT  1.0e+10f
#define FIRESTARTER_OPTIMIZE_SHARED 1           // Test use of shared memory in optimize

#define FIRESTARTER_EVOLVE_TARGET   0.0000008f  // Stop evolution when this target is reached.
#define FIRESTARTER_EVOLVE_DEBUG    0           // Output evolve debugging information.
#define FIRESTARTER_EVOLVE_TEST     1           // Test evolution mode.
#define FIRESTARTER_EVOLVE_GPU      0           // Evolve using the GPU.
#define FIRESTARTER_EVOLVE_RANDOM   1           // Number of random states to add each generation.

#define FIRESTARTER_EVOLVE_SEED     0
#define FIRESTARTER_OPTIMIZE_SEED   0

#define FIRESTARTER_START_TEST      0           // The starting test index.

#define FIRESTARTER_AUTO            0           // Used to automatically set the mode using CUDA.
#define FIRESTARTER_RANDOM          1           // First result of states random instructions and data.
#define FIRESTARTER_EVOLVE          2           // Evolved evolution used to test or generate actual results.
#define FIRESTARTER_OPTIMIZE        3           // Optimize a previously evolved state.
#define FIRESTARTER_SOLUTION        4           // Execute or validate the most recently evolved best state.
#define FIRESTARTER_MODE            FIRESTARTER_EVOLVE

#if FIRESTARTER_MODE == FIRESTARTER_RANDOM
#define FIRESTARTER_TESTS            0
#define FIRESTARTER_STREAMS          8
#define FIRESTARTER_UNITS            1
#define FIRESTARTER_STATES           11000
#define FIRESTARTER_GENERATIONS      0
#define FIRESTARTER_POPULATION       4352 * 64
#define FIRESTARTER_ITERATIONS       64
#define FIRESTARTER_CANDIDATES       16
#define FIRESTARTER_PASSES           500
#define FIRESTARTER_ATTEMPTS         0
#define FIRESTARTER_SCALE            0.1f
#define FIRESTARTER_START_SCALE      2.0f
#define FIRESTARTER_START_RESULT     10.0f
#define FIRESTARTER_OPTIMIZE_PASSES  0
#endif

#if FIRESTARTER_MODE == FIRESTARTER_EVOLVE
#if FIRESTARTER_EVOLVE_TEST                      // 16 tests of 16 states for unlimited generations.
#define FIRESTARTER_TESTS            16          
#define FIRESTARTER_STREAMS          1
#define FIRESTARTER_UNITS            8
#define FIRESTARTER_STATES           16
#define FIRESTARTER_GENERATIONS      0
#define FIRESTARTER_POPULATION       4352 * 64
#define FIRESTARTER_ITERATIONS       64
#define FIRESTARTER_CANDIDATES       16
#define FIRESTARTER_PASSES           500
#define FIRESTARTER_ATTEMPTS         0
#define FIRESTARTER_SCALE            0.1f
#define FIRESTARTER_START_SCALE      2.0f
#define FIRESTARTER_START_RESULT     10.0f
#define FIRESTARTER_OPTIMIZE_PASSES  8
#else                                             // 16 states for unlimited generations. Fastest known reliable results.
#define FIRESTARTER_TESTS            0
#define FIRESTARTER_STREAMS          1
#define FIRESTARTER_UNITS            8
#define FIRESTARTER_STATES           16
#define FIRESTARTER_GENERATIONS      0
#define FIRESTARTER_POPULATION       4352 * 64
#define FIRESTARTER_ITERATIONS       64
#define FIRESTARTER_CANDIDATES       16
#define FIRESTARTER_PASSES           500
#define FIRESTARTER_ATTEMPTS         0
#define FIRESTARTER_SCALE            0.1f
#define FIRESTARTER_START_SCALE      2.0f
#define FIRESTARTER_START_RESULT     10.0f
#define FIRESTARTER_OPTIMIZE_PASSES  8
#endif
#endif

#if FIRESTARTER_MODE == FIRESTARTER_OPTIMIZE
#define FIRESTARTER_TESTS          0
#define FIRESTARTER_STREAMS        1
#define FIRESTARTER_UNITS          1
#define FIRESTARTER_STATES         1
#define FIRESTARTER_GENERATIONS    0
#define FIRESTARTER_POPULATION     4352 * 64
#define FIRESTARTER_ITERATIONS     64
#define FIRESTARTER_CANDIDATES     16
#define FIRESTARTER_PASSES         100
#define FIRESTARTER_ATTEMPTS       32
#define FIRESTARTER_SCALE          0.1f
#define FIRESTARTER_START_SCALE    2.0f
#define FIRESTARTER_START_RESULT   10.0f
#define FIRESTARTER_OPTIMIZE       0
#endif

#define MIN(a, b) ((a) <= (b) ? (a) : (b))
#define MAX(a, b) ((a) >= (b) ? (a) : (b))

#define FIRESTARTER_MADD 0

typedef enum {
    Operation_multiply = 0,
    Operation_add,
} FireStarterOpcode;

#if FIRESTARTER_MADD
const FireStarterOpcode fireStarterPattern[] = {
    Operation_add,
    Operation_multiply,
};
#else
const FireStarterOpcode fireStarterPattern[] = {
    Operation_add,
    Operation_multiply,
    Operation_multiply,
    Operation_multiply,
};
#endif
const FireStarterOpcode fireStarterOpcodes[] = {
    Operation_add,
    Operation_multiply,
};

#define FIRESTARTER_OPCODES (sizeof(fireStarterOpcodes) / sizeof(FireStarterOpcode))
#define FIRESTARTER_PATTERN_OPCODES (sizeof(fireStarterPattern) / sizeof(FireStarterOpcode))

class FireStarterSettings {
public:
    unsigned int m_variations =         FIRESTARTER_VARIATIONS;
    unsigned int m_samples =            FIRESTARTER_SAMPLES;
    unsigned int m_instructions =       FIRESTARTER_INSTRUCTIONS;
    unsigned int m_registers =          FIRESTARTER_REGISTERS;
    unsigned int m_opcodes =            FIRESTARTER_OPCODES;
    unsigned int m_patternOpcodes =     FIRESTARTER_PATTERN_OPCODES;

    float m_targetMin =                 TARGET_MIN;
    float m_targetMax =                 TARGET_MAX;
    float m_evolveTarget =              FIRESTARTER_EVOLVE_TARGET;

    unsigned long long m_evolveSeed =   FIRESTARTER_EVOLVE_SEED;
    unsigned long long m_optimizeSeed = FIRESTARTER_OPTIMIZE_SEED;

    unsigned int m_mode =               FIRESTARTER_MODE;

    unsigned int m_tests = 0;
    unsigned int m_streams = 0;
    unsigned int m_units = 0;
    unsigned int m_states = 0;
    unsigned int m_generations = 0;
    unsigned int m_population = 0;
    unsigned int m_iterations = 0;
    unsigned int m_candidates = 0;
    unsigned int m_passes = 0;
    unsigned int m_attempts = 0;
    unsigned int m_optimize = 0;
    float m_scale = 0.0f;
    float m_startScale = 0.0f;
    float m_startResult = 0.0f;

    static inline const char* Mode(unsigned int mode)
    {
        switch (mode) {
             case FIRESTARTER_RANDOM:
                return "FIRESTARTER_RANDOM";
            case FIRESTARTER_EVOLVE:
                return "FIRESTARTER_EVOLVE";
            case FIRESTARTER_OPTIMIZE:
                return "FIRESTARTER_OPTIMIZE";
            case FIRESTARTER_SOLUTION:
                return "FIRESTARTER_SOLUTION";
            default:
                return "0";
        }
    } // Mode

    inline const char* Mode(void) const
    {
        return Mode(m_mode);
    } // Mode

    inline void CopyCodeSettings(FireStarterSettings& source)
    {
        m_variations = source.m_variations;
        m_samples = source.m_samples;
        m_instructions = source.m_instructions;
        m_registers = source.m_registers;
        m_opcodes = source.m_opcodes;
        m_patternOpcodes = source.m_patternOpcodes;
        m_targetMin = source.m_targetMin;
        m_targetMax = source.m_targetMax;
    } // CopyCodeSettings

    inline void CopyModeSettings(const FireStarterSettings& source)
    {
        m_evolveSeed = source.m_evolveSeed;
        m_optimizeSeed = source.m_optimizeSeed;
        m_mode = source.m_mode;
        m_tests = source.m_tests;
        m_states = source.m_states;
        m_units = source.m_units;
        m_generations = source.m_generations;
        m_population = source.m_population;
        m_iterations = source.m_iterations;
        m_candidates = source.m_candidates;
        m_passes = source.m_passes;
        m_attempts = source.m_attempts;
        m_optimize = source.m_optimize;
        m_scale = source.m_scale;
        m_startScale = source.m_startScale;
        m_startResult = source.m_startResult;
    } // CopyModeSettings

    inline FireStarterSettings(void)
    {
        m_mode =        FIRESTARTER_MODE;
        m_tests =       FIRESTARTER_TESTS;
        m_streams =     FIRESTARTER_STREAMS;
        m_states =      FIRESTARTER_STATES;
        m_units =       FIRESTARTER_UNITS;
        m_generations = FIRESTARTER_GENERATIONS;
        m_population =  FIRESTARTER_POPULATION;
        m_iterations =  FIRESTARTER_ITERATIONS;
        m_candidates =  FIRESTARTER_CANDIDATES;
        m_passes =      FIRESTARTER_PASSES;
        m_attempts =    FIRESTARTER_ATTEMPTS;
        m_optimize =    FIRESTARTER_OPTIMIZE_PASSES;
        m_scale =       FIRESTARTER_SCALE;
        m_startScale =  FIRESTARTER_START_SCALE;
        m_startResult = FIRESTARTER_START_RESULT;
    } // FireStarterSettings
}; // class FireStarterSettings