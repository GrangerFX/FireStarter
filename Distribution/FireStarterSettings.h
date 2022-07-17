#pragma once

#define FIRESTARTER_INSTRUCTIONS 32
#define FIRESTARTER_REGISTERS FIRESTARTER_INSTRUCTIONS
#define FIRESTARTER_VARIATIONS 3
#define FIRESTARTER_SAMPLES 15

#define FIRESTARTER_SAMPLE_MIN 0.0f
#define FIRESTARTER_SAMPLE_MAX (2.0f * 3.14159265f)

#define FIRESTARTER_EVOLVE_FACTOR 0.1f
#define FIRESTARTER_EVOLVE_START_FACTOR 4.0f
#define FIRESTARTER_EVOLVE_START_RESULT 10.0f
#define FIRESTARTER_EVOLVE_CANDIDATES 16
#define FIRESTARTER_EVOLVE_MUTATION 1

#define FIRESTARTER_CODE     1
#define FIRESTARTER_UNIT     2
#define FIRESTARTER_PROCESS  3
#define FIRESTARTER_RANDOM   4
#define FIRESTARTER_PATTERN  5
#define FIRESTARTER_OPTIMIZE 6
#define FIRESTARTER_SOLUTION 7
#define FIRESTARTER_MODE     FIRESTARTER_UNIT

#define CODE_STATES 1
#define CODE_UNITS 1
#define CODE_PROCESS 0
#define CODE_POPULATION 4352
#define CODE_ITERATIONS 512
#define CODE_GENERATIONS 10
#define CODE_PRECISION 256
#define CODE_ATTEMPTS 32
#define CODE_SEED 0

#define UNIT_STATES 1
#define UNIT_UNITS 1
#define UNIT_PROCESS 0
#define UNIT_POPULATION 4352 * 16
#define UNIT_ITERATIONS 256
#define UNIT_GENERATIONS 100
#define UNIT_PRECISION 256
#define UNIT_ATTEMPTS 32
//#define UNIT_SEED 8337
#define UNIT_SEED 0

#define PROCESS_STATES 4
#define PROCESS_UNITS 4
#define PROCESS_PROCESS 1
#define PROCESS_POPULATION 4352 * 16
#define PROCESS_ITERATIONS 256
#define PROCESS_GENERATIONS 100
#define PROCESS_PRECISION 256
#define PROCESS_ATTEMPTS 32
#define PROCESS_SEED 8337

#define RANDOM_STATES 4
#define RANDOM_UNITS 8
#define RANDOM_PROCESS 1
#define RANDOM_POPULATION 4352 * 4
#define RANDOM_ITERATIONS 128
#define RANDOM_GENERATIONS 100
#define RANDOM_PRECISION 0
#define RANDOM_ATTEMPTS 10000
#define RANDOM_SEED 0

#define PATTERN_STATES 4
#define PATTERN_UNITS 4
#define PATTERN_PROCESS 1
#define PATTERN_POPULATION 4352 * 4
#define PATTERN_ITERATIONS 128
#define PATTERN_GENERATIONS 100
#define PATTERN_PRECISION 0
#define PATTERN_ATTEMPTS 10000
#define PATTERN_SEED 0

#define OPTIMIZE_STATES 1
#define OPTIMIZE_UNITS 1
#define OPTIMIZE_PROCESS 0
#define OPTIMIZE_POPULATION 4352 * 16
#define OPTIMIZE_ITERATIONS 512
#define OPTIMIZE_GENERATIONS 100
#define OPTIMIZE_PRECISION 256
#define OPTIMIZE_ATTEMPTS 32
#define OPTIMIZE_SEED 0

#define PROGRAM_MULTIPLY_ADD 0
#define PROGRAM_MULTIPLY_ADD_ABS 1
#define PROGRAM_MODE PROGRAM_MULTIPLY_ADD

