#pragma once
#include "FireStarterTarget.h"

#define FIRESTARTER_INSTRUCTIONS    32          // Code instructions
#define FIRESTARTER_REGISTERS       30          // Data maximum registers
#define FIRESTARTER_VARIATIONS      1           // Target function variations
#define FIRESTARTER_VARIATION       0           // Target function starting variaton

#define MONEYMAKER_VARIATION        360         // Variation modulo for the stock data start offset
#define MONEYMAKER_WARMUP           16          // Days of stock used for warmup prior to trading
#define MONEYMAKER_TRADING          120         // Days used for stock trading
#define MONEYMAKER_HISTORY          (MONEYMAKER_VARIATION + MONEYMAKER_WARMUP + MONEYMAKER_TRADING)   // Days of stock history data
#define MONEYMAKER_STOCKS           8           // Stocks with history data
#define MONEYMAKER_SESSIONS         8           // Number of trading sessions
#define MONEYMAKER_FUNDS            1000.0f     // Starting trading funds
#define MONEYMAKER_ANUALIZED        1           // Set to 1 for annualized trading returns
#define MONEYMAKER_COMBINED         1           // Set to 1 to generate combined data for all stocks

#define FIRESTARTER_TARGET          0.000001f   // Target precision to stop processing

#define FIRESTARTER_MULTIPROCESS    0           // Use multi-processing to compile each generation.
#define FIRESTARTER_GENERATE_GPU    0           // Generate the settings and code using the GPU.
#define FIRESTARTER_SAVE_BESTSTATE  1           // Save the best state.
#define FIRESTARTER_SAVE_BESTCODE   0           // Save Optimizer.cu with the best evolved code.
#define FIRESTARTER_AUTO_QUIT       1           // Automatically exit the app after completing the work.

#define FIRESTARTER_EVOLVE_RESULTS  0           // Copy all of the evolve and optimize data to the host.
#define FIRESTARTER_EVOLVE_RANDOM   1           // Number of random states to add each generation.

#define FIRESTARTER_FIRSTLIGHT      0           // Use the original instructions from FireStarter First Light.
#define FIRESTARTER_MADD            0           // Use only non-random multiply-add instructions.
#define FIRESTARTER_OLD_EVOLVE_CPU  0           // The old GPU evolution instruction set

#define FIRESTARTER_SM_COUNT_1070M  16          // GTX 1070 Mobile
#define FIRESTARTER_SM_COUNT_1080TI 28          // GTX 1080 Ti
#define FIRESTARTER_SM_COUNT_2080TI 68          // RTX 2080 Ti
#define FIRESTARTER_SM_COUNT_3090   82          // RTX 3090
#define FIRESTARTER_SM_COUNT_4090M  76          // RTX 4090 Mobile
#define FIRESTARTER_SM_COUNT_4090   128         // RTX 4090
#define FIRESTARTER_SM_COUNT_5090   170         // RTX 5090

#define FIRESTARTER_SM_WARPS_1070M  64          // GTX 1080 Ti
#define FIRESTARTER_SM_WARPS_1080TI 64          // GTX 1080 Ti
#define FIRESTARTER_SM_WARPS_2080TI 32          // RTX 2080 Ti
#define FIRESTARTER_SM_WARPS_3090   48          // RTX 3090
#define FIRESTARTER_SM_WARPS_4090M  48          // RTX 4090 Mobile
#define FIRESTARTER_SM_WARPS_4090   48          // RTX 4090
#define FIRESTARTER_SM_WARPS_5090   64          // RTX 5090

#define FIRESTARTER_WARP_THREADS    32          // Threads per warp (CUDA hardware constant)
#define FIRESTARTER_BLOCK_THREADS   64         // Threads per block (threadIdx.x) (max is 1024 on all consumer GPUs for the past decade).

