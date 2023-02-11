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
    instructions->SetOperation(0, 0, 4);
    instructions->SetOperation(1, 1, 12);
    instructions->SetOperation(2, 1, 19);
    instructions->SetOperation(3, 1, 7);
    instructions->SetOperation(4, 0, 21);
    instructions->SetOperation(5, 1, 23);
    instructions->SetOperation(6, 1, 26);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 20);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 1, 17);
    instructions->SetOperation(13, 1, 21);
    instructions->SetOperation(14, 1, 22);
    instructions->SetOperation(15, 0, 6);
    instructions->SetOperation(16, 1, 20);
    instructions->SetOperation(17, 0, 20);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 1, 0);
    instructions->SetOperation(20, 0, 17);
    instructions->SetOperation(21, 0, 11);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 1, 20);
    instructions->SetOperation(24, 0, 21);
    instructions->SetOperation(25, 1, 14);
    instructions->SetOperation(26, 0, 6);
    instructions->SetOperation(27, 1, 31);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 0, 19);
    instructions->SetOperation(31, 0, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.109513f;
    data->d[1] = -0.916978f;
    data->d[2] = 0.428851f;
    data->d[3] = 0.836857f;
    data->d[4] = 1.406784f;
    data->d[5] = -0.696241f;
    data->d[6] = -0.549615f;
    data->d[7] = -1.541813f;
    data->d[8] = -1.614740f;
    data->d[9] = 0.557562f;
    data->d[10] = 1.497388f;
    data->d[11] = 1.154556f;
    data->d[12] = -0.456546f;
    data->d[13] = -1.175742f;
    data->d[14] = 0.899478f;
    data->d[15] = -0.276260f;
    data->d[16] = 0.486171f;
    data->d[17] = 1.646439f;
    data->d[18] = 1.789376f;
    data->d[19] = 1.315766f;
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
    *(result->MinResult()) = 0.000232f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.207053f;
    data->d[1] = -1.018527f;
    data->d[2] = -0.274669f;
    data->d[3] = 1.825952f;
    data->d[4] = -0.729338f;
    data->d[5] = 0.535515f;
    data->d[6] = -0.141973f;
    data->d[7] = 0.060580f;
    data->d[8] = -0.423516f;
    data->d[9] = 0.682218f;
    data->d[10] = 0.637796f;
    data->d[11] = -1.429910f;
    data->d[12] = -1.034829f;
    data->d[13] = -4.285053f;
    data->d[14] = -0.363090f;
    data->d[15] = -0.289484f;
    data->d[16] = -0.206350f;
    data->d[17] = -60.177639f;
    data->d[18] = -0.048037f;
    data->d[19] = -0.182155f;
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
    *(result->MinResult()) = 0.000111f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.353910f;
    data->d[1] = -2.187098f;
    data->d[2] = 1.056153f;
    data->d[3] = 0.102726f;
    data->d[4] = 0.470334f;
    data->d[5] = -1.416389f;
    data->d[6] = 0.117437f;
    data->d[7] = 1.070090f;
    data->d[8] = -1.617139f;
    data->d[9] = -2.026373f;
    data->d[10] = 0.046457f;
    data->d[11] = 0.522931f;
    data->d[12] = 0.007606f;
    data->d[13] = 1.699564f;
    data->d[14] = -1.559793f;
    data->d[15] = -0.050366f;
    data->d[16] = -0.889986f;
    data->d[17] = -2.128681f;
    data->d[18] = -0.846618f;
    data->d[19] = -0.948027f;
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
    *(result->MinResult()) = 0.000309f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000309f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 25;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 1262977836;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
