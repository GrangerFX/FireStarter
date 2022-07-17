#pragma once

#define FIRESTARTER_INSTRUCTIONS 32
#define FIRESTARTER_REGISTERS    FIRESTARTER_INSTRUCTIONS
#define FIRESTARTER_VARIATIONS   3
#define FIRESTARTER_SAMPLES      15

#define FIRESTARTER_SAMPLE_MIN 0.0f
#define FIRESTARTER_SAMPLE_MAX (2.0f * 3.14159265f)

#define FIRESTARTER_EVOLVE_FACTOR       0.1f
#define FIRESTARTER_EVOLVE_START_FACTOR 4.0f
#define FIRESTARTER_EVOLVE_START_RESULT 10.0f
#define FIRESTARTER_EVOLVE_CANDIDATES   16

#define FIRESTARTER_EVOLVE_INDIVIDUAL   0
#define FIRESTARTER_EVOLVE_BEST         1
#define FIRESTARTER_EVOLVE_RANDOM       2

#define FIRESTARTER_CODE     1
#define FIRESTARTER_UNIT     2
#define FIRESTARTER_PROCESS  3
#define FIRESTARTER_RANDOM   4
#define FIRESTARTER_OPTIMIZE 5
#define FIRESTARTER_SOLUTION 6
#define FIRESTARTER_MODE     FIRESTARTER_UNIT

#define FIRESTARTER_CODE_STATES      1
#define FIRESTARTER_CODE_UNITS       1
#define FIRESTARTER_CODE_PROCESS     0
#define FIRESTARTER_CODE_POPULATION  4352
#define FIRESTARTER_CODE_ITERATIONS  512
#define FIRESTARTER_CODE_GENERATIONS 10
#define FIRESTARTER_CODE_PRECISION   256
#define FIRESTARTER_CODE_EVOLVE      FIRESTARTER_EVOLVE_BEST
#define FIRESTARTER_CODE_ATTEMPTS    32
#define FIRESTARTER_CODE_SEED        0

#define FIRESTARTER_UNIT_STATES      1
#define FIRESTARTER_UNIT_UNITS       1
#define FIRESTARTER_UNIT_PROCESS     0
#define FIRESTARTER_UNIT_POPULATION  4352 * 16
#define FIRESTARTER_UNIT_ITERATIONS  256
#define FIRESTARTER_UNIT_GENERATIONS 100
#define FIRESTARTER_UNIT_PRECISION   256
#define FIRESTARTER_UNIT_EVOLVE      FIRESTARTER_EVOLVE_BEST
#define FIRESTARTER_UNIT_ATTEMPTS    32
//#define FIRESTARTER_UNIT_SEED        8337
#define FIRESTARTER_UNIT_SEED        0

#define FIRESTARTER_PROCESS_STATES      4
#define FIRESTARTER_PROCESS_UNITS       4
#define FIRESTARTER_PROCESS_PROCESS     1
#define FIRESTARTER_PROCESS_POPULATION  4352 * 16
#define FIRESTARTER_PROCESS_ITERATIONS  256
#define FIRESTARTER_PROCESS_GENERATIONS 100
#define FIRESTARTER_PROCESS_PRECISION   256
#define FIRESTARTER_PROCESS_EVOLVE      FIRESTARTER_EVOLVE_BEST
#define FIRESTARTER_PROCESS_ATTEMPTS    32
#define FIRESTARTER_PROCESS_SEED        8337

#define FIRESTARTER_RANDOM_STATES      4
#define FIRESTARTER_RANDOM_UNITS       8
#define FIRESTARTER_RANDOM_PROCESS     1
#define FIRESTARTER_RANDOM_POPULATION  4352 * 4
#define FIRESTARTER_RANDOM_ITERATIONS  128
#define FIRESTARTER_RANDOM_GENERATIONS 100
#define FIRESTARTER_RANDOM_PRECISION   0
#define FIRESTARTER_RANDOM_EVOLVE      FIRESTARTER_EVOLVE_BEST
#define FIRESTARTER_RANDOM_ATTEMPTS    10000
#define FIRESTARTER_RANDOM_SEED        0

#define FIRESTARTER_OPTIMIZE_STATES      1
#define FIRESTARTER_OPTIMIZE_UNITS       1
#define FIRESTARTER_OPTIMIZE_PROCESS     0
#define FIRESTARTER_OPTIMIZE_POPULATION  4352 * 16
#define FIRESTARTER_OPTIMIZE_ITERATIONS  512
#define FIRESTARTER_OPTIMIZE_GENERATIONS 100
#define FIRESTARTER_OPTIMIZE_PRECISION   256
#define FIRESTARTER_OPTIMIZE_EVOLVE      FIRESTARTER_EVOLVE_BEST
#define FIRESTARTER_OPTIMIZE_ATTEMPTS    32
#define FIRESTARTER_OPTIMIZE_SEED        0

#define FIRESTARTER_MULTIPLY_ADD     0
#define FIRESTARTER_MULTIPLY_ADD_ABS 1
#define FIRESTARTER_PROGRAM_MODE     FIRESTARTER_MULTIPLY_ADD

