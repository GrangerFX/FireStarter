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
    settings.m_seed = 3;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 31);
    instructions->SetOperation(1, 1, 22);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 1, 25);
    instructions->SetOperation(4, 0, 25);
    instructions->SetOperation(5, 1, 15);
    instructions->SetOperation(6, 0, 27);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 0, 21);
    instructions->SetOperation(9, 0, 15);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 1, 5);
    instructions->SetOperation(12, 1, 13);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 1, 26);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 1, 26);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 0, 9);
    instructions->SetOperation(23, 1, 23);
    instructions->SetOperation(24, 0, 7);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 22);
    instructions->SetOperation(30, 0, 6);
    instructions->SetOperation(31, 1, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.603881f;
    data->d[1] = 1.897125f;
    data->d[2] = 0.882113f;
    data->d[3] = 0.000001f;
    data->d[4] = -0.883387f;
    data->d[5] = 0.007341f;
    data->d[6] = 0.442433f;
    data->d[7] = -0.420267f;
    data->d[8] = -1.489731f;
    data->d[9] = 1.857576f;
    data->d[10] = 1.722906f;
    data->d[11] = -0.080185f;
    data->d[12] = 0.272475f;
    data->d[13] = -0.204548f;
    data->d[14] = -2.312757f;
    data->d[15] = -0.381497f;
    data->d[16] = 0.757051f;
    data->d[17] = 2.287738f;
    data->d[18] = 1.785334f;
    data->d[19] = -0.608473f;
    data->d[20] = -0.000023f;
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
    *(result->MinResult()) = 0.000065f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.584144f;
    data->d[1] = 1.805339f;
    data->d[2] = 2.326538f;
    data->d[3] = 0.000211f;
    data->d[4] = -0.030140f;
    data->d[5] = -0.000056f;
    data->d[6] = 0.049675f;
    data->d[7] = -2.067492f;
    data->d[8] = 1.661525f;
    data->d[9] = 2.586420f;
    data->d[10] = -1.092352f;
    data->d[11] = 0.009631f;
    data->d[12] = 1.624043f;
    data->d[13] = 2.629456f;
    data->d[14] = -1.721091f;
    data->d[15] = 0.390310f;
    data->d[16] = 0.034762f;
    data->d[17] = -0.857464f;
    data->d[18] = -1.762157f;
    data->d[19] = -1.005503f;
    data->d[20] = -0.118031f;
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
    *(result->MinResult()) = 0.000032f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.663439f;
    data->d[1] = -1.736995f;
    data->d[2] = -0.401797f;
    data->d[3] = -0.000122f;
    data->d[4] = -0.727034f;
    data->d[5] = 0.389641f;
    data->d[6] = -0.622911f;
    data->d[7] = -0.592758f;
    data->d[8] = -0.233519f;
    data->d[9] = 0.403347f;
    data->d[10] = 2.523455f;
    data->d[11] = -0.192085f;
    data->d[12] = 0.423922f;
    data->d[13] = 0.334106f;
    data->d[14] = 1.811941f;
    data->d[15] = 0.486969f;
    data->d[16] = -0.859302f;
    data->d[17] = 0.777421f;
    data->d[18] = -1.607133f;
    data->d[19] = -0.556031f;
    data->d[20] = 0.523314f;
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
    *(result->MinResult()) = 0.000105f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000105f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 49;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 16974173491398962192;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
