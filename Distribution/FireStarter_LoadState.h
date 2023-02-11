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
    settings.m_seed = 4;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 20);
    instructions->SetOperation(1, 1, 10);
    instructions->SetOperation(2, 0, 20);
    instructions->SetOperation(3, 0, 28);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 0, 8);
    instructions->SetOperation(6, 1, 23);
    instructions->SetOperation(7, 1, 28);
    instructions->SetOperation(8, 1, 31);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 1, 6);
    instructions->SetOperation(11, 0, 17);
    instructions->SetOperation(12, 1, 5);
    instructions->SetOperation(13, 0, 28);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 1, 0);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 7);
    instructions->SetOperation(21, 1, 28);
    instructions->SetOperation(22, 1, 10);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 1, 13);
    instructions->SetOperation(25, 1, 25);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 1, 31);
    instructions->SetOperation(28, 1, 2);
    instructions->SetOperation(29, 1, 10);
    instructions->SetOperation(30, 1, 30);
    instructions->SetOperation(31, 1, 7);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.627531f;
    data->d[1] = 1.519306f;
    data->d[2] = 0.144902f;
    data->d[3] = 1.292313f;
    data->d[4] = -0.926466f;
    data->d[5] = 1.133866f;
    data->d[6] = 0.359338f;
    data->d[7] = 0.347289f;
    data->d[8] = -1.090181f;
    data->d[9] = 1.480931f;
    data->d[10] = 1.266407f;
    data->d[11] = -0.951864f;
    data->d[12] = 2.230232f;
    data->d[13] = -1.999127f;
    data->d[14] = -1.214121f;
    data->d[15] = -1.242820f;
    data->d[16] = -2.550750f;
    data->d[17] = 0.979541f;
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
    *(result->MinResult()) = 0.000168f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.462156f;
    data->d[1] = -0.887414f;
    data->d[2] = 0.105188f;
    data->d[3] = 0.012651f;
    data->d[4] = 0.776183f;
    data->d[5] = -1.750311f;
    data->d[6] = -0.084782f;
    data->d[7] = 0.827125f;
    data->d[8] = 1.151280f;
    data->d[9] = 0.898103f;
    data->d[10] = -0.336510f;
    data->d[11] = 1.227420f;
    data->d[12] = -0.272863f;
    data->d[13] = -0.557703f;
    data->d[14] = 2.548009f;
    data->d[15] = 1.895856f;
    data->d[16] = 1.907764f;
    data->d[17] = -4.543979f;
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
    *(result->MinResult()) = 0.000191f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.859208f;
    data->d[1] = -1.854312f;
    data->d[2] = 0.117072f;
    data->d[3] = -0.335567f;
    data->d[4] = 1.924614f;
    data->d[5] = -0.923728f;
    data->d[6] = 0.149245f;
    data->d[7] = -0.435481f;
    data->d[8] = 0.682166f;
    data->d[9] = -0.610565f;
    data->d[10] = -0.243701f;
    data->d[11] = -0.556167f;
    data->d[12] = 1.855247f;
    data->d[13] = -0.637879f;
    data->d[14] = -0.903008f;
    data->d[15] = -1.599394f;
    data->d[16] = -0.380682f;
    data->d[17] = 1.471847f;
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
    *(result->MinResult()) = 0.000159f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000191f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 53;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 184211215;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
