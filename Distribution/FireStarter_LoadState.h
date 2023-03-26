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

    settings.m_mode = FIRESTARTER_RANDOM;
    settings.m_units = 8;
    settings.m_processes = 16;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 32;
    settings.m_seed = 7986;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 1, 9);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 1, 25);
    instructions->SetOperation(4, 0, 8);
    instructions->SetOperation(5, 1, 24);
    instructions->SetOperation(6, 0, 8);
    instructions->SetOperation(7, 1, 18);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 12);
    instructions->SetOperation(10, 0, 26);
    instructions->SetOperation(11, 1, 30);
    instructions->SetOperation(12, 0, 30);
    instructions->SetOperation(13, 1, 14);
    instructions->SetOperation(14, 0, 18);
    instructions->SetOperation(15, 1, 20);
    instructions->SetOperation(16, 0, 11);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 0, 23);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 0, 8);
    instructions->SetOperation(21, 1, 17);
    instructions->SetOperation(22, 0, 8);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 1, 23);
    instructions->SetOperation(26, 0, 24);
    instructions->SetOperation(27, 1, 29);
    instructions->SetOperation(28, 0, 26);
    instructions->SetOperation(29, 1, 5);
    instructions->SetOperation(30, 0, 30);
    instructions->SetOperation(31, 1, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.751329f;
    data->d[1] = -0.867317f;
    data->d[2] = 0.380797f;
    data->d[3] = 1.228241f;
    data->d[4] = 0.742304f;
    data->d[5] = 0.001045f;
    data->d[6] = -0.977414f;
    data->d[7] = -1.254189f;
    data->d[8] = -0.667564f;
    data->d[9] = 0.014667f;
    data->d[10] = 0.251620f;
    data->d[11] = -1.888553f;
    data->d[12] = 2.364841f;
    data->d[13] = 1.196298f;
    data->d[14] = -0.916977f;
    data->d[15] = 4.353269f;
    data->d[16] = 1.214453f;
    data->d[17] = -0.492535f;
    data->d[18] = 0.030673f;
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
    *(result->MinResult()) = 0.000040f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.040203f;
    data->d[1] = -0.442151f;
    data->d[2] = -2.460984f;
    data->d[3] = -0.782290f;
    data->d[4] = -0.604666f;
    data->d[5] = 0.000082f;
    data->d[6] = -0.297559f;
    data->d[7] = -1.568898f;
    data->d[8] = 1.115130f;
    data->d[9] = 0.572496f;
    data->d[10] = -0.824079f;
    data->d[11] = 2.117855f;
    data->d[12] = -0.906184f;
    data->d[13] = 1.818334f;
    data->d[14] = -2.323629f;
    data->d[15] = 1.480036f;
    data->d[16] = -0.152638f;
    data->d[17] = 0.347992f;
    data->d[18] = -0.118634f;
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
    *(result->MinResult()) = 0.000056f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.192216f;
    data->d[1] = -0.840070f;
    data->d[2] = -0.865645f;
    data->d[3] = 1.970917f;
    data->d[4] = -0.723114f;
    data->d[5] = -0.004507f;
    data->d[6] = -2.783428f;
    data->d[7] = -0.142672f;
    data->d[8] = 3.031259f;
    data->d[9] = -0.008301f;
    data->d[10] = -0.074481f;
    data->d[11] = 2.947364f;
    data->d[12] = 0.038536f;
    data->d[13] = -0.364764f;
    data->d[14] = 2.144422f;
    data->d[15] = -1.501072f;
    data->d[16] = -2.140269f;
    data->d[17] = -2.465453f;
    data->d[18] = 0.546740f;
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
    *(result->MinResult()) = 0.000079f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000079f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 0;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 3871084832961392673;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
