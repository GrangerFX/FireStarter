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
    settings.m_units = 2;
    settings.m_processes = 12;
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
    instructions->SetOperation(0, 1, 11);
    instructions->SetOperation(1, 1, 24);
    instructions->SetOperation(2, 0, 10);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 9);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 1, 3);
    instructions->SetOperation(9, 1, 22);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 1, 28);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 4);
    instructions->SetOperation(14, 0, 19);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 1, 5);
    instructions->SetOperation(18, 0, 4);
    instructions->SetOperation(19, 0, 14);
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
    instructions->SetOperation(31, 1, 31);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141632f;
    data->d[1] = 0.000075f;
    data->d[2] = 0.470613f;
    data->d[3] = 0.436773f;
    data->d[4] = -0.620072f;
    data->d[5] = 0.308234f;
    data->d[6] = 2.443679f;
    data->d[7] = -4.682817f;
    data->d[8] = 0.653130f;
    data->d[9] = 0.829795f;
    data->d[10] = -0.387596f;
    data->d[11] = -1.217459f;
    data->d[12] = 0.589272f;
    data->d[13] = 0.104033f;
    data->d[14] = -2.975986f;
    data->d[15] = -32.354332f;
    data->d[16] = -0.429611f;
    data->d[17] = -0.000045f;
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
    *result->MinResult(0) = 0.000012f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090727f;
    data->d[1] = 0.000115f;
    data->d[2] = 0.166859f;
    data->d[3] = -1.627614f;
    data->d[4] = -1.179901f;
    data->d[5] = -0.459820f;
    data->d[6] = -0.425772f;
    data->d[7] = 0.516108f;
    data->d[8] = 0.704406f;
    data->d[9] = 0.513062f;
    data->d[10] = -0.295244f;
    data->d[11] = -0.734134f;
    data->d[12] = 1.567280f;
    data->d[13] = -0.158811f;
    data->d[14] = -5.023326f;
    data->d[15] = -11.612133f;
    data->d[16] = -0.671731f;
    data->d[17] = -0.118208f;
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
    *result->MinResult(1) = 0.000011f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.618027f;
    data->d[1] = 0.000074f;
    data->d[2] = -0.100053f;
    data->d[3] = -0.346654f;
    data->d[4] = -3.854547f;
    data->d[5] = 0.788659f;
    data->d[6] = -0.354070f;
    data->d[7] = 0.513218f;
    data->d[8] = -0.096591f;
    data->d[9] = -0.058816f;
    data->d[10] = -1.752455f;
    data->d[11] = -0.700748f;
    data->d[12] = -3.356660f;
    data->d[13] = 1.303500f;
    data->d[14] = -0.489674f;
    data->d[15] = 0.401091f;
    data->d[16] = -0.942297f;
    data->d[17] = 0.523556f;
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
    *result->MinResult(2) = 0.000016f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000016f;
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
