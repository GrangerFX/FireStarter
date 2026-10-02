#pragma once
#include "FireStarterTarget.h"

#define FIRESTARTER_SAMPLES         15
#define FIRESTARTER_INSTRUCTIONS    32
#define FIRESTARTER_REGISTERS       30
#define FIRESTARTER_VARIATIONS      1

#define FIRESTARTER_WARP_THREADS    32
#define FIRESTARTER_GENERATE_GPU    1
#define FIRESTARTER_MULTIPROCESS    1           // Use multi-processing to compile each generation.
#define FIRESTARTER_OPTIMIZE_LIMIT  1.0e+10f


#define FIRESTARTER_EVOLVE_TARGET   0.0000008f  // Stop evolution when this target is reached.
#define FIRESTARTER_EVOLVE_DEBUG    0           // Output evolve debugging information.
#define FIRESTARTER_EVOLVE_TEST     0           // Test evolution mode.
#define FIRESTARTER_EVOLVE_RANDOM   1           // Number of random states to add each generation.

#define FIRESTARTER_EVOLVE_SEED     0
#define FIRESTARTER_OPTIMIZE_SEED   0

// First 16 tests of 16 states for unlimited generations is the standard evolve test.
#define FIRESTARTER_START_TEST      0          // The starting test index.
#define FIRESTARTER_TESTS           16

#define FIRESTARTER_AUTO            0           // Used to automatically set the mode using CUDA.
#define FIRESTARTER_RANDOM          1           // First result of states random instructions and data.
#define FIRESTARTER_EVOLVE_CPU      2           // CPU evolution used to generate actual results.
#define FIRESTARTER_EVOLVE_GPU      3           // GPU evolution used to find faster algorithms.
#define FIRESTARTER_OPTIMIZE_CPU    4           // Optimize a previously CPU evolved state.
#define FIRESTARTER_OPTIMIZE_GPU    5           // Optimize a previously GPU evolved state.
#define FIRESTARTER_SOLUTION        6           // Execute or validate the most recently evolved best state.
#define FIRESTARTER_MODES           7
#define FIRESTARTER_MODE            FIRESTARTER_OPTIMIZE_GPU

#define FIRESTARTER_RANDOM_STREAMS              8
#define FIRESTARTER_RANDOM_UNITS                1
#define FIRESTARTER_RANDOM_STATES               11000
#define FIRESTARTER_RANDOM_GENERATIONS          0
#define FIRESTARTER_RANDOM_POPULATION           8704 * FIRESTARTER_WARP_THREADS
#define FIRESTARTER_RANDOM_ITERATIONS           64
#define FIRESTARTER_RANDOM_CANDIDATES           16
#define FIRESTARTER_RANDOM_PASSES               500
#define FIRESTARTER_RANDOM_ATTEMPTS             0
#define FIRESTARTER_RANDOM_SCALE                0.1f
#define FIRESTARTER_RANDOM_START_SCALE          2.0f
#define FIRESTARTER_RANDOM_START_RESULT         10.0f
#define FIRESTARTER_RANDOM_OPTIMIZE             0

#define FIRESTARTER_EVOLVE_CPU_STREAMS          1
#define FIRESTARTER_EVOLVE_CPU_UNITS            8
#define FIRESTARTER_EVOLVE_CPU_STATES           16
#define FIRESTARTER_EVOLVE_CPU_GENERATIONS      0
#define FIRESTARTER_EVOLVE_CPU_POPULATION       8704 * FIRESTARTER_WARP_THREADS
#define FIRESTARTER_EVOLVE_CPU_ITERATIONS       64
#define FIRESTARTER_EVOLVE_CPU_CANDIDATES       16
#define FIRESTARTER_EVOLVE_CPU_PASSES           500
#define FIRESTARTER_EVOLVE_CPU_ATTEMPTS         0
#define FIRESTARTER_EVOLVE_CPU_SCALE            0.1f
#define FIRESTARTER_EVOLVE_CPU_START_SCALE      2.0f
#define FIRESTARTER_EVOLVE_CPU_START_RESULT     10.0f
#define FIRESTARTER_EVOLVE_CPU_OPTIMIZE         4

