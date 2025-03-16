#pragma once
#include "FireStarterTarget.h"

#define FIRESTARTER_WARP_THREADS    32
#define FIRESTARTER_INSTRUCTIONS    32
#define FIRESTARTER_REGISTERS       30
#define FIRESTARTER_VARIATIONS      1
#define FIRESTARTER_VARIATION       0

#define FIRESTARTER_TARGET          0.000001f   // Target precision to stop processing

#define FIRESTARTER_MULTIPROCESS    2           // Use multi-processing to compile each generation.
#define FIRESTARTER_GENERATE_GPU    1           // Generate the settings and code using the GPU.
#define FIRESTARTER_SAVE_BESTSTATE  1           // Save the best state.
#define FIRESTARTER_AUTO_QUIT       1           // Automatically exit the app after completing the work.

#define FIRESTARTER_EVOLVE_RESULTS  0           // Copy all of the evolve and optimize data to the host.
#define FIRESTARTER_EVOLVE_RANDOM   1           // Number of random states to add each generation.

#define FIRESTARTER_FIRSTLIGHT      0           // Use the original instructions from FireStarter First Light.
#define FIRESTARTER_MADD            0           // Use only non-random multiply-add instructions.

#define FIRESTARTER_POPULATION      8192 * FIRESTARTER_WARP_THREADS  // For debugging display of the population contents only.
#define FIRESTARTER_PASSES          512
#define FIRESTARTER_ITERATIONS      64
#define FIRESTARTER_SAMPLES         15
#define FIRESTARTER_CANDIDATES      16

#define FIRESTARTER_NUM_BEST        16          // The number of best evolved codes for optimization

#define FIRESTARTER_SCALE           0.3f
#define FIRESTARTER_START_SCALE     2.5f
#define FIRESTARTER_START_RESULT    10.0f

#define FIRESTARTER_SEED            0
#define FIRESTARTER_EVOLVE_SEED     FIRESTARTER_SEED
#define FIRESTARTER_OPTIMIZE_SEED   FIRESTARTER_SEED

// First 16 tests of 16 states for unlimited generations is the standard evolve test.
#define FIRESTARTER_START_TEST      0           // The starting test index.
#define FIRESTARTER_TESTS           256

#define FIRESTARTER_AUTO            0           // Used to automatically set the mode using CUDA.
#define FIRESTARTER_RANDOM          1           // First result of states random instructions and data.
#define FIRESTARTER_EVOLVE_CPU      2           // CPU evolution used to generate actual results.
#define FIRESTARTER_EVOLVE_GPU      3           // GPU evolution used to find faster algorithms.
#define FIRESTARTER_EVOLVE_NEW      4           // GPU new evolution.
#define FIRESTARTER_EVOLVE_SINSIM   5           // SinSim evolution.
#define FIRESTARTER_SINSIM          6           // SinSim mini neural net algorithm for comparison.
#define FIRESTARTER_SPEED_TEST      7           // Speed testing for variations of GPU evolution.
#define FIRESTARTER_OPTIMIZE        8           // Optimize a previously CPU evolved state.
#define FIRESTARTER_SOLUTION        9           // Execute or validate the most recently evolved best state.
#define FIRESTARTER_MODES           10
#define FIRESTARTER_MODE            FIRESTARTER_EVOLVE_GPU

#define FIRESTARTER_RANDOM_STREAMS              8
#define FIRESTARTER_RANDOM_UNITS                1
#define FIRESTARTER_RANDOM_STATES               1
#define FIRESTARTER_RANDOM_GENERATIONS          0
#define FIRESTARTER_RANDOM_POPULATION           FIRESTARTER_POPULATION
#define FIRESTARTER_RANDOM_PASSES               FIRESTARTER_PASSES
#define FIRESTARTER_RANDOM_ITERATIONS           FIRESTARTER_ITERATIONS
#define FIRESTARTER_RANDOM_SAMPLES              FIRESTARTER_SAMPLES
#define FIRESTARTER_RANDOM_CANDIDATES           FIRESTARTER_CANDIDATES
#define FIRESTARTER_RANDOM_ATTEMPTS             0
#define FIRESTARTER_RANDOM_OPTIMIZE             0
#define FIRESTARTER_RANDOM_TESTS                11000
#define FIRESTARTER_RANDOM_TARGET               FIRESTARTER_TARGET

