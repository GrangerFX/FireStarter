#pragma once
#include "FireStarterTarget.h"

#define FIRESTARTER_VARIATIONS      3
#define FIRESTARTER_SAMPLES         15
#define FIRESTARTER_INSTRUCTIONS    32
#define FIRESTARTER_REGISTERS       29
#define FIRESTARTER_GENERATE_GPU    1
#define FIRESTARTER_STREAMS         4          // Maximum number of streams
#define FIRESTARTER_MULTIPROCESS    1          // Use multi-processing to compile each generation.

#define FIRESTARTER_EVOLVE_TARGET   0.0000008f // Stop evolution when this target is reached.
#define FIRESTARTER_EVOLVE_DEBUG    0          // Output evolve debugging information.
#define FIRESTARTER_EVOLVE_SORT     0
#define FIRESTARTER_EVOLVE_NEW      1
#define FIRESTARTER_EVOLVE_RANDOM   4
#define FIRESTARTER_EVOLVE_WEIGHT   0.5f

#define FIRESTARTER_EVOLVE_SEED     0
#define FIRESTARTER_OPTIMIZE_SEED   0

#define FIRESTARTER_START_TEST      0          // The starting test index.

#define FIRESTARTER_AUTO     0  // Used to automatically set the mode using CUDA.
#define FIRESTARTER_RANDOM   1
#define FIRESTARTER_EVOLVE   2
#define FIRESTARTER_OPTIMIZE 3
#define FIRESTARTER_SOLUTION 4
#define FIRESTARTER_MODE     FIRESTARTER_EVOLVE

#define FIRESTARTER_RANDOM_TESTS            0
#define FIRESTARTER_RANDOM_STATES           11000
#define FIRESTARTER_RANDOM_UNITS            8
#define FIRESTARTER_RANDOM_POPULATION       4352 * 64
#define FIRESTARTER_RANDOM_ITERATIONS       256
#define FIRESTARTER_RANDOM_CANDIDATES       16
#define FIRESTARTER_RANDOM_PASSES           100
#define FIRESTARTER_RANDOM_PRECISION        0
#define FIRESTARTER_RANDOM_ATTEMPTS         32
#define FIRESTARTER_RANDOM_SCALE            0.1f
#define FIRESTARTER_RANDOM_START_SCALE      2.0f
#define FIRESTARTER_RANDOM_START_RESULT     10.0f
#define FIRESTARTER_RANDOM_OPTIMIZE         0

#define FIRESTARTER_EVOLVE_TESTS            4
#define FIRESTARTER_EVOLVE_STATES           64
#define FIRESTARTER_EVOLVE_UNITS            4
#define FIRESTARTER_EVOLVE_POPULATION       4352 * 64
#define FIRESTARTER_EVOLVE_ITERATIONS       64
#define FIRESTARTER_EVOLVE_CANDIDATES       16
#define FIRESTARTER_EVOLVE_PASSES           500
#define FIRESTARTER_EVOLVE_PRECISION        0
#define FIRESTARTER_EVOLVE_ATTEMPTS         64
#define FIRESTARTER_EVOLVE_SCALE            0.1f
#define FIRESTARTER_EVOLVE_START_SCALE      2.0f
#define FIRESTARTER_EVOLVE_START_RESULT     10.0f
#define FIRESTARTER_EVOLVE_OPTIMIZE         8

#define FIRESTARTER_OPTIMIZE_TESTS          0
#define FIRESTARTER_OPTIMIZE_STATES         1
#define FIRESTARTER_OPTIMIZE_UNITS          1
#define FIRESTARTER_OPTIMIZE_POPULATION     4352 * 64
#define FIRESTARTER_OPTIMIZE_ITERATIONS     64
#define FIRESTARTER_OPTIMIZE_CANDIDATES     16
#define FIRESTARTER_OPTIMIZE_PASSES         100
#define FIRESTARTER_OPTIMIZE_PRECISION      0
#define FIRESTARTER_OPTIMIZE_ATTEMPTS       32
#define FIRESTARTER_OPTIMIZE_SCALE          0.1f
#define FIRESTARTER_OPTIMIZE_START_SCALE    2.0f
#define FIRESTARTER_OPTIMIZE_START_RESULT   10.0f
#define FIRESTARTER_OPTIMIZE_OPTIMIZE       0

