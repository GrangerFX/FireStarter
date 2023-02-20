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
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 1, 6);
    instructions->SetOperation(4, 1, 25);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 0, 20);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 1, 15);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 1, 21);
    instructions->SetOperation(20, 0, 23);
    instructions->SetOperation(21, 1, 31);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 0, 1);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 0, 21);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 15);
    instructions->SetOperation(31, 1, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.196587f;
    data->d[1] = 0.633700f;
    data->d[2] = -0.919375f;
    data->d[3] = 0.346892f;
    data->d[4] = 1.599814f;
    data->d[5] = -0.573660f;
    data->d[6] = 0.508274f;
    data->d[7] = 0.325526f;
    data->d[8] = 0.432270f;
    data->d[9] = -1.317183f;
    data->d[10] = -1.251407f;
    data->d[11] = -0.477031f;
    data->d[12] = -0.484100f;
    data->d[13] = -1.424386f;
    data->d[14] = -1.900548f;
    data->d[15] = 1.815148f;
    data->d[16] = -0.927096f;
    data->d[17] = 0.199846f;
    data->d[18] = 1.747613f;
    data->d[19] = -0.722379f;
    data->d[20] = -0.771770f;
    data->d[21] = -0.832528f;
    data->d[22] = 2.293899f;
    data->d[23] = 1.997077f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000388f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.956092f;
    data->d[1] = -0.493456f;
    data->d[2] = 1.986055f;
    data->d[3] = -1.905099f;
    data->d[4] = 2.044608f;
    data->d[5] = 1.007270f;
    data->d[6] = -1.393097f;
    data->d[7] = -0.258032f;
    data->d[8] = -0.041290f;
    data->d[9] = 1.723977f;
    data->d[10] = -1.110026f;
    data->d[11] = 0.771919f;
    data->d[12] = 0.863074f;
    data->d[13] = -2.501991f;
    data->d[14] = 1.423878f;
    data->d[15] = 1.370496f;
    data->d[16] = -0.767809f;
    data->d[17] = -1.205949f;
    data->d[18] = -2.197146f;
    data->d[19] = 0.013472f;
    data->d[20] = 3.336270f;
    data->d[21] = 1.442978f;
    data->d[22] = 1.121777f;
    data->d[23] = -1.502503f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000149f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.546725f;
    data->d[1] = -1.054281f;
    data->d[2] = -0.996692f;
    data->d[3] = -0.287872f;
    data->d[4] = -1.021119f;
    data->d[5] = 1.240418f;
    data->d[6] = -1.885358f;
    data->d[7] = -0.311631f;
    data->d[8] = 0.060420f;
    data->d[9] = -1.310672f;
    data->d[10] = 0.211983f;
    data->d[11] = 0.304039f;
    data->d[12] = -0.414281f;
    data->d[13] = 1.944459f;
    data->d[14] = 0.047996f;
    data->d[15] = -0.568808f;
    data->d[16] = -0.479225f;
    data->d[17] = 0.040767f;
    data->d[18] = -1.084581f;
    data->d[19] = 1.221344f;
    data->d[20] = 1.472101f;
    data->d[21] = -1.478268f;
    data->d[22] = -2.066899f;
    data->d[23] = -0.679931f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000326f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000388f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 25;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 5604055824036433960;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
