#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_process = 0;
    settings.m_clients = 4;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 2;
    settings.m_evolveStates = 1;
    settings.m_evolveUnits = 1;
    settings.m_evolvePopulation = 69632;
    settings.m_evolveIterations = 256;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
    settings.m_evolveAttempts = 32;
    settings.m_evolveSeed = 8337;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 18;
    program.m_maxRegisters = 6;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 9};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 29};
    program.m_registers[4] = {4, 2, 5, 17};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 3, 7, 24};
    program.m_registers[7] = {7, 4, 8, 26};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 0, 11, 25};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 13, 13};
    program.m_registers[12] = {12, 5, 14, 30};
    program.m_registers[13] = {13, 13, 18, 18};
    program.m_registers[14] = {14, 14, 23, 23};
    program.m_registers[15] = {15, 15, 27, 27};
    program.m_registers[16] = {16, 16, 28, 28};
    program.m_registers[17] = {17, 17, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 15);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 1, 12);
    instructions->SetOperation(31, 0, 17);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = -0.646766f;
    data->d[2] = -0.869107f;
    data->d[3] = -0.667457f;
    data->d[4] = -0.686187f;
    data->d[5] = -0.056605f;
    data->d[6] = 0.068668f;
    data->d[7] = 1.231581f;
    data->d[8] = -0.176933f;
    data->d[9] = 0.831899f;
    data->d[10] = -0.388749f;
    data->d[11] = -0.667238f;
    data->d[12] = -0.388894f;
    data->d[13] = -1.228273f;
    data->d[14] = -1.568877f;
    data->d[15] = 0.351751f;
    data->d[16] = 0.000000f;
    data->d[17] = -0.802058f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(0) = 0.000001f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090658f;
    data->d[1] = 0.852344f;
    data->d[2] = -0.773867f;
    data->d[3] = -0.438599f;
    data->d[4] = -0.718325f;
    data->d[5] = -0.039722f;
    data->d[6] = 0.072981f;
    data->d[7] = 0.149274f;
    data->d[8] = -0.854682f;
    data->d[9] = -0.219187f;
    data->d[10] = 0.591067f;
    data->d[11] = 1.246391f;
    data->d[12] = 0.275603f;
    data->d[13] = -1.991869f;
    data->d[14] = 0.929706f;
    data->d[15] = -0.171586f;
    data->d[16] = 0.619859f;
    data->d[17] = 1.110689f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(1) = 0.000002f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617995f;
    data->d[1] = -1.239389f;
    data->d[2] = -0.346090f;
    data->d[3] = -0.465543f;
    data->d[4] = -0.789138f;
    data->d[5] = -0.004417f;
    data->d[6] = 0.479110f;
    data->d[7] = 0.296822f;
    data->d[8] = 0.213740f;
    data->d[9] = -1.271335f;
    data->d[10] = -1.039699f;
    data->d[11] = -0.790573f;
    data->d[12] = 0.999604f;
    data->d[13] = -0.861158f;
    data->d[14] = 0.399519f;
    data->d[15] = -1.050248f;
    data->d[16] = 1.414599f;
    data->d[17] = -0.352431f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(2) = 0.000002f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000002f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 82;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
