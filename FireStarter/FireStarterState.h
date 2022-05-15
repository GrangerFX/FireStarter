#pragma once
#include "FireStarterSettings.h"
#include "FireStarterProgram.h"
#include "FireStarterResults.h"

class FireStarterState {
public:
    FireStarterSettings m_settings;
    FireStarterProgram m_program;
    FireStarterResult* m_result = nullptr;
    unsigned int m_generation = 0;

    FireStarterState& operator = (const FireStarterState&);
    bool Packetize(FireStarterPacket& packet);
    void SaveVariation(unsigned int variation, std::string& code);
    void SaveResult(std::string& code);
    void SaveState(std::string& code);
    void SaveSolution(std::string& code, const std::string& targetCode, double duration, unsigned int count);
    void EvaluateCode(std::string& code);
    void OptimizeData(void);
    void CopyResult(const FireStarterResult* result);
    void InitState(const FireStarterSettings& settings);
    FireStarterState(const FireStarterState& copy);
    FireStarterState();
    ~FireStarterState();
}; // class FireStarterState;
