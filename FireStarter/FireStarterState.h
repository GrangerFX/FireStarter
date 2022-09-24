#pragma once
#include "FireStarterProgram.h"
#include "FireStarterResults.h"

class FireStarterState {
private:
    std::vector<unsigned char> m_result;
public:
    FireStarterProgram m_program;
    unsigned int m_generation = 0;
    unsigned int m_seed = 0;
    unsigned int m_best = 0;

    inline bool Initialized(void) const
    {
        return !m_result.empty();
    } // Initialized

    inline FireStarterSettings& Settings(void)
    {
        return m_program.m_settings;
    } // Settings

    inline const FireStarterSettings& Settings(void) const
    {
        return m_program.m_settings;
    } // Settings

    inline size_t ResultSize(void) const
    {
        return FireStarterResult::ResultSize(m_program.m_settings.m_registers, m_program.m_settings.m_variations);
    } // ResultSize

    inline FireStarterResult* Result(void)
    {
        return (FireStarterResult*)m_result.data();
    } // Result

    inline const FireStarterResult* Result(void) const
    {
        return (const FireStarterResult*)m_result.data();
    } // Result

    inline float MaxResult(void) const
    {
        return Initialized() ? ((FireStarterResult*)m_result.data())->maxResult : m_program.m_settings.m_startResult;
    } // Result

    bool Packetize(FireStarterPacket& packet);
    void SaveVariation(unsigned int variation, std::string& code);
    void SaveResult(std::string& code);
    void SaveState(std::string& code);
    void OptimizeData(void);
    float TestResult(void);
    void InitState(const FireStarterSettings& settings);
    FireStarterState(const FireStarterSettings& settings);
    inline FireStarterState(void) {}
}; // class FireStarterState;
