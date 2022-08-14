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
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 4352;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 5;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 1;
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
    program.m_maxRegisters = 5;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 26};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 19};
    program.m_registers[4] = {4, 2, 4, 11};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 3, 6, 31};
    program.m_registers[7] = {7, 7, 7, 7};
    program.m_registers[8] = {8, 4, 8, 28};
    program.m_registers[9] = {9, 9, 9, 9};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 14, 14};
    program.m_registers[12] = {12, 2, 15, 30};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 14, 18, 18};
    program.m_registers[15] = {15, 15, 20, 20};
    program.m_registers[16] = {16, 16, 21, 21};
    program.m_registers[17] = {17, 17, 23, 23};
    program.m_registers[18] = {18, 1, 25, 29};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 0, 8);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 1, 4);
    instructions->SetOperation(11, 1, 4);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 6);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 1, 1);
    instructions->SetOperation(18, 1, 14);
    instructions->SetOperation(19, 0, 3);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 1, 16);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 1, 8);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 1, 1);
    instructions->SetOperation(27, 1, 8);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 1, 12);
    instructions->SetOperation(31, 0, 6);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.663623f;
    data->d[1] = -0.319587f;
    data->d[2] = 0.679844f;
    data->d[3] = 0.748973f;
    data->d[4] = 0.656923f;
    data->d[5] = -0.675122f;
    data->d[6] = 0.958421f;
    data->d[7] = 0.333366f;
    data->d[8] = -1.542667f;
    data->d[9] = 0.810944f;
    data->d[10] = 0.535519f;
    data->d[11] = 0.549774f;
    data->d[12] = 0.066693f;
    data->d[13] = -0.315673f;
    data->d[14] = 0.021949f;
    data->d[15] = 0.745547f;
    data->d[16] = 0.001842f;
    data->d[17] = -0.566838f;
    data->d[18] = 0.910829f;
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
    *result->MinResult(0) = 0.000959f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.640117f;
    data->d[1] = -0.384417f;
    data->d[2] = 0.443558f;
    data->d[3] = -0.439017f;
    data->d[4] = -0.734169f;
    data->d[5] = 0.661058f;
    data->d[6] = 0.837429f;
    data->d[7] = 0.432911f;
    data->d[8] = 0.145280f;
    data->d[9] = 1.236394f;
    data->d[10] = -0.140170f;
    data->d[11] = -0.681493f;
    data->d[12] = 0.213951f;
    data->d[13] = 0.982936f;
    data->d[14] = -0.183280f;
    data->d[15] = -3.482352f;
    data->d[16] = -0.160846f;
    data->d[17] = 0.088473f;
    data->d[18] = -0.232805f;
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
    *result->MinResult(1) = 0.003444f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.447016f;
    data->d[1] = -0.919581f;
    data->d[2] = -0.746825f;
    data->d[3] = 0.574851f;
    data->d[4] = 0.236077f;
    data->d[5] = 0.611137f;
    data->d[6] = -0.038808f;
    data->d[7] = -5.878294f;
    data->d[8] = -0.035826f;
    data->d[9] = 0.266452f;
    data->d[10] = 3.576851f;
    data->d[11] = -0.938856f;
    data->d[12] = -0.603593f;
    data->d[13] = 0.760168f;
    data->d[14] = -0.215115f;
    data->d[15] = -0.635406f;
    data->d[16] = -0.702376f;
    data->d[17] = 1.872979f;
    data->d[18] = -0.034039f;
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
    *result->MinResult(2) = 0.003402f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.003444f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1360;
    state.m_seed = 663892466;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
