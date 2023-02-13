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
    settings.m_attempts = 128;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 27);
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
    instructions->SetOperation(21, 1, 22);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 8);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 15);
    instructions->SetOperation(31, 1, 18);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.428903f;
    data->d[1] = 0.017483f;
    data->d[2] = 1.874284f;
    data->d[3] = 0.182371f;
    data->d[4] = -0.663535f;
    data->d[5] = -2.613497f;
    data->d[6] = 0.509848f;
    data->d[7] = 0.138440f;
    data->d[8] = -1.550833f;
    data->d[9] = -0.813022f;
    data->d[10] = -0.589614f;
    data->d[11] = 0.199056f;
    data->d[12] = -0.608713f;
    data->d[13] = 0.745880f;
    data->d[14] = -2.114660f;
    data->d[15] = 0.869425f;
    data->d[16] = 2.402422f;
    data->d[17] = -0.026247f;
    data->d[18] = 1.160655f;
    data->d[19] = 1.300366f;
    data->d[20] = -0.843659f;
    data->d[21] = 1.126899f;
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
    *(result->MinResult()) = 0.000158f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.063406f;
    data->d[1] = -0.718194f;
    data->d[2] = 1.535886f;
    data->d[3] = -1.245115f;
    data->d[4] = -0.249765f;
    data->d[5] = -1.197679f;
    data->d[6] = -0.417639f;
    data->d[7] = 0.513671f;
    data->d[8] = 1.998973f;
    data->d[9] = -1.548854f;
    data->d[10] = -0.321518f;
    data->d[11] = 0.193675f;
    data->d[12] = 1.013154f;
    data->d[13] = -0.328090f;
    data->d[14] = -0.508901f;
    data->d[15] = 0.884951f;
    data->d[16] = -0.265424f;
    data->d[17] = -0.385868f;
    data->d[18] = 0.221810f;
    data->d[19] = -0.867521f;
    data->d[20] = -2.644458f;
    data->d[21] = 1.007449f;
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
    *(result->MinResult()) = 0.000137f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.110463f;
    data->d[1] = -1.727867f;
    data->d[2] = 2.000852f;
    data->d[3] = -0.766267f;
    data->d[4] = -1.099297f;
    data->d[5] = 0.228746f;
    data->d[6] = 0.141292f;
    data->d[7] = -0.319322f;
    data->d[8] = 2.219346f;
    data->d[9] = 0.850066f;
    data->d[10] = 0.722038f;
    data->d[11] = -1.145981f;
    data->d[12] = 0.884952f;
    data->d[13] = -0.909093f;
    data->d[14] = 1.630763f;
    data->d[15] = -3.126049f;
    data->d[16] = -2.332316f;
    data->d[17] = -0.310254f;
    data->d[18] = -0.283494f;
    data->d[19] = -0.026153f;
    data->d[20] = 0.807126f;
    data->d[21] = -1.407012f;
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
    *(result->MinResult()) = 0.000665f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000665f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 12;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 4492917884930861147;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
