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

    settings.m_mode = FIRESTARTER_UNIT;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 3533;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 31);
    instructions->SetOperation(1, 1, 11);
    instructions->SetOperation(2, 1, 24);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 0, 9);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 1, 1);
    instructions->SetOperation(8, 0, 22);
    instructions->SetOperation(9, 1, 3);
    instructions->SetOperation(10, 1, 22);
    instructions->SetOperation(11, 0, 0);
    instructions->SetOperation(12, 1, 28);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 4);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 1);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 4);
    instructions->SetOperation(20, 0, 14);
    instructions->SetOperation(21, 1, 19);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 1, 23);
    instructions->SetOperation(24, 0, 0);
    instructions->SetOperation(25, 1, 30);
    instructions->SetOperation(26, 0, 1);
    instructions->SetOperation(27, 0, 14);
    instructions->SetOperation(28, 1, 14);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 0, 11);
    instructions->SetOperation(31, 1, 16);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.366767f;
    data->d[1] = -2.774825f;
    data->d[2] = -0.000001f;
    data->d[3] = 0.408472f;
    data->d[4] = -0.389916f;
    data->d[5] = 0.596201f;
    data->d[6] = 0.382814f;
    data->d[7] = 4.815584f;
    data->d[8] = -2.183760f;
    data->d[9] = 0.438621f;
    data->d[10] = -0.787702f;
    data->d[11] = -0.142611f;
    data->d[12] = -1.519426f;
    data->d[13] = -0.764967f;
    data->d[14] = -1.811377f;
    data->d[15] = 3.918644f;
    data->d[16] = 36.705299f;
    data->d[17] = -1.631955f;
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
    *result->MinResult(0) = 0.000001f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.901778f;
    data->d[1] = -2.188855f;
    data->d[2] = -0.000035f;
    data->d[3] = 0.302282f;
    data->d[4] = -0.376925f;
    data->d[5] = -0.378863f;
    data->d[6] = -0.302938f;
    data->d[7] = 3.501456f;
    data->d[8] = 1.474554f;
    data->d[9] = -1.026322f;
    data->d[10] = -0.577206f;
    data->d[11] = 0.026876f;
    data->d[12] = 4.621105f;
    data->d[13] = -2.862598f;
    data->d[14] = -1.371401f;
    data->d[15] = -3.196499f;
    data->d[16] = 73.445442f;
    data->d[17] = 1.247153f;
    data->d[18] = -0.118110f;
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
    *result->MinResult(1) = 0.000011f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.246913f;
    data->d[1] = -2.864913f;
    data->d[2] = -0.000003f;
    data->d[3] = -0.200133f;
    data->d[4] = 0.151980f;
    data->d[5] = 1.654353f;
    data->d[6] = -0.511164f;
    data->d[7] = -6.098550f;
    data->d[8] = -5.188540f;
    data->d[9] = 0.000068f;
    data->d[10] = -3.066641f;
    data->d[11] = 0.844832f;
    data->d[12] = 0.325519f;
    data->d[13] = 0.869977f;
    data->d[14] = -7.115576f;
    data->d[15] = 8.728668f;
    data->d[16] = 0.486947f;
    data->d[17] = -0.216530f;
    data->d[18] = 0.523610f;
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
    *result->MinResult(2) = 0.000017f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000017f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 5;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
