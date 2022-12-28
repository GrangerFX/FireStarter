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
    instructions->SetOperation(0, 1, 4);
    instructions->SetOperation(1, 1, 9);
    instructions->SetOperation(2, 0, 12);
    instructions->SetOperation(3, 0, 12);
    instructions->SetOperation(4, 1, 20);
    instructions->SetOperation(5, 0, 24);
    instructions->SetOperation(6, 0, 3);
    instructions->SetOperation(7, 0, 10);
    instructions->SetOperation(8, 1, 21);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 15);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 1, 21);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 0, 19);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 1, 15);
    instructions->SetOperation(18, 0, 19);
    instructions->SetOperation(19, 1, 23);
    instructions->SetOperation(20, 0, 6);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 1, 13);
    instructions->SetOperation(23, 0, 26);
    instructions->SetOperation(24, 1, 23);
    instructions->SetOperation(25, 0, 30);
    instructions->SetOperation(26, 0, 21);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 0, 9);
    instructions->SetOperation(29, 0, 25);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 1, 16);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -2.673290f;
    data->d[1] = -0.468303f;
    data->d[2] = 0.576468f;
    data->d[3] = -2.937917f;
    data->d[4] = 3.414874f;
    data->d[5] = -0.567698f;
    data->d[6] = 0.024933f;
    data->d[7] = 1.461153f;
    data->d[8] = 0.736283f;
    data->d[9] = -1.495329f;
    data->d[10] = -1.031311f;
    data->d[11] = 0.011348f;
    data->d[12] = 1.491716f;
    data->d[13] = 1.001587f;
    data->d[14] = 1.080214f;
    data->d[15] = -0.639945f;
    data->d[16] = -0.484900f;
    data->d[17] = -0.536600f;
    data->d[18] = 0.995482f;
    data->d[19] = -0.995482f;
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
    *result->MinResult(0) = 0.000000f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -2.286866f;
    data->d[1] = -0.803793f;
    data->d[2] = -0.545059f;
    data->d[3] = -1.376208f;
    data->d[4] = 2.219199f;
    data->d[5] = 0.520719f;
    data->d[6] = -0.019020f;
    data->d[7] = 0.762134f;
    data->d[8] = 1.937975f;
    data->d[9] = -1.069220f;
    data->d[10] = -0.981881f;
    data->d[11] = -0.510316f;
    data->d[12] = -0.590788f;
    data->d[13] = 2.468382f;
    data->d[14] = 1.272281f;
    data->d[15] = -1.478892f;
    data->d[16] = 4.408311f;
    data->d[17] = 0.042941f;
    data->d[18] = -0.534187f;
    data->d[19] = 0.416055f;
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
    *result->MinResult(1) = 0.000001f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.656412f;
    data->d[1] = -0.961582f;
    data->d[2] = -0.206336f;
    data->d[3] = -0.041706f;
    data->d[4] = 1.779543f;
    data->d[5] = -0.121807f;
    data->d[6] = 0.816726f;
    data->d[7] = 1.612209f;
    data->d[8] = -0.451200f;
    data->d[9] = 1.154679f;
    data->d[10] = -1.832999f;
    data->d[11] = 1.479716f;
    data->d[12] = 0.704082f;
    data->d[13] = 2.971205f;
    data->d[14] = 0.081220f;
    data->d[15] = -0.944254f;
    data->d[16] = 0.407313f;
    data->d[17] = 1.400743f;
    data->d[18] = -1.433911f;
    data->d[19] = 1.957510f;
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
    *result->MinResult(2) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000001f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 56;
    state.m_index = 194;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
