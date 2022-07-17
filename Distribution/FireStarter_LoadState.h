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
    settings.m_evolve = 1;
    settings.m_attempts = 32;
    settings.m_seed = 0;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 17;
    program.m_maxRegisters = 7;

    program.m_registers.resize(17);
    program.m_registers[0] = {0, 0, 0, 24};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 1, 5, 28};
    program.m_registers[6] = {6, 2, 6, 31};
    program.m_registers[7] = {7, 7, 7, 7};
    program.m_registers[8] = {8, 3, 8, 12};
    program.m_registers[9] = {9, 4, 11, 27};
    program.m_registers[10] = {10, 3, 13, 25};
    program.m_registers[11] = {11, 11, 17, 17};
    program.m_registers[12] = {12, 5, 18, 23};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 6, 21, 22};
    program.m_registers[15] = {15, 15, 29, 29};
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
    instructions->SetOperation(16, 1, 10);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 1, 0);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 0, 12);
    instructions->SetOperation(24, 0, 0);
    instructions->SetOperation(25, 1, 10);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 1, 9);
    instructions->SetOperation(28, 1, 5);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 16);
    instructions->SetOperation(31, 1, 6);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.715802f;
    data->d[1] = 0.898336f;
    data->d[2] = 0.604810f;
    data->d[3] = 0.757268f;
    data->d[4] = -0.631709f;
    data->d[5] = -0.178127f;
    data->d[6] = -1.309876f;
    data->d[7] = -1.742101f;
    data->d[8] = -0.276206f;
    data->d[9] = -1.013419f;
    data->d[10] = -0.960334f;
    data->d[11] = -2.440737f;
    data->d[12] = -0.213903f;
    data->d[13] = 0.761032f;
    data->d[14] = -0.500646f;
    data->d[15] = -0.969282f;
    data->d[16] = 0.139414f;
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
    *result->MinResult(0) = 0.000018f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.447814f;
    data->d[1] = 1.558081f;
    data->d[2] = -0.509473f;
    data->d[3] = 0.072853f;
    data->d[4] = -1.720019f;
    data->d[5] = -0.181310f;
    data->d[6] = 1.358273f;
    data->d[7] = 0.412098f;
    data->d[8] = -0.153132f;
    data->d[9] = -0.598882f;
    data->d[10] = -0.984615f;
    data->d[11] = 1.731820f;
    data->d[12] = 1.249190f;
    data->d[13] = 0.373723f;
    data->d[14] = 2.950432f;
    data->d[15] = -0.364424f;
    data->d[16] = -0.890011f;
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
    *result->MinResult(1) = 0.000128f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.679253f;
    data->d[1] = -0.909382f;
    data->d[2] = 0.362263f;
    data->d[3] = -0.341289f;
    data->d[4] = 0.409474f;
    data->d[5] = -0.743034f;
    data->d[6] = 0.737649f;
    data->d[7] = -1.684083f;
    data->d[8] = 0.201966f;
    data->d[9] = 1.496363f;
    data->d[10] = 0.704920f;
    data->d[11] = 0.846518f;
    data->d[12] = 0.814380f;
    data->d[13] = 0.494161f;
    data->d[14] = -0.222682f;
    data->d[15] = 0.265435f;
    data->d[16] = 1.047716f;
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
    *result->MinResult(2) = 0.000121f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000128f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 40;
    state.m_seed = 3232324134;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
