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

    settings.m_mode = FIRESTARTER_TEST;
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
    instructions->SetOperation(18, 1, 18);
    instructions->SetOperation(19, 1, 28);
    instructions->SetOperation(20, 0, 23);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 8);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 0, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.638420f;
    data->d[1] = 0.396969f;
    data->d[2] = 0.708208f;
    data->d[3] = 0.782812f;
    data->d[4] = -1.917350f;
    data->d[5] = -0.632671f;
    data->d[6] = 0.218539f;
    data->d[7] = 0.814383f;
    data->d[8] = 0.167547f;
    data->d[9] = -1.810220f;
    data->d[10] = 0.330350f;
    data->d[11] = -0.625573f;
    data->d[12] = 1.563872f;
    data->d[13] = -0.830097f;
    data->d[14] = -1.741871f;
    data->d[15] = -1.368032f;
    data->d[16] = -0.510030f;
    data->d[17] = 0.000916f;
    data->d[18] = 1.535035f;
    data->d[19] = -0.264463f;
    data->d[20] = 0.355582f;
    data->d[21] = 1.179736f;
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
    *(result->MinResult()) = 0.000019f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.732815f;
    data->d[1] = 0.101494f;
    data->d[2] = -0.008299f;
    data->d[3] = 0.219111f;
    data->d[4] = -1.346621f;
    data->d[5] = -0.982383f;
    data->d[6] = -1.675571f;
    data->d[7] = 0.848902f;
    data->d[8] = -0.897637f;
    data->d[9] = -0.977689f;
    data->d[10] = -0.730519f;
    data->d[11] = 0.606574f;
    data->d[12] = 1.833627f;
    data->d[13] = -0.315640f;
    data->d[14] = -2.247468f;
    data->d[15] = 6.855456f;
    data->d[16] = 0.227290f;
    data->d[17] = -0.725322f;
    data->d[18] = -0.463271f;
    data->d[19] = 0.469636f;
    data->d[20] = 1.087734f;
    data->d[21] = -0.176801f;
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
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.639505f;
    data->d[1] = -0.273613f;
    data->d[2] = 0.110470f;
    data->d[3] = -0.666168f;
    data->d[4] = 0.004884f;
    data->d[5] = -3.434825f;
    data->d[6] = -0.243203f;
    data->d[7] = 0.030593f;
    data->d[8] = -3.112122f;
    data->d[9] = 0.930154f;
    data->d[10] = 0.429079f;
    data->d[11] = -1.737353f;
    data->d[12] = 1.441805f;
    data->d[13] = 1.098599f;
    data->d[14] = -50.980686f;
    data->d[15] = 6.400146f;
    data->d[16] = 1.031696f;
    data->d[17] = 0.240430f;
    data->d[18] = -0.473793f;
    data->d[19] = -0.351909f;
    data->d[20] = -0.674424f;
    data->d[21] = -1.891678f;
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
    *(result->MinResult()) = 0.000353f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000353f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 13;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