#define FIRESTARTER_EVOLVE_CPU_STREAMS          1
#define FIRESTARTER_EVOLVE_CPU_UNITS            8
#define FIRESTARTER_EVOLVE_CPU_STATES           16
#define FIRESTARTER_EVOLVE_CPU_GENERATIONS      0
#define FIRESTARTER_EVOLVE_CPU_POPULATION       FIRESTARTER_POPULATION
#define FIRESTARTER_EVOLVE_CPU_PASSES           FIRESTARTER_PASSES
#define FIRESTARTER_EVOLVE_CPU_ITERATIONS       FIRESTARTER_ITERATIONS
#define FIRESTARTER_EVOLVE_CPU_SAMPLES          FIRESTARTER_SAMPLES
#define FIRESTARTER_EVOLVE_CPU_CANDIDATES       FIRESTARTER_CANDIDATES
#define FIRESTARTER_EVOLVE_CPU_ATTEMPTS         0
#define FIRESTARTER_EVOLVE_CPU_OPTIMIZE         1
#define FIRESTARTER_EVOLVE_CPU_TESTS            FIRESTARTER_TESTS
#define FIRESTARTER_EVOLVE_CPU_TARGET           FIRESTARTER_TARGET

#define FIRESTARTER_EVOLVE_GPU_STREAMS          1
#define FIRESTARTER_EVOLVE_GPU_UNITS            1
#define FIRESTARTER_EVOLVE_GPU_STATES           1
#define FIRESTARTER_EVOLVE_GPU_GENERATIONS      0
#define FIRESTARTER_EVOLVE_GPU_POPULATION       32768
#define FIRESTARTER_EVOLVE_GPU_PASSES           256
#define FIRESTARTER_EVOLVE_GPU_ITERATIONS       FIRESTARTER_ITERATIONS
#define FIRESTARTER_EVOLVE_GPU_SAMPLES          FIRESTARTER_SAMPLES
#define FIRESTARTER_EVOLVE_GPU_CANDIDATES       FIRESTARTER_CANDIDATES
#define FIRESTARTER_EVOLVE_GPU_ATTEMPTS         0
#define FIRESTARTER_EVOLVE_GPU_OPTIMIZE         1
#define FIRESTARTER_EVOLVE_GPU_TESTS            FIRESTARTER_TESTS
#define FIRESTARTER_EVOLVE_GPU_TARGET           FIRESTARTER_TARGET

#define FIRESTARTER_EVOLVE_NEW_STREAMS          1
#define FIRESTARTER_EVOLVE_NEW_UNITS            1
#define FIRESTARTER_EVOLVE_NEW_STATES           1
#define FIRESTARTER_EVOLVE_NEW_GENERATIONS      0
#define FIRESTARTER_EVOLVE_NEW_POPULATION       FIRESTARTER_POPULATION
#define FIRESTARTER_EVOLVE_NEW_PASSES           256
#define FIRESTARTER_EVOLVE_NEW_ITERATIONS       FIRESTARTER_ITERATIONS
#define FIRESTARTER_EVOLVE_NEW_SAMPLES          FIRESTARTER_SAMPLES
#define FIRESTARTER_EVOLVE_NEW_CANDIDATES       FIRESTARTER_CANDIDATES
#define FIRESTARTER_EVOLVE_NEW_ATTEMPTS         0
#define FIRESTARTER_EVOLVE_NEW_OPTIMIZE         1
#define FIRESTARTER_EVOLVE_NEW_TESTS            FIRESTARTER_TESTS
#define FIRESTARTER_EVOLVE_NEW_TARGET           FIRESTARTER_TARGET

