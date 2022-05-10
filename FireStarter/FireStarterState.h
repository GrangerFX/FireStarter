#pragma once
#include "FireStarterProgram.h"
#include "FireStarterResults.h"

class FireStarterState {
public:
    FireStarterProgram m_program;
    FireStarterResult m_result;
    unsigned int m_generation;  // Generation of the state.

    bool Packetize(FireStarterPacket& packet);
    void SaveState(std::string& code);
    void SaveSolution(std::string& code, const std::string& targetCode, double duration, unsigned int count, unsigned int units, unsigned int population, unsigned int iterations, unsigned int generations);
    void OptimizeData(void);
    FireStarterState(void);
}; // class FireStarterState;
