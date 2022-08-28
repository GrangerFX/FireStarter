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
    settings.m_process = 0;
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
    program.m_dataSize = 21;
    program.m_maxRegisters = 7;

    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 23};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 31};
    program.m_registers[4] = {4, 2, 4, 14};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 3, 6, 21};
    program.m_registers[7] = {7, 4, 7, 24};
    program.m_registers[8] = {8, 5, 8, 30};
    program.m_registers[9] = {9, 9, 9, 9};
    program.m_registers[10] = {10, 6, 11, 19};
    program.m_registers[11] = {11, 11, 12, 12};
    program.m_registers[12] = {12, 12, 15, 15};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 14, 18, 18};
    program.m_registers[15] = {15, 15, 20, 20};
    program.m_registers[16] = {16, 16, 22, 22};
    program.m_registers[17] = {17, 17, 25, 25};
    program.m_registers[18] = {18, 18, 26, 26};
    program.m_registers[19] = {19, 19, 28, 28};
    program.m_registers[20] = {20, 20, 29, 29};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 1, 7);
    instructions->SetOperation(8, 0, 8);
    instructions->SetOperation(9, 1, 9);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 1, 8);
    instructions->SetOperation(14, 1, 4);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 3);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 1, 10);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 6);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 0, 7);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 1, 18);
    instructions->SetOperation(27, 0, 8);
    instructions->SetOperation(28, 1, 19);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 1, 8);
    instructions->SetOperation(31, 0, 3);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -4.106681f;
    data->d[1] = 4.625697f;
    data->d[2] = -0.519112f;
    data->d[3] = 0.350832f;
    data->d[4] = 1.060501f;
    data->d[5] = -0.693091f;
    data->d[6] = 1.046822f;
    data->d[7] = 0.578391f;
    data->d[8] = -0.495823f;
    data->d[9] = 0.662428f;
    data->d[10] = 0.621397f;
    data->d[11] = 0.361478f;
    data->d[12] = -0.811950f;
    data->d[13] = 0.332788f;
    data->d[14] = 0.487886f;
    data->d[15] = 0.740614f;
    data->d[16] = 3.932421f;
    data->d[17] = 0.755550f;
    data->d[18] = 1.020439f;
    data->d[19] = 0.003809f;
    data->d[20] = 4.546564f;
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
    *result->MinResult(0) = 0.000130f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.414604f;
    data->d[1] = 0.204634f;
    data->d[2] = -1.773149f;
    data->d[3] = 1.393261f;
    data->d[4] = 0.288985f;
    data->d[5] = 0.355624f;
    data->d[6] = 0.502712f;
    data->d[7] = 0.915833f;
    data->d[8] = 0.798014f;
    data->d[9] = -1.460739f;
    data->d[10] = 2.154461f;
    data->d[11] = -1.518209f;
    data->d[12] = -1.060982f;
    data->d[13] = 0.049324f;
    data->d[14] = 0.889406f;
    data->d[15] = 0.540784f;
    data->d[16] = -1.319133f;
    data->d[17] = -3.845345f;
    data->d[18] = 1.228335f;
    data->d[19] = -9.804454f;
    data->d[20] = 0.023585f;
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
    *result->MinResult(1) = 0.000028f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 5.873813f;
    data->d[1] = -4.588641f;
    data->d[2] = -5.640103f;
    data->d[3] = -0.300928f;
    data->d[4] = 0.653872f;
    data->d[5] = -1.149672f;
    data->d[6] = -1.047411f;
    data->d[7] = 0.040130f;
    data->d[8] = 1.371903f;
    data->d[9] = 1.994489f;
    data->d[10] = -0.711910f;
    data->d[11] = -1.405352f;
    data->d[12] = 0.403424f;
    data->d[13] = 0.938039f;
    data->d[14] = -40.189701f;
    data->d[15] = -55.322594f;
    data->d[16] = 0.010116f;
    data->d[17] = -3.899337f;
    data->d[18] = 8.056782f;
    data->d[19] = -3.192550f;
    data->d[20] = -0.623680f;
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
    *result->MinResult(2) = 0.000157f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000157f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 15000;
    state.m_seed = 3232334950;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