#define FIRESTARTER_EVOLVE_SINSIM_STREAMS          1
#define FIRESTARTER_EVOLVE_SINSIM_UNITS            1
#define FIRESTARTER_EVOLVE_SINSIM_STATES           1
#define FIRESTARTER_EVOLVE_SINSIM_GENERATIONS      1000
#define FIRESTARTER_EVOLVE_SINSIM_POPULATION       65536
#define FIRESTARTER_EVOLVE_SINSIM_PASSES           1
#define FIRESTARTER_EVOLVE_SINSIM_ITERATIONS       16
#define FIRESTARTER_EVOLVE_SINSIM_SAMPLES          4096
#define FIRESTARTER_EVOLVE_SINSIM_CANDIDATES       256
#define FIRESTARTER_EVOLVE_SINSIM_ATTEMPTS         0
#define FIRESTARTER_EVOLVE_SINSIM_OPTIMIZE         1
#define FIRESTARTER_EVOLVE_SINSIM_TESTS            FIRESTARTER_TESTS
#define FIRESTARTER_EVOLVE_SINSIM_TARGET           FIRESTARTER_TARGET

#define FIRESTARTER_SINSIM_STREAMS              1
#define FIRESTARTER_SINSIM_UNITS                1
#define FIRESTARTER_SINSIM_STATES               1
#define FIRESTARTER_SINSIM_GENERATIONS          1000
#define FIRESTARTER_SINSIM_POPULATION           65536
#define FIRESTARTER_SINSIM_PASSES               1
#define FIRESTARTER_SINSIM_ITERATIONS           16
#define FIRESTARTER_SINSIM_SAMPLES              4096
#define FIRESTARTER_SINSIM_CANDIDATES           256
#define FIRESTARTER_SINSIM_ATTEMPTS             0
#define FIRESTARTER_SINSIM_OPTIMIZE             1
#define FIRESTARTER_SINSIM_TESTS                FIRESTARTER_TESTS
#define FIRESTARTER_SINSIM_TARGET               FIRESTARTER_TARGET

#define FIRESTARTER_SPEED_TEST_STREAMS          1
#define FIRESTARTER_SPEED_TEST_UNITS            1
#define FIRESTARTER_SPEED_TEST_STATES           1
#define FIRESTARTER_SPEED_TEST_GENERATIONS      0
#define FIRESTARTER_SPEED_TEST_POPULATION       FIRESTARTER_POPULATION
#define FIRESTARTER_SPEED_TEST_PASSES           FIRESTARTER_PASSES
#define FIRESTARTER_SPEED_TEST_ITERATIONS       FIRESTARTER_ITERATIONS
#define FIRESTARTER_SPEED_TEST_SAMPLES          FIRESTARTER_SAMPLES
#define FIRESTARTER_SPEED_TEST_CANDIDATES       FIRESTARTER_CANDIDATES
#define FIRESTARTER_SPEED_TEST_ATTEMPTS         0
#define FIRESTARTER_SPEED_TEST_OPTIMIZE         5
#define FIRESTARTER_SPEED_TEST_TESTS            FIRESTARTER_TESTS
#define FIRESTARTER_SPEED_TEST_TARGET           0.0f

#define FIRESTARTER_OPTIMIZE_STREAMS            1
#define FIRESTARTER_OPTIMIZE_UNITS              1
#define FIRESTARTER_OPTIMIZE_STATES             1
#define FIRESTARTER_OPTIMIZE_GENERATIONS        0
#define FIRESTARTER_OPTIMIZE_POPULATION         65536
#define FIRESTARTER_OPTIMIZE_PASSES             384
#define FIRESTARTER_OPTIMIZE_ITERATIONS         FIRESTARTER_ITERATIONS
#define FIRESTARTER_OPTIMIZE_SAMPLES            FIRESTARTER_SAMPLES
#define FIRESTARTER_OPTIMIZE_CANDIDATES         FIRESTARTER_CANDIDATES
#define FIRESTARTER_OPTIMIZE_ATTEMPTS           0
#define FIRESTARTER_OPTIMIZE_OPTIMIZE           1
#define FIRESTARTER_OPTIMIZE_TESTS              FIRESTARTER_TESTS
#define FIRESTARTER_OPTIMIZE_TARGET             FIRESTARTER_TARGET

