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

    settings.m_mode = FIRESTARTER_RANDOM;
    settings.m_units = 2;
    settings.m_processes = 6;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 10000;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    program.m_uniqueRegisters = 20;

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 0, 8);
    instructions->SetOperation(9, 1, 0);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 0, 6);
    instructions->SetOperation(13, 1, 9);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 1, 10);
    instructions->SetOperation(20, 1, 10);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 0, 0);
    instructions->SetOperation(23, 1, 15);
    instructions->SetOperation(24, 0, 10);
    instructions->SetOperation(25, 1, 9);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 0);
    instructions->SetOperation(30, 0, 13);
    instructions->SetOperation(31, 1, 19);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.144042f;
    data->d[1] = 4.027759f;
    data->d[2] = 0.024423f;
    data->d[3] = -0.720345f;
    data->d[4] = -1.002650f;
    data->d[5] = -0.447484f;
    data->d[6] = -0.572526f;
    data->d[7] = 0.519972f;
    data->d[8] = 23.174820f;
    data->d[9] = 0.875931f;
    data->d[10] = -0.807421f;
    data->d[11] = -0.162810f;
    data->d[12] = -0.021795f;
    data->d[13] = -0.733384f;
    data->d[14] = -4.119108f;
    data->d[15] = -31.261642f;
    data->d[16] = 9.502599f;
    data->d[17] = -0.017397f;
    data->d[18] = 0.398967f;
    data->d[19] = 0.915972f;
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
    *result->MinResult(0) = 0.000121f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.269680f;
    data->d[1] = -2.621490f;
    data->d[2] = -2.110518f;
    data->d[3] = 0.133883f;
    data->d[4] = -0.692777f;
    data->d[5] = -0.058676f;
    data->d[6] = 0.502660f;
    data->d[7] = -6.515810f;
    data->d[8] = 0.794786f;
    data->d[9] = -1.995500f;
    data->d[10] = 0.041259f;
    data->d[11] = -0.804130f;
    data->d[12] = -0.431632f;
    data->d[13] = -0.050447f;
    data->d[14] = -1.433734f;
    data->d[15] = -0.180781f;
    data->d[16] = -7.739546f;
    data->d[17] = -0.506873f;
    data->d[18] = 1.013819f;
    data->d[19] = -0.129944f;
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
    *result->MinResult(1) = 0.000134f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.574489f;
    data->d[1] = -1.581265f;
    data->d[2] = 0.487109f;
    data->d[3] = -0.449349f;
    data->d[4] = 2.065191f;
    data->d[5] = -0.826666f;
    data->d[6] = -1.798354f;
    data->d[7] = 1.561383f;
    data->d[8] = 0.449344f;
    data->d[9] = 0.352644f;
    data->d[10] = -0.014294f;
    data->d[11] = -0.396535f;
    data->d[12] = -0.124951f;
    data->d[13] = 0.182994f;
    data->d[14] = -3.208069f;
    data->d[15] = 0.837800f;
    data->d[16] = -0.754490f;
    data->d[17] = -0.496866f;
    data->d[18] = -0.383341f;
    data->d[19] = 0.215769f;
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
    *result->MinResult(2) = 0.000126f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000134f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 239;
    state.m_bestIndex = 7403;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
