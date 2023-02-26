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
    settings.m_seed = 99;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 0, 28);
    instructions->SetOperation(2, 0, 19);
    instructions->SetOperation(3, 1, 4);
    instructions->SetOperation(4, 1, 5);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 1, 2);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 1, 5);
    instructions->SetOperation(9, 1, 20);
    instructions->SetOperation(10, 1, 30);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 1, 15);
    instructions->SetOperation(13, 0, 20);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 25);
    instructions->SetOperation(16, 1, 26);
    instructions->SetOperation(17, 1, 31);
    instructions->SetOperation(18, 1, 30);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 0, 6);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 25);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 1, 12);
    instructions->SetOperation(25, 1, 4);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 1, 29);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 0, 7);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.393663f;
    data->d[1] = -0.227276f;
    data->d[2] = -3.253008f;
    data->d[3] = 0.662198f;
    data->d[4] = -1.089163f;
    data->d[5] = -0.357818f;
    data->d[6] = -0.122891f;
    data->d[7] = -1.515372f;
    data->d[8] = 0.722010f;
    data->d[9] = -1.192968f;
    data->d[10] = -1.698471f;
    data->d[11] = 0.555257f;
    data->d[12] = -0.722672f;
    data->d[13] = 0.194346f;
    data->d[14] = -0.961630f;
    data->d[15] = -0.173583f;
    data->d[16] = 0.048037f;
    data->d[17] = 2.138127f;
    data->d[18] = 0.718336f;
    data->d[19] = -4.577198f;
    data->d[20] = 0.760354f;
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
    *(result->MinResult()) = 0.000206f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.188469f;
    data->d[1] = 0.131519f;
    data->d[2] = 1.654080f;
    data->d[3] = 0.577752f;
    data->d[4] = -0.077158f;
    data->d[5] = 0.710239f;
    data->d[6] = 0.558524f;
    data->d[7] = -1.548229f;
    data->d[8] = -0.998023f;
    data->d[9] = -0.470670f;
    data->d[10] = -8.465396f;
    data->d[11] = 1.615091f;
    data->d[12] = -0.267705f;
    data->d[13] = -0.362804f;
    data->d[14] = -0.247822f;
    data->d[15] = -0.916820f;
    data->d[16] = -0.253319f;
    data->d[17] = -0.660931f;
    data->d[18] = -0.223964f;
    data->d[19] = -1.980111f;
    data->d[20] = 0.249993f;
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
    *(result->MinResult()) = 0.000087f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.565315f;
    data->d[1] = 1.770264f;
    data->d[2] = -0.875618f;
    data->d[3] = -0.591705f;
    data->d[4] = 0.383202f;
    data->d[5] = -0.816679f;
    data->d[6] = -0.609904f;
    data->d[7] = 1.044723f;
    data->d[8] = 0.080473f;
    data->d[9] = 0.399063f;
    data->d[10] = -22.166361f;
    data->d[11] = 3.720025f;
    data->d[12] = -6.331378f;
    data->d[13] = -1.561692f;
    data->d[14] = 0.031625f;
    data->d[15] = 0.091049f;
    data->d[16] = -1.498004f;
    data->d[17] = 1.374228f;
    data->d[18] = -0.036402f;
    data->d[19] = -0.259724f;
    data->d[20] = -1.652999f;
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
    *(result->MinResult()) = 0.000401f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000401f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 7;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 9268843890834947710;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
