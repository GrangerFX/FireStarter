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
    settings.m_units = 1;
    settings.m_processes = 1;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 3533;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    program.m_uniqueRegisters = 20;

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 6);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 1, 10);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 10);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 0, 9);
    instructions->SetOperation(23, 1, 15);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 0, 13);
    instructions->SetOperation(28, 1, 13);
    instructions->SetOperation(29, 1, 18);
    instructions->SetOperation(30, 0, 1);
    instructions->SetOperation(31, 1, 19);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.922782f;
    data->d[1] = 0.781173f;
    data->d[2] = 0.000028f;
    data->d[3] = -0.136512f;
    data->d[4] = -4.327348f;
    data->d[5] = 0.469396f;
    data->d[6] = -0.127504f;
    data->d[7] = 0.261860f;
    data->d[8] = 0.314563f;
    data->d[9] = -0.885188f;
    data->d[10] = -0.452769f;
    data->d[11] = -0.144494f;
    data->d[12] = -4.731180f;
    data->d[13] = 0.076224f;
    data->d[14] = -8.962626f;
    data->d[15] = 0.573741f;
    data->d[16] = -3.605399f;
    data->d[17] = -0.951345f;
    data->d[18] = -0.263572f;
    data->d[19] = -0.000017f;
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
    *result->MinResult(0) = 0.000005f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.400625f;
    data->d[1] = -1.689990f;
    data->d[2] = -0.000077f;
    data->d[3] = -0.369588f;
    data->d[4] = 0.445212f;
    data->d[5] = -0.310752f;
    data->d[6] = 0.205829f;
    data->d[7] = 5.037639f;
    data->d[8] = 0.007315f;
    data->d[9] = -1.960822f;
    data->d[10] = -4.053034f;
    data->d[11] = -0.240364f;
    data->d[12] = 0.287771f;
    data->d[13] = 0.422124f;
    data->d[14] = 1.209623f;
    data->d[15] = 0.637342f;
    data->d[16] = -1.982558f;
    data->d[17] = 0.044899f;
    data->d[18] = -0.539187f;
    data->d[19] = -0.118082f;
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
    *result->MinResult(1) = 0.000005f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.319837f;
    data->d[1] = -0.298135f;
    data->d[2] = -0.000043f;
    data->d[3] = -0.173097f;
    data->d[4] = 1.345055f;
    data->d[5] = -0.532482f;
    data->d[6] = 0.460532f;
    data->d[7] = -0.331839f;
    data->d[8] = -0.450974f;
    data->d[9] = 0.270328f;
    data->d[10] = -0.549687f;
    data->d[11] = 1.021599f;
    data->d[12] = 0.060545f;
    data->d[13] = -3.463642f;
    data->d[14] = 2.803338f;
    data->d[15] = 2.149135f;
    data->d[16] = 1.796174f;
    data->d[17] = -1.062430f;
    data->d[18] = 0.174719f;
    data->d[19] = 0.523620f;
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
    *result->MinResult(2) = 0.000009f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000009f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 20;
    state.m_bestIndex = 2457;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
