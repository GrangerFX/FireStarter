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
    settings.m_attempts = 128;
    settings.m_seed = 8;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 1, 18);
    instructions->SetOperation(3, 0, 29);
    instructions->SetOperation(4, 1, 11);
    instructions->SetOperation(5, 1, 24);
    instructions->SetOperation(6, 0, 20);
    instructions->SetOperation(7, 0, 13);
    instructions->SetOperation(8, 0, 24);
    instructions->SetOperation(9, 0, 23);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 31);
    instructions->SetOperation(12, 1, 13);
    instructions->SetOperation(13, 1, 18);
    instructions->SetOperation(14, 0, 7);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 0, 28);
    instructions->SetOperation(17, 1, 6);
    instructions->SetOperation(18, 0, 28);
    instructions->SetOperation(19, 0, 18);
    instructions->SetOperation(20, 1, 2);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 1, 28);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 13);
    instructions->SetOperation(26, 0, 12);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 0, 10);
    instructions->SetOperation(31, 1, 4);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.590638f;
    data->d[1] = -0.048155f;
    data->d[2] = -1.158908f;
    data->d[3] = -1.605818f;
    data->d[4] = -1.102166f;
    data->d[5] = -1.153153f;
    data->d[6] = 2.111745f;
    data->d[7] = 0.417940f;
    data->d[8] = 2.274639f;
    data->d[9] = -0.850366f;
    data->d[10] = 1.121778f;
    data->d[11] = -0.126715f;
    data->d[12] = 1.201917f;
    data->d[13] = -2.207409f;
    data->d[14] = 0.364489f;
    data->d[15] = -1.912029f;
    data->d[16] = -1.500198f;
    data->d[17] = -1.926812f;
    data->d[18] = 4.982683f;
    data->d[19] = 3.769737f;
    data->d[20] = 0.077881f;
    data->d[21] = -0.178436f;
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
    *(result->MinResult()) = 0.000107f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.409248f;
    data->d[1] = 0.107535f;
    data->d[2] = -1.186809f;
    data->d[3] = -1.246023f;
    data->d[4] = 1.508314f;
    data->d[5] = -0.352501f;
    data->d[6] = -0.658391f;
    data->d[7] = 1.615448f;
    data->d[8] = 0.745563f;
    data->d[9] = 1.543002f;
    data->d[10] = -0.589180f;
    data->d[11] = 0.689601f;
    data->d[12] = -0.204163f;
    data->d[13] = -2.063755f;
    data->d[14] = -0.007800f;
    data->d[15] = 0.569512f;
    data->d[16] = -5.316619f;
    data->d[17] = 1.091774f;
    data->d[18] = 2.051566f;
    data->d[19] = -0.500623f;
    data->d[20] = -0.134455f;
    data->d[21] = 0.052633f;
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
    *(result->MinResult()) = 0.000122f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.693500f;
    data->d[1] = 0.177452f;
    data->d[2] = 0.738529f;
    data->d[3] = -2.121140f;
    data->d[4] = 3.134600f;
    data->d[5] = 1.859569f;
    data->d[6] = 1.834001f;
    data->d[7] = 1.289915f;
    data->d[8] = 1.571835f;
    data->d[9] = -27.283678f;
    data->d[10] = -0.141863f;
    data->d[11] = 1.449813f;
    data->d[12] = -0.032265f;
    data->d[13] = 2.310888f;
    data->d[14] = 2.591858f;
    data->d[15] = 0.756698f;
    data->d[16] = -0.101986f;
    data->d[17] = -0.088553f;
    data->d[18] = -1.659788f;
    data->d[19] = 0.798100f;
    data->d[20] = -0.599732f;
    data->d[21] = 1.109151f;
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
    *(result->MinResult()) = 0.000131f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000131f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 261;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 13240620513673873165;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
