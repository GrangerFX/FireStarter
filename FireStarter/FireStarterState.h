#pragma once
#include "FireStarterProgram.h"
#include "FireStarterResults.h"

class FireStarterState {
public:
    FireStarterProgram m_program;
    FireStarterResult m_result;
    float m_bestResult;         // Best result for all threads and variations.
    unsigned int m_generation;  // Generation of the state.

    bool Packetize(FireStarterPacket& packet);
    void SaveState(std::string& code);
    void SaveSolution(std::string& code, const std::string& targetCode, double duration, unsigned int count, unsigned int units);
    void OptimizeData(void);
    FireStarterState(void);
}; // class FireStarterState;
