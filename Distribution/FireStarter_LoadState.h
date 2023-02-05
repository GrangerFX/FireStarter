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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 1, 27);
    instructions->SetOperation(3, 1, 6);
    instructions->SetOperation(4, 1, 25);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 0, 14);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 1, 29);
    instructions->SetOperation(12, 0, 31);
    instructions->SetOperation(13, 1, 4);
    instructions->SetOperation(14, 1, 3);
    instructions->SetOperation(15, 0, 16);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 0, 30);
    instructions->SetOperation(18, 0, 7);
    instructions->SetOperation(19, 1, 0);
    instructions->SetOperation(20, 0, 23);
    instructions->SetOperation(21, 1, 22);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 0, 12);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 15);
    instructions->SetOperation(31, 0, 27);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.966700f;
    data->d[1] = 0.380713f;
    data->d[2] = 0.748713f;
    data->d[3] = 2.360075f;
    data->d[4] = -2.294389f;
    data->d[5] = -0.557563f;
    data->d[6] = -0.083899f;
    data->d[7] = 0.083748f;
    data->d[8] = -0.917595f;
    data->d[9] = -0.766175f;
    data->d[10] = -1.649637f;
    data->d[11] = 1.067375f;
    data->d[12] = 1.074983f;
    data->d[13] = 0.780174f;
    data->d[14] = 0.053207f;
    data->d[15] = -0.628072f;
    data->d[16] = 0.455062f;
    data->d[17] = 0.694411f;
    data->d[18] = 1.059869f;
    data->d[19] = 0.943346f;
    data->d[20] = -0.570666f;
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
    *(result->MinResult()) = 0.000098f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.188115f;
    data->d[1] = -0.131268f;
    data->d[2] = 0.366906f;
    data->d[3] = -1.636653f;
    data->d[4] = 2.379284f;
    data->d[5] = -4.509065f;
    data->d[6] = 0.004279f;
    data->d[7] = -4.358244f;
    data->d[8] = 0.242934f;
    data->d[9] = -0.542161f;
    data->d[10] = -5.766656f;
    data->d[11] = 0.028970f;
    data->d[12] = -0.943204f;
    data->d[13] = -1.677991f;
    data->d[14] = -1.622303f;
    data->d[15] = -0.082374f;
    data->d[16] = 1.233532f;
    data->d[17] = 0.291413f;
    data->d[18] = 0.942107f;
    data->d[19] = -1.485973f;
    data->d[20] = -0.121840f;
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
    *(result->MinResult()) = 0.000128f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.739619f;
    data->d[1] = -0.614322f;
    data->d[2] = -1.068643f;
    data->d[3] = 1.866814f;
    data->d[4] = 1.459623f;
    data->d[5] = 0.309921f;
    data->d[6] = 1.087277f;
    data->d[7] = 0.099818f;
    data->d[8] = -0.003634f;
    data->d[9] = 0.365391f;
    data->d[10] = 1.805264f;
    data->d[11] = 0.880555f;
    data->d[12] = -1.796551f;
    data->d[13] = -1.758910f;
    data->d[14] = -1.203058f;
    data->d[15] = -0.547480f;
    data->d[16] = 0.993672f;
    data->d[17] = 0.329276f;
    data->d[18] = 0.775002f;
    data->d[19] = 1.929460f;
    data->d[20] = -0.576521f;
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
    *(result->MinResult()) = 0.000117f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000128f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 109;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
