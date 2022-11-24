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

    settings.m_mode = FIRESTARTER_TEST;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 100;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 12);
    instructions->SetOperation(2, 1, 17);
    instructions->SetOperation(3, 1, 11);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 0, 14);
    instructions->SetOperation(6, 1, 14);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 0, 26);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 1, 31);
    instructions->SetOperation(20, 0, 22);
    instructions->SetOperation(21, 1, 27);
    instructions->SetOperation(22, 1, 6);
    instructions->SetOperation(23, 1, 25);
    instructions->SetOperation(24, 0, 25);
    instructions->SetOperation(25, 1, 8);
    instructions->SetOperation(26, 1, 9);
    instructions->SetOperation(27, 1, 6);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 0, 16);
    instructions->SetOperation(31, 1, 10);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.530879f;
    data->d[1] = 0.760358f;
    data->d[2] = 0.771742f;
    data->d[3] = 0.975059f;
    data->d[4] = 0.134481f;
    data->d[5] = 0.018494f;
    data->d[6] = -0.288256f;
    data->d[7] = 0.234455f;
    data->d[8] = -0.082033f;
    data->d[9] = -1.007139f;
    data->d[10] = 2.424682f;
    data->d[11] = -1.504223f;
    data->d[12] = 11.158524f;
    data->d[13] = -4.211494f;
    data->d[14] = -1.942649f;
    data->d[15] = 7.977122f;
    data->d[16] = -3.174694f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(0) = 0.000660f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.455226f;
    data->d[1] = 2.143869f;
    data->d[2] = 2.314003f;
    data->d[3] = -2.444544f;
    data->d[4] = -0.361827f;
    data->d[5] = -0.197232f;
    data->d[6] = -0.804343f;
    data->d[7] = -0.313473f;
    data->d[8] = -0.614687f;
    data->d[9] = -1.836329f;
    data->d[10] = 3.195725f;
    data->d[11] = 0.164252f;
    data->d[12] = -0.922893f;
    data->d[13] = 2.025520f;
    data->d[14] = 1.987231f;
    data->d[15] = -0.872669f;
    data->d[16] = -14.009570f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(1) = 0.000620f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.270186f;
    data->d[1] = -0.314254f;
    data->d[2] = 0.153198f;
    data->d[3] = -1.109695f;
    data->d[4] = 0.736469f;
    data->d[5] = -0.027733f;
    data->d[6] = 0.623060f;
    data->d[7] = 0.892151f;
    data->d[8] = 0.805126f;
    data->d[9] = -0.729586f;
    data->d[10] = -0.726528f;
    data->d[11] = 0.044601f;
    data->d[12] = 0.708454f;
    data->d[13] = -1.430411f;
    data->d[14] = -1.300531f;
    data->d[15] = -0.074560f;
    data->d[16] = -2.966670f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(2) = 0.004628f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.004628f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 2;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