//#define FIRESTARTER_POPULATION      8192 * FIRESTARTER_WARP_THREADS = 262,144
//#define FIRESTARTER_POPULATION      FIRESTARTER_SM_COUNT_4090 * FIRESTARTER_SM_WARPS_4090 * FIRESTARTER_WARP_THREADS = 
#define FIRESTARTER_POPULATION      FIRESTARTER_SM_COUNT_5090 * FIRESTARTER_SM_WARPS_5090 * FIRESTARTER_WARP_THREADS // Full occupancy = 348,160

#define FIRESTARTER_PASSES          512         // Evolve or optimize passes
#define FIRESTARTER_ITERATIONS      64          // Data evolution iterations
#define FIRESTARTER_SAMPLES         15          // Samples per iteration
#define FIRESTARTER_CANDIDATES      16          // Optimize result candidates to search for better results
#define FIRESTARTER_SINSIM_WARMUP   256         // Sinsim samples to skip during warm up
#define FIRESTARTER_PRECISION       256         // Tests required to accurately determine precision

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
#define FIRESTARTER_SELECT          2           // Evolve on the CPU. Select best variation on the GPU.
#define FIRESTARTER_EVOLVE_CPU      3           // CPU evolution used to generate actual results.
#define FIRESTARTER_EVOLVE_GPU      4           // GPU evolution used to find faster algorithms.
#define FIRESTARTER_EVOLVE_NEW      5           // GPU new evolution.
#define FIRESTARTER_EVOLVE_SINSIM   6           // SinSim evolution.
#define FIRESTARTER_SINSIM          7           // SinSim mini neural net algorithm for comparison.
#define FIRESTARTER_MONEYMAKER      8           // GPU MoneyMaker evolved share price prediction.
#define FIRESTARTER_SPEED_TEST      9           // Speed testing for variations of GPU evolution.
#define FIRESTARTER_OPTIMIZE        10          // Optimize a previously CPU evolved state.
#define FIRESTARTER_SOLUTION        11          // Execute or validate the most recently evolved best state.
#define FIRESTARTER_MODES           12          // Number of modes
#define FIRESTARTER_MODE            FIRESTARTER_MONEYMAKER

#define FIRESTARTER_RANDOM_STREAMS              8
#define FIRESTARTER_RANDOM_UNITS                1
#define FIRESTARTER_RANDOM_STATES               1
#define FIRESTARTER_RANDOM_GENERATIONS          0
#define FIRESTARTER_RANDOM_POPULATION           FIRESTARTER_POPULATION
#define FIRESTARTER_RANDOM_PASSES               FIRESTARTER_PASSES
#define FIRESTARTER_RANDOM_ITERATIONS           FIRESTARTER_ITERATIONS
#define FIRESTARTER_RANDOM_SAMPLES              FIRESTARTER_SAMPLES
#define FIRESTARTER_RANDOM_OPTIMIZE             0
#define FIRESTARTER_RANDOM_TESTS                11000
#define FIRESTARTER_RANDOM_TARGET               FIRESTARTER_TARGET

#define FIRESTARTER_EVOLVE_SELECT_STREAMS       1
#define FIRESTARTER_EVOLVE_SELECT_UNITS         8
#define FIRESTARTER_EVOLVE_SELECT_STATES        16
#define FIRESTARTER_EVOLVE_SELECT_GENERATIONS   0
#define FIRESTARTER_EVOLVE_SELECT_POPULATION    32768
#define FIRESTARTER_EVOLVE_SELECT_PASSES        256
#define FIRESTARTER_EVOLVE_SELECT_ITERATIONS    FIRESTARTER_ITERATIONS
#define FIRESTARTER_EVOLVE_SELECT_SAMPLES       FIRESTARTER_SAMPLES
#define FIRESTARTER_EVOLVE_SELECT_OPTIMIZE      0
#define FIRESTARTER_EVOLVE_SELECT_TESTS         16
#define FIRESTARTER_EVOLVE_SELECT_TARGET        FIRESTARTER_TARGET

