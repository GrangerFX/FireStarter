#pragma once
#include "FireStarterProgram.h"
#include "FireStarterResults.h"

class FireStarterState {
private:
    std::vector<unsigned char> m_result;
public:
    FireStarterProgram m_program;
    unsigned int m_generation = 0;

    inline const FireStarterSettings& Settings(void) const
    {
        return m_program.m_settings;
    } // Settings

    inline FireStarterResult* Result(void)
    {
        return (FireStarterResult*)m_result.data();
    } // Result

    inline const FireStarterResult* Result(void) const
    {
        return (const FireStarterResult*)m_result.data();
    } // Result

    bool Packetize(FireStarterPacket& packet);
    void SaveVariation(unsigned int variation, std::string& code);
    void SaveResult(std::string& code);
    void SaveState(std::string& code);
    void OptimizeData(void);
    void InitState(const FireStarterSettings& settings);
    FireStarterState();
}; // class FireStarterState;
