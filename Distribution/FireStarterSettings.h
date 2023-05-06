#pragma once
#include "FireStarterTarget.h"

#define FIRESTARTER_VARIATIONS   3
#define FIRESTARTER_SAMPLES      15
#define FIRESTARTER_INSTRUCTIONS 32
#define FIRESTARTER_REGISTERS    29
#define FIRESTARTER_SECOND_PASS  1
#define FIRESTARTER_INIT_EVOLVE  1
#define FIRESTARTER_GENERATE_GPU 1
#define FIRESTARTER_AUTO_PROCESS 0
#define FIRESTARTER_OUTPUT_HASH  0

#define FIRESTARTER_SEED         0
//#define FIRESTARTER_SEED         3533
//#define FIRESTARTER_SEED         10484

#define FIRESTARTER_AUTO     0  // Used to automatically set the mode using CUDA.
#define FIRESTARTER_CODE     1
#define FIRESTARTER_UNIT     2
#define FIRESTARTER_TEST     3
#define FIRESTARTER_RANDOM   4
#define FIRESTARTER_REVOLVE  5
#define FIRESTARTER_EVOLVE   6
#define FIRESTARTER_OPTIMIZE 7
#define FIRESTARTER_SOLUTION 8
#define FIRESTARTER_MODE     FIRESTARTER_REVOLVE

#define FIRESTARTER_CODE_SEED               FIRESTARTER_SEED
#define FIRESTARTER_CODE_SEEDS              1
#define FIRESTARTER_CODE_TESTS              0
#define FIRESTARTER_CODE_UNITS              1
#define FIRESTARTER_CODE_PROCESSES          0
#define FIRESTARTER_CODE_POPULATION         4352 * 4
#define FIRESTARTER_CODE_ITERATIONS         256
#define FIRESTARTER_CODE_CANDIDATES         16
#define FIRESTARTER_CODE_GENERATIONS        1
#define FIRESTARTER_CODE_PRECISION          0
#define FIRESTARTER_CODE_ATTEMPTS           32
#define FIRESTARTER_CODE_SCALE              0.1f
#define FIRESTARTER_CODE_START_SCALE        2.0f
#define FIRESTARTER_CODE_START_RESULT       10.0f

#define FIRESTARTER_UNIT_SEED               FIRESTARTER_SEED
#define FIRESTARTER_UNIT_SEEDS              1
#define FIRESTARTER_UNIT_TESTS              0
#define FIRESTARTER_UNIT_UNITS              1
#define FIRESTARTER_UNIT_PROCESSES          0
#define FIRESTARTER_UNIT_POPULATION         4352 * 16
#define FIRESTARTER_UNIT_ITERATIONS         256
#define FIRESTARTER_UNIT_CANDIDATES         16
#define FIRESTARTER_UNIT_GENERATIONS        100
#define FIRESTARTER_UNIT_PRECISION          0
#define FIRESTARTER_UNIT_ATTEMPTS           32
#define FIRESTARTER_UNIT_SCALE              0.1f
#define FIRESTARTER_UNIT_START_SCALE        2.0f
#define FIRESTARTER_UNIT_START_RESULT       10.0f

#define FIRESTARTER_TEST_SEED               FIRESTARTER_SEED
#define FIRESTARTER_TEST_SEEDS              1
#define FIRESTARTER_TEST_TESTS              0
#define FIRESTARTER_TEST_UNITS              1
#define FIRESTARTER_TEST_PROCESSES          0
#define FIRESTARTER_TEST_POPULATION         4352 * 64
#define FIRESTARTER_TEST_ITERATIONS         64
#define FIRESTARTER_TEST_CANDIDATES         16
#define FIRESTARTER_TEST_GENERATIONS        100
#define FIRESTARTER_TEST_PRECISION          0
#define FIRESTARTER_TEST_ATTEMPTS           32
#define FIRESTARTER_TEST_SCALE              0.1f
#define FIRESTARTER_TEST_START_SCALE        2.0f
#define FIRESTARTER_TEST_START_RESULT       10.0f

#define FIRESTARTER_RANDOM_SEED             0
#define FIRESTARTER_RANDOM_SEEDS            11000
#define FIRESTARTER_RANDOM_TESTS            0
#define FIRESTARTER_RANDOM_UNITS            8
#define FIRESTARTER_RANDOM_PROCESSES        16
#define FIRESTARTER_RANDOM_POPULATION       4352 * 64
#define FIRESTARTER_RANDOM_ITERATIONS       256
#define FIRESTARTER_RANDOM_CANDIDATES       16
#define FIRESTARTER_RANDOM_GENERATIONS      100
#define FIRESTARTER_RANDOM_PRECISION        0
#define FIRESTARTER_RANDOM_ATTEMPTS         32
#define FIRESTARTER_RANDOM_SCALE            0.1f
#define FIRESTARTER_RANDOM_START_SCALE      2.0f
#define FIRESTARTER_RANDOM_START_RESULT     10.0f