#if PROGRAM_MODE == PROGRAM_MULTIPLY_ADD
#define FIRESTARTER_OPCODES 2
#endif
#if PROGRAM_MODE == PROGRAM_MULTIPLY_ADD_ABS
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

    unsigned int m_evolveMode;
    unsigned int m_evolveStates;
    unsigned int m_evolveUnits;
    unsigned int m_evolveProcess;
    unsigned int m_evolvePopulation;
    unsigned int m_evolveIterations;
    unsigned int m_evolveGenerations;
    unsigned int m_evolvePrecision;
    unsigned int m_evolveAttempts;
    unsigned int m_evolveSeed;

    inline const char* Mode(void) const
    {
        switch (m_evolveMode) {
            case FIRESTARTER_CODE:
                return "FIRESTARTER_CODE";
            case FIRESTARTER_UNIT:
                return "FIRESTARTER_UNIT";
            case FIRESTARTER_PROCESS:
                return "FIRESTARTER_PROCESS";
            case FIRESTARTER_RANDOM:
                return "FIRESTARTER_RANDOM";
            case FIRESTARTER_PATTERN:
                return "FIRESTARTER_PATTERN";
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

        m_evolveMode = evolveMode ? evolveMode : FIRESTARTER_MODE;
        switch (m_evolveMode) {
            case FIRESTARTER_CODE:
                m_evolveStates = CODE_STATES;
                m_evolveUnits = CODE_UNITS;
                m_evolveProcess = CODE_PROCESS;
                m_evolvePopulation = CODE_POPULATION;
                m_evolveIterations = CODE_ITERATIONS;
                m_evolveGenerations = CODE_GENERATIONS;
                m_evolvePrecision = CODE_PRECISION;
                m_evolveAttempts = CODE_ATTEMPTS;
                m_evolveSeed = CODE_SEED;
                break;
            case FIRESTARTER_UNIT:
                m_evolveStates = UNIT_STATES;
                m_evolveUnits = UNIT_UNITS;
                m_evolveProcess = UNIT_PROCESS;
                m_evolvePopulation = UNIT_POPULATION;
                m_evolveIterations = UNIT_ITERATIONS;
                m_evolveGenerations = UNIT_GENERATIONS;
                m_evolvePrecision = UNIT_PRECISION;
                m_evolveAttempts = UNIT_ATTEMPTS;
                m_evolveSeed = UNIT_SEED;
                break;
            case FIRESTARTER_RANDOM:
                m_evolveStates = RANDOM_STATES;
                m_evolveUnits = RANDOM_UNITS;
                m_evolveProcess = RANDOM_PROCESS;
                m_evolvePopulation = RANDOM_POPULATION;
                m_evolveIterations = RANDOM_ITERATIONS;
                m_evolveGenerations = RANDOM_GENERATIONS;
                m_evolvePrecision = RANDOM_PRECISION;
                m_evolveAttempts = RANDOM_ATTEMPTS;
                m_evolveSeed = RANDOM_SEED;
                break;
            case FIRESTARTER_PATTERN:
                m_evolveStates = PATTERN_STATES;
                m_evolveUnits = PATTERN_UNITS;
                m_evolveProcess = PATTERN_PROCESS;
                m_evolvePopulation = PATTERN_POPULATION;
                m_evolveIterations = PATTERN_ITERATIONS;
                m_evolveGenerations = PATTERN_GENERATIONS;
                m_evolvePrecision = PATTERN_PRECISION;
                m_evolveAttempts = PATTERN_ATTEMPTS;
                m_evolveSeed = PATTERN_SEED;
                break;
            case FIRESTARTER_OPTIMIZE:
                m_evolveStates = OPTIMIZE_STATES;
                m_evolveUnits = OPTIMIZE_UNITS;
                m_evolveProcess = OPTIMIZE_PROCESS;
                m_evolvePopulation = OPTIMIZE_POPULATION;
                m_evolveIterations = OPTIMIZE_ITERATIONS;
                m_evolveGenerations = OPTIMIZE_GENERATIONS;
                m_evolvePrecision = OPTIMIZE_PRECISION;
                m_evolveAttempts = OPTIMIZE_ATTEMPTS;
                m_evolveSeed = OPTIMIZE_SEED;
                break;
            default:
                m_evolveStates = 0;
                m_evolveUnits = 0;
                m_evolveProcess = 0;
                m_evolvePopulation = 0;
                m_evolveIterations = 0;
                m_evolveGenerations = 0;
                m_evolvePrecision = 0;
                m_evolveAttempts = 0;
                m_evolveSeed = 0;
                break;
        }
    } // FireStarterSettings
}; // class FireStarterSettings