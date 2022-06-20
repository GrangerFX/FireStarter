#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_seed = 7263;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 3;
    settings.m_evolveUnits = 4;
    settings.m_evolveStates = 4;
    settings.m_evolvePopulation = 34816;
    settings.m_evolveIterations = 256;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
    settings.m_evolveFailures = 32;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 19;
    program.m_maxRegisters = 5;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 29};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 1, 5, 17};
    program.m_registers[6] = {6, 2, 8, 13};
    program.m_registers[7] = {7, 3, 9, 30};
    program.m_registers[8] = {8, 4, 10, 21};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 14, 14};
    program.m_registers[12] = {12, 2, 15, 18};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 14, 19, 19};
    program.m_registers[15] = {15, 2, 20, 25};
    program.m_registers[16] = {16, 4, 22, 28};
    program.m_registers[17] = {17, 1, 23, 31};
    program.m_registers[18] = {18, 18, 27, 27};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 1, 1);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 6);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 0, 12);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 1, 16);
    instructions->SetOperation(25, 1, 15);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 0, 7);
    instructions->SetOperation(31, 1, 17);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.250604f;
    data->d[1] = 0.188145f;
    data->d[2] = -1.207374f;
    data->d[3] = -0.651258f;
    data->d[4] = -0.819552f;
    data->d[5] = -2.600058f;
    data->d[6] = 0.013211f;
    data->d[7] = 0.275084f;
    data->d[8] = -0.251765f;
    data->d[9] = -0.909178f;
    data->d[10] = 1.198804f;
    data->d[11] = -1.141837f;
    data->d[12] = -0.570086f;
    data->d[13] = 0.558753f;
    data->d[14] = -1.158828f;
    data->d[15] = -0.319618f;
    data->d[16] = -0.677501f;
    data->d[17] = -0.946522f;
    data->d[18] = 1.064049f;
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
    *result->MinResult(0) = 0.000046f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.534476f;
    data->d[1] = -0.133937f;
    data->d[2] = -0.909019f;
    data->d[3] = -1.373780f;
    data->d[4] = -0.907123f;
    data->d[5] = -1.420312f;
    data->d[6] = -0.153928f;
    data->d[7] = 0.910143f;
    data->d[8] = 0.587172f;
    data->d[9] = -0.021657f;
    data->d[10] = -0.185639f;
    data->d[11] = -0.340118f;
    data->d[12] = 0.466569f;
    data->d[13] = -0.539401f;
    data->d[14] = 1.021332f;
    data->d[15] = -0.905282f;
    data->d[16] = 0.743407f;
    data->d[17] = -0.042135f;
    data->d[18] = -1.199427f;
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
    *result->MinResult(1) = 0.000077f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 1.083347f;
    data->d[1] = -1.240846f;
    data->d[2] = -0.252232f;
    data->d[3] = 0.687361f;
    data->d[4] = -1.889735f;
    data->d[5] = 0.444008f;
    data->d[6] = -0.107439f;
    data->d[7] = 0.530759f;
    data->d[8] = 0.428901f;
    data->d[9] = 0.419110f;
    data->d[10] = 0.073567f;
    data->d[11] = 0.721712f;
    data->d[12] = -0.519140f;
    data->d[13] = -1.389860f;
    data->d[14] = -0.368346f;
    data->d[15] = 0.048233f;
    data->d[16] = 0.641152f;
    data->d[17] = 0.792960f;
    data->d[18] = 0.760665f;
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
    *result->MinResult(2) = 0.000046f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000077f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 5;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
