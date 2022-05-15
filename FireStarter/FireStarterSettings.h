#pragma once
#include "FireStarterDefines.h"
#include "FireStarterUtil.h"

class FireStarterSettings {
public:
    unsigned int m_instructions;
    unsigned int m_variations;
    unsigned int m_evolveMode;
    unsigned int m_evolveUnits;
    unsigned int m_evolveStates;
    unsigned int m_evolvePopulation;
    unsigned int m_evolveIterations;
    unsigned int m_evolveGenerations;
    unsigned int m_evolvePrecision;

    inline void SaveSettings(std::string& code)
    {
        code += "inline void LoadSettings(FireStarterSettings& settings)\r\n";
        code += "{\r\n";
        code += Format("    settings.m_evolveMode = %u;\r\n", m_evolveMode);
        code += Format("    settings.m_evolveUnits = %u;\r\n", m_evolveUnits);
        code += Format("    settings.m_evolveStates = %u;\r\n", m_evolveStates);
        code += Format("    settings.m_evolvePopulation = %u;\r\n", m_evolvePopulation);
        code += Format("    settings.m_evolveIterations = %u;\r\n", m_evolveIterations);
        code += Format("    settings.m_evolveGenerations = %u;\r\n", m_evolveGenerations);
        code += Format("    settings.m_evolvePrecision = %u;\r\n", m_evolvePrecision);
        code += "} // LoadSettings\r\n";
        code += "\r\n";
    } // SaveSettings

    inline FireStarterSettings(unsigned int evolveMode = 0)
    {
        m_instructions = FIRESTARTER_INSTRUCTIONS;
        m_variations = FIRESTARTER_VARIATIONS;
        m_evolveMode = evolveMode;
        switch (m_evolveMode) {
            case FIRESTARTER_EVOLVE:
                m_evolveUnits = EVOLVE_UNITS;
                m_evolveStates = EVOLVE_STATES;
                m_evolvePopulation = EVOLVE_POPULATION;
                m_evolveIterations = EVOLVE_ITERATIONS;
                m_evolveGenerations = EVOLVE_GENERATIONS;
                m_evolvePrecision = EVOLVE_PRECISION;
                break;
            case FIRESTARTER_OPTIMIZE:
                m_evolveUnits = OPTIMIZE_UNITS;
                m_evolveStates = OPTIMIZE_STATES;
                m_evolvePopulation = OPTIMIZE_POPULATION;
                m_evolveIterations = OPTIMIZE_ITERATIONS;
                m_evolveGenerations = OPTIMIZE_GENERATIONS;
                m_evolvePrecision = OPTIMIZE_PRECISION;
                break;
            case FIRESTARTER_UNIT:
                m_evolveUnits = UNIT_UNITS;
                m_evolveStates = UNIT_STATES;
                m_evolvePopulation = UNIT_POPULATION;
                m_evolveIterations = UNIT_ITERATIONS;
                m_evolveGenerations = UNIT_GENERATIONS;
                m_evolvePrecision = UNIT_PRECISION;
                break;
            case FIRESTARTER_PROCESS:
                m_evolveUnits = PROCESS_UNITS;
                m_evolveStates = PROCESS_STATES;
                m_evolvePopulation = PROCESS_POPULATION;
                m_evolveIterations = PROCESS_ITERATIONS;
                m_evolveGenerations = PROCESS_GENERATIONS;
                m_evolvePrecision = PROCESS_PRECISION;
                break;
            default:
                m_evolveUnits = 0;
                m_evolveStates = 0;
                m_evolvePopulation = 0;
                m_evolveIterations = 0;
                m_evolveGenerations = 0;
                m_evolvePrecision = 0;
                break;
        }
    } // FireStarterSettings
}; // class FireStarterSettings