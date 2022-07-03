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
    settings.m_seed = 497;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 3;
    settings.m_evolveStates = 1;
    settings.m_evolveUnits = 1;
    settings.m_evolvePopulation = 69632;
    settings.m_evolveIterations = 256;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 0;
    settings.m_evolveAttempts = 10000;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 18;
    program.m_maxRegisters = 7;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 10};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 1, 2, 5};
    program.m_registers[3] = {3, 2, 3, 27};
    program.m_registers[4] = {4, 3, 4, 29};
    program.m_registers[5] = {5, 1, 6, 24};
    program.m_registers[6] = {6, 6, 7, 7};
    program.m_registers[7] = {7, 7, 8, 8};
    program.m_registers[8] = {8, 4, 9, 25};
    program.m_registers[9] = {9, 0, 11, 14};
    program.m_registers[10] = {10, 5, 12, 28};
    program.m_registers[11] = {11, 6, 13, 30};
    program.m_registers[12] = {12, 12, 15, 15};
    program.m_registers[13] = {13, 13, 17, 17};
    program.m_registers[14] = {14, 14, 18, 18};
    program.m_registers[15] = {15, 15, 19, 19};
    program.m_registers[16] = {16, 0, 23, 26};
    program.m_registers[17] = {17, 17, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 2);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 9);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 1, 10);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 1, 16);
    instructions->SetOperation(24, 0, 5);
    instructions->SetOperation(25, 1, 8);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 0, 10);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 1, 17);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.294167f;
    data->d[1] = -0.818817f;
    data->d[2] = -0.528553f;
    data->d[3] = 0.491185f;
    data->d[4] = -0.206098f;
    data->d[5] = 0.235179f;
    data->d[6] = 0.430149f;
    data->d[7] = 0.092991f;
    data->d[8] = -0.910691f;
    data->d[9] = -0.253552f;
    data->d[10] = -0.894456f;
    data->d[11] = -0.819809f;
    data->d[12] = -0.909769f;
    data->d[13] = -0.364984f;
    data->d[14] = -0.556959f;
    data->d[15] = 1.254664f;
    data->d[16] = 1.300771f;
    data->d[17] = -0.505455f;
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
    *result->MinResult(0) = 0.000060f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.777587f;
    data->d[1] = 0.077981f;
    data->d[2] = -0.379284f;
    data->d[3] = -0.738860f;
    data->d[4] = 0.758388f;
    data->d[5] = -0.138339f;
    data->d[6] = -0.130557f;
    data->d[7] = 0.490193f;
    data->d[8] = -0.592441f;
    data->d[9] = 1.064492f;
    data->d[10] = 0.256929f;
    data->d[11] = -0.641604f;
    data->d[12] = -0.107468f;
    data->d[13] = -0.172291f;
    data->d[14] = -0.375281f;
    data->d[15] = -2.536902f;
    data->d[16] = 1.356000f;
    data->d[17] = 0.036961f;
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
    *result->MinResult(1) = 0.000048f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.472898f;
    data->d[1] = -0.485219f;
    data->d[2] = -0.461849f;
    data->d[3] = -0.120840f;
    data->d[4] = -0.383284f;
    data->d[5] = 0.305807f;
    data->d[6] = 1.245720f;
    data->d[7] = 2.573745f;
    data->d[8] = -0.034864f;
    data->d[9] = -1.019425f;
    data->d[10] = -0.424219f;
    data->d[11] = -1.200286f;
    data->d[12] = -0.172217f;
    data->d[13] = 0.626242f;
    data->d[14] = -0.549870f;
    data->d[15] = -0.790050f;
    data->d[16] = -0.551479f;
    data->d[17] = -0.605772f;
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
    *result->MinResult(2) = 0.000073f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000073f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
