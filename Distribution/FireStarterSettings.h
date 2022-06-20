#pragma once

#define FIRESTARTER_INSTRUCTIONS 32
#define FIRESTARTER_REGISTERS FIRESTARTER_INSTRUCTIONS
#define FIRESTARTER_VARIATIONS 3
#define FIRESTARTER_SAMPLES 15
#define FIRESTARTER_SEED 7263

#define FIRESTARTER_SAMPLE_MIN 0.0f
#define FIRESTARTER_SAMPLE_MAX (2.0f * 3.14159265f)

#define FIRESTARTER_EVOLVE_FACTOR 0.1f
#define FIRESTARTER_EVOLVE_START_FACTOR 4.0f
#define FIRESTARTER_EVOLVE_START_RESULT 10.0f
#define FIRESTARTER_EVOLVE_CANDIDATES 16

#define FIRESTARTER_EVOLVE   1
#define FIRESTARTER_UNIT     2
#define FIRESTARTER_PROCESS  3
#define FIRESTARTER_OPTIMIZE 4
#define FIRESTARTER_SOLUTION 6
#define FIRESTARTER_MODE     FIRESTARTER_PROCESS

#define EVOLVE_UNITS 1
#define EVOLVE_STATES 1
#define EVOLVE_POPULATION 4352
#define EVOLVE_ITERATIONS 512
#define EVOLVE_GENERATIONS 10
#define EVOLVE_PRECISION 256
#define EVOLVE_FAILURES 32

#define UNIT_UNITS 1
#define UNIT_STATES 4
#define UNIT_POPULATION 4352 * 16
#define UNIT_ITERATIONS 256
#define UNIT_GENERATIONS 100
#define UNIT_PRECISION 256
#define UNIT_FAILURES 32

#define PROCESS_UNITS 4
#define PROCESS_STATES 4
#define PROCESS_POPULATION 4352 * 8
#define PROCESS_ITERATIONS 256
#define PROCESS_GENERATIONS 100
#define PROCESS_PRECISION 256
#define PROCESS_FAILURES 32

#define OPTIMIZE_UNITS 1
#define OPTIMIZE_STATES 1
#define OPTIMIZE_POPULATION 4352 * 16
#define OPTIMIZE_ITERATIONS 512
#define OPTIMIZE_GENERATIONS 100
#define OPTIMIZE_PRECISION 256
#define OPTIMIZE_FAILURES 32

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
    unsigned int m_seed;

    float m_sampleMin;
    float m_sampleMax;
    float m_evolveFactor;
    float m_evolveStartFactor;
    float m_evolveStartResult;
    unsigned int m_evolveCandidates;

    unsigned int m_evolveMode;
    unsigned int m_evolveUnits;
    unsigned int m_evolveStates;
    unsigned int m_evolvePopulation;
    unsigned int m_evolveIterations;
    unsigned int m_evolveGenerations;
    unsigned int m_evolvePrecision;
    unsigned int m_evolveFailures;

    inline FireStarterSettings(unsigned int evolveMode = 0)
    {
        m_instructions = FIRESTARTER_INSTRUCTIONS;
        m_registers = FIRESTARTER_REGISTERS;
        m_opcodes = FIRESTARTER_OPCODES;
        m_variations = FIRESTARTER_VARIATIONS;
        m_samples = FIRESTARTER_SAMPLES;
        m_seed = FIRESTARTER_SEED;

        m_sampleMin = FIRESTARTER_SAMPLE_MIN;
        m_sampleMax = FIRESTARTER_SAMPLE_MAX;
        m_evolveFactor = FIRESTARTER_EVOLVE_FACTOR;
        m_evolveStartFactor = FIRESTARTER_EVOLVE_START_FACTOR;
        m_evolveStartResult = FIRESTARTER_EVOLVE_START_RESULT;
        m_evolveCandidates = FIRESTARTER_EVOLVE_CANDIDATES;

        m_evolveMode = evolveMode ? evolveMode : FIRESTARTER_MODE;
        switch (m_evolveMode) {
            case FIRESTARTER_EVOLVE:
                m_evolveUnits = EVOLVE_UNITS;
                m_evolveStates = EVOLVE_STATES;
                m_evolvePopulation = EVOLVE_POPULATION;
                m_evolveIterations = EVOLVE_ITERATIONS;
                m_evolveGenerations = EVOLVE_GENERATIONS;
                m_evolvePrecision = EVOLVE_PRECISION;
                m_evolveFailures = EVOLVE_FAILURES;
                break;
            case FIRESTARTER_OPTIMIZE:
                m_evolveUnits = OPTIMIZE_UNITS;
                m_evolveStates = OPTIMIZE_STATES;
                m_evolvePopulation = OPTIMIZE_POPULATION;
                m_evolveIterations = OPTIMIZE_ITERATIONS;
                m_evolveGenerations = OPTIMIZE_GENERATIONS;
                m_evolvePrecision = OPTIMIZE_PRECISION;
                m_evolveFailures = OPTIMIZE_FAILURES;
                break;
            case FIRESTARTER_UNIT:
                m_evolveUnits = UNIT_UNITS;
                m_evolveStates = UNIT_STATES;
                m_evolvePopulation = UNIT_POPULATION;
                m_evolveIterations = UNIT_ITERATIONS;
                m_evolveGenerations = UNIT_GENERATIONS;
                m_evolvePrecision = UNIT_PRECISION;
                m_evolveFailures = UNIT_FAILURES;
                break;
            case FIRESTARTER_PROCESS:
                m_evolveUnits = PROCESS_UNITS;
                m_evolveStates = PROCESS_STATES;
                m_evolvePopulation = PROCESS_POPULATION;
                m_evolveIterations = PROCESS_ITERATIONS;
                m_evolveGenerations = PROCESS_GENERATIONS;
                m_evolvePrecision = PROCESS_PRECISION;
                m_evolveFailures = PROCESS_FAILURES;
                break;
            default:
                m_evolveUnits = 0;
                m_evolveStates = 0;
                m_evolvePopulation = 0;
                m_evolveIterations = 0;
                m_evolveGenerations = 0;
                m_evolvePrecision = 0;
                m_evolveFailures = 0;
                break;
        }
    } // FireStarterSettings
}; // class FireStarterSettings