#define FIRESTARTER_REVOLVE_SEED            FIRESTARTER_SEED
#define FIRESTARTER_REVOLVE_SEEDS           1
#define FIRESTARTER_REVOLVE_TESTS           100
#define FIRESTARTER_REVOLVE_UNITS           4
#define FIRESTARTER_REVOLVE_PROCESSES       0
#define FIRESTARTER_REVOLVE_POPULATION      4352 * 64
#define FIRESTARTER_REVOLVE_ITERATIONS      64
#define FIRESTARTER_REVOLVE_CANDIDATES      16
#define FIRESTARTER_REVOLVE_GENERATIONS     100
#define FIRESTARTER_REVOLVE_PRECISION       0
#define FIRESTARTER_REVOLVE_ATTEMPTS        64
#define FIRESTARTER_REVOLVE_SCALE           0.1f
#define FIRESTARTER_REVOLVE_START_SCALE     2.0f
#define FIRESTARTER_REVOLVE_START_RESULT    10.0f

#define FIRESTARTER_EVOLVE_SEED             FIRESTARTER_SEED
#define FIRESTARTER_EVOLVE_SEEDS            1
#define FIRESTARTER_EVOLVE_TESTS            0
#define FIRESTARTER_EVOLVE_UNITS            8
#define FIRESTARTER_EVOLVE_PROCESSES        0
#define FIRESTARTER_EVOLVE_POPULATION       4352 * 64
#define FIRESTARTER_EVOLVE_ITERATIONS       64
#define FIRESTARTER_EVOLVE_CANDIDATES       16
#define FIRESTARTER_EVOLVE_GENERATIONS      100
#define FIRESTARTER_EVOLVE_PRECISION        0
#define FIRESTARTER_EVOLVE_ATTEMPTS         32
#define FIRESTARTER_EVOLVE_SCALE            0.1f
#define FIRESTARTER_EVOLVE_START_SCALE      2.0f
#define FIRESTARTER_EVOLVE_START_RESULT     10.0f

#define FIRESTARTER_OPTIMIZE_SEED           0
#define FIRESTARTER_OPTIMIZE_SEEDS          1
#define FIRESTARTER_OPTIMIZE_TESTS          0
#define FIRESTARTER_OPTIMIZE_UNITS          1
#define FIRESTARTER_OPTIMIZE_PROCESSES      0
#define FIRESTARTER_OPTIMIZE_POPULATION     4352 * 64
#define FIRESTARTER_OPTIMIZE_ITERATIONS     64
#define FIRESTARTER_OPTIMIZE_CANDIDATES     16
#define FIRESTARTER_OPTIMIZE_GENERATIONS    100
#define FIRESTARTER_OPTIMIZE_PRECISION      0
#define FIRESTARTER_OPTIMIZE_ATTEMPTS       32
#define FIRESTARTER_OPTIMIZE_SCALE          0.1f
#define FIRESTARTER_OPTIMIZE_START_SCALE    2.0f
#define FIRESTARTER_OPTIMIZE_START_RESULT   10.0f

