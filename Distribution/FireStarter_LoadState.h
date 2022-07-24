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
    settings.m_generations = 10;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_INDIVIDUAL;
    settings.m_attempts = 32;
    settings.m_seed = 0;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 21;
    program.m_maxRegisters = 6;

    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 0, 3, 18};
    program.m_registers[4] = {4, 1, 4, 31};
    program.m_registers[5] = {5, 2, 5, 23};
    program.m_registers[6] = {6, 6, 6, 6};
    program.m_registers[7] = {7, 3, 7, 22};
    program.m_registers[8] = {8, 8, 8, 8};
    program.m_registers[9] = {9, 4, 9, 24};
    program.m_registers[10] = {10, 10, 10, 10};
    program.m_registers[11] = {11, 11, 11, 11};
    program.m_registers[12] = {12, 5, 15, 30};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 14, 17, 17};
    program.m_registers[15] = {15, 15, 19, 19};
    program.m_registers[16] = {16, 0, 20, 25};
    program.m_registers[17] = {17, 17, 21, 21};
    program.m_registers[18] = {18, 18, 26, 26};
    program.m_registers[19] = {19, 19, 27, 27};
    program.m_registers[20] = {20, 20, 29, 29};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 0, 8);
    instructions->SetOperation(9, 1, 9);
    instructions->SetOperation(10, 1, 10);
    instructions->SetOperation(11, 0, 11);
    instructions->SetOperation(12, 0, 5);
    instructions->SetOperation(13, 0, 7);
    instructions->SetOperation(14, 1, 7);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 1, 15);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 1, 7);
    instructions->SetOperation(23, 0, 5);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 1, 19);
    instructions->SetOperation(28, 1, 4);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 1, 4);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.679313f;
    data->d[1] = 0.122111f;
    data->d[2] = -1.028807f;
    data->d[3] = -0.843759f;
    data->d[4] = 0.650808f;
    data->d[5] = -0.818240f;
    data->d[6] = 0.104037f;
    data->d[7] = 0.734335f;
    data->d[8] = -0.085539f;
    data->d[9] = -1.421968f;
    data->d[10] = -0.431687f;
    data->d[11] = -0.554557f;
    data->d[12] = -0.165124f;
    data->d[13] = -0.678675f;
    data->d[14] = -0.919069f;
    data->d[15] = 0.101186f;
    data->d[16] = -0.587929f;
    data->d[17] = -0.640002f;
    data->d[18] = 0.661726f;
    data->d[19] = -0.434193f;
    data->d[20] = -0.664629f;
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
    *result->MinResult(0) = 0.036704f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.560480f;
    data->d[1] = -2.829356f;
    data->d[2] = 0.656264f;
    data->d[3] = -0.780801f;
    data->d[4] = 0.946728f;
    data->d[5] = -0.074436f;
    data->d[6] = -1.403691f;
    data->d[7] = 0.103994f;
    data->d[8] = -0.112979f;
    data->d[9] = 0.652252f;
    data->d[10] = -0.930417f;
    data->d[11] = -2.715724f;
    data->d[12] = 0.244493f;
    data->d[13] = -0.796333f;
    data->d[14] = -3.108194f;
    data->d[15] = 0.621660f;
    data->d[16] = 0.538074f;
    data->d[17] = 0.518122f;
    data->d[18] = 0.821484f;
    data->d[19] = 0.733693f;
    data->d[20] = 0.470609f;
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
    *result->MinResult(1) = 0.050890f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.101222f;
    data->d[1] = -1.529713f;
    data->d[2] = 0.384267f;
    data->d[3] = 0.140548f;
    data->d[4] = -0.666564f;
    data->d[5] = 0.541144f;
    data->d[6] = -0.834528f;
    data->d[7] = 1.450008f;
    data->d[8] = -0.585979f;
    data->d[9] = -0.978012f;
    data->d[10] = -4.636576f;
    data->d[11] = -0.618078f;
    data->d[12] = -0.545532f;
    data->d[13] = 0.682648f;
    data->d[14] = -0.384292f;
    data->d[15] = 1.703159f;
    data->d[16] = -2.627247f;
    data->d[17] = 1.948041f;
    data->d[18] = -0.732616f;
    data->d[19] = 0.081863f;
    data->d[20] = 0.748059f;
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
    *result->MinResult(2) = 0.049400f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.050890f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 50;
    state.m_seed = 3232319910;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
