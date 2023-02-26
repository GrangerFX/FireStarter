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
    instructions->SetOperation(0, 1, 2);
    instructions->SetOperation(1, 0, 29);
    instructions->SetOperation(2, 0, 11);
    instructions->SetOperation(3, 1, 30);
    instructions->SetOperation(4, 0, 22);
    instructions->SetOperation(5, 0, 8);
    instructions->SetOperation(6, 1, 9);
    instructions->SetOperation(7, 1, 19);
    instructions->SetOperation(8, 0, 22);
    instructions->SetOperation(9, 1, 1);
    instructions->SetOperation(10, 1, 4);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 0, 5);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 1, 2);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 1, 18);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 0, 20);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 23);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 0, 27);
    instructions->SetOperation(26, 0, 29);
    instructions->SetOperation(27, 0, 7);
    instructions->SetOperation(28, 0, 27);
    instructions->SetOperation(29, 0, 13);
    instructions->SetOperation(30, 1, 14);
    instructions->SetOperation(31, 0, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.571781f;
    data->d[1] = -1.022568f;
    data->d[2] = -1.635864f;
    data->d[3] = 1.378297f;
    data->d[4] = 0.154651f;
    data->d[5] = 1.669099f;
    data->d[6] = -0.552292f;
    data->d[7] = -0.675945f;
    data->d[8] = 0.158336f;
    data->d[9] = -5.442193f;
    data->d[10] = 1.750609f;
    data->d[11] = 0.236786f;
    data->d[12] = -12.237585f;
    data->d[13] = 0.192415f;
    data->d[14] = 0.363413f;
    data->d[15] = -0.080983f;
    data->d[16] = 0.047072f;
    data->d[17] = -0.744024f;
    data->d[18] = -0.224746f;
    data->d[19] = -1.041597f;
    data->d[20] = 0.208881f;
    data->d[21] = 0.477509f;
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
    *(result->MinResult()) = 0.000203f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.497235f;
    data->d[1] = 1.122647f;
    data->d[2] = -1.151927f;
    data->d[3] = 0.425810f;
    data->d[4] = -0.715659f;
    data->d[5] = -0.255217f;
    data->d[6] = 0.230404f;
    data->d[7] = -0.169793f;
    data->d[8] = -0.079648f;
    data->d[9] = 0.276184f;
    data->d[10] = 5.811749f;
    data->d[11] = 0.348260f;
    data->d[12] = -0.943268f;
    data->d[13] = 2.733987f;
    data->d[14] = -1.382207f;
    data->d[15] = 0.295806f;
    data->d[16] = -1.214617f;
    data->d[17] = -0.038408f;
    data->d[18] = -0.128019f;
    data->d[19] = 0.627322f;
    data->d[20] = 1.067382f;
    data->d[21] = -0.129810f;
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
    *(result->MinResult()) = 0.000208f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -4.185899f;
    data->d[1] = 0.359541f;
    data->d[2] = 1.515580f;
    data->d[3] = 0.961802f;
    data->d[4] = 0.765339f;
    data->d[5] = 2.297731f;
    data->d[6] = -0.642637f;
    data->d[7] = 0.474159f;
    data->d[8] = 1.223678f;
    data->d[9] = -11.799623f;
    data->d[10] = 0.584810f;
    data->d[11] = 0.148024f;
    data->d[12] = -1.247599f;
    data->d[13] = 2.449790f;
    data->d[14] = -0.385452f;
    data->d[15] = -0.041514f;
    data->d[16] = 0.159681f;
    data->d[17] = 0.960770f;
    data->d[18] = 0.396498f;
    data->d[19] = -1.264742f;
    data->d[20] = 1.585241f;
    data->d[21] = 0.383114f;
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
    *(result->MinResult()) = 0.000469f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000469f;
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
    state.m_seed = 9751262799335405628;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
