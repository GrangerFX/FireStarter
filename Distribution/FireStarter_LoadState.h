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
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 1, 14);
    instructions->SetOperation(2, 0, 26);
    instructions->SetOperation(3, 0, 12);
    instructions->SetOperation(4, 0, 19);
    instructions->SetOperation(5, 1, 26);
    instructions->SetOperation(6, 1, 25);
    instructions->SetOperation(7, 0, 20);
    instructions->SetOperation(8, 1, 29);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 1, 1);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 0, 13);
    instructions->SetOperation(13, 1, 24);
    instructions->SetOperation(14, 0, 25);
    instructions->SetOperation(15, 0, 26);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 0, 27);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 1, 28);
    instructions->SetOperation(20, 1, 10);
    instructions->SetOperation(21, 0, 6);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 1, 3);
    instructions->SetOperation(25, 0, 29);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 1, 12);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 1, 30);
    instructions->SetOperation(31, 0, 4);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.436792f;
    data->d[1] = 1.164470f;
    data->d[2] = -0.397888f;
    data->d[3] = -0.870038f;
    data->d[4] = 1.155803f;
    data->d[5] = -0.494436f;
    data->d[6] = 0.769060f;
    data->d[7] = -1.055317f;
    data->d[8] = -1.654634f;
    data->d[9] = -0.741918f;
    data->d[10] = -1.124827f;
    data->d[11] = 0.608417f;
    data->d[12] = -1.136784f;
    data->d[13] = -0.808032f;
    data->d[14] = -0.959370f;
    data->d[15] = 7.316939f;
    data->d[16] = 1.353127f;
    data->d[17] = -1.178224f;
    data->d[18] = 1.345649f;
    data->d[19] = 0.400015f;
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
    *(result->MinResult()) = 0.000143f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.243469f;
    data->d[1] = -0.393865f;
    data->d[2] = -0.574024f;
    data->d[3] = 1.305663f;
    data->d[4] = -0.745284f;
    data->d[5] = 0.678081f;
    data->d[6] = -1.838934f;
    data->d[7] = 0.070411f;
    data->d[8] = -0.123922f;
    data->d[9] = 4.912293f;
    data->d[10] = -0.980240f;
    data->d[11] = 0.057145f;
    data->d[12] = 1.443446f;
    data->d[13] = -1.390437f;
    data->d[14] = 0.044255f;
    data->d[15] = 2.751860f;
    data->d[16] = 3.047358f;
    data->d[17] = 0.762507f;
    data->d[18] = 0.703933f;
    data->d[19] = -0.098490f;
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
    *(result->MinResult()) = 0.000167f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.510114f;
    data->d[1] = 6.923612f;
    data->d[2] = -0.345956f;
    data->d[3] = -0.022403f;
    data->d[4] = 2.497559f;
    data->d[5] = 1.070177f;
    data->d[6] = 1.392578f;
    data->d[7] = -1.380052f;
    data->d[8] = -2.912101f;
    data->d[9] = 0.183635f;
    data->d[10] = 0.141151f;
    data->d[11] = 0.287593f;
    data->d[12] = -0.229416f;
    data->d[13] = -0.809181f;
    data->d[14] = -2.975331f;
    data->d[15] = -4.225085f;
    data->d[16] = -0.779218f;
    data->d[17] = -0.825758f;
    data->d[18] = -0.986536f;
    data->d[19] = -0.967872f;
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
    *(result->MinResult()) = 0.000283f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000283f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 129;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 7066544827304334182;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