#if FIRESTARTER_PROGRAM_MODE == FIRESTARTER_MULTIPLY_ADD
#define FIRESTARTER_OPCODES 2
#endif
#if FIRESTARTER_PROGRAM_MODE == FIRESTARTER_MULTIPLY_ADD_ABS
#define FIRESTARTER_OPCODES 13
#endif

class FireStarterSettings {
public:
    unsigned int m_instructions;
    unsigned int m_registers;
    unsigned int m_opcodes;
    unsigned int m_variations;
    unsigned int m_samples;

    float m_sampleMin;
    float m_sampleMax;
    float m_evolveFactor;
    float m_evolveStartFactor;
    float m_evolveStartResult;
    unsigned int m_evolveCandidates;

    unsigned int m_mode;
    unsigned int m_states;
    unsigned int m_units;
    unsigned int m_process;
    unsigned int m_population;
    unsigned int m_iterations;
    unsigned int m_generations;
    unsigned int m_precision;
    unsigned int m_evolve;
    unsigned int m_attempts;
    unsigned int m_seed;

    inline const char* Mode(void) const
    {
        switch (m_mode) {
            case FIRESTARTER_CODE:
                return "FIRESTARTER_CODE";
            case FIRESTARTER_UNIT:
                return "FIRESTARTER_UNIT";
            case FIRESTARTER_PROCESS:
                return "FIRESTARTER_PROCESS";
            case FIRESTARTER_RANDOM:
                return "FIRESTARTER_RANDOM";
            case FIRESTARTER_OPTIMIZE:
                return "FIRESTARTER_OPTIMIZE";
            case FIRESTARTER_SOLUTION:
                return "FIRESTARTER_SOLUTION";
            default:
                return "0";
        }
    } // Mode

    inline FireStarterSettings(unsigned int evolveMode = 0)
    {
        m_instructions = FIRESTARTER_INSTRUCTIONS;
        m_registers = FIRESTARTER_REGISTERS;
        m_opcodes = FIRESTARTER_OPCODES;
        m_variations = FIRESTARTER_VARIATIONS;
        m_samples = FIRESTARTER_SAMPLES;

        m_sampleMin = FIRESTARTER_SAMPLE_MIN;
        m_sampleMax = FIRESTARTER_SAMPLE_MAX;
        m_evolveFactor = FIRESTARTER_EVOLVE_FACTOR;
        m_evolveStartFactor = FIRESTARTER_EVOLVE_START_FACTOR;
        m_evolveStartResult = FIRESTARTER_EVOLVE_START_RESULT;
        m_evolveCandidates = FIRESTARTER_EVOLVE_CANDIDATES;

        m_mode = evolveMode ? evolveMode : FIRESTARTER_MODE;
        switch (m_mode) {
            case FIRESTARTER_CODE:
                m_states =      FIRESTARTER_CODE_STATES;
                m_units =       FIRESTARTER_CODE_UNITS;
                m_process =     FIRESTARTER_CODE_PROCESS;
                m_population =  FIRESTARTER_CODE_POPULATION;
                m_iterations =  FIRESTARTER_CODE_ITERATIONS;
                m_generations = FIRESTARTER_CODE_GENERATIONS;
                m_precision =   FIRESTARTER_CODE_PRECISION;
                m_evolve =      FIRESTARTER_CODE_EVOLVE;
                m_attempts =    FIRESTARTER_CODE_ATTEMPTS;
                m_seed =        FIRESTARTER_CODE_SEED;
                break;
            case FIRESTARTER_UNIT:
                m_states =      FIRESTARTER_UNIT_STATES;
                m_units =       FIRESTARTER_UNIT_UNITS;
                m_process =     FIRESTARTER_UNIT_PROCESS;
                m_population =  FIRESTARTER_UNIT_POPULATION;
                m_iterations =  FIRESTARTER_UNIT_ITERATIONS;
                m_generations = FIRESTARTER_UNIT_GENERATIONS;
                m_precision =   FIRESTARTER_UNIT_PRECISION;
                m_evolve =      FIRESTARTER_UNIT_EVOLVE;
                m_attempts =    FIRESTARTER_UNIT_ATTEMPTS;
                m_seed =        FIRESTARTER_UNIT_SEED;
                break;
            case FIRESTARTER_OPTIMIZE:
                m_states =      FIRESTARTER_OPTIMIZE_STATES;
                m_units =       FIRESTARTER_OPTIMIZE_UNITS;
                m_process =     FIRESTARTER_OPTIMIZE_PROCESS;
                m_population =  FIRESTARTER_OPTIMIZE_POPULATION;
                m_iterations =  FIRESTARTER_OPTIMIZE_ITERATIONS;
                m_generations = FIRESTARTER_OPTIMIZE_GENERATIONS;
                m_precision =   FIRESTARTER_OPTIMIZE_PRECISION;
                m_evolve =      FIRESTARTER_OPTIMIZE_EVOLVE;
                m_attempts =    FIRESTARTER_OPTIMIZE_ATTEMPTS;
                m_seed =        FIRESTARTER_OPTIMIZE_SEED;
                break;
            default:
                m_states = 0;
                m_units = 0;
                m_process = 0;
                m_population = 0;
                m_iterations = 0;
                m_generations = 0;
                m_precision = 0;
                m_evolve = 0;
                m_attempts = 0;
                m_seed = 0;
                break;
        }
    } // FireStarterSettings
}; // class FireStarterSettings