#define FIRESTARTER_MULTIPLY_ADD     0
#define FIRESTARTER_MULTIPLY_ADD_ABS 1
#define FIRESTARTER_CODE_PATTERN     2
#define FIRESTARTER_PROGRAM_MODE     FIRESTARTER_MULTIPLY_ADD

#define MIN(a, b) ((a) <= (b) ? (a) : (b))
#define MAX(a, b) ((a) >= (b) ? (a) : (b))

typedef enum {
    Operation_multiply = 0,
    Operation_add,
    Operation_abs,
} FireStarterOpcode;

#if FIRESTARTER_PROGRAM_MODE == FIRESTARTER_MULTIPLY_ADD
#if 1
const FireStarterOpcode fireStarterPattern[] = {
    Operation_add,
    Operation_multiply,
    Operation_multiply,
    Operation_multiply,
};
const FireStarterOpcode fireStarterOpcodes[] = {
    Operation_add,
    Operation_multiply,
};
#else
const FireStarterOpcode fireStarterPattern[] = {
    Operation_multiply,
    Operation_add,
};
const FireStarterOpcode fireStarterOpcodes[] = {
    Operation_multiply,
    Operation_add,
};
#endif
#endif

#if FIRESTARTER_PROGRAM_MODE == FIRESTARTER_MULTIPLY_ADD_ABS
const FireStarterOpcode fireStarterOpcodes[] = {
    Operation_multiply,
    Operation_add,
    Operation_abs,
};
const FireStarterOpcode fireStarterPattern[] = {
    Operation_multiply,
    Operation_add,
    Operation_multiply,
    Operation_add,
    Operation_multiply,
    Operation_add,
    Operation_multiply,
    Operation_add,
    Operation_multiply,
    Operation_add,
    Operation_multiply,
    Operation_add,
    Operation_abs
};
#endif