#define FIRESTARTER_MULTIPLY_ADD     0
#define FIRESTARTER_MULTIPLY_ADD_ABS 1
#define FIRESTARTER_CODE_PATTERN     2
#define FIRESTARTER_PROGRAM_MODE     FIRESTARTER_MULTIPLY_ADD

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
    unsigned int m_variations;
    unsigned int m_samples;
    unsigned int m_instructions;
    unsigned int m_registers;
    unsigned int m_opcodes;
    unsigned int m_patternOpcodes;

    float m_targetMin;
    float m_targetMax;

    unsigned long long m_seed;
    unsigned int m_seeds;
    unsigned int m_mode;
    unsigned int m_tests;
    unsigned int m_units;
    unsigned int m_processes;
    unsigned int m_population;
    unsigned int m_iterations;
    unsigned int m_generations;
    unsigned int m_precision;
    unsigned int m_candidates;
    unsigned int m_attempts;

    float m_scale;
    float m_startScale;
    float m_startResult;

    static inline const char* Mode(unsigned int mode)
    {
        switch (mode) {
            case FIRESTARTER_CODE:
                return "FIRESTARTER_CODE";
            case FIRESTARTER_UNIT:
                return "FIRESTARTER_UNIT";
            case FIRESTARTER_TEST:
                return "FIRESTARTER_TEST";
            case FIRESTARTER_RANDOM:
                return "FIRESTARTER_RANDOM";
            case FIRESTARTER_REVOLVE:
                return "FIRESTARTER_REVOLVE";
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
        m_targetMin = source.m_targetMin;
        m_targetMax = source.m_targetMax;
    } // CopyCodeSettings

    inline void CopyModeSettings(const FireStarterSettings& source)
    {
        m_tests = source.m_tests;
        m_units = source.m_units;
        m_processes = source.m_processes;
        m_population = source.m_population;
        m_iterations = source.m_iterations;
        m_generations = source.m_generations;
        m_precision = source.m_precision;
        m_candidates = source.m_candidates;
        m_attempts = source.m_attempts;
        m_seed = source.m_seed;
        m_scale = source.m_scale;
        m_startScale = source.m_startScale;
        m_startResult = source.m_startResult;
    } // CopyModeSettings

    inline FireStarterSettings(unsigned int evolveMode = 0)
    {
        m_variations = FIRESTARTER_VARIATIONS;
        m_samples = FIRESTARTER_SAMPLES;
        m_instructions = FIRESTARTER_INSTRUCTIONS;
        m_registers = FIRESTARTER_REGISTERS;
        m_opcodes = FIRESTARTER_OPCODES;
        m_patternOpcodes = FIRESTARTER_PATTERN_OPCODES;

        m_targetMin = TARGET_MIN;
        m_targetMax = TARGET_MAX;

        m_mode = evolveMode ? evolveMode : FIRESTARTER_MODE;
        switch (m_mode) {
            case FIRESTARTER_CODE:
                m_seed =        FIRESTARTER_CODE_SEED;
                m_seeds =       FIRESTARTER_CODE_SEEDS;
                m_tests =       FIRESTARTER_CODE_TESTS;
                m_units =       FIRESTARTER_CODE_UNITS;
                m_processes =   FIRESTARTER_CODE_PROCESSES;
                m_population =  FIRESTARTER_CODE_POPULATION;
                m_iterations =  FIRESTARTER_CODE_ITERATIONS;
                m_candidates =  FIRESTARTER_CODE_CANDIDATES;
                m_generations = FIRESTARTER_CODE_GENERATIONS;
                m_precision =   FIRESTARTER_CODE_PRECISION;
                m_attempts =    FIRESTARTER_CODE_ATTEMPTS;
                m_scale =       FIRESTARTER_CODE_SCALE;
                m_startScale =  FIRESTARTER_CODE_START_SCALE;
                m_startResult = FIRESTARTER_CODE_START_RESULT;
                break;

            case FIRESTARTER_UNIT:
                m_seed =        FIRESTARTER_UNIT_SEED;
                m_seeds =       FIRESTARTER_UNIT_SEEDS;
                m_tests =       FIRESTARTER_UNIT_TESTS;
                m_units =       FIRESTARTER_UNIT_UNITS;
                m_processes =   FIRESTARTER_UNIT_PROCESSES;
                m_population =  FIRESTARTER_UNIT_POPULATION;
                m_iterations =  FIRESTARTER_UNIT_ITERATIONS;
                m_candidates =  FIRESTARTER_UNIT_CANDIDATES;
                m_generations = FIRESTARTER_UNIT_GENERATIONS;
                m_precision =   FIRESTARTER_UNIT_PRECISION;
                m_attempts =    FIRESTARTER_UNIT_ATTEMPTS;
                m_scale =       FIRESTARTER_UNIT_SCALE;
                m_startScale =  FIRESTARTER_UNIT_START_SCALE;
                m_startResult = FIRESTARTER_UNIT_START_RESULT;
                break;

            case FIRESTARTER_TEST:
                m_seed =        FIRESTARTER_TEST_SEED;
                m_seeds =       FIRESTARTER_TEST_SEEDS;
                m_tests =       FIRESTARTER_TEST_TESTS;
                m_units =       FIRESTARTER_TEST_UNITS;
                m_processes =   FIRESTARTER_TEST_PROCESSES;
                m_population =  FIRESTARTER_TEST_POPULATION;
                m_iterations =  FIRESTARTER_TEST_ITERATIONS;
                m_candidates =  FIRESTARTER_TEST_CANDIDATES;
                m_generations = FIRESTARTER_TEST_GENERATIONS;
                m_precision =   FIRESTARTER_TEST_PRECISION;
                m_attempts =    FIRESTARTER_TEST_ATTEMPTS;
                m_scale =       FIRESTARTER_TEST_SCALE;
                m_startScale =  FIRESTARTER_TEST_START_SCALE;
                m_startResult = FIRESTARTER_TEST_START_RESULT;
                break;

            case FIRESTARTER_RANDOM:
                m_seed =        FIRESTARTER_RANDOM_SEED;
                m_seeds =       FIRESTARTER_RANDOM_SEEDS;
                m_tests =       FIRESTARTER_RANDOM_TESTS;
                m_units =       FIRESTARTER_RANDOM_UNITS;
                m_processes =   FIRESTARTER_RANDOM_PROCESSES;
                m_population =  FIRESTARTER_RANDOM_POPULATION;
                m_iterations =  FIRESTARTER_RANDOM_ITERATIONS;
                m_candidates =  FIRESTARTER_RANDOM_CANDIDATES;
                m_generations = FIRESTARTER_RANDOM_GENERATIONS;
                m_precision =   FIRESTARTER_RANDOM_PRECISION;
                m_attempts =    FIRESTARTER_RANDOM_ATTEMPTS;
                m_scale =       FIRESTARTER_RANDOM_SCALE;
                m_startScale =  FIRESTARTER_RANDOM_START_SCALE;
                m_startResult = FIRESTARTER_RANDOM_START_RESULT;
                break;

            case FIRESTARTER_REVOLVE:
                m_seed =        FIRESTARTER_REVOLVE_SEED;
                m_seeds =       FIRESTARTER_REVOLVE_SEEDS;
                m_tests =       FIRESTARTER_REVOLVE_TESTS;
                m_units =       FIRESTARTER_REVOLVE_UNITS;
                m_processes =   FIRESTARTER_REVOLVE_PROCESSES;
                m_population =  FIRESTARTER_REVOLVE_POPULATION;
                m_iterations =  FIRESTARTER_REVOLVE_ITERATIONS;
                m_candidates =  FIRESTARTER_REVOLVE_CANDIDATES;
                m_generations = FIRESTARTER_REVOLVE_GENERATIONS;
                m_precision =   FIRESTARTER_REVOLVE_PRECISION;
                m_attempts =    FIRESTARTER_REVOLVE_ATTEMPTS;
                m_scale =       FIRESTARTER_REVOLVE_SCALE;
                m_startScale =  FIRESTARTER_REVOLVE_START_SCALE;
                m_startResult = FIRESTARTER_REVOLVE_START_RESULT;
                break;

            case FIRESTARTER_EVOLVE:
                m_seed =        FIRESTARTER_EVOLVE_SEED;
                m_seeds =       FIRESTARTER_EVOLVE_SEEDS;
                m_tests =       FIRESTARTER_EVOLVE_TESTS;
                m_units =       FIRESTARTER_EVOLVE_UNITS;
                m_processes =   FIRESTARTER_EVOLVE_PROCESSES;
                m_population =  FIRESTARTER_EVOLVE_POPULATION;
                m_iterations =  FIRESTARTER_EVOLVE_ITERATIONS;
                m_candidates =  FIRESTARTER_EVOLVE_CANDIDATES;
                m_generations = FIRESTARTER_EVOLVE_GENERATIONS;
                m_precision =   FIRESTARTER_EVOLVE_PRECISION;
                m_attempts =    FIRESTARTER_EVOLVE_ATTEMPTS;
                m_scale =       FIRESTARTER_EVOLVE_SCALE;
                m_startScale =  FIRESTARTER_EVOLVE_START_SCALE;
                m_startResult = FIRESTARTER_EVOLVE_START_RESULT;
                break;

            case FIRESTARTER_OPTIMIZE:
                m_seed =        FIRESTARTER_OPTIMIZE_SEED;
                m_seeds =       FIRESTARTER_OPTIMIZE_SEEDS;
                m_tests =       FIRESTARTER_OPTIMIZE_TESTS;
                m_units =       FIRESTARTER_OPTIMIZE_UNITS;
                m_processes =   FIRESTARTER_OPTIMIZE_PROCESSES;
                m_population =  FIRESTARTER_OPTIMIZE_POPULATION;
                m_iterations =  FIRESTARTER_OPTIMIZE_ITERATIONS;
                m_candidates =  FIRESTARTER_OPTIMIZE_CANDIDATES;
                m_generations = FIRESTARTER_OPTIMIZE_GENERATIONS;
                m_precision =   FIRESTARTER_OPTIMIZE_PRECISION;
                m_attempts =    FIRESTARTER_OPTIMIZE_ATTEMPTS;
                m_scale =       FIRESTARTER_OPTIMIZE_SCALE;
                m_startScale =  FIRESTARTER_OPTIMIZE_START_SCALE;
                m_startResult = FIRESTARTER_OPTIMIZE_START_RESULT;
                break;

            case FIRESTARTER_SOLUTION:
            default:
                m_seed = 0;
                m_seeds = 0;
                m_tests = 0;
                m_units = 0;
                m_processes = 0;
                m_population = 0;
                m_iterations = 0;
                m_candidates = 0;
                m_generations = 0;
                m_precision = 0;
                m_attempts = 0;
                m_scale = 0.0f;
                m_startScale = 0.0f;
                m_startResult = 0.0f;
                break;
        }
    } // FireStarterSettings
}; // class FireStarterSettings