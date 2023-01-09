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

    settings.m_mode = FIRESTARTER_CODE;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 1;
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
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 25);
    instructions->SetOperation(2, 0, 17);
    instructions->SetOperation(3, 0, 31);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 14);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 0, 27);
    instructions->SetOperation(8, 1, 9);
    instructions->SetOperation(9, 1, 11);
    instructions->SetOperation(10, 1, 18);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 1, 17);
    instructions->SetOperation(13, 1, 18);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 1, 18);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 1, 31);
    instructions->SetOperation(24, 1, 31);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 1, 28);
    instructions->SetOperation(31, 0, 25);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.697925f;
    data->d[1] = -0.882600f;
    data->d[2] = -2.673955f;
    data->d[3] = 0.285047f;
    data->d[4] = 0.651476f;
    data->d[5] = -1.632459f;
    data->d[6] = 6.619270f;
    data->d[7] = 0.795964f;
    data->d[8] = -0.521400f;
    data->d[9] = 1.028217f;
    data->d[10] = 0.279827f;
    data->d[11] = -0.100696f;
    data->d[12] = 0.947165f;
    data->d[13] = 0.080921f;
    data->d[14] = 0.744254f;
    data->d[15] = 5.240143f;
    data->d[16] = -0.848094f;
    data->d[17] = -8.630230f;
    data->d[18] = -0.894257f;
    data->d[19] = 3.553664f;
    data->d[20] = -0.168530f;
    data->d[21] = -3.738430f;
    data->d[22] = -0.812861f;
    data->d[23] = -0.695519f;
    data->d[24] = 0.121509f;
    data->d[25] = -0.381478f;
    data->d[26] = 2.182355f;
    data->d[27] = -0.750552f;
    data->d[28] = 0.715945f;
    data->d[29] = 0.772967f;
    data->d[30] = 7.038858f;
    data->d[31] = -0.019390f;
    *(result->MinResult()) = 0.011741f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.972994f;
    data->d[1] = -1.363484f;
    data->d[2] = -0.967872f;
    data->d[3] = 1.262470f;
    data->d[4] = 0.174787f;
    data->d[5] = -0.983994f;
    data->d[6] = 2.051832f;
    data->d[7] = -0.584217f;
    data->d[8] = 0.567917f;
    data->d[9] = 0.976167f;
    data->d[10] = 0.547633f;
    data->d[11] = -0.389474f;
    data->d[12] = 0.715476f;
    data->d[13] = 0.413989f;
    data->d[14] = 0.304545f;
    data->d[15] = -0.080735f;
    data->d[16] = 2.132930f;
    data->d[17] = 0.503732f;
    data->d[18] = 1.028045f;
    data->d[19] = 0.828657f;
    data->d[20] = -0.851673f;
    data->d[21] = 0.293579f;
    data->d[22] = 1.313245f;
    data->d[23] = 0.289497f;
    data->d[24] = -0.249004f;
    data->d[25] = -0.231938f;
    data->d[26] = -0.244211f;
    data->d[27] = 0.542213f;
    data->d[28] = -0.560397f;
    data->d[29] = 1.126572f;
    data->d[30] = -0.880297f;
    data->d[31] = -0.793332f;
    *(result->MinResult()) = 0.023170f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.472574f;
    data->d[1] = 0.189572f;
    data->d[2] = 0.671173f;
    data->d[3] = 0.593972f;
    data->d[4] = -2.293261f;
    data->d[5] = -0.610149f;
    data->d[6] = 0.631821f;
    data->d[7] = 0.052979f;
    data->d[8] = 0.333421f;
    data->d[9] = -0.182270f;
    data->d[10] = -0.581267f;
    data->d[11] = -0.335185f;
    data->d[12] = -1.498274f;
    data->d[13] = 0.055484f;
    data->d[14] = -0.190415f;
    data->d[15] = -0.023370f;
    data->d[16] = 1.295934f;
    data->d[17] = 0.730256f;
    data->d[18] = 0.557734f;
    data->d[19] = -0.434225f;
    data->d[20] = -0.432837f;
    data->d[21] = 0.111199f;
    data->d[22] = 0.932898f;
    data->d[23] = 0.534665f;
    data->d[24] = 0.313260f;
    data->d[25] = -0.004939f;
    data->d[26] = -0.765867f;
    data->d[27] = -1.069084f;
    data->d[28] = -0.700763f;
    data->d[29] = 1.735994f;
    data->d[30] = 0.052698f;
    data->d[31] = 0.566203f;
    *(result->MinResult()) = 0.026728f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(389324623));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(1));

    state.m_maxResult = 0.026728f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 8;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
