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
    settings.m_seed = 4;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 11);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 24);
    instructions->SetOperation(5, 1, 29);
    instructions->SetOperation(6, 1, 14);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 1, 24);
    instructions->SetOperation(10, 1, 7);
    instructions->SetOperation(11, 0, 1);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 1, 2);
    instructions->SetOperation(14, 1, 4);
    instructions->SetOperation(15, 1, 9);
    instructions->SetOperation(16, 0, 4);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 1, 28);
    instructions->SetOperation(19, 0, 12);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 0, 20);
    instructions->SetOperation(23, 1, 13);
    instructions->SetOperation(24, 0, 4);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 1, 26);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 1, 6);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 1, 14);
    instructions->SetOperation(31, 0, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.529719f;
    data->d[1] = 0.484545f;
    data->d[2] = 0.781289f;
    data->d[3] = 0.845285f;
    data->d[4] = -0.610636f;
    data->d[5] = 0.730899f;
    data->d[6] = -0.777361f;
    data->d[7] = 0.076765f;
    data->d[8] = -0.012003f;
    data->d[9] = -0.601770f;
    data->d[10] = 0.378576f;
    data->d[11] = 0.802033f;
    data->d[12] = -0.353754f;
    data->d[13] = 0.653475f;
    data->d[14] = -0.139289f;
    data->d[15] = -0.906624f;
    data->d[16] = -4.096435f;
    data->d[17] = 0.017272f;
    data->d[18] = 1.998434f;
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
    *result->MinResult(0) = 0.000041f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.467351f;
    data->d[1] = -0.558701f;
    data->d[2] = 0.969615f;
    data->d[3] = -0.970698f;
    data->d[4] = -0.707122f;
    data->d[5] = 0.101373f;
    data->d[6] = -0.815713f;
    data->d[7] = 2.864257f;
    data->d[8] = 1.325674f;
    data->d[9] = -1.180676f;
    data->d[10] = -0.097280f;
    data->d[11] = 0.796230f;
    data->d[12] = -4.039731f;
    data->d[13] = 1.717698f;
    data->d[14] = -0.132425f;
    data->d[15] = 0.324202f;
    data->d[16] = 0.326538f;
    data->d[17] = 0.604543f;
    data->d[18] = 1.256151f;
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
    *result->MinResult(1) = 0.000070f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.996093f;
    data->d[1] = -0.683432f;
    data->d[2] = 0.815140f;
    data->d[3] = 0.105766f;
    data->d[4] = 0.446261f;
    data->d[5] = -0.971897f;
    data->d[6] = 0.240235f;
    data->d[7] = 0.198733f;
    data->d[8] = 0.695481f;
    data->d[9] = -2.093083f;
    data->d[10] = 0.170638f;
    data->d[11] = -0.956187f;
    data->d[12] = 0.669503f;
    data->d[13] = -2.817517f;
    data->d[14] = 0.023050f;
    data->d[15] = 0.363286f;
    data->d[16] = 0.534839f;
    data->d[17] = 0.046480f;
    data->d[18] = 1.248152f;
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
    *result->MinResult(2) = 0.000037f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000070f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 17;
    state.m_index = 4;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
