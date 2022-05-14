#pragma once
#include "FireStarterSettings.h"
#include "FireStarterProgram.h"
#include "FireStarterResults.h"

class FireStarterState {
public:
    FireStarterSettings m_settings;
    FireStarterProgram m_program;
    FireStarterResult m_result;
    unsigned int m_generation;  // Generation of the state.

    bool Packetize(FireStarterPacket& packet);
    void SaveState(std::string& code);
    void SaveSolution(std::string& code, const std::string& targetCode, double duration, unsigned int count);
    void OptimizeData(void);
    void InitState(const FireStarterSettings& settings);
    FireStarterState();
}; // class FireStarterState;
