#pragma once
#include "FireStarterTarget.h"

#define FIRESTARTER_VARIATIONS   3
#define FIRESTARTER_SAMPLES      15
#define FIRESTARTER_INSTRUCTIONS 32
#define FIRESTARTER_REGISTERS    FIRESTARTER_INSTRUCTIONS
#define FIRESTARTER_SECOND_PASS  1

#define FIRESTARTER_EVOLVE_INDIVIDUAL   1
#define FIRESTARTER_EVOLVE_BEST         2
#define FIRESTARTER_EVOLVE_RANDOM       3

#define FIRESTARTER_CODE     1
#define FIRESTARTER_UNIT     2
#define FIRESTARTER_PROCESS  3
#define FIRESTARTER_RANDOM   4
#define FIRESTARTER_OPTIMIZE 5
#define FIRESTARTER_SOLUTION 6
#define FIRESTARTER_MODE     FIRESTARTER_UNIT

#if 0
#define FIRESTARTER_CODE_UNITS        1
#define FIRESTARTER_CODE_PROCESS      0
#define FIRESTARTER_CODE_POPULATION   4352
#define FIRESTARTER_CODE_ITERATIONS   256
#define FIRESTARTER_CODE_CANDIDATES   16
#define FIRESTARTER_CODE_GENERATIONS  5
#define FIRESTARTER_CODE_PRECISION    0
#define FIRESTARTER_CODE_EVOLVE       FIRESTARTER_EVOLVE_BEST
#define FIRESTARTER_CODE_ATTEMPTS     32
#define FIRESTARTER_CODE_SEED         0
#define FIRESTARTER_CODE_SCALE        0.1f
#define FIRESTARTER_CODE_START_SCALE  4.0f
#define FIRESTARTER_CODE_START_RESULT 10.0f
#else
#define FIRESTARTER_CODE_UNITS        1
#define FIRESTARTER_CODE_PROCESS      0
#define FIRESTARTER_CODE_POPULATION   4352
#define FIRESTARTER_CODE_ITERATIONS   256
#define FIRESTARTER_CODE_CANDIDATES   16
#define FIRESTARTER_CODE_GENERATIONS  5
#define FIRESTARTER_CODE_PRECISION    0
#define FIRESTARTER_CODE_EVOLVE       FIRESTARTER_EVOLVE_BEST
#define FIRESTARTER_CODE_ATTEMPTS     32
#define FIRESTARTER_CODE_SEED         1
#define FIRESTARTER_CODE_SCALE        0.1f
#define FIRESTARTER_CODE_START_SCALE  4.0f
#define FIRESTARTER_CODE_START_RESULT 10.0f
#endif

#define FIRESTARTER_UNIT_UNITS        4
#define FIRESTARTER_UNIT_PROCESS      0
#define FIRESTARTER_UNIT_POPULATION   4352 * 16
#define FIRESTARTER_UNIT_ITERATIONS   256
#define FIRESTARTER_UNIT_CANDIDATES   16
#define FIRESTARTER_UNIT_GENERATIONS  100
#define FIRESTARTER_UNIT_PRECISION    256
#define FIRESTARTER_UNIT_EVOLVE       FIRESTARTER_EVOLVE_BEST
#define FIRESTARTER_UNIT_ATTEMPTS     32
#define FIRESTARTER_UNIT_SEED         8337
//#define FIRESTARTER_UNIT_SEED         0
#define FIRESTARTER_UNIT_SCALE        0.1f
#define FIRESTARTER_UNIT_START_SCALE  4.0f
#define FIRESTARTER_UNIT_START_RESULT 10.0f

#define FIRESTARTER_PROCESS_UNITS        16
#define FIRESTARTER_PROCESS_PROCESS      1
#define FIRESTARTER_PROCESS_POPULATION   4352 * 16
#define FIRESTARTER_PROCESS_ITERATIONS   256
#define FIRESTARTER_PROCESS_CANDIDATES   16
#define FIRESTARTER_PROCESS_GENERATIONS  100
#define FIRESTARTER_PROCESS_PRECISION    256
#define FIRESTARTER_PROCESS_EVOLVE       FIRESTARTER_EVOLVE_BEST
#define FIRESTARTER_PROCESS_ATTEMPTS     32
#define FIRESTARTER_PROCESS_SEED         8337
#define FIRESTARTER_PROCESS_SCALE        0.1f
#define FIRESTARTER_PROCESS_START_SCALE  4.0f
#define FIRESTARTER_PROCESS_START_RESULT 10.0f