#define FIRESTARTER_OPTIMIZE_CPU_STREAMS        1
#define FIRESTARTER_OPTIMIZE_CPU_UNITS          1
#define FIRESTARTER_OPTIMIZE_CPU_STATES         1
#define FIRESTARTER_OPTIMIZE_CPU_GENERATIONS    0
#define FIRESTARTER_OPTIMIZE_CPU_POPULATION     8704 * FIRESTARTER_WARP_THREADS
#define FIRESTARTER_OPTIMIZE_CPU_ITERATIONS     64
#define FIRESTARTER_OPTIMIZE_CPU_CANDIDATES     16
#define FIRESTARTER_OPTIMIZE_CPU_PASSES         100
#define FIRESTARTER_OPTIMIZE_CPU_ATTEMPTS       32
#define FIRESTARTER_OPTIMIZE_CPU_SCALE          0.1f
#define FIRESTARTER_OPTIMIZE_CPU_START_SCALE    2.0f
#define FIRESTARTER_OPTIMIZE_CPU_START_RESULT   10.0f
#define FIRESTARTER_OPTIMIZE_CPU_OPTIMIZE       0

#define FIRESTARTER_EVOLVE_GPU_STREAMS          1
#define FIRESTARTER_EVOLVE_GPU_UNITS            1
#define FIRESTARTER_EVOLVE_GPU_STATES           1
#define FIRESTARTER_EVOLVE_GPU_GENERATIONS      0
#define FIRESTARTER_EVOLVE_GPU_POPULATION       8192    // One member per warp for GPU evolution
#define FIRESTARTER_EVOLVE_GPU_ITERATIONS       64
#define FIRESTARTER_EVOLVE_GPU_CANDIDATES       16
#define FIRESTARTER_EVOLVE_GPU_PASSES           500
#define FIRESTARTER_EVOLVE_GPU_ATTEMPTS         0
#define FIRESTARTER_EVOLVE_GPU_SCALE            0.1f
#define FIRESTARTER_EVOLVE_GPU_START_SCALE      2.0f
#define FIRESTARTER_EVOLVE_GPU_START_RESULT     10.0f
#define FIRESTARTER_EVOLVE_GPU_OPTIMIZE         1

#define FIRESTARTER_OPTIMIZE_GPU_STREAMS         1
#define FIRESTARTER_OPTIMIZE_GPU_UNITS           1
#define FIRESTARTER_OPTIMIZE_GPU_STATES          1
#define FIRESTARTER_OPTIMIZE_GPU_GENERATIONS     0
#define FIRESTARTER_OPTIMIZE_GPU_POPULATION      8192 * FIRESTARTER_WARP_THREADS   // 1 member per thread for GPU optimization
#define FIRESTARTER_OPTIMIZE_GPU_ITERATIONS      64
#define FIRESTARTER_OPTIMIZE_GPU_CANDIDATES      16
#define FIRESTARTER_OPTIMIZE_GPU_PASSES          500
#define FIRESTARTER_OPTIMIZE_GPU_ATTEMPTS        0
#define FIRESTARTER_OPTIMIZE_GPU_SCALE           0.1f
#define FIRESTARTER_OPTIMIZE_GPU_START_SCALE     2.0f
#define FIRESTARTER_OPTIMIZE_GPU_START_RESULT    10.0f
#define FIRESTARTER_OPTIMIZE_GPU_OPTIMIZE        1