#define FIRESTARTER_EVOLVE_CPU_STREAMS          1
#define FIRESTARTER_EVOLVE_CPU_UNITS            8
#define FIRESTARTER_EVOLVE_CPU_STATES           16
#define FIRESTARTER_EVOLVE_CPU_GENERATIONS      0
#define FIRESTARTER_EVOLVE_CPU_POPULATION       FIRESTARTER_POPULATION
#define FIRESTARTER_EVOLVE_CPU_PASSES           FIRESTARTER_PASSES
#define FIRESTARTER_EVOLVE_CPU_ITERATIONS       FIRESTARTER_ITERATIONS
#define FIRESTARTER_EVOLVE_CPU_SAMPLES          FIRESTARTER_SAMPLES
#define FIRESTARTER_EVOLVE_CPU_OPTIMIZE         1
#define FIRESTARTER_EVOLVE_CPU_TESTS            16
#define FIRESTARTER_EVOLVE_CPU_TARGET           FIRESTARTER_TARGET

#if FIRESTARTER_VARIATIONS == 1
#define FIRESTARTER_EVOLVE_GPU_STREAMS          1
#define FIRESTARTER_EVOLVE_GPU_UNITS            1
#define FIRESTARTER_EVOLVE_GPU_STATES           1
#define FIRESTARTER_EVOLVE_GPU_GENERATIONS      0
#define FIRESTARTER_EVOLVE_GPU_POPULATION       32768
#define FIRESTARTER_EVOLVE_GPU_PASSES           256
#define FIRESTARTER_EVOLVE_GPU_ITERATIONS       FIRESTARTER_ITERATIONS
#define FIRESTARTER_EVOLVE_GPU_SAMPLES          FIRESTARTER_SAMPLES
#define FIRESTARTER_EVOLVE_GPU_OPTIMIZE         1
#define FIRESTARTER_EVOLVE_GPU_TESTS            FIRESTARTER_TESTS
#define FIRESTARTER_EVOLVE_GPU_TARGET           FIRESTARTER_TARGET
#else
#define FIRESTARTER_EVOLVE_GPU_STREAMS          1
#define FIRESTARTER_EVOLVE_GPU_UNITS            1
#define FIRESTARTER_EVOLVE_GPU_STATES           1
#define FIRESTARTER_EVOLVE_GPU_GENERATIONS      0
#define FIRESTARTER_EVOLVE_GPU_POPULATION       32768
#define FIRESTARTER_EVOLVE_GPU_PASSES           256
#define FIRESTARTER_EVOLVE_GPU_ITERATIONS       FIRESTARTER_ITERATIONS
#define FIRESTARTER_EVOLVE_GPU_SAMPLES          FIRESTARTER_SAMPLES
#define FIRESTARTER_EVOLVE_GPU_OPTIMIZE         1
#define FIRESTARTER_EVOLVE_GPU_TESTS            FIRESTARTER_TESTS
#define FIRESTARTER_EVOLVE_GPU_TARGET           FIRESTARTER_TARGET
#endif

#define FIRESTARTER_EVOLVE_NEW_STREAMS          1
#define FIRESTARTER_EVOLVE_NEW_UNITS            1
#define FIRESTARTER_EVOLVE_NEW_STATES           1
#define FIRESTARTER_EVOLVE_NEW_GENERATIONS      0
#define FIRESTARTER_EVOLVE_NEW_POPULATION       FIRESTARTER_POPULATION
#define FIRESTARTER_EVOLVE_NEW_PASSES           256
#define FIRESTARTER_EVOLVE_NEW_ITERATIONS       FIRESTARTER_ITERATIONS
#define FIRESTARTER_EVOLVE_NEW_SAMPLES          FIRESTARTER_SAMPLES
#define FIRESTARTER_EVOLVE_NEW_OPTIMIZE         1
#define FIRESTARTER_EVOLVE_NEW_TESTS            FIRESTARTER_TESTS
#define FIRESTARTER_EVOLVE_NEW_TARGET           FIRESTARTER_TARGET

