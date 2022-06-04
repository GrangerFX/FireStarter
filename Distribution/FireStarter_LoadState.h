#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_variations = 1;
    settings.m_samples = 15;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 2;
    settings.m_evolveUnits = 1;
    settings.m_evolveStates = 4;
    settings.m_evolvePopulation = 34816;
    settings.m_evolveIterations = 256;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
    settings.m_evolveFailures = 32;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 0, 7);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 1, 13);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 1, 16);
    instructions->SetOperation(21, 0, 9);
    instructions->SetOperation(22, 0, 17);
    instructions->SetOperation(23, 1, 18);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 1, 19);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 0, 8);
    instructions->SetOperation(31, 1, 20);
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;
    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 29};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 1, 5, 17};
    program.m_registers[6] = {6, 6, 6, 6};
    program.m_registers[7] = {7, 2, 8, 13};
    program.m_registers[8] = {8, 3, 9, 30};
    program.m_registers[9] = {9, 4, 10, 21};
    program.m_registers[10] = {10, 10, 11, 11};
    program.m_registers[11] = {11, 11, 12, 12};
    program.m_registers[12] = {12, 12, 14, 14};
    program.m_registers[13] = {13, 2, 15, 18};
    program.m_registers[14] = {14, 14, 16, 16};
    program.m_registers[15] = {15, 15, 19, 19};
    program.m_registers[16] = {16, 16, 20, 20};
    program.m_registers[17] = {17, 4, 22, 28};
    program.m_registers[18] = {18, 2, 23, 25};
    program.m_registers[19] = {19, 19, 27, 27};
    program.m_registers[20] = {20, 20, 31, 31};
    program.m_programMode = 0;
    program.m_dataSize = 21;
    program.m_maxRegisters = 5;
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.242777f;
    data->d[1] = -0.296431f;
    data->d[2] = 0.465592f;
    data->d[3] = -0.653178f;
    data->d[4] = -0.740696f;
    data->d[5] = 0.410353f;
    data->d[6] = 0.570048f;
    data->d[7] = 0.300933f;
    data->d[8] = -0.408316f;
    data->d[9] = -0.548914f;
    data->d[10] = 0.272417f;
    data->d[11] = 0.645131f;
    data->d[12] = 0.451688f;
    data->d[13] = -1.238311f;
    data->d[14] = -0.936325f;
    data->d[15] = 1.054854f;
    data->d[16] = 0.414043f;
    data->d[17] = 0.056700f;
    data->d[18] = 0.827905f;
    data->d[19] = -1.001740f;
    data->d[20] = 0.053649f;
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
    *result->MinResult(0) = 0.000021f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());

    state.Result()->maxResult = 0.000021f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 14;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);
    LoadResult(state);

} // LoadState