#if FIRESTARTER_MODE == FIRESTARTER_RANDOM
#define FIRESTARTER_STREAMS         FIRESTARTER_RANDOM_STREAMS
#define FIRESTARTER_UNITS           FIRESTARTER_RANDOM_UNITS
#define FIRESTARTER_STATES          FIRESTARTER_RANDOM_STATES
#define FIRESTARTER_GENERATIONS     FIRESTARTER_RANDOM_GENERATIONS
#define FIRESTARTER_POPULATION      FIRESTARTER_RANDOM_POPULATION
#define FIRESTARTER_ITERATIONS      FIRESTARTER_RANDOM_ITERATIONS
#define FIRESTARTER_CANDIDATES      FIRESTARTER_RANDOM_CANDIDATES
#define FIRESTARTER_PASSES          FIRESTARTER_RANDOM_PASSES
#define FIRESTARTER_ATTEMPTS        FIRESTARTER_RANDOM_ATTEMPTS
#define FIRESTARTER_SCALE           FIRESTARTER_RANDOM_SCALE
#define FIRESTARTER_START_SCALE     FIRESTARTER_RANDOM_START_SCALE
#define FIRESTARTER_START_RESULT    FIRESTARTER_RANDOM_START_RESULT
#define FIRESTARTER_OPTIMIZE        FIRESTARTER_RANDOM_OPTIMIZE
#elif  FIRESTARTER_MODE == FIRESTARTER_EVOLVE_CPU
#define FIRESTARTER_STREAMS         FIRESTARTER_EVOLVE_CPU_STREAMS
#define FIRESTARTER_UNITS           FIRESTARTER_EVOLVE_CPU_UNITS
#define FIRESTARTER_STATES          FIRESTARTER_EVOLVE_CPU_STATES
#define FIRESTARTER_GENERATIONS     FIRESTARTER_EVOLVE_CPU_GENERATIONS
#define FIRESTARTER_POPULATION      FIRESTARTER_EVOLVE_CPU_POPULATION
#define FIRESTARTER_ITERATIONS      FIRESTARTER_EVOLVE_CPU_ITERATIONS
#define FIRESTARTER_CANDIDATES      FIRESTARTER_EVOLVE_CPU_CANDIDATES
#define FIRESTARTER_PASSES          FIRESTARTER_EVOLVE_CPU_PASSES
#define FIRESTARTER_ATTEMPTS        FIRESTARTER_EVOLVE_CPU_ATTEMPTS
#define FIRESTARTER_SCALE           FIRESTARTER_EVOLVE_CPU_SCALE
#define FIRESTARTER_START_SCALE     FIRESTARTER_EVOLVE_CPU_START_SCALE
#define FIRESTARTER_START_RESULT    FIRESTARTER_EVOLVE_CPU_START_RESULT
#define FIRESTARTER_OPTIMIZE        FIRESTARTER_EVOLVE_CPU_OPTIMIZE
#elif  FIRESTARTER_MODE == FIRESTARTER_OPTIMIZE_CPU
#define FIRESTARTER_STREAMS         FIRESTARTER_OPTIMIZE_CPU_STREAMS
#define FIRESTARTER_UNITS           FIRESTARTER_OPTIMIZE_CPU_UNITS
#define FIRESTARTER_STATES          FIRESTARTER_OPTIMIZE_CPU_STATES
#define FIRESTARTER_GENERATIONS     FIRESTARTER_OPTIMIZE_CPU_GENERATIONS
#define FIRESTARTER_POPULATION      FIRESTARTER_OPTIMIZE_CPU_POPULATION
#define FIRESTARTER_ITERATIONS      FIRESTARTER_OPTIMIZE_CPU_ITERATIONS
#define FIRESTARTER_CANDIDATES      FIRESTARTER_OPTIMIZE_CPU_CANDIDATES
#define FIRESTARTER_PASSES          FIRESTARTER_OPTIMIZE_CPU_PASSES
#define FIRESTARTER_ATTEMPTS        FIRESTARTER_OPTIMIZE_CPU_ATTEMPTS
#define FIRESTARTER_SCALE           FIRESTARTER_OPTIMIZE_CPU_SCALE
#define FIRESTARTER_START_SCALE     FIRESTARTER_OPTIMIZE_CPU_START_SCALE
#define FIRESTARTER_START_RESULT    FIRESTARTER_OPTIMIZE_CPU_START_RESULT
#define FIRESTARTER_OPTIMIZE        FIRESTARTER_OPTIMIZE_CPU_OPTIMIZE
#elif  FIRESTARTER_MODE == FIRESTARTER_EVOLVE_GPU
#define FIRESTARTER_STREAMS         FIRESTARTER_EVOLVE_GPU_STREAMS
#define FIRESTARTER_UNITS           FIRESTARTER_EVOLVE_GPU_UNITS
#define FIRESTARTER_STATES          FIRESTARTER_EVOLVE_GPU_STATES
#define FIRESTARTER_GENERATIONS     FIRESTARTER_EVOLVE_GPU_GENERATIONS
#define FIRESTARTER_POPULATION      FIRESTARTER_EVOLVE_GPU_POPULATION
#define FIRESTARTER_ITERATIONS      FIRESTARTER_EVOLVE_GPU_ITERATIONS
#define FIRESTARTER_CANDIDATES      FIRESTARTER_EVOLVE_GPU_CANDIDATES
#define FIRESTARTER_PASSES          FIRESTARTER_EVOLVE_GPU_PASSES
#define FIRESTARTER_ATTEMPTS        FIRESTARTER_EVOLVE_GPU_ATTEMPTS
#define FIRESTARTER_SCALE           FIRESTARTER_EVOLVE_GPU_SCALE
#define FIRESTARTER_START_SCALE     FIRESTARTER_EVOLVE_GPU_START_SCALE
#define FIRESTARTER_START_RESULT    FIRESTARTER_EVOLVE_GPU_START_RESULT
#define FIRESTARTER_OPTIMIZE        FIRESTARTER_EVOLVE_GPU_OPTIMIZE
#elif  FIRESTARTER_MODE == FIRESTARTER_OPTIMIZE_GPU
#define FIRESTARTER_STREAMS         FIRESTARTER_OPTIMIZE_GPU_STREAMS
#define FIRESTARTER_UNITS           FIRESTARTER_OPTIMIZE_GPU_UNITS
#define FIRESTARTER_STATES          FIRESTARTER_OPTIMIZE_GPU_STATES
#define FIRESTARTER_GENERATIONS     FIRESTARTER_OPTIMIZE_GPU_GENERATIONS
#define FIRESTARTER_POPULATION      FIRESTARTER_OPTIMIZE_GPU_POPULATION
#define FIRESTARTER_ITERATIONS      FIRESTARTER_OPTIMIZE_GPU_ITERATIONS
#define FIRESTARTER_CANDIDATES      FIRESTARTER_OPTIMIZE_GPU_CANDIDATES
#define FIRESTARTER_PASSES          FIRESTARTER_OPTIMIZE_GPU_PASSES
#define FIRESTARTER_ATTEMPTS        FIRESTARTER_OPTIMIZE_GPU_ATTEMPTS
#define FIRESTARTER_SCALE           FIRESTARTER_OPTIMIZE_GPU_SCALE
#define FIRESTARTER_START_SCALE     FIRESTARTER_OPTIMIZE_GPU_START_SCALE
#define FIRESTARTER_START_RESULT    FIRESTARTER_OPTIMIZE_GPU_START_RESULT
#define FIRESTARTER_OPTIMIZE        FIRESTARTER_OPTIMIZE_GPU_OPTIMIZE
#else
#define FIRESTARTER_STREAMS         0
#define FIRESTARTER_UNITS           0
#define FIRESTARTER_STATES          0
#define FIRESTARTER_GENERATIONS     0
#define FIRESTARTER_POPULATION      0
#define FIRESTARTER_ITERATIONS      0
#define FIRESTARTER_CANDIDATES      0
#define FIRESTARTER_PASSES          0
#define FIRESTARTER_ATTEMPTS        0
#define FIRESTARTER_SCALE           0
#define FIRESTARTER_START_SCALE     0
#define FIRESTARTER_START_RESULT    0
#define FIRESTARTER_OPTIMIZE        0
#endif

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

