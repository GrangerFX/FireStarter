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
    settings.m_processes = 10;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 13);
    instructions->SetOperation(1, 0, 12);
    instructions->SetOperation(2, 0, 27);
    instructions->SetOperation(3, 1, 16);
    instructions->SetOperation(4, 0, 21);
    instructions->SetOperation(5, 0, 20);
    instructions->SetOperation(6, 1, 22);
    instructions->SetOperation(7, 1, 12);
    instructions->SetOperation(8, 1, 28);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 1, 17);
    instructions->SetOperation(12, 1, 31);
    instructions->SetOperation(13, 0, 21);
    instructions->SetOperation(14, 1, 6);
    instructions->SetOperation(15, 0, 31);
    instructions->SetOperation(16, 1, 10);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 0, 23);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 1, 10);
    instructions->SetOperation(21, 1, 28);
    instructions->SetOperation(22, 1, 18);
    instructions->SetOperation(23, 1, 13);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 0, 27);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 0, 13);
    instructions->SetOperation(31, 1, 30);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.437774f;
    data->d[1] = -1.168355f;
    data->d[2] = 0.557021f;
    data->d[3] = 2.431672f;
    data->d[4] = 0.150494f;
    data->d[5] = 0.130182f;
    data->d[6] = -1.868054f;
    data->d[7] = 0.321217f;
    data->d[8] = 0.004307f;
    data->d[9] = -1.131212f;
    data->d[10] = 0.117160f;
    data->d[11] = 0.296978f;
    data->d[12] = -0.358608f;
    data->d[13] = 2.824470f;
    data->d[14] = 0.230734f;
    data->d[15] = -0.057585f;
    data->d[16] = 0.166440f;
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
    *result->MinResult(0) = 0.000081f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.466018f;
    data->d[1] = -1.078918f;
    data->d[2] = -0.059491f;
    data->d[3] = -0.081054f;
    data->d[4] = -1.072791f;
    data->d[5] = 1.944383f;
    data->d[6] = -0.506668f;
    data->d[7] = -2.362013f;
    data->d[8] = -0.048594f;
    data->d[9] = 0.153502f;
    data->d[10] = -0.763192f;
    data->d[11] = -0.592975f;
    data->d[12] = 1.170406f;
    data->d[13] = 2.757689f;
    data->d[14] = 0.770208f;
    data->d[15] = 1.949727f;
    data->d[16] = -0.121472f;
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
    *result->MinResult(1) = 0.000074f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.952060f;
    data->d[1] = -0.773530f;
    data->d[2] = -0.718668f;
    data->d[3] = -2.349535f;
    data->d[4] = -0.123449f;
    data->d[5] = 1.620056f;
    data->d[6] = 0.580092f;
    data->d[7] = 0.573747f;
    data->d[8] = -0.025482f;
    data->d[9] = -1.086508f;
    data->d[10] = -1.849853f;
    data->d[11] = 0.137024f;
    data->d[12] = -0.015573f;
    data->d[13] = 0.595542f;
    data->d[14] = -0.203528f;
    data->d[15] = -0.092087f;
    data->d[16] = 0.213631f;
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
    *result->MinResult(2) = 0.000131f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000131f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 1;
    state.m_index = 28;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