#if FIRESTARTER_FIRSTLIGHT
// Complex program generation.
typedef enum : unsigned short {
#if FIRESTARTER_MADD
    Operation_multiply, // n = data[d] *= n;
    Operation_add       // n = data[d] += n;
#else
    Operation_noop = 0,
    Operation_store,    // data[d] = n;
    Operation_square,   // n *= n;
    Operation_multiply, // n *= data[d];
    Operation_divide,   // n /= data[d];
    Operation_add,      // n += data[d];
    Operation_subtract, // n -= data[d];
    Operation_min,      // n = data[d] < n ? data[d] : n;
    Operation_max       // n = data[d] > n ? data[d] : n;
#endif
} FireStarterOpcode;

const FireStarterOpcode fireStarterOpcodes[] = {
#if FIRESTARTER_MADD
    Operation_multiply,
    Operation_add
#else
    Operation_store,
//  Operation_square,
    Operation_multiply,
//  Operation_divide,
    Operation_add,
//  Operation_subtract,
//  Operation_min
//  Operation_max,
#endif
};
#else
// Simple accumulator multiply or add instructions.
typedef enum : unsigned short {
    Operation_multiply,
    Operation_add
} FireStarterOpcode;

#if FIRESTARTER_MADD
// Note: Not used sice MADD has no random instructions.
const FireStarterOpcode fireStarterOpcodes[] = {
    Operation_multiply,
    Operation_add
};
#else
const FireStarterOpcode fireStarterOpcodes[] = {
    Operation_multiply,
    Operation_multiply,
    Operation_add
};
#endif
#endif

#define FIRESTARTER_OPCODES (sizeof(fireStarterOpcodes) / sizeof(FireStarterOpcode))

class FireStarterSetting {
public:
    unsigned int m_instructions =   FIRESTARTER_INSTRUCTIONS;
    unsigned int m_registers =      FIRESTARTER_REGISTERS;
    unsigned int m_opcodes =        FIRESTARTER_OPCODES;

    float m_targetMin =             TARGET_MIN;
    float m_targetMax =             TARGET_MAX;

    float m_scale =                 FIRESTARTER_SCALE;
    float m_startScale =            FIRESTARTER_START_SCALE;
    float m_startResult =           FIRESTARTER_START_RESULT;

    unsigned int m_evolveSeed =     FIRESTARTER_EVOLVE_SEED;
    unsigned int m_optimizeSeed =   FIRESTARTER_OPTIMIZE_SEED;

 
    unsigned int m_mode =           FIRESTARTER_MODE;
    unsigned int m_variations =     FIRESTARTER_VARIATIONS;
    unsigned int m_streams =        0;
    unsigned int m_units =          0;
    unsigned int m_states =         0;
    unsigned int m_generations =    0;
    unsigned int m_population =     0;
    unsigned int m_passes =         0;
    unsigned int m_iterations =     0;
    unsigned int m_samples =        0;
    unsigned int m_candidates =     0;
    unsigned int m_attempts =       0;
    unsigned int m_optimize =       0;
    unsigned int m_tests =          0;
    float        m_target =         0.0f;