class FireStarterSetting {
public:
    unsigned int m_variations =     FIRESTARTER_VARIATIONS;
    unsigned int m_samples =        FIRESTARTER_SAMPLES;
    unsigned int m_instructions =   FIRESTARTER_INSTRUCTIONS;
    unsigned int m_registers =      FIRESTARTER_REGISTERS;
    unsigned int m_opcodes =        FIRESTARTER_OPCODES;
    unsigned int m_patternOpcodes = FIRESTARTER_PATTERN_OPCODES;

    float m_targetMin =             TARGET_MIN;
    float m_targetMax =             TARGET_MAX;
    float m_evolveTarget =          FIRESTARTER_EVOLVE_TARGET;

    float m_scale =                 FIRESTARTER_SCALE;
    float m_startScale =            FIRESTARTER_START_SCALE;
    float m_startResult =           FIRESTARTER_START_RESULT;

    unsigned int m_evolveSeed =     FIRESTARTER_EVOLVE_SEED;
    unsigned int m_optimizeSeed =   FIRESTARTER_OPTIMIZE_SEED;

    unsigned int m_tests =          FIRESTARTER_TESTS;

    unsigned int m_mode =           FIRESTARTER_MODE;
    unsigned int m_streams =        FIRESTARTER_STREAMS;
    unsigned int m_units =          FIRESTARTER_UNITS;
    unsigned int m_states =         FIRESTARTER_STATES;
    unsigned int m_generations =    FIRESTARTER_GENERATIONS;
    unsigned int m_population =     FIRESTARTER_POPULATION;
    unsigned int m_iterations =     FIRESTARTER_ITERATIONS;
    unsigned int m_candidates =     FIRESTARTER_CANDIDATES;
    unsigned int m_passes =         FIRESTARTER_PASSES;
    unsigned int m_attempts =       FIRESTARTER_ATTEMPTS;
    unsigned int m_optimize =       FIRESTARTER_OPTIMIZE;

