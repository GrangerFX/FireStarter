#pragma once
#include "FireStarterProgram.h"
#include "FireStarterResults.h"

class FireStarterState {
public:
    FireStarterProgram m_program;
    FireStarterResult m_result;
    float m_bestResult;      // Best result for all threads and variations.

    void SaveState(std::string& code);
    void SaveSolution(std::string& code);
    void OptimizeData(void);
    FireStarterState(void);
}; // class FireStarterState;
