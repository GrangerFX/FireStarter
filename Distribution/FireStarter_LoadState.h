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

    settings.m_mode = FIRESTARTER_CODE;
    settings.m_states = 1;
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 4352;
    settings.m_iterations = 256;
    settings.m_generations = 5;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
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
    program.m_registers[0] = {0, 0, 0, 23};
    program.m_registers[1] = {1, 1, 1, 17};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 2, 3, 6};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 3, 5, 22};
    program.m_registers[6] = {6, 2, 7, 26};
    program.m_registers[7] = {7, 4, 8, 29};
    program.m_registers[8] = {8, 5, 9, 14};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 6, 13, 31};
    program.m_registers[11] = {11, 11, 18, 18};
    program.m_registers[12] = {12, 12, 19, 19};
    program.m_registers[13] = {13, 13, 20, 20};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 2, 27, 28};
    program.m_registers[16] = {16, 16, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 0, 6);
    instructions->SetOperation(16, 1, 10);
    instructions->SetOperation(17, 1, 1);
    instructions->SetOperation(18, 1, 11);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 5);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 1, 6);
    instructions->SetOperation(25, 0, 7);
    instructions->SetOperation(26, 1, 6);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 0, 15);
    instructions->SetOperation(29, 1, 7);
    instructions->SetOperation(30, 0, 16);
    instructions->SetOperation(31, 1, 10);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.259505f;
    data->d[1] = 0.226573f;
    data->d[2] = -1.334544f;
    data->d[3] = -0.284234f;
    data->d[4] = -0.605529f;
    data->d[5] = 0.291858f;
    data->d[6] = -1.030966f;
    data->d[7] = -0.371168f;
    data->d[8] = -0.912862f;
    data->d[9] = -0.111853f;
    data->d[10] = -0.372948f;
    data->d[11] = -0.054043f;
    data->d[12] = -1.844055f;
    data->d[13] = 2.071300f;
    data->d[14] = -0.123334f;
    data->d[15] = -0.353300f;
    data->d[16] = -0.021776f;
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
    *result->MinResult(0) = 0.003642f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.004716f;
    data->d[1] = 1.582876f;
    data->d[2] = -1.268483f;
    data->d[3] = -0.241776f;
    data->d[4] = 4.140263f;
    data->d[5] = 0.342307f;
    data->d[6] = -0.433085f;
    data->d[7] = -0.322167f;
    data->d[8] = -0.786441f;
    data->d[9] = -0.425914f;
    data->d[10] = 0.521080f;
    data->d[11] = 1.825248f;
    data->d[12] = 3.601800f;
    data->d[13] = 0.507281f;
    data->d[14] = 0.920396f;
    data->d[15] = 0.059154f;
    data->d[16] = 0.001486f;
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
    *result->MinResult(1) = 0.003822f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.586478f;
    data->d[1] = -0.023161f;
    data->d[2] = -0.656691f;
    data->d[3] = 0.759664f;
    data->d[4] = 0.047485f;
    data->d[5] = 2.494088f;
    data->d[6] = 0.348913f;
    data->d[7] = 0.831301f;
    data->d[8] = 1.073514f;
    data->d[9] = 0.953658f;
    data->d[10] = -0.723390f;
    data->d[11] = 0.439489f;
    data->d[12] = -0.843237f;
    data->d[13] = 2.045312f;
    data->d[14] = 0.144267f;
    data->d[15] = 0.384084f;
    data->d[16] = 0.836607f;
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
    *result->MinResult(2) = 0.003764f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.003822f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1280;
    state.m_seed = 3232321135;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
