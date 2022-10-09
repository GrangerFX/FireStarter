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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 69632;
    settings.m_iterations = 512;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 256;
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
    program.m_dataSize = 19;
    program.m_maxRegisters = 7;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 30};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 16};
    program.m_registers[4] = {4, 4, 5, 5};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 2, 7, 18};
    program.m_registers[7] = {7, 3, 8, 10};
    program.m_registers[8] = {8, 8, 9, 9};
    program.m_registers[9] = {9, 3, 11, 24};
    program.m_registers[10] = {10, 4, 12, 22};
    program.m_registers[11] = {11, 5, 14, 19};
    program.m_registers[12] = {12, 6, 15, 21};
    program.m_registers[13] = {13, 1, 17, 26};
    program.m_registers[14] = {14, 5, 20, 28};
    program.m_registers[15] = {15, 15, 23, 23};
    program.m_registers[16] = {16, 16, 25, 25};
    program.m_registers[17] = {17, 17, 29, 29};
    program.m_registers[18] = {18, 18, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 7);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 6);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 0, 14);
    instructions->SetOperation(21, 1, 12);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 1, 15);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 0, 14);
    instructions->SetOperation(28, 1, 14);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 0, 1);
    instructions->SetOperation(31, 1, 18);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.414828f;
    data->d[1] = -2.726764f;
    data->d[2] = 0.000000f;
    data->d[3] = -0.371186f;
    data->d[4] = 0.003046f;
    data->d[5] = -61.574444f;
    data->d[6] = 0.085300f;
    data->d[7] = -26.797789f;
    data->d[8] = 0.099060f;
    data->d[9] = -0.092842f;
    data->d[10] = 2.443627f;
    data->d[11] = -3.309397f;
    data->d[12] = 0.327414f;
    data->d[13] = 20.792532f;
    data->d[14] = -0.022392f;
    data->d[15] = -2.779265f;
    data->d[16] = -2.612975f;
    data->d[17] = 0.160895f;
    data->d[18] = -0.000000f;
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
    *result->MinResult(0) = 0.000001f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -2.348442f;
    data->d[1] = -0.742214f;
    data->d[2] = -0.000006f;
    data->d[3] = -0.482072f;
    data->d[4] = -0.456210f;
    data->d[5] = -0.032147f;
    data->d[6] = -0.015449f;
    data->d[7] = -77.389969f;
    data->d[8] = 0.823425f;
    data->d[9] = 0.455738f;
    data->d[10] = -2.100363f;
    data->d[11] = 0.967504f;
    data->d[12] = -1.262168f;
    data->d[13] = -0.855296f;
    data->d[14] = 0.554200f;
    data->d[15] = -6.637505f;
    data->d[16] = -24.249113f;
    data->d[17] = 1.607216f;
    data->d[18] = -0.118128f;
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
    *result->MinResult(1) = 0.000002f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.314721f;
    data->d[1] = -2.303265f;
    data->d[2] = -0.000015f;
    data->d[3] = -0.039076f;
    data->d[4] = 1.261802f;
    data->d[5] = -70.248375f;
    data->d[6] = 1.207378f;
    data->d[7] = -0.083765f;
    data->d[8] = -0.942143f;
    data->d[9] = 0.944870f;
    data->d[10] = -0.885763f;
    data->d[11] = 0.804160f;
    data->d[12] = 0.795967f;
    data->d[13] = -0.344643f;
    data->d[14] = 0.071411f;
    data->d[15] = 2.761649f;
    data->d[16] = 0.136684f;
    data->d[17] = 3.362407f;
    data->d[18] = 0.523608f;
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
    *result->MinResult(2) = 0.000006f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000006f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 79;
    state.m_bestIndex = 22025;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
