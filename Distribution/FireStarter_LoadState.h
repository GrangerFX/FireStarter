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
    settings.m_evolveStates = 4;
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
    program.m_dataSize = 22;
    program.m_maxRegisters = 4;

    program.m_registers.resize(22);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 9};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 22};
    program.m_registers[4] = {4, 4, 5, 5};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 2, 7, 29};
    program.m_registers[7] = {7, 3, 8, 26};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 13, 13};
    program.m_registers[12] = {12, 12, 14, 14};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 14, 17, 17};
    program.m_registers[15] = {15, 15, 18, 18};
    program.m_registers[16] = {16, 0, 21, 30};
    program.m_registers[17] = {17, 17, 23, 23};
    program.m_registers[18] = {18, 18, 25, 25};
    program.m_registers[19] = {19, 19, 27, 27};
    program.m_registers[20] = {20, 20, 28, 28};
    program.m_registers[21] = {21, 21, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 17);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 19);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 1, 16);
    instructions->SetOperation(31, 0, 21);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = 1.370556f;
    data->d[2] = -0.247354f;
    data->d[3] = -1.206263f;
    data->d[4] = 0.565122f;
    data->d[5] = -0.263824f;
    data->d[6] = 0.811022f;
    data->d[7] = 1.323087f;
    data->d[8] = 1.288802f;
    data->d[9] = 0.995044f;
    data->d[10] = -1.072115f;
    data->d[11] = 0.761526f;
    data->d[12] = 0.015239f;
    data->d[13] = 1.092261f;
    data->d[14] = -1.389584f;
    data->d[15] = -0.223531f;
    data->d[16] = -0.922780f;
    data->d[17] = 0.108617f;
    data->d[18] = -0.600228f;
    data->d[19] = 0.430038f;
    data->d[20] = 0.000000f;
    data->d[21] = -1.093224f;
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
    *result->MinResult(0) = 0.000008f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090660f;
    data->d[1] = -0.637841f;
    data->d[2] = 0.662043f;
    data->d[3] = -0.955113f;
    data->d[4] = 0.546488f;
    data->d[5] = 0.400861f;
    data->d[6] = 0.292061f;
    data->d[7] = -0.543540f;
    data->d[8] = -0.915332f;
    data->d[9] = -0.399631f;
    data->d[10] = 0.126054f;
    data->d[11] = -1.326801f;
    data->d[12] = -0.744850f;
    data->d[13] = -0.375629f;
    data->d[14] = -0.119889f;
    data->d[15] = -1.615897f;
    data->d[16] = -0.020019f;
    data->d[17] = 0.518273f;
    data->d[18] = 0.609391f;
    data->d[19] = -0.154153f;
    data->d[20] = -0.759091f;
    data->d[21] = -1.009533f;
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
    *result->MinResult(1) = 0.000010f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617994f;
    data->d[1] = -0.849160f;
    data->d[2] = 0.874738f;
    data->d[3] = -0.610889f;
    data->d[4] = 0.682001f;
    data->d[5] = -1.203085f;
    data->d[6] = -1.598628f;
    data->d[7] = -0.356296f;
    data->d[8] = 0.726232f;
    data->d[9] = -0.652590f;
    data->d[10] = -0.486209f;
    data->d[11] = -0.086798f;
    data->d[12] = -0.255906f;
    data->d[13] = 1.249153f;
    data->d[14] = 0.029222f;
    data->d[15] = -0.842362f;
    data->d[16] = 0.881321f;
    data->d[17] = 0.142647f;
    data->d[18] = -0.062474f;
    data->d[19] = 0.354893f;
    data->d[20] = -1.129445f;
    data->d[21] = -1.306280f;
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
    *result->MinResult(2) = 0.000003f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000010f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 3;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
