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
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_generations = 10;
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
    program.m_dataSize = 20;
    program.m_maxRegisters = 6;

    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 16};
    program.m_registers[2] = {2, 1, 2, 10};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 2, 4, 26};
    program.m_registers[5] = {5, 3, 5, 20};
    program.m_registers[6] = {6, 4, 6, 27};
    program.m_registers[7] = {7, 7, 7, 7};
    program.m_registers[8] = {8, 8, 8, 8};
    program.m_registers[9] = {9, 9, 9, 9};
    program.m_registers[10] = {10, 1, 11, 18};
    program.m_registers[11] = {11, 5, 14, 24};
    program.m_registers[12] = {12, 12, 15, 15};
    program.m_registers[13] = {13, 0, 17, 30};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 15, 22, 22};
    program.m_registers[16] = {16, 16, 23, 23};
    program.m_registers[17] = {17, 17, 28, 28};
    program.m_registers[18] = {18, 18, 29, 29};
    program.m_registers[19] = {19, 19, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 8);
    instructions->SetOperation(9, 1, 9);
    instructions->SetOperation(10, 0, 2);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 1, 4);
    instructions->SetOperation(13, 0, 4);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 1, 11);
    instructions->SetOperation(20, 1, 5);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 1, 16);
    instructions->SetOperation(24, 1, 11);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 0, 6);
    instructions->SetOperation(28, 1, 17);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 1, 13);
    instructions->SetOperation(31, 1, 19);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.456854f;
    data->d[1] = 3.156090f;
    data->d[2] = 0.675590f;
    data->d[3] = -0.552326f;
    data->d[4] = 0.235281f;
    data->d[5] = -0.826179f;
    data->d[6] = 0.352863f;
    data->d[7] = -0.285194f;
    data->d[8] = 0.050671f;
    data->d[9] = -0.110201f;
    data->d[10] = 0.902157f;
    data->d[11] = 1.051489f;
    data->d[12] = -0.924520f;
    data->d[13] = 0.748396f;
    data->d[14] = -0.434436f;
    data->d[15] = 0.709337f;
    data->d[16] = -0.961229f;
    data->d[17] = -0.553259f;
    data->d[18] = -0.828292f;
    data->d[19] = -0.335208f;
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
    *result->MinResult(0) = 0.010602f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.467237f;
    data->d[1] = 0.990909f;
    data->d[2] = 0.479061f;
    data->d[3] = 0.920556f;
    data->d[4] = 0.767870f;
    data->d[5] = -1.972504f;
    data->d[6] = 0.248662f;
    data->d[7] = 0.603911f;
    data->d[8] = 0.291269f;
    data->d[9] = 0.377088f;
    data->d[10] = -0.949219f;
    data->d[11] = 0.357053f;
    data->d[12] = -0.354998f;
    data->d[13] = 0.220949f;
    data->d[14] = -0.682431f;
    data->d[15] = 0.732026f;
    data->d[16] = -1.167548f;
    data->d[17] = 0.679300f;
    data->d[18] = -0.433461f;
    data->d[19] = -0.218528f;
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
    *result->MinResult(1) = 0.002797f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.476677f;
    data->d[1] = 0.969519f;
    data->d[2] = 0.896230f;
    data->d[3] = -0.474411f;
    data->d[4] = -0.979536f;
    data->d[5] = 0.373252f;
    data->d[6] = 0.067868f;
    data->d[7] = -0.562924f;
    data->d[8] = 0.175372f;
    data->d[9] = -0.092005f;
    data->d[10] = -0.472033f;
    data->d[11] = 0.669123f;
    data->d[12] = -0.180898f;
    data->d[13] = -0.515897f;
    data->d[14] = 0.111857f;
    data->d[15] = -0.421352f;
    data->d[16] = 0.773096f;
    data->d[17] = 0.054175f;
    data->d[18] = 0.124002f;
    data->d[19] = 0.546617f;
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
    *result->MinResult(2) = 0.009914f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.010602f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 810;
    state.m_seed = 3232320670;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
