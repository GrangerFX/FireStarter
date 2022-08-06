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

    settings.m_mode = FIRESTARTER_CODE;
    settings.m_states = 1;
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 4352;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 5;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
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
    program.m_maxRegisters = 7;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 23};
    program.m_registers[1] = {1, 1, 1, 12};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 2, 3, 28};
    program.m_registers[4] = {4, 3, 4, 24};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 4, 7, 15};
    program.m_registers[7] = {7, 5, 8, 29};
    program.m_registers[8] = {8, 6, 9, 17};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 1, 13, 31};
    program.m_registers[11] = {11, 6, 18, 26};
    program.m_registers[12] = {12, 12, 19, 19};
    program.m_registers[13] = {13, 13, 20, 20};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 15, 22, 22};
    program.m_registers[16] = {16, 16, 27, 27};
    program.m_registers[17] = {17, 17, 30, 30};

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
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 1, 11);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 1, 4);
    instructions->SetOperation(25, 0, 7);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 0, 3);
    instructions->SetOperation(29, 1, 7);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 10);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.242841f;
    data->d[1] = 0.175377f;
    data->d[2] = -0.565494f;
    data->d[3] = -0.533168f;
    data->d[4] = 0.142913f;
    data->d[5] = 1.059359f;
    data->d[6] = -0.969476f;
    data->d[7] = -0.359298f;
    data->d[8] = -0.901151f;
    data->d[9] = -0.231509f;
    data->d[10] = -0.361257f;
    data->d[11] = -1.016698f;
    data->d[12] = -0.422771f;
    data->d[13] = 0.002181f;
    data->d[14] = 0.547467f;
    data->d[15] = -0.409279f;
    data->d[16] = 0.255928f;
    data->d[17] = 0.000522f;
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
    *result->MinResult(0) = 0.016222f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.119483f;
    data->d[1] = 1.579220f;
    data->d[2] = -0.928051f;
    data->d[3] = 0.547968f;
    data->d[4] = 0.060714f;
    data->d[5] = -0.198169f;
    data->d[6] = 0.670878f;
    data->d[7] = -0.302926f;
    data->d[8] = -0.772542f;
    data->d[9] = -0.368877f;
    data->d[10] = 0.667385f;
    data->d[11] = 0.171300f;
    data->d[12] = 0.150193f;
    data->d[13] = 0.079422f;
    data->d[14] = 1.599840f;
    data->d[15] = 3.859614f;
    data->d[16] = 0.028519f;
    data->d[17] = 0.022770f;
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
    *result->MinResult(1) = 0.017348f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.562704f;
    data->d[1] = -0.190043f;
    data->d[2] = 0.902477f;
    data->d[3] = -0.460499f;
    data->d[4] = 0.118065f;
    data->d[5] = 0.125744f;
    data->d[6] = 0.534763f;
    data->d[7] = 0.800899f;
    data->d[8] = 1.077683f;
    data->d[9] = 1.102378f;
    data->d[10] = -0.457591f;
    data->d[11] = -0.392919f;
    data->d[12] = -2.409320f;
    data->d[13] = 0.814650f;
    data->d[14] = 0.366003f;
    data->d[15] = 0.050718f;
    data->d[16] = -0.041674f;
    data->d[17] = 0.241822f;
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
    *result->MinResult(2) = 0.018460f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.018460f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 35;
    state.m_seed = 3232319890;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