#define FIRESTARTER_RANDOM_UNITS        32
#define FIRESTARTER_RANDOM_PROCESS      1
#define FIRESTARTER_RANDOM_POPULATION   4352 * 4
#define FIRESTARTER_RANDOM_ITERATIONS   128
#define FIRESTARTER_RANDOM_CANDIDATES   16
#define FIRESTARTER_RANDOM_GENERATIONS  100
#define FIRESTARTER_RANDOM_PRECISION    0
#define FIRESTARTER_RANDOM_EVOLVE       FIRESTARTER_EVOLVE_BEST
#define FIRESTARTER_RANDOM_ATTEMPTS     10000
#define FIRESTARTER_RANDOM_SEED         0
#define FIRESTARTER_RANDOM_SCALE        0.1f
#define FIRESTARTER_RANDOM_START_SCALE  4.0f
#define FIRESTARTER_RANDOM_START_RESULT 10.0f

#define FIRESTARTER_OPTIMIZE_UNITS        1
#define FIRESTARTER_OPTIMIZE_PROCESS      0
#define FIRESTARTER_OPTIMIZE_POPULATION   4352 * 32
#define FIRESTARTER_OPTIMIZE_ITERATIONS   512
#define FIRESTARTER_OPTIMIZE_CANDIDATES   16
#define FIRESTARTER_OPTIMIZE_GENERATIONS  100
#define FIRESTARTER_OPTIMIZE_PRECISION    256
#define FIRESTARTER_OPTIMIZE_EVOLVE       FIRESTARTER_EVOLVE_BEST
#define FIRESTARTER_OPTIMIZE_ATTEMPTS     32
#define FIRESTARTER_OPTIMIZE_SEED         0
#define FIRESTARTER_OPTIMIZE_SCALE        0.1f
#define FIRESTARTER_OPTIMIZE_START_SCALE  4.0f
#define FIRESTARTER_OPTIMIZE_START_RESULT 10.0f

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
    unsigned int m_variations;
    unsigned int m_samples;
    unsigned int m_instructions;
    unsigned int m_registers;
    unsigned int m_opcodes;

    float m_targetMin;
    float m_targetMax;

    unsigned int m_mode;
    unsigned int m_units;
    unsigned int m_process;
    unsigned int m_population;
    unsigned int m_iterations;
    unsigned int m_generations;
    unsigned int m_precision;
    unsigned int m_candidates;
    unsigned int m_evolve;
    unsigned int m_attempts;
    unsigned int m_seed;

    float m_scale;
    float m_startScale;
    float m_startResult;

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

    inline const char* Evolve(void) const
    {
        switch (m_evolve) {
        case FIRESTARTER_EVOLVE_INDIVIDUAL:
            return "FIRESTARTER_EVOLVE_INDIVIDUAL";
        case FIRESTARTER_EVOLVE_BEST:
            return "FIRESTARTER_EVOLVE_BEST";
        case FIRESTARTER_EVOLVE_RANDOM:
            return "FIRESTARTER_EVOLVE_RANDOM";
        default:
            return "0";
        }
    } // Evolve

    inline FireStarterSettings(unsigned int evolveMode = 0)
    {
        m_variations = FIRESTARTER_VARIATIONS;
        m_samples = FIRESTARTER_SAMPLES;
        m_instructions = FIRESTARTER_INSTRUCTIONS;
        m_registers = FIRESTARTER_REGISTERS;
        m_opcodes = FIRESTARTER_OPCODES;

        m_targetMin = TARGET_MIN;
        m_targetMax = TARGET_MAX;

        m_mode = evolveMode ? evolveMode : FIRESTARTER_MODE;
        switch (m_mode) {
            case FIRESTARTER_CODE:
                m_units =       FIRESTARTER_CODE_UNITS;
                m_process =     FIRESTARTER_CODE_PROCESS;
                m_population =  FIRESTARTER_CODE_POPULATION;
                m_iterations =  FIRESTARTER_CODE_ITERATIONS;
                m_candidates =  FIRESTARTER_CODE_CANDIDATES;
                m_generations = FIRESTARTER_CODE_GENERATIONS;
                m_precision =   FIRESTARTER_CODE_PRECISION;
                m_evolve =      FIRESTARTER_CODE_EVOLVE;
                m_attempts =    FIRESTARTER_CODE_ATTEMPTS;
                m_seed =        FIRESTARTER_CODE_SEED;
                m_scale =       FIRESTARTER_CODE_SCALE;
                m_startScale =  FIRESTARTER_CODE_START_SCALE;
                m_startResult = FIRESTARTER_CODE_START_RESULT;
                break;

            case FIRESTARTER_UNIT:
                m_units =       FIRESTARTER_UNIT_UNITS;
                m_process =     FIRESTARTER_UNIT_PROCESS;
                m_population =  FIRESTARTER_UNIT_POPULATION;
                m_iterations =  FIRESTARTER_UNIT_ITERATIONS;
                m_candidates =  FIRESTARTER_UNIT_CANDIDATES;
                m_generations = FIRESTARTER_UNIT_GENERATIONS;
                m_precision =   FIRESTARTER_UNIT_PRECISION;
                m_evolve =      FIRESTARTER_UNIT_EVOLVE;
                m_attempts =    FIRESTARTER_UNIT_ATTEMPTS;
                m_seed =        FIRESTARTER_UNIT_SEED;
                m_scale =       FIRESTARTER_UNIT_SCALE;
                m_startScale =  FIRESTARTER_UNIT_START_SCALE;
                m_startResult = FIRESTARTER_UNIT_START_RESULT;
                break;

            case FIRESTARTER_PROCESS:
                m_units =       FIRESTARTER_PROCESS_UNITS;
                m_process =     FIRESTARTER_PROCESS_PROCESS;
                m_population =  FIRESTARTER_PROCESS_POPULATION;
                m_iterations =  FIRESTARTER_PROCESS_ITERATIONS;
                m_candidates =  FIRESTARTER_PROCESS_CANDIDATES;
                m_generations = FIRESTARTER_PROCESS_GENERATIONS;
                m_precision =   FIRESTARTER_PROCESS_PRECISION;
                m_evolve =      FIRESTARTER_PROCESS_EVOLVE;
                m_attempts =    FIRESTARTER_PROCESS_ATTEMPTS;
                m_seed =        FIRESTARTER_PROCESS_SEED;
                m_scale =       FIRESTARTER_PROCESS_SCALE;
                m_startScale =  FIRESTARTER_PROCESS_START_SCALE;
                m_startResult = FIRESTARTER_PROCESS_START_RESULT;
                break;

            case FIRESTARTER_RANDOM:
                m_units =       FIRESTARTER_RANDOM_UNITS;
                m_process =     FIRESTARTER_RANDOM_PROCESS;
                m_population =  FIRESTARTER_RANDOM_POPULATION;
                m_iterations =  FIRESTARTER_RANDOM_ITERATIONS;
                m_candidates =  FIRESTARTER_RANDOM_CANDIDATES;
                m_generations = FIRESTARTER_RANDOM_GENERATIONS;
                m_precision =   FIRESTARTER_RANDOM_PRECISION;
                m_evolve =      FIRESTARTER_RANDOM_EVOLVE;
                m_attempts =    FIRESTARTER_RANDOM_ATTEMPTS;
                m_seed =        FIRESTARTER_RANDOM_SEED;
                m_scale =       FIRESTARTER_RANDOM_SCALE;
                m_startScale =  FIRESTARTER_RANDOM_START_SCALE;
                m_startResult = FIRESTARTER_RANDOM_START_RESULT;
                break;

            case FIRESTARTER_OPTIMIZE:
                m_units =       FIRESTARTER_OPTIMIZE_UNITS;
                m_process =     FIRESTARTER_OPTIMIZE_PROCESS;
                m_population =  FIRESTARTER_OPTIMIZE_POPULATION;
                m_iterations =  FIRESTARTER_OPTIMIZE_ITERATIONS;
                m_candidates =  FIRESTARTER_OPTIMIZE_CANDIDATES;
                m_generations = FIRESTARTER_OPTIMIZE_GENERATIONS;
                m_precision =   FIRESTARTER_OPTIMIZE_PRECISION;
                m_evolve =      FIRESTARTER_OPTIMIZE_EVOLVE;
                m_attempts =    FIRESTARTER_OPTIMIZE_ATTEMPTS;
                m_seed =        FIRESTARTER_OPTIMIZE_SEED;
                m_scale =       FIRESTARTER_OPTIMIZE_SCALE;
                m_startScale =  FIRESTARTER_OPTIMIZE_START_SCALE;
                m_startResult = FIRESTARTER_OPTIMIZE_START_RESULT;
                break;

            default:
                m_units = 0;
                m_process = 0;
                m_population = 0;
                m_iterations = 0;
                m_candidates = 0;
                m_generations = 0;
                m_precision = 0;
                m_evolve = 0;
                m_attempts = 0;
                m_seed = 0;
                m_scale = 0.0f;
                m_startScale = 0.0f;
                m_startResult = 0.0f;
                break;
        }
    } // FireStarterSettings
}; // class FireStarterSettings