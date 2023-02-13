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

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 128;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 1, 11);
    instructions->SetOperation(2, 0, 26);
    instructions->SetOperation(3, 0, 12);
    instructions->SetOperation(4, 0, 19);
    instructions->SetOperation(5, 1, 26);
    instructions->SetOperation(6, 0, 19);
    instructions->SetOperation(7, 0, 20);
    instructions->SetOperation(8, 0, 31);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 1, 1);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 0, 13);
    instructions->SetOperation(13, 1, 24);
    instructions->SetOperation(14, 0, 25);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 0, 27);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 1, 28);
    instructions->SetOperation(20, 1, 10);
    instructions->SetOperation(21, 0, 6);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 0, 29);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 1, 12);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 0, 0);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 0, 4);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.140729f;
    data->d[1] = -0.001008f;
    data->d[2] = -1.584087f;
    data->d[3] = 0.318438f;
    data->d[4] = -0.631136f;
    data->d[5] = 1.150905f;
    data->d[6] = -0.940779f;
    data->d[7] = -0.209595f;
    data->d[8] = 1.972972f;
    data->d[9] = 0.672055f;
    data->d[10] = -0.350036f;
    data->d[11] = 0.219084f;
    data->d[12] = -3.017738f;
    data->d[13] = -0.473692f;
    data->d[14] = 194.802170f;
    data->d[15] = -0.218753f;
    data->d[16] = 0.228953f;
    data->d[17] = 0.165477f;
    data->d[18] = -0.056947f;
    data->d[19] = 0.066035f;
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
    *(result->MinResult()) = 0.000126f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.086231f;
    data->d[1] = -0.007300f;
    data->d[2] = -0.798376f;
    data->d[3] = -1.254939f;
    data->d[4] = 0.759055f;
    data->d[5] = -1.765245f;
    data->d[6] = -1.046588f;
    data->d[7] = -0.397346f;
    data->d[8] = -1.011732f;
    data->d[9] = 0.944820f;
    data->d[10] = 0.048447f;
    data->d[11] = 1.983729f;
    data->d[12] = -0.078926f;
    data->d[13] = 3.046299f;
    data->d[14] = 215.804016f;
    data->d[15] = -109.564224f;
    data->d[16] = 0.727330f;
    data->d[17] = 2.580352f;
    data->d[18] = 0.806419f;
    data->d[19] = -0.073060f;
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
    *(result->MinResult()) = 0.000213f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.618001f;
    data->d[1] = -0.000535f;
    data->d[2] = -0.419736f;
    data->d[3] = 2.251869f;
    data->d[4] = 0.174277f;
    data->d[5] = -1.690674f;
    data->d[6] = 0.272162f;
    data->d[7] = 0.565600f;
    data->d[8] = 1.059075f;
    data->d[9] = 0.008734f;
    data->d[10] = -1.238271f;
    data->d[11] = -1.675263f;
    data->d[12] = -0.470321f;
    data->d[13] = 0.601906f;
    data->d[14] = 2.618090f;
    data->d[15] = 3.242547f;
    data->d[16] = -2.044571f;
    data->d[17] = -4.015254f;
    data->d[18] = -1.313641f;
    data->d[19] = 0.236543f;
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
    *(result->MinResult()) = 0.000272f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000272f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 67;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 2158365290639442650;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