#define FIRESTARTER_EVOLVE_SINSIM_STREAMS       1
#define FIRESTARTER_EVOLVE_SINSIM_UNITS         1
#define FIRESTARTER_EVOLVE_SINSIM_STATES        1
#define FIRESTARTER_EVOLVE_SINSIM_GENERATIONS   1000
#define FIRESTARTER_EVOLVE_SINSIM_POPULATION    65536
#define FIRESTARTER_EVOLVE_SINSIM_PASSES        1
#define FIRESTARTER_EVOLVE_SINSIM_ITERATIONS    16
#define FIRESTARTER_EVOLVE_SINSIM_SAMPLES       4096
#define FIRESTARTER_EVOLVE_SINSIM_OPTIMIZE      1
#define FIRESTARTER_EVOLVE_SINSIM_TESTS         FIRESTARTER_TESTS
#define FIRESTARTER_EVOLVE_SINSIM_TARGET        FIRESTARTER_TARGET

#define FIRESTARTER_SINSIM_STREAMS              1
#define FIRESTARTER_SINSIM_UNITS                1
#define FIRESTARTER_SINSIM_STATES               1
#define FIRESTARTER_SINSIM_GENERATIONS          1000
#define FIRESTARTER_SINSIM_POPULATION           65536
#define FIRESTARTER_SINSIM_PASSES               1
#define FIRESTARTER_SINSIM_ITERATIONS           16
#define FIRESTARTER_SINSIM_SAMPLES              4096
#define FIRESTARTER_SINSIM_OPTIMIZE             1
#define FIRESTARTER_SINSIM_TESTS                FIRESTARTER_TESTS
#define FIRESTARTER_SINSIM_TARGET               FIRESTARTER_TARGET

#define FIRESTARTER_MONEYMAKER_STREAMS          1
#define FIRESTARTER_MONEYMAKER_UNITS            1
#define FIRESTARTER_MONEYMAKER_STATES           1
#define FIRESTARTER_MONEYMAKER_GENERATIONS      1
#define FIRESTARTER_MONEYMAKER_POPULATION       FIRESTARTER_POPULATION
#define FIRESTARTER_MONEYMAKER_PASSES           32
#define FIRESTARTER_MONEYMAKER_ITERATIONS       FIRESTARTER_ITERATIONS
#define FIRESTARTER_MONEYMAKER_SAMPLES          FIRESTARTER_SAMPLES
#define FIRESTARTER_MONEYMAKER_OPTIMIZE         1
#define FIRESTARTER_MONEYMAKER_TESTS            1
#define FIRESTARTER_MONEYMAKER_TARGET           FIRESTARTER_TARGET

#define FIRESTARTER_SPEED_TEST_STREAMS          1
#define FIRESTARTER_SPEED_TEST_UNITS            1
#define FIRESTARTER_SPEED_TEST_STATES           1
#define FIRESTARTER_SPEED_TEST_GENERATIONS      0
#define FIRESTARTER_SPEED_TEST_POPULATION       FIRESTARTER_POPULATION
#define FIRESTARTER_SPEED_TEST_PASSES           FIRESTARTER_PASSES
#define FIRESTARTER_SPEED_TEST_ITERATIONS       FIRESTARTER_ITERATIONS
#define FIRESTARTER_SPEED_TEST_SAMPLES          FIRESTARTER_SAMPLES
#define FIRESTARTER_SPEED_TEST_OPTIMIZE         5
#define FIRESTARTER_SPEED_TEST_TESTS            FIRESTARTER_TESTS
#define FIRESTARTER_SPEED_TEST_TARGET           0.0f

