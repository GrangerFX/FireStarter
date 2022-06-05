#pragma once
#include "FireStarterProgram.h"
#include "FireStarterResults.h"

class FireStarterState {
private:
    std::vector<unsigned char> m_result;
public:
    FireStarterSettings m_settings;
    FireStarterProgram m_program;
    unsigned int m_generation = 0;

    FireStarterResult* Result(void);
    bool Packetize(FireStarterPacket& packet);
    void SaveSettings(std::string& code);
    void SaveVariation(unsigned int variation, std::string& code);
    void SaveResult(std::string& code);
    void SaveState(std::string& code);
    void SaveSolution(std::string& code, const std::string& targetCode, double duration, unsigned int count);
    void EvaluateCode(std::string& code);
    void OptimizeData(void);
    void InitState(const FireStarterSettings& settings);
    FireStarterState();
}; // class FireStarterState;
