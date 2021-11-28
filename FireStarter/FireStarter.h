#pragma once
#include <vector>
#include <cuda.h>
#include "FireStarterDefines.h"
#include "FireStarterUtil.h"

class FireStarter {
public:
    class FireStarterState {
    public: 
        FireStarterProgram m_program;
        unsigned int m_devolve;

        FireStarterState(void);
        ~FireStarterState(void);
    }; class FireStarterState;

    class FireStarterUnit {
    public:
        std::vector<FireStarterState> m_states;
        FireStarterState m_curState;
        FireStarterState m_bestState;
        FireStarterResults* m_results0;
        FireStarterResults* m_results1;
        FireStarterResult m_bestResult;
        std::string m_unitCode;
        std::string m_evaluateCode;
        unsigned long long m_unitIndex;
        unsigned long long m_unitGeneration;

        void RandomInstruction(unsigned int index, unsigned int& seed);
        float GetResults(unsigned int dataGeneration);
        void FreeResults(void);
        void RunProgram(CUmodule module, unsigned long long generation0, unsigned long long generation, unsigned int variation);
        void DrawGraph(CUmodule module, FrameBuffer &buffer, FireStarterResult& result, unsigned int variation);
        void DevolveProgram(unsigned long long generation);
        void EvolveProgram(unsigned long long generation, std::string &code);
        void InitUnit(unsigned long long unitIndex, unsigned int generation = 0);
        FireStarterUnit(void);
        ~FireStarterUnit(void);
    }; // class FireStarterUnit

    std::vector<FireStarterUnit> m_units;
    FireStarterUnit* m_bestUnit0;
    FireStarterUnit* m_bestUnit1;
    FireStarterResult m_bestResult0;
    FireStarterResult m_bestResult1;
    SimpleTimer m_timer;
    FrameBuffer m_buffer;
    CUmodule m_module;
    std::string m_sourceCode;
    std::string m_updatedCode;
    std::string m_bestCode;
    unsigned long long m_generation;
    unsigned long long m_lastGeneration;
    unsigned long long m_bestGeneration;
    char m_statusString[1024];
    float m_bestResult;

    void EraseFrameBuffer(FrameBuffer &buffer);
    void CopyFrameBuffer(FrameBuffer &dstBuffer, FrameBuffer &srcBuffer);
    void InitFrameBuffer(FrameBuffer &buffer, unsigned long width, unsigned long height);
    void FreeFrameBuffer(FrameBuffer &buffer);
    void InitUnits(unsigned int generation = 0);
    FireStarterUnit* GetResults(unsigned int dataGeneration);
    void CompileProgram(const std::string& program);
    void RunProgram(unsigned long long generation0, unsigned int variation);
    static bool LoadCode(const std::string& filePath, std::string& code);
    static void SaveCode(const std::string& filePath, const std::string& code);
    static void ReplaceCode(std::string& code, const std::string& search, const std::string& replace);
    void LoadProgram(void);
    void SaveProgram(void);
    static void UpdateProgram(std::string& code, const std::string& replacementCode, std::string startString);
    void UpdateData(std::string& code, const FireStarterResult& result, std::string startString);
    void DevolveProgram(void);
    void EvolveProgram(void);
    bool TestProgram(void);
    void DrawGraph(void);
    void InitProgram(void);
    void RenderImage(void* hwnd);
    void Init(unsigned long width, unsigned long height);
    FireStarter(void);
    ~FireStarter(void);
}; // class FireStarter