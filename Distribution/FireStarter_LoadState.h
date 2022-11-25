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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_units = 10;
    settings.m_processes = 16;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 5;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 21);
    instructions->SetOperation(1, 1, 18);
    instructions->SetOperation(2, 0, 22);
    instructions->SetOperation(3, 1, 13);
    instructions->SetOperation(4, 0, 16);
    instructions->SetOperation(5, 0, 27);
    instructions->SetOperation(6, 0, 12);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 1, 4);
    instructions->SetOperation(9, 0, 10);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 1, 16);
    instructions->SetOperation(13, 1, 4);
    instructions->SetOperation(14, 0, 2);
    instructions->SetOperation(15, 1, 27);
    instructions->SetOperation(16, 0, 31);
    instructions->SetOperation(17, 1, 4);
    instructions->SetOperation(18, 0, 22);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 0, 27);
    instructions->SetOperation(22, 0, 12);
    instructions->SetOperation(23, 0, 20);
    instructions->SetOperation(24, 1, 13);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 1, 29);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 0, 31);
    instructions->SetOperation(31, 0, 13);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 1.903101f;
    data->d[1] = -3.751030f;
    data->d[2] = 0.724109f;
    data->d[3] = 0.491523f;
    data->d[4] = -0.711488f;
    data->d[5] = -0.741290f;
    data->d[6] = -0.959254f;
    data->d[7] = 1.353371f;
    data->d[8] = -0.512331f;
    data->d[9] = -1.236092f;
    data->d[10] = -0.167769f;
    data->d[11] = 1.718940f;
    data->d[12] = -0.072120f;
    data->d[13] = 0.658248f;
    data->d[14] = 4.980282f;
    data->d[15] = -0.165933f;
    data->d[16] = -68.747208f;
    data->d[17] = 0.188974f;
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
    *result->MinResult(0) = 0.000335f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.151628f;
    data->d[1] = -1.265858f;
    data->d[2] = -0.442858f;
    data->d[3] = 1.169294f;
    data->d[4] = 0.684286f;
    data->d[5] = 0.746081f;
    data->d[6] = -1.002631f;
    data->d[7] = 0.794864f;
    data->d[8] = -0.334769f;
    data->d[9] = -0.074528f;
    data->d[10] = -1.015475f;
    data->d[11] = -1.456973f;
    data->d[12] = -0.946699f;
    data->d[13] = 0.760711f;
    data->d[14] = 0.844726f;
    data->d[15] = -0.017456f;
    data->d[16] = 0.374469f;
    data->d[17] = 0.402648f;
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
    *result->MinResult(1) = 0.000085f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.247055f;
    data->d[1] = -3.520352f;
    data->d[2] = 0.319833f;
    data->d[3] = 0.030012f;
    data->d[4] = -0.825067f;
    data->d[5] = -0.839691f;
    data->d[6] = 0.618127f;
    data->d[7] = -1.247726f;
    data->d[8] = -0.724153f;
    data->d[9] = -1.116980f;
    data->d[10] = 0.612889f;
    data->d[11] = 0.386794f;
    data->d[12] = -0.439856f;
    data->d[13] = -0.651304f;
    data->d[14] = 3.026678f;
    data->d[15] = -1.127636f;
    data->d[16] = 5.310894f;
    data->d[17] = -0.303076f;
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
    *result->MinResult(2) = 0.000334f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000335f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 3;
    state.m_index = 9;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
