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
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 31);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 1, 27);
    instructions->SetOperation(3, 1, 6);
    instructions->SetOperation(4, 1, 25);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 0, 26);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 1, 21);
    instructions->SetOperation(20, 1, 18);
    instructions->SetOperation(21, 1, 20);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 15);
    instructions->SetOperation(31, 1, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -2.048377f;
    data->d[1] = -0.436435f;
    data->d[2] = -5.675249f;
    data->d[3] = 0.381011f;
    data->d[4] = 6.456905f;
    data->d[5] = -1.189311f;
    data->d[6] = -1.235790f;
    data->d[7] = 0.152161f;
    data->d[8] = 0.109005f;
    data->d[9] = -1.078557f;
    data->d[10] = 0.528385f;
    data->d[11] = 0.925186f;
    data->d[12] = -0.442730f;
    data->d[13] = 0.363431f;
    data->d[14] = 0.356787f;
    data->d[15] = -0.959492f;
    data->d[16] = 0.880477f;
    data->d[17] = 0.890321f;
    data->d[18] = -0.732974f;
    data->d[19] = -0.716310f;
    data->d[20] = -3.444294f;
    data->d[21] = -0.482718f;
    data->d[22] = -0.981243f;
    data->d[23] = 0.087272f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(0) = 0.000009f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.929201f;
    data->d[1] = 0.063947f;
    data->d[2] = 0.526807f;
    data->d[3] = -0.426461f;
    data->d[4] = 0.806570f;
    data->d[5] = -0.355397f;
    data->d[6] = -0.674007f;
    data->d[7] = -0.800259f;
    data->d[8] = -2.976337f;
    data->d[9] = -0.956736f;
    data->d[10] = -0.253574f;
    data->d[11] = 0.627528f;
    data->d[12] = -0.201835f;
    data->d[13] = -1.483717f;
    data->d[14] = -1.870311f;
    data->d[15] = 0.239748f;
    data->d[16] = 1.516174f;
    data->d[17] = -3.188247f;
    data->d[18] = -0.746805f;
    data->d[19] = -0.698651f;
    data->d[20] = -0.213130f;
    data->d[21] = -0.172212f;
    data->d[22] = -0.676520f;
    data->d[23] = 0.391903f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(1) = 0.000155f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.933991f;
    data->d[1] = -0.020035f;
    data->d[2] = 0.323324f;
    data->d[3] = 0.465412f;
    data->d[4] = 0.308723f;
    data->d[5] = -0.668257f;
    data->d[6] = -0.341468f;
    data->d[7] = 0.718392f;
    data->d[8] = 6.902498f;
    data->d[9] = -1.054312f;
    data->d[10] = -1.026010f;
    data->d[11] = -0.952464f;
    data->d[12] = 0.334475f;
    data->d[13] = -0.098713f;
    data->d[14] = 1.980327f;
    data->d[15] = -2.225261f;
    data->d[16] = 0.413536f;
    data->d[17] = 0.464322f;
    data->d[18] = -0.354196f;
    data->d[19] = -1.065820f;
    data->d[20] = -3.558077f;
    data->d[21] = 0.881250f;
    data->d[22] = 0.982410f;
    data->d[23] = 1.141910f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(2) = 0.000339f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000339f;
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