#define FIRESTARTER_OPTIMIZE_STREAMS            1
#define FIRESTARTER_OPTIMIZE_UNITS              1
#define FIRESTARTER_OPTIMIZE_STATES             1
#define FIRESTARTER_OPTIMIZE_GENERATIONS        0
#define FIRESTARTER_OPTIMIZE_POPULATION         FIRESTARTER_POPULATION
#define FIRESTARTER_OPTIMIZE_PASSES             FIRESTARTER_PASSES
#define FIRESTARTER_OPTIMIZE_ITERATIONS         FIRESTARTER_ITERATIONS
#define FIRESTARTER_OPTIMIZE_SAMPLES            FIRESTARTER_SAMPLES
#define FIRESTARTER_OPTIMIZE_OPTIMIZE           1
#define FIRESTARTER_OPTIMIZE_TESTS              FIRESTARTER_TESTS
#define FIRESTARTER_OPTIMIZE_TARGET             FIRESTARTER_TARGET

#if FIRESTARTER_FIRSTLIGHT
// Complex program generation.
typedef enum : unsigned short {
#if FIRESTARTER_MADD
    Operation_data_multiply, // n = data[d] *= n;
    Operation_data_add       // n = data[d] += n;
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
    Operation_data_multiply, // n = data[d] *= n;
    Operation_data_add       // n = data[d] += n;
#else
    Operation_store,    // data[d] = n;
//  Operation_square,   // n *= n;
    Operation_multiply, // n *= data[d];
//  Operation_divide,   // n /= data[d];
    Operation_add,      // n += data[d];
//  Operation_subtract, // n -= data[d];
//  Operation_min       // n = MIN(n, data[d]);
//  Operation_max,      // n = MAX(n, data[d]);
#endif
};
#elif FIRESTARTER_MODE == FIRESTARTER_MONEYMAKER
typedef enum : unsigned short {
    Operation_add,      // n += data[d];
    Operation_multiply, // n *= data[d];
    Operation_store,    // data[d] = n;
} FireStarterOpcode;

const FireStarterOpcode fireStarterOpcodes[] = {
    Operation_add,
    Operation_multiply,
    Operation_store
};
#else
// Simple accumulator multiply or add instructions.
typedef enum : unsigned short {
    Operation_data_multiply,
    Operation_data_add
} FireStarterOpcode;

#if FIRESTARTER_MADD
// Note: Not used sice MADD has no random instructions.
const FireStarterOpcode fireStarterOpcodes[] = {
    Operation_data_multiply,
    Operation_data_add
};
#else
#if FIRESTARTER_OLD_EVOLVE_CPU
const FireStarterOpcode fireStarterOpcodes[] = {
    Operation_data_multiply,
    Operation_data_multiply,
    Operation_data_multiply,
    Operation_data_add
};
#else
const FireStarterOpcode fireStarterOpcodes[] = {
    Operation_data_multiply,
    Operation_data_multiply,
    Operation_data_add
};
#endif
#endif
#endif

#define FIRESTARTER_OPCODES (sizeof(fireStarterOpcodes) / sizeof(FireStarterOpcode))

class FireStarterSetting {
public:
    unsigned int m_instructions =   FIRESTARTER_INSTRUCTIONS;
    unsigned int m_registers =      FIRESTARTER_REGISTERS;
    unsigned int m_opcodes =        FIRESTARTER_OPCODES;
    unsigned int m_stocks =         MONEYMAKER_STOCKS;
    unsigned int m_sessions =       MONEYMAKER_SESSIONS;
    unsigned int m_history =        MONEYMAKER_HISTORY;
    unsigned int m_variation =      MONEYMAKER_VARIATION;
    unsigned int m_warmup =         MONEYMAKER_WARMUP;
    unsigned int m_trading =        MONEYMAKER_TRADING;
    float        m_funds =          MONEYMAKER_FUNDS;

    float        m_targetMin =      TARGET_MIN;
    float        m_targetMax =      TARGET_MAX;

    float        m_scale =          FIRESTARTER_SCALE;
    float        m_startScale =     FIRESTARTER_START_SCALE;
    float        m_startResult =    FIRESTARTER_START_RESULT;

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
    unsigned int m_optimize =       0;
    unsigned int m_tests =          0;
    float        m_target =         0.0f;

