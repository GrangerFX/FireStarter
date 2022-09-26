#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_RANDOM;
    settings.m_units = 2;
    settings.m_processes = 6;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 10000;
    settings.m_seed = 320;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 18;
    program.m_maxRegisters = 6;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 23};
    program.m_registers[1] = {1, 1, 1, 30};
    program.m_registers[2] = {2, 2, 2, 3};
    program.m_registers[3] = {3, 2, 4, 19};
    program.m_registers[4] = {4, 3, 6, 16};
    program.m_registers[5] = {5, 5, 7, 7};
    program.m_registers[6] = {6, 6, 9, 9};
    program.m_registers[7] = {7, 4, 10, 25};
    program.m_registers[8] = {8, 8, 11, 11};
    program.m_registers[9] = {9, 9, 12, 12};
    program.m_registers[10] = {10, 5, 13, 22};
    program.m_registers[11] = {11, 11, 14, 14};
    program.m_registers[12] = {12, 12, 17, 17};
    program.m_registers[13] = {13, 3, 18, 31};
    program.m_registers[14] = {14, 14, 20, 20};
    program.m_registers[15] = {15, 0, 24, 29};
    program.m_registers[16] = {16, 4, 26, 27};
    program.m_registers[17] = {17, 17, 28, 28};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 0, 6);
    instructions->SetOperation(10, 1, 7);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 1, 4);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 0, 3);
    instructions->SetOperation(20, 0, 14);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 1, 10);
    instructions->SetOperation(23, 1, 0);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 1, 7);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 1, 17);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 1, 1);
    instructions->SetOperation(31, 0, 13);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.332880f;
    data->d[1] = -0.133451f;
    data->d[2] = -3.835350f;
    data->d[3] = -0.804896f;
    data->d[4] = 0.204530f;
    data->d[5] = -0.463714f;
    data->d[6] = -1.256796f;
    data->d[7] = 0.136691f;
    data->d[8] = 0.023008f;
    data->d[9] = -0.375755f;
    data->d[10] = -1.584059f;
    data->d[11] = 0.150445f;
    data->d[12] = -0.950760f;
    data->d[13] = -0.263570f;
    data->d[14] = 0.617692f;
    data->d[15] = 0.118057f;
    data->d[16] = -1.155485f;
    data->d[17] = -1.332074f;
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
    *result->MinResult(0) = 0.000150f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.504160f;
    data->d[1] = -0.520101f;
    data->d[2] = -0.457122f;
    data->d[3] = -0.414341f;
    data->d[4] = -0.405961f;
    data->d[5] = 0.761508f;
    data->d[6] = -0.110003f;
    data->d[7] = -0.099233f;
    data->d[8] = 0.588553f;
    data->d[9] = 4.362987f;
    data->d[10] = 0.019617f;
    data->d[11] = -0.327814f;
    data->d[12] = -0.620129f;
    data->d[13] = 0.012472f;
    data->d[14] = -0.029918f;
    data->d[15] = 1.116181f;
    data->d[16] = 0.091495f;
    data->d[17] = -4.041262f;
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
    *result->MinResult(1) = 0.000225f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.538381f;
    data->d[1] = 0.344326f;
    data->d[2] = 0.950213f;
    data->d[3] = -0.841046f;
    data->d[4] = 0.713793f;
    data->d[5] = 0.350101f;
    data->d[6] = -0.199472f;
    data->d[7] = -0.109633f;
    data->d[8] = -0.002988f;
    data->d[9] = 0.115132f;
    data->d[10] = -6.303689f;
    data->d[11] = 0.112012f;
    data->d[12] = 1.775527f;
    data->d[13] = -2.816825f;
    data->d[14] = 0.362964f;
    data->d[15] = -0.099710f;
    data->d[16] = -0.257836f;
    data->d[17] = -1.891219f;
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
    *result->MinResult(2) = 0.000155f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000225f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 7;
    state.m_bestIndex = 68078;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
