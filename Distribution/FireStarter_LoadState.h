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
    program.m_dataSize = 22;
    program.m_maxRegisters = 6;

    program.m_registers.resize(22);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 24};
    program.m_registers[2] = {2, 1, 2, 26};
    program.m_registers[3] = {3, 2, 4, 8};
    program.m_registers[4] = {4, 4, 5, 5};
    program.m_registers[5] = {5, 3, 6, 21};
    program.m_registers[6] = {6, 2, 9, 25};
    program.m_registers[7] = {7, 4, 10, 23};
    program.m_registers[8] = {8, 8, 11, 11};
    program.m_registers[9] = {9, 9, 12, 12};
    program.m_registers[10] = {10, 10, 13, 13};
    program.m_registers[11] = {11, 11, 14, 14};
    program.m_registers[12] = {12, 5, 15, 20};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 14, 17, 17};
    program.m_registers[15] = {15, 15, 19, 19};
    program.m_registers[16] = {16, 16, 22, 22};
    program.m_registers[17] = {17, 17, 27, 27};
    program.m_registers[18] = {18, 18, 28, 28};
    program.m_registers[19] = {19, 19, 29, 29};
    program.m_registers[20] = {20, 20, 30, 30};
    program.m_registers[21] = {21, 21, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 1);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 1);
    instructions->SetOperation(8, 1, 3);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 1, 6);
    instructions->SetOperation(19, 1, 15);
    instructions->SetOperation(20, 0, 12);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 1, 7);
    instructions->SetOperation(24, 1, 1);
    instructions->SetOperation(25, 0, 6);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 1, 18);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 1, 20);
    instructions->SetOperation(31, 1, 21);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.542859f;
    data->d[1] = 0.756164f;
    data->d[2] = -4.120887f;
    data->d[3] = 0.273181f;
    data->d[4] = -0.286799f;
    data->d[5] = -2.721320f;
    data->d[6] = 0.256789f;
    data->d[7] = 0.034616f;
    data->d[8] = -0.529912f;
    data->d[9] = -3.184092f;
    data->d[10] = 0.652248f;
    data->d[11] = -0.620868f;
    data->d[12] = -0.107686f;
    data->d[13] = 0.674657f;
    data->d[14] = -0.170162f;
    data->d[15] = -2.117220f;
    data->d[16] = -1.062436f;
    data->d[17] = 2.913537f;
    data->d[18] = 5.155976f;
    data->d[19] = -6.176557f;
    data->d[20] = -1.164801f;
    data->d[21] = -0.812461f;
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
    *result->MinResult(0) = 0.007023f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.309124f;
    data->d[1] = 0.404557f;
    data->d[2] = 0.842596f;
    data->d[3] = 0.551038f;
    data->d[4] = -0.378875f;
    data->d[5] = -0.682379f;
    data->d[6] = -1.198448f;
    data->d[7] = -0.416437f;
    data->d[8] = 1.409001f;
    data->d[9] = 0.328626f;
    data->d[10] = 0.022109f;
    data->d[11] = -0.076299f;
    data->d[12] = 0.750662f;
    data->d[13] = 3.176336f;
    data->d[14] = -1.024250f;
    data->d[15] = 0.576798f;
    data->d[16] = 0.318350f;
    data->d[17] = -1.051059f;
    data->d[18] = 3.262288f;
    data->d[19] = -5.134116f;
    data->d[20] = 1.632313f;
    data->d[21] = 0.236057f;
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
    *result->MinResult(1) = 0.003915f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.575782f;
    data->d[1] = -0.651053f;
    data->d[2] = 0.182827f;
    data->d[3] = 0.117279f;
    data->d[4] = -0.221231f;
    data->d[5] = 0.723314f;
    data->d[6] = 0.539912f;
    data->d[7] = -0.615295f;
    data->d[8] = -0.468213f;
    data->d[9] = -2.505673f;
    data->d[10] = -0.338120f;
    data->d[11] = -0.835165f;
    data->d[12] = -0.666263f;
    data->d[13] = 2.603843f;
    data->d[14] = -2.515067f;
    data->d[15] = -0.005659f;
    data->d[16] = 0.227099f;
    data->d[17] = 3.400557f;
    data->d[18] = -1.921285f;
    data->d[19] = 1.614100f;
    data->d[20] = -0.909312f;
    data->d[21] = -1.151588f;
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
    *result->MinResult(2) = 0.049587f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.049587f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 0;
    state.m_seed = 3232319950;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
