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
    program.m_maxRegisters = 6;

    program.m_registers.resize(17);
    program.m_registers[0] = {0, 0, 0, 23};
    program.m_registers[1] = {1, 1, 1, 12};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 2, 3, 6};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 2, 7, 24};
    program.m_registers[6] = {6, 3, 8, 29};
    program.m_registers[7] = {7, 4, 9, 17};
    program.m_registers[8] = {8, 8, 11, 11};
    program.m_registers[9] = {9, 1, 13, 31};
    program.m_registers[10] = {10, 4, 18, 26};
    program.m_registers[11] = {11, 11, 19, 19};
    program.m_registers[12] = {12, 5, 20, 28};
    program.m_registers[13] = {13, 13, 21, 21};
    program.m_registers[14] = {14, 14, 22, 22};
    program.m_registers[15] = {15, 15, 27, 27};
    program.m_registers[16] = {16, 16, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 1, 9);
    instructions->SetOperation(14, 1, 7);
    instructions->SetOperation(15, 0, 5);
    instructions->SetOperation(16, 1, 9);
    instructions->SetOperation(17, 1, 7);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 1, 11);
    instructions->SetOperation(20, 1, 12);
    instructions->SetOperation(21, 0, 13);
    instructions->SetOperation(22, 1, 14);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 0, 6);
    instructions->SetOperation(26, 0, 10);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 0, 16);
    instructions->SetOperation(31, 1, 9);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.296947f;
    data->d[1] = 0.071011f;
    data->d[2] = -0.821627f;
    data->d[3] = -0.271374f;
    data->d[4] = -0.204932f;
    data->d[5] = -0.961672f;
    data->d[6] = -0.359086f;
    data->d[7] = -0.895621f;
    data->d[8] = -0.288747f;
    data->d[9] = -0.317127f;
    data->d[10] = -0.031552f;
    data->d[11] = -0.002471f;
    data->d[12] = -1.077807f;
    data->d[13] = 0.243268f;
    data->d[14] = 0.754705f;
    data->d[15] = 0.123688f;
    data->d[16] = -0.003201f;
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
    *result->MinResult(0) = 0.010480f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.098979f;
    data->d[1] = 1.543692f;
    data->d[2] = -0.831038f;
    data->d[3] = 0.388666f;
    data->d[4] = -0.187841f;
    data->d[5] = 0.641662f;
    data->d[6] = -0.301243f;
    data->d[7] = -0.751559f;
    data->d[8] = -0.539643f;
    data->d[9] = 0.622943f;
    data->d[10] = -0.450825f;
    data->d[11] = -1.022712f;
    data->d[12] = 1.142538f;
    data->d[13] = 0.739396f;
    data->d[14] = 5.096871f;
    data->d[15] = -0.023369f;
    data->d[16] = 0.013893f;
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
    *result->MinResult(1) = 0.007404f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.503740f;
    data->d[1] = 0.022544f;
    data->d[2] = -0.165395f;
    data->d[3] = -1.325501f;
    data->d[4] = 0.442587f;
    data->d[5] = -0.339524f;
    data->d[6] = 0.789433f;
    data->d[7] = 1.099214f;
    data->d[8] = 1.012047f;
    data->d[9] = -0.716267f;
    data->d[10] = -1.203319f;
    data->d[11] = -1.022584f;
    data->d[12] = 0.541867f;
    data->d[13] = 0.380431f;
    data->d[14] = 0.154037f;
    data->d[15] = -0.009074f;
    data->d[16] = 0.491174f;
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
    *result->MinResult(2) = 0.014651f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.014651f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 95;
    state.m_seed = 3232319950;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
