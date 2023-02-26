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
    instructions->SetOperation(0, 0, 10);
    instructions->SetOperation(1, 1, 16);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 1, 30);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 0, 14);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 1, 5);
    instructions->SetOperation(10, 0, 30);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 0, 20);
    instructions->SetOperation(15, 1, 25);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 29);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 20);
    instructions->SetOperation(26, 1, 23);
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
    data->d[0] = 0.160715f;
    data->d[1] = -0.743989f;
    data->d[2] = -0.943662f;
    data->d[3] = 0.848927f;
    data->d[4] = -1.074607f;
    data->d[5] = 1.520972f;
    data->d[6] = -0.398021f;
    data->d[7] = 1.099341f;
    data->d[8] = 0.196169f;
    data->d[9] = 1.936045f;
    data->d[10] = 2.026484f;
    data->d[11] = -3.366106f;
    data->d[12] = -3.367271f;
    data->d[13] = 2.420387f;
    data->d[14] = 0.282956f;
    data->d[15] = -0.817457f;
    data->d[16] = 2.767054f;
    data->d[17] = -3.014007f;
    data->d[18] = -5.322538f;
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
    *(result->MinResult()) = 0.000398f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.109064f;
    data->d[1] = 0.411555f;
    data->d[2] = -1.749229f;
    data->d[3] = 0.602330f;
    data->d[4] = -1.559621f;
    data->d[5] = 1.357458f;
    data->d[6] = -0.716276f;
    data->d[7] = -1.422305f;
    data->d[8] = -1.589437f;
    data->d[9] = -1.562041f;
    data->d[10] = 0.615299f;
    data->d[11] = -0.882141f;
    data->d[12] = 0.446014f;
    data->d[13] = -0.420754f;
    data->d[14] = -0.014396f;
    data->d[15] = 1.376552f;
    data->d[16] = 0.500686f;
    data->d[17] = -0.957214f;
    data->d[18] = -0.796995f;
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
    *(result->MinResult()) = 0.000241f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.315342f;
    data->d[1] = 0.169634f;
    data->d[2] = 0.900044f;
    data->d[3] = -1.055482f;
    data->d[4] = 0.902873f;
    data->d[5] = 1.004364f;
    data->d[6] = 2.941130f;
    data->d[7] = 0.093457f;
    data->d[8] = -1.171387f;
    data->d[9] = -1.391892f;
    data->d[10] = -0.199247f;
    data->d[11] = -5.836652f;
    data->d[12] = 0.906781f;
    data->d[13] = -0.670769f;
    data->d[14] = 0.325359f;
    data->d[15] = -0.562845f;
    data->d[16] = -1.785858f;
    data->d[17] = 1.772754f;
    data->d[18] = -0.007100f;
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
    *(result->MinResult()) = 0.000373f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000398f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 5;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 1245290541193130308;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
