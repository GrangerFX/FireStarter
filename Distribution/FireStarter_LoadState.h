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
    settings.m_units = 2;
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
    instructions->SetOperation(0, 0, 10);
    instructions->SetOperation(1, 1, 16);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 1, 30);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 0, 14);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 0, 21);
    instructions->SetOperation(10, 0, 30);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 1, 12);
    instructions->SetOperation(14, 0, 20);
    instructions->SetOperation(15, 1, 23);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 29);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 20);
    instructions->SetOperation(26, 0, 1);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 0, 30);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.143162f;
    data->d[1] = 0.296856f;
    data->d[2] = -0.409472f;
    data->d[3] = 0.489850f;
    data->d[4] = -0.184089f;
    data->d[5] = 0.465843f;
    data->d[6] = -1.020022f;
    data->d[7] = -1.994643f;
    data->d[8] = 1.289210f;
    data->d[9] = -1.639829f;
    data->d[10] = 0.931168f;
    data->d[11] = 1.783949f;
    data->d[12] = 24.209057f;
    data->d[13] = 2.053732f;
    data->d[14] = 0.088104f;
    data->d[15] = -3.686348f;
    data->d[16] = -12.960265f;
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
    *(result->MinResult()) = 0.000859f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.381971f;
    data->d[1] = -1.278931f;
    data->d[2] = 0.277886f;
    data->d[3] = -0.526354f;
    data->d[4] = 0.739788f;
    data->d[5] = 1.070858f;
    data->d[6] = 1.501456f;
    data->d[7] = -0.214291f;
    data->d[8] = -0.658618f;
    data->d[9] = 2.785375f;
    data->d[10] = 1.734501f;
    data->d[11] = -1.320534f;
    data->d[12] = 2.932536f;
    data->d[13] = 0.052520f;
    data->d[14] = 2.125380f;
    data->d[15] = 2.155516f;
    data->d[16] = 0.433842f;
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
    *(result->MinResult()) = 0.000194f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.604968f;
    data->d[1] = -2.291572f;
    data->d[2] = -0.347048f;
    data->d[3] = -1.856694f;
    data->d[4] = 1.061521f;
    data->d[5] = 2.032174f;
    data->d[6] = 0.605837f;
    data->d[7] = -0.465925f;
    data->d[8] = 1.378825f;
    data->d[9] = -1.182476f;
    data->d[10] = -0.743940f;
    data->d[11] = 2.013027f;
    data->d[12] = 1.163177f;
    data->d[13] = 2.515815f;
    data->d[14] = 4.900016f;
    data->d[15] = 4.236555f;
    data->d[16] = -0.333754f;
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
    *(result->MinResult()) = 0.000790f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000859f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 6;
    state.m_index = 0;
    state.m_test = 3;
    state.m_seed = 13498773748227721738;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