#if FIRESTARTER_PROGRAM_MODE == FIRESTARTER_CODE_PATTERN
const FireStarterOpcode fireStarterOpcodes[] = {
    Operation_multiply,
    Operation_add,
};
const FireStarterOpcode fireStarterPattern[] = {
    Operation_add,
    Operation_multiply,
    Operation_multiply,
    Operation_multiply,
    Operation_multiply,
    Operation_multiply,
    Operation_multiply,
    Operation_multiply,
    Operation_multiply,
    Operation_add,
    Operation_multiply,
    Operation_multiply,
    Operation_multiply,
    Operation_multiply,
    Operation_add,
    Operation_add,
    Operation_multiply,
    Operation_add,
    Operation_multiply,
    Operation_multiply,
    Operation_multiply,
    Operation_add,
    Operation_multiply,
    Operation_multiply,
    Operation_add,
    Operation_multiply,
    Operation_multiply,
    Operation_multiply,
    Operation_multiply,
    Operation_multiply,
    Operation_multiply,
    Operation_add,
};
#endif

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
    unsigned int m_states = 0;
    unsigned int m_units = 0;
    unsigned int m_population = 0;
    unsigned int m_iterations = 0;
    unsigned int m_candidates = 0;
    unsigned int m_passes = 0;
    unsigned int m_precision = 0;
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
        m_population = source.m_population;
        m_iterations = source.m_iterations;
        m_candidates = source.m_candidates;
        m_passes = source.m_passes;
        m_precision = source.m_precision;
        m_attempts = source.m_attempts;
        m_optimize = source.m_optimize;
        m_scale = source.m_scale;
        m_startScale = source.m_startScale;
        m_startResult = source.m_startResult;
    } // CopyModeSettings

    inline FireStarterSettings(unsigned int evolveMode = 0)
    {
        m_mode = evolveMode == FIRESTARTER_AUTO ? FIRESTARTER_MODE : evolveMode;
        switch (m_mode) {
            case FIRESTARTER_RANDOM:
                m_tests =         FIRESTARTER_RANDOM_TESTS;
                m_states =        FIRESTARTER_RANDOM_STATES;
                m_units =         FIRESTARTER_RANDOM_UNITS;
                m_population =    FIRESTARTER_RANDOM_POPULATION;
                m_iterations =    FIRESTARTER_RANDOM_ITERATIONS;
                m_candidates =    FIRESTARTER_RANDOM_CANDIDATES;
                m_passes =        FIRESTARTER_RANDOM_PASSES;
                m_precision =     FIRESTARTER_RANDOM_PRECISION;
                m_attempts =      FIRESTARTER_RANDOM_ATTEMPTS;
                m_optimize =      FIRESTARTER_RANDOM_OPTIMIZE;
                m_scale =         FIRESTARTER_RANDOM_SCALE;
                m_startScale =    FIRESTARTER_RANDOM_START_SCALE;
                m_startResult =   FIRESTARTER_RANDOM_START_RESULT;
                break;

            case FIRESTARTER_EVOLVE:
                m_tests =         FIRESTARTER_EVOLVE_TESTS;
                m_states =        FIRESTARTER_EVOLVE_STATES;
                m_units =         FIRESTARTER_EVOLVE_UNITS;
                m_population =    FIRESTARTER_EVOLVE_POPULATION;
                m_iterations =    FIRESTARTER_EVOLVE_ITERATIONS;
                m_candidates =    FIRESTARTER_EVOLVE_CANDIDATES;
                m_passes =        FIRESTARTER_EVOLVE_PASSES;
                m_precision =     FIRESTARTER_EVOLVE_PRECISION;
                m_attempts =      FIRESTARTER_EVOLVE_ATTEMPTS;
                m_optimize =      FIRESTARTER_EVOLVE_OPTIMIZE;
                m_scale =         FIRESTARTER_EVOLVE_SCALE;
                m_startScale =    FIRESTARTER_EVOLVE_START_SCALE;
                m_startResult =   FIRESTARTER_EVOLVE_START_RESULT;
                break;

            case FIRESTARTER_OPTIMIZE:
                m_tests =         FIRESTARTER_OPTIMIZE_TESTS;
                m_states =        FIRESTARTER_OPTIMIZE_STATES;
                m_units =         FIRESTARTER_OPTIMIZE_UNITS;
                m_population =    FIRESTARTER_OPTIMIZE_POPULATION;
                m_iterations =    FIRESTARTER_OPTIMIZE_ITERATIONS;
                m_candidates =    FIRESTARTER_OPTIMIZE_CANDIDATES;
                m_passes =        FIRESTARTER_OPTIMIZE_PASSES;
                m_precision =     FIRESTARTER_OPTIMIZE_PRECISION;
                m_attempts =      FIRESTARTER_OPTIMIZE_ATTEMPTS;
                m_optimize =      FIRESTARTER_OPTIMIZE_OPTIMIZE;
                m_scale =         FIRESTARTER_OPTIMIZE_SCALE;
                m_startScale =    FIRESTARTER_OPTIMIZE_START_SCALE;
                m_startResult =   FIRESTARTER_OPTIMIZE_START_RESULT;
                break;

            case FIRESTARTER_SOLUTION:
            default:
                m_tests = 0;
                m_states = 0;
                m_units = 0;
                m_population = 0;
                m_iterations = 0;
                m_candidates = 0;
                m_passes = 0;
                m_precision = 0;
                m_attempts = 0;
                m_optimize = 0;
                m_scale = 0.0f;
                m_startScale = 0.0f;
                m_startResult = 0.0f;
                break;
        }
    } // FireStarterSettings
}; // class FireStarterSettings