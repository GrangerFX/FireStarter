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
    settings.m_seed = 84;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 21);
    instructions->SetOperation(1, 1, 5);
    instructions->SetOperation(2, 1, 30);
    instructions->SetOperation(3, 1, 2);
    instructions->SetOperation(4, 0, 20);
    instructions->SetOperation(5, 1, 6);
    instructions->SetOperation(6, 0, 21);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 0, 18);
    instructions->SetOperation(9, 1, 29);
    instructions->SetOperation(10, 0, 14);
    instructions->SetOperation(11, 0, 6);
    instructions->SetOperation(12, 0, 15);
    instructions->SetOperation(13, 0, 14);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 1, 4);
    instructions->SetOperation(16, 0, 20);
    instructions->SetOperation(17, 1, 4);
    instructions->SetOperation(18, 1, 31);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 1, 16);
    instructions->SetOperation(21, 1, 31);
    instructions->SetOperation(22, 0, 29);
    instructions->SetOperation(23, 0, 17);
    instructions->SetOperation(24, 1, 11);
    instructions->SetOperation(25, 1, 8);
    instructions->SetOperation(26, 1, 27);
    instructions->SetOperation(27, 0, 5);
    instructions->SetOperation(28, 1, 13);
    instructions->SetOperation(29, 0, 23);
    instructions->SetOperation(30, 1, 9);
    instructions->SetOperation(31, 0, 23);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.057763f;
    data->d[1] = 0.948919f;
    data->d[2] = -1.132566f;
    data->d[3] = -1.194408f;
    data->d[4] = -0.257474f;
    data->d[5] = 0.861362f;
    data->d[6] = 0.021202f;
    data->d[7] = 10.276241f;
    data->d[8] = 7.183531f;
    data->d[9] = -0.142035f;
    data->d[10] = 7.715472f;
    data->d[11] = 0.637436f;
    data->d[12] = -1.286295f;
    data->d[13] = -7.448945f;
    data->d[14] = 0.353285f;
    data->d[15] = 0.234565f;
    data->d[16] = 3.004233f;
    data->d[17] = -2.197168f;
    data->d[18] = 4.574016f;
    data->d[19] = 12.497061f;
    data->d[20] = 0.010247f;
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
    *(result->MinResult()) = 0.000006f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.292951f;
    data->d[1] = -1.064671f;
    data->d[2] = 1.731378f;
    data->d[3] = 0.425718f;
    data->d[4] = -0.039972f;
    data->d[5] = -0.081455f;
    data->d[6] = 0.360351f;
    data->d[7] = 0.776997f;
    data->d[8] = 0.779288f;
    data->d[9] = -2.227542f;
    data->d[10] = 1.095576f;
    data->d[11] = -6.732832f;
    data->d[12] = -7.421371f;
    data->d[13] = 15.172505f;
    data->d[14] = 6.339253f;
    data->d[15] = 1.722806f;
    data->d[16] = -15.926705f;
    data->d[17] = 5.364947f;
    data->d[18] = -2.572114f;
    data->d[19] = 9.845267f;
    data->d[20] = -0.013274f;
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
    *(result->MinResult()) = 0.000033f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.108951f;
    data->d[1] = -0.562801f;
    data->d[2] = 0.797920f;
    data->d[3] = 0.631714f;
    data->d[4] = 1.304790f;
    data->d[5] = -4.044129f;
    data->d[6] = -1.632783f;
    data->d[7] = -0.004948f;
    data->d[8] = -1.215452f;
    data->d[9] = 0.526455f;
    data->d[10] = -0.670922f;
    data->d[11] = 1.804456f;
    data->d[12] = 0.265184f;
    data->d[13] = -2.223093f;
    data->d[14] = 35.103458f;
    data->d[15] = -0.321603f;
    data->d[16] = -1.832503f;
    data->d[17] = -0.008125f;
    data->d[18] = -2.665698f;
    data->d[19] = 5.133597f;
    data->d[20] = -0.051099f;
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
    *(result->MinResult()) = 0.000123f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000123f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 98;
    state.m_index = 0;
    state.m_test = 84;
    state.m_seed = 2319434663575060120;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
