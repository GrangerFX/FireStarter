#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_mode = FIRESTARTER_UNIT;
    settings.m_states = 1;
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_generations = 100;
    settings.m_precision = 256;
    settings.m_attempts = 32;
    settings.m_seed = 0;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 17;
    program.m_maxRegisters = 6;

    program.m_registers.resize(17);
    program.m_registers[0] = {0, 0, 0, 20};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 1, 5, 28};
    program.m_registers[6] = {6, 2, 6, 14};
    program.m_registers[7] = {7, 7, 7, 7};
    program.m_registers[8] = {8, 3, 8, 12};
    program.m_registers[9] = {9, 4, 11, 27};
    program.m_registers[10] = {10, 3, 13, 25};
    program.m_registers[11] = {11, 2, 16, 31};
    program.m_registers[12] = {12, 5, 18, 23};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 0, 21, 22};
    program.m_registers[15] = {15, 5, 24, 29};
    program.m_registers[16] = {16, 16, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 8);
    instructions->SetOperation(9, 0, 5);
    instructions->SetOperation(10, 1, 6);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 1, 8);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 1, 0);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 0, 12);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 1, 10);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 1, 9);
    instructions->SetOperation(28, 1, 5);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 16);
    instructions->SetOperation(31, 0, 11);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.701453f;
    data->d[1] = -3.887005f;
    data->d[2] = -0.180911f;
    data->d[3] = 0.702996f;
    data->d[4] = -0.780874f;
    data->d[5] = -0.463701f;
    data->d[6] = -0.746030f;
    data->d[7] = 0.952469f;
    data->d[8] = 0.551330f;
    data->d[9] = 1.513346f;
    data->d[10] = -0.500351f;
    data->d[11] = -0.007462f;
    data->d[12] = -0.470343f;
    data->d[13] = 0.790592f;
    data->d[14] = -0.938115f;
    data->d[15] = 1.191106f;
    data->d[16] = -1.156331f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(0) = 0.000142f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.674536f;
    data->d[1] = 1.006342f;
    data->d[2] = 0.910329f;
    data->d[3] = -3.599674f;
    data->d[4] = 0.244991f;
    data->d[5] = 0.696928f;
    data->d[6] = -0.677401f;
    data->d[7] = -0.216401f;
    data->d[8] = 0.445410f;
    data->d[9] = 0.578075f;
    data->d[10] = 0.655590f;
    data->d[11] = 0.207573f;
    data->d[12] = 0.009184f;
    data->d[13] = 0.401464f;
    data->d[14] = -0.232755f;
    data->d[15] = -0.166453f;
    data->d[16] = -1.040852f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(1) = 0.000140f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.524963f;
    data->d[1] = 0.437870f;
    data->d[2] = -0.383659f;
    data->d[3] = 1.209387f;
    data->d[4] = -1.077847f;
    data->d[5] = -0.207585f;
    data->d[6] = -1.710224f;
    data->d[7] = -0.799648f;
    data->d[8] = -0.424957f;
    data->d[9] = -0.088959f;
    data->d[10] = -0.284305f;
    data->d[11] = -0.665838f;
    data->d[12] = 0.947317f;
    data->d[13] = 0.698899f;
    data->d[14] = 1.207734f;
    data->d[15] = 0.744300f;
    data->d[16] = -1.310619f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(2) = 0.000227f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000227f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 3;
    state.m_seed = 3232320323;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