    static inline const char* Mode(unsigned int mode)
    {
        switch (mode) {
            case FIRESTARTER_RANDOM:
                return "FIRESTARTER_RANDOM";
            case FIRESTARTER_EVOLVE_CPU:
                return "FIRESTARTER_EVOLVE_CPU";
            case FIRESTARTER_EVOLVE_GPU:
                return "FIRESTARTER_EVOLVE_GPU";
            case FIRESTARTER_EVOLVE_NEW:
                return "FIRESTARTER_EVOLVE_NEW";
            case FIRESTARTER_EVOLVE_SINSIM:
                return "FIRESTARTER_EVOLVE_SINSIM";
            case FIRESTARTER_SINSIM:
                return "FIRESTARTER_SINSIM";
            case FIRESTARTER_SPEED_TEST:
                return "FIRESTARTER_SPEED_TEST";
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

    static inline const char* ProgramName(unsigned int mode)
    {
        switch (mode) {
            case FIRESTARTER_EVOLVE_GPU:
                return "FireEvolver.cu";
            case FIRESTARTER_EVOLVE_NEW:
                return "FireEvolverNew.cu";
            case FIRESTARTER_EVOLVE_SINSIM:
                return "FireEvolverSinSim.cu";
            case FIRESTARTER_SINSIM:
                return "FireSinSim.cu";
            case FIRESTARTER_SPEED_TEST:
                return "FireSpeedTest.cu";
            case FIRESTARTER_OPTIMIZE:
            default:
                return "FireOptimizer.cu";
        }
    } // ProgramName

    inline const char* ProgramName(void) const
    {
        return ProgramName(m_mode);
    } // ProgramName

    static inline const char* FunctionName(unsigned int mode)
    {
        switch (mode) {
            case FIRESTARTER_EVOLVE_GPU:
                return "Evolver";
            case FIRESTARTER_EVOLVE_NEW:
                return "EvolverNew";
            case FIRESTARTER_EVOLVE_SINSIM:
                return "EvolverSinSim";
            case FIRESTARTER_SINSIM:
                return "SinSim";
            case FIRESTARTER_SPEED_TEST:
                return "SpeedTest";
            case FIRESTARTER_OPTIMIZE:
            default:
                return "Optimizer";
        }
    } // FunctionName

    inline const char* FunctionName(void) const
    {
        return FunctionName(m_mode);
    } // FunctionName

    inline void CopyCodeSettings(FireStarterSetting& source)
    {
        m_variations = source.m_variations;
        m_instructions = source.m_instructions;
        m_registers = source.m_registers;
        m_opcodes = source.m_opcodes;
        m_targetMin = source.m_targetMin;
        m_targetMax = source.m_targetMax;
    } // CopyCodeSettings

    inline void CopyModeSettings(const FireStarterSetting& source)
    {
        m_evolveSeed = source.m_evolveSeed;
        m_optimizeSeed = source.m_optimizeSeed;
        m_mode = source.m_mode;
        m_variations = source.m_variations;
        m_streams = source.m_streams;
        m_units = source.m_units;
        m_states = source.m_states;
        m_generations = source.m_generations;
        m_population = source.m_population;
        m_passes = source.m_passes;
        m_iterations = source.m_iterations;
        m_samples = source.m_samples;
        m_candidates = source.m_candidates;
        m_attempts = source.m_attempts;
        m_optimize = source.m_optimize;
        m_tests = source.m_tests;
        m_target = source.m_target;
        m_scale = source.m_scale;
        m_startScale = source.m_startScale;
        m_startResult = source.m_startResult;
    } // CopyModeSettings

    inline FireStarterSetting(unsigned int mode = FIRESTARTER_AUTO) 
    {
        if (mode == FIRESTARTER_AUTO)
            m_mode = FIRESTARTER_MODE;
        else
            m_mode = mode;
        switch (m_mode) {
            case FIRESTARTER_RANDOM:
                m_streams =     FIRESTARTER_RANDOM_STREAMS;
                m_units =       FIRESTARTER_RANDOM_UNITS;
                m_states =      FIRESTARTER_RANDOM_STATES;
                m_generations = FIRESTARTER_RANDOM_GENERATIONS;
                m_population =  FIRESTARTER_RANDOM_POPULATION;
                m_passes =      FIRESTARTER_RANDOM_PASSES;
                m_iterations =  FIRESTARTER_RANDOM_ITERATIONS;
                m_samples =     FIRESTARTER_RANDOM_SAMPLES;
                m_attempts =    FIRESTARTER_RANDOM_ATTEMPTS;
                m_optimize =    FIRESTARTER_RANDOM_OPTIMIZE;
                m_tests =       FIRESTARTER_RANDOM_TESTS;
                m_target =      FIRESTARTER_RANDOM_TARGET;
                break;

            case FIRESTARTER_EVOLVE_CPU:
                m_streams =     FIRESTARTER_EVOLVE_CPU_STREAMS;
                m_units =       FIRESTARTER_EVOLVE_CPU_UNITS;
                m_states =      FIRESTARTER_EVOLVE_CPU_STATES;
                m_generations = FIRESTARTER_EVOLVE_CPU_GENERATIONS;
                m_population =  FIRESTARTER_EVOLVE_CPU_POPULATION;
                m_passes =      FIRESTARTER_EVOLVE_CPU_PASSES;
                m_iterations =  FIRESTARTER_EVOLVE_CPU_ITERATIONS;
                m_samples =     FIRESTARTER_EVOLVE_CPU_SAMPLES;
                m_attempts =    FIRESTARTER_EVOLVE_CPU_ATTEMPTS;
                m_optimize =    FIRESTARTER_EVOLVE_CPU_OPTIMIZE;
                m_tests =       FIRESTARTER_EVOLVE_CPU_TESTS;
                m_target =      FIRESTARTER_EVOLVE_CPU_TARGET;
                break;

            case FIRESTARTER_EVOLVE_GPU:
                m_streams =     FIRESTARTER_EVOLVE_GPU_STREAMS;
                m_units =       FIRESTARTER_EVOLVE_GPU_UNITS;
                m_states =      FIRESTARTER_EVOLVE_GPU_STATES;
                m_generations = FIRESTARTER_EVOLVE_GPU_GENERATIONS;
                m_population =  FIRESTARTER_EVOLVE_GPU_POPULATION;
                m_passes =      FIRESTARTER_EVOLVE_GPU_PASSES;
                m_iterations =  FIRESTARTER_EVOLVE_GPU_ITERATIONS;
                m_samples =     FIRESTARTER_EVOLVE_GPU_SAMPLES;
                m_attempts =    FIRESTARTER_EVOLVE_GPU_ATTEMPTS;
                m_optimize =    FIRESTARTER_EVOLVE_GPU_OPTIMIZE;
                m_tests =       FIRESTARTER_EVOLVE_GPU_TESTS;
                m_target =      FIRESTARTER_EVOLVE_GPU_TARGET;
                break;

            case FIRESTARTER_EVOLVE_NEW:
                m_streams =     FIRESTARTER_EVOLVE_NEW_STREAMS;
                m_units =       FIRESTARTER_EVOLVE_NEW_UNITS;
                m_states =      FIRESTARTER_EVOLVE_NEW_STATES;
                m_generations = FIRESTARTER_EVOLVE_NEW_GENERATIONS;
                m_population =  FIRESTARTER_EVOLVE_NEW_POPULATION;
                m_passes =      FIRESTARTER_EVOLVE_NEW_PASSES;
                m_iterations =  FIRESTARTER_EVOLVE_NEW_ITERATIONS;
                m_samples =     FIRESTARTER_EVOLVE_NEW_SAMPLES;
                m_attempts =    FIRESTARTER_EVOLVE_NEW_ATTEMPTS;
                m_optimize =    FIRESTARTER_EVOLVE_NEW_OPTIMIZE;
                m_tests =       FIRESTARTER_EVOLVE_NEW_TESTS;
                m_target =      FIRESTARTER_EVOLVE_NEW_TARGET;
                break;

            case FIRESTARTER_EVOLVE_SINSIM:
                m_streams =     FIRESTARTER_EVOLVE_SINSIM_STREAMS;
                m_units =       FIRESTARTER_EVOLVE_SINSIM_UNITS;
                m_states =      FIRESTARTER_EVOLVE_SINSIM_STATES;
                m_generations = FIRESTARTER_EVOLVE_SINSIM_GENERATIONS;
                m_population =  FIRESTARTER_EVOLVE_SINSIM_POPULATION;
                m_passes =      FIRESTARTER_EVOLVE_SINSIM_PASSES;
                m_iterations =  FIRESTARTER_EVOLVE_SINSIM_ITERATIONS;
                m_samples =     FIRESTARTER_EVOLVE_SINSIM_SAMPLES;
                m_attempts =    FIRESTARTER_EVOLVE_SINSIM_ATTEMPTS;
                m_optimize =    FIRESTARTER_EVOLVE_SINSIM_OPTIMIZE;
                m_tests =       FIRESTARTER_EVOLVE_SINSIM_TESTS;
                m_target =      FIRESTARTER_EVOLVE_SINSIM_TARGET;
                break;

            case FIRESTARTER_SINSIM:
                m_streams =     FIRESTARTER_SINSIM_STREAMS;
                m_units =       FIRESTARTER_SINSIM_UNITS;
                m_states =      FIRESTARTER_SINSIM_STATES;
                m_generations = FIRESTARTER_SINSIM_GENERATIONS;
                m_population =  FIRESTARTER_SINSIM_POPULATION;
                m_passes =      FIRESTARTER_SINSIM_PASSES;
                m_iterations =  FIRESTARTER_SINSIM_ITERATIONS;
                m_samples =     FIRESTARTER_SINSIM_SAMPLES;
                m_attempts =    FIRESTARTER_SINSIM_ATTEMPTS;
                m_optimize =    FIRESTARTER_SINSIM_OPTIMIZE;
                m_tests =       FIRESTARTER_SINSIM_TESTS;
                m_target =      FIRESTARTER_SINSIM_TARGET;
                break;

            case FIRESTARTER_SPEED_TEST:
                m_streams =     FIRESTARTER_SPEED_TEST_STREAMS;
                m_units =       FIRESTARTER_SPEED_TEST_UNITS;
                m_states =      FIRESTARTER_SPEED_TEST_STATES;
                m_generations = FIRESTARTER_SPEED_TEST_GENERATIONS;
                m_population =  FIRESTARTER_SPEED_TEST_POPULATION;
                m_passes =      FIRESTARTER_SPEED_TEST_PASSES;
                m_iterations =  FIRESTARTER_SPEED_TEST_ITERATIONS;
                m_samples =     FIRESTARTER_SPEED_TEST_SAMPLES;
                m_attempts =    FIRESTARTER_SPEED_TEST_ATTEMPTS;
                m_optimize =    FIRESTARTER_SPEED_TEST_OPTIMIZE;
                m_tests =       FIRESTARTER_SPEED_TEST_TESTS;
                m_target =      FIRESTARTER_SPEED_TEST_TARGET;
                break;

            case FIRESTARTER_OPTIMIZE:
                m_streams =     FIRESTARTER_OPTIMIZE_STREAMS;
                m_units =       FIRESTARTER_OPTIMIZE_UNITS;
                m_states =      FIRESTARTER_OPTIMIZE_STATES;
                m_generations = FIRESTARTER_OPTIMIZE_GENERATIONS;
                m_population =  FIRESTARTER_OPTIMIZE_POPULATION;
                m_passes =      FIRESTARTER_OPTIMIZE_PASSES;
                m_iterations =  FIRESTARTER_OPTIMIZE_ITERATIONS;
                m_samples =     FIRESTARTER_OPTIMIZE_SAMPLES;
                m_attempts =    FIRESTARTER_OPTIMIZE_ATTEMPTS;
                m_optimize =    FIRESTARTER_OPTIMIZE_OPTIMIZE;
                m_tests =       FIRESTARTER_OPTIMIZE_TESTS;
                m_target =      FIRESTARTER_OPTIMIZE_TARGET;
                break;

            default:
                m_streams =     0;
                m_units =       0;
                m_states =      0;
                m_generations = 0;
                m_population =  0;
                m_passes =      0;
                m_iterations =  0;
                m_samples =     0;
                m_attempts =    0;
                m_optimize =    0;
                m_tests =       0;
                m_target =      0.0f;
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
        FireStarterSetting(FIRESTARTER_EVOLVE_GPU),
        FireStarterSetting(FIRESTARTER_EVOLVE_NEW),
        FireStarterSetting(FIRESTARTER_EVOLVE_SINSIM),
        FireStarterSetting(FIRESTARTER_SINSIM),
        FireStarterSetting(FIRESTARTER_SPEED_TEST),
        FireStarterSetting(FIRESTARTER_OPTIMIZE),
        FireStarterSetting(FIRESTARTER_SOLUTION)
    };

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