    static inline const char* Mode(unsigned int mode)
    {
        switch (mode) {
            case FIRESTARTER_RANDOM:
                return "FIRESTARTER_RANDOM";
            case FIRESTARTER_SELECT:
                return "FIRESTARTER_SELECT";
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
            case FIRESTARTER_MONEYMAKER:
                return "FIRESTARTER_MONEYMAKER";
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

    static inline const char* EvolveProgramName(unsigned int mode)
    {
        switch (mode) {
            case FIRESTARTER_SELECT:
                return "FireSelect.cu";
            case FIRESTARTER_EVOLVE_GPU:
                return "FireEvolver.cu";
            case FIRESTARTER_EVOLVE_NEW:
                return "FireEvolverNew.cu";
            case FIRESTARTER_EVOLVE_SINSIM:
                return "FireEvolverSinSim.cu";
            case FIRESTARTER_SINSIM:
                return "FireSinSim.cu";
            case FIRESTARTER_MONEYMAKER:
                return "FireMoneyMaker.cu";
            case FIRESTARTER_SPEED_TEST:
                return "FireSpeedTest.cu";
            case FIRESTARTER_OPTIMIZE:
            default:
                return "FireOptimizer.cu";
        }
    } // EvolveProgramName

    inline const char* EvolveProgramName(void) const
    {
        return FireStarterSetting::EvolveProgramName(m_mode);
    } // EvolveProgramName

    static inline const char* OptimizeProgramName(unsigned int mode)
    {
        switch (mode) {
            case FIRESTARTER_SINSIM:
                return "FireSinSim.cu";
            case FIRESTARTER_MONEYMAKER:
                return "FireMoneyOptimizer.cu";
            default:
                return "FireOptimizer.cu";
        }
    } // OptimizeProgramName

    inline const char* OptimizeProgramName(void) const
    {
        return FireStarterSetting::OptimizeProgramName(m_mode);
    } // OptimizeProgramName

    static inline const char* EvolveFunctionName(unsigned int mode)
    {
        switch (mode) {
            case FIRESTARTER_SELECT:
                return "Selecter";
            case FIRESTARTER_EVOLVE_GPU:
                return "Evolver";
            case FIRESTARTER_EVOLVE_NEW:
                return "EvolverNew";
            case FIRESTARTER_EVOLVE_SINSIM:
                return "EvolverSinSim";
            case FIRESTARTER_SINSIM:
                return "SinSim";
            case FIRESTARTER_MONEYMAKER:
                return "MoneyMaker";
            case FIRESTARTER_SPEED_TEST:
                return "SpeedTest";
            case FIRESTARTER_OPTIMIZE:
            default:
                return "Optimizer";
        }
    } // EvolveFunctionName

    inline const char* EvolveFunctionName(void) const
    {
        return EvolveFunctionName(m_mode);
    } // EvolveFunctionName

    static inline const char* EvolveTestName(unsigned int mode)
    {
        return "";
    } // EvolveTestName

    inline const char* EvolveTestName(void) const
    {
        return EvolveTestName(m_mode);
    } // EvolveTestName

    static inline const char* OptimizeFunctionName(unsigned int mode)
    {
        switch (mode) {
        case FIRESTARTER_MONEYMAKER:
            return "MoneyOptimizer";
        default:
            return "Optimizer";
        }
    } // OptimizeFunctionName

    inline const char* OptimizeFunctionName(void) const
    {
        return OptimizeFunctionName(m_mode);
    } // OptimizeFunctionName

    static inline const char* OptimizeTestName(unsigned int mode)
    {
        switch (mode) {
        case FIRESTARTER_MONEYMAKER:
            return "MoneyTester";
        default:
            return "";
        }
    } // OptimizeTestName

    inline const char* OptimizeTestName(void) const
    {
        return OptimizeTestName(m_mode);
    } // OptimizeTestName

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
                m_optimize =    FIRESTARTER_RANDOM_OPTIMIZE;
                m_tests =       FIRESTARTER_RANDOM_TESTS;
                m_target =      FIRESTARTER_RANDOM_TARGET;
                break;

            case FIRESTARTER_SELECT:
                m_streams =     FIRESTARTER_EVOLVE_SELECT_STREAMS;
                m_units =       FIRESTARTER_EVOLVE_SELECT_UNITS;
                m_states =      FIRESTARTER_EVOLVE_SELECT_STATES;
                m_generations = FIRESTARTER_EVOLVE_SELECT_GENERATIONS;
                m_population =  FIRESTARTER_EVOLVE_SELECT_POPULATION;
                m_passes =      FIRESTARTER_EVOLVE_SELECT_PASSES;
                m_iterations =  FIRESTARTER_EVOLVE_SELECT_ITERATIONS;
                m_samples =     FIRESTARTER_EVOLVE_SELECT_SAMPLES;
                m_optimize =    FIRESTARTER_EVOLVE_SELECT_OPTIMIZE;
                m_tests =       FIRESTARTER_EVOLVE_SELECT_TESTS;
                m_target =      FIRESTARTER_EVOLVE_SELECT_TARGET;
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
                m_optimize =    FIRESTARTER_SINSIM_OPTIMIZE;
                m_tests =       FIRESTARTER_SINSIM_TESTS;
                m_target =      FIRESTARTER_SINSIM_TARGET;
                break;

            case FIRESTARTER_MONEYMAKER:
                m_streams =     FIRESTARTER_MONEYMAKER_STREAMS;
                m_units =       FIRESTARTER_MONEYMAKER_UNITS;
                m_states =      FIRESTARTER_MONEYMAKER_STATES;
                m_generations = FIRESTARTER_MONEYMAKER_GENERATIONS;
                m_population =  FIRESTARTER_MONEYMAKER_POPULATION;
                m_passes =      FIRESTARTER_MONEYMAKER_PASSES;
                m_iterations =  FIRESTARTER_MONEYMAKER_ITERATIONS;
                m_samples =     FIRESTARTER_MONEYMAKER_SAMPLES;
                m_optimize =    FIRESTARTER_MONEYMAKER_OPTIMIZE;
                m_tests =       FIRESTARTER_MONEYMAKER_TESTS;
                m_target =      FIRESTARTER_MONEYMAKER_TARGET;
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
        FireStarterSetting(FIRESTARTER_SELECT),
        FireStarterSetting(FIRESTARTER_EVOLVE_CPU),
        FireStarterSetting(FIRESTARTER_EVOLVE_GPU),
        FireStarterSetting(FIRESTARTER_EVOLVE_NEW),
        FireStarterSetting(FIRESTARTER_EVOLVE_SINSIM),
        FireStarterSetting(FIRESTARTER_SINSIM),
        FireStarterSetting(FIRESTARTER_MONEYMAKER),
        FireStarterSetting(FIRESTARTER_SPEED_TEST),
        FireStarterSetting(FIRESTARTER_OPTIMIZE),
        FireStarterSetting(FIRESTARTER_SOLUTION)
    };

    inline const FireStarterSetting& GetSettings(unsigned int mode = FIRESTARTER_AUTO) const
    {
        if (mode == FIRESTARTER_AUTO)
            mode = m_mode;
        else if (mode >= FIRESTARTER_MODES)
            mode = FIRESTARTER_SOLUTION;
        return m_settings[mode];
    } // GetSettings

    inline void SetMode(unsigned int mode = FIRESTARTER_AUTO)
    {
        FireStarterSetting& setting = static_cast<FireStarterSetting&>(*this);
        setting = GetSettings(mode);
    } // SetMode

    inline FireStarterSettings(unsigned int mode = FIRESTARTER_AUTO) : FireStarterSetting(mode)
    {
    } // FireStarterSettings
}; // class FireStarterSettings
