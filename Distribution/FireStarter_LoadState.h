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
    settings.m_attempts = 3;
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
    instructions->SetOperation(7, 1, 5);
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
    data->d[0] = -0.487294f;
    data->d[1] = -2.654306f;
    data->d[2] = 0.000015f;
    data->d[3] = 0.154636f;
    data->d[4] = -1.469124f;
    data->d[5] = 2.248043f;
    data->d[6] = 0.971103f;
    data->d[7] = 3.531731f;
    data->d[8] = -5.324136f;
    data->d[9] = -0.003473f;
    data->d[10] = -1.363737f;
    data->d[11] = -0.112684f;
    data->d[12] = -0.031562f;
    data->d[13] = 4.444167f;
    data->d[14] = 0.678447f;
    data->d[15] = 8.735703f;
    data->d[16] = -1.434667f;
    data->d[17] = 1.713361f;
    data->d[18] = -0.000010f;
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
    *result->MinResult(0) = 0.000004f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.238662f;
    data->d[1] = -3.329271f;
    data->d[2] = -0.000080f;
    data->d[3] = 0.133931f;
    data->d[4] = 0.478345f;
    data->d[5] = 4.339946f;
    data->d[6] = -0.586820f;
    data->d[7] = -4.485564f;
    data->d[8] = -3.658223f;
    data->d[9] = 0.002612f;
    data->d[10] = -0.564799f;
    data->d[11] = -0.622607f;
    data->d[12] = -0.626039f;
    data->d[13] = 3.098907f;
    data->d[14] = -0.106916f;
    data->d[15] = 0.895090f;
    data->d[16] = 1.398779f;
    data->d[17] = -1.286645f;
    data->d[18] = -0.118077f;
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
    *result->MinResult(1) = 0.000028f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.971358f;
    data->d[1] = -1.646705f;
    data->d[2] = 0.000130f;
    data->d[3] = -0.184670f;
    data->d[4] = 1.683473f;
    data->d[5] = 1.572695f;
    data->d[6] = -0.850452f;
    data->d[7] = 0.026172f;
    data->d[8] = -0.361298f;
    data->d[9] = 3.351820f;
    data->d[10] = -1.977860f;
    data->d[11] = 1.017690f;
    data->d[12] = 0.232291f;
    data->d[13] = 0.269433f;
    data->d[14] = -0.226892f;
    data->d[15] = 13.550683f;
    data->d[16] = 5.385416f;
    data->d[17] = -0.327297f;
    data->d[18] = 0.523522f;
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
    *result->MinResult(2) = 0.000018f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000028f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 1;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
