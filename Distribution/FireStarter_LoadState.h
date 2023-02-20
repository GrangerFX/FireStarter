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
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 21);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 13);
    instructions->SetOperation(3, 1, 15);
    instructions->SetOperation(4, 0, 30);
    instructions->SetOperation(5, 1, 13);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 1, 10);
    instructions->SetOperation(8, 1, 14);
    instructions->SetOperation(9, 0, 18);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 3);
    instructions->SetOperation(13, 1, 19);
    instructions->SetOperation(14, 0, 17);
    instructions->SetOperation(15, 0, 29);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 0, 9);
    instructions->SetOperation(18, 0, 24);
    instructions->SetOperation(19, 0, 17);
    instructions->SetOperation(20, 1, 16);
    instructions->SetOperation(21, 1, 5);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 0, 20);
    instructions->SetOperation(24, 1, 6);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 0, 29);
    instructions->SetOperation(28, 1, 2);
    instructions->SetOperation(29, 0, 21);
    instructions->SetOperation(30, 1, 16);
    instructions->SetOperation(31, 1, 13);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.512880f;
    data->d[1] = -0.354772f;
    data->d[2] = 0.747001f;
    data->d[3] = 0.624247f;
    data->d[4] = -0.335438f;
    data->d[5] = 0.625171f;
    data->d[6] = -0.632219f;
    data->d[7] = 0.688907f;
    data->d[8] = -0.246729f;
    data->d[9] = 1.806445f;
    data->d[10] = 1.265955f;
    data->d[11] = -0.649037f;
    data->d[12] = 1.369931f;
    data->d[13] = 0.880585f;
    data->d[14] = 0.928633f;
    data->d[15] = -1.478711f;
    data->d[16] = 0.899943f;
    data->d[17] = -0.887804f;
    data->d[18] = -1.554945f;
    data->d[19] = 0.724694f;
    data->d[20] = 0.584458f;
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
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.915295f;
    data->d[1] = 1.154738f;
    data->d[2] = 0.519695f;
    data->d[3] = 2.255312f;
    data->d[4] = -0.406446f;
    data->d[5] = 1.247705f;
    data->d[6] = -0.415164f;
    data->d[7] = -1.445703f;
    data->d[8] = 0.115597f;
    data->d[9] = -0.561230f;
    data->d[10] = -1.759033f;
    data->d[11] = -0.627185f;
    data->d[12] = -1.934618f;
    data->d[13] = -0.192996f;
    data->d[14] = 1.168279f;
    data->d[15] = 1.583852f;
    data->d[16] = -0.022077f;
    data->d[17] = 1.552960f;
    data->d[18] = -1.459999f;
    data->d[19] = -0.996459f;
    data->d[20] = -0.733007f;
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
    *(result->MinResult()) = 0.000155f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.448342f;
    data->d[1] = -0.246648f;
    data->d[2] = 0.028850f;
    data->d[3] = -1.803402f;
    data->d[4] = -0.177872f;
    data->d[5] = 0.250947f;
    data->d[6] = 0.750791f;
    data->d[7] = -1.175415f;
    data->d[8] = 1.101168f;
    data->d[9] = -0.539357f;
    data->d[10] = -0.235418f;
    data->d[11] = -0.362647f;
    data->d[12] = -1.193636f;
    data->d[13] = 1.880687f;
    data->d[14] = 1.959372f;
    data->d[15] = -1.245022f;
    data->d[16] = 0.435090f;
    data->d[17] = -1.102075f;
    data->d[18] = 4.047503f;
    data->d[19] = 0.649775f;
    data->d[20] = 0.347010f;
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
    *(result->MinResult()) = 0.000448f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000448f;
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
    state.m_test = 0;
    state.m_seed = 215402887881604346;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