    static inline const char* Mode(unsigned int mode)
    {
        switch (mode) {
        case FIRESTARTER_RANDOM:
            return "FIRESTARTER_RANDOM";
        case FIRESTARTER_EVOLVE_CPU:
            return "FIRESTARTER_EVOLVE_CPU";
        case FIRESTARTER_OPTIMIZE_CPU:
            return "FIRESTARTER_OPTIMIZE_CPU";
        case FIRESTARTER_EVOLVE_GPU:
            return "FIRESTARTER_EVOLVE_GPU";
        case FIRESTARTER_OPTIMIZE_GPU:
            return "FIRESTARTER_OPTIMIZE_GPU";
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

    inline void CopyCodeSettings(FireStarterSetting& source)
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

    inline void CopyModeSettings(const FireStarterSetting& source)
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
        m_scale = source.m_scale;
        m_startScale = source.m_startScale;
        m_startResult = source.m_startResult;
        m_optimize = source.m_optimize;
    } // CopyModeSettings

    inline FireStarterSetting(unsigned int mode = FIRESTARTER_AUTO) 
    {
        if (mode == FIRESTARTER_AUTO)
            m_mode = FIRESTARTER_MODE;
        else
            m_mode = mode;
        switch (mode) {
        case FIRESTARTER_AUTO:
            m_streams =     FIRESTARTER_STREAMS;
            m_units =       FIRESTARTER_UNITS;
            m_states =      FIRESTARTER_STATES;
            m_generations = FIRESTARTER_GENERATIONS;
            m_population =  FIRESTARTER_POPULATION;
            m_iterations =  FIRESTARTER_ITERATIONS;
            m_candidates =  FIRESTARTER_CANDIDATES;
            m_passes =      FIRESTARTER_PASSES;
            m_attempts =    FIRESTARTER_ATTEMPTS;
            m_optimize =    FIRESTARTER_OPTIMIZE;
            break;
        case FIRESTARTER_RANDOM:
            m_streams =     FIRESTARTER_RANDOM_STREAMS;
            m_units =       FIRESTARTER_RANDOM_UNITS;
            m_states =      FIRESTARTER_RANDOM_STATES;
            m_generations = FIRESTARTER_RANDOM_GENERATIONS;
            m_population =  FIRESTARTER_RANDOM_POPULATION;
            m_iterations =  FIRESTARTER_RANDOM_ITERATIONS;
            m_candidates =  FIRESTARTER_RANDOM_CANDIDATES;
            m_passes =      FIRESTARTER_RANDOM_PASSES;
            m_attempts =    FIRESTARTER_RANDOM_ATTEMPTS;
            m_optimize =    FIRESTARTER_RANDOM_OPTIMIZE;
            break;
        case FIRESTARTER_EVOLVE_CPU:
            m_streams =     FIRESTARTER_EVOLVE_CPU_STREAMS;
            m_units =       FIRESTARTER_EVOLVE_CPU_UNITS;
            m_states =      FIRESTARTER_EVOLVE_CPU_STATES;
            m_generations = FIRESTARTER_EVOLVE_CPU_GENERATIONS;
            m_population =  FIRESTARTER_EVOLVE_CPU_POPULATION;
            m_iterations =  FIRESTARTER_EVOLVE_CPU_ITERATIONS;
            m_candidates =  FIRESTARTER_EVOLVE_CPU_CANDIDATES;
            m_passes =      FIRESTARTER_EVOLVE_CPU_PASSES;
            m_attempts =    FIRESTARTER_EVOLVE_CPU_ATTEMPTS;
            m_optimize =    FIRESTARTER_EVOLVE_CPU_OPTIMIZE;
            break;
        case FIRESTARTER_OPTIMIZE_CPU:
            m_streams =     FIRESTARTER_OPTIMIZE_CPU_STREAMS;
            m_units =       FIRESTARTER_OPTIMIZE_CPU_UNITS;
            m_states =      FIRESTARTER_OPTIMIZE_CPU_STATES;
            m_generations = FIRESTARTER_OPTIMIZE_CPU_GENERATIONS;
            m_population =  FIRESTARTER_OPTIMIZE_CPU_POPULATION;
            m_iterations =  FIRESTARTER_OPTIMIZE_CPU_ITERATIONS;
            m_candidates =  FIRESTARTER_OPTIMIZE_CPU_CANDIDATES;
            m_passes =      FIRESTARTER_OPTIMIZE_CPU_PASSES;
            m_attempts =    FIRESTARTER_OPTIMIZE_CPU_ATTEMPTS;
            m_optimize =    FIRESTARTER_OPTIMIZE_CPU_OPTIMIZE;
            break;
        case FIRESTARTER_EVOLVE_GPU:
            m_streams =     FIRESTARTER_EVOLVE_GPU_STREAMS;
            m_units =       FIRESTARTER_EVOLVE_GPU_UNITS;
            m_states =      FIRESTARTER_EVOLVE_GPU_STATES;
            m_generations = FIRESTARTER_EVOLVE_GPU_GENERATIONS;
            m_population =  FIRESTARTER_EVOLVE_GPU_POPULATION;
            m_iterations =  FIRESTARTER_EVOLVE_GPU_ITERATIONS;
            m_candidates =  FIRESTARTER_EVOLVE_GPU_CANDIDATES;
            m_passes =      FIRESTARTER_EVOLVE_GPU_PASSES;
            m_attempts =    FIRESTARTER_EVOLVE_GPU_ATTEMPTS;
            m_optimize =    FIRESTARTER_EVOLVE_GPU_OPTIMIZE;
            break;
        case FIRESTARTER_OPTIMIZE_GPU:
            m_streams =     FIRESTARTER_OPTIMIZE_GPU_STREAMS;
            m_units =       FIRESTARTER_OPTIMIZE_GPU_UNITS;
            m_states =      FIRESTARTER_OPTIMIZE_GPU_STATES;
            m_generations = FIRESTARTER_OPTIMIZE_GPU_GENERATIONS;
            m_population =  FIRESTARTER_OPTIMIZE_GPU_POPULATION;
            m_iterations =  FIRESTARTER_OPTIMIZE_GPU_ITERATIONS;
            m_candidates =  FIRESTARTER_OPTIMIZE_GPU_CANDIDATES;
            m_passes =      FIRESTARTER_OPTIMIZE_GPU_PASSES;
            m_attempts =    FIRESTARTER_OPTIMIZE_GPU_ATTEMPTS;
            m_optimize =    FIRESTARTER_OPTIMIZE_GPU_OPTIMIZE;
            break;
        default:
            m_streams =     0;
            m_units =       0;
            m_states =      0;
            m_generations = 0;
            m_population =  0;
            m_iterations =  0;
            m_candidates =  0;
            m_passes =      0;
            m_attempts =    0;
            m_optimize =    0;
            break;
        }
    } // FireStarterSetting
}; // class FireStarterSetting

class FireStarterSettings : public FireStarterSetting {
public:
    FireStarterSetting m_settings[FIRESTARTER_MODES] = {
        FireStarterSetting(FIRESTARTER_AUTO),
        FireStarterSetting(FIRESTARTER_RANDOM),
        FireStarterSetting(FIRESTARTER_EVOLVE_CPU),
        FireStarterSetting(FIRESTARTER_OPTIMIZE_CPU),
        FireStarterSetting(FIRESTARTER_EVOLVE_GPU),
        FireStarterSetting(FIRESTARTER_OPTIMIZE_GPU) };

    inline const FireStarterSetting& GetSettings(unsigned int mode = FIRESTARTER_AUTO)
    {
        if (mode == FIRESTARTER_AUTO)
            mode = m_mode;
        else if (mode >= FIRESTARTER_MODES)
            mode = FIRESTARTER_SOLUTION;
        return m_settings[mode];
    } // GetSettings

    inline void SetMode(unsigned int mode = FIRESTARTER_AUTO)
    {
        if (mode == FIRESTARTER_AUTO)
            mode = m_mode;
        else if (mode >= FIRESTARTER_MODES)
            mode = FIRESTARTER_SOLUTION;
        FireStarterSetting& setting = static_cast<FireStarterSetting&>(*this);
        setting = m_settings[mode];
    } // SetMode

    inline FireStarterSettings(unsigned int mode = FIRESTARTER_AUTO) : FireStarterSetting(mode)
    {
    } // FireStarterSettings
}; // class FireStarterSettings
