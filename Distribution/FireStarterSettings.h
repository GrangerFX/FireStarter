#pragma once

#define FIRESTARTER_INSTRUCTIONS 32
#define FIRESTARTER_REGISTERS FIRESTARTER_INSTRUCTIONS
#define FIRESTARTER_VARIATIONS 3
#define FIRESTARTER_SAMPLES 15
#define FIRESTARTER_PROCESS 1
#define FIRESTARTER_CLIENTS 4
#define FIRESTARTER_SEED 0 // 8337

#define FIRESTARTER_SAMPLE_MIN 0.0f
#define FIRESTARTER_SAMPLE_MAX (2.0f * 3.14159265f)

#define FIRESTARTER_EVOLVE_FACTOR 0.1f
#define FIRESTARTER_EVOLVE_START_FACTOR 4.0f
#define FIRESTARTER_EVOLVE_START_RESULT 10.0f
#define FIRESTARTER_EVOLVE_CANDIDATES 16

#define FIRESTARTER_EVOLVE   1
#define FIRESTARTER_UNIT     2
#define FIRESTARTER_TEST     3
#define FIRESTARTER_OPTIMIZE 4
#define FIRESTARTER_SOLUTION 5
#define FIRESTARTER_MODE     FIRESTARTER_TEST

#define EVOLVE_STATES 1
#define EVOLVE_POPULATION 4352
#define EVOLVE_ITERATIONS 512
#define EVOLVE_GENERATIONS 10
#define EVOLVE_PRECISION 256
#define EVOLVE_ATTEMPTS 32

#define UNIT_STATES 1
#define UNIT_POPULATION 4352 * 16
#define UNIT_ITERATIONS 256
#define UNIT_GENERATIONS 100
#define UNIT_PRECISION 256
#define UNIT_ATTEMPTS 32

#define TEST_STATES 4
#define TEST_POPULATION 4352 * 4
#define TEST_ITERATIONS 128
#define TEST_GENERATIONS 100
#define TEST_PRECISION 0
#define TEST_ATTEMPTS 10000

#define OPTIMIZE_STATES 1
#define OPTIMIZE_POPULATION 4352 * 16
#define OPTIMIZE_ITERATIONS 512
#define OPTIMIZE_GENERATIONS 100
#define OPTIMIZE_PRECISION 256
#define OPTIMIZE_ATTEMPTS 32

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
    unsigned int m_clients;
    unsigned int m_process;
    unsigned int m_seed;

    float m_sampleMin;
    float m_sampleMax;
    float m_evolveFactor;
    float m_evolveStartFactor;
    float m_evolveStartResult;
    unsigned int m_evolveCandidates;

    unsigned int m_evolveMode;
    unsigned int m_evolveStates;
    unsigned int m_evolveUnits;
    unsigned int m_evolveClients;
    unsigned int m_evolvePopulation;
    unsigned int m_evolveIterations;
    unsigned int m_evolveGenerations;
    unsigned int m_evolvePrecision;
    unsigned int m_evolveAttempts;

    inline FireStarterSettings(unsigned int evolveMode = 0)
    {
        m_instructions = FIRESTARTER_INSTRUCTIONS;
        m_registers = FIRESTARTER_REGISTERS;
        m_opcodes = FIRESTARTER_OPCODES;
        m_variations = FIRESTARTER_VARIATIONS;
        m_samples = FIRESTARTER_SAMPLES;
        m_process = FIRESTARTER_PROCESS;
        m_clients = FIRESTARTER_CLIENTS;
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
                m_evolveStates = EVOLVE_STATES;
                m_evolveUnits = 1;
                m_evolvePopulation = EVOLVE_POPULATION;
                m_evolveIterations = EVOLVE_ITERATIONS;
                m_evolveGenerations = EVOLVE_GENERATIONS;
                m_evolvePrecision = EVOLVE_PRECISION;
                m_evolveAttempts = EVOLVE_ATTEMPTS;
                break;
            case FIRESTARTER_OPTIMIZE:
                m_evolveStates = OPTIMIZE_STATES;
                m_evolveUnits = 1;
                m_evolvePopulation = OPTIMIZE_POPULATION;
                m_evolveIterations = OPTIMIZE_ITERATIONS;
                m_evolveGenerations = OPTIMIZE_GENERATIONS;
                m_evolvePrecision = OPTIMIZE_PRECISION;
                m_evolveAttempts = OPTIMIZE_ATTEMPTS;
                break;
            case FIRESTARTER_UNIT:
                m_evolveStates = UNIT_STATES;
                m_evolveUnits = m_process ? m_clients : 1;
                m_evolvePopulation = UNIT_POPULATION;
                m_evolveIterations = UNIT_ITERATIONS;
                m_evolveGenerations = UNIT_GENERATIONS;
                m_evolvePrecision = UNIT_PRECISION;
                m_evolveAttempts = UNIT_ATTEMPTS;
                break;
            case FIRESTARTER_TEST:
                m_evolveStates = TEST_STATES;
                m_evolveUnits = m_process ? m_clients : 1;
                m_evolvePopulation = TEST_POPULATION;
                m_evolveIterations = TEST_ITERATIONS;
                m_evolveGenerations = TEST_GENERATIONS;
                m_evolvePrecision = TEST_PRECISION;
                m_evolveAttempts = TEST_ATTEMPTS;
                break;
            default:
                m_evolveStates = 0;
                m_evolveUnits = 0;
                m_evolvePopulation = 0;
                m_evolveIterations = 0;
                m_evolveGenerations = 0;
                m_evolvePrecision = 0;
                m_evolveAttempts = 0;
                break;
        }
    } // FireStarterSettings
}; // class FireStarterSettings